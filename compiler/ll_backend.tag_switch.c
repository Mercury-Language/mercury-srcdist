/*
** Automatically generated from `tag_switch.m'
** by the Mercury compiler,
** version rotd-2019-11-09
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


#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
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
#include "array.mih"
#include "assoc_list.mih"
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
#include "getopt_io.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_TypeInfo_Struct2 ll_backend__tag_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_ptag_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__pti_ptag_case_entry_1__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_0;

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_1;

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_2;

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_3;

static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_value_ordered_switch_method_0[4];

static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_name_ordered_switch_method_0[4];

static const MR_Integer ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_switch_method_0[4];

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__994__1_2_p_0(
  MR_Integer LowRangeEnd_28,
  MR_Word LambdaHeadVar__1_69);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__983__1_2_p_0(
  MR_Integer MinStag_12,
  MR_Integer CurSecPrime_23);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__936__1_2_p_0(
  MR_Word CaseList_6,
  MR_Word HeadVar__2_18);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__731__4_2_p_0(
  MR_Word OtherPtags_16,
  MR_Word HeadVar__2_468);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__731__3_2_p_0(
  MR_Word OtherPtags_16,
  MR_Word HeadVar__2_345);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__731__2_2_p_0(
  MR_Word OtherPtags_16,
  MR_Word HeadVar__2_222);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__731__1_2_p_0(
  MR_Word OtherPtags_16,
  MR_Word HeadVar__2_79);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__640__1_2_p_0(
  uint8_t LowRangeEnd_39,
  MR_Word LambdaHeadVar__1_88);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__627__1_2_p_0(
  MR_Word StagLoc_31,
  MR_Word StagLocPrime_34);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__622__1_2_p_0(
  uint8_t MinPtag_15,
  uint8_t CurPrimaryPrime_29);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__565__1_2_p_0(
  MR_Word StagLoc_29,
  MR_Word StagLocPrime_32);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__552__1_2_p_0(
  MR_Word PtagGroups_14,
  MR_Word HeadVar__2_47);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__451__1_2_p_0(
  MR_Word StagLoc_45,
  MR_Word StagLocPrime_48);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__358__1_2_p_0(
  MR_Word StagLoc_39,
  MR_Word StagLocPrime_42);

static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0(
  MR_Word HeadVar__2_1,
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
  MR_Box * wrapper_arg_8);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0(
  MR_Word PtagGroups_14,
  uint8_t MinPtag_15,
  uint8_t MaxPtag_16,
  MR_Word PtagRval_17,
  MR_Word StagReg_18,
  MR_Word VarRval_19,
  MR_Word MaybeFailLabel_20,
  MR_Word PtagCountMap_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_60,
  MR_Word * STATE_VARIABLE_CaseLabelMap_61,
  MR_Word STATE_VARIABLE_CI_0_62,
  MR_Word * STATE_VARIABLE_CI_63);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0(
  MR_Word PtagGroups_14,
  uint8_t CurPrimary_15,
  uint8_t MaxPrimary_16,
  MR_Word StagReg_17,
  MR_Word VarRval_18,
  MR_Word MaybeFailLabel_19,
  MR_Word PtagCountMap_20,
  MR_Word * Targets_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_40,
  MR_Word * STATE_VARIABLE_CaseLabelMap_41,
  MR_Word STATE_VARIABLE_CI_0_42,
  MR_Word * STATE_VARIABLE_CI_43);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PtagRval_2,
  MR_Word StagReg_3,
  MR_Word VarRval_4,
  MR_Word MaybeFailLabel_5,
  MR_Word PtagCountMap_6,
  MR_Word PrevTestsCode0_7,
  MR_Word PrevCasesCode0_8,
  MR_Word * Code_9,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_10,
  MR_Word * STATE_VARIABLE_CaseLabelMap_11,
  MR_Word STATE_VARIABLE_CI_0_12,
  MR_Word * STATE_VARIABLE_CI_13);

static MR_Box MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0(
  MR_String BaseStr_5,
  MR_Word MainPtag_6,
  MR_Word OtherPtags_7,
  MR_String * Comment_8);

static MR_Box MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(
  MR_Word PtagRval_17,
  MR_Word StagReg_18,
  MR_Word MainPtag_19,
  MR_Word OtherPtags_20,
  MR_Word PtagCase_21,
  MR_Integer MaxSecondary_22,
  MR_Word VarRval_23,
  MR_Word MaybeFailLabel_24,
  MR_Word PrevTestsCode0_25,
  MR_Word * PrevTestsCode_26,
  MR_Word PrevCasesCode0_27,
  MR_Word * PrevCasesCode_28,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_41,
  MR_Word * STATE_VARIABLE_CaseLabelMap_42,
  MR_Word STATE_VARIABLE_CI_0_43,
  MR_Word * STATE_VARIABLE_CI_44);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PtagRval_2,
  MR_Word HeadVar__3_3,
  MR_Word * TestRval_4);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PtagRval_2,
  MR_Word StagReg_3,
  MR_Word VarRval_4,
  MR_Word MaybeFailLabel_5,
  MR_Word PtagCountMap_6,
  MR_Word * Code_7,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_8,
  MR_Word * STATE_VARIABLE_CaseLabelMap_9,
  MR_Word STATE_VARIABLE_CI_0_10,
  MR_Word * STATE_VARIABLE_CI_11);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(
  MR_Word PtagRval_14,
  MR_Word StagReg_15,
  MR_Word MainPtag_16,
  MR_Word OtherPtags_17,
  MR_Word PtagCase_18,
  MR_Integer MaxSecondary_19,
  MR_Word VarRval_20,
  MR_Word MaybeFailLabel_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_34,
  MR_Word * STATE_VARIABLE_CaseLabelMap_35,
  MR_Word STATE_VARIABLE_CI_0_36,
  MR_Word * STATE_VARIABLE_CI_37);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0(
  MR_Word StagGoalMap_14,
  MR_Word MainPtag_15,
  MR_Word OtherPtags_16,
  MR_Integer MaxSecondary_17,
  MR_Word StagReg_18,
  MR_Word StagLoc_19,
  MR_Word Rval_20,
  MR_Word MaybeFailLabel_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_51,
  MR_Word * STATE_VARIABLE_CaseLabelMap_52,
  MR_Word STATE_VARIABLE_CI_0_53,
  MR_Word * STATE_VARIABLE_CI_54);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(
  MR_Word StagGoals_11,
  MR_Integer MinStag_12,
  MR_Integer MaxStag_13,
  MR_Word StagRval_14,
  MR_Word MaybeFailLabel_15,
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
  MR_Word CaseList_6,
  MR_Integer CurSecondary_7,
  MR_Integer MaxSecondary_8,
  MR_Word MaybeFailLabel_9,
  MR_Word * Targets_10);

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StagRval_2,
  MR_Word MaybeFailLabel_3,
  MR_Word PrevTestsCode0_4,
  MR_Word * Code_5,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_6,
  MR_Word * STATE_VARIABLE_CaseLabelMap_7);

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StagRval_2,
  MR_Word MaybeFailLabel_3,
  MR_Word * Code_4,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_5,
  MR_Word * STATE_VARIABLE_CaseLabelMap_6,
  MR_Word STATE_VARIABLE_CI_0_7,
  MR_Word * STATE_VARIABLE_CI_8);

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(
  MR_Word CaseLabel_9,
  MR_Word StagRval_10,
  MR_Integer Secondary_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_19,
  MR_Word * STATE_VARIABLE_CaseLabelMap_20,
  MR_Word STATE_VARIABLE_CI_0_21,
  MR_Word * STATE_VARIABLE_CI_22);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PtagRval_2,
  MR_Word HeadVar__3_3,
  MR_Word * TestRval_4);

static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_1[6][3];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_2[13][2];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_3[9][5];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_4[1][1];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_5[1][12];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_6[1][7];




static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_1[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0))
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
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[5])),
    ((MR_Box) (ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[5])),
    ((MR_Box) (ll_backend__tag_switch__make_ptag_comment_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_6[0])),
    ((MR_Box) (ll_backend__tag_switch__generate_tag_switch_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_2[13][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_2[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_1[2]))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__tag_switch_scalar_common_4[0])))
  },
};

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_3[9][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__tag_switch__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_ptag_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint8_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint8_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint8_0)),
    ((MR_Box) (&ll_backend__tag_switch__backend_libs__switch_util__pti_ptag_case_entry_1__plain_ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_5[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_represent_params_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__tag_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0)),
    ((MR_Box) (&ll_backend__tag_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0)),
    ((MR_Box) (&ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0))
  },
};

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_6[1][7] = {
  /* row 0 */
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct2 ll_backend__tag_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__tag_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_ptag_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__tag_switch__backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__pti_ptag_case_entry_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)
  }
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

static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_value_ordered_switch_method_0[4] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__tag_switch____Unify____switch_method_0_0_10001)),
  ((MR_Box) (ll_backend__tag_switch____Compare____switch_method_0_0_10001)),
  (MR_String) "ll_backend.tag_switch",
  (MR_String) "switch_method",
  {     ll_backend__tag_switch__ll_backend__tag_switch__enum_name_ordered_switch_method_0 },
  {     ll_backend__tag_switch__ll_backend__tag_switch__enum_value_ordered_switch_method_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_switch_method_0
};

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__994__1_2_p_0(
  MR_Integer LowRangeEnd_28,
  MR_Word LambdaHeadVar__1_69)
{
  {
    MR_bool succeeded;
    MR_Integer Stag_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_69, (MR_Integer) 0))));

    succeeded = (Stag_32 <= LowRangeEnd_28);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__983__1_2_p_0(
  MR_Integer MinStag_12,
  MR_Integer CurSecPrime_23)
{
  {
    MR_bool succeeded = (MinStag_12 == CurSecPrime_23);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__936__1_2_p_0(
  MR_Word CaseList_6,
  MR_Word HeadVar__2_18)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[7]), ((MR_Box) (CaseList_6)), ((MR_Box) (HeadVar__2_18)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__731__4_2_p_0(
  MR_Word OtherPtags_16,
  MR_Word HeadVar__2_468)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[6]), ((MR_Box) (OtherPtags_16)), ((MR_Box) (HeadVar__2_468)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__731__3_2_p_0(
  MR_Word OtherPtags_16,
  MR_Word HeadVar__2_345)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[6]), ((MR_Box) (OtherPtags_16)), ((MR_Box) (HeadVar__2_345)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__731__2_2_p_0(
  MR_Word OtherPtags_16,
  MR_Word HeadVar__2_222)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[6]), ((MR_Box) (OtherPtags_16)), ((MR_Box) (HeadVar__2_222)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__731__1_2_p_0(
  MR_Word OtherPtags_16,
  MR_Word HeadVar__2_79)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[6]), ((MR_Box) (OtherPtags_16)), ((MR_Box) (HeadVar__2_79)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__640__1_2_p_0(
  uint8_t LowRangeEnd_39,
  MR_Word LambdaHeadVar__1_88)
{
  {
    MR_bool succeeded;
    uint8_t Ptag_43;
    MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_88, (MR_Integer) 0))));

    Ptag_43 = (uint8_t) (Var_89);
    succeeded = (Ptag_43 <= LowRangeEnd_39);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__627__1_2_p_0(
  MR_Word StagLoc_31,
  MR_Word StagLocPrime_34)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(StagLoc_31, StagLocPrime_34);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__622__1_2_p_0(
  uint8_t MinPtag_15,
  uint8_t CurPrimaryPrime_29)
{
  {
    MR_bool succeeded = (MinPtag_15 == CurPrimaryPrime_29);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__565__1_2_p_0(
  MR_Word StagLoc_29,
  MR_Word StagLocPrime_32)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(StagLoc_29, StagLocPrime_32);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__552__1_2_p_0(
  MR_Word PtagGroups_14,
  MR_Word HeadVar__2_47)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[5]), ((MR_Box) (PtagGroups_14)), ((MR_Box) (HeadVar__2_47)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__451__1_2_p_0(
  MR_Word StagLoc_45,
  MR_Word StagLocPrime_48)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(StagLoc_45, StagLocPrime_48);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__358__1_2_p_0(
  MR_Word StagLoc_39,
  MR_Word StagLocPrime_42)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(StagLoc_39, StagLocPrime_42);
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0(
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
ll_backend__tag_switch____Unify____switch_method_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_String MR_CALL 
ll_backend__tag_switch__ptag_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    uint8_t Ptag_3 = (uint8_t) (HeadVar__1_1);

    HeadVar__2_2 = mercury__string__uint8_to_string_1_f_0(Ptag_3);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__4_4;

    ll_backend__switch_case__add_remaining_case_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv7_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv7_HeadVar__4_4));
  }
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
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;
    MR_Word conv2_HeadVar__5_5;
    MR_Word conv1_HeadVar__7_7;
    MR_Word conv0_HeadVar__9_9;

    ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__5_5, ((MR_Word) (wrapper_arg_5)), &conv1_HeadVar__7_7, ((MR_Word) (wrapper_arg_7)), &conv0_HeadVar__9_9);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__5_5));
    *wrapper_arg_6 = ((MR_Box) (conv1_HeadVar__7_7));
    *wrapper_arg_8 = ((MR_Box) (conv0_HeadVar__9_9));
  }
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
  MR_Word STATE_VARIABLE_MaybeEnd_0_64,
  MR_Word * STATE_VARIABLE_MaybeEnd_65,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_66,
  MR_Word * STATE_VARIABLE_CI_67,
  MR_Word CLD0_26)
{
  {
    MR_bool succeeded;
    MR_Word PtagReg_28;
    MR_Word StagReg_29;
    MR_Word BranchStart_30;
    MR_Word ModuleInfo_31;
    uint8_t MaxPrimary_32;
    MR_Word PtagCountMap_33;
    MR_Word Params_34;
    MR_Word CaseLabelMap0_35;
    MR_Word PtagCaseMap_37;
    MR_Integer PtagsUsed_38;
    MR_Word Globals_39;
    MR_Integer DenseSwitchSize_40;
    MR_Integer TrySwitchSize_41;
    MR_Integer BinarySwitchSize_42;
    MR_Word PtagCode_46;
    MR_Word EndCode_48;
    MR_Word MaybeFailLabel_49;
    MR_Word FailCode_50;
    MR_Word CasesCode_55;
    MR_Word CaseLabelMap_56;
    MR_Word RemainingCasesCode_63;
    MR_Word STATE_VARIABLE_CLD_70_70;
    MR_Word STATE_VARIABLE_CLD_72_72;
    MR_Word STATE_VARIABLE_CLD_73_73;
    MR_Word STATE_VARIABLE_CLD_74_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word STATE_VARIABLE_CI_78_78;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word STATE_VARIABLE_CI_101_101;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_36;
    MR_Box conv6_CaseLabelMap0_35;
    MR_Box conv5_STATE_VARIABLE_MaybeEnd_65;
    MR_Box conv4_STATE_VARIABLE_CI_78_78;
    MR_Box conv8_RemainingCasesCode_63;

    ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &PtagReg_28, CLD0_26, &STATE_VARIABLE_CLD_70_70);
    ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &StagReg_29, STATE_VARIABLE_CLD_70_70, &STATE_VARIABLE_CLD_72_72);
    ll_backend__code_loc_dep__release_reg_3_p_0(PtagReg_28, STATE_VARIABLE_CLD_72_72, &STATE_VARIABLE_CLD_73_73);
    ll_backend__code_loc_dep__release_reg_3_p_0(StagReg_29, STATE_VARIABLE_CLD_73_73, &STATE_VARIABLE_CLD_74_74);
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_74_74, &BranchStart_30);
    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_66, &ModuleInfo_31);
    backend_libs__switch_util__get_ptag_counts_4_p_0(VarType_17, ModuleInfo_31, &MaxPrimary_32, &PtagCountMap_33);
    {
      Params_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Params_34, 0) = ((MR_Box) (VarName_18));
      MR_hl_field(MR_mktag(0), Params_34, 1) = ((MR_Box) (SwitchGoalInfo_21));
      MR_hl_field(MR_mktag(0), Params_34, 2) = (MR_Box) ((MR_Unsigned) (CodeModel_19));
      MR_hl_field(MR_mktag(0), Params_34, 3) = ((MR_Box) (BranchStart_30));
      MR_hl_field(MR_mktag(0), Params_34, 4) = ((MR_Box) (EndLabel_22));
    }
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (ll_backend__tag_switch__generate_tag_switch_14_p_0_1));
      MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Params_34));
    }
    Var_76 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0));
    backend_libs__switch_util__group_cases_by_ptag_10_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[0]), (MR_Word) (&ll_backend__tag_switch_scalar_common_2[0]), (MR_Word) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0), TaggedCases_15, Var_75, ((MR_Box) (Var_76)), &conv6_CaseLabelMap0_35, ((MR_Box) (STATE_VARIABLE_MaybeEnd_0_64)), &conv5_STATE_VARIABLE_MaybeEnd_65, ((MR_Box) (STATE_VARIABLE_CI_0_66)), &conv4_STATE_VARIABLE_CI_78_78, &Var_36, &PtagCaseMap_37);
    CaseLabelMap0_35 = ((MR_Word) (conv6_CaseLabelMap0_35));
    *STATE_VARIABLE_MaybeEnd_65 = ((MR_Word) (conv5_STATE_VARIABLE_MaybeEnd_65));
    STATE_VARIABLE_CI_78_78 = ((MR_Word) (conv4_STATE_VARIABLE_CI_78_78));
    mercury__map__count_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_2[1]), PtagCaseMap_37, &PtagsUsed_38);
    ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_78_78, &Globals_39);
    libs__globals__lookup_int_option_3_p_0(Globals_39, (MR_Integer) 463, &DenseSwitchSize_40);
    libs__globals__lookup_int_option_3_p_0(Globals_39, (MR_Integer) 469, &TrySwitchSize_41);
    libs__globals__lookup_int_option_3_p_0(Globals_39, (MR_Integer) 470, &BinarySwitchSize_42);
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (EndLabel_22));
    }
    {
      Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) ((MR_String) "end of tag switch"));
    }
    EndCode_48 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_93)));
    switch (CanFail_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FailLabel_51;
          MR_Word FailLabelCode_52;
          MR_Word FailureCode_53;
          MR_Word STATE_VARIABLE_CI_96_96;
          MR_Word Var_97;
          MR_Word Var_98;
          MR_Word STATE_VARIABLE_CLD_100_100;

          ll_backend__code_info__get_next_label_3_p_0(&FailLabel_51, STATE_VARIABLE_CI_78_78, &STATE_VARIABLE_CI_96_96);
          {
            MaybeFailLabel_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeFailLabel_49, 0) = ((MR_Box) (FailLabel_51));
          }
          {
            Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_98, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_98, 1) = ((MR_Box) (FailLabel_51));
          }
          {
            Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (Var_98));
            MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) ((MR_String) "switch has failed"));
          }
          FailLabelCode_52 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_97)));
          ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_30, STATE_VARIABLE_CI_96_96, &STATE_VARIABLE_CLD_100_100);
          ll_backend__code_loc_dep__generate_failure_4_p_0(&FailureCode_53, STATE_VARIABLE_CI_96_96, &STATE_VARIABLE_CI_101_101, STATE_VARIABLE_CLD_100_100);
          FailCode_50 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailLabelCode_52, FailureCode_53);
        }
        break;
      case (MR_Integer) 1:
        {
          MaybeFailLabel_49 = (MR_Word) ((MR_Unsigned) 0U);
          FailCode_50 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          STATE_VARIABLE_CI_101_101 = STATE_VARIABLE_CI_78_78;
        }
        break;
    }
    succeeded = (PtagsUsed_38 >= DenseSwitchSize_40);
    if (succeeded)
    {
      MR_Word PtagRval_47;
      MR_Word Targets_57;
      MR_Word TableCode_58;
      MR_Word SwitchCode_59;
      MR_Word Var_109;
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word PtagCaseList_126;

      PtagCode_46 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      {
        PtagRval_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), PtagRval_47, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), PtagRval_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), PtagRval_47, 2) = ((MR_Box) (VarRval_16));
      }
      Var_109 = (MR_Word) (MaxPrimary_32);
      backend_libs__switch_util__order_ptags_by_value_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), Var_109, PtagCaseMap_37, &PtagCaseList_126);
      ll_backend__tag_switch__generate_primary_jump_table_13_p_0(PtagCaseList_126, UINT8_C(0), MaxPrimary_32, StagReg_29, VarRval_16, MaybeFailLabel_49, PtagCountMap_33, &Targets_57, &TableCode_58, CaseLabelMap0_35, &CaseLabelMap_56, STATE_VARIABLE_CI_101_101, STATE_VARIABLE_CI_67);
      {
        Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (PtagRval_47));
        MR_hl_field(MR_mktag(3), Var_114, 2) = ((MR_Box) (Targets_57));
      }
      {
        Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (Var_114));
        MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) ((MR_String) "switch on primary tag"));
      }
      SwitchCode_59 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_113)));
      CasesCode_55 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SwitchCode_59, TableCode_58);
    }
    else
    {
      MR_Word PtagRval_170;
      MR_Integer NumRealRegs_44;
      MR_Word Var_83;

      succeeded = (PtagsUsed_38 >= (MR_Integer) 2);
      if (succeeded)
      {
        Var_83 = (MR_Integer) 333;
        libs__globals__lookup_int_option_3_p_0(Globals_39, Var_83, &NumRealRegs_44);
        succeeded = (NumRealRegs_44 == (MR_Integer) 0);
        if (!(succeeded))
        {
          MR_Integer PtagRegNo_45;
          MR_Word Var_84;

          succeeded = ((MR_tag((MR_Word) PtagReg_28)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_84 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), PtagReg_28, (MR_Integer) 0))) & (MR_Integer) 1);
            PtagRegNo_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PtagReg_28, (MR_Integer) 1))));
            succeeded = (Var_84 == (MR_Integer) 0);
          }
          if (succeeded)
            succeeded = (PtagRegNo_45 <= NumRealRegs_44);
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
      if (succeeded)
      {
        MR_Word Var_153;
        MR_Word Var_154;
        MR_Word Var_155;

        {
          Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_155, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Var_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_155, 2) = ((MR_Box) (VarRval_16));
        }
        {
          Var_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_154, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_154, 1) = ((MR_Box) (PtagReg_28));
          MR_hl_field(MR_mktag(3), Var_154, 2) = ((MR_Box) (Var_155));
        }
        {
          Var_153 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_153, 0) = ((MR_Box) (Var_154));
          MR_hl_field(MR_mktag(0), Var_153, 1) = ((MR_Box) ((MR_String) "compute tag to switch on"));
        }
        PtagCode_46 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_153)));
        {
          PtagRval_170 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PtagRval_170, 0) = ((MR_Box) (PtagReg_28));
        }
      }
      else
      {
        PtagCode_46 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        {
          PtagRval_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), PtagRval_170, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), PtagRval_170, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), PtagRval_170, 2) = ((MR_Box) (VarRval_16));
        }
      }
      succeeded = (PtagsUsed_38 >= BinarySwitchSize_42);
      if (succeeded)
      {
        MR_Word PtagCaseList_54;
        MR_Word Var_117 = (MR_Word) (MaxPrimary_32);

        backend_libs__switch_util__order_ptags_by_value_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), Var_117, PtagCaseMap_37, &PtagCaseList_54);
        ll_backend__tag_switch__generate_primary_binary_search_13_p_0(PtagCaseList_54, UINT8_C(0), MaxPrimary_32, PtagRval_170, StagReg_29, VarRval_16, MaybeFailLabel_49, PtagCountMap_33, &CasesCode_55, CaseLabelMap0_35, &CaseLabelMap_56, STATE_VARIABLE_CI_101_101, STATE_VARIABLE_CI_67);
      }
      else
      {
        succeeded = (PtagsUsed_38 >= TrySwitchSize_41);
        if (succeeded)
        {
          MR_Word PtagCaseList0_60;
          MR_Word Var_105;
          MR_Word Var_106;
          MR_Word PtagCaseList_127;
          MR_Word MostFreqCase_61;
          MR_Word OtherCases_62;

          backend_libs__switch_util__order_ptags_by_count_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), PtagCountMap_33, PtagCaseMap_37, &PtagCaseList0_60);
          succeeded = (CanFail_20 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (PtagCaseList0_60 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MostFreqCase_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PtagCaseList0_60, (MR_Integer) 0))));
              OtherCases_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PtagCaseList0_60, (MR_Integer) 1))));
            }
          }
          if (succeeded)
          {
            MR_Word Var_103;

            {
              Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (MostFreqCase_61));
              MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            PtagCaseList_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[2]), OtherCases_62, Var_103);
          }
          else
            PtagCaseList_127 = PtagCaseList0_60;
          Var_105 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          Var_106 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          ll_backend__tag_switch__generate_primary_try_chain_13_p_0(PtagCaseList_127, PtagRval_170, StagReg_29, VarRval_16, MaybeFailLabel_49, PtagCountMap_33, Var_105, Var_106, &CasesCode_55, CaseLabelMap0_35, &CaseLabelMap_56, STATE_VARIABLE_CI_101_101, STATE_VARIABLE_CI_67);
        }
        else
        {
          MR_Word PtagCaseList_128;

          backend_libs__switch_util__order_ptags_by_count_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), PtagCountMap_33, PtagCaseMap_37, &PtagCaseList_128);
          ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(PtagCaseList_128, PtagRval_170, StagReg_29, VarRval_16, MaybeFailLabel_49, PtagCountMap_33, &CasesCode_55, CaseLabelMap0_35, &CaseLabelMap_56, STATE_VARIABLE_CI_101_101, STATE_VARIABLE_CI_67);
        }
      }
    }
    Var_122 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    mercury__map__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_2[3]), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[5]), CaseLabelMap_56, ((MR_Box) (Var_122)), &conv8_RemainingCasesCode_63);
    RemainingCasesCode_63 = ((MR_Word) (conv8_RemainingCasesCode_63));
    Var_125 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_50, EndCode_48);
    Var_124 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RemainingCasesCode_63, Var_125);
    Var_123 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CasesCode_55, Var_124);
    *Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PtagCode_46, Var_123);
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__640__1_2_p_0(((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__627__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__622__1_2_p_0(((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0(
  MR_Word PtagGroups_14,
  uint8_t MinPtag_15,
  uint8_t MaxPtag_16,
  MR_Word PtagRval_17,
  MR_Word StagReg_18,
  MR_Word VarRval_19,
  MR_Word MaybeFailLabel_20,
  MR_Word PtagCountMap_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_60,
  MR_Word * STATE_VARIABLE_CaseLabelMap_61,
  MR_Word STATE_VARIABLE_CI_0_62,
  MR_Word * STATE_VARIABLE_CI_63)
{
  {
    MR_bool succeeded = (MinPtag_15 == MaxPtag_16);

    if (succeeded)
      if ((PtagGroups_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        if ((MaybeFailLabel_20 == (MR_Word) ((MR_Unsigned) 0U)))
          *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        else
        {
          MR_Word FailLabel_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailLabel_20, (MR_Integer) 0))));
          MR_String PtagStr_27;
          MR_String Comment_28;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;

          PtagStr_27 = mercury__string__uint8_to_string_1_f_0(MinPtag_15);
          Comment_28 = mercury__string__f_43_43_2_f_0((MR_String) "no code for ptag ", PtagStr_27);
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (FailLabel_26));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (Var_84));
          }
          {
            Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (Comment_28));
          }
          *Code_22 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_82)));
        }
        *STATE_VARIABLE_CaseLabelMap_61 = STATE_VARIABLE_CaseLabelMap_0_60;
        *STATE_VARIABLE_CI_63 = STATE_VARIABLE_CI_0_62;
      }
      else
      {
        MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PtagGroups_14, (MR_Integer) 1))));
        MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PtagGroups_14, (MR_Integer) 0))));

        if ((Var_123 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          uint8_t CurPrimaryPrime_29;
          MR_Word PrimaryInfo_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_124, (MR_Integer) 1))));
          MR_Word StagLoc_31;
          MR_Word StagGoalMap_32;
          MR_Word CountInfo_33;
          MR_Word StagLocPrime_34;
          MR_Integer MaxSecondary_35;
          MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_124, (MR_Integer) 0))));
          MR_Word Var_70;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Box conv0_CountInfo_33;

          CurPrimaryPrime_29 = (uint8_t) (Var_68);
          {
            Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[7]));
            MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1));
            MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (MR_Word) (MinPtag_15));
            MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) (MR_Word) (CurPrimaryPrime_29));
          }
          mercury__require__expect_3_p_0(Var_70, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "cur_primary mismatch");
          StagLoc_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PrimaryInfo_30, (MR_Integer) 0))));
          StagGoalMap_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PrimaryInfo_30, (MR_Integer) 1))));
          Var_73 = (MR_Word) (MinPtag_15);
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[1]), PtagCountMap_21, ((MR_Box) (Var_73)), &conv0_CountInfo_33);
          CountInfo_33 = ((MR_Word) (conv0_CountInfo_33));
          StagLocPrime_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_33, (MR_Integer) 0))));
          MaxSecondary_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CountInfo_33, (MR_Integer) 1))));
          {
            Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[4]));
            MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2));
            MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (StagLoc_31));
            MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) (StagLocPrime_34));
          }
          mercury__require__expect_3_p_0(Var_74, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "secondary tag locations differ");
          ll_backend__tag_switch__generate_primary_tag_code_13_p_0(StagGoalMap_32, Var_73, (MR_Word) ((MR_Unsigned) 0U), MaxSecondary_35, StagReg_18, StagLoc_31, VarRval_19, MaybeFailLabel_20, Code_22, STATE_VARIABLE_CaseLabelMap_0_60, STATE_VARIABLE_CaseLabelMap_61, STATE_VARIABLE_CI_0_62, STATE_VARIABLE_CI_63);
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "caselist not singleton or empty when binary search ends");
            return;
          }
      }
    else
    {
      uint8_t LowRangeEnd_39;
      uint8_t HighRangeStart_40;
      MR_Word InLowGroup_41;
      MR_Word LowGroups_45;
      MR_Word HighGroups_46;
      MR_Word NewLabel_47;
      MR_String LowStartStr_48;
      MR_String LowEndStr_49;
      MR_String HighStartStr_50;
      MR_String HighEndStr_51;
      MR_String IfComment_52;
      MR_String LabelComment_53;
      MR_Word LowRangeEndConst_54;
      MR_Word TestRval_55;
      MR_Word IfCode_56;
      MR_Word LabelCode_57;
      MR_Word LowRangeCode_58;
      MR_Word HighRangeCode_59;
      uint8_t Var_85 = (MinPtag_15 + MaxPtag_16);
      MR_Word STATE_VARIABLE_CI_90_90;
      MR_String Var_92;
      MR_String Var_93;
      MR_String Var_96;
      MR_String Var_97;
      MR_Word Var_99;
      MR_Integer Var_100;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word STATE_VARIABLE_CaseLabelMap_108_108;
      MR_Word STATE_VARIABLE_CI_109_109;
      MR_Word Var_112;
      MR_Word Var_113;

      LowRangeEnd_39 = mercury__uint8__f_47_47_2_f_0(Var_85, UINT8_C(2));
      HighRangeStart_40 = (LowRangeEnd_39 + UINT8_C(1));
      {
        InLowGroup_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InLowGroup_41, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[8]));
        MR_hl_field(MR_mktag(0), InLowGroup_41, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_3));
        MR_hl_field(MR_mktag(0), InLowGroup_41, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), InLowGroup_41, 3) = ((MR_Box) (MR_Word) (LowRangeEnd_39));
      }
      mercury__list__filter_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[4]), InLowGroup_41, PtagGroups_14, &LowGroups_45, &HighGroups_46);
      ll_backend__code_info__get_next_label_3_p_0(&NewLabel_47, STATE_VARIABLE_CI_0_62, &STATE_VARIABLE_CI_90_90);
      LowStartStr_48 = mercury__string__uint8_to_string_1_f_0(MinPtag_15);
      LowEndStr_49 = mercury__string__uint8_to_string_1_f_0(LowRangeEnd_39);
      HighStartStr_50 = mercury__string__uint8_to_string_1_f_0(HighRangeStart_40);
      HighEndStr_51 = mercury__string__uint8_to_string_1_f_0(MaxPtag_16);
      Var_93 = mercury__string__f_43_43_2_f_0((MR_String) " to ", LowEndStr_49);
      Var_92 = mercury__string__f_43_43_2_f_0(LowStartStr_48, Var_93);
      IfComment_52 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough for ptags ", Var_92);
      Var_97 = mercury__string__f_43_43_2_f_0((MR_String) " to ", HighEndStr_51);
      Var_96 = mercury__string__f_43_43_2_f_0(HighStartStr_50, Var_97);
      LabelComment_53 = mercury__string__f_43_43_2_f_0((MR_String) "code for ptags ", Var_96);
      Var_100 = mercury__uint8__cast_to_int_1_f_0(LowRangeEnd_39);
      {
        Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
      }
      {
        LowRangeEndConst_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), LowRangeEndConst_54, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), LowRangeEndConst_54, 1) = ((MR_Box) (Var_99));
      }
      {
        TestRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TestRval_55, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), TestRval_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[10])));
        MR_hl_field(MR_mktag(3), TestRval_55, 2) = ((MR_Box) (PtagRval_17));
        MR_hl_field(MR_mktag(3), TestRval_55, 3) = ((MR_Box) (LowRangeEndConst_54));
      }
      {
        Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (NewLabel_47));
      }
      {
        Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_104, 1) = ((MR_Box) (TestRval_55));
        MR_hl_field(MR_mktag(3), Var_104, 2) = ((MR_Box) (Var_105));
      }
      {
        Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (Var_104));
        MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (IfComment_52));
      }
      IfCode_56 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_103)));
      {
        Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_107, 1) = ((MR_Box) (NewLabel_47));
      }
      {
        Var_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (Var_107));
        MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (LabelComment_53));
      }
      LabelCode_57 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_106)));
      ll_backend__tag_switch__generate_primary_binary_search_13_p_0(LowGroups_45, MinPtag_15, LowRangeEnd_39, PtagRval_17, StagReg_18, VarRval_19, MaybeFailLabel_20, PtagCountMap_21, &LowRangeCode_58, STATE_VARIABLE_CaseLabelMap_0_60, &STATE_VARIABLE_CaseLabelMap_108_108, STATE_VARIABLE_CI_90_90, &STATE_VARIABLE_CI_109_109);
      ll_backend__tag_switch__generate_primary_binary_search_13_p_0(HighGroups_46, HighRangeStart_40, MaxPtag_16, PtagRval_17, StagReg_18, VarRval_19, MaybeFailLabel_20, PtagCountMap_21, &HighRangeCode_59, STATE_VARIABLE_CaseLabelMap_108_108, STATE_VARIABLE_CaseLabelMap_61, STATE_VARIABLE_CI_109_109, STATE_VARIABLE_CI_63);
      Var_113 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_57, HighRangeCode_59);
      Var_112 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LowRangeCode_58, Var_113);
      *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), IfCode_56, Var_112);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__565__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__552__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0(
  MR_Word PtagGroups_14,
  uint8_t CurPrimary_15,
  uint8_t MaxPrimary_16,
  MR_Word StagReg_17,
  MR_Word VarRval_18,
  MR_Word MaybeFailLabel_19,
  MR_Word PtagCountMap_20,
  MR_Word * Targets_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_40,
  MR_Word * STATE_VARIABLE_CaseLabelMap_41,
  MR_Word STATE_VARIABLE_CI_0_42,
  MR_Word * STATE_VARIABLE_CI_43)
{
  {
    MR_bool succeeded = (CurPrimary_15 > MaxPrimary_16);

    if (succeeded)
    {
      MR_Word Var_44;

      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[6]));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1));
        MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (PtagGroups_14));
        MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_44, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_jump_table\'/13", (MR_String) "PtagGroups != [] when Cur > Max");
      *Targets_21 = (MR_Word) ((MR_Unsigned) 0U);
      *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CI_43 = STATE_VARIABLE_CI_0_42;
      *STATE_VARIABLE_CaseLabelMap_41 = STATE_VARIABLE_CaseLabelMap_0_40;
    }
    else
    {
      uint8_t NextPrimary_25 = (CurPrimary_15 + UINT8_C(1));
      MR_Word PtagGroupsTail_27;
      MR_Word PrimaryInfo_28;
      MR_Word Var_49;
      MR_Word PtagCaseEntry_26;
      uint8_t Var_77;

      succeeded = (PtagGroups_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        PtagCaseEntry_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PtagGroups_14, (MR_Integer) 0))));
        PtagGroupsTail_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PtagGroups_14, (MR_Integer) 1))));
        Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCaseEntry_26, (MR_Integer) 0))));
        PrimaryInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCaseEntry_26, (MR_Integer) 1))));
        Var_77 = (uint8_t) (Var_49);
        succeeded = (CurPrimary_15 == Var_77);
      }
      if (succeeded)
      {
        MR_Word StagLoc_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PrimaryInfo_28, (MR_Integer) 0))));
        MR_Word StagGoalMap_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PrimaryInfo_28, (MR_Integer) 1))));
        MR_Word CountInfo_31;
        MR_Word StagLocPrime_32;
        MR_Integer MaxSecondary_33;
        MR_Word NewLabel_34;
        MR_String Comment_35;
        MR_Word LabelCode_36;
        MR_Word ThisTagCode_37;
        MR_Word TailTargets_38;
        MR_Word TailCode_39;
        MR_Word Var_51;
        MR_Word STATE_VARIABLE_CI_54_54;
        MR_String Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word STATE_VARIABLE_CaseLabelMap_61_61;
        MR_Word STATE_VARIABLE_CI_62_62;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Box conv0_CountInfo_31;

        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[1]), PtagCountMap_20, ((MR_Box) (Var_49)), &conv0_CountInfo_31);
        CountInfo_31 = ((MR_Word) (conv0_CountInfo_31));
        StagLocPrime_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_31, (MR_Integer) 0))));
        MaxSecondary_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CountInfo_31, (MR_Integer) 1))));
        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[4]));
          MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_jump_table_13_p_0_2));
          MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (StagLoc_29));
          MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (StagLocPrime_32));
        }
        mercury__require__expect_3_p_0(Var_51, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_jump_table\'/13", (MR_String) "secondary tag locations differ");
        ll_backend__code_info__get_next_label_3_p_0(&NewLabel_34, STATE_VARIABLE_CI_0_42, &STATE_VARIABLE_CI_54_54);
        Var_56 = mercury__string__uint8_to_string_1_f_0(CurPrimary_15);
        Comment_35 = mercury__string__f_43_43_2_f_0((MR_String) "start of a case in primary tag switch: ptag ", Var_56);
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (NewLabel_34));
        }
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (Comment_35));
        }
        LabelCode_36 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_57)));
        ll_backend__tag_switch__generate_primary_tag_code_13_p_0(StagGoalMap_30, Var_49, (MR_Word) ((MR_Unsigned) 0U), MaxSecondary_33, StagReg_17, StagLoc_29, VarRval_18, MaybeFailLabel_19, &ThisTagCode_37, STATE_VARIABLE_CaseLabelMap_0_40, &STATE_VARIABLE_CaseLabelMap_61_61, STATE_VARIABLE_CI_54_54, &STATE_VARIABLE_CI_62_62);
        ll_backend__tag_switch__generate_primary_jump_table_13_p_0(PtagGroupsTail_27, NextPrimary_25, MaxPrimary_16, StagReg_17, VarRval_18, MaybeFailLabel_19, PtagCountMap_20, &TailTargets_38, &TailCode_39, STATE_VARIABLE_CaseLabelMap_61_61, STATE_VARIABLE_CaseLabelMap_41, STATE_VARIABLE_CI_62_62, STATE_VARIABLE_CI_43);
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (NewLabel_34));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Targets_21 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTargets_38));
        }
        Var_66 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisTagCode_37, TailCode_39);
        *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_36, Var_66);
      }
      else
      {
        MR_Word TailTargets_69;

        ll_backend__tag_switch__generate_primary_jump_table_13_p_0(PtagGroups_14, NextPrimary_25, MaxPrimary_16, StagReg_17, VarRval_18, MaybeFailLabel_19, PtagCountMap_20, &TailTargets_69, Code_22, STATE_VARIABLE_CaseLabelMap_0_40, STATE_VARIABLE_CaseLabelMap_41, STATE_VARIABLE_CI_0_42, STATE_VARIABLE_CI_43);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Targets_21 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeFailLabel_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTargets_69));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__451__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PtagRval_2,
  MR_Word StagReg_3,
  MR_Word VarRval_4,
  MR_Word MaybeFailLabel_5,
  MR_Word PtagCountMap_6,
  MR_Word PrevTestsCode0_7,
  MR_Word PrevCasesCode0_8,
  MR_Word * Code_9,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_10,
  MR_Word * STATE_VARIABLE_CaseLabelMap_11,
  MR_Word STATE_VARIABLE_CI_0_12,
  MR_Word * STATE_VARIABLE_CI_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_chain\'/13", (MR_String) "empty list");
        return;
      }
    else
    {
      MR_Word PtagGroup_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PtagGroups_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MainPtag_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagGroup_30, (MR_Integer) 0))));
      MR_Word OtherPtags_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagGroup_30, (MR_Integer) 1))));
      MR_Word PtagCase_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagGroup_30, (MR_Integer) 2))));
      MR_Word StagLoc_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_44, (MR_Integer) 0))));
      MR_Word StagGoalMap_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_44, (MR_Integer) 1))));
      MR_Word CountInfo_47;
      MR_Word StagLocPrime_48;
      MR_Integer MaxSecondary_49;
      MR_Word Var_63;
      MR_Box conv0_CountInfo_47;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[1]), PtagCountMap_6, ((MR_Box) (MainPtag_42)), &conv0_CountInfo_47);
      CountInfo_47 = ((MR_Word) (conv0_CountInfo_47));
      StagLocPrime_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_47, (MR_Integer) 0))));
      MaxSecondary_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CountInfo_47, (MR_Integer) 1))));
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[4]));
        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1));
        MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (StagLoc_45));
        MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) (StagLocPrime_48));
      }
      mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_chain\'/13", (MR_String) "secondary tag locations differ");
      if ((PtagGroups_31 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((MaybeFailLabel_5 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Comment_56;
          MR_Word CommentCode_57;
          MR_Word TagCode_58;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_72;
          MR_Word Var_73;

          ll_backend__tag_switch__make_ptag_comment_4_p_0((MR_String) "fallthrough to last primary tag value: ", MainPtag_42, OtherPtags_43, &Comment_56);
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Comment_56));
          }
          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) ((MR_String) ""));
          }
          CommentCode_57 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_67)));
          ll_backend__tag_switch__generate_primary_tag_code_13_p_0(StagGoalMap_46, MainPtag_42, OtherPtags_43, MaxSecondary_49, StagReg_3, StagLoc_45, VarRval_4, MaybeFailLabel_5, &TagCode_58, STATE_VARIABLE_CaseLabelMap_0_10, STATE_VARIABLE_CaseLabelMap_11, STATE_VARIABLE_CI_0_12, STATE_VARIABLE_CI_13);
          Var_73 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TagCode_58, PrevCasesCode0_8);
          Var_72 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommentCode_57, Var_73);
          *Code_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrevTestsCode0_7, Var_72);
        }
        else
        {
          MR_Word FailLabel_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailLabel_5, (MR_Integer) 0))));
          MR_Word FailCode_55;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_80;
          MR_Word PrevTestsCode1_85;
          MR_Word PrevCasesCode1_86;

          ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(PtagRval_2, StagReg_3, MainPtag_42, OtherPtags_43, PtagCase_44, MaxSecondary_49, VarRval_4, MaybeFailLabel_5, PrevTestsCode0_7, &PrevTestsCode1_85, PrevCasesCode0_8, &PrevCasesCode1_86, STATE_VARIABLE_CaseLabelMap_0_10, STATE_VARIABLE_CaseLabelMap_11, STATE_VARIABLE_CI_0_12, STATE_VARIABLE_CI_13);
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (FailLabel_54));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (Var_78));
          }
          {
            Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) ((MR_String) "primary tag with no code to handle it"));
          }
          FailCode_55 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_76)));
          Var_80 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_55, PrevCasesCode1_86);
          *Code_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrevTestsCode1_85, Var_80);
        }
      else
      {
        MR_Word PrevTestsCode1_52;
        MR_Word PrevCasesCode1_53;
        MR_Word STATE_VARIABLE_CaseLabelMap_81_81;
        MR_Word STATE_VARIABLE_CI_82_82;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_PrevTestsCode0_7;
        MR_Word next_value_of_PrevCasesCode0_8;
        MR_Word next_value_of_STATE_VARIABLE_CaseLabelMap_0_10;
        MR_Word next_value_of_STATE_VARIABLE_CI_0_12;

        ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(PtagRval_2, StagReg_3, MainPtag_42, OtherPtags_43, PtagCase_44, MaxSecondary_49, VarRval_4, MaybeFailLabel_5, PrevTestsCode0_7, &PrevTestsCode1_52, PrevCasesCode0_8, &PrevCasesCode1_53, STATE_VARIABLE_CaseLabelMap_0_10, &STATE_VARIABLE_CaseLabelMap_81_81, STATE_VARIABLE_CI_0_12, &STATE_VARIABLE_CI_82_82);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = PtagGroups_31;
        next_value_of_PrevTestsCode0_7 = PrevTestsCode1_52;
        next_value_of_PrevCasesCode0_8 = PrevCasesCode1_53;
        next_value_of_STATE_VARIABLE_CaseLabelMap_0_10 = STATE_VARIABLE_CaseLabelMap_81_81;
        next_value_of_STATE_VARIABLE_CI_0_12 = STATE_VARIABLE_CI_82_82;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        PrevTestsCode0_7 = next_value_of_PrevTestsCode0_7;
        PrevCasesCode0_8 = next_value_of_PrevCasesCode0_8;
        STATE_VARIABLE_CaseLabelMap_0_10 = next_value_of_STATE_VARIABLE_CaseLabelMap_0_10;
        STATE_VARIABLE_CI_0_12 = next_value_of_STATE_VARIABLE_CI_0_12;
        continue;
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__tag_switch__ptag_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0(
  MR_String BaseStr_5,
  MR_Word MainPtag_6,
  MR_Word OtherPtags_7,
  MR_String * Comment_8)
{
  if ((OtherPtags_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_21;
    uint8_t Ptag_26 = (uint8_t) (MainPtag_6);

    Var_21 = mercury__string__uint8_to_string_1_f_0(Ptag_26);
    *Comment_8 = mercury__string__f_43_43_2_f_0(BaseStr_5, Var_21);
  }
  else
  {
    MR_String Var_11;
    MR_String Var_12;
    MR_String Var_13;
    MR_String Var_15;
    MR_String Var_16;
    MR_Word Var_18;
    uint8_t Ptag_27 = (uint8_t) (MainPtag_6);

    Var_12 = mercury__string__uint8_to_string_1_f_0(Ptag_27);
    Var_18 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[4]), OtherPtags_7);
    Var_16 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_18);
    Var_15 = mercury__string__f_43_43_2_f_0(Var_16, (MR_String) ")");
    Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "(shared with ", Var_15);
    Var_11 = mercury__string__f_43_43_2_f_0(Var_12, Var_13);
    *Comment_8 = mercury__string__f_43_43_2_f_0(BaseStr_5, Var_11);
  }
}

static MR_Box MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__tag_switch__ptag_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(
  MR_Word PtagRval_17,
  MR_Word StagReg_18,
  MR_Word MainPtag_19,
  MR_Word OtherPtags_20,
  MR_Word PtagCase_21,
  MR_Integer MaxSecondary_22,
  MR_Word VarRval_23,
  MR_Word MaybeFailLabel_24,
  MR_Word PrevTestsCode0_25,
  MR_Word * PrevTestsCode_26,
  MR_Word PrevCasesCode0_27,
  MR_Word * PrevCasesCode_28,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_41,
  MR_Word * STATE_VARIABLE_CaseLabelMap_42,
  MR_Word STATE_VARIABLE_CI_0_43,
  MR_Word * STATE_VARIABLE_CI_44)
{
  {
    MR_Word ThisPtagLabel_31;
    uint8_t MainPtagUint8_32;
    MR_Word TestRval0_33;
    MR_Word TestRval_34;
    MR_Word TestCode_35;
    MR_String Comment_36;
    MR_Word LabelCode_37;
    MR_Word StagLoc_38;
    MR_Word StagGoalMap_39;
    MR_Word TagCode_40;
    MR_Word STATE_VARIABLE_CI_45_45;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Integer Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_60;

    ll_backend__code_info__get_next_label_3_p_0(&ThisPtagLabel_31, STATE_VARIABLE_CI_0_43, &STATE_VARIABLE_CI_45_45);
    MainPtagUint8_32 = (uint8_t) (MainPtag_19);
    Var_50 = mercury__uint8__cast_to_int_1_f_0(MainPtagUint8_32);
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Var_49));
    }
    {
      TestRval0_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TestRval0_33, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), TestRval0_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[9])));
      MR_hl_field(MR_mktag(3), TestRval0_33, 2) = ((MR_Box) (PtagRval_17));
      MR_hl_field(MR_mktag(3), TestRval0_33, 3) = ((MR_Box) (Var_48));
    }
    ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_p_0(OtherPtags_20, PtagRval_17, TestRval0_33, &TestRval_34);
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (ThisPtagLabel_31));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (TestRval_34));
      MR_hl_field(MR_mktag(3), Var_52, 2) = ((MR_Box) (Var_53));
    }
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) ((MR_String) "test primary tag only"));
    }
    TestCode_35 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_51)));
    if ((OtherPtags_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_78;
      uint8_t Ptag_83 = (uint8_t) (MainPtag_19);

      Var_78 = mercury__string__uint8_to_string_1_f_0(Ptag_83);
      Comment_36 = mercury__string__f_43_43_2_f_0((MR_String) "primary tag value: ", Var_78);
    }
    else
    {
      MR_String Var_68;
      MR_String Var_69;
      MR_String Var_70;
      MR_String Var_72;
      MR_String Var_73;
      MR_Word Var_75;
      uint8_t Ptag_84 = (uint8_t) (MainPtag_19);

      Var_69 = mercury__string__uint8_to_string_1_f_0(Ptag_84);
      Var_75 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[3]), OtherPtags_20);
      Var_73 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_75);
      Var_72 = mercury__string__f_43_43_2_f_0(Var_73, (MR_String) ")");
      Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "(shared with ", Var_72);
      Var_68 = mercury__string__f_43_43_2_f_0(Var_69, Var_70);
      Comment_36 = mercury__string__f_43_43_2_f_0((MR_String) "primary tag value: ", Var_68);
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (ThisPtagLabel_31));
    }
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (Comment_36));
    }
    LabelCode_37 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_56)));
    StagLoc_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_21, (MR_Integer) 0))));
    StagGoalMap_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_21, (MR_Integer) 1))));
    ll_backend__tag_switch__generate_primary_tag_code_13_p_0(StagGoalMap_39, MainPtag_19, OtherPtags_20, MaxSecondary_22, StagReg_18, StagLoc_38, VarRval_23, MaybeFailLabel_24, &TagCode_40, STATE_VARIABLE_CaseLabelMap_0_41, STATE_VARIABLE_CaseLabelMap_42, STATE_VARIABLE_CI_45_45, STATE_VARIABLE_CI_44);
    *PrevTestsCode_26 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrevTestsCode0_25, TestCode_35);
    Var_60 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TagCode_40, PrevCasesCode0_27);
    *PrevCasesCode_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_37, Var_60);
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PtagRval_2,
  MR_Word HeadVar__3_3,
  MR_Word * TestRval_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *TestRval_4 = HeadVar__3_3;
    else
    {
      MR_Word OtherPtag_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word OtherPtags_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      uint8_t OtherPtagUint8_12 = (uint8_t) (OtherPtag_7);
      MR_Word ThisTestRval_13;
      MR_Word TestRval1_14;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Integer Var_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__3_3;

      Var_19 = mercury__uint8__cast_to_int_1_f_0(OtherPtagUint8_12);
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Var_18));
      }
      {
        ThisTestRval_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ThisTestRval_13, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), ThisTestRval_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[9])));
        MR_hl_field(MR_mktag(3), ThisTestRval_13, 2) = ((MR_Box) (PtagRval_2));
        MR_hl_field(MR_mktag(3), ThisTestRval_13, 3) = ((MR_Box) (Var_17));
      }
      {
        TestRval1_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TestRval1_14, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), TestRval1_14, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), TestRval1_14, 2) = ((MR_Box) (HeadVar__3_3));
        MR_hl_field(MR_mktag(3), TestRval1_14, 3) = ((MR_Box) (ThisTestRval_13));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = OtherPtags_8;
      next_value_of_HeadVar__3_3 = TestRval1_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__358__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PtagRval_2,
  MR_Word StagReg_3,
  MR_Word VarRval_4,
  MR_Word MaybeFailLabel_5,
  MR_Word PtagCountMap_6,
  MR_Word * Code_7,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_8,
  MR_Word * STATE_VARIABLE_CaseLabelMap_9,
  MR_Word STATE_VARIABLE_CI_0_10,
  MR_Word * STATE_VARIABLE_CI_11)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_me_else_chain\'/11", (MR_String) "empty switch");
        return;
      }
    else
    {
      MR_Word PtagGroup_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PtagGroups_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MainPtag_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagGroup_26, (MR_Integer) 0))));
      MR_Word OtherPtags_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagGroup_26, (MR_Integer) 1))));
      MR_Word PtagCase_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagGroup_26, (MR_Integer) 2))));
      MR_Word StagLoc_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_38, (MR_Integer) 0))));
      MR_Word StagGoalMap_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_38, (MR_Integer) 1))));
      MR_Word CountInfo_41;
      MR_Word StagLocPrime_42;
      MR_Integer MaxSecondary_43;
      MR_Word Var_54;
      MR_Box conv0_CountInfo_41;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[1]), PtagCountMap_6, ((MR_Box) (MainPtag_36)), &conv0_CountInfo_41);
      CountInfo_41 = ((MR_Word) (conv0_CountInfo_41));
      StagLocPrime_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_41, (MR_Integer) 0))));
      MaxSecondary_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CountInfo_41, (MR_Integer) 1))));
      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[4]));
        MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0_1));
        MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (StagLoc_39));
        MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (StagLocPrime_42));
      }
      mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_me_else_chain\'/11", (MR_String) "secondary tag locations differ");
      if ((PtagGroups_27 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((MaybeFailLabel_5 == (MR_Word) ((MR_Unsigned) 0U)))
          ll_backend__tag_switch__generate_primary_tag_code_13_p_0(StagGoalMap_40, MainPtag_36, OtherPtags_37, MaxSecondary_43, StagReg_3, StagLoc_39, VarRval_4, MaybeFailLabel_5, Code_7, STATE_VARIABLE_CaseLabelMap_0_8, STATE_VARIABLE_CaseLabelMap_9, STATE_VARIABLE_CI_0_10, STATE_VARIABLE_CI_11);
        else
        {
          MR_Word FailLabel_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailLabel_5, (MR_Integer) 0))));
          MR_Word FailCode_49;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word ThisTagCode_69;

          ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(PtagRval_2, StagReg_3, MainPtag_36, OtherPtags_37, PtagCase_38, MaxSecondary_43, VarRval_4, MaybeFailLabel_5, &ThisTagCode_69, STATE_VARIABLE_CaseLabelMap_0_8, STATE_VARIABLE_CaseLabelMap_9, STATE_VARIABLE_CI_0_10, STATE_VARIABLE_CI_11);
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (FailLabel_48));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (Var_63));
          }
          {
            Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) ((MR_String) "primary tag with no code to handle it"));
          }
          FailCode_49 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_61)));
          *Code_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisTagCode_69, FailCode_49);
        }
      else
      {
        MR_Word ThisTagCode_46;
        MR_Word OtherTagsCode_47;
        MR_Word STATE_VARIABLE_CaseLabelMap_65_65;
        MR_Word STATE_VARIABLE_CI_66_66;

        ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(PtagRval_2, StagReg_3, MainPtag_36, OtherPtags_37, PtagCase_38, MaxSecondary_43, VarRval_4, MaybeFailLabel_5, &ThisTagCode_46, STATE_VARIABLE_CaseLabelMap_0_8, &STATE_VARIABLE_CaseLabelMap_65_65, STATE_VARIABLE_CI_0_10, &STATE_VARIABLE_CI_66_66);
        ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(PtagGroups_27, PtagRval_2, StagReg_3, VarRval_4, MaybeFailLabel_5, PtagCountMap_6, &OtherTagsCode_47, STATE_VARIABLE_CaseLabelMap_65_65, STATE_VARIABLE_CaseLabelMap_9, STATE_VARIABLE_CI_66_66, STATE_VARIABLE_CI_11);
        *Code_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisTagCode_46, OtherTagsCode_47);
      }
    }
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(
  MR_Word PtagRval_14,
  MR_Word StagReg_15,
  MR_Word MainPtag_16,
  MR_Word OtherPtags_17,
  MR_Word PtagCase_18,
  MR_Integer MaxSecondary_19,
  MR_Word VarRval_20,
  MR_Word MaybeFailLabel_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_34,
  MR_Word * STATE_VARIABLE_CaseLabelMap_35,
  MR_Word STATE_VARIABLE_CI_0_36,
  MR_Word * STATE_VARIABLE_CI_37)
{
  {
    MR_Word ElseLabel_25;
    uint8_t MainPtagUint8_26;
    MR_Word TestRval0_27;
    MR_Word TestRval_28;
    MR_Word TestCode_29;
    MR_Word StagLoc_30;
    MR_Word StagGoalMap_31;
    MR_Word TagCode_32;
    MR_Word ElseCode_33;
    MR_Word STATE_VARIABLE_CI_38_38;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Integer Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;

    ll_backend__code_info__get_next_label_3_p_0(&ElseLabel_25, STATE_VARIABLE_CI_0_36, &STATE_VARIABLE_CI_38_38);
    MainPtagUint8_26 = (uint8_t) (MainPtag_16);
    Var_43 = mercury__uint8__cast_to_int_1_f_0(MainPtagUint8_26);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Var_42));
    }
    {
      TestRval0_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TestRval0_27, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), TestRval0_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[8])));
      MR_hl_field(MR_mktag(3), TestRval0_27, 2) = ((MR_Box) (PtagRval_14));
      MR_hl_field(MR_mktag(3), TestRval0_27, 3) = ((MR_Box) (Var_41));
    }
    ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_p_0(OtherPtags_17, PtagRval_14, TestRval0_27, &TestRval_28);
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (ElseLabel_25));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (TestRval_28));
      MR_hl_field(MR_mktag(3), Var_45, 2) = ((MR_Box) (Var_46));
    }
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) ((MR_String) "test primary tag only"));
    }
    TestCode_29 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_44)));
    StagLoc_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_18, (MR_Integer) 0))));
    StagGoalMap_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_18, (MR_Integer) 1))));
    ll_backend__tag_switch__generate_primary_tag_code_13_p_0(StagGoalMap_31, MainPtag_16, OtherPtags_17, MaxSecondary_19, StagReg_15, StagLoc_30, VarRval_20, MaybeFailLabel_21, &TagCode_32, STATE_VARIABLE_CaseLabelMap_0_34, STATE_VARIABLE_CaseLabelMap_35, STATE_VARIABLE_CI_38_38, STATE_VARIABLE_CI_37);
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (ElseLabel_25));
    }
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) ((MR_String) "handle next primary tag"));
    }
    ElseCode_33 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_50)));
    Var_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TagCode_32, ElseCode_33);
    *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_29, Var_53);
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__731__4_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__731__3_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__731__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__731__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0(
  MR_Word StagGoalMap_14,
  MR_Word MainPtag_15,
  MR_Word OtherPtags_16,
  MR_Integer MaxSecondary_17,
  MR_Word StagReg_18,
  MR_Word StagLoc_19,
  MR_Word Rval_20,
  MR_Word MaybeFailLabel_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_51,
  MR_Word * STATE_VARIABLE_CaseLabelMap_52,
  MR_Word STATE_VARIABLE_CI_0_53,
  MR_Word * STATE_VARIABLE_CI_54)
{
  {
    MR_bool succeeded;
    MR_Word StagGoalList_25;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), StagGoalMap_14, &StagGoalList_25);
    switch (MR_tag((MR_Word) StagLoc_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(StagLoc_19)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              if ((StagGoalList_25 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "no goal for non-shared tag");
                  return;
                }
              else
              {
                MR_Word Var_494 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StagGoalList_25, (MR_Integer) 1))));
                MR_Word Var_495 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StagGoalList_25, (MR_Integer) 0))));

                if ((Var_494 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word CaseLabel_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_495, (MR_Integer) 1))));
                  MR_Integer Var_106 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_495, (MR_Integer) 0))));

                  succeeded = (Var_106 == (MR_Integer) -1);
                  if (succeeded)
                    ll_backend__switch_case__generate_case_code_or_jump_4_p_0(CaseLabel_27, Code_22, STATE_VARIABLE_CaseLabelMap_0_51, STATE_VARIABLE_CaseLabelMap_52);
                  else
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "badly formed goal for non-shared tag");
                      return;
                    }
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "more than one goal for non-shared tag");
                    return;
                  }
              }
              *STATE_VARIABLE_CI_54 = STATE_VARIABLE_CI_0_53;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word OrigStagRval_202;
              MR_Word Globals_204;
              MR_Integer DenseSwitchSize_205;
              MR_Integer BinarySwitchSize_206;
              MR_Integer TrySwitchSize_207;
              MR_Word MaybeSecFailLabel_216;
              MR_Word Var_219;

              {
                OrigStagRval_202 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), OrigStagRval_202, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), OrigStagRval_202, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(3), OrigStagRval_202, 2) = ((MR_Box) (Rval_20));
              }
              {
                Var_219 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_219, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[3]));
                MR_hl_field(MR_mktag(0), Var_219, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_tag_code_13_p_0_2));
                MR_hl_field(MR_mktag(0), Var_219, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_219, 3) = ((MR_Box) (OtherPtags_16));
                MR_hl_field(MR_mktag(0), Var_219, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_219, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) ">1 ptag with secondary tag");
              ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_53, &Globals_204);
              libs__globals__lookup_int_option_3_p_0(Globals_204, (MR_Integer) 463, &DenseSwitchSize_205);
              libs__globals__lookup_int_option_3_p_0(Globals_204, (MR_Integer) 470, &BinarySwitchSize_206);
              libs__globals__lookup_int_option_3_p_0(Globals_204, (MR_Integer) 469, &TrySwitchSize_207);
              if ((MaybeFailLabel_21 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeSecFailLabel_216 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Integer StagGoalCount_160;
                MR_Integer FullGoalCount_161;

                mercury__list__length_2_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_1[2]), StagGoalList_25, &StagGoalCount_160);
                FullGoalCount_161 = (MR_Integer) ((MR_Unsigned) MaxSecondary_17 + (MR_Unsigned) 1);
                succeeded = (FullGoalCount_161 == StagGoalCount_160);
                if (succeeded)
                  MaybeSecFailLabel_216 = (MR_Word) ((MR_Unsigned) 0U);
                else
                  MaybeSecFailLabel_216 = MaybeFailLabel_21;
              }
              succeeded = (MaxSecondary_17 >= DenseSwitchSize_205);
              if (succeeded)
              {
                MR_Word Targets_179;
                MR_Word Var_181;
                MR_Word Var_182;
                MR_Word StagCode_516;

                StagCode_516 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(StagGoalList_25, (MR_Integer) 0, MaxSecondary_17, MaybeSecFailLabel_216, &Targets_179);
                {
                  Var_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_182, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                  MR_hl_field(MR_mktag(3), Var_182, 1) = ((MR_Box) (OrigStagRval_202));
                  MR_hl_field(MR_mktag(3), Var_182, 2) = ((MR_Box) (Targets_179));
                }
                {
                  Var_181 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_181, 0) = ((MR_Box) (Var_182));
                  MR_hl_field(MR_mktag(0), Var_181, 1) = ((MR_Box) ((MR_String) "switch on secondary tag"));
                }
                *Code_22 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_181)));
                *STATE_VARIABLE_CaseLabelMap_52 = STATE_VARIABLE_CaseLabelMap_0_51;
                *STATE_VARIABLE_CI_54 = STATE_VARIABLE_CI_0_53;
              }
              else
              {
                MR_Word StagCode_531;
                MR_Word StagRval_532;
                MR_Integer NumRealRegs_138;
                MR_Word Var_141;

                succeeded = (MaxSecondary_17 >= (MR_Integer) 2);
                if (succeeded)
                {
                  Var_141 = (MR_Integer) 333;
                  libs__globals__lookup_int_option_3_p_0(Globals_204, Var_141, &NumRealRegs_138);
                  succeeded = (NumRealRegs_138 == (MR_Integer) 0);
                  if (!(succeeded))
                  {
                    MR_Integer StagRegNo_130;
                    MR_Word Var_127;

                    succeeded = ((MR_tag((MR_Word) StagReg_18)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Var_127 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), StagReg_18, (MR_Integer) 0))) & (MR_Integer) 1);
                      StagRegNo_130 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), StagReg_18, (MR_Integer) 1))));
                      succeeded = (Var_127 == (MR_Integer) 0);
                    }
                    if (succeeded)
                      succeeded = (StagRegNo_130 <= NumRealRegs_138);
                    else
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "improper reg in tag switch");
                        return;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word Var_518;
                  MR_Word Var_519;

                  {
                    Var_519 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_519, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Var_519, 1) = ((MR_Box) (StagReg_18));
                    MR_hl_field(MR_mktag(3), Var_519, 2) = ((MR_Box) (OrigStagRval_202));
                  }
                  {
                    Var_518 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_518, 0) = ((MR_Box) (Var_519));
                    MR_hl_field(MR_mktag(0), Var_518, 1) = ((MR_Box) ((MR_String) "compute local rest-of-word sec tag to switch on"));
                  }
                  StagCode_531 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_518)));
                  {
                    StagRval_532 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), StagRval_532, 0) = ((MR_Box) (StagReg_18));
                  }
                }
                else
                {
                  StagCode_531 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                  StagRval_532 = OrigStagRval_202;
                }
                succeeded = (MaxSecondary_17 >= BinarySwitchSize_206);
                if (succeeded)
                  ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(StagGoalList_25, (MR_Integer) 0, MaxSecondary_17, StagRval_532, MaybeSecFailLabel_216, Code_22, STATE_VARIABLE_CaseLabelMap_0_51, STATE_VARIABLE_CaseLabelMap_52, STATE_VARIABLE_CI_0_53, STATE_VARIABLE_CI_54);
                else
                {
                  succeeded = (MaxSecondary_17 >= TrySwitchSize_207);
                  if (succeeded)
                  {
                    MR_Word Codes_185;
                    MR_Word Var_186;

                    Var_186 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                    ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(StagGoalList_25, StagRval_532, MaybeSecFailLabel_216, Var_186, &Codes_185, STATE_VARIABLE_CaseLabelMap_0_51, STATE_VARIABLE_CaseLabelMap_52);
                    *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), StagCode_531, Codes_185);
                    *STATE_VARIABLE_CI_54 = STATE_VARIABLE_CI_0_53;
                  }
                  else
                  {
                    MR_Word Codes_188;

                    ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(StagGoalList_25, StagRval_532, MaybeSecFailLabel_216, &Codes_188, STATE_VARIABLE_CaseLabelMap_0_51, STATE_VARIABLE_CaseLabelMap_52, STATE_VARIABLE_CI_0_53, STATE_VARIABLE_CI_54);
                    *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), StagCode_531, Codes_188);
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word OrigStagRval_448;
              MR_Word Globals_450;
              MR_Integer DenseSwitchSize_451;
              MR_Integer BinarySwitchSize_452;
              MR_Integer TrySwitchSize_453;
              MR_Word MaybeSecFailLabel_462;
              MR_Word Var_465;

              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MainPtag_15));
              }
              {
                Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_72));
                MR_hl_field(MR_mktag(3), Var_71, 2) = ((MR_Box) (Rval_20));
                MR_hl_field(MR_mktag(3), Var_71, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[12])));
              }
              {
                OrigStagRval_448 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), OrigStagRval_448, 0) = ((MR_Box) (Var_71));
              }
              {
                Var_465 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_465, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[3]));
                MR_hl_field(MR_mktag(0), Var_465, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_tag_code_13_p_0_4));
                MR_hl_field(MR_mktag(0), Var_465, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_465, 3) = ((MR_Box) (OtherPtags_16));
                MR_hl_field(MR_mktag(0), Var_465, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_465, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) ">1 ptag with secondary tag");
              ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_53, &Globals_450);
              libs__globals__lookup_int_option_3_p_0(Globals_450, (MR_Integer) 463, &DenseSwitchSize_451);
              libs__globals__lookup_int_option_3_p_0(Globals_450, (MR_Integer) 470, &BinarySwitchSize_452);
              libs__globals__lookup_int_option_3_p_0(Globals_450, (MR_Integer) 469, &TrySwitchSize_453);
              if ((MaybeFailLabel_21 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeSecFailLabel_462 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Integer StagGoalCount_406;
                MR_Integer FullGoalCount_407;

                mercury__list__length_2_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_1[2]), StagGoalList_25, &StagGoalCount_406);
                FullGoalCount_407 = (MR_Integer) ((MR_Unsigned) MaxSecondary_17 + (MR_Unsigned) 1);
                succeeded = (FullGoalCount_407 == StagGoalCount_406);
                if (succeeded)
                  MaybeSecFailLabel_462 = (MR_Word) ((MR_Unsigned) 0U);
                else
                  MaybeSecFailLabel_462 = MaybeFailLabel_21;
              }
              succeeded = (MaxSecondary_17 >= DenseSwitchSize_451);
              if (succeeded)
              {
                MR_Word Targets_425;
                MR_Word Var_427;
                MR_Word Var_428;
                MR_Word StagCode_556;

                StagCode_556 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(StagGoalList_25, (MR_Integer) 0, MaxSecondary_17, MaybeSecFailLabel_462, &Targets_425);
                {
                  Var_428 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_428, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                  MR_hl_field(MR_mktag(3), Var_428, 1) = ((MR_Box) (OrigStagRval_448));
                  MR_hl_field(MR_mktag(3), Var_428, 2) = ((MR_Box) (Targets_425));
                }
                {
                  Var_427 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_427, 0) = ((MR_Box) (Var_428));
                  MR_hl_field(MR_mktag(0), Var_427, 1) = ((MR_Box) ((MR_String) "switch on secondary tag"));
                }
                *Code_22 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_427)));
                *STATE_VARIABLE_CaseLabelMap_52 = STATE_VARIABLE_CaseLabelMap_0_51;
                *STATE_VARIABLE_CI_54 = STATE_VARIABLE_CI_0_53;
              }
              else
              {
                MR_Word StagCode_571;
                MR_Word StagRval_572;
                MR_Integer NumRealRegs_384;
                MR_Word Var_387;

                succeeded = (MaxSecondary_17 >= (MR_Integer) 2);
                if (succeeded)
                {
                  Var_387 = (MR_Integer) 333;
                  libs__globals__lookup_int_option_3_p_0(Globals_450, Var_387, &NumRealRegs_384);
                  succeeded = (NumRealRegs_384 == (MR_Integer) 0);
                  if (!(succeeded))
                  {
                    MR_Integer StagRegNo_376;
                    MR_Word Var_373;

                    succeeded = ((MR_tag((MR_Word) StagReg_18)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Var_373 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), StagReg_18, (MR_Integer) 0))) & (MR_Integer) 1);
                      StagRegNo_376 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), StagReg_18, (MR_Integer) 1))));
                      succeeded = (Var_373 == (MR_Integer) 0);
                    }
                    if (succeeded)
                      succeeded = (StagRegNo_376 <= NumRealRegs_384);
                    else
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "improper reg in tag switch");
                        return;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word Var_558;
                  MR_Word Var_559;

                  {
                    Var_559 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_559, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Var_559, 1) = ((MR_Box) (StagReg_18));
                    MR_hl_field(MR_mktag(3), Var_559, 2) = ((MR_Box) (OrigStagRval_448));
                  }
                  {
                    Var_558 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_558, 0) = ((MR_Box) (Var_559));
                    MR_hl_field(MR_mktag(0), Var_558, 1) = ((MR_Box) ((MR_String) "compute remote word sec tag to switch on"));
                  }
                  StagCode_571 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_558)));
                  {
                    StagRval_572 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), StagRval_572, 0) = ((MR_Box) (StagReg_18));
                  }
                }
                else
                {
                  StagCode_571 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                  StagRval_572 = OrigStagRval_448;
                }
                succeeded = (MaxSecondary_17 >= BinarySwitchSize_452);
                if (succeeded)
                  ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(StagGoalList_25, (MR_Integer) 0, MaxSecondary_17, StagRval_572, MaybeSecFailLabel_462, Code_22, STATE_VARIABLE_CaseLabelMap_0_51, STATE_VARIABLE_CaseLabelMap_52, STATE_VARIABLE_CI_0_53, STATE_VARIABLE_CI_54);
                else
                {
                  succeeded = (MaxSecondary_17 >= TrySwitchSize_453);
                  if (succeeded)
                  {
                    MR_Word Codes_431;
                    MR_Word Var_432;

                    Var_432 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                    ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(StagGoalList_25, StagRval_572, MaybeSecFailLabel_462, Var_432, &Codes_431, STATE_VARIABLE_CaseLabelMap_0_51, STATE_VARIABLE_CaseLabelMap_52);
                    *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), StagCode_571, Codes_431);
                    *STATE_VARIABLE_CI_54 = STATE_VARIABLE_CI_0_53;
                  }
                  else
                  {
                    MR_Word Codes_434;

                    ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(StagGoalList_25, StagRval_572, MaybeSecFailLabel_462, &Codes_434, STATE_VARIABLE_CaseLabelMap_0_51, STATE_VARIABLE_CaseLabelMap_52, STATE_VARIABLE_CI_0_53, STATE_VARIABLE_CI_54);
                    *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), StagCode_571, Codes_434);
                  }
                }
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OrigStagRval_31;
          MR_Word Globals_36;
          MR_Integer DenseSwitchSize_37;
          MR_Integer BinarySwitchSize_38;
          MR_Integer TrySwitchSize_39;
          MR_Word MaybeSecFailLabel_48;
          MR_Word Var_57;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_76;
          MR_Unsigned Mask_114 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), StagLoc_19, (MR_Integer) 1))));

          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Var_57, 2) = ((MR_Box) (Rval_20));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (Mask_114));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
          }
          {
            OrigStagRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), OrigStagRval_31, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), OrigStagRval_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[11])));
            MR_hl_field(MR_mktag(3), OrigStagRval_31, 2) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(3), OrigStagRval_31, 3) = ((MR_Box) (Var_59));
          }
          {
            Var_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[3]));
            MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1));
            MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (OtherPtags_16));
            MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_76, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) ">1 ptag with secondary tag");
          ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_53, &Globals_36);
          libs__globals__lookup_int_option_3_p_0(Globals_36, (MR_Integer) 463, &DenseSwitchSize_37);
          libs__globals__lookup_int_option_3_p_0(Globals_36, (MR_Integer) 470, &BinarySwitchSize_38);
          libs__globals__lookup_int_option_3_p_0(Globals_36, (MR_Integer) 469, &TrySwitchSize_39);
          if ((MaybeFailLabel_21 == (MR_Word) ((MR_Unsigned) 0U)))
            MaybeSecFailLabel_48 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Integer StagGoalCount_46;
            MR_Integer FullGoalCount_47;

            mercury__list__length_2_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_1[2]), StagGoalList_25, &StagGoalCount_46);
            FullGoalCount_47 = (MR_Integer) ((MR_Unsigned) MaxSecondary_17 + (MR_Unsigned) 1);
            succeeded = (FullGoalCount_47 == StagGoalCount_46);
            if (succeeded)
              MaybeSecFailLabel_48 = (MR_Word) ((MR_Unsigned) 0U);
            else
              MaybeSecFailLabel_48 = MaybeFailLabel_21;
          }
          succeeded = (MaxSecondary_17 >= DenseSwitchSize_37);
          if (succeeded)
          {
            MR_Word Targets_49;
            MR_Word Var_99;
            MR_Word Var_100;
            MR_Word StagCode_496;

            StagCode_496 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(StagGoalList_25, (MR_Integer) 0, MaxSecondary_17, MaybeSecFailLabel_48, &Targets_49);
            {
              Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_100, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), Var_100, 1) = ((MR_Box) (OrigStagRval_31));
              MR_hl_field(MR_mktag(3), Var_100, 2) = ((MR_Box) (Targets_49));
            }
            {
              Var_99 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (Var_100));
              MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) ((MR_String) "switch on secondary tag"));
            }
            *Code_22 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_99)));
            *STATE_VARIABLE_CaseLabelMap_52 = STATE_VARIABLE_CaseLabelMap_0_51;
            *STATE_VARIABLE_CI_54 = STATE_VARIABLE_CI_0_53;
          }
          else
          {
            MR_Word StagCode_507;
            MR_Word StagRval_508;
            MR_Integer NumRealRegs_41;
            MR_Word Var_84;

            succeeded = (MaxSecondary_17 >= (MR_Integer) 2);
            if (succeeded)
            {
              Var_84 = (MR_Integer) 333;
              libs__globals__lookup_int_option_3_p_0(Globals_36, Var_84, &NumRealRegs_41);
              succeeded = (NumRealRegs_41 == (MR_Integer) 0);
              if (!(succeeded))
              {
                MR_Integer StagRegNo_42;
                MR_Word Var_85;

                succeeded = ((MR_tag((MR_Word) StagReg_18)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), StagReg_18, (MR_Integer) 0))) & (MR_Integer) 1);
                  StagRegNo_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), StagReg_18, (MR_Integer) 1))));
                  succeeded = (Var_85 == (MR_Integer) 0);
                }
                if (succeeded)
                  succeeded = (StagRegNo_42 <= NumRealRegs_41);
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "improper reg in tag switch");
                    return;
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_498;
              MR_Word Var_499;

              {
                Var_499 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_499, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_499, 1) = ((MR_Box) (StagReg_18));
                MR_hl_field(MR_mktag(3), Var_499, 2) = ((MR_Box) (OrigStagRval_31));
              }
              {
                Var_498 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_498, 0) = ((MR_Box) (Var_499));
                MR_hl_field(MR_mktag(0), Var_498, 1) = ((MR_Box) ((MR_String) "compute local sec tag bits to switch on"));
              }
              StagCode_507 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_498)));
              {
                StagRval_508 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StagRval_508, 0) = ((MR_Box) (StagReg_18));
              }
            }
            else
            {
              StagCode_507 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              StagRval_508 = OrigStagRval_31;
            }
            succeeded = (MaxSecondary_17 >= BinarySwitchSize_38);
            if (succeeded)
              ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(StagGoalList_25, (MR_Integer) 0, MaxSecondary_17, StagRval_508, MaybeSecFailLabel_48, Code_22, STATE_VARIABLE_CaseLabelMap_0_51, STATE_VARIABLE_CaseLabelMap_52, STATE_VARIABLE_CI_0_53, STATE_VARIABLE_CI_54);
            else
            {
              succeeded = (MaxSecondary_17 >= TrySwitchSize_39);
              if (succeeded)
              {
                MR_Word Codes_50;
                MR_Word Var_93;

                Var_93 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(StagGoalList_25, StagRval_508, MaybeSecFailLabel_48, Var_93, &Codes_50, STATE_VARIABLE_CaseLabelMap_0_51, STATE_VARIABLE_CaseLabelMap_52);
                *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), StagCode_507, Codes_50);
                *STATE_VARIABLE_CI_54 = STATE_VARIABLE_CI_0_53;
              }
              else
              {
                MR_Word Codes_115;

                ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(StagGoalList_25, StagRval_508, MaybeSecFailLabel_48, &Codes_115, STATE_VARIABLE_CaseLabelMap_0_51, STATE_VARIABLE_CaseLabelMap_52, STATE_VARIABLE_CI_0_53, STATE_VARIABLE_CI_54);
                *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), StagCode_507, Codes_115);
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Unsigned Mask_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), StagLoc_19, (MR_Integer) 1))));
          MR_Word StagWordRval_35;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word OrigStagRval_325;
          MR_Word Globals_327;
          MR_Integer DenseSwitchSize_328;
          MR_Integer BinarySwitchSize_329;
          MR_Integer TrySwitchSize_330;
          MR_Word MaybeSecFailLabel_339;
          MR_Word Var_342;

          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MainPtag_15));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(3), Var_62, 2) = ((MR_Box) (Rval_20));
            MR_hl_field(MR_mktag(3), Var_62, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[12])));
          }
          {
            StagWordRval_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), StagWordRval_35, 0) = ((MR_Box) (Var_62));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_70, 0) = ((MR_Box) (Mask_34));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Var_70));
          }
          {
            OrigStagRval_325 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), OrigStagRval_325, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), OrigStagRval_325, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[11])));
            MR_hl_field(MR_mktag(3), OrigStagRval_325, 2) = ((MR_Box) (StagWordRval_35));
            MR_hl_field(MR_mktag(3), OrigStagRval_325, 3) = ((MR_Box) (Var_69));
          }
          {
            Var_342 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_342, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[3]));
            MR_hl_field(MR_mktag(0), Var_342, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_tag_code_13_p_0_3));
            MR_hl_field(MR_mktag(0), Var_342, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_342, 3) = ((MR_Box) (OtherPtags_16));
            MR_hl_field(MR_mktag(0), Var_342, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_342, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) ">1 ptag with secondary tag");
          ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_53, &Globals_327);
          libs__globals__lookup_int_option_3_p_0(Globals_327, (MR_Integer) 463, &DenseSwitchSize_328);
          libs__globals__lookup_int_option_3_p_0(Globals_327, (MR_Integer) 470, &BinarySwitchSize_329);
          libs__globals__lookup_int_option_3_p_0(Globals_327, (MR_Integer) 469, &TrySwitchSize_330);
          if ((MaybeFailLabel_21 == (MR_Word) ((MR_Unsigned) 0U)))
            MaybeSecFailLabel_339 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Integer StagGoalCount_283;
            MR_Integer FullGoalCount_284;

            mercury__list__length_2_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_1[2]), StagGoalList_25, &StagGoalCount_283);
            FullGoalCount_284 = (MR_Integer) ((MR_Unsigned) MaxSecondary_17 + (MR_Unsigned) 1);
            succeeded = (FullGoalCount_284 == StagGoalCount_283);
            if (succeeded)
              MaybeSecFailLabel_339 = (MR_Word) ((MR_Unsigned) 0U);
            else
              MaybeSecFailLabel_339 = MaybeFailLabel_21;
          }
          succeeded = (MaxSecondary_17 >= DenseSwitchSize_328);
          if (succeeded)
          {
            MR_Word Targets_302;
            MR_Word Var_304;
            MR_Word Var_305;
            MR_Word StagCode_536;

            StagCode_536 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(StagGoalList_25, (MR_Integer) 0, MaxSecondary_17, MaybeSecFailLabel_339, &Targets_302);
            {
              Var_305 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_305, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), Var_305, 1) = ((MR_Box) (OrigStagRval_325));
              MR_hl_field(MR_mktag(3), Var_305, 2) = ((MR_Box) (Targets_302));
            }
            {
              Var_304 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_304, 0) = ((MR_Box) (Var_305));
              MR_hl_field(MR_mktag(0), Var_304, 1) = ((MR_Box) ((MR_String) "switch on secondary tag"));
            }
            *Code_22 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_304)));
            *STATE_VARIABLE_CaseLabelMap_52 = STATE_VARIABLE_CaseLabelMap_0_51;
            *STATE_VARIABLE_CI_54 = STATE_VARIABLE_CI_0_53;
          }
          else
          {
            MR_Word StagCode_551;
            MR_Word StagRval_552;
            MR_Integer NumRealRegs_261;
            MR_Word Var_264;

            succeeded = (MaxSecondary_17 >= (MR_Integer) 2);
            if (succeeded)
            {
              Var_264 = (MR_Integer) 333;
              libs__globals__lookup_int_option_3_p_0(Globals_327, Var_264, &NumRealRegs_261);
              succeeded = (NumRealRegs_261 == (MR_Integer) 0);
              if (!(succeeded))
              {
                MR_Integer StagRegNo_253;
                MR_Word Var_250;

                succeeded = ((MR_tag((MR_Word) StagReg_18)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_250 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), StagReg_18, (MR_Integer) 0))) & (MR_Integer) 1);
                  StagRegNo_253 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), StagReg_18, (MR_Integer) 1))));
                  succeeded = (Var_250 == (MR_Integer) 0);
                }
                if (succeeded)
                  succeeded = (StagRegNo_253 <= NumRealRegs_261);
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "improper reg in tag switch");
                    return;
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_538;
              MR_Word Var_539;

              {
                Var_539 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_539, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_539, 1) = ((MR_Box) (StagReg_18));
                MR_hl_field(MR_mktag(3), Var_539, 2) = ((MR_Box) (OrigStagRval_325));
              }
              {
                Var_538 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_538, 0) = ((MR_Box) (Var_539));
                MR_hl_field(MR_mktag(0), Var_538, 1) = ((MR_Box) ((MR_String) "compute remote sec tag bits to switch on"));
              }
              StagCode_551 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_538)));
              {
                StagRval_552 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StagRval_552, 0) = ((MR_Box) (StagReg_18));
              }
            }
            else
            {
              StagCode_551 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              StagRval_552 = OrigStagRval_325;
            }
            succeeded = (MaxSecondary_17 >= BinarySwitchSize_329);
            if (succeeded)
              ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(StagGoalList_25, (MR_Integer) 0, MaxSecondary_17, StagRval_552, MaybeSecFailLabel_339, Code_22, STATE_VARIABLE_CaseLabelMap_0_51, STATE_VARIABLE_CaseLabelMap_52, STATE_VARIABLE_CI_0_53, STATE_VARIABLE_CI_54);
            else
            {
              succeeded = (MaxSecondary_17 >= TrySwitchSize_330);
              if (succeeded)
              {
                MR_Word Codes_308;
                MR_Word Var_309;

                Var_309 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(StagGoalList_25, StagRval_552, MaybeSecFailLabel_339, Var_309, &Codes_308, STATE_VARIABLE_CaseLabelMap_0_51, STATE_VARIABLE_CaseLabelMap_52);
                *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), StagCode_551, Codes_308);
                *STATE_VARIABLE_CI_54 = STATE_VARIABLE_CI_0_53;
              }
              else
              {
                MR_Word Codes_311;

                ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(StagGoalList_25, StagRval_552, MaybeSecFailLabel_339, &Codes_311, STATE_VARIABLE_CaseLabelMap_0_51, STATE_VARIABLE_CaseLabelMap_52, STATE_VARIABLE_CI_0_53, STATE_VARIABLE_CI_54);
                *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), StagCode_551, Codes_311);
              }
            }
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__994__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__983__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(
  MR_Word StagGoals_11,
  MR_Integer MinStag_12,
  MR_Integer MaxStag_13,
  MR_Word StagRval_14,
  MR_Word MaybeFailLabel_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_49,
  MR_Word * STATE_VARIABLE_CaseLabelMap_50,
  MR_Word STATE_VARIABLE_CI_0_51,
  MR_Word * STATE_VARIABLE_CI_52)
{
  {
    MR_bool succeeded = (MinStag_12 == MaxStag_13);

    if (succeeded)
    {
      if ((StagGoals_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        if ((MaybeFailLabel_15 == (MR_Word) ((MR_Unsigned) 0U)))
          *Code_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        else
        {
          MR_Word FailLabel_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailLabel_15, (MR_Integer) 0))));
          MR_String StagStr_21;
          MR_String Comment_22;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;

          mercury__string__int_to_string_2_p_0(MinStag_12, &StagStr_21);
          Comment_22 = mercury__string__f_43_43_2_f_0((MR_String) "no code for ptag ", StagStr_21);
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (FailLabel_20));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (Var_65));
          }
          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (Var_64));
            MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (Comment_22));
          }
          *Code_16 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_63)));
        }
        *STATE_VARIABLE_CaseLabelMap_50 = STATE_VARIABLE_CaseLabelMap_0_49;
      }
      else
      {
        MR_Word Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StagGoals_11, (MR_Integer) 1))));
        MR_Word Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StagGoals_11, (MR_Integer) 0))));

        if ((Var_99 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Integer CurSecPrime_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_100, (MR_Integer) 0))));
          MR_Word CaseLabel_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_100, (MR_Integer) 1))));
          MR_Word Var_58;

          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[1]));
            MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1));
            MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (MinStag_12));
            MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) (CurSecPrime_23));
          }
          mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", (MR_String) "cur_secondary mismatch");
          ll_backend__switch_case__generate_case_code_or_jump_4_p_0(CaseLabel_24, Code_16, STATE_VARIABLE_CaseLabelMap_0_49, STATE_VARIABLE_CaseLabelMap_50);
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", (MR_String) "goallist not singleton or empty when binary search ends");
            return;
          }
      }
      *STATE_VARIABLE_CI_52 = STATE_VARIABLE_CI_0_51;
    }
    else
    {
      MR_Integer LowRangeEnd_28;
      MR_Integer HighRangeStart_29;
      MR_Word InLowGroup_30;
      MR_Word LowGoals_34;
      MR_Word HighGoals_35;
      MR_Word NewLabel_36;
      MR_String LowStartStr_37;
      MR_String LowEndStr_38;
      MR_String HighStartStr_39;
      MR_String HighEndStr_40;
      MR_String IfComment_41;
      MR_String LabelComment_42;
      MR_Word LowRangeEndConst_43;
      MR_Word TestRval_44;
      MR_Word IfCode_45;
      MR_Word LabelCode_46;
      MR_Word LowRangeCode_47;
      MR_Word HighRangeCode_48;
      MR_Integer Var_66 = (MR_Integer) ((MR_Unsigned) MinStag_12 + (MR_Unsigned) MaxStag_13);
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

      LowRangeEnd_28 = mercury__int__f_47_47_2_f_0(Var_66, (MR_Integer) 2);
      HighRangeStart_29 = (MR_Integer) ((MR_Unsigned) LowRangeEnd_28 + (MR_Unsigned) 1);
      {
        InLowGroup_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InLowGroup_30, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), InLowGroup_30, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2));
        MR_hl_field(MR_mktag(0), InLowGroup_30, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), InLowGroup_30, 3) = ((MR_Box) (LowRangeEnd_28));
      }
      mercury__list__filter_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_1[2]), InLowGroup_30, StagGoals_11, &LowGoals_34, &HighGoals_35);
      ll_backend__code_info__get_next_label_3_p_0(&NewLabel_36, STATE_VARIABLE_CI_0_51, &STATE_VARIABLE_CI_70_70);
      mercury__string__int_to_string_2_p_0(MinStag_12, &LowStartStr_37);
      mercury__string__int_to_string_2_p_0(LowRangeEnd_28, &LowEndStr_38);
      mercury__string__int_to_string_2_p_0(HighRangeStart_29, &HighStartStr_39);
      mercury__string__int_to_string_2_p_0(MaxStag_13, &HighEndStr_40);
      Var_73 = mercury__string__f_43_43_2_f_0((MR_String) " to ", LowEndStr_38);
      Var_72 = mercury__string__f_43_43_2_f_0(LowStartStr_37, Var_73);
      IfComment_41 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough for stags ", Var_72);
      Var_77 = mercury__string__f_43_43_2_f_0((MR_String) " to ", HighEndStr_40);
      Var_76 = mercury__string__f_43_43_2_f_0(HighStartStr_39, Var_77);
      LabelComment_42 = mercury__string__f_43_43_2_f_0((MR_String) "code for stags ", Var_76);
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (LowRangeEnd_28));
      }
      {
        LowRangeEndConst_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), LowRangeEndConst_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), LowRangeEndConst_43, 1) = ((MR_Box) (Var_79));
      }
      {
        TestRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TestRval_44, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), TestRval_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[10])));
        MR_hl_field(MR_mktag(3), TestRval_44, 2) = ((MR_Box) (StagRval_14));
        MR_hl_field(MR_mktag(3), TestRval_44, 3) = ((MR_Box) (LowRangeEndConst_43));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (NewLabel_36));
      }
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (TestRval_44));
        MR_hl_field(MR_mktag(3), Var_83, 2) = ((MR_Box) (Var_84));
      }
      {
        Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (IfComment_41));
      }
      IfCode_45 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_82)));
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (NewLabel_36));
      }
      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (LabelComment_42));
      }
      LabelCode_46 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_85)));
      ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(LowGoals_34, MinStag_12, LowRangeEnd_28, StagRval_14, MaybeFailLabel_15, &LowRangeCode_47, STATE_VARIABLE_CaseLabelMap_0_49, &STATE_VARIABLE_CaseLabelMap_87_87, STATE_VARIABLE_CI_70_70, &STATE_VARIABLE_CI_88_88);
      ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(HighGoals_35, HighRangeStart_29, MaxStag_13, StagRval_14, MaybeFailLabel_15, &HighRangeCode_48, STATE_VARIABLE_CaseLabelMap_87_87, STATE_VARIABLE_CaseLabelMap_50, STATE_VARIABLE_CI_88_88, STATE_VARIABLE_CI_52);
      Var_92 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_46, HighRangeCode_48);
      Var_91 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LowRangeCode_47, Var_92);
      *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), IfCode_45, Var_91);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__936__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(
  MR_Word CaseList_6,
  MR_Integer CurSecondary_7,
  MR_Integer MaxSecondary_8,
  MR_Word MaybeFailLabel_9,
  MR_Word * Targets_10)
{
  {
    MR_bool succeeded = (CurSecondary_7 > MaxSecondary_8);

    if (succeeded)
    {
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (CaseList_6));
        MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_15, (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_jump_table\'/5", (MR_String) "caselist not empty when reaching limiting secondary tag");
      *Targets_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Integer NextSecondary_11 = (MR_Integer) ((MR_Unsigned) CurSecondary_7 + (MR_Unsigned) 1);
      MR_Word CaseLabel_12;
      MR_Word CaseListTail_13;
      MR_Word Var_20;
      MR_Integer Var_24;

      succeeded = (CaseList_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CaseList_6, (MR_Integer) 0))));
        CaseListTail_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CaseList_6, (MR_Integer) 1))));
        Var_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
        CaseLabel_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1))));
        succeeded = (CurSecondary_7 == Var_24);
      }
      if (succeeded)
      {
        MR_Word OtherTargets_14;
        MR_Word Var_21;

        ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(CaseListTail_13, NextSecondary_11, MaxSecondary_8, MaybeFailLabel_9, &OtherTargets_14);
        {
          Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (CaseLabel_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Targets_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OtherTargets_14));
        }
      }
      else
      {
        MR_Word OtherTargets_22;

        ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(CaseList_6, NextSecondary_11, MaxSecondary_8, MaybeFailLabel_9, &OtherTargets_22);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Targets_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeFailLabel_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OtherTargets_22));
        }
      }
    }
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StagRval_2,
  MR_Word MaybeFailLabel_3,
  MR_Word PrevTestsCode0_4,
  MR_Word * Code_5,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_6,
  MR_Word * STATE_VARIABLE_CaseLabelMap_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_try_chain\'/7", (MR_String) "empty switch");
        return;
      }
    else
    {
      MR_Word Case_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Secondary_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Case_17, (MR_Integer) 0))));
      MR_Word CaseLabel_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_17, (MR_Integer) 1))));

      if ((Cases_18 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((MaybeFailLabel_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word ThisCode_31;

          ll_backend__switch_case__generate_case_code_or_jump_4_p_0(CaseLabel_25, &ThisCode_31, STATE_VARIABLE_CaseLabelMap_0_6, STATE_VARIABLE_CaseLabelMap_7);
          *Code_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrevTestsCode0_4, ThisCode_31);
        }
        else
        {
          MR_Word FailLabel_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailLabel_3, (MR_Integer) 0))));
          MR_Word FailCode_30;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word PrevTestsCode1_40;
          MR_Word CaseInfo0_51;
          MR_String Comment_52;
          MR_Word TestCode_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_String Var_64;
          MR_Box conv0_CaseInfo0_51;

          mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), STATE_VARIABLE_CaseLabelMap_0_6, ((MR_Box) (CaseLabel_25)), &conv0_CaseInfo0_51);
          CaseInfo0_51 = ((MR_Word) (conv0_CaseInfo0_51));
          Comment_52 = ((MR_String) ((MR_hl_field(MR_mktag(0), CaseInfo0_51, (MR_Integer) 0))));
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Secondary_24));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[9])));
            MR_hl_field(MR_mktag(3), Var_58, 2) = ((MR_Box) (StagRval_2));
            MR_hl_field(MR_mktag(3), Var_58, 3) = ((MR_Box) (Var_61));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (CaseLabel_25));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(3), Var_57, 2) = ((MR_Box) (Var_63));
          }
          Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "test sec tag only for ", Comment_52);
          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (Var_64));
          }
          TestCode_55 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_56)));
          PrevTestsCode1_40 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrevTestsCode0_4, TestCode_55);
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (FailLabel_29));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
          }
          {
            Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) ((MR_String) "secondary tag with no code to handle it"));
          }
          FailCode_30 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_35)));
          *Code_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrevTestsCode1_40, FailCode_30);
          *STATE_VARIABLE_CaseLabelMap_7 = STATE_VARIABLE_CaseLabelMap_0_6;
        }
      else
      {
        MR_Word PrevTestsCode1_28;
        MR_Word CaseInfo0_75;
        MR_String Comment_76;
        MR_Word TestCode_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_String Var_88;
        MR_Box conv1_CaseInfo0_75;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_PrevTestsCode0_4;

        mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), STATE_VARIABLE_CaseLabelMap_0_6, ((MR_Box) (CaseLabel_25)), &conv1_CaseInfo0_75);
        CaseInfo0_75 = ((MR_Word) (conv1_CaseInfo0_75));
        Comment_76 = ((MR_String) ((MR_hl_field(MR_mktag(0), CaseInfo0_75, (MR_Integer) 0))));
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Secondary_24));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (Var_86));
        }
        {
          Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[9])));
          MR_hl_field(MR_mktag(3), Var_82, 2) = ((MR_Box) (StagRval_2));
          MR_hl_field(MR_mktag(3), Var_82, 3) = ((MR_Box) (Var_85));
        }
        {
          Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (CaseLabel_25));
        }
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (Var_82));
          MR_hl_field(MR_mktag(3), Var_81, 2) = ((MR_Box) (Var_87));
        }
        Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "test sec tag only for ", Comment_76);
        {
          Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (Var_88));
        }
        TestCode_79 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_80)));
        PrevTestsCode1_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrevTestsCode0_4, TestCode_79);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Cases_18;
        next_value_of_PrevTestsCode0_4 = PrevTestsCode1_28;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        PrevTestsCode0_4 = next_value_of_PrevTestsCode0_4;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StagRval_2,
  MR_Word MaybeFailLabel_3,
  MR_Word * Code_4,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_5,
  MR_Word * STATE_VARIABLE_CaseLabelMap_6,
  MR_Word STATE_VARIABLE_CI_0_7,
  MR_Word * STATE_VARIABLE_CI_8)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_try_me_else_chain\'/8", (MR_String) "empty switch");
      return;
    }
  else
  {
    MR_Word Case_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Secondary_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Case_20, (MR_Integer) 0))));
    MR_Word CaseLabel_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_20, (MR_Integer) 1))));

    if ((Cases_21 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MaybeFailLabel_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ll_backend__switch_case__generate_case_code_or_jump_4_p_0(CaseLabel_28, Code_4, STATE_VARIABLE_CaseLabelMap_0_5, STATE_VARIABLE_CaseLabelMap_6);
        *STATE_VARIABLE_CI_8 = STATE_VARIABLE_CI_0_7;
      }
      else
      {
        MR_Word FailLabel_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailLabel_3, (MR_Integer) 0))));
        MR_Word FailCode_34;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word ThisCode_50;
        MR_Word CaseCode_65;
        MR_Word ElseLabel_66;
        MR_Word TestCode_67;
        MR_Word ElseLabelCode_68;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_83;

        ll_backend__switch_case__generate_case_code_or_jump_4_p_0(CaseLabel_28, &CaseCode_65, STATE_VARIABLE_CaseLabelMap_0_5, STATE_VARIABLE_CaseLabelMap_6);
        ll_backend__code_info__get_next_label_3_p_0(&ElseLabel_66, STATE_VARIABLE_CI_0_7, STATE_VARIABLE_CI_8);
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Secondary_27));
        }
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (Var_77));
        }
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[8])));
          MR_hl_field(MR_mktag(3), Var_73, 2) = ((MR_Box) (StagRval_2));
          MR_hl_field(MR_mktag(3), Var_73, 3) = ((MR_Box) (Var_76));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (ElseLabel_66));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(3), Var_72, 2) = ((MR_Box) (Var_78));
        }
        {
          Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) ((MR_String) "test sec tag only"));
        }
        TestCode_67 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_71)));
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (ElseLabel_66));
        }
        {
          Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) ((MR_String) "handle next secondary tag"));
        }
        ElseLabelCode_68 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_80)));
        Var_83 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CaseCode_65, ElseLabelCode_68);
        ThisCode_50 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_67, Var_83);
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (FailLabel_33));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) ((MR_String) "secondary tag does not match"));
        }
        FailCode_34 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_42)));
        *Code_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisCode_50, FailCode_34);
      }
    else
    {
      MR_Word ThisCode_31;
      MR_Word OtherCode_32;
      MR_Word STATE_VARIABLE_CaseLabelMap_46_46;
      MR_Word STATE_VARIABLE_CI_47_47;

      ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(CaseLabel_28, StagRval_2, Secondary_27, &ThisCode_31, STATE_VARIABLE_CaseLabelMap_0_5, &STATE_VARIABLE_CaseLabelMap_46_46, STATE_VARIABLE_CI_0_7, &STATE_VARIABLE_CI_47_47);
      ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(Cases_21, StagRval_2, MaybeFailLabel_3, &OtherCode_32, STATE_VARIABLE_CaseLabelMap_46_46, STATE_VARIABLE_CaseLabelMap_6, STATE_VARIABLE_CI_47_47, STATE_VARIABLE_CI_8);
      *Code_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisCode_31, OtherCode_32);
    }
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(
  MR_Word CaseLabel_9,
  MR_Word StagRval_10,
  MR_Integer Secondary_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_19,
  MR_Word * STATE_VARIABLE_CaseLabelMap_20,
  MR_Word STATE_VARIABLE_CI_0_21,
  MR_Word * STATE_VARIABLE_CI_22)
{
  {
    MR_Word CaseCode_15;
    MR_Word ElseLabel_16;
    MR_Word TestCode_17;
    MR_Word ElseLabelCode_18;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_37;

    ll_backend__switch_case__generate_case_code_or_jump_4_p_0(CaseLabel_9, &CaseCode_15, STATE_VARIABLE_CaseLabelMap_0_19, STATE_VARIABLE_CaseLabelMap_20);
    ll_backend__code_info__get_next_label_3_p_0(&ElseLabel_16, STATE_VARIABLE_CI_0_21, STATE_VARIABLE_CI_22);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Secondary_11));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[8])));
      MR_hl_field(MR_mktag(3), Var_27, 2) = ((MR_Box) (StagRval_10));
      MR_hl_field(MR_mktag(3), Var_27, 3) = ((MR_Box) (Var_30));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (ElseLabel_16));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(3), Var_26, 2) = ((MR_Box) (Var_32));
    }
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) ((MR_String) "test sec tag only"));
    }
    TestCode_17 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_25)));
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (ElseLabel_16));
    }
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) ((MR_String) "handle next secondary tag"));
    }
    ElseLabelCode_18 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_34)));
    Var_37 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CaseCode_15, ElseLabelCode_18);
    *Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_17, Var_37);
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PtagRval_2,
  MR_Word HeadVar__3_3,
  MR_Word * TestRval_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *TestRval_4 = HeadVar__3_3;
    else
    {
      MR_Word OtherPtag_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word OtherPtags_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      uint8_t OtherPtagUint8_12 = (uint8_t) (OtherPtag_7);
      MR_Word ThisTestRval_13;
      MR_Word TestRval1_14;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Integer Var_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__3_3;

      Var_19 = mercury__uint8__cast_to_int_1_f_0(OtherPtagUint8_12);
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Var_18));
      }
      {
        ThisTestRval_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ThisTestRval_13, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), ThisTestRval_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[8])));
        MR_hl_field(MR_mktag(3), ThisTestRval_13, 2) = ((MR_Box) (PtagRval_2));
        MR_hl_field(MR_mktag(3), ThisTestRval_13, 3) = ((MR_Box) (Var_17));
      }
      {
        TestRval1_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TestRval1_14, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), TestRval1_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), TestRval1_14, 2) = ((MR_Box) (HeadVar__3_3));
        MR_hl_field(MR_mktag(3), TestRval1_14, 3) = ((MR_Box) (ThisTestRval_13));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = OtherPtags_8;
      next_value_of_HeadVar__3_3 = TestRval1_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
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
  {
    MR_bool succeeded;

    succeeded = ll_backend__tag_switch____Unify____switch_method_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__tag_switch____Compare____switch_method_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
