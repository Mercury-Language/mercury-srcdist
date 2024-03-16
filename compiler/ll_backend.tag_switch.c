/*
** Automatically generated from `tag_switch.m'
** by the Mercury compiler,
** version rotd-2024-03-16
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


// :- module ll_backend.tag_switch.
// :- implementation.

/*
INIT mercury__ll_backend__tag_switch__init
ENDINIT
*/

#include "ll_backend.tag_switch.mih"


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
#include "uint.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.tag_switch_util.mih"
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




static const MR_FA_TypeInfo_Struct2 ll_backend__tag_switch__pair__ti_pair_2builtin__type_ctor_info_uint_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_uint_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__pair__pti_pair_2__plain_builtin__type_ctor_info_uint_0__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__backend_libs__tag_switch_util__pti_single_ptag_case_1__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__tag_switch__cord__ti_cord_1builtin__type_ctor_info_uint_0;

static const MR_PseudoTypeInfo ll_backend__tag_switch__ll_backend__tag_switch__field_types_bitmap_word_0_0[3];

static const MR_ConstString ll_backend__tag_switch__ll_backend__tag_switch__field_names_bitmap_word_0_0[3];

static const MR_DuFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__du_functor_desc_bitmap_word_0_0;

static const MR_DuFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__du_stag_ordered_bitmap_word_0_0[1];

static const MR_DuPtagLayout ll_backend__tag_switch__ll_backend__tag_switch__du_ptag_ordered_bitmap_word_0[1];

static const MR_DuFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__du_name_ordered_bitmap_word_0[1];

static const MR_Integer ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_bitmap_word_0[1];

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_0;

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_1;

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_2;

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_3;

static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_ordinal_ordered_switch_method_0[4];

static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_name_ordered_switch_method_0[4];

static const MR_Integer ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_switch_method_0[4];

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_tag_access_count_0_0;

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_tag_access_count_0_1;

static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_ordinal_ordered_tag_access_count_0[2];

static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_name_ordered_tag_access_count_0[2];

static const MR_Integer ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_tag_access_count_0[2];

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__1031__1_2_p_0(
  MR_Unsigned LoRangeMax_28,
  MR_Word LambdaHeadVar__1_65);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__1020__1_2_p_0(
  MR_Unsigned MinSectag_14,
  MR_Unsigned CurSectagPrime_23);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__970__1_2_p_0(
  MR_Word Cases_7,
  MR_Word HeadVar__2_18);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__645__1_2_p_0(
  uint8_t LoRangeMax_33,
  MR_Word LambdaHeadVar__1_70);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__633__1_2_p_0(
  MR_Word MainPtag_29,
  MR_Word HeadVar__2_61);

static void MR_CALL 
ll_backend__tag_switch____Compare____tag_access_count_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____tag_access_count_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__tag_switch____Compare____bitmap_word_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____bitmap_word_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
ll_backend__tag_switch__ptag_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0_1(
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

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_12_p_0(
  MR_Word VarRval_13,
  MR_Word PtagRval_14,
  MR_Word SectagReg_15,
  MR_Word MaybeFailLabel_16,
  MR_Word SinglePtagGroups_17,
  uint8_t MinPtag_18,
  uint8_t MaxPtag_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_49,
  MR_Word * STATE_VARIABLE_CaseLabelMap_50,
  MR_Word STATE_VARIABLE_CI_0_51,
  MR_Word * STATE_VARIABLE_CI_52);

static MR_Word MR_CALL 
ll_backend__tag_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_116_97_103_95_99_97_115_101_95_103_114_111_117_112_95_109_97_105_110_95_112_116_97_103_95_95_91_49_93_95_48_1_f_0(
  MR_Word PtagGroup_3);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_11_p_0(
  MR_Word CaseLabelMap_12,
  MR_Word VarRval_13,
  MR_Word SectagReg_14,
  MR_Word MaybeFailLabel_15,
  MR_Word SinglePtagGroups_16,
  uint8_t CurPtagUint8_17,
  uint8_t MaxPtagUint8_18,
  MR_Word * TargetMaybeLabels_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_54,
  MR_Word * STATE_VARIABLE_CI_55);

static MR_Box MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0(
  MR_Word VarRval_14,
  MR_Word PtagRval_15,
  MR_Word SectagReg_16,
  MR_Word MaybeFailLabel_17,
  MR_Word HeadPtagGroup_18,
  MR_Word TailPtagGroups_19,
  MR_Word STATE_VARIABLE_TryChainCode_0_32,
  MR_Word STATE_VARIABLE_GroupsCode_0_33,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_34,
  MR_Word * STATE_VARIABLE_CaseLabelMap_35,
  MR_Word STATE_VARIABLE_CI_0_36,
  MR_Word * STATE_VARIABLE_CI_37);

static MR_Box MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_13_p_0(
  MR_Word VarRval_14,
  MR_Word PtagRval_15,
  MR_Word SectagReg_16,
  MR_Word MaybeFailLabel_17,
  MR_Word PtagGroup_18,
  MR_Word STATE_VARIABLE_TryChainCode_0_30,
  MR_Word * STATE_VARIABLE_TryChainCode_31,
  MR_Word STATE_VARIABLE_GroupsCode_0_32,
  MR_Word * STATE_VARIABLE_GroupsCode_33,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_34,
  MR_Word * STATE_VARIABLE_CaseLabelMap_35,
  MR_Word STATE_VARIABLE_CI_0_36,
  MR_Word * STATE_VARIABLE_CI_37);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(
  MR_Word VarRval_12,
  MR_Word PtagRval_13,
  MR_Word SectagReg_14,
  MR_Word MaybeFailLabel_15,
  MR_Word HeadPtagGroup_16,
  MR_Word TailPtagGroups_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_27,
  MR_Word * STATE_VARIABLE_CaseLabelMap_28,
  MR_Word STATE_VARIABLE_CI_0_29,
  MR_Word * STATE_VARIABLE_CI_30);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_group_10_p_0(
  MR_Word VarRval_11,
  MR_Word PtagRval_12,
  MR_Word SectagReg_13,
  MR_Word MaybeFailLabel_14,
  MR_Word PtagGroup_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_25,
  MR_Word * STATE_VARIABLE_CaseLabelMap_26,
  MR_Word STATE_VARIABLE_CI_0_27,
  MR_Word * STATE_VARIABLE_CI_28);

static void MR_CALL 
ll_backend__tag_switch__encode_ptags_as_bitmap_loop_4_p_0(
  MR_Word HeadPtag_5,
  MR_Word TailPtags_6,
  MR_Unsigned STATE_VARIABLE_Bitmap_0_11,
  MR_Unsigned * STATE_VARIABLE_Bitmap_12);

static void MR_CALL 
ll_backend__tag_switch__generate_ptag_group_code_9_p_0(
  MR_Word VarRval_10,
  MR_Word SectagReg_11,
  MR_Word MaybeFailLabel_12,
  MR_Word PtagGroup_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_23,
  MR_Word * STATE_VARIABLE_CaseLabelMap_24,
  MR_Word STATE_VARIABLE_CI_0_25,
  MR_Word * STATE_VARIABLE_CI_26);

static MR_Word MR_CALL 
ll_backend__tag_switch__choose_switch_method_2_f_0(
  MR_Word Globals_4,
  MR_Integer NumAlternatives_5);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(
  MR_Word SectagRval_11,
  MR_Word MaybeFailLabel_12,
  MR_Word SectagGoals_13,
  MR_Unsigned MinSectag_14,
  MR_Unsigned MaxSectag_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_45,
  MR_Word * STATE_VARIABLE_CaseLabelMap_46,
  MR_Word STATE_VARIABLE_CI_0_47,
  MR_Word * STATE_VARIABLE_CI_48);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(
  MR_Word MaybeFailLabel_6,
  MR_Word Cases_7,
  MR_Unsigned CurSectag_8,
  MR_Unsigned MaxSectag_9,
  MR_Word * TargetMaybeLabels_10);

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_chain_9_p_0(
  MR_Word WordSize_10,
  MR_Word SectagRval_11,
  MR_Word MaybeFailLabel_12,
  MR_Word HeadCase_13,
  MR_Word TailCases_14,
  MR_Word STATE_VARIABLE_TryChainCode_0_25,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_26,
  MR_Word * STATE_VARIABLE_CaseLabelMap_27);

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_chain_case_6_p_0(
  MR_Word WordSize_7,
  MR_Word CaseLabelMap_8,
  MR_Word SectagRval_9,
  MR_Word Case_10,
  MR_Word STATE_VARIABLE_TryChainCode_0_22,
  MR_Word * STATE_VARIABLE_TryChainCode_23);

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_10_p_0(
  MR_Word WordSize_11,
  MR_Word SectagRval_12,
  MR_Word MaybeFailLabel_13,
  MR_Word HeadCase_14,
  MR_Word TailCases_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_27,
  MR_Word * STATE_VARIABLE_CaseLabelMap_28,
  MR_Word STATE_VARIABLE_CI_0_29,
  MR_Word * STATE_VARIABLE_CI_30);

static MR_Box MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(
  MR_Word WordSize_9,
  MR_Word SectagRval_10,
  MR_Word Case_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_28,
  MR_Word * STATE_VARIABLE_CaseLabelMap_29,
  MR_Word STATE_VARIABLE_CI_0_30,
  MR_Word * STATE_VARIABLE_CI_31);

static void MR_CALL 
ll_backend__tag_switch__test_sectag_is_in_bitmaps_5_p_0(
  MR_Unsigned WordSize_6,
  MR_Word SectagRval_7,
  MR_Word HeadBitmap_8,
  MR_Word TailBitmaps_9,
  MR_Word * TestRval_10);

static void MR_CALL 
ll_backend__tag_switch__encode_sectags_as_bitmaps_loop_5_p_0(
  MR_Unsigned WordSize_6,
  MR_Unsigned HeadN_7,
  MR_Word TailNs_8,
  MR_Word CurBitmapWord0_9,
  MR_Word * BitmapWords_10);

static void MR_CALL 
ll_backend__tag_switch__compute_sectag_rval_7_p_0(
  MR_Word Globals_8,
  MR_Word VarRval_9,
  MR_Word SectagReg_10,
  MR_Word SharedInfo_11,
  MR_Word Method_12,
  MR_Word * SectagRval_13,
  MR_Word * SectagRvalCode_14);

static void MR_CALL 
ll_backend__tag_switch__compute_ptag_rval_7_p_0(
  MR_Word Globals_8,
  MR_Word VarRval_9,
  MR_Word PtagReg_10,
  MR_Integer NumPtagsUsed_11,
  MR_Word Method_12,
  MR_Word * PtagRval_13,
  MR_Word * PtagRvalCode_14);

static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____bitmap_word_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__tag_switch____Compare____bitmap_word_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____tag_access_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__tag_switch____Compare____tag_access_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_1[6][3];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_2[14][2];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_3[5][1];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_5[7][5];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_6[1][14];


struct ll_backend__tag_switch__vector_common_type_4_0_s {
  const MR_Word ll_backend__tag_switch__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct ll_backend__tag_switch__vector_common_type_4_0_s ll_backend__tag_switch_vector_common_4[8];



static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_1[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_2[3]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0])),
    ((MR_Box) (ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[4])),
    ((MR_Box) (ll_backend__tag_switch__generate_primary_try_chain_case_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[4])),
    ((MR_Box) (ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_2[14][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_group_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_single_ptag_case_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_1[2]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__tag_switch_scalar_common_3[1])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) (((MR_Unsigned) 1U << 1))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ll_backend__tag_switch_scalar_common_3[2])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ll_backend__tag_switch_scalar_common_3[3])))
  },
};

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_3[5][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 1U)) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_5[7][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_uint_0ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_uint_0ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ll_backend__tag_switch__pair__pti_pair_2__plain_builtin__type_ctor_info_uint_0__plain_ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint8_0)),
    ((MR_Box) (&ll_backend__tag_switch__backend_libs__tag_switch_util__pti_single_ptag_case_1__plain_ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_6[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_represent_params_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__tag_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0)),
    ((MR_Box) (&ll_backend__tag_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0)),
    ((MR_Box) (&ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};


static /* final */ const struct ll_backend__tag_switch__vector_common_type_4_0_s ll_backend__tag_switch_vector_common_4[8] = {
  /* row   0 */   { (MR_Integer) 1 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 0 },
  /* row   3 */   { (MR_Integer) 1 },
  /* row   4 */   { (MR_Integer) 1 },
  /* row   5 */   { (MR_Integer) 1 },
  /* row   6 */   { (MR_Integer) 0 },
  /* row   7 */   { (MR_Integer) 1 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct2 ll_backend__tag_switch__pair__ti_pair_2builtin__type_ctor_info_uint_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_uint_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__tag_switch__pair__ti_pair_2builtin__type_ctor_info_uint_0ll_backend__llds__type_ctor_info_label_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__pair__pti_pair_2__plain_builtin__type_ctor_info_uint_0__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__backend_libs__tag_switch_util__pti_single_ptag_case_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_single_ptag_case_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_PseudoTypeInfo) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__tag_switch__cord__ti_cord_1builtin__type_ctor_info_uint_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0) }
};

static const MR_PseudoTypeInfo ll_backend__tag_switch__ll_backend__tag_switch__field_types_bitmap_word_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&ll_backend__tag_switch__cord__ti_cord_1builtin__type_ctor_info_uint_0)
};

static const MR_ConstString ll_backend__tag_switch__ll_backend__tag_switch__field_names_bitmap_word_0_0[3] = {
  (MR_String) "bw_start_offset",
  (MR_String) "bw_bitmap_word",
  (MR_String) "bw_values"
};

static const MR_DuFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__du_functor_desc_bitmap_word_0_0 = {
  (MR_String) "bitmap_word",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__tag_switch__ll_backend__tag_switch__field_types_bitmap_word_0_0,
  ll_backend__tag_switch__ll_backend__tag_switch__field_names_bitmap_word_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__du_stag_ordered_bitmap_word_0_0[1] = { &ll_backend__tag_switch__ll_backend__tag_switch__du_functor_desc_bitmap_word_0_0 };

static const MR_DuPtagLayout ll_backend__tag_switch__ll_backend__tag_switch__du_ptag_ordered_bitmap_word_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__tag_switch__ll_backend__tag_switch__du_stag_ordered_bitmap_word_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__du_name_ordered_bitmap_word_0[1] = { &ll_backend__tag_switch__ll_backend__tag_switch__du_functor_desc_bitmap_word_0_0 };

static const MR_Integer ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_bitmap_word_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__tag_switch__ll_backend__tag_switch__type_ctor_info_bitmap_word_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__tag_switch____Unify____bitmap_word_0_0_10001)),
  ((MR_Box) (ll_backend__tag_switch____Compare____bitmap_word_0_0_10001)),
  (MR_String) "ll_backend.tag_switch",
  (MR_String) "bitmap_word",
  { ll_backend__tag_switch__ll_backend__tag_switch__du_name_ordered_bitmap_word_0 },
  { ll_backend__tag_switch__ll_backend__tag_switch__du_ptag_ordered_bitmap_word_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_bitmap_word_0,

};

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_0 = {
  (MR_String) "try_me_else_chain",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_1 = {
  (MR_String) "try_chain",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_2 = {
  (MR_String) "jump_table",
  INT32_C(2)
};

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_3 = {
  (MR_String) "binary_search",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_ordinal_ordered_switch_method_0[4] = {
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_0,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_1,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_2,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_3
};

static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_name_ordered_switch_method_0[4] = {
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_3,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_2,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_1,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_0
};

static const MR_Integer ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_switch_method_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__tag_switch__ll_backend__tag_switch__type_ctor_info_switch_method_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__tag_switch____Unify____switch_method_0_0_10001)),
  ((MR_Box) (ll_backend__tag_switch____Compare____switch_method_0_0_10001)),
  (MR_String) "ll_backend.tag_switch",
  (MR_String) "switch_method",
  { ll_backend__tag_switch__ll_backend__tag_switch__enum_name_ordered_switch_method_0 },
  { ll_backend__tag_switch__ll_backend__tag_switch__enum_ordinal_ordered_switch_method_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_switch_method_0,

};

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_tag_access_count_0_0 = {
  (MR_String) "just_one_access",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_tag_access_count_0_1 = {
  (MR_String) "more_than_one_access",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_ordinal_ordered_tag_access_count_0[2] = {
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_tag_access_count_0_0,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_tag_access_count_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_name_ordered_tag_access_count_0[2] = {
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_tag_access_count_0_0,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_tag_access_count_0_1
};

static const MR_Integer ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_tag_access_count_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__tag_switch__ll_backend__tag_switch__type_ctor_info_tag_access_count_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__tag_switch____Unify____tag_access_count_0_0_10001)),
  ((MR_Box) (ll_backend__tag_switch____Compare____tag_access_count_0_0_10001)),
  (MR_String) "ll_backend.tag_switch",
  (MR_String) "tag_access_count",
  { ll_backend__tag_switch__ll_backend__tag_switch__enum_name_ordered_tag_access_count_0 },
  { ll_backend__tag_switch__ll_backend__tag_switch__enum_ordinal_ordered_tag_access_count_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_tag_access_count_0,

};

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__1031__1_2_p_0(
  MR_Unsigned LoRangeMax_28,
  MR_Word LambdaHeadVar__1_65)
{
  MR_bool succeeded;
  MR_Unsigned Sectag_32 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_65, (MR_Integer) 0))));

  succeeded = (Sectag_32 <= LoRangeMax_28);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__1020__1_2_p_0(
  MR_Unsigned MinSectag_14,
  MR_Unsigned CurSectagPrime_23)
{
  MR_bool succeeded = (MinSectag_14 == CurSectagPrime_23);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__970__1_2_p_0(
  MR_Word Cases_7,
  MR_Word HeadVar__2_18)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[4]), ((MR_Box) (Cases_7)), ((MR_Box) (HeadVar__2_18)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__645__1_2_p_0(
  uint8_t LoRangeMax_33,
  MR_Word LambdaHeadVar__1_70)
{
  MR_bool succeeded;
  uint8_t MainPtagUint8_37;
  MR_Word Var_71;
  MR_Word Var_72 = (MR_Word) (LambdaHeadVar__1_70);

  if (((MR_tag((MR_Word) Var_72)) == (MR_Integer) 0))
  {
    MR_Word WholeInfo_107 = ((MR_Word) ((MR_hl_field(0, Var_72, (MR_Integer) 0))));

    Var_71 = ((MR_Word) ((MR_hl_field(0, WholeInfo_107, (MR_Integer) 0))));
  }
  else
  {
    MR_Word SharedInfo_111 = ((MR_Word) ((MR_hl_field(1, Var_72, (MR_Integer) 0))));

    Var_71 = ((MR_Word) ((MR_hl_field(0, SharedInfo_111, (MR_Integer) 0))));
  }
  MainPtagUint8_37 = (uint8_t) (Var_71);
  succeeded = (MainPtagUint8_37 <= LoRangeMax_33);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__633__1_2_p_0(
  MR_Word MainPtag_29,
  MR_Word HeadVar__2_61)
{
  MR_bool succeeded;
  uint8_t Var_106 = (uint8_t) (HeadVar__2_61);
  uint8_t Var_107 = (uint8_t) (MainPtag_29);

  succeeded = (Var_106 == Var_107);
  return succeeded;
}

static void MR_CALL 
ll_backend__tag_switch____Compare____tag_access_count_0_0(
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
ll_backend__tag_switch____Unify____tag_access_count_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0(
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
ll_backend__tag_switch____Unify____switch_method_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__tag_switch____Compare____bitmap_word_0_0(
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
    MR_Unsigned ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Unsigned ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Unsigned ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Unsigned ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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
        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____bitmap_word_0_0(
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
    MR_Word TypeInfo_11_11;
    MR_Unsigned ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Unsigned ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Unsigned ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Unsigned ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&ll_backend__tag_switch_scalar_common_2[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static MR_String MR_CALL 
ll_backend__tag_switch__ptag_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  uint8_t Ptag_3 = (uint8_t) (HeadVar__1_1);

  HeadVar__2_2 = mercury__string__uint8_to_string_1_f_0(Ptag_3);
  return HeadVar__2_2;
}

static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0_1(
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
ll_backend__tag_switch__generate_tag_switch_14_p_0(
  MR_Word TaggedCases_15,
  MR_Word VarRval_16,
  MR_Word VarType_17,
  MR_String VarName_18,
  MR_Word CodeModel_19,
  MR_Word CanFail_20,
  MR_Word SwitchGoalInfo_21,
  MR_Word EndLabel_22,
  MR_Word STATE_VARIABLE_MaybeEnd_0_62,
  MR_Word * STATE_VARIABLE_MaybeEnd_63,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_64,
  MR_Word * STATE_VARIABLE_CI_65,
  MR_Word CLD0_26)
{
  MR_bool succeeded;
  MR_Word PtagReg_28;
  MR_Word SectagReg_29;
  MR_Word BranchStart_30;
  MR_Word ModuleInfo_31;
  MR_Word Params_32;
  MR_Word CaseLabelMap0_33;
  MR_Word PtagGroups0_35;
  MR_Integer NumPtagsUsed_36;
  uint8_t MaxPtagUint8_37;
  MR_Word Globals_38;
  MR_Word Method_39;
  MR_Word PtagRval_40;
  MR_Word PtagRvalCode_41;
  MR_Word MaybeFailLabel_42;
  MR_Word FailCode_43;
  MR_Word CasesCode_50;
  MR_Word RemainingCasesCode_52;
  MR_Word EndCode_61;
  MR_Word STATE_VARIABLE_CLD_68_68;
  MR_Word STATE_VARIABLE_CLD_70_70;
  MR_Word STATE_VARIABLE_CLD_71_71;
  MR_Word STATE_VARIABLE_CLD_72_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word STATE_VARIABLE_CI_76_76;
  MR_Word STATE_VARIABLE_CI_83_83;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Box conv7_CaseLabelMap0_33;
  MR_Box conv6_STATE_VARIABLE_MaybeEnd_63;
  MR_Box conv5_STATE_VARIABLE_CI_76_76;
  MR_Box conv4_Var_34;

  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &PtagReg_28, CLD0_26, &STATE_VARIABLE_CLD_68_68);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &SectagReg_29, STATE_VARIABLE_CLD_68_68, &STATE_VARIABLE_CLD_70_70);
  ll_backend__code_loc_dep__release_reg_3_p_0(PtagReg_28, STATE_VARIABLE_CLD_70_70, &STATE_VARIABLE_CLD_71_71);
  ll_backend__code_loc_dep__release_reg_3_p_0(SectagReg_29, STATE_VARIABLE_CLD_71_71, &STATE_VARIABLE_CLD_72_72);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_72_72, &BranchStart_30);
  ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_64, &ModuleInfo_31);
  {
    Params_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_32, 0) = ((MR_Box) (VarName_18));
    MR_hl_field(0, Params_32, 1) = ((MR_Box) (SwitchGoalInfo_21));
    MR_hl_field(0, Params_32, 2) = (MR_Box) ((MR_Unsigned) (CodeModel_19));
    MR_hl_field(0, Params_32, 3) = ((MR_Box) (BranchStart_30));
    MR_hl_field(0, Params_32, 4) = ((MR_Box) (EndLabel_22));
  }
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_6[0]));
    MR_hl_field(0, Var_73, 1) = ((MR_Box) (ll_backend__tag_switch__generate_tag_switch_14_p_0_1));
    MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_73, 3) = ((MR_Box) (Params_32));
  }
  Var_74 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0));
  backend_libs__tag_switch_util__group_cases_by_ptag_15_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[0]), (MR_Word) (&ll_backend__tag_switch_scalar_common_2[0]), (MR_Word) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), ModuleInfo_31, VarType_17, TaggedCases_15, Var_73, ((MR_Box) (Var_74)), &conv7_CaseLabelMap0_33, ((MR_Box) (STATE_VARIABLE_MaybeEnd_0_62)), &conv6_STATE_VARIABLE_MaybeEnd_63, ((MR_Box) (STATE_VARIABLE_CI_0_64)), &conv5_STATE_VARIABLE_CI_76_76, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_34, &PtagGroups0_35, &NumPtagsUsed_36, &MaxPtagUint8_37);
  CaseLabelMap0_33 = ((MR_Word) (conv7_CaseLabelMap0_33));
  *STATE_VARIABLE_MaybeEnd_63 = ((MR_Word) (conv6_STATE_VARIABLE_MaybeEnd_63));
  STATE_VARIABLE_CI_76_76 = ((MR_Word) (conv5_STATE_VARIABLE_CI_76_76));
  ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_76_76, &Globals_38);
  Method_39 = ll_backend__tag_switch__choose_switch_method_2_f_0(Globals_38, NumPtagsUsed_36);
  ll_backend__tag_switch__compute_ptag_rval_7_p_0(Globals_38, VarRval_16, PtagReg_28, NumPtagsUsed_36, Method_39, &PtagRval_40, &PtagRvalCode_41);
  switch (CanFail_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FailLabel_44;
        MR_Word FailLabelCode_45;
        MR_Word FailureCode_46;
        MR_Word STATE_VARIABLE_CI_78_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word STATE_VARIABLE_CLD_82_82;

        ll_backend__code_info__get_next_label_3_p_0(&FailLabel_44, STATE_VARIABLE_CI_76_76, &STATE_VARIABLE_CI_78_78);
        {
          MaybeFailLabel_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeFailLabel_42, 0) = ((MR_Box) (FailLabel_44));
        }
        {
          Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_80, 1) = ((MR_Box) (FailLabel_44));
        }
        {
          Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_79, 0) = ((MR_Box) (Var_80));
          MR_hl_field(0, Var_79, 1) = ((MR_Box) ((MR_String) "switch has failed"));
        }
        FailLabelCode_45 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_79)));
        ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_30, STATE_VARIABLE_CI_78_78, &STATE_VARIABLE_CLD_82_82);
        ll_backend__code_loc_dep__generate_failure_4_p_0(&FailureCode_46, STATE_VARIABLE_CI_78_78, &STATE_VARIABLE_CI_83_83, STATE_VARIABLE_CLD_82_82);
        FailCode_43 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailLabelCode_45, FailureCode_46);
      }
      break;
    case (MR_Integer) 1:
      {
        MaybeFailLabel_42 = (MR_Word) ((MR_Unsigned) 0U);
        FailCode_43 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        STATE_VARIABLE_CI_83_83 = STATE_VARIABLE_CI_76_76;
      }
      break;
  }
  switch (Method_39) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        MR_Word PtagGroups_111;
        MR_Word CaseLabelMap1_112;
        MR_Word _CaseLabelMap_110;

        backend_libs__tag_switch_util__order_ptag_specific_groups_by_value_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), PtagGroups0_35, &PtagGroups_111);
        ll_backend__tag_switch__generate_primary_binary_search_12_p_0(VarRval_16, PtagRval_40, SectagReg_29, MaybeFailLabel_42, PtagGroups_111, UINT8_C(0), MaxPtagUint8_37, &CasesCode_50, CaseLabelMap0_33, &CaseLabelMap1_112, STATE_VARIABLE_CI_83_83, STATE_VARIABLE_CI_65);
        ll_backend__switch_case__add_not_yet_included_cases_3_p_0(&RemainingCasesCode_52, CaseLabelMap1_112, &_CaseLabelMap_110);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CaseLabelMap_57;
        MR_Word TargetMaybeLabels_58;
        MR_Word TableCode_59;
        MR_Word SwitchCode_60;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word PtagGroups_109;

        backend_libs__tag_switch_util__order_ptag_specific_groups_by_value_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), PtagGroups0_35, &PtagGroups_109);
        ll_backend__switch_case__add_not_yet_included_cases_3_p_0(&RemainingCasesCode_52, CaseLabelMap0_33, &CaseLabelMap_57);
        ll_backend__tag_switch__generate_primary_jump_table_11_p_0(CaseLabelMap_57, VarRval_16, SectagReg_29, MaybeFailLabel_42, PtagGroups_109, UINT8_C(0), MaxPtagUint8_37, &TargetMaybeLabels_58, &TableCode_59, STATE_VARIABLE_CI_83_83, STATE_VARIABLE_CI_65);
        {
          Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(3, Var_93, 1) = ((MR_Box) (PtagRval_40));
          MR_hl_field(3, Var_93, 2) = ((MR_Box) (TargetMaybeLabels_58));
        }
        {
          Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_92, 0) = ((MR_Box) (Var_93));
          MR_hl_field(0, Var_92, 1) = ((MR_Box) ((MR_String) "switch on ptag"));
        }
        SwitchCode_60 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_92)));
        CasesCode_50 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SwitchCode_60, TableCode_59);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PtagGroups1_54;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word PtagGroups_104;
        MR_Word HeadPtagGroup_105;
        MR_Word TailPtagGroups_106;
        MR_Word CaseLabelMap1_107;
        MR_Word MostFreqGroup_55;
        MR_Word OtherGroups_56;
        MR_Box conv8_HeadPtagGroup_105;
        MR_Word _CaseLabelMap_103;

        backend_libs__tag_switch_util__order_ptag_groups_by_count_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), PtagGroups0_35, &PtagGroups1_54);
        succeeded = (CanFail_20 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (PtagGroups1_54 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MostFreqGroup_55 = ((MR_Word) ((MR_hl_field(1, PtagGroups1_54, (MR_Integer) 0))));
            OtherGroups_56 = ((MR_Word) ((MR_hl_field(1, PtagGroups1_54, (MR_Integer) 1))));
          }
        }
        if (succeeded)
        {
          MR_Word Var_85;

          {
            Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_85, 0) = ((MR_Box) (MostFreqGroup_55));
            MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          PtagGroups_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[1]), OtherGroups_56, Var_85);
        }
        else
          PtagGroups_104 = PtagGroups1_54;
        mercury__list__det_head_tail_3_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[1]), PtagGroups_104, &conv8_HeadPtagGroup_105, &TailPtagGroups_106);
        HeadPtagGroup_105 = ((MR_Word) (conv8_HeadPtagGroup_105));
        Var_87 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        Var_88 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        ll_backend__tag_switch__generate_primary_try_chain_13_p_0(VarRval_16, PtagRval_40, SectagReg_29, MaybeFailLabel_42, HeadPtagGroup_105, TailPtagGroups_106, Var_87, Var_88, &CasesCode_50, CaseLabelMap0_33, &CaseLabelMap1_107, STATE_VARIABLE_CI_83_83, STATE_VARIABLE_CI_65);
        ll_backend__switch_case__add_not_yet_included_cases_3_p_0(&RemainingCasesCode_52, CaseLabelMap1_107, &_CaseLabelMap_103);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word PtagGroups_47;
        MR_Word HeadPtagGroup_48;
        MR_Word TailPtagGroups_49;
        MR_Word CaseLabelMap1_51;
        MR_Box conv9_HeadPtagGroup_48;
        MR_Word _CaseLabelMap_53;

        backend_libs__tag_switch_util__order_ptag_groups_by_count_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), PtagGroups0_35, &PtagGroups_47);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[1]), PtagGroups_47, &conv9_HeadPtagGroup_48, &TailPtagGroups_49);
        HeadPtagGroup_48 = ((MR_Word) (conv9_HeadPtagGroup_48));
        ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(VarRval_16, PtagRval_40, SectagReg_29, MaybeFailLabel_42, HeadPtagGroup_48, TailPtagGroups_49, &CasesCode_50, CaseLabelMap0_33, &CaseLabelMap1_51, STATE_VARIABLE_CI_83_83, STATE_VARIABLE_CI_65);
        ll_backend__switch_case__add_not_yet_included_cases_3_p_0(&RemainingCasesCode_52, CaseLabelMap1_51, &_CaseLabelMap_53);
      }
      break;
  }
  {
    Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_98, 1) = ((MR_Box) (EndLabel_22));
  }
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_97, 0) = ((MR_Box) (Var_98));
    MR_hl_field(0, Var_97, 1) = ((MR_Box) ((MR_String) "end of tag switch"));
  }
  EndCode_61 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_97)));
  Var_102 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_43, EndCode_61);
  Var_101 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RemainingCasesCode_52, Var_102);
  Var_100 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CasesCode_50, Var_101);
  *Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PtagRvalCode_41, Var_100);
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__645__1_2_p_0(((uint8_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 3))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__633__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_12_p_0(
  MR_Word VarRval_13,
  MR_Word PtagRval_14,
  MR_Word SectagReg_15,
  MR_Word MaybeFailLabel_16,
  MR_Word SinglePtagGroups_17,
  uint8_t MinPtag_18,
  uint8_t MaxPtag_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_49,
  MR_Word * STATE_VARIABLE_CaseLabelMap_50,
  MR_Word STATE_VARIABLE_CI_0_51,
  MR_Word * STATE_VARIABLE_CI_52)
{
  MR_bool succeeded = (MinPtag_18 == MaxPtag_19);

  if (succeeded)
    if ((SinglePtagGroups_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((MaybeFailLabel_16 == (MR_Word) ((MR_Unsigned) 0U)))
        *Code_20 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      else
      {
        MR_Word FailLabel_24 = ((MR_Word) ((MR_hl_field(1, MaybeFailLabel_16, (MR_Integer) 0))));
        MR_String PtagStr_25;
        MR_String Comment_26;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;

        PtagStr_25 = mercury__string__uint8_to_string_1_f_0(MinPtag_18);
        Comment_26 = mercury__string__f_43_43_2_f_0((MR_String) "no code for ptag ", PtagStr_25);
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (FailLabel_24));
        }
        {
          Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_55, 1) = ((MR_Box) (Var_56));
        }
        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(0, Var_54, 1) = ((MR_Box) (Comment_26));
        }
        *Code_20 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_54)));
      }
      *STATE_VARIABLE_CaseLabelMap_50 = STATE_VARIABLE_CaseLabelMap_0_49;
      *STATE_VARIABLE_CI_52 = STATE_VARIABLE_CI_0_51;
    }
    else
    {
      MR_Word Var_109 = ((MR_Word) ((MR_hl_field(1, SinglePtagGroups_17, (MR_Integer) 1))));
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(1, SinglePtagGroups_17, (MR_Integer) 0))));

      if ((Var_109 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PtagGroup_28 = (MR_Word) (Var_110);
        MR_Word MainPtag_29;
        MR_Word Var_58;
        MR_Word Var_61;

        MainPtag_29 = ll_backend__tag_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_116_97_103_95_99_97_115_101_95_103_114_111_117_112_95_109_97_105_110_95_112_116_97_103_95_95_91_49_93_95_48_1_f_0(PtagGroup_28);
        Var_61 = (MR_Word) (MinPtag_18);
        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_58, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[5]));
          MR_hl_field(0, Var_58, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_12_p_0_1));
          MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_58, 3) = ((MR_Box) (MainPtag_29));
          MR_hl_field(0, Var_58, 4) = ((MR_Box) (Var_61));
        }
        mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/12", (MR_String) "cur_primary mismatch");
        ll_backend__tag_switch__generate_ptag_group_code_9_p_0(VarRval_13, SectagReg_15, MaybeFailLabel_16, PtagGroup_28, Code_20, STATE_VARIABLE_CaseLabelMap_0_49, STATE_VARIABLE_CaseLabelMap_50, STATE_VARIABLE_CI_0_51, STATE_VARIABLE_CI_52);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/12", (MR_String) "ptag groups not singleton or empty when binary search ends");
          return;
        }
    }
  else
  {
    uint8_t LoRangeMax_33;
    uint8_t EqHiRangeMin_34;
    MR_Word InLoGroup_35;
    MR_Word LoGroups_38;
    MR_Word EqHiGroups_39;
    MR_Word EqHiLabel_40;
    MR_String IfLoComment_41;
    MR_String EqHiLabelComment_42;
    MR_Word LoRangeMaxConst_43;
    MR_Word TestRval_44;
    MR_Word IfLoCode_45;
    MR_Word EqHiLabelCode_46;
    MR_Word LoRangeCode_47;
    MR_Word EqHiRangeCode_48;
    uint8_t Var_67 = (MinPtag_18 + MaxPtag_19);
    MR_Word STATE_VARIABLE_CI_73_73;
    MR_Word Var_86;
    MR_Integer Var_87;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word STATE_VARIABLE_CaseLabelMap_95_95;
    MR_Word STATE_VARIABLE_CI_96_96;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Unsigned Var_112;
    MR_String Var_113;
    MR_String Var_121;
    MR_Unsigned Var_123;
    MR_String Var_124;
    MR_String Var_131;
    MR_Unsigned Var_134;
    MR_String Var_135;
    MR_String Var_143;
    MR_Unsigned Var_145;
    MR_String Var_146;
    MR_String Var_153;

    LoRangeMax_33 = mercury__uint8__f_47_47_2_f_0(Var_67, UINT8_C(2));
    EqHiRangeMin_34 = (LoRangeMax_33 + UINT8_C(1));
    {
      InLoGroup_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InLoGroup_35, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[6]));
      MR_hl_field(0, InLoGroup_35, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_12_p_0_2));
      MR_hl_field(0, InLoGroup_35, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, InLoGroup_35, 3) = ((MR_Box) (MR_Word) (LoRangeMax_33));
    }
    mercury__list__filter_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[2]), InLoGroup_35, SinglePtagGroups_17, &LoGroups_38, &EqHiGroups_39);
    ll_backend__code_info__get_next_label_3_p_0(&EqHiLabel_40, STATE_VARIABLE_CI_0_51, &STATE_VARIABLE_CI_73_73);
    mercury__string__format__format_cast_uint8_to_uint_2_p_0(LoRangeMax_33, &Var_112);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_3[0]), (MR_Integer) 1, Var_112, &Var_113);
    Var_121 = mercury__string__f_43_43_2_f_0((MR_String) " to ", Var_113);
    mercury__string__format__format_cast_uint8_to_uint_2_p_0(MinPtag_18, &Var_123);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_3[0]), (MR_Integer) 1, Var_123, &Var_124);
    Var_131 = mercury__string__f_43_43_2_f_0(Var_124, Var_121);
    IfLoComment_41 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough for ptags ", Var_131);
    mercury__string__format__format_cast_uint8_to_uint_2_p_0(MaxPtag_19, &Var_134);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_3[0]), (MR_Integer) 1, Var_134, &Var_135);
    Var_143 = mercury__string__f_43_43_2_f_0((MR_String) " to ", Var_135);
    mercury__string__format__format_cast_uint8_to_uint_2_p_0(EqHiRangeMin_34, &Var_145);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_3[0]), (MR_Integer) 1, Var_145, &Var_146);
    Var_153 = mercury__string__f_43_43_2_f_0(Var_146, Var_143);
    EqHiLabelComment_42 = mercury__string__f_43_43_2_f_0((MR_String) "code for ptags ", Var_153);
    Var_87 = mercury__uint8__cast_to_int_1_f_0(LoRangeMax_33);
    {
      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
    }
    {
      LoRangeMaxConst_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, LoRangeMaxConst_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, LoRangeMaxConst_43, 1) = ((MR_Box) (Var_86));
    }
    {
      TestRval_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, TestRval_44, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, TestRval_44, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[6])));
      MR_hl_field(3, TestRval_44, 2) = ((MR_Box) (PtagRval_14));
      MR_hl_field(3, TestRval_44, 3) = ((MR_Box) (LoRangeMaxConst_43));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (EqHiLabel_40));
    }
    {
      Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_91, 1) = ((MR_Box) (TestRval_44));
      MR_hl_field(3, Var_91, 2) = ((MR_Box) (Var_92));
    }
    {
      Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_90, 0) = ((MR_Box) (Var_91));
      MR_hl_field(0, Var_90, 1) = ((MR_Box) (IfLoComment_41));
    }
    IfLoCode_45 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_90)));
    {
      Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_94, 1) = ((MR_Box) (EqHiLabel_40));
    }
    {
      Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(0, Var_93, 1) = ((MR_Box) (EqHiLabelComment_42));
    }
    EqHiLabelCode_46 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_93)));
    ll_backend__tag_switch__generate_primary_binary_search_12_p_0(VarRval_13, PtagRval_14, SectagReg_15, MaybeFailLabel_16, LoGroups_38, MinPtag_18, LoRangeMax_33, &LoRangeCode_47, STATE_VARIABLE_CaseLabelMap_0_49, &STATE_VARIABLE_CaseLabelMap_95_95, STATE_VARIABLE_CI_73_73, &STATE_VARIABLE_CI_96_96);
    ll_backend__tag_switch__generate_primary_binary_search_12_p_0(VarRval_13, PtagRval_14, SectagReg_15, MaybeFailLabel_16, EqHiGroups_39, EqHiRangeMin_34, MaxPtag_19, &EqHiRangeCode_48, STATE_VARIABLE_CaseLabelMap_95_95, STATE_VARIABLE_CaseLabelMap_50, STATE_VARIABLE_CI_96_96, STATE_VARIABLE_CI_52);
    Var_100 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EqHiLabelCode_46, EqHiRangeCode_48);
    Var_99 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LoRangeCode_47, Var_100);
    *Code_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), IfLoCode_45, Var_99);
  }
}

static MR_Word MR_CALL 
ll_backend__tag_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_116_97_103_95_99_97_115_101_95_103_114_111_117_112_95_109_97_105_110_95_112_116_97_103_95_95_91_49_93_95_48_1_f_0(
  MR_Word PtagGroup_3)
{
  MR_Word MainPtag_4;

  if (((MR_tag((MR_Word) PtagGroup_3)) == (MR_Integer) 0))
  {
    MR_Word WholeInfo_5 = ((MR_Word) ((MR_hl_field(0, PtagGroup_3, (MR_Integer) 0))));

    MainPtag_4 = ((MR_Word) ((MR_hl_field(0, WholeInfo_5, (MR_Integer) 0))));
  }
  else
  {
    MR_Word SharedInfo_9 = ((MR_Word) ((MR_hl_field(1, PtagGroup_3, (MR_Integer) 0))));

    MainPtag_4 = ((MR_Word) ((MR_hl_field(0, SharedInfo_9, (MR_Integer) 0))));
  }
  return MainPtag_4;
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_11_p_0(
  MR_Word CaseLabelMap_12,
  MR_Word VarRval_13,
  MR_Word SectagReg_14,
  MR_Word MaybeFailLabel_15,
  MR_Word SinglePtagGroups_16,
  uint8_t CurPtagUint8_17,
  uint8_t MaxPtagUint8_18,
  MR_Word * TargetMaybeLabels_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_54,
  MR_Word * STATE_VARIABLE_CI_55)
{
  MR_bool succeeded = (CurPtagUint8_17 > MaxPtagUint8_18);

  if (succeeded)
  {
    *TargetMaybeLabels_19 = (MR_Word) ((MR_Unsigned) 0U);
    *Code_20 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CI_55 = STATE_VARIABLE_CI_0_54;
  }
  else
  {
    uint8_t NextPtagUint8_22 = (CurPtagUint8_17 + UINT8_C(1));
    MR_Word HeadMaybeTargetLabel_42;
    MR_Word HeadEntryCode_43;
    MR_Word NextSinglePtagGroups_51;
    MR_Word TailTargetMaybeLabels_52;
    MR_Word TailEntriesCode_53;
    MR_Word STATE_VARIABLE_CI_62_62;
    MR_Word SinglePtagGroup_23;
    MR_Word TailSinglePtagGroups_24;
    MR_Word MainPtag_26;
    uint8_t Var_68;

    succeeded = (SinglePtagGroups_16 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SinglePtagGroup_23 = ((MR_Word) ((MR_hl_field(1, SinglePtagGroups_16, (MR_Integer) 0))));
      TailSinglePtagGroups_24 = ((MR_Word) ((MR_hl_field(1, SinglePtagGroups_16, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) SinglePtagGroup_23)) == (MR_Integer) 0))
      {
        MR_Word WholeInfo0_25 = ((MR_Word) ((MR_hl_field(0, SinglePtagGroup_23, (MR_Integer) 0))));

        MainPtag_26 = ((MR_Word) ((MR_hl_field(0, WholeInfo0_25, (MR_Integer) 0))));
      }
      else
      {
        MR_Word SharedInfo0_30 = ((MR_Word) ((MR_hl_field(1, SinglePtagGroup_23, (MR_Integer) 0))));

        MainPtag_26 = ((MR_Word) ((MR_hl_field(0, SharedInfo0_30, (MR_Integer) 0))));
      }
      Var_68 = (uint8_t) (MainPtag_26);
      succeeded = (CurPtagUint8_17 == Var_68);
    }
    if (succeeded)
    {
      if (((MR_tag((MR_Word) SinglePtagGroup_23)) == (MR_Integer) 0))
      {
        MR_Word WholeInfo_37 = ((MR_Word) ((MR_hl_field(0, SinglePtagGroup_23, (MR_Integer) 0))));
        MR_Word Label_41 = ((MR_Word) ((MR_hl_field(0, WholeInfo_37, (MR_Integer) 3))));

        {
          HeadMaybeTargetLabel_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadMaybeTargetLabel_42, 0) = ((MR_Box) (Label_41));
        }
        HeadEntryCode_43 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        STATE_VARIABLE_CI_62_62 = STATE_VARIABLE_CI_0_54;
      }
      else
      {
        MR_Word ThisPtagLabel_45;
        MR_String Comment_46;
        MR_Word LabelCode_47;
        MR_Word PtagGroup_48;
        MR_Word HeadEntryCode0_49;
        MR_Word STATE_VARIABLE_CI_57_57;
        MR_String Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_50;

        ll_backend__code_info__get_next_label_3_p_0(&ThisPtagLabel_45, STATE_VARIABLE_CI_0_54, &STATE_VARIABLE_CI_57_57);
        Var_59 = mercury__string__uint8_to_string_1_f_0(CurPtagUint8_17);
        Comment_46 = mercury__string__f_43_43_2_f_0((MR_String) "start of a shared ptag in ptag jump table: ", Var_59);
        {
          Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_61, 1) = ((MR_Box) (ThisPtagLabel_45));
        }
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(0, Var_60, 1) = ((MR_Box) (Comment_46));
        }
        LabelCode_47 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_60)));
        PtagGroup_48 = (MR_Word) (SinglePtagGroup_23);
        ll_backend__tag_switch__generate_ptag_group_code_9_p_0(VarRval_13, SectagReg_14, MaybeFailLabel_15, PtagGroup_48, &HeadEntryCode0_49, CaseLabelMap_12, &Var_50, STATE_VARIABLE_CI_57_57, &STATE_VARIABLE_CI_62_62);
        {
          HeadMaybeTargetLabel_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadMaybeTargetLabel_42, 0) = ((MR_Box) (ThisPtagLabel_45));
        }
        HeadEntryCode_43 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_47, HeadEntryCode0_49);
      }
      NextSinglePtagGroups_51 = TailSinglePtagGroups_24;
    }
    else
    {
      HeadMaybeTargetLabel_42 = MaybeFailLabel_15;
      HeadEntryCode_43 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      NextSinglePtagGroups_51 = SinglePtagGroups_16;
      STATE_VARIABLE_CI_62_62 = STATE_VARIABLE_CI_0_54;
    }
    ll_backend__tag_switch__generate_primary_jump_table_11_p_0(CaseLabelMap_12, VarRval_13, SectagReg_14, MaybeFailLabel_15, NextSinglePtagGroups_51, NextPtagUint8_22, MaxPtagUint8_18, &TailTargetMaybeLabels_52, &TailEntriesCode_53, STATE_VARIABLE_CI_62_62, STATE_VARIABLE_CI_55);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TargetMaybeLabels_19 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadMaybeTargetLabel_42));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailTargetMaybeLabels_52));
    }
    *Code_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadEntryCode_43, TailEntriesCode_53);
  }
}

static MR_Box MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ll_backend__tag_switch__ptag_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0(
  MR_Word VarRval_14,
  MR_Word PtagRval_15,
  MR_Word SectagReg_16,
  MR_Word MaybeFailLabel_17,
  MR_Word HeadPtagGroup_18,
  MR_Word TailPtagGroups_19,
  MR_Word STATE_VARIABLE_TryChainCode_0_32,
  MR_Word STATE_VARIABLE_GroupsCode_0_33,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_34,
  MR_Word * STATE_VARIABLE_CaseLabelMap_35,
  MR_Word STATE_VARIABLE_CI_0_36,
  MR_Word * STATE_VARIABLE_CI_37)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((TailPtagGroups_19 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MaybeFailLabel_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Comment_29;
        MR_Word CommentCode_30;
        MR_Word GroupCode_31;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_59;
        MR_Word Var_60;

        if (((MR_tag((MR_Word) HeadPtagGroup_18)) == (MR_Integer) 0))
        {
          MR_Word WholeInfo_65 = ((MR_Word) ((MR_hl_field(0, HeadPtagGroup_18, (MR_Integer) 0))));
          MR_Word MainPtag_66 = ((MR_Word) ((MR_hl_field(0, WholeInfo_65, (MR_Integer) 0))));
          MR_Word OtherPtags_67 = ((MR_Word) ((MR_hl_field(0, WholeInfo_65, (MR_Integer) 1))));

          if ((OtherPtags_67 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_77;
            uint8_t Ptag_90 = (uint8_t) (MainPtag_66);

            Var_77 = mercury__string__uint8_to_string_1_f_0(Ptag_90);
            Comment_29 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough to last ptag value: ", Var_77);
          }
          else
          {
            MR_String Var_78;
            MR_String Var_79;
            MR_String Var_80;
            MR_String Var_82;
            MR_String Var_83;
            MR_Word Var_85;
            uint8_t Ptag_91 = (uint8_t) (MainPtag_66);

            Var_79 = mercury__string__uint8_to_string_1_f_0(Ptag_91);
            Var_85 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[5]), OtherPtags_67);
            Var_83 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_85);
            Var_82 = mercury__string__f_43_43_2_f_0(Var_83, (MR_String) ")");
            Var_80 = mercury__string__f_43_43_2_f_0((MR_String) " (shared with ", Var_82);
            Var_78 = mercury__string__f_43_43_2_f_0(Var_79, Var_80);
            Comment_29 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough to last ptag value: ", Var_78);
          }
        }
        else
        {
          MR_Word SharedInfo_70 = ((MR_Word) ((MR_hl_field(1, HeadPtagGroup_18, (MR_Integer) 0))));
          MR_Word MainPtag_93 = ((MR_Word) ((MR_hl_field(0, SharedInfo_70, (MR_Integer) 0))));
          MR_String Var_95;
          uint8_t Ptag_96 = (uint8_t) (MainPtag_93);

          Var_95 = mercury__string__uint8_to_string_1_f_0(Ptag_96);
          Comment_29 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough to last ptag value: ", Var_95);
        }
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (Comment_29));
        }
        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(0, Var_54, 1) = ((MR_Box) ((MR_String) ""));
        }
        CommentCode_30 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_54)));
        ll_backend__tag_switch__generate_ptag_group_code_9_p_0(VarRval_14, SectagReg_16, MaybeFailLabel_17, HeadPtagGroup_18, &GroupCode_31, STATE_VARIABLE_CaseLabelMap_0_34, STATE_VARIABLE_CaseLabelMap_35, STATE_VARIABLE_CI_0_36, STATE_VARIABLE_CI_37);
        Var_60 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GroupCode_31, STATE_VARIABLE_GroupsCode_0_33);
        Var_59 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommentCode_30, Var_60);
        *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_0_32, Var_59);
      }
      else
      {
        MR_Word FailLabel_27 = ((MR_Word) ((MR_hl_field(1, MaybeFailLabel_17, (MR_Integer) 0))));
        MR_Word FailCode_28;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_52;
        MR_Word STATE_VARIABLE_TryChainCode_38_61;
        MR_Word STATE_VARIABLE_GroupsCode_39_62;

        ll_backend__tag_switch__generate_primary_try_chain_case_13_p_0(VarRval_14, PtagRval_15, SectagReg_16, MaybeFailLabel_17, HeadPtagGroup_18, STATE_VARIABLE_TryChainCode_0_32, &STATE_VARIABLE_TryChainCode_38_61, STATE_VARIABLE_GroupsCode_0_33, &STATE_VARIABLE_GroupsCode_39_62, STATE_VARIABLE_CaseLabelMap_0_34, STATE_VARIABLE_CaseLabelMap_35, STATE_VARIABLE_CI_0_36, STATE_VARIABLE_CI_37);
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (FailLabel_27));
        }
        {
          Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_49, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(0, Var_48, 1) = ((MR_Box) ((MR_String) "ptag with no code to handle it"));
        }
        FailCode_28 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_48)));
        Var_52 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_28, STATE_VARIABLE_GroupsCode_39_62);
        *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_38_61, Var_52);
      }
    else
    {
      MR_Word HeadTailPtagGroup_25 = ((MR_Word) ((MR_hl_field(1, TailPtagGroups_19, (MR_Integer) 0))));
      MR_Word TailTailPtagGroups_26 = ((MR_Word) ((MR_hl_field(1, TailPtagGroups_19, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TryChainCode_38_38;
      MR_Word STATE_VARIABLE_GroupsCode_39_39;
      MR_Word STATE_VARIABLE_CaseLabelMap_40_40;
      MR_Word STATE_VARIABLE_CI_41_41;
      MR_Word next_value_of_HeadPtagGroup_18;
      MR_Word next_value_of_TailPtagGroups_19;
      MR_Word next_value_of_STATE_VARIABLE_TryChainCode_0_32;
      MR_Word next_value_of_STATE_VARIABLE_GroupsCode_0_33;
      MR_Word next_value_of_STATE_VARIABLE_CaseLabelMap_0_34;
      MR_Word next_value_of_STATE_VARIABLE_CI_0_36;

      ll_backend__tag_switch__generate_primary_try_chain_case_13_p_0(VarRval_14, PtagRval_15, SectagReg_16, MaybeFailLabel_17, HeadPtagGroup_18, STATE_VARIABLE_TryChainCode_0_32, &STATE_VARIABLE_TryChainCode_38_38, STATE_VARIABLE_GroupsCode_0_33, &STATE_VARIABLE_GroupsCode_39_39, STATE_VARIABLE_CaseLabelMap_0_34, &STATE_VARIABLE_CaseLabelMap_40_40, STATE_VARIABLE_CI_0_36, &STATE_VARIABLE_CI_41_41);
      // direct tailcall eliminated
      ;
      next_value_of_HeadPtagGroup_18 = HeadTailPtagGroup_25;
      next_value_of_TailPtagGroups_19 = TailTailPtagGroups_26;
      next_value_of_STATE_VARIABLE_TryChainCode_0_32 = STATE_VARIABLE_TryChainCode_38_38;
      next_value_of_STATE_VARIABLE_GroupsCode_0_33 = STATE_VARIABLE_GroupsCode_39_39;
      next_value_of_STATE_VARIABLE_CaseLabelMap_0_34 = STATE_VARIABLE_CaseLabelMap_40_40;
      next_value_of_STATE_VARIABLE_CI_0_36 = STATE_VARIABLE_CI_41_41;
      HeadPtagGroup_18 = next_value_of_HeadPtagGroup_18;
      TailPtagGroups_19 = next_value_of_TailPtagGroups_19;
      STATE_VARIABLE_TryChainCode_0_32 = next_value_of_STATE_VARIABLE_TryChainCode_0_32;
      STATE_VARIABLE_GroupsCode_0_33 = next_value_of_STATE_VARIABLE_GroupsCode_0_33;
      STATE_VARIABLE_CaseLabelMap_0_34 = next_value_of_STATE_VARIABLE_CaseLabelMap_0_34;
      STATE_VARIABLE_CI_0_36 = next_value_of_STATE_VARIABLE_CI_0_36;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ll_backend__tag_switch__ptag_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_13_p_0(
  MR_Word VarRval_14,
  MR_Word PtagRval_15,
  MR_Word SectagReg_16,
  MR_Word MaybeFailLabel_17,
  MR_Word PtagGroup_18,
  MR_Word STATE_VARIABLE_TryChainCode_0_30,
  MR_Word * STATE_VARIABLE_TryChainCode_31,
  MR_Word STATE_VARIABLE_GroupsCode_0_32,
  MR_Word * STATE_VARIABLE_GroupsCode_33,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_34,
  MR_Word * STATE_VARIABLE_CaseLabelMap_35,
  MR_Word STATE_VARIABLE_CI_0_36,
  MR_Word * STATE_VARIABLE_CI_37)
{
  MR_Word ThisGroupLabel_23;
  MR_Word IsApplicableTestRval_24;
  MR_Word TestCode_25;
  MR_String Comment_26;
  MR_Word LabelCode_27;
  MR_Word GroupCode_28;
  MR_Word LabelledGroupCode_29;
  MR_Word STATE_VARIABLE_CI_38_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_44;
  MR_Word Var_45;

  ll_backend__code_info__get_next_label_3_p_0(&ThisGroupLabel_23, STATE_VARIABLE_CI_0_36, &STATE_VARIABLE_CI_38_38);
  if (((MR_tag((MR_Word) PtagGroup_18)) == (MR_Integer) 0))
  {
    MR_Word WholeInfo_47 = ((MR_Word) ((MR_hl_field(0, PtagGroup_18, (MR_Integer) 0))));
    MR_Word MainPtag_48 = ((MR_Word) ((MR_hl_field(0, WholeInfo_47, (MR_Integer) 0))));
    MR_Word OtherPtags_49 = ((MR_Word) ((MR_hl_field(0, WholeInfo_47, (MR_Integer) 1))));

    if ((OtherPtags_49 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      uint8_t MainPtagUint8_59 = (uint8_t) (MainPtag_48);
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Integer Var_70;

      Var_70 = mercury__uint8__cast_to_int_1_f_0(MainPtagUint8_59);
      {
        Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
      }
      {
        Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_68, 1) = ((MR_Box) (Var_69));
      }
      {
        IsApplicableTestRval_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, IsApplicableTestRval_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, IsApplicableTestRval_24, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
        MR_hl_field(3, IsApplicableTestRval_24, 2) = ((MR_Box) (PtagRval_15));
        MR_hl_field(3, IsApplicableTestRval_24, 3) = ((MR_Box) (Var_68));
      }
    }
    else
    {
      MR_Unsigned Bitmap_62;
      MR_Word SelectedBitMaskRval_64;
      MR_Word SelectedBitRval_65;
      MR_Word Var_79;
      MR_Word Var_80;
      uint8_t HeadPtagUint8_113 = (uint8_t) (MainPtag_48);
      MR_Word HeadTailPtag_114;
      MR_Word TailTailPtags_115;
      MR_Unsigned STATE_VARIABLE_Bitmap_13_116;
      MR_Unsigned Var_117;
      MR_Unsigned Var_119;

      Var_119 = mercury__uint8__cast_to_uint_1_f_0(HeadPtagUint8_113);
      Var_117 = ((MR_Unsigned) 1U << (int) Var_119);
      STATE_VARIABLE_Bitmap_13_116 = ((MR_Unsigned) 0U | Var_117);
      HeadTailPtag_114 = ((MR_Word) ((MR_hl_field(1, OtherPtags_49, (MR_Integer) 0))));
      TailTailPtags_115 = ((MR_Word) ((MR_hl_field(1, OtherPtags_49, (MR_Integer) 1))));
      ll_backend__tag_switch__encode_ptags_as_bitmap_loop_4_p_0(HeadTailPtag_114, TailTailPtags_115, STATE_VARIABLE_Bitmap_13_116, &Bitmap_62);
      {
        SelectedBitMaskRval_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, SelectedBitMaskRval_64, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, SelectedBitMaskRval_64, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[10])));
        MR_hl_field(3, SelectedBitMaskRval_64, 2) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[11])));
        MR_hl_field(3, SelectedBitMaskRval_64, 3) = ((MR_Box) (PtagRval_15));
      }
      {
        Var_80 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_80, 0) = ((MR_Box) (Bitmap_62));
      }
      {
        Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_79, 1) = ((MR_Box) (Var_80));
      }
      {
        SelectedBitRval_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, SelectedBitRval_65, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, SelectedBitRval_65, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[7])));
        MR_hl_field(3, SelectedBitRval_65, 2) = ((MR_Box) (SelectedBitMaskRval_64));
        MR_hl_field(3, SelectedBitRval_65, 3) = ((MR_Box) (Var_79));
      }
      {
        IsApplicableTestRval_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, IsApplicableTestRval_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, IsApplicableTestRval_24, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[12])));
        MR_hl_field(3, IsApplicableTestRval_24, 2) = ((MR_Box) (SelectedBitRval_65));
        MR_hl_field(3, IsApplicableTestRval_24, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[13])));
      }
    }
  }
  else
  {
    MR_Word SharedInfo_52 = ((MR_Word) ((MR_hl_field(1, PtagGroup_18, (MR_Integer) 0))));
    MR_Word MainPtag_121 = ((MR_Word) ((MR_hl_field(0, SharedInfo_52, (MR_Integer) 0))));
    uint8_t MainPtagUint8_123 = (uint8_t) (MainPtag_121);
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Integer Var_127;

    Var_127 = mercury__uint8__cast_to_int_1_f_0(MainPtagUint8_123);
    {
      Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_127));
    }
    {
      Var_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_125, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_125, 1) = ((MR_Box) (Var_126));
    }
    {
      IsApplicableTestRval_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, IsApplicableTestRval_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, IsApplicableTestRval_24, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
      MR_hl_field(3, IsApplicableTestRval_24, 2) = ((MR_Box) (PtagRval_15));
      MR_hl_field(3, IsApplicableTestRval_24, 3) = ((MR_Box) (Var_125));
    }
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (ThisGroupLabel_23));
  }
  {
    Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_40, 1) = ((MR_Box) (IsApplicableTestRval_24));
    MR_hl_field(3, Var_40, 2) = ((MR_Box) (Var_41));
  }
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) ((MR_String) "test ptag only"));
  }
  TestCode_25 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_39)));
  if (((MR_tag((MR_Word) PtagGroup_18)) == (MR_Integer) 0))
  {
    MR_Word WholeInfo_86 = ((MR_Word) ((MR_hl_field(0, PtagGroup_18, (MR_Integer) 0))));
    MR_Word MainPtag_87 = ((MR_Word) ((MR_hl_field(0, WholeInfo_86, (MR_Integer) 0))));
    MR_Word OtherPtags_88 = ((MR_Word) ((MR_hl_field(0, WholeInfo_86, (MR_Integer) 1))));

    if ((OtherPtags_88 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_98;
      uint8_t Ptag_111 = (uint8_t) (MainPtag_87);

      Var_98 = mercury__string__uint8_to_string_1_f_0(Ptag_111);
      Comment_26 = mercury__string__f_43_43_2_f_0((MR_String) "ptag value(s): ", Var_98);
    }
    else
    {
      MR_String Var_99;
      MR_String Var_100;
      MR_String Var_101;
      MR_String Var_103;
      MR_String Var_104;
      MR_Word Var_106;
      uint8_t Ptag_112 = (uint8_t) (MainPtag_87);

      Var_100 = mercury__string__uint8_to_string_1_f_0(Ptag_112);
      Var_106 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[4]), OtherPtags_88);
      Var_104 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_106);
      Var_103 = mercury__string__f_43_43_2_f_0(Var_104, (MR_String) ")");
      Var_101 = mercury__string__f_43_43_2_f_0((MR_String) " (shared with ", Var_103);
      Var_99 = mercury__string__f_43_43_2_f_0(Var_100, Var_101);
      Comment_26 = mercury__string__f_43_43_2_f_0((MR_String) "ptag value(s): ", Var_99);
    }
  }
  else
  {
    MR_Word SharedInfo_91 = ((MR_Word) ((MR_hl_field(1, PtagGroup_18, (MR_Integer) 0))));
    MR_Word MainPtag_129 = ((MR_Word) ((MR_hl_field(0, SharedInfo_91, (MR_Integer) 0))));
    MR_String Var_131;
    uint8_t Ptag_132 = (uint8_t) (MainPtag_129);

    Var_131 = mercury__string__uint8_to_string_1_f_0(Ptag_132);
    Comment_26 = mercury__string__f_43_43_2_f_0((MR_String) "ptag value(s): ", Var_131);
  }
  {
    Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_45, 1) = ((MR_Box) (ThisGroupLabel_23));
  }
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (Comment_26));
  }
  LabelCode_27 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_44)));
  ll_backend__tag_switch__generate_ptag_group_code_9_p_0(VarRval_14, SectagReg_16, MaybeFailLabel_17, PtagGroup_18, &GroupCode_28, STATE_VARIABLE_CaseLabelMap_0_34, STATE_VARIABLE_CaseLabelMap_35, STATE_VARIABLE_CI_38_38, STATE_VARIABLE_CI_37);
  LabelledGroupCode_29 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_27, GroupCode_28);
  *STATE_VARIABLE_TryChainCode_31 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_0_30, TestCode_25);
  *STATE_VARIABLE_GroupsCode_33 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelledGroupCode_29, STATE_VARIABLE_GroupsCode_0_32);
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(
  MR_Word VarRval_12,
  MR_Word PtagRval_13,
  MR_Word SectagReg_14,
  MR_Word MaybeFailLabel_15,
  MR_Word HeadPtagGroup_16,
  MR_Word TailPtagGroups_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_27,
  MR_Word * STATE_VARIABLE_CaseLabelMap_28,
  MR_Word STATE_VARIABLE_CI_0_29,
  MR_Word * STATE_VARIABLE_CI_30)
{
  if ((TailPtagGroups_17 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((MaybeFailLabel_15 == (MR_Word) ((MR_Unsigned) 0U)))
      ll_backend__tag_switch__generate_ptag_group_code_9_p_0(VarRval_12, SectagReg_14, MaybeFailLabel_15, HeadPtagGroup_16, Code_18, STATE_VARIABLE_CaseLabelMap_0_27, STATE_VARIABLE_CaseLabelMap_28, STATE_VARIABLE_CI_0_29, STATE_VARIABLE_CI_30);
    else
    {
      MR_Word FailLabel_25 = ((MR_Word) ((MR_hl_field(1, MaybeFailLabel_15, (MR_Integer) 0))));
      MR_Word FailCode_26;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word HeadGroupCode_43;
      MR_Word ElseLabel_46;
      MR_Word IsApplicableTestRval_47;
      MR_Word IsNotApplicableRval_48;
      MR_Word TestCode_49;
      MR_Word CaseCode_50;
      MR_Word ElseCode_51;
      MR_Word STATE_VARIABLE_CI_29_52;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_61;

      ll_backend__code_info__get_next_label_3_p_0(&ElseLabel_46, STATE_VARIABLE_CI_0_29, &STATE_VARIABLE_CI_29_52);
      if (((MR_tag((MR_Word) HeadPtagGroup_16)) == (MR_Integer) 0))
      {
        MR_Word WholeInfo_63 = ((MR_Word) ((MR_hl_field(0, HeadPtagGroup_16, (MR_Integer) 0))));
        MR_Word MainPtag_64 = ((MR_Word) ((MR_hl_field(0, WholeInfo_63, (MR_Integer) 0))));
        MR_Word OtherPtags_65 = ((MR_Word) ((MR_hl_field(0, WholeInfo_63, (MR_Integer) 1))));

        if ((OtherPtags_65 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          uint8_t MainPtagUint8_75 = (uint8_t) (MainPtag_64);
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Integer Var_86;

          Var_86 = mercury__uint8__cast_to_int_1_f_0(MainPtagUint8_75);
          {
            Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
          }
          {
            Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_84, 1) = ((MR_Box) (Var_85));
          }
          {
            IsApplicableTestRval_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, IsApplicableTestRval_47, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, IsApplicableTestRval_47, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
            MR_hl_field(3, IsApplicableTestRval_47, 2) = ((MR_Box) (PtagRval_13));
            MR_hl_field(3, IsApplicableTestRval_47, 3) = ((MR_Box) (Var_84));
          }
        }
        else
        {
          MR_Unsigned Bitmap_78;
          MR_Word SelectedBitMaskRval_80;
          MR_Word SelectedBitRval_81;
          MR_Word Var_95;
          MR_Word Var_96;
          uint8_t HeadPtagUint8_102 = (uint8_t) (MainPtag_64);
          MR_Word HeadTailPtag_103;
          MR_Word TailTailPtags_104;
          MR_Unsigned STATE_VARIABLE_Bitmap_13_105;
          MR_Unsigned Var_106;
          MR_Unsigned Var_108;

          Var_108 = mercury__uint8__cast_to_uint_1_f_0(HeadPtagUint8_102);
          Var_106 = ((MR_Unsigned) 1U << (int) Var_108);
          STATE_VARIABLE_Bitmap_13_105 = ((MR_Unsigned) 0U | Var_106);
          HeadTailPtag_103 = ((MR_Word) ((MR_hl_field(1, OtherPtags_65, (MR_Integer) 0))));
          TailTailPtags_104 = ((MR_Word) ((MR_hl_field(1, OtherPtags_65, (MR_Integer) 1))));
          ll_backend__tag_switch__encode_ptags_as_bitmap_loop_4_p_0(HeadTailPtag_103, TailTailPtags_104, STATE_VARIABLE_Bitmap_13_105, &Bitmap_78);
          {
            SelectedBitMaskRval_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SelectedBitMaskRval_80, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, SelectedBitMaskRval_80, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[10])));
            MR_hl_field(3, SelectedBitMaskRval_80, 2) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[11])));
            MR_hl_field(3, SelectedBitMaskRval_80, 3) = ((MR_Box) (PtagRval_13));
          }
          {
            Var_96 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_96, 0) = ((MR_Box) (Bitmap_78));
          }
          {
            Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_95, 1) = ((MR_Box) (Var_96));
          }
          {
            SelectedBitRval_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SelectedBitRval_81, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, SelectedBitRval_81, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[7])));
            MR_hl_field(3, SelectedBitRval_81, 2) = ((MR_Box) (SelectedBitMaskRval_80));
            MR_hl_field(3, SelectedBitRval_81, 3) = ((MR_Box) (Var_95));
          }
          {
            IsApplicableTestRval_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, IsApplicableTestRval_47, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, IsApplicableTestRval_47, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[12])));
            MR_hl_field(3, IsApplicableTestRval_47, 2) = ((MR_Box) (SelectedBitRval_81));
            MR_hl_field(3, IsApplicableTestRval_47, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[13])));
          }
        }
      }
      else
      {
        MR_Word SharedInfo_68 = ((MR_Word) ((MR_hl_field(1, HeadPtagGroup_16, (MR_Integer) 0))));
        MR_Word MainPtag_110 = ((MR_Word) ((MR_hl_field(0, SharedInfo_68, (MR_Integer) 0))));
        uint8_t MainPtagUint8_112 = (uint8_t) (MainPtag_110);
        MR_Word Var_114;
        MR_Word Var_115;
        MR_Integer Var_116;

        Var_116 = mercury__uint8__cast_to_int_1_f_0(MainPtagUint8_112);
        {
          Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_115, 0) = ((MR_Box) (Var_116));
        }
        {
          Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_114, 1) = ((MR_Box) (Var_115));
        }
        {
          IsApplicableTestRval_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, IsApplicableTestRval_47, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, IsApplicableTestRval_47, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
          MR_hl_field(3, IsApplicableTestRval_47, 2) = ((MR_Box) (PtagRval_13));
          MR_hl_field(3, IsApplicableTestRval_47, 3) = ((MR_Box) (Var_114));
        }
      }
      {
        IsNotApplicableRval_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, IsNotApplicableRval_48, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, IsNotApplicableRval_48, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(3, IsNotApplicableRval_48, 2) = ((MR_Box) (IsApplicableTestRval_47));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (ElseLabel_46));
      }
      {
        Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_55, 1) = ((MR_Box) (IsNotApplicableRval_48));
        MR_hl_field(3, Var_55, 2) = ((MR_Box) (Var_56));
      }
      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_54, 0) = ((MR_Box) (Var_55));
        MR_hl_field(0, Var_54, 1) = ((MR_Box) ((MR_String) "test ptag(s) only"));
      }
      TestCode_49 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_54)));
      ll_backend__tag_switch__generate_ptag_group_code_9_p_0(VarRval_12, SectagReg_14, MaybeFailLabel_15, HeadPtagGroup_16, &CaseCode_50, STATE_VARIABLE_CaseLabelMap_0_27, STATE_VARIABLE_CaseLabelMap_28, STATE_VARIABLE_CI_29_52, STATE_VARIABLE_CI_30);
      {
        Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_59, 1) = ((MR_Box) (ElseLabel_46));
      }
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(0, Var_58, 1) = ((MR_Box) ((MR_String) "handle next ptag"));
      }
      ElseCode_51 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_58)));
      Var_61 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CaseCode_50, ElseCode_51);
      HeadGroupCode_43 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_49, Var_61);
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (FailLabel_25));
      }
      {
        Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_38, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(0, Var_37, 1) = ((MR_Box) ((MR_String) "ptag with no code to handle it"));
      }
      FailCode_26 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_37)));
      *Code_18 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadGroupCode_43, FailCode_26);
    }
  else
  {
    MR_Word HeadTailPtagGroup_21 = ((MR_Word) ((MR_hl_field(1, TailPtagGroups_17, (MR_Integer) 0))));
    MR_Word TailTailPtagGroups_22 = ((MR_Word) ((MR_hl_field(1, TailPtagGroups_17, (MR_Integer) 1))));
    MR_Word HeadGroupCode_23;
    MR_Word TailGroupsCode_24;
    MR_Word STATE_VARIABLE_CaseLabelMap_31_31;
    MR_Word STATE_VARIABLE_CI_32_32;

    ll_backend__tag_switch__generate_primary_try_me_else_chain_group_10_p_0(VarRval_12, PtagRval_13, SectagReg_14, MaybeFailLabel_15, HeadPtagGroup_16, &HeadGroupCode_23, STATE_VARIABLE_CaseLabelMap_0_27, &STATE_VARIABLE_CaseLabelMap_31_31, STATE_VARIABLE_CI_0_29, &STATE_VARIABLE_CI_32_32);
    ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(VarRval_12, PtagRval_13, SectagReg_14, MaybeFailLabel_15, HeadTailPtagGroup_21, TailTailPtagGroups_22, &TailGroupsCode_24, STATE_VARIABLE_CaseLabelMap_31_31, STATE_VARIABLE_CaseLabelMap_28, STATE_VARIABLE_CI_32_32, STATE_VARIABLE_CI_30);
    *Code_18 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadGroupCode_23, TailGroupsCode_24);
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_group_10_p_0(
  MR_Word VarRval_11,
  MR_Word PtagRval_12,
  MR_Word SectagReg_13,
  MR_Word MaybeFailLabel_14,
  MR_Word PtagGroup_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_25,
  MR_Word * STATE_VARIABLE_CaseLabelMap_26,
  MR_Word STATE_VARIABLE_CI_0_27,
  MR_Word * STATE_VARIABLE_CI_28)
{
  MR_Word ElseLabel_19;
  MR_Word IsApplicableTestRval_20;
  MR_Word IsNotApplicableRval_21;
  MR_Word TestCode_22;
  MR_Word CaseCode_23;
  MR_Word ElseCode_24;
  MR_Word STATE_VARIABLE_CI_29_29;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_40;

  ll_backend__code_info__get_next_label_3_p_0(&ElseLabel_19, STATE_VARIABLE_CI_0_27, &STATE_VARIABLE_CI_29_29);
  if (((MR_tag((MR_Word) PtagGroup_15)) == (MR_Integer) 0))
  {
    MR_Word WholeInfo_42 = ((MR_Word) ((MR_hl_field(0, PtagGroup_15, (MR_Integer) 0))));
    MR_Word MainPtag_43 = ((MR_Word) ((MR_hl_field(0, WholeInfo_42, (MR_Integer) 0))));
    MR_Word OtherPtags_44 = ((MR_Word) ((MR_hl_field(0, WholeInfo_42, (MR_Integer) 1))));

    if ((OtherPtags_44 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      uint8_t MainPtagUint8_54 = (uint8_t) (MainPtag_43);
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Integer Var_65;

      Var_65 = mercury__uint8__cast_to_int_1_f_0(MainPtagUint8_54);
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
      }
      {
        Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_63, 1) = ((MR_Box) (Var_64));
      }
      {
        IsApplicableTestRval_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, IsApplicableTestRval_20, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, IsApplicableTestRval_20, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
        MR_hl_field(3, IsApplicableTestRval_20, 2) = ((MR_Box) (PtagRval_12));
        MR_hl_field(3, IsApplicableTestRval_20, 3) = ((MR_Box) (Var_63));
      }
    }
    else
    {
      MR_Unsigned Bitmap_57;
      MR_Word SelectedBitMaskRval_59;
      MR_Word SelectedBitRval_60;
      MR_Word Var_74;
      MR_Word Var_75;
      uint8_t HeadPtagUint8_81 = (uint8_t) (MainPtag_43);
      MR_Word HeadTailPtag_82;
      MR_Word TailTailPtags_83;
      MR_Unsigned STATE_VARIABLE_Bitmap_13_84;
      MR_Unsigned Var_85;
      MR_Unsigned Var_87;

      Var_87 = mercury__uint8__cast_to_uint_1_f_0(HeadPtagUint8_81);
      Var_85 = ((MR_Unsigned) 1U << (int) Var_87);
      STATE_VARIABLE_Bitmap_13_84 = ((MR_Unsigned) 0U | Var_85);
      HeadTailPtag_82 = ((MR_Word) ((MR_hl_field(1, OtherPtags_44, (MR_Integer) 0))));
      TailTailPtags_83 = ((MR_Word) ((MR_hl_field(1, OtherPtags_44, (MR_Integer) 1))));
      ll_backend__tag_switch__encode_ptags_as_bitmap_loop_4_p_0(HeadTailPtag_82, TailTailPtags_83, STATE_VARIABLE_Bitmap_13_84, &Bitmap_57);
      {
        SelectedBitMaskRval_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, SelectedBitMaskRval_59, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, SelectedBitMaskRval_59, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[10])));
        MR_hl_field(3, SelectedBitMaskRval_59, 2) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[11])));
        MR_hl_field(3, SelectedBitMaskRval_59, 3) = ((MR_Box) (PtagRval_12));
      }
      {
        Var_75 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_75, 0) = ((MR_Box) (Bitmap_57));
      }
      {
        Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_74, 1) = ((MR_Box) (Var_75));
      }
      {
        SelectedBitRval_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, SelectedBitRval_60, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, SelectedBitRval_60, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[7])));
        MR_hl_field(3, SelectedBitRval_60, 2) = ((MR_Box) (SelectedBitMaskRval_59));
        MR_hl_field(3, SelectedBitRval_60, 3) = ((MR_Box) (Var_74));
      }
      {
        IsApplicableTestRval_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, IsApplicableTestRval_20, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, IsApplicableTestRval_20, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[12])));
        MR_hl_field(3, IsApplicableTestRval_20, 2) = ((MR_Box) (SelectedBitRval_60));
        MR_hl_field(3, IsApplicableTestRval_20, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[13])));
      }
    }
  }
  else
  {
    MR_Word SharedInfo_47 = ((MR_Word) ((MR_hl_field(1, PtagGroup_15, (MR_Integer) 0))));
    MR_Word MainPtag_89 = ((MR_Word) ((MR_hl_field(0, SharedInfo_47, (MR_Integer) 0))));
    uint8_t MainPtagUint8_91 = (uint8_t) (MainPtag_89);
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Integer Var_95;

    Var_95 = mercury__uint8__cast_to_int_1_f_0(MainPtagUint8_91);
    {
      Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
    }
    {
      Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_93, 1) = ((MR_Box) (Var_94));
    }
    {
      IsApplicableTestRval_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, IsApplicableTestRval_20, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, IsApplicableTestRval_20, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
      MR_hl_field(3, IsApplicableTestRval_20, 2) = ((MR_Box) (PtagRval_12));
      MR_hl_field(3, IsApplicableTestRval_20, 3) = ((MR_Box) (Var_93));
    }
  }
  {
    IsNotApplicableRval_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, IsNotApplicableRval_21, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, IsNotApplicableRval_21, 1) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, IsNotApplicableRval_21, 2) = ((MR_Box) (IsApplicableTestRval_20));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (ElseLabel_19));
  }
  {
    Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_32, 1) = ((MR_Box) (IsNotApplicableRval_21));
    MR_hl_field(3, Var_32, 2) = ((MR_Box) (Var_33));
  }
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) ((MR_String) "test ptag(s) only"));
  }
  TestCode_22 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_31)));
  ll_backend__tag_switch__generate_ptag_group_code_9_p_0(VarRval_11, SectagReg_13, MaybeFailLabel_14, PtagGroup_15, &CaseCode_23, STATE_VARIABLE_CaseLabelMap_0_25, STATE_VARIABLE_CaseLabelMap_26, STATE_VARIABLE_CI_29_29, STATE_VARIABLE_CI_28);
  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_38, 1) = ((MR_Box) (ElseLabel_19));
  }
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) ((MR_String) "handle next ptag"));
  }
  ElseCode_24 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_37)));
  Var_40 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CaseCode_23, ElseCode_24);
  *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_22, Var_40);
}

static void MR_CALL 
ll_backend__tag_switch__encode_ptags_as_bitmap_loop_4_p_0(
  MR_Word HeadPtag_5,
  MR_Word TailPtags_6,
  MR_Unsigned STATE_VARIABLE_Bitmap_0_11,
  MR_Unsigned * STATE_VARIABLE_Bitmap_12)
{
  while (MR_TRUE)
  {
    uint8_t HeadPtagUint8_8 = (uint8_t) (HeadPtag_5);
    MR_Unsigned STATE_VARIABLE_Bitmap_13_13;
    MR_Unsigned Var_14;
    MR_Unsigned Var_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_16 = mercury__uint8__cast_to_uint_1_f_0(HeadPtagUint8_8);
    Var_14 = ((MR_Unsigned) 1U << (int) Var_16);
    STATE_VARIABLE_Bitmap_13_13 = (STATE_VARIABLE_Bitmap_0_11 | Var_14);
    if ((TailPtags_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Bitmap_12 = STATE_VARIABLE_Bitmap_13_13;
    else
    {
      MR_Word HeadTailPtag_9 = ((MR_Word) ((MR_hl_field(1, TailPtags_6, (MR_Integer) 0))));
      MR_Word TailTailPtags_10 = ((MR_Word) ((MR_hl_field(1, TailPtags_6, (MR_Integer) 1))));
      MR_Word next_value_of_HeadPtag_5 = HeadTailPtag_9;
      MR_Word next_value_of_TailPtags_6 = TailTailPtags_10;
      MR_Unsigned next_value_of_STATE_VARIABLE_Bitmap_0_11 = STATE_VARIABLE_Bitmap_13_13;

      // direct tailcall eliminated
      ;
      HeadPtag_5 = next_value_of_HeadPtag_5;
      TailPtags_6 = next_value_of_TailPtags_6;
      STATE_VARIABLE_Bitmap_0_11 = next_value_of_STATE_VARIABLE_Bitmap_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_ptag_group_code_9_p_0(
  MR_Word VarRval_10,
  MR_Word SectagReg_11,
  MR_Word MaybeFailLabel_12,
  MR_Word PtagGroup_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_23,
  MR_Word * STATE_VARIABLE_CaseLabelMap_24,
  MR_Word STATE_VARIABLE_CI_0_25,
  MR_Word * STATE_VARIABLE_CI_26)
{
  if (((MR_tag((MR_Word) PtagGroup_13)) == (MR_Integer) 0))
  {
    MR_Word WholeInfo_17 = ((MR_Word) ((MR_hl_field(0, PtagGroup_13, (MR_Integer) 0))));
    MR_Word CaseLabel_21 = ((MR_Word) ((MR_hl_field(0, WholeInfo_17, (MR_Integer) 3))));

    ll_backend__switch_case__generate_case_code_or_jump_4_p_0(CaseLabel_21, Code_14, STATE_VARIABLE_CaseLabelMap_0_23, STATE_VARIABLE_CaseLabelMap_24);
    *STATE_VARIABLE_CI_26 = STATE_VARIABLE_CI_0_25;
  }
  else
  {
    MR_Word SharedInfo_22 = ((MR_Word) ((MR_hl_field(1, PtagGroup_13, (MR_Integer) 0))));
    MR_Unsigned MaxSectag_29 = ((MR_Unsigned) ((MR_hl_field(0, SharedInfo_22, (MR_Integer) 2))));
    MR_Word SectagSwitchComplete_30 = ((MR_Unsigned) ((MR_hl_field(0, SharedInfo_22, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word SectagToLabelMap_32 = ((MR_Word) ((MR_hl_field(0, SharedInfo_22, (MR_Integer) 5))));
    MR_Word LabelToSectagsMap_33 = ((MR_Word) ((MR_hl_field(0, SharedInfo_22, (MR_Integer) 6))));
    MR_Word Globals_34;
    MR_Word Method_35;
    MR_Word SectagRval_36;
    MR_Word SectagRvalCode_37;
    MR_Word MaybeSecFailLabel_38;
    MR_Word CasesCode_44;
    MR_Integer Var_47;
    MR_Integer Var_48;

    ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_25, &Globals_34);
    Var_48 = mercury__uint__cast_to_int_1_f_0(MaxSectag_29);
    Var_47 = (MR_Integer) ((MR_Unsigned) Var_48 + (MR_Unsigned) 1);
    Method_35 = ll_backend__tag_switch__choose_switch_method_2_f_0(Globals_34, Var_47);
    ll_backend__tag_switch__compute_sectag_rval_7_p_0(Globals_34, VarRval_10, SectagReg_11, SharedInfo_22, Method_35, &SectagRval_36, &SectagRvalCode_37);
    switch (SectagSwitchComplete_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        MaybeSecFailLabel_38 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
        if ((MaybeFailLabel_12 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeSecFailLabel_38 = (MR_Word) ((MR_Unsigned) 0U);
        else
          MaybeSecFailLabel_38 = MaybeFailLabel_12;
        break;
    }
    switch (Method_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          MR_Word SectagToLabelAL_60;

          mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), SectagToLabelMap_32, &SectagToLabelAL_60);
          ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(SectagRval_36, MaybeSecFailLabel_38, SectagToLabelAL_60, (MR_Unsigned) 0U, MaxSectag_29, &CasesCode_44, STATE_VARIABLE_CaseLabelMap_0_23, STATE_VARIABLE_CaseLabelMap_24, STATE_VARIABLE_CI_0_25, STATE_VARIABLE_CI_26);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SectagToLabelAL_45;
          MR_Word TargetMaybeLabels_46;
          MR_Word Var_52;
          MR_Word Var_53;

          mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), SectagToLabelMap_32, &SectagToLabelAL_45);
          ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(MaybeSecFailLabel_38, SectagToLabelAL_45, (MR_Unsigned) 0U, MaxSectag_29, &TargetMaybeLabels_46);
          {
            Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(3, Var_53, 1) = ((MR_Box) (SectagRval_36));
            MR_hl_field(3, Var_53, 2) = ((MR_Box) (TargetMaybeLabels_46));
          }
          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_52, 0) = ((MR_Box) (Var_53));
            MR_hl_field(0, Var_52, 1) = ((MR_Box) ((MR_String) "switch on secondary tag"));
          }
          CasesCode_44 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_52)));
          *STATE_VARIABLE_CaseLabelMap_24 = STATE_VARIABLE_CaseLabelMap_0_23;
          *STATE_VARIABLE_CI_26 = STATE_VARIABLE_CI_0_25;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_50;
          MR_Word WordSize_56;
          MR_Word LabelToSectagsAL_57;
          MR_Word HeadLabelToSectagsAL_58;
          MR_Word TailLabelToSectagsAL_59;
          MR_Box conv0_HeadLabelToSectagsAL_58;

          libs__globals__get_word_size_2_p_0(Globals_34, &WordSize_56);
          mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_2[3]), LabelToSectagsMap_33, &LabelToSectagsAL_57);
          mercury__list__det_head_tail_3_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_1[1]), LabelToSectagsAL_57, &conv0_HeadLabelToSectagsAL_58, &TailLabelToSectagsAL_59);
          HeadLabelToSectagsAL_58 = ((MR_Word) (conv0_HeadLabelToSectagsAL_58));
          Var_50 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          ll_backend__tag_switch__generate_secondary_try_chain_9_p_0(WordSize_56, SectagRval_36, MaybeSecFailLabel_38, HeadLabelToSectagsAL_58, TailLabelToSectagsAL_59, Var_50, &CasesCode_44, STATE_VARIABLE_CaseLabelMap_0_23, STATE_VARIABLE_CaseLabelMap_24);
          *STATE_VARIABLE_CI_26 = STATE_VARIABLE_CI_0_25;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word WordSize_40;
          MR_Word LabelToSectagsAL_41;
          MR_Word HeadLabelToSectagsAL_42;
          MR_Word TailLabelToSectagsAL_43;
          MR_Box conv1_HeadLabelToSectagsAL_42;

          libs__globals__get_word_size_2_p_0(Globals_34, &WordSize_40);
          mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_2[3]), LabelToSectagsMap_33, &LabelToSectagsAL_41);
          mercury__list__det_head_tail_3_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_1[1]), LabelToSectagsAL_41, &conv1_HeadLabelToSectagsAL_42, &TailLabelToSectagsAL_43);
          HeadLabelToSectagsAL_42 = ((MR_Word) (conv1_HeadLabelToSectagsAL_42));
          ll_backend__tag_switch__generate_secondary_try_me_else_chain_10_p_0(WordSize_40, SectagRval_36, MaybeSecFailLabel_38, HeadLabelToSectagsAL_42, TailLabelToSectagsAL_43, &CasesCode_44, STATE_VARIABLE_CaseLabelMap_0_23, STATE_VARIABLE_CaseLabelMap_24, STATE_VARIABLE_CI_0_25, STATE_VARIABLE_CI_26);
        }
        break;
    }
    *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SectagRvalCode_37, CasesCode_44);
  }
}

static MR_Word MR_CALL 
ll_backend__tag_switch__choose_switch_method_2_f_0(
  MR_Word Globals_4,
  MR_Integer NumAlternatives_5)
{
  MR_bool succeeded;
  MR_Word Method_6;
  MR_Word OptTuple_7;
  MR_Integer DenseSwitchSize_8;
  MR_Integer TrySwitchSize_9;
  MR_Integer BinarySwitchSize_10;

  libs__globals__get_opt_tuple_2_p_0(Globals_4, &OptTuple_7);
  DenseSwitchSize_8 = ((MR_Integer) ((MR_hl_field(0, OptTuple_7, (MR_Integer) 28))));
  TrySwitchSize_9 = ((MR_Integer) ((MR_hl_field(0, OptTuple_7, (MR_Integer) 34))));
  BinarySwitchSize_10 = ((MR_Integer) ((MR_hl_field(0, OptTuple_7, (MR_Integer) 35))));
  succeeded = (NumAlternatives_5 >= DenseSwitchSize_8);
  if (succeeded)
    Method_6 = (MR_Integer) 2;
  else
  {
    succeeded = (NumAlternatives_5 >= BinarySwitchSize_10);
    if (succeeded)
      Method_6 = (MR_Integer) 3;
    else
    {
      succeeded = (NumAlternatives_5 >= TrySwitchSize_9);
      if (succeeded)
        Method_6 = (MR_Integer) 1;
      else
        Method_6 = (MR_Integer) 0;
    }
  }
  return Method_6;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__1031__1_2_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__1020__1_2_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(
  MR_Word SectagRval_11,
  MR_Word MaybeFailLabel_12,
  MR_Word SectagGoals_13,
  MR_Unsigned MinSectag_14,
  MR_Unsigned MaxSectag_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_45,
  MR_Word * STATE_VARIABLE_CaseLabelMap_46,
  MR_Word STATE_VARIABLE_CI_0_47,
  MR_Word * STATE_VARIABLE_CI_48)
{
  MR_bool succeeded = (MinSectag_14 == MaxSectag_15);

  if (succeeded)
  {
    if ((SectagGoals_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((MaybeFailLabel_12 == (MR_Word) ((MR_Unsigned) 0U)))
        *Code_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      else
      {
        MR_Word FailLabel_20 = ((MR_Word) ((MR_hl_field(1, MaybeFailLabel_12, (MR_Integer) 0))));
        MR_String CurSectagStr_21;
        MR_String Comment_22;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;

        CurSectagStr_21 = mercury__string__uint_to_string_1_f_0(MinSectag_14);
        Comment_22 = mercury__string__f_43_43_2_f_0((MR_String) "no code for ptag ", CurSectagStr_21);
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (FailLabel_20));
        }
        {
          Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_51, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) (Comment_22));
        }
        *Code_16 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_50)));
      }
      *STATE_VARIABLE_CaseLabelMap_46 = STATE_VARIABLE_CaseLabelMap_0_45;
    }
    else
    {
      MR_Word Var_99 = ((MR_Word) ((MR_hl_field(1, SectagGoals_13, (MR_Integer) 1))));
      MR_Word Var_100 = ((MR_Word) ((MR_hl_field(1, SectagGoals_13, (MR_Integer) 0))));

      if ((Var_99 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Unsigned CurSectagPrime_23 = ((MR_Unsigned) ((MR_hl_field(0, Var_100, (MR_Integer) 0))));
        MR_Word CaseLabel_24 = ((MR_Word) ((MR_hl_field(0, Var_100, (MR_Integer) 1))));
        MR_Word Var_55;

        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_55, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[2]));
          MR_hl_field(0, Var_55, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1));
          MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_55, 3) = ((MR_Box) (MinSectag_14));
          MR_hl_field(0, Var_55, 4) = ((MR_Box) (CurSectagPrime_23));
        }
        mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", (MR_String) "cur sectag mismatch");
        ll_backend__switch_case__generate_case_code_or_jump_4_p_0(CaseLabel_24, Code_16, STATE_VARIABLE_CaseLabelMap_0_45, STATE_VARIABLE_CaseLabelMap_46);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", (MR_String) "SectagGoals not singleton or empty when binary search ends");
          return;
        }
    }
    *STATE_VARIABLE_CI_48 = STATE_VARIABLE_CI_0_47;
  }
  else
  {
    MR_Unsigned LoRangeMax_28;
    MR_Unsigned EqHiRangeMin_29;
    MR_Word InLoGroup_30;
    MR_Word LoGoals_34;
    MR_Word EqHiGoals_35;
    MR_Word NewLabel_36;
    MR_String IfComment_37;
    MR_String LabelComment_38;
    MR_Word LoRangeMaxConst_39;
    MR_Word TestRval_40;
    MR_Word IfCode_41;
    MR_Word LabelCode_42;
    MR_Word LoRangeCode_43;
    MR_Word EqHiRangeCode_44;
    MR_Unsigned Var_62 = (MinSectag_14 + MaxSectag_15);
    MR_Word STATE_VARIABLE_CI_66_66;
    MR_Word Var_79;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word STATE_VARIABLE_CaseLabelMap_87_87;
    MR_Word STATE_VARIABLE_CI_88_88;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_String Var_102;
    MR_String Var_110;
    MR_String Var_112;
    MR_String Var_119;
    MR_String Var_122;
    MR_String Var_130;
    MR_String Var_132;
    MR_String Var_139;

    LoRangeMax_28 = mercury__uint__f_47_47_2_f_0(Var_62, (MR_Unsigned) 2U);
    EqHiRangeMin_29 = (LoRangeMax_28 + (MR_Unsigned) 1U);
    {
      InLoGroup_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InLoGroup_30, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[3]));
      MR_hl_field(0, InLoGroup_30, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2));
      MR_hl_field(0, InLoGroup_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, InLoGroup_30, 3) = ((MR_Box) (LoRangeMax_28));
    }
    mercury__list__filter_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_1[2]), InLoGroup_30, SectagGoals_13, &LoGoals_34, &EqHiGoals_35);
    ll_backend__code_info__get_next_label_3_p_0(&NewLabel_36, STATE_VARIABLE_CI_0_47, &STATE_VARIABLE_CI_66_66);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_3[0]), (MR_Integer) 1, LoRangeMax_28, &Var_102);
    Var_110 = mercury__string__f_43_43_2_f_0((MR_String) " to ", Var_102);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_3[0]), (MR_Integer) 1, MinSectag_14, &Var_112);
    Var_119 = mercury__string__f_43_43_2_f_0(Var_112, Var_110);
    IfComment_37 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough for sectags ", Var_119);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_3[0]), (MR_Integer) 1, MaxSectag_15, &Var_122);
    Var_130 = mercury__string__f_43_43_2_f_0((MR_String) " to ", Var_122);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_3[0]), (MR_Integer) 1, EqHiRangeMin_29, &Var_132);
    Var_139 = mercury__string__f_43_43_2_f_0(Var_132, Var_130);
    LabelComment_38 = mercury__string__f_43_43_2_f_0((MR_String) "code for sectags ", Var_139);
    {
      Var_79 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_79, 0) = ((MR_Box) (LoRangeMax_28));
    }
    {
      LoRangeMaxConst_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, LoRangeMaxConst_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, LoRangeMaxConst_39, 1) = ((MR_Box) (Var_79));
    }
    {
      TestRval_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, TestRval_40, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, TestRval_40, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[6])));
      MR_hl_field(3, TestRval_40, 2) = ((MR_Box) (SectagRval_11));
      MR_hl_field(3, TestRval_40, 3) = ((MR_Box) (LoRangeMaxConst_39));
    }
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (NewLabel_36));
    }
    {
      Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_83, 1) = ((MR_Box) (TestRval_40));
      MR_hl_field(3, Var_83, 2) = ((MR_Box) (Var_84));
    }
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_82, 0) = ((MR_Box) (Var_83));
      MR_hl_field(0, Var_82, 1) = ((MR_Box) (IfComment_37));
    }
    IfCode_41 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_82)));
    {
      Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_86, 1) = ((MR_Box) (NewLabel_36));
    }
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_85, 0) = ((MR_Box) (Var_86));
      MR_hl_field(0, Var_85, 1) = ((MR_Box) (LabelComment_38));
    }
    LabelCode_42 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_85)));
    ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(SectagRval_11, MaybeFailLabel_12, LoGoals_34, MinSectag_14, LoRangeMax_28, &LoRangeCode_43, STATE_VARIABLE_CaseLabelMap_0_45, &STATE_VARIABLE_CaseLabelMap_87_87, STATE_VARIABLE_CI_66_66, &STATE_VARIABLE_CI_88_88);
    ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(SectagRval_11, MaybeFailLabel_12, EqHiGoals_35, EqHiRangeMin_29, MaxSectag_15, &EqHiRangeCode_44, STATE_VARIABLE_CaseLabelMap_87_87, STATE_VARIABLE_CaseLabelMap_46, STATE_VARIABLE_CI_88_88, STATE_VARIABLE_CI_48);
    Var_92 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_42, EqHiRangeCode_44);
    Var_91 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LoRangeCode_43, Var_92);
    *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), IfCode_41, Var_91);
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__970__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(
  MR_Word MaybeFailLabel_6,
  MR_Word Cases_7,
  MR_Unsigned CurSectag_8,
  MR_Unsigned MaxSectag_9,
  MR_Word * TargetMaybeLabels_10)
{
  MR_bool succeeded = (CurSectag_8 > MaxSectag_9);

  if (succeeded)
  {
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[1]));
      MR_hl_field(0, Var_15, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1));
      MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_15, 3) = ((MR_Box) (Cases_7));
      MR_hl_field(0, Var_15, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_15, (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_jump_table\'/5", (MR_String) "Cases not empty when reaching limiting secondary tag");
    *TargetMaybeLabels_10 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Unsigned NextSectag_11 = (CurSectag_8 + (MR_Unsigned) 1U);
    MR_Word CaseLabel_12;
    MR_Word TailCases_13;
    MR_Word Var_20;
    MR_Unsigned Var_24;

    succeeded = (Cases_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_20 = ((MR_Word) ((MR_hl_field(1, Cases_7, (MR_Integer) 0))));
      TailCases_13 = ((MR_Word) ((MR_hl_field(1, Cases_7, (MR_Integer) 1))));
      Var_24 = ((MR_Unsigned) ((MR_hl_field(0, Var_20, (MR_Integer) 0))));
      CaseLabel_12 = ((MR_Word) ((MR_hl_field(0, Var_20, (MR_Integer) 1))));
      succeeded = (CurSectag_8 == Var_24);
    }
    if (succeeded)
    {
      MR_Word TailTargetMaybeLabels_14;
      MR_Word Var_21;

      ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(MaybeFailLabel_6, TailCases_13, NextSectag_11, MaxSectag_9, &TailTargetMaybeLabels_14);
      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (CaseLabel_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *TargetMaybeLabels_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailTargetMaybeLabels_14));
      }
    }
    else
    {
      MR_Word TailTargetMaybeLabels_22;

      ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(MaybeFailLabel_6, Cases_7, NextSectag_11, MaxSectag_9, &TailTargetMaybeLabels_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *TargetMaybeLabels_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MaybeFailLabel_6));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailTargetMaybeLabels_22));
      }
    }
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_chain_9_p_0(
  MR_Word WordSize_10,
  MR_Word SectagRval_11,
  MR_Word MaybeFailLabel_12,
  MR_Word HeadCase_13,
  MR_Word TailCases_14,
  MR_Word STATE_VARIABLE_TryChainCode_0_25,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_26,
  MR_Word * STATE_VARIABLE_CaseLabelMap_27)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((TailCases_14 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MaybeFailLabel_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word HeadCaseLabel_22 = ((MR_Word) ((MR_hl_field(0, HeadCase_13, (MR_Integer) 0))));
        MR_Word HeadCode_24;

        ll_backend__switch_case__generate_case_code_or_jump_4_p_0(HeadCaseLabel_22, &HeadCode_24, STATE_VARIABLE_CaseLabelMap_0_26, STATE_VARIABLE_CaseLabelMap_27);
        *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_0_25, HeadCode_24);
      }
      else
      {
        MR_Word FailLabel_20 = ((MR_Word) ((MR_hl_field(1, MaybeFailLabel_12, (MR_Integer) 0))));
        MR_Word FailCode_21;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word STATE_VARIABLE_TryChainCode_28_36;
        MR_Word CaseLabel_39 = ((MR_Word) ((MR_hl_field(0, HeadCase_13, (MR_Integer) 0))));
        MR_Word OoMSectags_40 = ((MR_Word) ((MR_hl_field(0, HeadCase_13, (MR_Integer) 1))));
        MR_Word CaseInfo0_41;
        MR_String Comment_42;
        MR_Unsigned HeadSectag_45;
        MR_Word TailSectags_46;
        MR_Word IsApplicableTestRval_47;
        MR_Word TestCode_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_String Var_52;
        MR_Box conv0_CaseInfo0_41;

        mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), STATE_VARIABLE_CaseLabelMap_0_26, ((MR_Box) (CaseLabel_39)), &conv0_CaseInfo0_41);
        CaseInfo0_41 = ((MR_Word) (conv0_CaseInfo0_41));
        Comment_42 = ((MR_String) ((MR_hl_field(0, CaseInfo0_41, (MR_Integer) 0))));
        HeadSectag_45 = ((MR_Unsigned) ((MR_hl_field(0, OoMSectags_40, (MR_Integer) 0))));
        TailSectags_46 = ((MR_Word) ((MR_hl_field(0, OoMSectags_40, (MR_Integer) 1))));
        if ((TailSectags_46 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Integer SectagInt_69;
          MR_Word Var_72;
          MR_Word Var_73;

          SectagInt_69 = mercury__uint__cast_to_int_1_f_0(HeadSectag_45);
          {
            Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_73, 0) = ((MR_Box) (SectagInt_69));
          }
          {
            Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_72, 1) = ((MR_Box) (Var_73));
          }
          {
            IsApplicableTestRval_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, IsApplicableTestRval_47, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, IsApplicableTestRval_47, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
            MR_hl_field(3, IsApplicableTestRval_47, 2) = ((MR_Box) (SectagRval_11));
            MR_hl_field(3, IsApplicableTestRval_47, 3) = ((MR_Box) (Var_72));
          }
        }
        else
        {
          MR_Unsigned HeadTailSectag_57 = ((MR_Unsigned) ((MR_hl_field(1, TailSectags_46, (MR_Integer) 0))));
          MR_Word TailTailSectags_58 = ((MR_Word) ((MR_hl_field(1, TailSectags_46, (MR_Integer) 1))));

          if ((TailTailSectags_58 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word HeadTestRval_59;
            MR_Word HeadTailTestRval_60;
            MR_Integer SectagInt_74;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Integer SectagInt_79;
            MR_Word Var_82;
            MR_Word Var_83;

            SectagInt_74 = mercury__uint__cast_to_int_1_f_0(HeadSectag_45);
            {
              Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_78, 0) = ((MR_Box) (SectagInt_74));
            }
            {
              Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_77, 1) = ((MR_Box) (Var_78));
            }
            {
              HeadTestRval_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, HeadTestRval_59, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, HeadTestRval_59, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
              MR_hl_field(3, HeadTestRval_59, 2) = ((MR_Box) (SectagRval_11));
              MR_hl_field(3, HeadTestRval_59, 3) = ((MR_Box) (Var_77));
            }
            SectagInt_79 = mercury__uint__cast_to_int_1_f_0(HeadTailSectag_57);
            {
              Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_83, 0) = ((MR_Box) (SectagInt_79));
            }
            {
              Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_82, 1) = ((MR_Box) (Var_83));
            }
            {
              HeadTailTestRval_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, HeadTailTestRval_60, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, HeadTailTestRval_60, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
              MR_hl_field(3, HeadTailTestRval_60, 2) = ((MR_Box) (SectagRval_11));
              MR_hl_field(3, HeadTailTestRval_60, 3) = ((MR_Box) (Var_82));
            }
            {
              IsApplicableTestRval_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, IsApplicableTestRval_47, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, IsApplicableTestRval_47, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, IsApplicableTestRval_47, 2) = ((MR_Box) (HeadTestRval_59));
              MR_hl_field(3, IsApplicableTestRval_47, 3) = ((MR_Box) (HeadTailTestRval_60));
            }
          }
          else
          {
            MR_Word BitmapWord0_63;
            MR_Unsigned WordSize_64;
            MR_Word OoMBitmaps_65;
            MR_Word HeadBitmap_66;
            MR_Word TailBitmaps_67;
            MR_Word Var_85;

            Var_85 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (HeadSectag_45)));
            {
              BitmapWord0_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BitmapWord0_63, 0) = ((MR_Box) (HeadSectag_45));
              MR_hl_field(0, BitmapWord0_63, 1) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(0, BitmapWord0_63, 2) = ((MR_Box) (Var_85));
            }
            switch (WordSize_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                WordSize_64 = (MR_Unsigned) 32U;
                break;
              case (MR_Integer) 1:
                WordSize_64 = (MR_Unsigned) 64U;
                break;
            }
            ll_backend__tag_switch__encode_sectags_as_bitmaps_loop_5_p_0(WordSize_64, HeadTailSectag_57, TailTailSectags_58, BitmapWord0_63, &OoMBitmaps_65);
            HeadBitmap_66 = ((MR_Word) ((MR_hl_field(0, OoMBitmaps_65, (MR_Integer) 0))));
            TailBitmaps_67 = ((MR_Word) ((MR_hl_field(0, OoMBitmaps_65, (MR_Integer) 1))));
            ll_backend__tag_switch__test_sectag_is_in_bitmaps_5_p_0(WordSize_64, SectagRval_11, HeadBitmap_66, TailBitmaps_67, &IsApplicableTestRval_47);
          }
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (CaseLabel_39));
        }
        {
          Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_50, 1) = ((MR_Box) (IsApplicableTestRval_47));
          MR_hl_field(3, Var_50, 2) = ((MR_Box) (Var_51));
        }
        Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "test sec tag only for ", Comment_42);
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(0, Var_49, 1) = ((MR_Box) (Var_52));
        }
        TestCode_48 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_49)));
        STATE_VARIABLE_TryChainCode_28_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_0_25, TestCode_48);
        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (FailLabel_20));
        }
        {
          Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_32, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (Var_32));
          MR_hl_field(0, Var_31, 1) = ((MR_Box) ((MR_String) "secondary tag with no code to handle it"));
        }
        FailCode_21 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_31)));
        *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_28_36, FailCode_21);
        *STATE_VARIABLE_CaseLabelMap_27 = STATE_VARIABLE_CaseLabelMap_0_26;
      }
    else
    {
      MR_Word HeadTailCase_18 = ((MR_Word) ((MR_hl_field(1, TailCases_14, (MR_Integer) 0))));
      MR_Word TailTailCases_19 = ((MR_Word) ((MR_hl_field(1, TailCases_14, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TryChainCode_28_28;
      MR_Word next_value_of_HeadCase_13;
      MR_Word next_value_of_TailCases_14;
      MR_Word next_value_of_STATE_VARIABLE_TryChainCode_0_25;

      ll_backend__tag_switch__generate_secondary_try_chain_case_6_p_0(WordSize_10, STATE_VARIABLE_CaseLabelMap_0_26, SectagRval_11, HeadCase_13, STATE_VARIABLE_TryChainCode_0_25, &STATE_VARIABLE_TryChainCode_28_28);
      // direct tailcall eliminated
      ;
      next_value_of_HeadCase_13 = HeadTailCase_18;
      next_value_of_TailCases_14 = TailTailCases_19;
      next_value_of_STATE_VARIABLE_TryChainCode_0_25 = STATE_VARIABLE_TryChainCode_28_28;
      HeadCase_13 = next_value_of_HeadCase_13;
      TailCases_14 = next_value_of_TailCases_14;
      STATE_VARIABLE_TryChainCode_0_25 = next_value_of_STATE_VARIABLE_TryChainCode_0_25;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_chain_case_6_p_0(
  MR_Word WordSize_7,
  MR_Word CaseLabelMap_8,
  MR_Word SectagRval_9,
  MR_Word Case_10,
  MR_Word STATE_VARIABLE_TryChainCode_0_22,
  MR_Word * STATE_VARIABLE_TryChainCode_23)
{
  MR_Word CaseLabel_12 = ((MR_Word) ((MR_hl_field(0, Case_10, (MR_Integer) 0))));
  MR_Word OoMSectags_13 = ((MR_Word) ((MR_hl_field(0, Case_10, (MR_Integer) 1))));
  MR_Word CaseInfo0_14;
  MR_String Comment_15;
  MR_Unsigned HeadSectag_18;
  MR_Word TailSectags_19;
  MR_Word IsApplicableTestRval_20;
  MR_Word TestCode_21;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_String Var_27;
  MR_Box conv0_CaseInfo0_14;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), CaseLabelMap_8, ((MR_Box) (CaseLabel_12)), &conv0_CaseInfo0_14);
  CaseInfo0_14 = ((MR_Word) (conv0_CaseInfo0_14));
  Comment_15 = ((MR_String) ((MR_hl_field(0, CaseInfo0_14, (MR_Integer) 0))));
  HeadSectag_18 = ((MR_Unsigned) ((MR_hl_field(0, OoMSectags_13, (MR_Integer) 0))));
  TailSectags_19 = ((MR_Word) ((MR_hl_field(0, OoMSectags_13, (MR_Integer) 1))));
  if ((TailSectags_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer SectagInt_44;
    MR_Word Var_47;
    MR_Word Var_48;

    SectagInt_44 = mercury__uint__cast_to_int_1_f_0(HeadSectag_18);
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (SectagInt_44));
    }
    {
      Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_47, 1) = ((MR_Box) (Var_48));
    }
    {
      IsApplicableTestRval_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, IsApplicableTestRval_20, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, IsApplicableTestRval_20, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
      MR_hl_field(3, IsApplicableTestRval_20, 2) = ((MR_Box) (SectagRval_9));
      MR_hl_field(3, IsApplicableTestRval_20, 3) = ((MR_Box) (Var_47));
    }
  }
  else
  {
    MR_Unsigned HeadTailSectag_32 = ((MR_Unsigned) ((MR_hl_field(1, TailSectags_19, (MR_Integer) 0))));
    MR_Word TailTailSectags_33 = ((MR_Word) ((MR_hl_field(1, TailSectags_19, (MR_Integer) 1))));

    if ((TailTailSectags_33 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word HeadTestRval_34;
      MR_Word HeadTailTestRval_35;
      MR_Integer SectagInt_49;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Integer SectagInt_54;
      MR_Word Var_57;
      MR_Word Var_58;

      SectagInt_49 = mercury__uint__cast_to_int_1_f_0(HeadSectag_18);
      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (SectagInt_49));
      }
      {
        Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_52, 1) = ((MR_Box) (Var_53));
      }
      {
        HeadTestRval_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, HeadTestRval_34, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, HeadTestRval_34, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
        MR_hl_field(3, HeadTestRval_34, 2) = ((MR_Box) (SectagRval_9));
        MR_hl_field(3, HeadTestRval_34, 3) = ((MR_Box) (Var_52));
      }
      SectagInt_54 = mercury__uint__cast_to_int_1_f_0(HeadTailSectag_32);
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (SectagInt_54));
      }
      {
        Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_57, 1) = ((MR_Box) (Var_58));
      }
      {
        HeadTailTestRval_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, HeadTailTestRval_35, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, HeadTailTestRval_35, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
        MR_hl_field(3, HeadTailTestRval_35, 2) = ((MR_Box) (SectagRval_9));
        MR_hl_field(3, HeadTailTestRval_35, 3) = ((MR_Box) (Var_57));
      }
      {
        IsApplicableTestRval_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, IsApplicableTestRval_20, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, IsApplicableTestRval_20, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, IsApplicableTestRval_20, 2) = ((MR_Box) (HeadTestRval_34));
        MR_hl_field(3, IsApplicableTestRval_20, 3) = ((MR_Box) (HeadTailTestRval_35));
      }
    }
    else
    {
      MR_Word BitmapWord0_38;
      MR_Unsigned WordSize_39;
      MR_Word OoMBitmaps_40;
      MR_Word HeadBitmap_41;
      MR_Word TailBitmaps_42;
      MR_Word Var_60;

      Var_60 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (HeadSectag_18)));
      {
        BitmapWord0_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BitmapWord0_38, 0) = ((MR_Box) (HeadSectag_18));
        MR_hl_field(0, BitmapWord0_38, 1) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(0, BitmapWord0_38, 2) = ((MR_Box) (Var_60));
      }
      switch (WordSize_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          WordSize_39 = (MR_Unsigned) 32U;
          break;
        case (MR_Integer) 1:
          WordSize_39 = (MR_Unsigned) 64U;
          break;
      }
      ll_backend__tag_switch__encode_sectags_as_bitmaps_loop_5_p_0(WordSize_39, HeadTailSectag_32, TailTailSectags_33, BitmapWord0_38, &OoMBitmaps_40);
      HeadBitmap_41 = ((MR_Word) ((MR_hl_field(0, OoMBitmaps_40, (MR_Integer) 0))));
      TailBitmaps_42 = ((MR_Word) ((MR_hl_field(0, OoMBitmaps_40, (MR_Integer) 1))));
      ll_backend__tag_switch__test_sectag_is_in_bitmaps_5_p_0(WordSize_39, SectagRval_9, HeadBitmap_41, TailBitmaps_42, &IsApplicableTestRval_20);
    }
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (CaseLabel_12));
  }
  {
    Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_25, 1) = ((MR_Box) (IsApplicableTestRval_20));
    MR_hl_field(3, Var_25, 2) = ((MR_Box) (Var_26));
  }
  Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "test sec tag only for ", Comment_15);
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (Var_27));
  }
  TestCode_21 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_24)));
  *STATE_VARIABLE_TryChainCode_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_0_22, TestCode_21);
}

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_10_p_0(
  MR_Word WordSize_11,
  MR_Word SectagRval_12,
  MR_Word MaybeFailLabel_13,
  MR_Word HeadCase_14,
  MR_Word TailCases_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_27,
  MR_Word * STATE_VARIABLE_CaseLabelMap_28,
  MR_Word STATE_VARIABLE_CI_0_29,
  MR_Word * STATE_VARIABLE_CI_30)
{
  if ((TailCases_15 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((MaybeFailLabel_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word HeadCaseLabel_25 = ((MR_Word) ((MR_hl_field(0, HeadCase_14, (MR_Integer) 0))));

      ll_backend__switch_case__generate_case_code_or_jump_4_p_0(HeadCaseLabel_25, Code_16, STATE_VARIABLE_CaseLabelMap_0_27, STATE_VARIABLE_CaseLabelMap_28);
      *STATE_VARIABLE_CI_30 = STATE_VARIABLE_CI_0_29;
    }
    else
    {
      MR_Word FailLabel_23 = ((MR_Word) ((MR_hl_field(1, MaybeFailLabel_13, (MR_Integer) 0))));
      MR_Word FailCode_24;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word HeadCode_42;

      ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(WordSize_11, SectagRval_12, HeadCase_14, &HeadCode_42, STATE_VARIABLE_CaseLabelMap_0_27, STATE_VARIABLE_CaseLabelMap_28, STATE_VARIABLE_CI_0_29, STATE_VARIABLE_CI_30);
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (FailLabel_23));
      }
      {
        Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_38, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(0, Var_37, 1) = ((MR_Box) ((MR_String) "secondary tag does not match any case"));
      }
      FailCode_24 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_37)));
      *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadCode_42, FailCode_24);
    }
  else
  {
    MR_Word HeadTailCase_19 = ((MR_Word) ((MR_hl_field(1, TailCases_15, (MR_Integer) 0))));
    MR_Word TailTailCases_20 = ((MR_Word) ((MR_hl_field(1, TailCases_15, (MR_Integer) 1))));
    MR_Word HeadCode_21;
    MR_Word TailCode_22;
    MR_Word STATE_VARIABLE_CaseLabelMap_31_31;
    MR_Word STATE_VARIABLE_CI_32_32;

    ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(WordSize_11, SectagRval_12, HeadCase_14, &HeadCode_21, STATE_VARIABLE_CaseLabelMap_0_27, &STATE_VARIABLE_CaseLabelMap_31_31, STATE_VARIABLE_CI_0_29, &STATE_VARIABLE_CI_32_32);
    ll_backend__tag_switch__generate_secondary_try_me_else_chain_10_p_0(WordSize_11, SectagRval_12, MaybeFailLabel_13, HeadTailCase_19, TailTailCases_20, &TailCode_22, STATE_VARIABLE_CaseLabelMap_31_31, STATE_VARIABLE_CaseLabelMap_28, STATE_VARIABLE_CI_32_32, STATE_VARIABLE_CI_30);
    *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadCode_21, TailCode_22);
  }
}

static MR_Box MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__string__uint_to_string_1_f_0(((MR_Unsigned) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(
  MR_Word WordSize_9,
  MR_Word SectagRval_10,
  MR_Word Case_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_28,
  MR_Word * STATE_VARIABLE_CaseLabelMap_29,
  MR_Word STATE_VARIABLE_CI_0_30,
  MR_Word * STATE_VARIABLE_CI_31)
{
  MR_Word CaseLabel_15 = ((MR_Word) ((MR_hl_field(0, Case_11, (MR_Integer) 0))));
  MR_Word OoMSectags_16 = ((MR_Word) ((MR_hl_field(0, Case_11, (MR_Integer) 1))));
  MR_Word CaseCode_17;
  MR_Word ElseLabel_18;
  MR_Unsigned HeadSectag_19;
  MR_Word TailSectags_20;
  MR_Word IsApplicableTestRval_21;
  MR_Word IsNotApplicableTestRval_22;
  MR_Word SectagStrs_23;
  MR_String SectagsStr_24;
  MR_String CaseCommentStr_25;
  MR_Word TestCode_26;
  MR_Word ElseLabelCode_27;
  MR_Word Var_36;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_55;

  ll_backend__switch_case__generate_case_code_or_jump_4_p_0(CaseLabel_15, &CaseCode_17, STATE_VARIABLE_CaseLabelMap_0_28, STATE_VARIABLE_CaseLabelMap_29);
  ll_backend__code_info__get_next_label_3_p_0(&ElseLabel_18, STATE_VARIABLE_CI_0_30, STATE_VARIABLE_CI_31);
  HeadSectag_19 = ((MR_Unsigned) ((MR_hl_field(0, OoMSectags_16, (MR_Integer) 0))));
  TailSectags_20 = ((MR_Word) ((MR_hl_field(0, OoMSectags_16, (MR_Integer) 1))));
  if ((TailSectags_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer SectagInt_74;
    MR_Word Var_77;
    MR_Word Var_78;

    SectagInt_74 = mercury__uint__cast_to_int_1_f_0(HeadSectag_19);
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (SectagInt_74));
    }
    {
      Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_77, 1) = ((MR_Box) (Var_78));
    }
    {
      IsApplicableTestRval_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, IsApplicableTestRval_21, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, IsApplicableTestRval_21, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
      MR_hl_field(3, IsApplicableTestRval_21, 2) = ((MR_Box) (SectagRval_10));
      MR_hl_field(3, IsApplicableTestRval_21, 3) = ((MR_Box) (Var_77));
    }
  }
  else
  {
    MR_Unsigned HeadTailSectag_62 = ((MR_Unsigned) ((MR_hl_field(1, TailSectags_20, (MR_Integer) 0))));
    MR_Word TailTailSectags_63 = ((MR_Word) ((MR_hl_field(1, TailSectags_20, (MR_Integer) 1))));

    if ((TailTailSectags_63 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word HeadTestRval_64;
      MR_Word HeadTailTestRval_65;
      MR_Integer SectagInt_79;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Integer SectagInt_84;
      MR_Word Var_87;
      MR_Word Var_88;

      SectagInt_79 = mercury__uint__cast_to_int_1_f_0(HeadSectag_19);
      {
        Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_83, 0) = ((MR_Box) (SectagInt_79));
      }
      {
        Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_82, 1) = ((MR_Box) (Var_83));
      }
      {
        HeadTestRval_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, HeadTestRval_64, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, HeadTestRval_64, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
        MR_hl_field(3, HeadTestRval_64, 2) = ((MR_Box) (SectagRval_10));
        MR_hl_field(3, HeadTestRval_64, 3) = ((MR_Box) (Var_82));
      }
      SectagInt_84 = mercury__uint__cast_to_int_1_f_0(HeadTailSectag_62);
      {
        Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_88, 0) = ((MR_Box) (SectagInt_84));
      }
      {
        Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_87, 1) = ((MR_Box) (Var_88));
      }
      {
        HeadTailTestRval_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, HeadTailTestRval_65, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, HeadTailTestRval_65, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
        MR_hl_field(3, HeadTailTestRval_65, 2) = ((MR_Box) (SectagRval_10));
        MR_hl_field(3, HeadTailTestRval_65, 3) = ((MR_Box) (Var_87));
      }
      {
        IsApplicableTestRval_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, IsApplicableTestRval_21, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, IsApplicableTestRval_21, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, IsApplicableTestRval_21, 2) = ((MR_Box) (HeadTestRval_64));
        MR_hl_field(3, IsApplicableTestRval_21, 3) = ((MR_Box) (HeadTailTestRval_65));
      }
    }
    else
    {
      MR_Word BitmapWord0_68;
      MR_Unsigned WordSize_69;
      MR_Word OoMBitmaps_70;
      MR_Word HeadBitmap_71;
      MR_Word TailBitmaps_72;
      MR_Word Var_90;

      Var_90 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (HeadSectag_19)));
      {
        BitmapWord0_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BitmapWord0_68, 0) = ((MR_Box) (HeadSectag_19));
        MR_hl_field(0, BitmapWord0_68, 1) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(0, BitmapWord0_68, 2) = ((MR_Box) (Var_90));
      }
      switch (WordSize_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          WordSize_69 = (MR_Unsigned) 32U;
          break;
        case (MR_Integer) 1:
          WordSize_69 = (MR_Unsigned) 64U;
          break;
      }
      ll_backend__tag_switch__encode_sectags_as_bitmaps_loop_5_p_0(WordSize_69, HeadTailSectag_62, TailTailSectags_63, BitmapWord0_68, &OoMBitmaps_70);
      HeadBitmap_71 = ((MR_Word) ((MR_hl_field(0, OoMBitmaps_70, (MR_Integer) 0))));
      TailBitmaps_72 = ((MR_Word) ((MR_hl_field(0, OoMBitmaps_70, (MR_Integer) 1))));
      ll_backend__tag_switch__test_sectag_is_in_bitmaps_5_p_0(WordSize_69, SectagRval_10, HeadBitmap_71, TailBitmaps_72, &IsApplicableTestRval_21);
    }
  }
  {
    IsNotApplicableTestRval_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, IsNotApplicableTestRval_22, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, IsNotApplicableTestRval_22, 1) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, IsNotApplicableTestRval_22, 2) = ((MR_Box) (IsApplicableTestRval_21));
  }
  Var_36 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), OoMSectags_16);
  SectagStrs_23 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[3]), Var_36);
  SectagsStr_24 = mercury__string__join_list_2_f_0((MR_String) ", ", SectagStrs_23);
  CaseCommentStr_25 = mercury__string__f_43_43_2_f_0((MR_String) "case for sectags ", SectagsStr_24);
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (ElseLabel_18));
  }
  {
    Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_44, 1) = ((MR_Box) (IsNotApplicableTestRval_22));
    MR_hl_field(3, Var_44, 2) = ((MR_Box) (Var_45));
  }
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) ((MR_String) "test sec tag only"));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (CaseCommentStr_25));
  }
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_47));
  }
  TestCode_26 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_42);
  {
    Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_53, 1) = ((MR_Box) (ElseLabel_18));
  }
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) ((MR_String) "handle next secondary tag"));
  }
  ElseLabelCode_27 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_52)));
  Var_55 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CaseCode_17, ElseLabelCode_27);
  *Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_26, Var_55);
}

static void MR_CALL 
ll_backend__tag_switch__test_sectag_is_in_bitmaps_5_p_0(
  MR_Unsigned WordSize_6,
  MR_Word SectagRval_7,
  MR_Word HeadBitmap_8,
  MR_Word TailBitmaps_9,
  MR_Word * TestRval_10)
{
  MR_bool succeeded;
  MR_Unsigned StartOffset_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadBitmap_8, (MR_Integer) 0))));
  MR_Unsigned Bitmap0_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadBitmap_8, (MR_Integer) 1))));
  MR_Word ValuesCord_13 = ((MR_Word) ((MR_hl_field(0, HeadBitmap_8, (MR_Integer) 2))));
  MR_Word Values_14;
  MR_Word HeadTestRval_16;

  Values_14 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ValuesCord_13);
  if ((Values_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.test_sectag_is_in_bitmaps\'/5", (MR_String) "Values = []");
      return;
    }
  else
  {
    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(1, Values_14, (MR_Integer) 1))));
    MR_Unsigned Var_64 = ((MR_Unsigned) ((MR_hl_field(1, Values_14, (MR_Integer) 0))));

    if ((Var_63 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer SectagInt_67;
      MR_Word Var_70;
      MR_Word Var_71;

      SectagInt_67 = mercury__uint__cast_to_int_1_f_0(Var_64);
      {
        Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_71, 0) = ((MR_Box) (SectagInt_67));
      }
      {
        Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_70, 1) = ((MR_Box) (Var_71));
      }
      {
        HeadTestRval_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, HeadTestRval_16, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, HeadTestRval_16, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
        MR_hl_field(3, HeadTestRval_16, 2) = ((MR_Box) (SectagRval_7));
        MR_hl_field(3, HeadTestRval_16, 3) = ((MR_Box) (Var_70));
      }
    }
    else
    {
      MR_Word Var_65 = ((MR_Word) ((MR_hl_field(1, Var_63, (MR_Integer) 1))));
      MR_Unsigned Var_66 = ((MR_Unsigned) ((MR_hl_field(1, Var_63, (MR_Integer) 0))));

      if ((Var_65 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TestA_18;
        MR_Word TestB_19;
        MR_Integer SectagInt_72;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Integer SectagInt_77;
        MR_Word Var_80;
        MR_Word Var_81;

        SectagInt_72 = mercury__uint__cast_to_int_1_f_0(Var_64);
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (SectagInt_72));
        }
        {
          Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_75, 1) = ((MR_Box) (Var_76));
        }
        {
          TestA_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TestA_18, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, TestA_18, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
          MR_hl_field(3, TestA_18, 2) = ((MR_Box) (SectagRval_7));
          MR_hl_field(3, TestA_18, 3) = ((MR_Box) (Var_75));
        }
        SectagInt_77 = mercury__uint__cast_to_int_1_f_0(Var_66);
        {
          Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_81, 0) = ((MR_Box) (SectagInt_77));
        }
        {
          Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_80, 1) = ((MR_Box) (Var_81));
        }
        {
          TestB_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TestB_19, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, TestB_19, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
          MR_hl_field(3, TestB_19, 2) = ((MR_Box) (SectagRval_7));
          MR_hl_field(3, TestB_19, 3) = ((MR_Box) (Var_80));
        }
        {
          HeadTestRval_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, HeadTestRval_16, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, HeadTestRval_16, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, HeadTestRval_16, 2) = ((MR_Box) (TestA_18));
          MR_hl_field(3, HeadTestRval_16, 3) = ((MR_Box) (TestB_19));
        }
      }
      else
      {
        MR_Unsigned Bitmap_24;
        MR_Word OffsetInWordRval_25;
        MR_Word SelectedBitMaskRval_30;
        MR_Word SelectedBitRval_31;
        MR_Word Var_53;
        MR_Word Var_54;

        succeeded = (StartOffset_11 == (MR_Unsigned) 0U);
        if (succeeded)
        {
          Bitmap_24 = Bitmap0_12;
          OffsetInWordRval_25 = SectagRval_7;
        }
        else
        {
          MR_Unsigned LastValue_26;
          MR_Box conv0_LastValue_26;

          mercury__list__det_last_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Values_14, &conv0_LastValue_26);
          LastValue_26 = ((MR_Unsigned) (conv0_LastValue_26));
          succeeded = (LastValue_26 < WordSize_6);
          if (succeeded)
          {
            Bitmap_24 = (Bitmap0_12 << (int) StartOffset_11);
            OffsetInWordRval_25 = SectagRval_7;
          }
          else
          {
            MR_Integer StartOffsetInt_28;
            MR_Word Var_44;
            MR_Word Var_45;

            Bitmap_24 = Bitmap0_12;
            StartOffsetInt_28 = mercury__uint__cast_to_int_1_f_0(StartOffset_11);
            {
              Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_45, 0) = ((MR_Box) (StartOffsetInt_28));
            }
            {
              Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_44, 1) = ((MR_Box) (Var_45));
            }
            {
              OffsetInWordRval_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, OffsetInWordRval_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, OffsetInWordRval_25, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__tag_switch_scalar_common_3[4])));
              MR_hl_field(3, OffsetInWordRval_25, 2) = ((MR_Box) (SectagRval_7));
              MR_hl_field(3, OffsetInWordRval_25, 3) = ((MR_Box) (Var_44));
            }
          }
        }
        {
          SelectedBitMaskRval_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, SelectedBitMaskRval_30, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, SelectedBitMaskRval_30, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[10])));
          MR_hl_field(3, SelectedBitMaskRval_30, 2) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[11])));
          MR_hl_field(3, SelectedBitMaskRval_30, 3) = ((MR_Box) (OffsetInWordRval_25));
        }
        {
          Var_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_54, 0) = ((MR_Box) (Bitmap_24));
        }
        {
          Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_53, 1) = ((MR_Box) (Var_54));
        }
        {
          SelectedBitRval_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, SelectedBitRval_31, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, SelectedBitRval_31, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[7])));
          MR_hl_field(3, SelectedBitRval_31, 2) = ((MR_Box) (SelectedBitMaskRval_30));
          MR_hl_field(3, SelectedBitRval_31, 3) = ((MR_Box) (Var_53));
        }
        {
          HeadTestRval_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, HeadTestRval_16, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, HeadTestRval_16, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[12])));
          MR_hl_field(3, HeadTestRval_16, 2) = ((MR_Box) (SelectedBitRval_31));
          MR_hl_field(3, HeadTestRval_16, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[13])));
        }
      }
    }
  }
  if ((TailBitmaps_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *TestRval_10 = HeadTestRval_16;
  else
  {
    MR_Word HeadTailBitmap_32 = ((MR_Word) ((MR_hl_field(1, TailBitmaps_9, (MR_Integer) 0))));
    MR_Word TailTailBitmaps_33 = ((MR_Word) ((MR_hl_field(1, TailBitmaps_9, (MR_Integer) 1))));
    MR_Word TailTestRval_34;

    ll_backend__tag_switch__test_sectag_is_in_bitmaps_5_p_0(WordSize_6, SectagRval_7, HeadTailBitmap_32, TailTailBitmaps_33, &TailTestRval_34);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *TestRval_10 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, base, 2) = ((MR_Box) (HeadTestRval_16));
      MR_hl_field(3, base, 3) = ((MR_Box) (TailTestRval_34));
    }
  }
}

static void MR_CALL 
ll_backend__tag_switch__encode_sectags_as_bitmaps_loop_5_p_0(
  MR_Unsigned WordSize_6,
  MR_Unsigned HeadN_7,
  MR_Word TailNs_8,
  MR_Word CurBitmapWord0_9,
  MR_Word * BitmapWords_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Unsigned StartOffset_11 = ((MR_Unsigned) ((MR_hl_field(0, CurBitmapWord0_9, (MR_Integer) 0))));
    MR_Unsigned Bitmap0_12 = ((MR_Unsigned) ((MR_hl_field(0, CurBitmapWord0_9, (MR_Integer) 1))));
    MR_Word ValuesCord0_13 = ((MR_Word) ((MR_hl_field(0, CurBitmapWord0_9, (MR_Integer) 2))));
    MR_Unsigned LocalOffset_14 = (HeadN_7 - StartOffset_11);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (LocalOffset_14 <= WordSize_6);
    if (succeeded)
    {
      MR_Unsigned Bitmap1_15;
      MR_Word ValuesCord1_16;
      MR_Word CurBitmapWord1_17;
      MR_Unsigned Var_22 = ((MR_Unsigned) 1U << (int) LocalOffset_14);

      Bitmap1_15 = (Bitmap0_12 | Var_22);
      mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (HeadN_7)), ValuesCord0_13, &ValuesCord1_16);
      {
        CurBitmapWord1_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CurBitmapWord1_17, 0) = ((MR_Box) (StartOffset_11));
        MR_hl_field(0, CurBitmapWord1_17, 1) = ((MR_Box) (Bitmap1_15));
        MR_hl_field(0, CurBitmapWord1_17, 2) = ((MR_Box) (ValuesCord1_16));
      }
      if ((TailNs_8 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *BitmapWords_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (CurBitmapWord1_17));
          MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      else
      {
        MR_Unsigned HeadTailN_18 = ((MR_Unsigned) ((MR_hl_field(1, TailNs_8, (MR_Integer) 0))));
        MR_Word TailTailNs_19 = ((MR_Word) ((MR_hl_field(1, TailNs_8, (MR_Integer) 1))));
        MR_Unsigned next_value_of_HeadN_7 = HeadTailN_18;
        MR_Word next_value_of_TailNs_8 = TailTailNs_19;
        MR_Word next_value_of_CurBitmapWord0_9 = CurBitmapWord1_17;

        // direct tailcall eliminated
        ;
        HeadN_7 = next_value_of_HeadN_7;
        TailNs_8 = next_value_of_TailNs_8;
        CurBitmapWord0_9 = next_value_of_CurBitmapWord0_9;
        continue;
      }
    }
    else
    {
      MR_Word NextBitmapWord1_20;
      MR_Word Var_32;

      Var_32 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (HeadN_7)));
      {
        NextBitmapWord1_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NextBitmapWord1_20, 0) = ((MR_Box) (HeadN_7));
        MR_hl_field(0, NextBitmapWord1_20, 1) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(0, NextBitmapWord1_20, 2) = ((MR_Box) (Var_32));
      }
      if ((TailNs_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_25;

        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (NextBitmapWord1_20));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *BitmapWords_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (CurBitmapWord0_9));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
        }
      }
      else
      {
        MR_Word TailBitmapWords_21;
        MR_Unsigned HeadTailN_27 = ((MR_Unsigned) ((MR_hl_field(1, TailNs_8, (MR_Integer) 0))));
        MR_Word TailTailNs_28 = ((MR_Word) ((MR_hl_field(1, TailNs_8, (MR_Integer) 1))));

        ll_backend__tag_switch__encode_sectags_as_bitmaps_loop_5_p_0(WordSize_6, HeadTailN_27, TailTailNs_28, NextBitmapWord1_20, &TailBitmapWords_21);
        *BitmapWords_10 = mercury__one_or_more__cons_2_f_0((MR_Word) (&ll_backend__tag_switch__ll_backend__tag_switch__type_ctor_info_bitmap_word_0), ((MR_Box) (CurBitmapWord0_9)), TailBitmapWords_21);
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__tag_switch__compute_sectag_rval_7_p_0(
  MR_Word Globals_8,
  MR_Word VarRval_9,
  MR_Word SectagReg_10,
  MR_Word SharedInfo_11,
  MR_Word Method_12,
  MR_Word * SectagRval_13,
  MR_Word * SectagRvalCode_14)
{
  MR_bool succeeded;
  MR_Word Ptag_15 = ((MR_Word) ((MR_hl_field(0, SharedInfo_11, (MR_Integer) 0))));
  MR_Word SharedSectagLocn_16 = ((MR_Word) ((MR_hl_field(0, SharedInfo_11, (MR_Integer) 1))));
  MR_Unsigned MaxSectag_17 = ((MR_Unsigned) ((MR_hl_field(0, SharedInfo_11, (MR_Integer) 2))));
  MR_Word OrigSectagRval_23;
  MR_String Comment_24;
  MR_Word AccessCount_28;
  MR_Integer NumRealRegs_29;
  MR_Unsigned Var_50;
  MR_Word Var_51;

  switch (MR_tag((MR_Word) SharedSectagLocn_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(SharedSectagLocn_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            {
              OrigSectagRval_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, OrigSectagRval_23, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, OrigSectagRval_23, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(3, OrigSectagRval_23, 2) = ((MR_Box) (VarRval_9));
            }
            Comment_24 = (MR_String) "compute local rest-of-word sec tag to switch on";
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_33;
            MR_Word Var_34;

            {
              Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_34, 0) = ((MR_Box) (Ptag_15));
            }
            {
              Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_33, 1) = ((MR_Box) (Var_34));
              MR_hl_field(3, Var_33, 2) = ((MR_Box) (VarRval_9));
              MR_hl_field(3, Var_33, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[8])));
            }
            {
              OrigSectagRval_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OrigSectagRval_23, 0) = ((MR_Box) (Var_33));
            }
            Comment_24 = (MR_String) "compute remote word sec tag to switch on";
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_46;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Unsigned Mask_60 = ((MR_Unsigned) ((MR_hl_field(1, SharedSectagLocn_16, (MR_Integer) 1))));

        {
          Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(3, Var_46, 2) = ((MR_Box) (VarRval_9));
        }
        {
          Var_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_49, 0) = ((MR_Box) (Mask_60));
        }
        {
          Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_48, 1) = ((MR_Box) (Var_49));
        }
        {
          OrigSectagRval_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, OrigSectagRval_23, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, OrigSectagRval_23, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[7])));
          MR_hl_field(3, OrigSectagRval_23, 2) = ((MR_Box) (Var_46));
          MR_hl_field(3, OrigSectagRval_23, 3) = ((MR_Box) (Var_48));
        }
        Comment_24 = (MR_String) "compute local sec tag bits to switch on";
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Unsigned Mask_26 = ((MR_Unsigned) ((MR_hl_field(2, SharedSectagLocn_16, (MR_Integer) 1))));
        MR_Word SectagWordRval_27;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_41;
        MR_Word Var_42;

        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (Ptag_15));
        }
        {
          Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_37, 1) = ((MR_Box) (Var_38));
          MR_hl_field(3, Var_37, 2) = ((MR_Box) (VarRval_9));
          MR_hl_field(3, Var_37, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[8])));
        }
        {
          SectagWordRval_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SectagWordRval_27, 0) = ((MR_Box) (Var_37));
        }
        {
          Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_42, 0) = ((MR_Box) (Mask_26));
        }
        {
          Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_41, 1) = ((MR_Box) (Var_42));
        }
        {
          OrigSectagRval_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, OrigSectagRval_23, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, OrigSectagRval_23, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[7])));
          MR_hl_field(3, OrigSectagRval_23, 2) = ((MR_Box) (SectagWordRval_27));
          MR_hl_field(3, OrigSectagRval_23, 3) = ((MR_Box) (Var_41));
        }
        Comment_24 = (MR_String) "compute remote sec tag bits to switch on";
      }
      break;
  }
  AccessCount_28 = ((&ll_backend__tag_switch_vector_common_4[4 + Method_12]))->ll_backend__tag_switch__vector_common_type_4_0__vct_4_f_0;
  succeeded = (AccessCount_28 == (MR_Integer) 1);
  if (succeeded)
  {
    Var_50 = (MR_Unsigned) 2U;
    succeeded = (MaxSectag_17 >= Var_50);
    if (succeeded)
    {
      Var_51 = (MR_Integer) 357;
      libs__globals__lookup_int_option_3_p_0(Globals_8, Var_51, &NumRealRegs_29);
      succeeded = (NumRealRegs_29 == (MR_Integer) 0);
      if (!(succeeded))
      {
        MR_Integer SectagRegNum_30;
        MR_Word Var_52;

        succeeded = ((MR_tag((MR_Word) SectagReg_10)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_52 = ((MR_Unsigned) ((MR_hl_field(1, SectagReg_10, (MR_Integer) 0))) & (MR_Integer) 1);
          SectagRegNum_30 = ((MR_Integer) ((MR_hl_field(1, SectagReg_10, (MR_Integer) 1))));
          succeeded = (Var_52 == (MR_Integer) 0);
        }
        if (succeeded)
          succeeded = (SectagRegNum_30 <= NumRealRegs_29);
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.compute_sectag_rval\'/7", (MR_String) "improper reg in tag switch");
            return;
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_55;
    MR_Word Var_56;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *SectagRval_13 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (SectagReg_10));
    }
    {
      Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_56, 1) = ((MR_Box) (SectagReg_10));
      MR_hl_field(3, Var_56, 2) = ((MR_Box) (OrigSectagRval_23));
    }
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(0, Var_55, 1) = ((MR_Box) (Comment_24));
    }
    *SectagRvalCode_14 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_55)));
  }
  else
  {
    *SectagRval_13 = OrigSectagRval_23;
    *SectagRvalCode_14 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  }
}

static void MR_CALL 
ll_backend__tag_switch__compute_ptag_rval_7_p_0(
  MR_Word Globals_8,
  MR_Word VarRval_9,
  MR_Word PtagReg_10,
  MR_Integer NumPtagsUsed_11,
  MR_Word Method_12,
  MR_Word * PtagRval_13,
  MR_Word * PtagRvalCode_14)
{
  MR_bool succeeded;
  MR_Word AccessCount_15 = ((&ll_backend__tag_switch_vector_common_4[0 + Method_12]))->ll_backend__tag_switch__vector_common_type_4_0__vct_4_f_0;
  MR_Integer NumRealRegs_16;
  MR_Integer Var_18;
  MR_Word Var_19;

  succeeded = (AccessCount_15 == (MR_Integer) 1);
  if (succeeded)
  {
    Var_18 = (MR_Integer) 2;
    succeeded = (NumPtagsUsed_11 >= Var_18);
    if (succeeded)
    {
      Var_19 = (MR_Integer) 357;
      libs__globals__lookup_int_option_3_p_0(Globals_8, Var_19, &NumRealRegs_16);
      succeeded = (NumRealRegs_16 == (MR_Integer) 0);
      if (!(succeeded))
      {
        MR_Integer PtagRegNum_17;
        MR_Word Var_20;

        succeeded = ((MR_tag((MR_Word) PtagReg_10)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_20 = ((MR_Unsigned) ((MR_hl_field(1, PtagReg_10, (MR_Integer) 0))) & (MR_Integer) 1);
          PtagRegNum_17 = ((MR_Integer) ((MR_hl_field(1, PtagReg_10, (MR_Integer) 1))));
          succeeded = (Var_20 == (MR_Integer) 0);
        }
        if (succeeded)
          succeeded = (PtagRegNum_17 <= NumRealRegs_16);
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.compute_ptag_rval\'/7", (MR_String) "improper reg in tag switch");
            return;
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *PtagRval_13 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (PtagReg_10));
    }
    {
      Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_25, 2) = ((MR_Box) (VarRval_9));
    }
    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (PtagReg_10));
      MR_hl_field(3, Var_24, 2) = ((MR_Box) (Var_25));
    }
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) ((MR_String) "compute tag to switch on"));
    }
    *PtagRvalCode_14 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_23)));
  }
  else
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *PtagRval_13 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, base, 2) = ((MR_Box) (VarRval_9));
    }
    *PtagRvalCode_14 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____bitmap_word_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__tag_switch____Unify____bitmap_word_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__tag_switch____Compare____bitmap_word_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__tag_switch____Compare____bitmap_word_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__tag_switch____Unify____switch_method_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__tag_switch____Compare____switch_method_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____tag_access_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__tag_switch____Unify____tag_access_count_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__tag_switch____Compare____tag_access_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__tag_switch____Compare____tag_access_count_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__tag_switch__init(void)
{
}

void mercury__ll_backend__tag_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__tag_switch__ll_backend__tag_switch__type_ctor_info_bitmap_word_0);
	MR_register_type_ctor_info(&ll_backend__tag_switch__ll_backend__tag_switch__type_ctor_info_switch_method_0);
	MR_register_type_ctor_info(&ll_backend__tag_switch__ll_backend__tag_switch__type_ctor_info_tag_access_count_0);
}

void mercury__ll_backend__tag_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__tag_switch__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.tag_switch.
