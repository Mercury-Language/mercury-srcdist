/*
** Automatically generated from `ml_tag_switch.m'
** by the Mercury compiler,
** version 20.01.2-beta-2020-04-20
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


// :- module ml_backend.ml_tag_switch.
// :- implementation.

/*
INIT mercury__ml_backend__ml_tag_switch__init
ENDINIT
*/

#include "ml_backend.ml_tag_switch.mih"


#include "backend_libs.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "parse_tree.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "counter.mih"
#include "enum.mih"
#include "int.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_simplify_switch.mih"
#include "ml_backend.ml_switch_gen.mih"
#include "ml_backend.ml_unify_gen_util.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"



struct ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0_s {
  MR_bool ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__Stmt_23;
  jmp_buf ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__commit_0;
  MR_Word ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__SubStmt_36;
};


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tag_switch__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_ptag_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0__plain_list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tag_switch__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_ptag_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0;

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_value_ordered_is_a_case_split_between_ptags_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_is_a_case_split_between_ptags_0[2];

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_is_a_case_split_between_ptags_0[2];

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_0[1];

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0;

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_1[2];

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_1;

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_1[1];

static const MR_DuPtagLayout ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_maybe_code_0[2];

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_maybe_code_0[2];

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_maybe_code_0[2];

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_stags_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_stags_0_0[2];

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_stags_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_stags_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_stags_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_stags_0[1];

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stags_0[1];

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__226__1_2_p_0(
  MR_Word OtherPtags_21,
  MR_Word HeadVar__2_54);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__202__1_2_p_0(
  MR_Word SecTagLocn_22,
  MR_Word SecTagLocn1_25);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stags_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stags_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____maybe_code_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____maybe_code_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____code_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____code_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_tag_switch__make_match_value_1_f_0(
  MR_Integer Stag_3);

static MR_Word MR_CALL 
ml_backend__ml_tag_switch__make_ptag_match_1_f_0(
  MR_Word Ptag_3);

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_4_p_0(
  MR_Word _CaseId_5,
  MR_Word Ptags_6,
  MR_Word STATE_VARIABLE_IsAnyCaseSplit_0_9,
  MR_Word * STATE_VARIABLE_IsAnyCaseSplit_10);

static void MR_CALL 
ml_backend__ml_tag_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_97_110_121_95_115_112_108_105_116_95_99_97_115_101_115_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word Ptags_6,
  MR_Word STATE_VARIABLE_IsAnyCaseSplit_0_9,
  MR_Word * STATE_VARIABLE_IsAnyCaseSplit_10);

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_p_0(
  MR_Word CaseIdPtagsMap_3,
  MR_Word * IsAnyCaseSplit_4);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0(
  MR_Word CodeModel_11,
  MR_Word EntryPackedArgsMap_12,
  MR_Word TaggedCase_13,
  MR_Word * CaseId_14,
  MR_Word STATE_VARIABLE_CodeMap_0_28,
  MR_Word * STATE_VARIABLE_CodeMap_29,
  MR_Word Info0_17,
  MR_Word * Info_18);

static void MR_CALL 
ml_backend__ml_tag_switch__ml_generate_tag_switch_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_cases_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeMap_2,
  MR_Word Var_3,
  MR_Word CanFail_4,
  MR_Word CodeModel_5,
  MR_Word PtagCountMap_6,
  MR_Word Context_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0(
  MR_Word PtagCase_11,
  MR_Word CodeMap_12,
  MR_Word Var_13,
  MR_Word CanFail_14,
  MR_Word CodeModel_15,
  MR_Word PtagCountMap_16,
  MR_Word Context_17,
  MR_Word * MLDS_Case_18,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_stag_switch_11_p_0(
  MR_Word Cases_12,
  MR_Word CodeMap_13,
  MR_Word Ptag_14,
  MR_Word StagLocn_15,
  MR_Word Var_16,
  MR_Word CodeModel_17,
  MR_Word CanFail_18,
  MR_Word Context_19,
  MR_Word * Stmt_20,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_stag_cases_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_stag_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeMap_2,
  MR_Word CodeModel_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
ml_backend__ml_tag_switch__build_stag_rev_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevMap_0_2,
  MR_Word * STATE_VARIABLE_RevMap_3);

static void MR_CALL 
ml_backend__ml_tag_switch__lookup_code_map_6_p_0(
  MR_Word CodeMap_7,
  MR_Word CaseId_8,
  MR_Word CodeModel_9,
  MR_Word * Stmt_10,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____code_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____code_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____maybe_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____maybe_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_1[8][3];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_2[7][2];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_3[4][5];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_4[1][13];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_5[1][7];




static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_1[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_2[2])),
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_2[3]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_tag_switch__gen_stag_cases_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_tag_switch__find_any_split_cases_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_2[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_3[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_tag_switch__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_ptag_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_4[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0__plain_list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0))
  },
};



#include "array.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tag_switch__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_ptag_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0__plain_list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_tag_switch__list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_tag_switch__list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tag_switch__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_ptag_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0),
    (MR_TypeInfo) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_code_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____code_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____code_map_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "code_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0 = {
  (MR_String) "no_case_is_split_between_ptags",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1 = {
  (MR_String) "some_case_is_split_between_ptags",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_value_ordered_is_a_case_split_between_ptags_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_is_a_case_split_between_ptags_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1
};

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_is_a_case_split_between_ptags_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "is_a_case_split_between_ptags",
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_is_a_case_split_between_ptags_0 },
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_value_ordered_is_a_case_split_between_ptags_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_is_a_case_split_between_ptags_0
};

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_0[1] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)
};

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_0 = {
  (MR_String) "immediate",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ml_backend__ml_tag_switch__list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0),
    (MR_TypeInfo) (&ml_backend__ml_tag_switch__list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_1[2] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_tag_switch__tree234__ti_tree234_2list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0list__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_1 = {
  (MR_String) "generate",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_0[1] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_0
};

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_1[1] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_1
};

static const MR_DuPtagLayout ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_maybe_code_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_maybe_code_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_1,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_0
};

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_maybe_code_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____maybe_code_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____maybe_code_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "maybe_code",
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_maybe_code_0 },
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_maybe_code_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_maybe_code_0
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_stags_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0),
    (MR_TypeInfo) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stag_rev_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "stag_rev_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_stags_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_stags_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_tag_switch__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_stags_0_0 = {
  (MR_String) "stags",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_stags_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_stags_0_0[1] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_stags_0_0
};

static const MR_DuPtagLayout ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_stags_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_stags_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_stags_0[1] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_stags_0_0
};

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stags_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____stags_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____stags_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "stags",
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_stags_0 },
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_stags_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stags_0
};

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__226__1_2_p_0(
  MR_Word OtherPtags_21,
  MR_Word HeadVar__2_54)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_2[1]), ((MR_Box) (OtherPtags_21)), ((MR_Box) (HeadVar__2_54)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__202__1_2_p_0(
  MR_Word SecTagLocn_22,
  MR_Word SecTagLocn1_25)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(SecTagLocn_22, SecTagLocn1_25);
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stags_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
        mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stags_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_2[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____maybe_code_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_14;

        mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[3]), &SubResult1_14, ((MR_Box) (Var_23)), ((MR_Box) (ArgY1_13)));
        succeeded = (SubResult1_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_14;
        else
          hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, Var_22, ArgY2_16);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        ml_backend__mlds____Compare____mlds_stmt_0_0(HeadVar__1_1, Var_24, ArgY1_5);
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____maybe_code_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        TypeInfo_11_11 = (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
          succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX2_7, ArgY2_8);
      }
    }
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = ml_backend__mlds____Unify____mlds_stmt_0_0(ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____code_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____code_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_tag_switch__make_match_value_1_f_0(
  MR_Integer Stag_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_5;

    {
      Var_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_5, 0) = ((MR_Box) (Stag_3));
    }
    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_4, 1) = ((MR_Box) (Var_5));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_tag_switch__make_ptag_match_1_f_0(
  MR_Word Ptag_3)
{
  {
    MR_Word Cond_4;
    uint8_t PtagUint8_5 = (uint8_t) (Ptag_3);
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Integer Var_8;

    Var_8 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_5);
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_7, 0) = ((MR_Box) (Var_8));
    }
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_6, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_6, 1) = ((MR_Box) (Var_7));
    }
    {
      Cond_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Cond_4, 0) = ((MR_Box) (Var_6));
    }
    return Cond_4;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_4_p_0(
  MR_Word _CaseId_5,
  MR_Word Ptags_6,
  MR_Word STATE_VARIABLE_IsAnyCaseSplit_0_9,
  MR_Word * STATE_VARIABLE_IsAnyCaseSplit_10)
{
  ml_backend__ml_tag_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_97_110_121_95_115_112_108_105_116_95_99_97_115_101_115_95_50_95_95_91_49_93_95_48_4_p_0(Ptags_6, STATE_VARIABLE_IsAnyCaseSplit_0_9, STATE_VARIABLE_IsAnyCaseSplit_10);
}

static void MR_CALL 
ml_backend__ml_tag_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_97_110_121_95_115_112_108_105_116_95_99_97_115_101_115_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word Ptags_6,
  MR_Word STATE_VARIABLE_IsAnyCaseSplit_0_9,
  MR_Word * STATE_VARIABLE_IsAnyCaseSplit_10)
{
  {
    MR_bool succeeded;
    MR_Box conv0__OnlyPtag_8;

    succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), Ptags_6, &conv0__OnlyPtag_8);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
      *STATE_VARIABLE_IsAnyCaseSplit_10 = STATE_VARIABLE_IsAnyCaseSplit_0_9;
    else
      *STATE_VARIABLE_IsAnyCaseSplit_10 = (MR_Integer) 1;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_IsAnyCaseSplit_10;

    ml_backend__ml_tag_switch__find_any_split_cases_2_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_IsAnyCaseSplit_10);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_IsAnyCaseSplit_10));
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_p_0(
  MR_Word CaseIdPtagsMap_3,
  MR_Word * IsAnyCaseSplit_4)
{
  {
    MR_Box conv1_IsAnyCaseSplit_4;

    mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_2[0]), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[7]), CaseIdPtagsMap_3, ((MR_Box) ((MR_Integer) 0)), &conv1_IsAnyCaseSplit_4);
    *IsAnyCaseSplit_4 = ((MR_Word) (conv1_IsAnyCaseSplit_4));
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_1(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0_s * env_ptr = (struct ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0_s * env_ptr = (struct ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_String Var_37;
      MR_Word Var_38;

      (env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__SubStmt_36)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__SubStmt_36, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if ((env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__succeeded)
      {
        Var_37 = ((MR_String) ((MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__SubStmt_36, (MR_Integer) 1))));
        Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__SubStmt_36, (MR_Integer) 2))));
        ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0_s * env_ptr = (struct ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__commit_0) == 0)
      {
        ml_backend__ml_util__statement_is_or_contains_statement_2_p_0((env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__Stmt_23, &(env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__SubStmt_36, ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_2, env_ptr);
        (env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0(
  MR_Word CodeModel_11,
  MR_Word EntryPackedArgsMap_12,
  MR_Word TaggedCase_13,
  MR_Word * CaseId_14,
  MR_Word STATE_VARIABLE_CodeMap_0_28,
  MR_Word * STATE_VARIABLE_CodeMap_29,
  MR_Word Info0_17,
  MR_Word * Info_18)
{
  {
    struct ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0_s env;

    {
      MR_Word Info1_19;
      MR_Word OtherTaggedConsIds_21;
      MR_Word Goal_22;
      MR_Word Info2_24;
      MR_Word MaybeCode_27;
      MR_Word _MainTaggedConsId_20;
      MR_Word Var_25;
      MR_Word Var_26;

      ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedArgsMap_12, Info0_17, &Info1_19);
      _MainTaggedConsId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_13, (MR_Integer) 0))));
      OtherTaggedConsIds_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_13, (MR_Integer) 1))));
      *CaseId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_13, (MR_Integer) 2))));
      Goal_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_13, (MR_Integer) 3))));
      ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(CodeModel_11, Goal_22, &(env).ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__Stmt_23, Info1_19, &Info2_24);
      (env).ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__succeeded = (OtherTaggedConsIds_21 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__succeeded)
      {
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherTaggedConsIds_21, (MR_Integer) 0))));
        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherTaggedConsIds_21, (MR_Integer) 1))));
        ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_3(&env);
      }
      if ((env).ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__succeeded)
      {
        {
          MaybeCode_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeCode_27, 0) = ((MR_Box) (EntryPackedArgsMap_12));
          MR_hl_field(MR_mktag(1), MaybeCode_27, 1) = ((MR_Box) (Goal_22));
        }
        *Info_18 = Info1_19;
      }
      else
      {
        {
          MaybeCode_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeCode_27, 0) = ((MR_Box) ((env).ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0_env_0__Stmt_23));
        }
        *Info_18 = Info2_24;
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0), ((MR_Box) (*CaseId_14)), ((MR_Box) (MaybeCode_27)), STATE_VARIABLE_CodeMap_0_28, STATE_VARIABLE_CodeMap_29);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__ml_generate_tag_switch_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_CaseId_14;
    MR_Word conv1_STATE_VARIABLE_CodeMap_29;
    MR_Word conv0_Info_18;

    ml_backend__ml_tag_switch__gen_tagged_case_code_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_CaseId_14, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_CodeMap_29, ((MR_Word) (wrapper_arg_7)), &conv0_Info_18);
    *wrapper_arg_2 = ((MR_Box) (conv2_CaseId_14));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_CodeMap_29));
    *wrapper_arg_8 = ((MR_Box) (conv0_Info_18));
  }
}

void MR_CALL 
ml_backend__ml_tag_switch__ml_generate_tag_switch_9_p_0(
  MR_Word TaggedCases_10,
  MR_Word Var_11,
  MR_Word CodeModel_12,
  MR_Word CanFail_13,
  MR_Word EntryPackedArgsMap_14,
  MR_Word Context_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  {
    MR_Word VarLval_18;
    MR_Word VarRval_19;
    MR_Word PtagRval_20;
    MR_Word ModuleInfo_21;
    MR_Word Type_22;
    uint8_t MaxPrimary_23;
    MR_Word PtagCountMap_24;
    MR_Word CodeMap_25;
    MR_Word PtagCaseMap_28;
    MR_Word PtagCaseList_29;
    MR_Word PtagCases0_30;
    MR_Word PtagCases_31;
    MR_Word Default_32;
    MR_Word Range_33;
    MR_Word SwitchStmt0_34;
    MR_Word SwitchStmt_35;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word STATE_VARIABLE_Info_42_42;
    MR_Word STATE_VARIABLE_Info_43_43;
    MR_Word STATE_VARIABLE_Info_44_44;
    MR_Integer Var_46;
    MR_Word _CaseIdPtagsMap_27;
    MR_Box conv5_CodeMap_25;
    MR_Box conv4_Var_26;
    MR_Box conv3_STATE_VARIABLE_Info_42_42;

    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_36, Var_11, &VarLval_18);
    {
      VarRval_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), VarRval_19, 0) = ((MR_Box) (VarLval_18));
    }
    {
      PtagRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), PtagRval_20, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), PtagRval_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), PtagRval_20, 2) = ((MR_Box) (VarRval_19));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_36, &ModuleInfo_21);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_36, Var_11, &Type_22);
    backend_libs__switch_util__get_ptag_counts_4_p_0(Type_22, ModuleInfo_21, &MaxPrimary_23, &PtagCountMap_24);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (ml_backend__ml_tag_switch__ml_generate_tag_switch_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (CodeModel_12));
      MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (EntryPackedArgsMap_14));
    }
    Var_40 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0));
    backend_libs__switch_util__group_cases_by_ptag_10_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[0]), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0), TaggedCases_10, Var_39, ((MR_Box) (Var_40)), &conv5_CodeMap_25, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_26, ((MR_Box) (STATE_VARIABLE_Info_0_36)), &conv3_STATE_VARIABLE_Info_42_42, &_CaseIdPtagsMap_27, &PtagCaseMap_28);
    CodeMap_25 = ((MR_Word) (conv5_CodeMap_25));
    STATE_VARIABLE_Info_42_42 = ((MR_Word) (conv3_STATE_VARIABLE_Info_42_42));
    backend_libs__switch_util__order_ptags_by_count_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), PtagCountMap_24, PtagCaseMap_28, &PtagCaseList_29);
    ml_backend__ml_tag_switch__gen_ptag_cases_10_p_0(PtagCaseList_29, CodeMap_25, Var_11, CanFail_13, CodeModel_12, PtagCountMap_24, Context_15, &PtagCases0_30, STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_43_43);
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), PtagCases0_30, &PtagCases_31);
    ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(CanFail_13, CodeModel_12, Context_15, &Default_32, STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_44_44);
    Var_46 = mercury__uint8__cast_to_int_1_f_0(MaxPrimary_23);
    {
      Range_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Range_33, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Range_33, 1) = ((MR_Box) (Var_46));
    }
    {
      SwitchStmt0_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SwitchStmt0_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), SwitchStmt0_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tag_switch_scalar_common_2[6])));
      MR_hl_field(MR_mktag(3), SwitchStmt0_34, 2) = ((MR_Box) (PtagRval_20));
      MR_hl_field(MR_mktag(3), SwitchStmt0_34, 3) = ((MR_Box) (Range_33));
      MR_hl_field(MR_mktag(3), SwitchStmt0_34, 4) = ((MR_Box) (PtagCases_31));
      MR_hl_field(MR_mktag(3), SwitchStmt0_34, 5) = ((MR_Box) (Default_32));
      MR_hl_field(MR_mktag(3), SwitchStmt0_34, 6) = ((MR_Box) (Context_15));
    }
    ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(SwitchStmt0_34, &SwitchStmt_35, STATE_VARIABLE_Info_44_44, STATE_VARIABLE_Info_37);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SwitchStmt_35));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_cases_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeMap_2,
  MR_Word Var_3,
  MR_Word CanFail_4,
  MR_Word CodeModel_5,
  MR_Word PtagCountMap_6,
  MR_Word Context_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
  }
  else
  {
    MR_Word Ptag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Ptags_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word MLDS_Case_28;
    MR_Word MLDS_Cases_29;
    MR_Word STATE_VARIABLE_Info_33_33;

    ml_backend__ml_tag_switch__gen_ptag_case_10_p_0(Ptag_20, CodeMap_2, Var_3, CanFail_4, CodeModel_5, PtagCountMap_6, Context_7, &MLDS_Case_28, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_33_33);
    ml_backend__ml_tag_switch__gen_ptag_cases_10_p_0(Ptags_21, CodeMap_2, Var_3, CanFail_4, CodeModel_5, PtagCountMap_6, Context_7, &MLDS_Cases_29, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MLDS_Case_28));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MLDS_Cases_29));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Cond_4;

    conv1_Cond_4 = ml_backend__ml_tag_switch__make_ptag_match_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Cond_4));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__226__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__202__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0(
  MR_Word PtagCase_11,
  MR_Word CodeMap_12,
  MR_Word Var_13,
  MR_Word CanFail_14,
  MR_Word CodeModel_15,
  MR_Word PtagCountMap_16,
  MR_Word Context_17,
  MR_Word * MLDS_Case_18,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46)
{
  {
    MR_bool succeeded;
    MR_Word MainPtag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_11, (MR_Integer) 0))));
    MR_Word OtherPtags_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_11, (MR_Integer) 1))));
    MR_Word SecTagLocn_22;
    MR_Word GoalMap_23;
    MR_Word CountInfo_24;
    MR_Word SecTagLocn1_25;
    MR_Integer MaxSecondary_26;
    MR_Word GoalList_27;
    MR_Word Stmt_30;
    MR_Word MainPtagMatch_43;
    MR_Word OtherPtagMatches_44;
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_11, (MR_Integer) 2))));
    MR_Word Var_48;
    uint8_t PtagUint8_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Integer Var_94;
    MR_Box conv0_CountInfo_24;

    SecTagLocn_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 0))));
    GoalMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 1))));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[1]), PtagCountMap_16, ((MR_Box) (MainPtag_20)), &conv0_CountInfo_24);
    CountInfo_24 = ((MR_Word) (conv0_CountInfo_24));
    SecTagLocn1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_24, (MR_Integer) 0))));
    MaxSecondary_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CountInfo_24, (MR_Integer) 1))));
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (SecTagLocn_22));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (SecTagLocn1_25));
    }
    mercury__require__expect_3_p_0(Var_48, (MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/10", (MR_String) "secondary tag locations differ");
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), GoalMap_23, &GoalList_27);
    switch (MR_tag((MR_Word) SecTagLocn_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(SecTagLocn_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            if ((GoalList_27 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/10", (MR_String) "no goal for non-shared tag");
                return;
              }
            else
            {
              MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalList_27, (MR_Integer) 1))));
              MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalList_27, (MR_Integer) 0))));

              if ((Var_81 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word CaseId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_82, (MR_Integer) 1))));

                ml_backend__ml_tag_switch__lookup_code_map_6_p_0(CodeMap_12, CaseId_29, CodeModel_15, &Stmt_30, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/10", (MR_String) "more than one goal for non-shared tag");
                  return;
                }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              MR_Word CaseCanFail_38;
              MR_Word GroupedGoalList_41;
              MR_Word Var_51;
              MR_Word RevMap_85;
              MR_Word Var_86;
              MR_Word CaseId_69;
              MR_Word Var_56;
              MR_Word Var_57;

              {
                Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_2));
                MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (OtherPtags_21));
                MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_51, (MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/10", (MR_String) ">1 ptag with secondary tag");
              switch (CanFail_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer GoalCount_39;
                    MR_Integer FullGoalCount_40;

                    mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[2]), GoalList_27, &GoalCount_39);
                    FullGoalCount_40 = (MR_Integer) ((MR_Unsigned) MaxSecondary_26 + (MR_Unsigned) 1);
                    succeeded = (FullGoalCount_40 == GoalCount_39);
                    if (succeeded)
                      CaseCanFail_38 = (MR_Integer) 1;
                    else
                      CaseCanFail_38 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 1:
                  CaseCanFail_38 = (MR_Integer) 1;
                  break;
              }
              Var_86 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0));
              ml_backend__ml_tag_switch__build_stag_rev_map_3_p_0(GoalList_27, Var_86, &RevMap_85);
              mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0), RevMap_85, &GroupedGoalList_41);
              succeeded = (CaseCanFail_38 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = (GroupedGoalList_41 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GroupedGoalList_41, (MR_Integer) 0))));
                  Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GroupedGoalList_41, (MR_Integer) 1))));
                  succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CaseId_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 0))));
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                ml_backend__ml_tag_switch__lookup_code_map_6_p_0(CodeMap_12, CaseId_69, CodeModel_15, &Stmt_30, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
              else
                ml_backend__ml_tag_switch__gen_stag_switch_11_p_0(GroupedGoalList_41, CodeMap_12, MainPtag_20, SecTagLocn_22, Var_13, CodeModel_15, CaseCanFail_38, Context_17, &Stmt_30, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word CaseCanFail_38;
          MR_Word GroupedGoalList_41;
          MR_Word Var_51;
          MR_Word RevMap_85;
          MR_Word Var_86;
          MR_Word CaseId_69;
          MR_Word Var_56;
          MR_Word Var_57;

          {
            Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_3[2]));
            MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_2));
            MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (OtherPtags_21));
            MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_51, (MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/10", (MR_String) ">1 ptag with secondary tag");
          switch (CanFail_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer GoalCount_39;
                MR_Integer FullGoalCount_40;

                mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[2]), GoalList_27, &GoalCount_39);
                FullGoalCount_40 = (MR_Integer) ((MR_Unsigned) MaxSecondary_26 + (MR_Unsigned) 1);
                succeeded = (FullGoalCount_40 == GoalCount_39);
                if (succeeded)
                  CaseCanFail_38 = (MR_Integer) 1;
                else
                  CaseCanFail_38 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 1:
              CaseCanFail_38 = (MR_Integer) 1;
              break;
          }
          Var_86 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0));
          ml_backend__ml_tag_switch__build_stag_rev_map_3_p_0(GoalList_27, Var_86, &RevMap_85);
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0), RevMap_85, &GroupedGoalList_41);
          succeeded = (CaseCanFail_38 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (GroupedGoalList_41 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GroupedGoalList_41, (MR_Integer) 0))));
              Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GroupedGoalList_41, (MR_Integer) 1))));
              succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                CaseId_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 0))));
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            ml_backend__ml_tag_switch__lookup_code_map_6_p_0(CodeMap_12, CaseId_69, CodeModel_15, &Stmt_30, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
          else
            ml_backend__ml_tag_switch__gen_stag_switch_11_p_0(GroupedGoalList_41, CodeMap_12, MainPtag_20, SecTagLocn_22, Var_13, CodeModel_15, CaseCanFail_38, Context_17, &Stmt_30, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
        }
        break;
    }
    PtagUint8_91 = (uint8_t) (MainPtag_20);
    Var_94 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_91);
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_93, 0) = ((MR_Box) (Var_94));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (Var_93));
    }
    {
      MainPtagMatch_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MainPtagMatch_43, 0) = ((MR_Box) (Var_92));
    }
    OtherPtagMatches_44 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[6]), OtherPtags_21);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *MLDS_Case_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainPtagMatch_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherPtagMatches_44));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Stmt_30));
    }
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_stag_switch_11_p_0(
  MR_Word Cases_12,
  MR_Word CodeMap_13,
  MR_Word Ptag_14,
  MR_Word StagLocn_15,
  MR_Word Var_16,
  MR_Word CodeModel_17,
  MR_Word CanFail_18,
  MR_Word Context_19,
  MR_Word * Stmt_20,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_Word VarType_22;
    MR_Word VarLval_23;
    MR_Word VarRval_24;
    MR_Word StagRval_25;
    MR_Word StagCases0_30;
    MR_Word StagCases_31;
    MR_Word Default_32;
    MR_Word SwitchStmt_34;
    MR_Word STATE_VARIABLE_Info_50_50;
    MR_Word STATE_VARIABLE_Info_51_51;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_35, Var_16, &VarType_22);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_35, Var_16, &VarLval_23);
    {
      VarRval_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), VarRval_24, 0) = ((MR_Box) (VarLval_23));
    }
    switch (MR_tag((MR_Word) StagLocn_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(StagLocn_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_tag_switch.gen_stag_switch\'/11", (MR_String) "no stag");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              StagRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), StagRval_25, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), StagRval_25, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(3), StagRval_25, 2) = ((MR_Box) (VarRval_24));
            }
            break;
          case (MR_Integer) 3:
            ml_backend__ml_unify_gen_util__ml_gen_secondary_tag_rval_5_p_0(STATE_VARIABLE_Info_0_35, VarType_22, VarRval_24, Ptag_14, &StagRval_25);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned Mask_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), StagLocn_15, (MR_Integer) 1))));
          MR_Word Var_45;
          MR_Word Var_47;
          MR_Word Var_48;

          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Var_45, 2) = ((MR_Box) (VarRval_24));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Mask_27));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (Var_48));
          }
          {
            StagRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), StagRval_25, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), StagRval_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tag_switch_scalar_common_2[5])));
            MR_hl_field(MR_mktag(3), StagRval_25, 2) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(3), StagRval_25, 3) = ((MR_Box) (Var_47));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word StagWordRval_29;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Unsigned Mask_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), StagLocn_15, (MR_Integer) 1))));

          ml_backend__ml_unify_gen_util__ml_gen_secondary_tag_rval_5_p_0(STATE_VARIABLE_Info_0_35, VarType_22, VarRval_24, Ptag_14, &StagWordRval_29);
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Mask_55));
          }
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Var_42));
          }
          {
            StagRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), StagRval_25, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), StagRval_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tag_switch_scalar_common_2[5])));
            MR_hl_field(MR_mktag(3), StagRval_25, 2) = ((MR_Box) (StagWordRval_29));
            MR_hl_field(MR_mktag(3), StagRval_25, 3) = ((MR_Box) (Var_41));
          }
        }
        break;
    }
    ml_backend__ml_tag_switch__gen_stag_cases_6_p_0(Cases_12, CodeMap_13, CodeModel_17, &StagCases0_30, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_50_50);
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), StagCases0_30, &StagCases_31);
    ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(CanFail_18, CodeModel_17, Context_19, &Default_32, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_51_51);
    {
      SwitchStmt_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SwitchStmt_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), SwitchStmt_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tag_switch_scalar_common_2[6])));
      MR_hl_field(MR_mktag(3), SwitchStmt_34, 2) = ((MR_Box) (StagRval_25));
      MR_hl_field(MR_mktag(3), SwitchStmt_34, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), SwitchStmt_34, 4) = ((MR_Box) (StagCases_31));
      MR_hl_field(MR_mktag(3), SwitchStmt_34, 5) = ((MR_Box) (Default_32));
      MR_hl_field(MR_mktag(3), SwitchStmt_34, 6) = ((MR_Box) (Context_19));
    }
    ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(SwitchStmt_34, Stmt_20, STATE_VARIABLE_Info_51_51, STATE_VARIABLE_Info_36);
  }
}

static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_stag_cases_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ml_backend__ml_tag_switch__make_match_value_1_f_0(((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_stag_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeMap_2,
  MR_Word CodeModel_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Group_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Groups_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_16;
    MR_Word Cases_17;
    MR_Word STATE_VARIABLE_Info_21_21;
    MR_Word CaseId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Group_12, (MR_Integer) 0))));
    MR_Word Stags_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Group_12, (MR_Integer) 1))));
    MR_Integer FirstStag_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Stags_31, (MR_Integer) 0))));
    MR_Word RevLaterStags_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stags_31, (MR_Integer) 1))));
    MR_Word LaterStags_34;
    MR_Word FirstMatch_35;
    MR_Word LaterMatches_36;
    MR_Word Stmt_37;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word MaybeCode_54;
    MR_Box conv1_MaybeCode_54;

    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevLaterStags_33, &LaterStags_34);
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_46, 0) = ((MR_Box) (FirstStag_32));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
    }
    {
      FirstMatch_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FirstMatch_35, 0) = ((MR_Box) (Var_45));
    }
    LaterMatches_36 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&ml_backend__ml_tag_switch_scalar_common_1[5]), LaterStags_34);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0), CodeMap_2, ((MR_Box) (CaseId_30)), &conv1_MaybeCode_54);
    MaybeCode_54 = ((MR_Word) (conv1_MaybeCode_54));
    if (((MR_tag((MR_Word) MaybeCode_54)) == (MR_Integer) 1))
    {
      MR_Word EntryPackedArgsMap_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCode_54, (MR_Integer) 0))));
      MR_Word Goal_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCode_54, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Info_17_57;

      ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedArgsMap_55, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_17_57);
      ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(CodeModel_3, Goal_56, &Stmt_37, STATE_VARIABLE_Info_17_57, &STATE_VARIABLE_Info_21_21);
    }
    else
    {
      Stmt_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCode_54, (MR_Integer) 0))));
      STATE_VARIABLE_Info_21_21 = STATE_VARIABLE_Info_0_5;
    }
    {
      Case_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_16, 0) = ((MR_Box) (FirstMatch_35));
      MR_hl_field(MR_mktag(0), Case_16, 1) = ((MR_Box) (LaterMatches_36));
      MR_hl_field(MR_mktag(0), Case_16, 2) = ((MR_Box) (Stmt_37));
    }
    ml_backend__ml_tag_switch__gen_stag_cases_6_p_0(Groups_13, CodeMap_2, CodeModel_3, &Cases_17, STATE_VARIABLE_Info_21_21, STATE_VARIABLE_Info_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_17));
    }
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__build_stag_rev_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevMap_0_2,
  MR_Word * STATE_VARIABLE_RevMap_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevMap_3 = STATE_VARIABLE_RevMap_0_2;
    else
    {
      MR_Word Entry_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Entries_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Stag_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Entry_7, (MR_Integer) 0))));
      MR_Word CaseId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevMap_19_19;
      MR_Word OldEntry_12;
      MR_Box conv0_OldEntry_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevMap_0_2;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0), STATE_VARIABLE_RevMap_0_2, ((MR_Box) (CaseId_11)), &conv0_OldEntry_12);
      if (succeeded)
      {
        OldEntry_12 = ((MR_Word) (conv0_OldEntry_12));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer OldFirstStag_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OldEntry_12, (MR_Integer) 0))));
        MR_Word OldLaterStags_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry_12, (MR_Integer) 1))));
        MR_Word NewEntry_15;
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Stag_10));
          MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (OldLaterStags_14));
        }
        {
          NewEntry_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NewEntry_15, 0) = ((MR_Box) (OldFirstStag_13));
          MR_hl_field(MR_mktag(0), NewEntry_15, 1) = ((MR_Box) (Var_18));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0), ((MR_Box) (CaseId_11)), ((MR_Box) (NewEntry_15)), STATE_VARIABLE_RevMap_0_2, &STATE_VARIABLE_RevMap_19_19);
      }
      else
      {
        MR_Word NewEntry_23;

        {
          NewEntry_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NewEntry_23, 0) = ((MR_Box) (Stag_10));
          MR_hl_field(MR_mktag(0), NewEntry_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0), ((MR_Box) (CaseId_11)), ((MR_Box) (NewEntry_23)), STATE_VARIABLE_RevMap_0_2, &STATE_VARIABLE_RevMap_19_19);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Entries_8;
      next_value_of_STATE_VARIABLE_RevMap_0_2 = STATE_VARIABLE_RevMap_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevMap_0_2 = next_value_of_STATE_VARIABLE_RevMap_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__lookup_code_map_6_p_0(
  MR_Word CodeMap_7,
  MR_Word CaseId_8,
  MR_Word CodeModel_9,
  MR_Word * Stmt_10,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_Word MaybeCode_12;
    MR_Box conv0_MaybeCode_12;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0), CodeMap_7, ((MR_Box) (CaseId_8)), &conv0_MaybeCode_12);
    MaybeCode_12 = ((MR_Word) (conv0_MaybeCode_12));
    if (((MR_tag((MR_Word) MaybeCode_12)) == (MR_Integer) 1))
    {
      MR_Word EntryPackedArgsMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCode_12, (MR_Integer) 0))));
      MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCode_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Info_17_17;

      ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedArgsMap_13, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_17_17);
      ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(CodeModel_9, Goal_14, Stmt_10, STATE_VARIABLE_Info_17_17, STATE_VARIABLE_Info_16);
    }
    else
    {
      *Stmt_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCode_12, (MR_Integer) 0))));
      *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____code_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_tag_switch____Unify____code_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____code_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_tag_switch____Compare____code_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____maybe_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_tag_switch____Unify____maybe_code_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____maybe_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_tag_switch____Compare____maybe_code_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_tag_switch____Unify____stags_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_tag_switch____Compare____stags_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_tag_switch__init(void)
{
}

void mercury__ml_backend__ml_tag_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_code_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stag_rev_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0);
}

void mercury__ml_backend__ml_tag_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_tag_switch__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_tag_switch.
