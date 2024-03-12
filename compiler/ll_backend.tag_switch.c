/*
** Automatically generated from `tag_switch.m'
** by the Mercury compiler,
** version rotd-2024-03-12
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
#include "backend_libs.switch_util.mih"
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

static const MR_FA_TypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__ti_ptag_case_group_1ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_group_1ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__pti_ptag_case_group_1__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

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
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__1021__1_2_p_0(
  MR_Unsigned LoRangeMax_28,
  MR_Word LambdaHeadVar__1_69);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__1010__1_2_p_0(
  MR_Unsigned MinSectag_14,
  MR_Unsigned CurSectagPrime_23);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__963__1_2_p_0(
  MR_Word Cases_7,
  MR_Word HeadVar__2_18);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_ptag_group_code__699__1_2_p_0(
  MR_Integer CountMaxSectag_32,
  MR_Integer HeadVar__2_69);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_ptag_group_code__697__1_2_p_0(
  MR_Word CountSectagLocn_31,
  MR_Word HeadVar__2_65);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__642__1_2_p_0(
  uint8_t LoRangeMax_34,
  MR_Word LambdaHeadVar__1_71);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__630__1_2_p_0(
  MR_Word MainPtag_30,
  MR_Word HeadVar__2_62);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__551__1_2_p_0(
  MR_Word PtagGroups_18,
  MR_Word HeadVar__2_44);

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

static MR_String MR_CALL 
ll_backend__tag_switch__ptag_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0(
  MR_Word PtagCountMap_14,
  MR_Word VarRval_15,
  MR_Word PtagRval_16,
  MR_Word SectagReg_17,
  MR_Word MaybeFailLabel_18,
  MR_Word PtagGroups_19,
  uint8_t MinPtag_20,
  uint8_t MaxPtag_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_50,
  MR_Word * STATE_VARIABLE_CaseLabelMap_51,
  MR_Word STATE_VARIABLE_CI_0_52,
  MR_Word * STATE_VARIABLE_CI_53);

static MR_Word MR_CALL 
ll_backend__tag_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_116_97_103_95_99_97_115_101_95_103_114_111_117_112_95_109_97_105_110_95_112_116_97_103_95_95_91_49_93_95_48_1_f_0(
  MR_Word PtagGroup_3);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0(
  MR_Word PtagCountMap_14,
  MR_Word VarRval_15,
  MR_Word SectagReg_16,
  MR_Word MaybeFailLabel_17,
  MR_Word PtagGroups_18,
  uint8_t CurPtagUint8_19,
  uint8_t MaxPtagUint8_20,
  MR_Word * TargetMaybeLabels_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_37,
  MR_Word * STATE_VARIABLE_CaseLabelMap_38,
  MR_Word STATE_VARIABLE_CI_0_39,
  MR_Word * STATE_VARIABLE_CI_40);

static MR_Box MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0(
  MR_Word PtagCountMap_1,
  MR_Word VarRval_2,
  MR_Word PtagRval_3,
  MR_Word SectagReg_4,
  MR_Word MaybeFailLabel_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_TryChainCode_0_7,
  MR_Word STATE_VARIABLE_GroupsCode_0_8,
  MR_Word * Code_9,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_10,
  MR_Word * STATE_VARIABLE_CaseLabelMap_11,
  MR_Word STATE_VARIABLE_CI_0_12,
  MR_Word * STATE_VARIABLE_CI_13);

static MR_Box MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_14_p_0(
  MR_Word PtagCountMap_15,
  MR_Word VarRval_16,
  MR_Word PtagRval_17,
  MR_Word SectagReg_18,
  MR_Word MaybeFailLabel_19,
  MR_Word PtagGroup_20,
  MR_Word STATE_VARIABLE_TryChainCode_0_32,
  MR_Word * STATE_VARIABLE_TryChainCode_33,
  MR_Word STATE_VARIABLE_GroupsCode_0_34,
  MR_Word * STATE_VARIABLE_GroupsCode_35,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_36,
  MR_Word * STATE_VARIABLE_CaseLabelMap_37,
  MR_Word STATE_VARIABLE_CI_0_38,
  MR_Word * STATE_VARIABLE_CI_39);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(
  MR_Word PtagCountMap_1,
  MR_Word VarRval_2,
  MR_Word PtagRval_3,
  MR_Word SectagReg_4,
  MR_Word MaybeFailLabel_5,
  MR_Word HeadVar__6_6,
  MR_Word * Code_7,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_8,
  MR_Word * STATE_VARIABLE_CaseLabelMap_9,
  MR_Word STATE_VARIABLE_CI_0_10,
  MR_Word * STATE_VARIABLE_CI_11);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_group_11_p_0(
  MR_Word PtagCountMap_12,
  MR_Word VarRval_13,
  MR_Word PtagRval_14,
  MR_Word SectagReg_15,
  MR_Word MaybeFailLabel_16,
  MR_Word PtagGroup_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_27,
  MR_Word * STATE_VARIABLE_CaseLabelMap_28,
  MR_Word STATE_VARIABLE_CI_0_29,
  MR_Word * STATE_VARIABLE_CI_30);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_ptag_group_code_10_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_ptag_group_code_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_ptag_group_code_10_p_0(
  MR_Word PtagCountMap_11,
  MR_Word VarRval_12,
  MR_Word SectagReg_13,
  MR_Word MaybeFailLabel_14,
  MR_Word PtagGroup_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_57,
  MR_Word * STATE_VARIABLE_CaseLabelMap_58,
  MR_Word STATE_VARIABLE_CI_0_59,
  MR_Word * STATE_VARIABLE_CI_60);

static MR_Word MR_CALL 
ll_backend__tag_switch__switch_method_tag_access_count_1_f_0(
  MR_Word Method_3);

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
  MR_Word STATE_VARIABLE_CaseLabelMap_0_49,
  MR_Word * STATE_VARIABLE_CaseLabelMap_50,
  MR_Word STATE_VARIABLE_CI_0_51,
  MR_Word * STATE_VARIABLE_CI_52);

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
ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(
  MR_Word SectagRval_1,
  MR_Word MaybeFailLabel_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_TryChainCode_0_4,
  MR_Word * Code_5,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_6,
  MR_Word * STATE_VARIABLE_CaseLabelMap_7);

static MR_Box MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(
  MR_Word SectagRval_1,
  MR_Word MaybeFailLabel_2,
  MR_Word HeadVar__3_3,
  MR_Word * Code_4,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_5,
  MR_Word * STATE_VARIABLE_CaseLabelMap_6,
  MR_Word STATE_VARIABLE_CI_0_7,
  MR_Word * STATE_VARIABLE_CI_8);

static MR_Box MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_7_p_0(
  MR_Word SectagRval_8,
  MR_Word Case_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_26,
  MR_Word * STATE_VARIABLE_CaseLabelMap_27,
  MR_Word STATE_VARIABLE_CI_0_28,
  MR_Word * STATE_VARIABLE_CI_29);

static void MR_CALL 
ll_backend__tag_switch__test_sectag_is_in_case_group_4_p_0(
  MR_Word SectagRval_5,
  MR_Unsigned HeadSectag_6,
  MR_Word TailSectags_7,
  MR_Word * TestRval_8);

static void MR_CALL 
ll_backend__tag_switch__encode_ptags_as_bitmap_loop_4_p_0(
  MR_Word HeadPtag_5,
  MR_Word TailPtags_6,
  MR_Unsigned STATE_VARIABLE_Bitmap_0_11,
  MR_Unsigned * STATE_VARIABLE_Bitmap_12);

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


static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_1[7][3];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_2[15][2];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_3[4][1];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_4[10][5];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_6[1][14];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_7[1][7];


struct ll_backend__tag_switch__vector_common_type_5_0_s {
  const MR_Word ll_backend__tag_switch__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct ll_backend__tag_switch__vector_common_type_5_0_s ll_backend__tag_switch_vector_common_5[4];



static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_1[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_4[0])),
    ((MR_Box) (ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_4[0])),
    ((MR_Box) (ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_4[6])),
    ((MR_Box) (ll_backend__tag_switch__generate_primary_try_chain_case_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_4[6])),
    ((MR_Box) (ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_7[0])),
    ((MR_Box) (ll_backend__tag_switch__generate_tag_switch_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_2[15][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_2[2]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_1[1]))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) (((MR_Unsigned) 1U << 1))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ll_backend__tag_switch_scalar_common_3[0])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ll_backend__tag_switch_scalar_common_3[1])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__tag_switch_scalar_common_3[3])))
  },
};

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_3[4][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 1U)) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_4[10][5] = {
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
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_group_1ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_group_1ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint8_0)),
    ((MR_Box) (&ll_backend__tag_switch__backend_libs__switch_util__pti_ptag_case_group_1__plain_ll_backend__llds__type_ctor_info_label_0))
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

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0)),
    ((MR_Box) (&ll_backend__tag_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__tag_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0))
  },
};


static /* final */ const struct ll_backend__tag_switch__vector_common_type_5_0_s ll_backend__tag_switch_vector_common_5[4] = {
  /* row   0 */   { (MR_Integer) 1 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 0 },
  /* row   3 */   { (MR_Integer) 1 },
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

static const MR_FA_TypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__ti_ptag_case_group_1ll_backend__llds__type_ctor_info_label_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_group_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__tag_switch__backend_libs__switch_util__ti_ptag_case_group_1ll_backend__llds__type_ctor_info_label_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__pti_ptag_case_group_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_1,
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

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0) }
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
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__1021__1_2_p_0(
  MR_Unsigned LoRangeMax_28,
  MR_Word LambdaHeadVar__1_69)
{
  MR_bool succeeded;
  MR_Unsigned Sectag_32 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_69, (MR_Integer) 0))));

  succeeded = (Sectag_32 <= LoRangeMax_28);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__1010__1_2_p_0(
  MR_Unsigned MinSectag_14,
  MR_Unsigned CurSectagPrime_23)
{
  MR_bool succeeded = (MinSectag_14 == CurSectagPrime_23);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__963__1_2_p_0(
  MR_Word Cases_7,
  MR_Word HeadVar__2_18)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[6]), ((MR_Box) (Cases_7)), ((MR_Box) (HeadVar__2_18)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_ptag_group_code__699__1_2_p_0(
  MR_Integer CountMaxSectag_32,
  MR_Integer HeadVar__2_69)
{
  MR_bool succeeded = (CountMaxSectag_32 == HeadVar__2_69);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_ptag_group_code__697__1_2_p_0(
  MR_Word CountSectagLocn_31,
  MR_Word HeadVar__2_65)
{
  MR_bool succeeded;

  succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(HeadVar__2_65, CountSectagLocn_31);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__642__1_2_p_0(
  uint8_t LoRangeMax_34,
  MR_Word LambdaHeadVar__1_71)
{
  MR_bool succeeded;
  uint8_t MainPtagUint8_38;
  MR_Word Var_72;

  if (((MR_tag((MR_Word) LambdaHeadVar__1_71)) == (MR_Integer) 0))
  {
    MR_Word WholeInfo_107 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_71, (MR_Integer) 0))));

    Var_72 = ((MR_Word) ((MR_hl_field(0, WholeInfo_107, (MR_Integer) 0))));
  }
  else
  {
    MR_Word SharedInfo_111 = ((MR_Word) ((MR_hl_field(1, LambdaHeadVar__1_71, (MR_Integer) 0))));

    Var_72 = ((MR_Word) ((MR_hl_field(0, SharedInfo_111, (MR_Integer) 0))));
  }
  MainPtagUint8_38 = (uint8_t) (Var_72);
  succeeded = (MainPtagUint8_38 <= LoRangeMax_34);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__630__1_2_p_0(
  MR_Word MainPtag_30,
  MR_Word HeadVar__2_62)
{
  MR_bool succeeded;
  uint8_t Var_106 = (uint8_t) (HeadVar__2_62);
  uint8_t Var_107 = (uint8_t) (MainPtag_30);

  succeeded = (Var_106 == Var_107);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__551__1_2_p_0(
  MR_Word PtagGroups_18,
  MR_Word HeadVar__2_44)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[4]), ((MR_Box) (PtagGroups_18)), ((MR_Box) (HeadVar__2_44)));
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
ll_backend__tag_switch__generate_tag_switch_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__4_4;

  ll_backend__switch_case__add_remaining_case_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv8_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv8_HeadVar__4_4));
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
  MR_Word STATE_VARIABLE_MaybeEnd_0_68,
  MR_Word * STATE_VARIABLE_MaybeEnd_69,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_70,
  MR_Word * STATE_VARIABLE_CI_71,
  MR_Word CLD0_26)
{
  MR_bool succeeded;
  MR_Word PtagReg_28;
  MR_Word SectagReg_29;
  MR_Word BranchStart_30;
  MR_Word ModuleInfo_31;
  uint8_t MaxPtagUint8_32;
  MR_Word PtagCountMap_33;
  MR_Word Params_34;
  MR_Word CaseLabelMap0_35;
  MR_Word PtagCaseMap_38;
  MR_Word PtagGroups0_39;
  MR_Integer PtagsUsed_40;
  MR_Word Globals_41;
  MR_Word OptTuple_42;
  MR_Integer DenseSwitchSize_43;
  MR_Integer TrySwitchSize_44;
  MR_Integer BinarySwitchSize_45;
  MR_Word PrimaryMethod_46;
  MR_Word AccessCount_47;
  MR_Word PtagCode_50;
  MR_Word PtagRval_51;
  MR_Word EndCode_52;
  MR_Word MaybeFailLabel_53;
  MR_Word FailCode_54;
  MR_Word CasesCode_59;
  MR_Word CaseLabelMap_60;
  MR_Word RemainingCasesCode_67;
  MR_Word STATE_VARIABLE_CLD_74_74;
  MR_Word STATE_VARIABLE_CLD_76_76;
  MR_Word STATE_VARIABLE_CLD_77_77;
  MR_Word STATE_VARIABLE_CLD_78_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word STATE_VARIABLE_CI_82_82;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word STATE_VARIABLE_CI_103_103;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_37;
  MR_Box conv7_CaseLabelMap0_35;
  MR_Box conv6_STATE_VARIABLE_MaybeEnd_69;
  MR_Box conv5_STATE_VARIABLE_CI_82_82;
  MR_Box conv4_Var_36;
  MR_Integer NumRealRegs_48;
  MR_Integer Var_84;
  MR_Word Var_85;
  MR_Box conv9_RemainingCasesCode_67;

  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &PtagReg_28, CLD0_26, &STATE_VARIABLE_CLD_74_74);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &SectagReg_29, STATE_VARIABLE_CLD_74_74, &STATE_VARIABLE_CLD_76_76);
  ll_backend__code_loc_dep__release_reg_3_p_0(PtagReg_28, STATE_VARIABLE_CLD_76_76, &STATE_VARIABLE_CLD_77_77);
  ll_backend__code_loc_dep__release_reg_3_p_0(SectagReg_29, STATE_VARIABLE_CLD_77_77, &STATE_VARIABLE_CLD_78_78);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_78_78, &BranchStart_30);
  ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_70, &ModuleInfo_31);
  backend_libs__switch_util__get_ptag_counts_4_p_0(ModuleInfo_31, VarType_17, &MaxPtagUint8_32, &PtagCountMap_33);
  {
    Params_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_34, 0) = ((MR_Box) (VarName_18));
    MR_hl_field(0, Params_34, 1) = ((MR_Box) (SwitchGoalInfo_21));
    MR_hl_field(0, Params_34, 2) = (MR_Box) ((MR_Unsigned) (CodeModel_19));
    MR_hl_field(0, Params_34, 3) = ((MR_Box) (BranchStart_30));
    MR_hl_field(0, Params_34, 4) = ((MR_Box) (EndLabel_22));
  }
  {
    Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_79, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_6[0]));
    MR_hl_field(0, Var_79, 1) = ((MR_Box) (ll_backend__tag_switch__generate_tag_switch_14_p_0_1));
    MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_79, 3) = ((MR_Box) (Params_34));
  }
  Var_80 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0));
  backend_libs__switch_util__group_cases_by_ptag_14_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[0]), (MR_Word) (&ll_backend__tag_switch_scalar_common_2[0]), (MR_Word) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), PtagCountMap_33, TaggedCases_15, Var_79, ((MR_Box) (Var_80)), &conv7_CaseLabelMap0_35, ((MR_Box) (STATE_VARIABLE_MaybeEnd_0_68)), &conv6_STATE_VARIABLE_MaybeEnd_69, ((MR_Box) (STATE_VARIABLE_CI_0_70)), &conv5_STATE_VARIABLE_CI_82_82, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_36, &Var_37, &PtagCaseMap_38, &PtagGroups0_39);
  CaseLabelMap0_35 = ((MR_Word) (conv7_CaseLabelMap0_35));
  *STATE_VARIABLE_MaybeEnd_69 = ((MR_Word) (conv6_STATE_VARIABLE_MaybeEnd_69));
  STATE_VARIABLE_CI_82_82 = ((MR_Word) (conv5_STATE_VARIABLE_CI_82_82));
  mercury__map__count_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_2[1]), PtagCaseMap_38, &PtagsUsed_40);
  ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_82_82, &Globals_41);
  libs__globals__get_opt_tuple_2_p_0(Globals_41, &OptTuple_42);
  DenseSwitchSize_43 = ((MR_Integer) ((MR_hl_field(0, OptTuple_42, (MR_Integer) 28))));
  TrySwitchSize_44 = ((MR_Integer) ((MR_hl_field(0, OptTuple_42, (MR_Integer) 34))));
  BinarySwitchSize_45 = ((MR_Integer) ((MR_hl_field(0, OptTuple_42, (MR_Integer) 35))));
  succeeded = (PtagsUsed_40 >= DenseSwitchSize_43);
  if (succeeded)
    PrimaryMethod_46 = (MR_Integer) 2;
  else
  {
    succeeded = (PtagsUsed_40 >= BinarySwitchSize_45);
    if (succeeded)
      PrimaryMethod_46 = (MR_Integer) 3;
    else
    {
      succeeded = (PtagsUsed_40 >= TrySwitchSize_44);
      if (succeeded)
        PrimaryMethod_46 = (MR_Integer) 1;
      else
        PrimaryMethod_46 = (MR_Integer) 0;
    }
  }
  AccessCount_47 = ll_backend__tag_switch__switch_method_tag_access_count_1_f_0(PrimaryMethod_46);
  succeeded = (AccessCount_47 == (MR_Integer) 1);
  if (succeeded)
  {
    Var_84 = (MR_Integer) 2;
    succeeded = (PtagsUsed_40 >= Var_84);
    if (succeeded)
    {
      Var_85 = (MR_Integer) 357;
      libs__globals__lookup_int_option_3_p_0(Globals_41, Var_85, &NumRealRegs_48);
      succeeded = (NumRealRegs_48 == (MR_Integer) 0);
      if (!(succeeded))
      {
        MR_Integer PtagRegNo_49;
        MR_Word Var_86;

        succeeded = ((MR_tag((MR_Word) PtagReg_28)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_86 = ((MR_Unsigned) ((MR_hl_field(1, PtagReg_28, (MR_Integer) 0))) & (MR_Integer) 1);
          PtagRegNo_49 = ((MR_Integer) ((MR_hl_field(1, PtagReg_28, (MR_Integer) 1))));
          succeeded = (Var_86 == (MR_Integer) 0);
        }
        if (succeeded)
          succeeded = (PtagRegNo_49 <= NumRealRegs_48);
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_tag_switch\'/14", (MR_String) "improper reg in tag switch");
            return;
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;

    {
      Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_91, 2) = ((MR_Box) (VarRval_16));
    }
    {
      Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_90, 1) = ((MR_Box) (PtagReg_28));
      MR_hl_field(3, Var_90, 2) = ((MR_Box) (Var_91));
    }
    {
      Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_89, 0) = ((MR_Box) (Var_90));
      MR_hl_field(0, Var_89, 1) = ((MR_Box) ((MR_String) "compute tag to switch on"));
    }
    PtagCode_50 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_89)));
    {
      PtagRval_51 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PtagRval_51, 0) = ((MR_Box) (PtagReg_28));
    }
  }
  else
  {
    PtagCode_50 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    {
      PtagRval_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, PtagRval_51, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, PtagRval_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, PtagRval_51, 2) = ((MR_Box) (VarRval_16));
    }
  }
  {
    Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_96, 1) = ((MR_Box) (EndLabel_22));
  }
  {
    Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_95, 0) = ((MR_Box) (Var_96));
    MR_hl_field(0, Var_95, 1) = ((MR_Box) ((MR_String) "end of tag switch"));
  }
  EndCode_52 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_95)));
  switch (CanFail_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FailLabel_55;
        MR_Word FailLabelCode_56;
        MR_Word FailureCode_57;
        MR_Word STATE_VARIABLE_CI_98_98;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word STATE_VARIABLE_CLD_102_102;

        ll_backend__code_info__get_next_label_3_p_0(&FailLabel_55, STATE_VARIABLE_CI_82_82, &STATE_VARIABLE_CI_98_98);
        {
          MaybeFailLabel_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeFailLabel_53, 0) = ((MR_Box) (FailLabel_55));
        }
        {
          Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_100, 1) = ((MR_Box) (FailLabel_55));
        }
        {
          Var_99 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_99, 0) = ((MR_Box) (Var_100));
          MR_hl_field(0, Var_99, 1) = ((MR_Box) ((MR_String) "switch has failed"));
        }
        FailLabelCode_56 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_99)));
        ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_30, STATE_VARIABLE_CI_98_98, &STATE_VARIABLE_CLD_102_102);
        ll_backend__code_loc_dep__generate_failure_4_p_0(&FailureCode_57, STATE_VARIABLE_CI_98_98, &STATE_VARIABLE_CI_103_103, STATE_VARIABLE_CLD_102_102);
        FailCode_54 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailLabelCode_56, FailureCode_57);
      }
      break;
    case (MR_Integer) 1:
      {
        MaybeFailLabel_53 = (MR_Word) ((MR_Unsigned) 0U);
        FailCode_54 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        STATE_VARIABLE_CI_103_103 = STATE_VARIABLE_CI_82_82;
      }
      break;
  }
  switch (PrimaryMethod_46) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        MR_Word PtagGroups_58;

        backend_libs__switch_util__order_ptag_specific_groups_by_value_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), PtagGroups0_39, &PtagGroups_58);
        ll_backend__tag_switch__generate_primary_binary_search_13_p_0(PtagCountMap_33, VarRval_16, PtagRval_51, SectagReg_29, MaybeFailLabel_53, PtagGroups_58, UINT8_C(0), MaxPtagUint8_32, &CasesCode_59, CaseLabelMap0_35, &CaseLabelMap_60, STATE_VARIABLE_CI_103_103, STATE_VARIABLE_CI_71);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TargetMaybeLabels_61;
        MR_Word TableCode_62;
        MR_Word SwitchCode_63;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word PtagGroups_122;

        backend_libs__switch_util__order_ptag_specific_groups_by_value_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), PtagGroups0_39, &PtagGroups_122);
        ll_backend__tag_switch__generate_primary_jump_table_13_p_0(PtagCountMap_33, VarRval_16, SectagReg_29, MaybeFailLabel_53, PtagGroups_122, UINT8_C(0), MaxPtagUint8_32, &TargetMaybeLabels_61, &TableCode_62, CaseLabelMap0_35, &CaseLabelMap_60, STATE_VARIABLE_CI_103_103, STATE_VARIABLE_CI_71);
        {
          Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(3, Var_109, 1) = ((MR_Box) (PtagRval_51));
          MR_hl_field(3, Var_109, 2) = ((MR_Box) (TargetMaybeLabels_61));
        }
        {
          Var_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_108, 0) = ((MR_Box) (Var_109));
          MR_hl_field(0, Var_108, 1) = ((MR_Box) ((MR_String) "switch on ptag"));
        }
        SwitchCode_63 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_108)));
        CasesCode_59 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SwitchCode_63, TableCode_62);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PtagGroups1_64;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Word PtagGroups_123;
        MR_Word MostFreqGroup_65;
        MR_Word OtherGroups_66;

        backend_libs__switch_util__order_ptag_groups_by_count_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), PtagGroups0_39, &PtagGroups1_64);
        succeeded = (CanFail_20 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (PtagGroups1_64 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MostFreqGroup_65 = ((MR_Word) ((MR_hl_field(1, PtagGroups1_64, (MR_Integer) 0))));
            OtherGroups_66 = ((MR_Word) ((MR_hl_field(1, PtagGroups1_64, (MR_Integer) 1))));
          }
        }
        if (succeeded)
        {
          MR_Word Var_111;

          {
            Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_111, 0) = ((MR_Box) (MostFreqGroup_65));
            MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          PtagGroups_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[2]), OtherGroups_66, Var_111);
        }
        else
          PtagGroups_123 = PtagGroups1_64;
        Var_113 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        Var_114 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        ll_backend__tag_switch__generate_primary_try_chain_13_p_0(PtagCountMap_33, VarRval_16, PtagRval_51, SectagReg_29, MaybeFailLabel_53, PtagGroups_123, Var_113, Var_114, &CasesCode_59, CaseLabelMap0_35, &CaseLabelMap_60, STATE_VARIABLE_CI_103_103, STATE_VARIABLE_CI_71);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word PtagGroups_124;

        backend_libs__switch_util__order_ptag_groups_by_count_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), PtagGroups0_39, &PtagGroups_124);
        ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(PtagCountMap_33, VarRval_16, PtagRval_51, SectagReg_29, MaybeFailLabel_53, PtagGroups_124, &CasesCode_59, CaseLabelMap0_35, &CaseLabelMap_60, STATE_VARIABLE_CI_103_103, STATE_VARIABLE_CI_71);
      }
      break;
  }
  Var_118 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  mercury__map__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_2[3]), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[6]), CaseLabelMap_60, ((MR_Box) (Var_118)), &conv9_RemainingCasesCode_67);
  RemainingCasesCode_67 = ((MR_Word) (conv9_RemainingCasesCode_67));
  Var_121 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_54, EndCode_52);
  Var_120 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RemainingCasesCode_67, Var_121);
  Var_119 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CasesCode_59, Var_120);
  *Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PtagCode_50, Var_119);
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__642__1_2_p_0(((uint8_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 3))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__630__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0(
  MR_Word PtagCountMap_14,
  MR_Word VarRval_15,
  MR_Word PtagRval_16,
  MR_Word SectagReg_17,
  MR_Word MaybeFailLabel_18,
  MR_Word PtagGroups_19,
  uint8_t MinPtag_20,
  uint8_t MaxPtag_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_50,
  MR_Word * STATE_VARIABLE_CaseLabelMap_51,
  MR_Word STATE_VARIABLE_CI_0_52,
  MR_Word * STATE_VARIABLE_CI_53)
{
  MR_bool succeeded = (MinPtag_20 == MaxPtag_21);

  if (succeeded)
    if ((PtagGroups_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((MaybeFailLabel_18 == (MR_Word) ((MR_Unsigned) 0U)))
        *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      else
      {
        MR_Word FailLabel_26 = ((MR_Word) ((MR_hl_field(1, MaybeFailLabel_18, (MR_Integer) 0))));
        MR_String PtagStr_27;
        MR_String Comment_28;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;

        PtagStr_27 = mercury__string__uint8_to_string_1_f_0(MinPtag_20);
        Comment_28 = mercury__string__f_43_43_2_f_0((MR_String) "no code for ptag ", PtagStr_27);
        {
          Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_57, 0) = ((MR_Box) (FailLabel_26));
        }
        {
          Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_56, 1) = ((MR_Box) (Var_57));
        }
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_55, 0) = ((MR_Box) (Var_56));
          MR_hl_field(0, Var_55, 1) = ((MR_Box) (Comment_28));
        }
        *Code_22 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_55)));
      }
      *STATE_VARIABLE_CaseLabelMap_51 = STATE_VARIABLE_CaseLabelMap_0_50;
      *STATE_VARIABLE_CI_53 = STATE_VARIABLE_CI_0_52;
    }
    else
    {
      MR_Word Var_109 = ((MR_Word) ((MR_hl_field(1, PtagGroups_19, (MR_Integer) 1))));
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(1, PtagGroups_19, (MR_Integer) 0))));

      if ((Var_109 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MainPtag_30;
        MR_Word Var_59;
        MR_Word Var_62;

        MainPtag_30 = ll_backend__tag_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_116_97_103_95_99_97_115_101_95_103_114_111_117_112_95_109_97_105_110_95_112_116_97_103_95_95_91_49_93_95_48_1_f_0(Var_110);
        Var_62 = (MR_Word) (MinPtag_20);
        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_59, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_4[8]));
          MR_hl_field(0, Var_59, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1));
          MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_59, 3) = ((MR_Box) (MainPtag_30));
          MR_hl_field(0, Var_59, 4) = ((MR_Box) (Var_62));
        }
        mercury__require__expect_3_p_0(Var_59, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "cur_primary mismatch");
        ll_backend__tag_switch__generate_ptag_group_code_10_p_0(PtagCountMap_14, VarRval_15, SectagReg_17, MaybeFailLabel_18, Var_110, Code_22, STATE_VARIABLE_CaseLabelMap_0_50, STATE_VARIABLE_CaseLabelMap_51, STATE_VARIABLE_CI_0_52, STATE_VARIABLE_CI_53);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "PtagGroups not singleton or empty when binary search ends");
          return;
        }
    }
  else
  {
    uint8_t LoRangeMax_34;
    uint8_t EqHiRangeMin_35;
    MR_Word InLoGroup_36;
    MR_Word LoGroups_39;
    MR_Word EqHiGroups_40;
    MR_Word EqHiLabel_41;
    MR_String IfLoComment_42;
    MR_String EqHiLabelComment_43;
    MR_Word LoRangeMaxConst_44;
    MR_Word TestRval_45;
    MR_Word IfLoCode_46;
    MR_Word EqHiLabelCode_47;
    MR_Word LoRangeCode_48;
    MR_Word EqHihRangeCode_49;
    uint8_t Var_68 = (MinPtag_20 + MaxPtag_21);
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

    LoRangeMax_34 = mercury__uint8__f_47_47_2_f_0(Var_68, UINT8_C(2));
    EqHiRangeMin_35 = (LoRangeMax_34 + UINT8_C(1));
    {
      InLoGroup_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InLoGroup_36, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_4[9]));
      MR_hl_field(0, InLoGroup_36, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2));
      MR_hl_field(0, InLoGroup_36, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, InLoGroup_36, 3) = ((MR_Box) (MR_Word) (LoRangeMax_34));
    }
    mercury__list__filter_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[2]), InLoGroup_36, PtagGroups_19, &LoGroups_39, &EqHiGroups_40);
    ll_backend__code_info__get_next_label_3_p_0(&EqHiLabel_41, STATE_VARIABLE_CI_0_52, &STATE_VARIABLE_CI_73_73);
    mercury__string__format__format_cast_uint8_to_uint_2_p_0(LoRangeMax_34, &Var_112);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_3[2]), (MR_Integer) 1, Var_112, &Var_113);
    Var_121 = mercury__string__f_43_43_2_f_0((MR_String) " to ", Var_113);
    mercury__string__format__format_cast_uint8_to_uint_2_p_0(MinPtag_20, &Var_123);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_3[2]), (MR_Integer) 1, Var_123, &Var_124);
    Var_131 = mercury__string__f_43_43_2_f_0(Var_124, Var_121);
    IfLoComment_42 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough for ptags ", Var_131);
    mercury__string__format__format_cast_uint8_to_uint_2_p_0(MaxPtag_21, &Var_134);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_3[2]), (MR_Integer) 1, Var_134, &Var_135);
    Var_143 = mercury__string__f_43_43_2_f_0((MR_String) " to ", Var_135);
    mercury__string__format__format_cast_uint8_to_uint_2_p_0(EqHiRangeMin_35, &Var_145);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_3[2]), (MR_Integer) 1, Var_145, &Var_146);
    Var_153 = mercury__string__f_43_43_2_f_0(Var_146, Var_143);
    EqHiLabelComment_43 = mercury__string__f_43_43_2_f_0((MR_String) "code for ptags ", Var_153);
    Var_87 = mercury__uint8__cast_to_int_1_f_0(LoRangeMax_34);
    {
      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
    }
    {
      LoRangeMaxConst_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, LoRangeMaxConst_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, LoRangeMaxConst_44, 1) = ((MR_Box) (Var_86));
    }
    {
      TestRval_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, TestRval_45, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, TestRval_45, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[13])));
      MR_hl_field(3, TestRval_45, 2) = ((MR_Box) (PtagRval_16));
      MR_hl_field(3, TestRval_45, 3) = ((MR_Box) (LoRangeMaxConst_44));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (EqHiLabel_41));
    }
    {
      Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_91, 1) = ((MR_Box) (TestRval_45));
      MR_hl_field(3, Var_91, 2) = ((MR_Box) (Var_92));
    }
    {
      Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_90, 0) = ((MR_Box) (Var_91));
      MR_hl_field(0, Var_90, 1) = ((MR_Box) (IfLoComment_42));
    }
    IfLoCode_46 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_90)));
    {
      Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_94, 1) = ((MR_Box) (EqHiLabel_41));
    }
    {
      Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(0, Var_93, 1) = ((MR_Box) (EqHiLabelComment_43));
    }
    EqHiLabelCode_47 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_93)));
    ll_backend__tag_switch__generate_primary_binary_search_13_p_0(PtagCountMap_14, VarRval_15, PtagRval_16, SectagReg_17, MaybeFailLabel_18, LoGroups_39, MinPtag_20, LoRangeMax_34, &LoRangeCode_48, STATE_VARIABLE_CaseLabelMap_0_50, &STATE_VARIABLE_CaseLabelMap_95_95, STATE_VARIABLE_CI_73_73, &STATE_VARIABLE_CI_96_96);
    ll_backend__tag_switch__generate_primary_binary_search_13_p_0(PtagCountMap_14, VarRval_15, PtagRval_16, SectagReg_17, MaybeFailLabel_18, EqHiGroups_40, EqHiRangeMin_35, MaxPtag_21, &EqHihRangeCode_49, STATE_VARIABLE_CaseLabelMap_95_95, STATE_VARIABLE_CaseLabelMap_51, STATE_VARIABLE_CI_96_96, STATE_VARIABLE_CI_53);
    Var_100 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EqHiLabelCode_47, EqHihRangeCode_49);
    Var_99 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LoRangeCode_48, Var_100);
    *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), IfLoCode_46, Var_99);
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

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__551__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0(
  MR_Word PtagCountMap_14,
  MR_Word VarRval_15,
  MR_Word SectagReg_16,
  MR_Word MaybeFailLabel_17,
  MR_Word PtagGroups_18,
  uint8_t CurPtagUint8_19,
  uint8_t MaxPtagUint8_20,
  MR_Word * TargetMaybeLabels_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_37,
  MR_Word * STATE_VARIABLE_CaseLabelMap_38,
  MR_Word STATE_VARIABLE_CI_0_39,
  MR_Word * STATE_VARIABLE_CI_40)
{
  MR_bool succeeded = (CurPtagUint8_19 > MaxPtagUint8_20);

  if (succeeded)
  {
    MR_Word Var_41;

    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_4[7]));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1));
      MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_41, 3) = ((MR_Box) (PtagGroups_18));
      MR_hl_field(0, Var_41, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_41, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_jump_table\'/13", (MR_String) "PtagGroups != [] when Cur > Max");
    *TargetMaybeLabels_21 = (MR_Word) ((MR_Unsigned) 0U);
    *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CI_40 = STATE_VARIABLE_CI_0_39;
    *STATE_VARIABLE_CaseLabelMap_38 = STATE_VARIABLE_CaseLabelMap_0_37;
  }
  else
  {
    uint8_t NextPtagUint8_25 = (CurPtagUint8_19 + UINT8_C(1));
    MR_Word HeadMaybeTargetLabel_32;
    MR_Word HeadEntryCode_33;
    MR_Word NextPtagGroups_34;
    MR_Word TailTargetMaybeLabels_35;
    MR_Word TailEntriesCode_36;
    MR_Word STATE_VARIABLE_CaseLabelMap_52_52;
    MR_Word STATE_VARIABLE_CI_53_53;
    MR_Word PtagGroup_26;
    MR_Word TailPtagGroups_27;
    MR_Word Var_46;
    uint8_t Var_60;

    succeeded = (PtagGroups_18 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PtagGroup_26 = ((MR_Word) ((MR_hl_field(1, PtagGroups_18, (MR_Integer) 0))));
      TailPtagGroups_27 = ((MR_Word) ((MR_hl_field(1, PtagGroups_18, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) PtagGroup_26)) == (MR_Integer) 0))
      {
        MR_Word WholeInfo_61 = ((MR_Word) ((MR_hl_field(0, PtagGroup_26, (MR_Integer) 0))));

        Var_46 = ((MR_Word) ((MR_hl_field(0, WholeInfo_61, (MR_Integer) 0))));
      }
      else
      {
        MR_Word SharedInfo_65 = ((MR_Word) ((MR_hl_field(1, PtagGroup_26, (MR_Integer) 0))));

        Var_46 = ((MR_Word) ((MR_hl_field(0, SharedInfo_65, (MR_Integer) 0))));
      }
      Var_60 = (uint8_t) (Var_46);
      succeeded = (CurPtagUint8_19 == Var_60);
    }
    if (succeeded)
    {
      MR_Word ThisPtagLabel_28;
      MR_String Comment_29;
      MR_Word LabelCode_30;
      MR_Word HeadEntryCode0_31;
      MR_Word STATE_VARIABLE_CI_47_47;
      MR_String Var_49;
      MR_Word Var_50;
      MR_Word Var_51;

      ll_backend__code_info__get_next_label_3_p_0(&ThisPtagLabel_28, STATE_VARIABLE_CI_0_39, &STATE_VARIABLE_CI_47_47);
      Var_49 = mercury__string__uint8_to_string_1_f_0(CurPtagUint8_19);
      Comment_29 = mercury__string__f_43_43_2_f_0((MR_String) "start of a case in ptag switch: ptag ", Var_49);
      {
        Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_51, 1) = ((MR_Box) (ThisPtagLabel_28));
      }
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(0, Var_50, 1) = ((MR_Box) (Comment_29));
      }
      LabelCode_30 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_50)));
      ll_backend__tag_switch__generate_ptag_group_code_10_p_0(PtagCountMap_14, VarRval_15, SectagReg_16, MaybeFailLabel_17, PtagGroup_26, &HeadEntryCode0_31, STATE_VARIABLE_CaseLabelMap_0_37, &STATE_VARIABLE_CaseLabelMap_52_52, STATE_VARIABLE_CI_47_47, &STATE_VARIABLE_CI_53_53);
      {
        HeadMaybeTargetLabel_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadMaybeTargetLabel_32, 0) = ((MR_Box) (ThisPtagLabel_28));
      }
      HeadEntryCode_33 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_30, HeadEntryCode0_31);
      NextPtagGroups_34 = TailPtagGroups_27;
    }
    else
    {
      HeadMaybeTargetLabel_32 = MaybeFailLabel_17;
      HeadEntryCode_33 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      NextPtagGroups_34 = PtagGroups_18;
      STATE_VARIABLE_CI_53_53 = STATE_VARIABLE_CI_0_39;
      STATE_VARIABLE_CaseLabelMap_52_52 = STATE_VARIABLE_CaseLabelMap_0_37;
    }
    ll_backend__tag_switch__generate_primary_jump_table_13_p_0(PtagCountMap_14, VarRval_15, SectagReg_16, MaybeFailLabel_17, NextPtagGroups_34, NextPtagUint8_25, MaxPtagUint8_20, &TailTargetMaybeLabels_35, &TailEntriesCode_36, STATE_VARIABLE_CaseLabelMap_52_52, STATE_VARIABLE_CaseLabelMap_38, STATE_VARIABLE_CI_53_53, STATE_VARIABLE_CI_40);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TargetMaybeLabels_21 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadMaybeTargetLabel_32));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailTargetMaybeLabels_35));
    }
    *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadEntryCode_33, TailEntriesCode_36);
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
  MR_Word PtagCountMap_1,
  MR_Word VarRval_2,
  MR_Word PtagRval_3,
  MR_Word SectagReg_4,
  MR_Word MaybeFailLabel_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_TryChainCode_0_7,
  MR_Word STATE_VARIABLE_GroupsCode_0_8,
  MR_Word * Code_9,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_10,
  MR_Word * STATE_VARIABLE_CaseLabelMap_11,
  MR_Word STATE_VARIABLE_CI_0_12,
  MR_Word * STATE_VARIABLE_CI_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_chain\'/13", (MR_String) "empty list");
        return;
      }
    else
    {
      MR_Word PtagGroup_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
      MR_Word PtagGroups_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));

      if ((PtagGroups_36 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((MaybeFailLabel_5 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Comment_46;
          MR_Word CommentCode_47;
          MR_Word GroupCode_48;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_76;
          MR_Word Var_77;

          if (((MR_tag((MR_Word) PtagGroup_35)) == (MR_Integer) 0))
          {
            MR_Word WholeInfo_82 = ((MR_Word) ((MR_hl_field(0, PtagGroup_35, (MR_Integer) 0))));
            MR_Word MainPtag_83 = ((MR_Word) ((MR_hl_field(0, WholeInfo_82, (MR_Integer) 0))));
            MR_Word OtherPtags_84 = ((MR_Word) ((MR_hl_field(0, WholeInfo_82, (MR_Integer) 1))));

            if ((OtherPtags_84 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_String Var_93;
              uint8_t Ptag_106 = (uint8_t) (MainPtag_83);

              Var_93 = mercury__string__uint8_to_string_1_f_0(Ptag_106);
              Comment_46 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough to last ptag value: ", Var_93);
            }
            else
            {
              MR_String Var_94;
              MR_String Var_95;
              MR_String Var_96;
              MR_String Var_98;
              MR_String Var_99;
              MR_Word Var_101;
              uint8_t Ptag_107 = (uint8_t) (MainPtag_83);

              Var_95 = mercury__string__uint8_to_string_1_f_0(Ptag_107);
              Var_101 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[5]), OtherPtags_84);
              Var_99 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_101);
              Var_98 = mercury__string__f_43_43_2_f_0(Var_99, (MR_String) ")");
              Var_96 = mercury__string__f_43_43_2_f_0((MR_String) " (shared with ", Var_98);
              Var_94 = mercury__string__f_43_43_2_f_0(Var_95, Var_96);
              Comment_46 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough to last ptag value: ", Var_94);
            }
          }
          else
          {
            MR_Word SharedInfo_87 = ((MR_Word) ((MR_hl_field(1, PtagGroup_35, (MR_Integer) 0))));
            MR_Word MainPtag_109 = ((MR_Word) ((MR_hl_field(0, SharedInfo_87, (MR_Integer) 0))));
            MR_String Var_111;
            uint8_t Ptag_112 = (uint8_t) (MainPtag_109);

            Var_111 = mercury__string__uint8_to_string_1_f_0(Ptag_112);
            Comment_46 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough to last ptag value: ", Var_111);
          }
          {
            Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_72, 0) = ((MR_Box) (Comment_46));
          }
          {
            Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_71, 0) = ((MR_Box) (Var_72));
            MR_hl_field(0, Var_71, 1) = ((MR_Box) ((MR_String) ""));
          }
          CommentCode_47 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_71)));
          ll_backend__tag_switch__generate_ptag_group_code_10_p_0(PtagCountMap_1, VarRval_2, SectagReg_4, MaybeFailLabel_5, PtagGroup_35, &GroupCode_48, STATE_VARIABLE_CaseLabelMap_0_10, STATE_VARIABLE_CaseLabelMap_11, STATE_VARIABLE_CI_0_12, STATE_VARIABLE_CI_13);
          Var_77 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GroupCode_48, STATE_VARIABLE_GroupsCode_0_8);
          Var_76 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommentCode_47, Var_77);
          *Code_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_0_7, Var_76);
        }
        else
        {
          MR_Word FailLabel_44 = ((MR_Word) ((MR_hl_field(1, MaybeFailLabel_5, (MR_Integer) 0))));
          MR_Word FailCode_45;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_69;
          MR_Word STATE_VARIABLE_TryChainCode_55_78;
          MR_Word STATE_VARIABLE_GroupsCode_56_79;

          ll_backend__tag_switch__generate_primary_try_chain_case_14_p_0(PtagCountMap_1, VarRval_2, PtagRval_3, SectagReg_4, MaybeFailLabel_5, PtagGroup_35, STATE_VARIABLE_TryChainCode_0_7, &STATE_VARIABLE_TryChainCode_55_78, STATE_VARIABLE_GroupsCode_0_8, &STATE_VARIABLE_GroupsCode_56_79, STATE_VARIABLE_CaseLabelMap_0_10, STATE_VARIABLE_CaseLabelMap_11, STATE_VARIABLE_CI_0_12, STATE_VARIABLE_CI_13);
          {
            Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_67, 0) = ((MR_Box) (FailLabel_44));
          }
          {
            Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_66, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(0, Var_65, 1) = ((MR_Box) ((MR_String) "ptag with no code to handle it"));
          }
          FailCode_45 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_65)));
          Var_69 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_45, STATE_VARIABLE_GroupsCode_56_79);
          *Code_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_55_78, Var_69);
        }
      else
      {
        MR_Word STATE_VARIABLE_TryChainCode_55_55;
        MR_Word STATE_VARIABLE_GroupsCode_56_56;
        MR_Word STATE_VARIABLE_CaseLabelMap_57_57;
        MR_Word STATE_VARIABLE_CI_58_58;
        MR_Word next_value_of_HeadVar__6_6;
        MR_Word next_value_of_STATE_VARIABLE_TryChainCode_0_7;
        MR_Word next_value_of_STATE_VARIABLE_GroupsCode_0_8;
        MR_Word next_value_of_STATE_VARIABLE_CaseLabelMap_0_10;
        MR_Word next_value_of_STATE_VARIABLE_CI_0_12;

        ll_backend__tag_switch__generate_primary_try_chain_case_14_p_0(PtagCountMap_1, VarRval_2, PtagRval_3, SectagReg_4, MaybeFailLabel_5, PtagGroup_35, STATE_VARIABLE_TryChainCode_0_7, &STATE_VARIABLE_TryChainCode_55_55, STATE_VARIABLE_GroupsCode_0_8, &STATE_VARIABLE_GroupsCode_56_56, STATE_VARIABLE_CaseLabelMap_0_10, &STATE_VARIABLE_CaseLabelMap_57_57, STATE_VARIABLE_CI_0_12, &STATE_VARIABLE_CI_58_58);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__6_6 = PtagGroups_36;
        next_value_of_STATE_VARIABLE_TryChainCode_0_7 = STATE_VARIABLE_TryChainCode_55_55;
        next_value_of_STATE_VARIABLE_GroupsCode_0_8 = STATE_VARIABLE_GroupsCode_56_56;
        next_value_of_STATE_VARIABLE_CaseLabelMap_0_10 = STATE_VARIABLE_CaseLabelMap_57_57;
        next_value_of_STATE_VARIABLE_CI_0_12 = STATE_VARIABLE_CI_58_58;
        HeadVar__6_6 = next_value_of_HeadVar__6_6;
        STATE_VARIABLE_TryChainCode_0_7 = next_value_of_STATE_VARIABLE_TryChainCode_0_7;
        STATE_VARIABLE_GroupsCode_0_8 = next_value_of_STATE_VARIABLE_GroupsCode_0_8;
        STATE_VARIABLE_CaseLabelMap_0_10 = next_value_of_STATE_VARIABLE_CaseLabelMap_0_10;
        STATE_VARIABLE_CI_0_12 = next_value_of_STATE_VARIABLE_CI_0_12;
        continue;
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_14_p_0_1(
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
ll_backend__tag_switch__generate_primary_try_chain_case_14_p_0(
  MR_Word PtagCountMap_15,
  MR_Word VarRval_16,
  MR_Word PtagRval_17,
  MR_Word SectagReg_18,
  MR_Word MaybeFailLabel_19,
  MR_Word PtagGroup_20,
  MR_Word STATE_VARIABLE_TryChainCode_0_32,
  MR_Word * STATE_VARIABLE_TryChainCode_33,
  MR_Word STATE_VARIABLE_GroupsCode_0_34,
  MR_Word * STATE_VARIABLE_GroupsCode_35,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_36,
  MR_Word * STATE_VARIABLE_CaseLabelMap_37,
  MR_Word STATE_VARIABLE_CI_0_38,
  MR_Word * STATE_VARIABLE_CI_39)
{
  MR_Word ThisGroupLabel_25;
  MR_Word IsApplicableTestRval_26;
  MR_Word TestCode_27;
  MR_String Comment_28;
  MR_Word LabelCode_29;
  MR_Word GroupCode_30;
  MR_Word LabelledGroupCode_31;
  MR_Word STATE_VARIABLE_CI_40_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_46;
  MR_Word Var_47;

  ll_backend__code_info__get_next_label_3_p_0(&ThisGroupLabel_25, STATE_VARIABLE_CI_0_38, &STATE_VARIABLE_CI_40_40);
  if (((MR_tag((MR_Word) PtagGroup_20)) == (MR_Integer) 0))
  {
    MR_Word WholeInfo_49 = ((MR_Word) ((MR_hl_field(0, PtagGroup_20, (MR_Integer) 0))));
    MR_Word MainPtag_50 = ((MR_Word) ((MR_hl_field(0, WholeInfo_49, (MR_Integer) 0))));
    MR_Word OtherPtags_51 = ((MR_Word) ((MR_hl_field(0, WholeInfo_49, (MR_Integer) 1))));

    if ((OtherPtags_51 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      uint8_t MainPtagUint8_60 = (uint8_t) (MainPtag_50);
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Integer Var_71;

      Var_71 = mercury__uint8__cast_to_int_1_f_0(MainPtagUint8_60);
      {
        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
      }
      {
        Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_69, 1) = ((MR_Box) (Var_70));
      }
      {
        IsApplicableTestRval_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, IsApplicableTestRval_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, IsApplicableTestRval_26, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[7])));
        MR_hl_field(3, IsApplicableTestRval_26, 2) = ((MR_Box) (PtagRval_17));
        MR_hl_field(3, IsApplicableTestRval_26, 3) = ((MR_Box) (Var_69));
      }
    }
    else
    {
      MR_Unsigned Bitmap_63;
      MR_Word SelectedBitMaskRval_65;
      MR_Word SelectedBitRval_66;
      MR_Word Var_80;
      MR_Word Var_81;
      uint8_t HeadPtagUint8_113 = (uint8_t) (MainPtag_50);
      MR_Word HeadTailPtag_114;
      MR_Word TailTailPtags_115;
      MR_Unsigned STATE_VARIABLE_Bitmap_13_116;
      MR_Unsigned Var_117;
      MR_Unsigned Var_119;

      Var_119 = mercury__uint8__cast_to_uint_1_f_0(HeadPtagUint8_113);
      Var_117 = ((MR_Unsigned) 1U << (int) Var_119);
      STATE_VARIABLE_Bitmap_13_116 = ((MR_Unsigned) 0U | Var_117);
      HeadTailPtag_114 = ((MR_Word) ((MR_hl_field(1, OtherPtags_51, (MR_Integer) 0))));
      TailTailPtags_115 = ((MR_Word) ((MR_hl_field(1, OtherPtags_51, (MR_Integer) 1))));
      ll_backend__tag_switch__encode_ptags_as_bitmap_loop_4_p_0(HeadTailPtag_114, TailTailPtags_115, STATE_VARIABLE_Bitmap_13_116, &Bitmap_63);
      {
        SelectedBitMaskRval_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, SelectedBitMaskRval_65, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, SelectedBitMaskRval_65, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[8])));
        MR_hl_field(3, SelectedBitMaskRval_65, 2) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
        MR_hl_field(3, SelectedBitMaskRval_65, 3) = ((MR_Box) (PtagRval_17));
      }
      {
        Var_81 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_81, 0) = ((MR_Box) (Bitmap_63));
      }
      {
        Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_80, 1) = ((MR_Box) (Var_81));
      }
      {
        SelectedBitRval_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, SelectedBitRval_66, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, SelectedBitRval_66, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[10])));
        MR_hl_field(3, SelectedBitRval_66, 2) = ((MR_Box) (SelectedBitMaskRval_65));
        MR_hl_field(3, SelectedBitRval_66, 3) = ((MR_Box) (Var_80));
      }
      {
        IsApplicableTestRval_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, IsApplicableTestRval_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, IsApplicableTestRval_26, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[11])));
        MR_hl_field(3, IsApplicableTestRval_26, 2) = ((MR_Box) (SelectedBitRval_66));
        MR_hl_field(3, IsApplicableTestRval_26, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[12])));
      }
    }
  }
  else
  {
    MR_Word SharedInfo_54 = ((MR_Word) ((MR_hl_field(1, PtagGroup_20, (MR_Integer) 0))));
    MR_Word MainPtag_121 = ((MR_Word) ((MR_hl_field(0, SharedInfo_54, (MR_Integer) 0))));
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
      IsApplicableTestRval_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, IsApplicableTestRval_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, IsApplicableTestRval_26, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[7])));
      MR_hl_field(3, IsApplicableTestRval_26, 2) = ((MR_Box) (PtagRval_17));
      MR_hl_field(3, IsApplicableTestRval_26, 3) = ((MR_Box) (Var_125));
    }
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (ThisGroupLabel_25));
  }
  {
    Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_42, 1) = ((MR_Box) (IsApplicableTestRval_26));
    MR_hl_field(3, Var_42, 2) = ((MR_Box) (Var_43));
  }
  {
    Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_41, 0) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_41, 1) = ((MR_Box) ((MR_String) "test ptag only"));
  }
  TestCode_27 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_41)));
  if (((MR_tag((MR_Word) PtagGroup_20)) == (MR_Integer) 0))
  {
    MR_Word WholeInfo_87 = ((MR_Word) ((MR_hl_field(0, PtagGroup_20, (MR_Integer) 0))));
    MR_Word MainPtag_88 = ((MR_Word) ((MR_hl_field(0, WholeInfo_87, (MR_Integer) 0))));
    MR_Word OtherPtags_89 = ((MR_Word) ((MR_hl_field(0, WholeInfo_87, (MR_Integer) 1))));

    if ((OtherPtags_89 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_98;
      uint8_t Ptag_111 = (uint8_t) (MainPtag_88);

      Var_98 = mercury__string__uint8_to_string_1_f_0(Ptag_111);
      Comment_28 = mercury__string__f_43_43_2_f_0((MR_String) "ptag value(s): ", Var_98);
    }
    else
    {
      MR_String Var_99;
      MR_String Var_100;
      MR_String Var_101;
      MR_String Var_103;
      MR_String Var_104;
      MR_Word Var_106;
      uint8_t Ptag_112 = (uint8_t) (MainPtag_88);

      Var_100 = mercury__string__uint8_to_string_1_f_0(Ptag_112);
      Var_106 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[4]), OtherPtags_89);
      Var_104 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_106);
      Var_103 = mercury__string__f_43_43_2_f_0(Var_104, (MR_String) ")");
      Var_101 = mercury__string__f_43_43_2_f_0((MR_String) " (shared with ", Var_103);
      Var_99 = mercury__string__f_43_43_2_f_0(Var_100, Var_101);
      Comment_28 = mercury__string__f_43_43_2_f_0((MR_String) "ptag value(s): ", Var_99);
    }
  }
  else
  {
    MR_Word SharedInfo_92 = ((MR_Word) ((MR_hl_field(1, PtagGroup_20, (MR_Integer) 0))));
    MR_Word MainPtag_129 = ((MR_Word) ((MR_hl_field(0, SharedInfo_92, (MR_Integer) 0))));
    MR_String Var_131;
    uint8_t Ptag_132 = (uint8_t) (MainPtag_129);

    Var_131 = mercury__string__uint8_to_string_1_f_0(Ptag_132);
    Comment_28 = mercury__string__f_43_43_2_f_0((MR_String) "ptag value(s): ", Var_131);
  }
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (ThisGroupLabel_25));
  }
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (Comment_28));
  }
  LabelCode_29 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_46)));
  ll_backend__tag_switch__generate_ptag_group_code_10_p_0(PtagCountMap_15, VarRval_16, SectagReg_18, MaybeFailLabel_19, PtagGroup_20, &GroupCode_30, STATE_VARIABLE_CaseLabelMap_0_36, STATE_VARIABLE_CaseLabelMap_37, STATE_VARIABLE_CI_40_40, STATE_VARIABLE_CI_39);
  LabelledGroupCode_31 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_29, GroupCode_30);
  *STATE_VARIABLE_TryChainCode_33 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_0_32, TestCode_27);
  *STATE_VARIABLE_GroupsCode_35 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelledGroupCode_31, STATE_VARIABLE_GroupsCode_0_34);
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(
  MR_Word PtagCountMap_1,
  MR_Word VarRval_2,
  MR_Word PtagRval_3,
  MR_Word SectagReg_4,
  MR_Word MaybeFailLabel_5,
  MR_Word HeadVar__6_6,
  MR_Word * Code_7,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_8,
  MR_Word * STATE_VARIABLE_CaseLabelMap_9,
  MR_Word STATE_VARIABLE_CI_0_10,
  MR_Word * STATE_VARIABLE_CI_11)
{
  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_me_else_chain\'/11", (MR_String) "empty switch");
      return;
    }
  else
  {
    MR_Word PtagGroup_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
    MR_Word PtagGroups_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));

    if ((PtagGroups_32 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MaybeFailLabel_5 == (MR_Word) ((MR_Unsigned) 0U)))
        ll_backend__tag_switch__generate_ptag_group_code_10_p_0(PtagCountMap_1, VarRval_2, SectagReg_4, MaybeFailLabel_5, PtagGroup_31, Code_7, STATE_VARIABLE_CaseLabelMap_0_8, STATE_VARIABLE_CaseLabelMap_9, STATE_VARIABLE_CI_0_10, STATE_VARIABLE_CI_11);
      else
      {
        MR_Word FailLabel_40 = ((MR_Word) ((MR_hl_field(1, MaybeFailLabel_5, (MR_Integer) 0))));
        MR_Word FailCode_41;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word ThisGroupCode_58;

        ll_backend__tag_switch__generate_primary_try_me_else_chain_group_11_p_0(PtagCountMap_1, VarRval_2, PtagRval_3, SectagReg_4, MaybeFailLabel_5, PtagGroup_31, &ThisGroupCode_58, STATE_VARIABLE_CaseLabelMap_0_8, STATE_VARIABLE_CaseLabelMap_9, STATE_VARIABLE_CI_0_10, STATE_VARIABLE_CI_11);
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (FailLabel_40));
        }
        {
          Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_53, 1) = ((MR_Box) (Var_54));
        }
        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_52, 0) = ((MR_Box) (Var_53));
          MR_hl_field(0, Var_52, 1) = ((MR_Box) ((MR_String) "ptag with no code to handle it"));
        }
        FailCode_41 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_52)));
        *Code_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisGroupCode_58, FailCode_41);
      }
    else
    {
      MR_Word ThisGroupCode_38;
      MR_Word OtherGroupsCode_39;
      MR_Word STATE_VARIABLE_CaseLabelMap_46_46;
      MR_Word STATE_VARIABLE_CI_47_47;

      ll_backend__tag_switch__generate_primary_try_me_else_chain_group_11_p_0(PtagCountMap_1, VarRval_2, PtagRval_3, SectagReg_4, MaybeFailLabel_5, PtagGroup_31, &ThisGroupCode_38, STATE_VARIABLE_CaseLabelMap_0_8, &STATE_VARIABLE_CaseLabelMap_46_46, STATE_VARIABLE_CI_0_10, &STATE_VARIABLE_CI_47_47);
      ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(PtagCountMap_1, VarRval_2, PtagRval_3, SectagReg_4, MaybeFailLabel_5, PtagGroups_32, &OtherGroupsCode_39, STATE_VARIABLE_CaseLabelMap_46_46, STATE_VARIABLE_CaseLabelMap_9, STATE_VARIABLE_CI_47_47, STATE_VARIABLE_CI_11);
      *Code_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisGroupCode_38, OtherGroupsCode_39);
    }
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_group_11_p_0(
  MR_Word PtagCountMap_12,
  MR_Word VarRval_13,
  MR_Word PtagRval_14,
  MR_Word SectagReg_15,
  MR_Word MaybeFailLabel_16,
  MR_Word PtagGroup_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_27,
  MR_Word * STATE_VARIABLE_CaseLabelMap_28,
  MR_Word STATE_VARIABLE_CI_0_29,
  MR_Word * STATE_VARIABLE_CI_30)
{
  MR_Word ElseLabel_21;
  MR_Word IsApplicableTestRval_22;
  MR_Word IsNotApplicableRval_23;
  MR_Word TestCode_24;
  MR_Word CaseCode_25;
  MR_Word ElseCode_26;
  MR_Word STATE_VARIABLE_CI_31_31;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;

  ll_backend__code_info__get_next_label_3_p_0(&ElseLabel_21, STATE_VARIABLE_CI_0_29, &STATE_VARIABLE_CI_31_31);
  if (((MR_tag((MR_Word) PtagGroup_17)) == (MR_Integer) 0))
  {
    MR_Word WholeInfo_44 = ((MR_Word) ((MR_hl_field(0, PtagGroup_17, (MR_Integer) 0))));
    MR_Word MainPtag_45 = ((MR_Word) ((MR_hl_field(0, WholeInfo_44, (MR_Integer) 0))));
    MR_Word OtherPtags_46 = ((MR_Word) ((MR_hl_field(0, WholeInfo_44, (MR_Integer) 1))));

    if ((OtherPtags_46 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      uint8_t MainPtagUint8_55 = (uint8_t) (MainPtag_45);
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Integer Var_66;

      Var_66 = mercury__uint8__cast_to_int_1_f_0(MainPtagUint8_55);
      {
        Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
      }
      {
        Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_64, 1) = ((MR_Box) (Var_65));
      }
      {
        IsApplicableTestRval_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, IsApplicableTestRval_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, IsApplicableTestRval_22, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[7])));
        MR_hl_field(3, IsApplicableTestRval_22, 2) = ((MR_Box) (PtagRval_14));
        MR_hl_field(3, IsApplicableTestRval_22, 3) = ((MR_Box) (Var_64));
      }
    }
    else
    {
      MR_Unsigned Bitmap_58;
      MR_Word SelectedBitMaskRval_60;
      MR_Word SelectedBitRval_61;
      MR_Word Var_75;
      MR_Word Var_76;
      uint8_t HeadPtagUint8_82 = (uint8_t) (MainPtag_45);
      MR_Word HeadTailPtag_83;
      MR_Word TailTailPtags_84;
      MR_Unsigned STATE_VARIABLE_Bitmap_13_85;
      MR_Unsigned Var_86;
      MR_Unsigned Var_88;

      Var_88 = mercury__uint8__cast_to_uint_1_f_0(HeadPtagUint8_82);
      Var_86 = ((MR_Unsigned) 1U << (int) Var_88);
      STATE_VARIABLE_Bitmap_13_85 = ((MR_Unsigned) 0U | Var_86);
      HeadTailPtag_83 = ((MR_Word) ((MR_hl_field(1, OtherPtags_46, (MR_Integer) 0))));
      TailTailPtags_84 = ((MR_Word) ((MR_hl_field(1, OtherPtags_46, (MR_Integer) 1))));
      ll_backend__tag_switch__encode_ptags_as_bitmap_loop_4_p_0(HeadTailPtag_83, TailTailPtags_84, STATE_VARIABLE_Bitmap_13_85, &Bitmap_58);
      {
        SelectedBitMaskRval_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, SelectedBitMaskRval_60, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, SelectedBitMaskRval_60, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[8])));
        MR_hl_field(3, SelectedBitMaskRval_60, 2) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[9])));
        MR_hl_field(3, SelectedBitMaskRval_60, 3) = ((MR_Box) (PtagRval_14));
      }
      {
        Var_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_76, 0) = ((MR_Box) (Bitmap_58));
      }
      {
        Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_75, 1) = ((MR_Box) (Var_76));
      }
      {
        SelectedBitRval_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, SelectedBitRval_61, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, SelectedBitRval_61, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[10])));
        MR_hl_field(3, SelectedBitRval_61, 2) = ((MR_Box) (SelectedBitMaskRval_60));
        MR_hl_field(3, SelectedBitRval_61, 3) = ((MR_Box) (Var_75));
      }
      {
        IsApplicableTestRval_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, IsApplicableTestRval_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, IsApplicableTestRval_22, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[11])));
        MR_hl_field(3, IsApplicableTestRval_22, 2) = ((MR_Box) (SelectedBitRval_61));
        MR_hl_field(3, IsApplicableTestRval_22, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[12])));
      }
    }
  }
  else
  {
    MR_Word SharedInfo_49 = ((MR_Word) ((MR_hl_field(1, PtagGroup_17, (MR_Integer) 0))));
    MR_Word MainPtag_90 = ((MR_Word) ((MR_hl_field(0, SharedInfo_49, (MR_Integer) 0))));
    uint8_t MainPtagUint8_92 = (uint8_t) (MainPtag_90);
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Integer Var_96;

    Var_96 = mercury__uint8__cast_to_int_1_f_0(MainPtagUint8_92);
    {
      Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
    }
    {
      Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_94, 1) = ((MR_Box) (Var_95));
    }
    {
      IsApplicableTestRval_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, IsApplicableTestRval_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, IsApplicableTestRval_22, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[7])));
      MR_hl_field(3, IsApplicableTestRval_22, 2) = ((MR_Box) (PtagRval_14));
      MR_hl_field(3, IsApplicableTestRval_22, 3) = ((MR_Box) (Var_94));
    }
  }
  {
    IsNotApplicableRval_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, IsNotApplicableRval_23, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, IsNotApplicableRval_23, 1) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, IsNotApplicableRval_23, 2) = ((MR_Box) (IsApplicableTestRval_22));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (ElseLabel_21));
  }
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_34, 1) = ((MR_Box) (IsNotApplicableRval_23));
    MR_hl_field(3, Var_34, 2) = ((MR_Box) (Var_35));
  }
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) ((MR_String) "test ptag(s) only"));
  }
  TestCode_24 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_33)));
  ll_backend__tag_switch__generate_ptag_group_code_10_p_0(PtagCountMap_12, VarRval_13, SectagReg_15, MaybeFailLabel_16, PtagGroup_17, &CaseCode_25, STATE_VARIABLE_CaseLabelMap_0_27, STATE_VARIABLE_CaseLabelMap_28, STATE_VARIABLE_CI_31_31, STATE_VARIABLE_CI_30);
  {
    Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_40, 1) = ((MR_Box) (ElseLabel_21));
  }
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) ((MR_String) "handle next ptag"));
  }
  ElseCode_26 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_39)));
  Var_42 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CaseCode_25, ElseCode_26);
  *Code_18 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_24, Var_42);
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_ptag_group_code_10_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_ptag_group_code__699__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_ptag_group_code_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_ptag_group_code__697__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__tag_switch__generate_ptag_group_code_10_p_0(
  MR_Word PtagCountMap_11,
  MR_Word VarRval_12,
  MR_Word SectagReg_13,
  MR_Word MaybeFailLabel_14,
  MR_Word PtagGroup_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_57,
  MR_Word * STATE_VARIABLE_CaseLabelMap_58,
  MR_Word STATE_VARIABLE_CI_0_59,
  MR_Word * STATE_VARIABLE_CI_60)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) PtagGroup_15)) == (MR_Integer) 0))
  {
    MR_Word WholeInfo_19 = ((MR_Word) ((MR_hl_field(0, PtagGroup_15, (MR_Integer) 0))));
    MR_Word CaseLabel_23 = ((MR_Word) ((MR_hl_field(0, WholeInfo_19, (MR_Integer) 3))));

    ll_backend__switch_case__generate_case_code_or_jump_4_p_0(CaseLabel_23, Code_16, STATE_VARIABLE_CaseLabelMap_0_57, STATE_VARIABLE_CaseLabelMap_58);
    *STATE_VARIABLE_CI_60 = STATE_VARIABLE_CI_0_59;
  }
  else
  {
    MR_Word SharedInfo_24 = ((MR_Word) ((MR_hl_field(1, PtagGroup_15, (MR_Integer) 0))));
    MR_Word Ptag_25 = ((MR_Word) ((MR_hl_field(0, SharedInfo_24, (MR_Integer) 0))));
    MR_Word SharedSectagLocn_26 = ((MR_Word) ((MR_hl_field(0, SharedInfo_24, (MR_Integer) 1))));
    MR_Unsigned MaxSectag_27 = ((MR_Unsigned) ((MR_hl_field(0, SharedInfo_24, (MR_Integer) 2))));
    MR_Word SectagToLabelMap_28 = ((MR_Word) ((MR_hl_field(0, SharedInfo_24, (MR_Integer) 4))));
    MR_Word LabelToSectagsMap_29 = ((MR_Word) ((MR_hl_field(0, SharedInfo_24, (MR_Integer) 5))));
    MR_Word CountInfo_30;
    MR_Word CountSectagLocn_31;
    MR_Integer CountMaxSectag_32;
    MR_Word OrigSectagRval_33;
    MR_String Comment_34;
    MR_Word Globals_38;
    MR_Word OptTuple_39;
    MR_Integer DenseSwitchSize_40;
    MR_Integer TrySwitchSize_41;
    MR_Integer BinarySwitchSize_42;
    MR_Integer MaxSectagInt_43;
    MR_Word SecondaryMethod_44;
    MR_Word AccessCount_45;
    MR_Word SectagCode_48;
    MR_Word SectagRval_49;
    MR_Word MaybeSecFailLabel_52;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Integer Var_69;
    MR_Box conv0_CountInfo_30;
    MR_Integer NumRealRegs_46;
    MR_Unsigned Var_91;
    MR_Word Var_92;

    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_sectag_info_0), PtagCountMap_11, ((MR_Box) (Ptag_25)), &conv0_CountInfo_30);
    CountInfo_30 = ((MR_Word) (conv0_CountInfo_30));
    CountSectagLocn_31 = ((MR_Word) ((MR_hl_field(0, CountInfo_30, (MR_Integer) 0))));
    CountMaxSectag_32 = ((MR_Integer) ((MR_hl_field(0, CountInfo_30, (MR_Integer) 1))));
    Var_65 = (MR_Word) (SharedSectagLocn_26);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_62, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_4[4]));
      MR_hl_field(0, Var_62, 1) = ((MR_Box) (ll_backend__tag_switch__generate_ptag_group_code_10_p_0_1));
      MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_62, 3) = ((MR_Box) (CountSectagLocn_31));
      MR_hl_field(0, Var_62, 4) = ((MR_Box) (Var_65));
    }
    mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140ll_backend.tag_switch.generate_ptag_group_code\'/10", (MR_String) "secondary tag locations differ");
    Var_69 = mercury__uint__cast_to_int_1_f_0(MaxSectag_27);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_66, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_4[5]));
      MR_hl_field(0, Var_66, 1) = ((MR_Box) (ll_backend__tag_switch__generate_ptag_group_code_10_p_0_2));
      MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_66, 3) = ((MR_Box) (CountMaxSectag_32));
      MR_hl_field(0, Var_66, 4) = ((MR_Box) (Var_69));
    }
    mercury__require__expect_3_p_0(Var_66, (MR_String) "predicate \140ll_backend.tag_switch.generate_ptag_group_code\'/10", (MR_String) "CountMaxSectag != MaxSectag");
    switch (MR_tag((MR_Word) SharedSectagLocn_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(SharedSectagLocn_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              {
                OrigSectagRval_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, OrigSectagRval_33, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, OrigSectagRval_33, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(3, OrigSectagRval_33, 2) = ((MR_Box) (VarRval_12));
              }
              Comment_34 = (MR_String) "compute local rest-of-word sec tag to switch on";
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_70;
              MR_Word Var_71;

              {
                Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_71, 0) = ((MR_Box) (Ptag_25));
              }
              {
                Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(3, Var_70, 1) = ((MR_Box) (Var_71));
                MR_hl_field(3, Var_70, 2) = ((MR_Box) (VarRval_12));
                MR_hl_field(3, Var_70, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[14])));
              }
              {
                OrigSectagRval_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OrigSectagRval_33, 0) = ((MR_Box) (Var_70));
              }
              Comment_34 = (MR_String) "compute remote word sec tag to switch on";
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_87;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Unsigned Mask_113 = ((MR_Unsigned) ((MR_hl_field(1, SharedSectagLocn_26, (MR_Integer) 1))));

          {
            Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(3, Var_87, 2) = ((MR_Box) (VarRval_12));
          }
          {
            Var_90 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_90, 0) = ((MR_Box) (Mask_113));
          }
          {
            Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_89, 1) = ((MR_Box) (Var_90));
          }
          {
            OrigSectagRval_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, OrigSectagRval_33, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, OrigSectagRval_33, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[10])));
            MR_hl_field(3, OrigSectagRval_33, 2) = ((MR_Box) (Var_87));
            MR_hl_field(3, OrigSectagRval_33, 3) = ((MR_Box) (Var_89));
          }
          Comment_34 = (MR_String) "compute local sec tag bits to switch on";
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Unsigned Mask_36 = ((MR_Unsigned) ((MR_hl_field(2, SharedSectagLocn_26, (MR_Integer) 1))));
          MR_Word SectagWordRval_37;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_82;
          MR_Word Var_83;

          {
            Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_76, 0) = ((MR_Box) (Ptag_25));
          }
          {
            Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_75, 1) = ((MR_Box) (Var_76));
            MR_hl_field(3, Var_75, 2) = ((MR_Box) (VarRval_12));
            MR_hl_field(3, Var_75, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[14])));
          }
          {
            SectagWordRval_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SectagWordRval_37, 0) = ((MR_Box) (Var_75));
          }
          {
            Var_83 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_83, 0) = ((MR_Box) (Mask_36));
          }
          {
            Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_82, 1) = ((MR_Box) (Var_83));
          }
          {
            OrigSectagRval_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, OrigSectagRval_33, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, OrigSectagRval_33, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[10])));
            MR_hl_field(3, OrigSectagRval_33, 2) = ((MR_Box) (SectagWordRval_37));
            MR_hl_field(3, OrigSectagRval_33, 3) = ((MR_Box) (Var_82));
          }
          Comment_34 = (MR_String) "compute remote sec tag bits to switch on";
        }
        break;
    }
    ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_59, &Globals_38);
    libs__globals__get_opt_tuple_2_p_0(Globals_38, &OptTuple_39);
    DenseSwitchSize_40 = ((MR_Integer) ((MR_hl_field(0, OptTuple_39, (MR_Integer) 28))));
    TrySwitchSize_41 = ((MR_Integer) ((MR_hl_field(0, OptTuple_39, (MR_Integer) 34))));
    BinarySwitchSize_42 = ((MR_Integer) ((MR_hl_field(0, OptTuple_39, (MR_Integer) 35))));
    MaxSectagInt_43 = mercury__uint__cast_to_int_1_f_0(MaxSectag_27);
    succeeded = (MaxSectagInt_43 >= DenseSwitchSize_40);
    if (succeeded)
      SecondaryMethod_44 = (MR_Integer) 2;
    else
    {
      succeeded = (MaxSectagInt_43 >= BinarySwitchSize_42);
      if (succeeded)
        SecondaryMethod_44 = (MR_Integer) 3;
      else
      {
        succeeded = (MaxSectagInt_43 >= TrySwitchSize_41);
        if (succeeded)
          SecondaryMethod_44 = (MR_Integer) 1;
        else
          SecondaryMethod_44 = (MR_Integer) 0;
      }
    }
    AccessCount_45 = ll_backend__tag_switch__switch_method_tag_access_count_1_f_0(SecondaryMethod_44);
    succeeded = (AccessCount_45 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_91 = (MR_Unsigned) 2U;
      succeeded = (MaxSectag_27 >= Var_91);
      if (succeeded)
      {
        Var_92 = (MR_Integer) 357;
        libs__globals__lookup_int_option_3_p_0(Globals_38, Var_92, &NumRealRegs_46);
        succeeded = (NumRealRegs_46 == (MR_Integer) 0);
        if (!(succeeded))
        {
          MR_Integer SectagRegNo_47;
          MR_Word Var_93;

          succeeded = ((MR_tag((MR_Word) SectagReg_13)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_93 = ((MR_Unsigned) ((MR_hl_field(1, SectagReg_13, (MR_Integer) 0))) & (MR_Integer) 1);
            SectagRegNo_47 = ((MR_Integer) ((MR_hl_field(1, SectagReg_13, (MR_Integer) 1))));
            succeeded = (Var_93 == (MR_Integer) 0);
          }
          if (succeeded)
            succeeded = (SectagRegNo_47 <= NumRealRegs_46);
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_ptag_group_code\'/10", (MR_String) "improper reg in tag switch");
              return;
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_96;
      MR_Word Var_97;

      {
        Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_97, 1) = ((MR_Box) (SectagReg_13));
        MR_hl_field(3, Var_97, 2) = ((MR_Box) (OrigSectagRval_33));
      }
      {
        Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_96, 0) = ((MR_Box) (Var_97));
        MR_hl_field(0, Var_96, 1) = ((MR_Box) (Comment_34));
      }
      SectagCode_48 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_96)));
      {
        SectagRval_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SectagRval_49, 0) = ((MR_Box) (SectagReg_13));
      }
    }
    else
    {
      SectagCode_48 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      SectagRval_49 = OrigSectagRval_33;
    }
    if ((MaybeFailLabel_14 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeSecFailLabel_52 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer SectagGoalCount_51;
      MR_Integer Var_98;

      mercury__map__count_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), SectagToLabelMap_28, &SectagGoalCount_51);
      Var_98 = (MR_Integer) ((MR_Unsigned) SectagGoalCount_51 - (MR_Unsigned) MaxSectagInt_43);
      succeeded = (Var_98 == (MR_Integer) 1);
      if (succeeded)
        MaybeSecFailLabel_52 = (MR_Word) ((MR_Unsigned) 0U);
      else
        MaybeSecFailLabel_52 = MaybeFailLabel_14;
    }
    switch (SecondaryMethod_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          MR_Word SectagToLabelAL_114;

          mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), SectagToLabelMap_28, &SectagToLabelAL_114);
          ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(SectagRval_49, MaybeSecFailLabel_52, SectagToLabelAL_114, (MR_Unsigned) 0U, MaxSectag_27, Code_16, STATE_VARIABLE_CaseLabelMap_0_57, STATE_VARIABLE_CaseLabelMap_58, STATE_VARIABLE_CI_0_59, STATE_VARIABLE_CI_60);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SectagToLabelAL_53;
          MR_Word Targets_54;
          MR_Word Var_100;
          MR_Word Var_101;

          mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), SectagToLabelMap_28, &SectagToLabelAL_53);
          ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(MaybeSecFailLabel_52, SectagToLabelAL_53, (MR_Unsigned) 0U, MaxSectag_27, &Targets_54);
          {
            Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(3, Var_101, 1) = ((MR_Box) (SectagRval_49));
            MR_hl_field(3, Var_101, 2) = ((MR_Box) (Targets_54));
          }
          {
            Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_100, 0) = ((MR_Box) (Var_101));
            MR_hl_field(0, Var_100, 1) = ((MR_Box) ((MR_String) "switch on secondary tag"));
          }
          *Code_16 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_100)));
          *STATE_VARIABLE_CaseLabelMap_58 = STATE_VARIABLE_CaseLabelMap_0_57;
          *STATE_VARIABLE_CI_60 = STATE_VARIABLE_CI_0_59;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LabelToSectagsAL_55;
          MR_Word CaseCodes_56;
          MR_Word Var_106;

          mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_2[5]), LabelToSectagsMap_29, &LabelToSectagsAL_55);
          Var_106 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(SectagRval_49, MaybeSecFailLabel_52, LabelToSectagsAL_55, Var_106, &CaseCodes_56, STATE_VARIABLE_CaseLabelMap_0_57, STATE_VARIABLE_CaseLabelMap_58);
          *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SectagCode_48, CaseCodes_56);
          *STATE_VARIABLE_CI_60 = STATE_VARIABLE_CI_0_59;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word LabelToSectagsAL_115;
          MR_Word CaseCodes_116;

          mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_2[5]), LabelToSectagsMap_29, &LabelToSectagsAL_115);
          ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(SectagRval_49, MaybeSecFailLabel_52, LabelToSectagsAL_115, &CaseCodes_116, STATE_VARIABLE_CaseLabelMap_0_57, STATE_VARIABLE_CaseLabelMap_58, STATE_VARIABLE_CI_0_59, STATE_VARIABLE_CI_60);
          *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SectagCode_48, CaseCodes_116);
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ll_backend__tag_switch__switch_method_tag_access_count_1_f_0(
  MR_Word Method_3)
{
  MR_Word Count_4 = ((&ll_backend__tag_switch_vector_common_5[0 + Method_3]))->ll_backend__tag_switch__vector_common_type_5_0__vct_5_f_0;

  return Count_4;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__1021__1_2_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__1010__1_2_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_CaseLabelMap_0_49,
  MR_Word * STATE_VARIABLE_CaseLabelMap_50,
  MR_Word STATE_VARIABLE_CI_0_51,
  MR_Word * STATE_VARIABLE_CI_52)
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
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;

        CurSectagStr_21 = mercury__string__uint_to_string_1_f_0(MinSectag_14);
        Comment_22 = mercury__string__f_43_43_2_f_0((MR_String) "no code for ptag ", CurSectagStr_21);
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (FailLabel_20));
        }
        {
          Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_55, 1) = ((MR_Box) (Var_56));
        }
        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(0, Var_54, 1) = ((MR_Box) (Comment_22));
        }
        *Code_16 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_54)));
      }
      *STATE_VARIABLE_CaseLabelMap_50 = STATE_VARIABLE_CaseLabelMap_0_49;
    }
    else
    {
      MR_Word Var_99 = ((MR_Word) ((MR_hl_field(1, SectagGoals_13, (MR_Integer) 1))));
      MR_Word Var_100 = ((MR_Word) ((MR_hl_field(1, SectagGoals_13, (MR_Integer) 0))));

      if ((Var_99 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Unsigned CurSectagPrime_23 = ((MR_Unsigned) ((MR_hl_field(0, Var_100, (MR_Integer) 0))));
        MR_Word CaseLabel_24 = ((MR_Word) ((MR_hl_field(0, Var_100, (MR_Integer) 1))));
        MR_Word Var_59;

        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_59, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_4[2]));
          MR_hl_field(0, Var_59, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1));
          MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_59, 3) = ((MR_Box) (MinSectag_14));
          MR_hl_field(0, Var_59, 4) = ((MR_Box) (CurSectagPrime_23));
        }
        mercury__require__expect_3_p_0(Var_59, (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", (MR_String) "cur sectag mismatch");
        ll_backend__switch_case__generate_case_code_or_jump_4_p_0(CaseLabel_24, Code_16, STATE_VARIABLE_CaseLabelMap_0_49, STATE_VARIABLE_CaseLabelMap_50);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", (MR_String) "SectagGoals not singleton or empty when binary search ends");
          return;
        }
    }
    *STATE_VARIABLE_CI_52 = STATE_VARIABLE_CI_0_51;
  }
  else
  {
    MR_Unsigned LoRangeMax_28;
    MR_Unsigned EqHiRangeMin_29;
    MR_Word InLoGroup_30;
    MR_Word LoGoals_34;
    MR_Word EqHiGoals_35;
    MR_Word NewLabel_36;
    MR_String LoMinStr_37;
    MR_String LoMaxStr_38;
    MR_String EqHiMinStr_39;
    MR_String EqHiMaxStr_40;
    MR_String IfComment_41;
    MR_String LabelComment_42;
    MR_Word LoRangeMaxConst_43;
    MR_Word TestRval_44;
    MR_Word IfCode_45;
    MR_Word LabelCode_46;
    MR_Word LoRangeCode_47;
    MR_Word EqHiRangeCode_48;
    MR_Unsigned Var_66 = (MinSectag_14 + MaxSectag_15);
    MR_Word STATE_VARIABLE_CI_70_70;
    MR_String Var_72;
    MR_String Var_73;
    MR_String Var_76;
    MR_String Var_77;
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

    LoRangeMax_28 = mercury__uint__f_47_47_2_f_0(Var_66, (MR_Unsigned) 2U);
    EqHiRangeMin_29 = (LoRangeMax_28 + (MR_Unsigned) 1U);
    {
      InLoGroup_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InLoGroup_30, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_4[3]));
      MR_hl_field(0, InLoGroup_30, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2));
      MR_hl_field(0, InLoGroup_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, InLoGroup_30, 3) = ((MR_Box) (LoRangeMax_28));
    }
    mercury__list__filter_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_1[1]), InLoGroup_30, SectagGoals_13, &LoGoals_34, &EqHiGoals_35);
    ll_backend__code_info__get_next_label_3_p_0(&NewLabel_36, STATE_VARIABLE_CI_0_51, &STATE_VARIABLE_CI_70_70);
    LoMinStr_37 = mercury__string__uint_to_string_1_f_0(MinSectag_14);
    LoMaxStr_38 = mercury__string__uint_to_string_1_f_0(LoRangeMax_28);
    EqHiMinStr_39 = mercury__string__uint_to_string_1_f_0(EqHiRangeMin_29);
    EqHiMaxStr_40 = mercury__string__uint_to_string_1_f_0(MaxSectag_15);
    Var_73 = mercury__string__f_43_43_2_f_0((MR_String) " to ", LoMaxStr_38);
    Var_72 = mercury__string__f_43_43_2_f_0(LoMinStr_37, Var_73);
    IfComment_41 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough for stags ", Var_72);
    Var_77 = mercury__string__f_43_43_2_f_0((MR_String) " to ", EqHiMaxStr_40);
    Var_76 = mercury__string__f_43_43_2_f_0(EqHiMinStr_39, Var_77);
    LabelComment_42 = mercury__string__f_43_43_2_f_0((MR_String) "code for stags ", Var_76);
    {
      Var_79 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_79, 0) = ((MR_Box) (LoRangeMax_28));
    }
    {
      LoRangeMaxConst_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, LoRangeMaxConst_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, LoRangeMaxConst_43, 1) = ((MR_Box) (Var_79));
    }
    {
      TestRval_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, TestRval_44, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, TestRval_44, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[13])));
      MR_hl_field(3, TestRval_44, 2) = ((MR_Box) (SectagRval_11));
      MR_hl_field(3, TestRval_44, 3) = ((MR_Box) (LoRangeMaxConst_43));
    }
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (NewLabel_36));
    }
    {
      Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_83, 1) = ((MR_Box) (TestRval_44));
      MR_hl_field(3, Var_83, 2) = ((MR_Box) (Var_84));
    }
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_82, 0) = ((MR_Box) (Var_83));
      MR_hl_field(0, Var_82, 1) = ((MR_Box) (IfComment_41));
    }
    IfCode_45 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_82)));
    {
      Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_86, 1) = ((MR_Box) (NewLabel_36));
    }
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_85, 0) = ((MR_Box) (Var_86));
      MR_hl_field(0, Var_85, 1) = ((MR_Box) (LabelComment_42));
    }
    LabelCode_46 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_85)));
    ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(SectagRval_11, MaybeFailLabel_12, LoGoals_34, MinSectag_14, LoRangeMax_28, &LoRangeCode_47, STATE_VARIABLE_CaseLabelMap_0_49, &STATE_VARIABLE_CaseLabelMap_87_87, STATE_VARIABLE_CI_70_70, &STATE_VARIABLE_CI_88_88);
    ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(SectagRval_11, MaybeFailLabel_12, EqHiGoals_35, EqHiRangeMin_29, MaxSectag_15, &EqHiRangeCode_48, STATE_VARIABLE_CaseLabelMap_87_87, STATE_VARIABLE_CaseLabelMap_50, STATE_VARIABLE_CI_88_88, STATE_VARIABLE_CI_52);
    Var_92 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_46, EqHiRangeCode_48);
    Var_91 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LoRangeCode_47, Var_92);
    *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), IfCode_45, Var_91);
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__963__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_4[1]));
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
ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(
  MR_Word SectagRval_1,
  MR_Word MaybeFailLabel_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_TryChainCode_0_4,
  MR_Word * Code_5,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_6,
  MR_Word * STATE_VARIABLE_CaseLabelMap_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_try_chain\'/7", (MR_String) "empty switch");
        return;
      }
    else
    {
      MR_Word Case_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Cases_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));

      if ((Cases_20 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((MaybeFailLabel_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word CaseLabel_28 = ((MR_Word) ((MR_hl_field(0, Case_19, (MR_Integer) 0))));
          MR_Word ThisCode_30;

          ll_backend__switch_case__generate_case_code_or_jump_4_p_0(CaseLabel_28, &ThisCode_30, STATE_VARIABLE_CaseLabelMap_0_6, STATE_VARIABLE_CaseLabelMap_7);
          *Code_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_0_4, ThisCode_30);
        }
        else
        {
          MR_Word FailLabel_26 = ((MR_Word) ((MR_hl_field(1, MaybeFailLabel_2, (MR_Integer) 0))));
          MR_Word FailCode_27;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word STATE_VARIABLE_TryChainCode_34_42;
          MR_Word CaseLabel_45 = ((MR_Word) ((MR_hl_field(0, Case_19, (MR_Integer) 0))));
          MR_Word OoMSectags_46 = ((MR_Word) ((MR_hl_field(0, Case_19, (MR_Integer) 1))));
          MR_Word CaseInfo0_47;
          MR_String Comment_48;
          MR_Unsigned HeadSectag_51;
          MR_Word TailSectags_52;
          MR_Word IsApplicableTestRval_53;
          MR_Word TestCode_54;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_String Var_58;
          MR_Box conv0_CaseInfo0_47;

          mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), STATE_VARIABLE_CaseLabelMap_0_6, ((MR_Box) (CaseLabel_45)), &conv0_CaseInfo0_47);
          CaseInfo0_47 = ((MR_Word) (conv0_CaseInfo0_47));
          Comment_48 = ((MR_String) ((MR_hl_field(0, CaseInfo0_47, (MR_Integer) 0))));
          HeadSectag_51 = ((MR_Unsigned) ((MR_hl_field(0, OoMSectags_46, (MR_Integer) 0))));
          TailSectags_52 = ((MR_Word) ((MR_hl_field(0, OoMSectags_46, (MR_Integer) 1))));
          ll_backend__tag_switch__test_sectag_is_in_case_group_4_p_0(SectagRval_1, HeadSectag_51, TailSectags_52, &IsApplicableTestRval_53);
          {
            Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_57, 0) = ((MR_Box) (CaseLabel_45));
          }
          {
            Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_56, 1) = ((MR_Box) (IsApplicableTestRval_53));
            MR_hl_field(3, Var_56, 2) = ((MR_Box) (Var_57));
          }
          Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "test sec tag only for ", Comment_48);
          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_55, 0) = ((MR_Box) (Var_56));
            MR_hl_field(0, Var_55, 1) = ((MR_Box) (Var_58));
          }
          TestCode_54 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_55)));
          STATE_VARIABLE_TryChainCode_34_42 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_0_4, TestCode_54);
          {
            Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_39, 0) = ((MR_Box) (FailLabel_26));
          }
          {
            Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_38, 1) = ((MR_Box) (Var_39));
          }
          {
            Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_37, 0) = ((MR_Box) (Var_38));
            MR_hl_field(0, Var_37, 1) = ((MR_Box) ((MR_String) "secondary tag with no code to handle it"));
          }
          FailCode_27 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_37)));
          *Code_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_34_42, FailCode_27);
          *STATE_VARIABLE_CaseLabelMap_7 = STATE_VARIABLE_CaseLabelMap_0_6;
        }
      else
      {
        MR_Word STATE_VARIABLE_TryChainCode_34_34;
        MR_Word CaseLabel_63 = ((MR_Word) ((MR_hl_field(0, Case_19, (MR_Integer) 0))));
        MR_Word OoMSectags_64 = ((MR_Word) ((MR_hl_field(0, Case_19, (MR_Integer) 1))));
        MR_Word CaseInfo0_65;
        MR_String Comment_66;
        MR_Unsigned HeadSectag_69;
        MR_Word TailSectags_70;
        MR_Word IsApplicableTestRval_71;
        MR_Word TestCode_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_String Var_76;
        MR_Box conv1_CaseInfo0_65;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_TryChainCode_0_4;

        mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), STATE_VARIABLE_CaseLabelMap_0_6, ((MR_Box) (CaseLabel_63)), &conv1_CaseInfo0_65);
        CaseInfo0_65 = ((MR_Word) (conv1_CaseInfo0_65));
        Comment_66 = ((MR_String) ((MR_hl_field(0, CaseInfo0_65, (MR_Integer) 0))));
        HeadSectag_69 = ((MR_Unsigned) ((MR_hl_field(0, OoMSectags_64, (MR_Integer) 0))));
        TailSectags_70 = ((MR_Word) ((MR_hl_field(0, OoMSectags_64, (MR_Integer) 1))));
        ll_backend__tag_switch__test_sectag_is_in_case_group_4_p_0(SectagRval_1, HeadSectag_69, TailSectags_70, &IsApplicableTestRval_71);
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) (CaseLabel_63));
        }
        {
          Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_74, 1) = ((MR_Box) (IsApplicableTestRval_71));
          MR_hl_field(3, Var_74, 2) = ((MR_Box) (Var_75));
        }
        Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "test sec tag only for ", Comment_66);
        {
          Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_73, 0) = ((MR_Box) (Var_74));
          MR_hl_field(0, Var_73, 1) = ((MR_Box) (Var_76));
        }
        TestCode_72 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_73)));
        STATE_VARIABLE_TryChainCode_34_34 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_TryChainCode_0_4, TestCode_72);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Cases_20;
        next_value_of_STATE_VARIABLE_TryChainCode_0_4 = STATE_VARIABLE_TryChainCode_34_34;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_TryChainCode_0_4 = next_value_of_STATE_VARIABLE_TryChainCode_0_4;
        continue;
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0_1(
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
ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(
  MR_Word SectagRval_1,
  MR_Word MaybeFailLabel_2,
  MR_Word HeadVar__3_3,
  MR_Word * Code_4,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_5,
  MR_Word * STATE_VARIABLE_CaseLabelMap_6,
  MR_Word STATE_VARIABLE_CI_0_7,
  MR_Word * STATE_VARIABLE_CI_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_try_me_else_chain\'/8", (MR_String) "empty switch");
      return;
    }
  else
  {
    MR_Word Case_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));

    if ((Cases_23 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MaybeFailLabel_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word CaseLabel_33 = ((MR_Word) ((MR_hl_field(0, Case_22, (MR_Integer) 0))));

        ll_backend__switch_case__generate_case_code_or_jump_4_p_0(CaseLabel_33, Code_4, STATE_VARIABLE_CaseLabelMap_0_5, STATE_VARIABLE_CaseLabelMap_6);
        *STATE_VARIABLE_CI_8 = STATE_VARIABLE_CI_0_7;
      }
      else
      {
        MR_Word FailLabel_31 = ((MR_Word) ((MR_hl_field(1, MaybeFailLabel_2, (MR_Integer) 0))));
        MR_Word FailCode_32;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word ThisCode_50;
        MR_Word CaseLabel_53 = ((MR_Word) ((MR_hl_field(0, Case_22, (MR_Integer) 0))));
        MR_Word OoMSectags_54 = ((MR_Word) ((MR_hl_field(0, Case_22, (MR_Integer) 1))));
        MR_Word CaseCode_55;
        MR_Word ElseLabel_56;
        MR_Unsigned HeadSectag_57;
        MR_Word TailSectags_58;
        MR_Word IsApplicableTestRval_59;
        MR_Word IsNotApplicableTestRval_60;
        MR_Word SectagStrs_61;
        MR_String SectagsStr_62;
        MR_String CaseCommentStr_63;
        MR_Word TestCode_64;
        MR_Word ElseLabelCode_65;
        MR_Word Var_68;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_83;

        ll_backend__switch_case__generate_case_code_or_jump_4_p_0(CaseLabel_53, &CaseCode_55, STATE_VARIABLE_CaseLabelMap_0_5, STATE_VARIABLE_CaseLabelMap_6);
        ll_backend__code_info__get_next_label_3_p_0(&ElseLabel_56, STATE_VARIABLE_CI_0_7, STATE_VARIABLE_CI_8);
        HeadSectag_57 = ((MR_Unsigned) ((MR_hl_field(0, OoMSectags_54, (MR_Integer) 0))));
        TailSectags_58 = ((MR_Word) ((MR_hl_field(0, OoMSectags_54, (MR_Integer) 1))));
        ll_backend__tag_switch__test_sectag_is_in_case_group_4_p_0(SectagRval_1, HeadSectag_57, TailSectags_58, &IsApplicableTestRval_59);
        {
          IsNotApplicableTestRval_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, IsNotApplicableTestRval_60, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, IsNotApplicableTestRval_60, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(3, IsNotApplicableTestRval_60, 2) = ((MR_Box) (IsApplicableTestRval_59));
        }
        Var_68 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), OoMSectags_54);
        SectagStrs_61 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[3]), Var_68);
        SectagsStr_62 = mercury__string__join_list_2_f_0((MR_String) ", ", SectagStrs_61);
        CaseCommentStr_63 = mercury__string__f_43_43_2_f_0((MR_String) "case for sectags ", SectagsStr_62);
        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (ElseLabel_56));
        }
        {
          Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_72, 1) = ((MR_Box) (IsNotApplicableTestRval_60));
          MR_hl_field(3, Var_72, 2) = ((MR_Box) (Var_73));
        }
        {
          Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(0, Var_71, 1) = ((MR_Box) ((MR_String) "test sec tag only"));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (CaseCommentStr_63));
        }
        {
          Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_76, 0) = ((MR_Box) (Var_77));
          MR_hl_field(0, Var_76, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_75));
        }
        TestCode_64 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_70);
        {
          Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_81, 1) = ((MR_Box) (ElseLabel_56));
        }
        {
          Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_80, 0) = ((MR_Box) (Var_81));
          MR_hl_field(0, Var_80, 1) = ((MR_Box) ((MR_String) "handle next secondary tag"));
        }
        ElseLabelCode_65 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_80)));
        Var_83 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CaseCode_55, ElseLabelCode_65);
        ThisCode_50 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_64, Var_83);
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (FailLabel_31));
        }
        {
          Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_46, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_45, 0) = ((MR_Box) (Var_46));
          MR_hl_field(0, Var_45, 1) = ((MR_Box) ((MR_String) "secondary tag does not match any case"));
        }
        FailCode_32 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_45)));
        *Code_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisCode_50, FailCode_32);
      }
    else
    {
      MR_Word ThisCode_29;
      MR_Word OtherCode_30;
      MR_Word STATE_VARIABLE_CaseLabelMap_39_39;
      MR_Word STATE_VARIABLE_CI_40_40;

      ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_7_p_0(SectagRval_1, Case_22, &ThisCode_29, STATE_VARIABLE_CaseLabelMap_0_5, &STATE_VARIABLE_CaseLabelMap_39_39, STATE_VARIABLE_CI_0_7, &STATE_VARIABLE_CI_40_40);
      ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(SectagRval_1, MaybeFailLabel_2, Cases_23, &OtherCode_30, STATE_VARIABLE_CaseLabelMap_39_39, STATE_VARIABLE_CaseLabelMap_6, STATE_VARIABLE_CI_40_40, STATE_VARIABLE_CI_8);
      *Code_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisCode_29, OtherCode_30);
    }
  }
}

static MR_Box MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_7_p_0_1(
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
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_7_p_0(
  MR_Word SectagRval_8,
  MR_Word Case_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_26,
  MR_Word * STATE_VARIABLE_CaseLabelMap_27,
  MR_Word STATE_VARIABLE_CI_0_28,
  MR_Word * STATE_VARIABLE_CI_29)
{
  MR_Word CaseLabel_13 = ((MR_Word) ((MR_hl_field(0, Case_9, (MR_Integer) 0))));
  MR_Word OoMSectags_14 = ((MR_Word) ((MR_hl_field(0, Case_9, (MR_Integer) 1))));
  MR_Word CaseCode_15;
  MR_Word ElseLabel_16;
  MR_Unsigned HeadSectag_17;
  MR_Word TailSectags_18;
  MR_Word IsApplicableTestRval_19;
  MR_Word IsNotApplicableTestRval_20;
  MR_Word SectagStrs_21;
  MR_String SectagsStr_22;
  MR_String CaseCommentStr_23;
  MR_Word TestCode_24;
  MR_Word ElseLabelCode_25;
  MR_Word Var_34;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_53;

  ll_backend__switch_case__generate_case_code_or_jump_4_p_0(CaseLabel_13, &CaseCode_15, STATE_VARIABLE_CaseLabelMap_0_26, STATE_VARIABLE_CaseLabelMap_27);
  ll_backend__code_info__get_next_label_3_p_0(&ElseLabel_16, STATE_VARIABLE_CI_0_28, STATE_VARIABLE_CI_29);
  HeadSectag_17 = ((MR_Unsigned) ((MR_hl_field(0, OoMSectags_14, (MR_Integer) 0))));
  TailSectags_18 = ((MR_Word) ((MR_hl_field(0, OoMSectags_14, (MR_Integer) 1))));
  ll_backend__tag_switch__test_sectag_is_in_case_group_4_p_0(SectagRval_8, HeadSectag_17, TailSectags_18, &IsApplicableTestRval_19);
  {
    IsNotApplicableTestRval_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, IsNotApplicableTestRval_20, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, IsNotApplicableTestRval_20, 1) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, IsNotApplicableTestRval_20, 2) = ((MR_Box) (IsApplicableTestRval_19));
  }
  Var_34 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), OoMSectags_14);
  SectagStrs_21 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[2]), Var_34);
  SectagsStr_22 = mercury__string__join_list_2_f_0((MR_String) ", ", SectagStrs_21);
  CaseCommentStr_23 = mercury__string__f_43_43_2_f_0((MR_String) "case for sectags ", SectagsStr_22);
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (ElseLabel_16));
  }
  {
    Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_42, 1) = ((MR_Box) (IsNotApplicableTestRval_20));
    MR_hl_field(3, Var_42, 2) = ((MR_Box) (Var_43));
  }
  {
    Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_41, 0) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_41, 1) = ((MR_Box) ((MR_String) "test sec tag only"));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (CaseCommentStr_23));
  }
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_45));
  }
  TestCode_24 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_40);
  {
    Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_51, 1) = ((MR_Box) (ElseLabel_16));
  }
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) ((MR_String) "handle next secondary tag"));
  }
  ElseLabelCode_25 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_50)));
  Var_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CaseCode_15, ElseLabelCode_25);
  *Code_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_24, Var_53);
}

static void MR_CALL 
ll_backend__tag_switch__test_sectag_is_in_case_group_4_p_0(
  MR_Word SectagRval_5,
  MR_Unsigned HeadSectag_6,
  MR_Word TailSectags_7,
  MR_Word * TestRval_8)
{
  MR_Integer HeadSectagInt_9;
  MR_Word HeadTestRval_10;
  MR_Word Var_16;
  MR_Word Var_17;

  HeadSectagInt_9 = mercury__uint__cast_to_int_1_f_0(HeadSectag_6);
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (HeadSectagInt_9));
  }
  {
    Var_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_16, 1) = ((MR_Box) (Var_17));
  }
  {
    HeadTestRval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadTestRval_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, HeadTestRval_10, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__tag_switch_scalar_common_2[7])));
    MR_hl_field(3, HeadTestRval_10, 2) = ((MR_Box) (SectagRval_5));
    MR_hl_field(3, HeadTestRval_10, 3) = ((MR_Box) (Var_16));
  }
  if ((TailSectags_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *TestRval_8 = HeadTestRval_10;
  else
  {
    MR_Unsigned HeadTailSectag_11 = ((MR_Unsigned) ((MR_hl_field(1, TailSectags_7, (MR_Integer) 0))));
    MR_Word TailTailSectags_12 = ((MR_Word) ((MR_hl_field(1, TailSectags_7, (MR_Integer) 1))));
    MR_Word TailTestRval_13;

    ll_backend__tag_switch__test_sectag_is_in_case_group_4_p_0(SectagRval_5, HeadTailSectag_11, TailTailSectags_12, &TailTestRval_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *TestRval_8 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, base, 2) = ((MR_Box) (HeadTestRval_10));
      MR_hl_field(3, base, 3) = ((MR_Box) (TailTestRval_13));
    }
  }
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
