/*
** Automatically generated from `tag_switch.m'
** by the Mercury compiler,
** version rotd-2018-05-24
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


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
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
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct2 ll_backend__tag_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

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
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__976__1_2_p_0(
  MR_Integer LowRangeEnd_28,
  MR_Word LambdaHeadVar__1_69);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__965__1_2_p_0(
  MR_Integer MinStag_12,
  MR_Integer CurSecPrime_23);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__918__1_2_p_0(
  MR_Word CaseList_6,
  MR_Word HeadVar__2_18);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__702__1_2_p_0(
  MR_Word OtherPtags_16,
  MR_Word HeadVar__2_55);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__632__1_2_p_0(
  MR_Integer LowRangeEnd_39,
  MR_Word LambdaHeadVar__1_85);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__619__1_2_p_0(
  MR_Word StagLoc_31,
  MR_Word StagLocPrime_34);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__614__1_2_p_0(
  MR_Integer MinPtag_15,
  MR_Integer CurPrimaryPrime_29);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__557__1_2_p_0(
  MR_Word StagLoc_29,
  MR_Word StagLocPrime_32);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__544__1_2_p_0(
  MR_Word PtagGroups_14,
  MR_Word HeadVar__2_47);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__446__1_2_p_0(
  MR_Word StagLoc_45,
  MR_Word StagLocPrime_48);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__355__1_2_p_0(
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
  MR_Integer MinPtag_15,
  MR_Integer MaxPtag_16,
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
  MR_Integer CurPrimary_15,
  MR_Integer MaxPrimary_16,
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
  MR_Integer MainPtag_6,
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
  MR_Integer MainPtag_19,
  MR_Word OtherPtags_20,
  MR_Word PtagCase_21,
  MR_Integer MaxSecondary_22,
  MR_Word VarRval_23,
  MR_Word MaybeFailLabel_24,
  MR_Word PrevTestsCode0_25,
  MR_Word * PrevTestsCode_26,
  MR_Word PrevCasesCode0_27,
  MR_Word * PrevCasesCode_28,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_40,
  MR_Word * STATE_VARIABLE_CaseLabelMap_41,
  MR_Word STATE_VARIABLE_CI_0_42,
  MR_Word * STATE_VARIABLE_CI_43);

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
  MR_Integer MainPtag_16,
  MR_Word OtherPtags_17,
  MR_Word PtagCase_18,
  MR_Integer MaxSecondary_19,
  MR_Word VarRval_20,
  MR_Word MaybeFailLabel_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_33,
  MR_Word * STATE_VARIABLE_CaseLabelMap_34,
  MR_Word STATE_VARIABLE_CI_0_35,
  MR_Word * STATE_VARIABLE_CI_36);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0(
  MR_Word StagGoalMap_14,
  MR_Integer MainPtag_15,
  MR_Word OtherPtags_16,
  MR_Integer MaxSecondary_17,
  MR_Word StagReg_18,
  MR_Word StagLoc_19,
  MR_Word Rval_20,
  MR_Word MaybeFailLabel_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_48,
  MR_Word * STATE_VARIABLE_CaseLabelMap_49,
  MR_Word STATE_VARIABLE_CI_0_50,
  MR_Word * STATE_VARIABLE_CI_51);

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

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_2[12][2];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_3[8][5];

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
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[5])),
    ((MR_Box) (ll_backend__tag_switch__make_ptag_comment_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_6[0])),
    ((MR_Box) (ll_backend__tag_switch__generate_tag_switch_14_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_2[12][2] = {
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_1[2]))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__tag_switch_scalar_common_4[0])))
  },
};

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_3[8][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__tag_switch__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0)),
    ((MR_Box) (&ll_backend__tag_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__tag_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
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
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_1 = {
  (MR_String) "try_chain",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_2 = {
  (MR_String) "jump_table",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_3 = {
  (MR_String) "binary_search",
  (MR_Integer) 3
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__tag_switch____Unify____switch_method_0_0_10001)),
  ((MR_Box) (ll_backend__tag_switch____Compare____switch_method_0_0_10001)),
  (MR_String) "ll_backend.tag_switch",
  (MR_String) "switch_method",
  {     ll_backend__tag_switch__ll_backend__tag_switch__enum_name_ordered_switch_method_0 },
  {     ll_backend__tag_switch__ll_backend__tag_switch__enum_value_ordered_switch_method_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_switch_method_0
};

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__976__1_2_p_0(
  MR_Integer LowRangeEnd_28,
  MR_Word LambdaHeadVar__1_69)
{
  {
    MR_bool succeeded;
    MR_Integer Stag_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_69, (MR_Integer) 0))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_69, (MR_Integer) 1))));

    succeeded = (Stag_32 <= LowRangeEnd_28);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__965__1_2_p_0(
  MR_Integer MinStag_12,
  MR_Integer CurSecPrime_23)
{
  {
    MR_bool succeeded = (MinStag_12 == CurSecPrime_23);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__918__1_2_p_0(
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
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__702__1_2_p_0(
  MR_Word OtherPtags_16,
  MR_Word HeadVar__2_55)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[6]), ((MR_Box) (OtherPtags_16)), ((MR_Box) (HeadVar__2_55)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__632__1_2_p_0(
  MR_Integer LowRangeEnd_39,
  MR_Word LambdaHeadVar__1_85)
{
  {
    MR_bool succeeded;
    MR_Integer Ptag_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_85, (MR_Integer) 0))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_85, (MR_Integer) 1))));

    succeeded = (Ptag_43 <= LowRangeEnd_39);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__619__1_2_p_0(
  MR_Word StagLoc_31,
  MR_Word StagLocPrime_34)
{
  {
    MR_bool succeeded = (StagLoc_31 == StagLocPrime_34);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__614__1_2_p_0(
  MR_Integer MinPtag_15,
  MR_Integer CurPrimaryPrime_29)
{
  {
    MR_bool succeeded = (MinPtag_15 == CurPrimaryPrime_29);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__557__1_2_p_0(
  MR_Word StagLoc_29,
  MR_Word StagLocPrime_32)
{
  {
    MR_bool succeeded = (StagLoc_29 == StagLocPrime_32);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__544__1_2_p_0(
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
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__446__1_2_p_0(
  MR_Word StagLoc_45,
  MR_Word StagLocPrime_48)
{
  {
    MR_bool succeeded = (StagLoc_45 == StagLocPrime_48);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__355__1_2_p_0(
  MR_Word StagLoc_39,
  MR_Word StagLocPrime_42)
{
  {
    MR_bool succeeded = (StagLoc_39 == StagLocPrime_42);

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
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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
    MR_Integer MaxPrimary_32;
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
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
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
      Params_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Params_34, 0) = ((MR_Box) (VarName_18));
      MR_hl_field(MR_mktag(0), Params_34, 1) = ((MR_Box) (SwitchGoalInfo_21));
      MR_hl_field(MR_mktag(0), Params_34, 2) = ((MR_Box) (CodeModel_19));
      MR_hl_field(MR_mktag(0), Params_34, 3) = ((MR_Box) (BranchStart_30));
      MR_hl_field(MR_mktag(0), Params_34, 4) = ((MR_Box) (EndLabel_22));
    }
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (ll_backend__tag_switch__generate_tag_switch_14_p_0_1));
      MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Params_34));
    }
    Var_76 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0));
    backend_libs__switch_util__group_cases_by_ptag_10_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[0]), (MR_Word) (&ll_backend__tag_switch_scalar_common_2[0]), (MR_Word) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0), TaggedCases_15, Var_75, ((MR_Box) (Var_76)), &conv6_CaseLabelMap0_35, ((MR_Box) (STATE_VARIABLE_MaybeEnd_0_64)), &conv5_STATE_VARIABLE_MaybeEnd_65, ((MR_Box) (STATE_VARIABLE_CI_0_66)), &conv4_STATE_VARIABLE_CI_78_78, &Var_36, &PtagCaseMap_37);
    CaseLabelMap0_35 = ((MR_Word) (conv6_CaseLabelMap0_35));
    *STATE_VARIABLE_MaybeEnd_65 = ((MR_Word) (conv5_STATE_VARIABLE_MaybeEnd_65));
    STATE_VARIABLE_CI_78_78 = ((MR_Word) (conv4_STATE_VARIABLE_CI_78_78));
    mercury__map__count_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_2[1]), PtagCaseMap_37, &PtagsUsed_38);
    ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_78_78, &Globals_39);
    libs__globals__lookup_int_option_3_p_0(Globals_39, (MR_Integer) 448, &DenseSwitchSize_40);
    libs__globals__lookup_int_option_3_p_0(Globals_39, (MR_Integer) 454, &TrySwitchSize_41);
    libs__globals__lookup_int_option_3_p_0(Globals_39, (MR_Integer) 455, &BinarySwitchSize_42);
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (EndLabel_22));
    }
    {
      Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
            MaybeFailLabel_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeFailLabel_49, 0) = ((MR_Box) (FailLabel_51));
          }
          {
            Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_98, 1) = ((MR_Box) (FailLabel_51));
          }
          {
            Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
          MaybeFailLabel_49 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
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
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word PtagCaseList_122;

      PtagCode_46 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      {
        PtagRval_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), PtagRval_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), PtagRval_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(3), PtagRval_47, 2) = ((MR_Box) (VarRval_16));
      }
      backend_libs__switch_util__order_ptags_by_value_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Integer) 0, MaxPrimary_32, PtagCaseMap_37, &PtagCaseList_122);
      ll_backend__tag_switch__generate_primary_jump_table_13_p_0(PtagCaseList_122, (MR_Integer) 0, MaxPrimary_32, StagReg_29, VarRval_16, MaybeFailLabel_49, PtagCountMap_33, &Targets_57, &TableCode_58, CaseLabelMap0_35, &CaseLabelMap_56, STATE_VARIABLE_CI_101_101, STATE_VARIABLE_CI_67);
      {
        Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (PtagRval_47));
        MR_hl_field(MR_mktag(3), Var_112, 2) = ((MR_Box) (Targets_57));
      }
      {
        Var_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (Var_112));
        MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) ((MR_String) "switch on primary tag"));
      }
      SwitchCode_59 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_111)));
      CasesCode_55 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SwitchCode_59, TableCode_58);
    }
    else
    {
      MR_Word PtagRval_166;
      MR_Integer NumRealRegs_44;
      MR_Word Var_83;

      succeeded = (PtagsUsed_38 >= (MR_Integer) 2);
      if (succeeded)
      {
        Var_83 = (MR_Integer) 319;
        libs__globals__lookup_int_option_3_p_0(Globals_39, Var_83, &NumRealRegs_44);
        succeeded = (NumRealRegs_44 == (MR_Integer) 0);
        if (!(succeeded))
        {
          MR_Integer PtagRegNo_45;
          MR_Word Var_84;

          succeeded = ((MR_tag((MR_Word) PtagReg_28)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PtagReg_28, (MR_Integer) 0))));
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
        MR_Word Var_149;
        MR_Word Var_150;
        MR_Word Var_151;

        {
          Var_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(3), Var_151, 2) = ((MR_Box) (VarRval_16));
        }
        {
          Var_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_150, 1) = ((MR_Box) (PtagReg_28));
          MR_hl_field(MR_mktag(3), Var_150, 2) = ((MR_Box) (Var_151));
        }
        {
          Var_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_149, 0) = ((MR_Box) (Var_150));
          MR_hl_field(MR_mktag(0), Var_149, 1) = ((MR_Box) ((MR_String) "compute tag to switch on"));
        }
        PtagCode_46 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_149)));
        {
          PtagRval_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PtagRval_166, 0) = ((MR_Box) (PtagReg_28));
        }
      }
      else
      {
        PtagCode_46 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        {
          PtagRval_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), PtagRval_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), PtagRval_166, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(3), PtagRval_166, 2) = ((MR_Box) (VarRval_16));
        }
      }
      succeeded = (PtagsUsed_38 >= BinarySwitchSize_42);
      if (succeeded)
      {
        MR_Word PtagCaseList_54;

        backend_libs__switch_util__order_ptags_by_value_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Integer) 0, MaxPrimary_32, PtagCaseMap_37, &PtagCaseList_54);
        ll_backend__tag_switch__generate_primary_binary_search_13_p_0(PtagCaseList_54, (MR_Integer) 0, MaxPrimary_32, PtagRval_166, StagReg_29, VarRval_16, MaybeFailLabel_49, PtagCountMap_33, &CasesCode_55, CaseLabelMap0_35, &CaseLabelMap_56, STATE_VARIABLE_CI_101_101, STATE_VARIABLE_CI_67);
      }
      else
      {
        succeeded = (PtagsUsed_38 >= TrySwitchSize_41);
        if (succeeded)
        {
          MR_Word PtagCaseList0_60;
          MR_Word Var_105;
          MR_Word Var_106;
          MR_Word PtagCaseList_123;
          MR_Word MostFreqCase_61;
          MR_Word OtherCases_62;

          backend_libs__switch_util__order_ptags_by_count_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), PtagCountMap_33, PtagCaseMap_37, &PtagCaseList0_60);
          succeeded = (CanFail_20 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) PtagCaseList0_60)) == (MR_mktag((MR_Integer) 1)));
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
              Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (MostFreqCase_61));
              MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            PtagCaseList_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[2]), OtherCases_62, Var_103);
          }
          else
            PtagCaseList_123 = PtagCaseList0_60;
          Var_105 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          Var_106 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          ll_backend__tag_switch__generate_primary_try_chain_13_p_0(PtagCaseList_123, PtagRval_166, StagReg_29, VarRval_16, MaybeFailLabel_49, PtagCountMap_33, Var_105, Var_106, &CasesCode_55, CaseLabelMap0_35, &CaseLabelMap_56, STATE_VARIABLE_CI_101_101, STATE_VARIABLE_CI_67);
        }
        else
        {
          MR_Word PtagCaseList_124;

          backend_libs__switch_util__order_ptags_by_count_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), PtagCountMap_33, PtagCaseMap_37, &PtagCaseList_124);
          ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(PtagCaseList_124, PtagRval_166, StagReg_29, VarRval_16, MaybeFailLabel_49, PtagCountMap_33, &CasesCode_55, CaseLabelMap0_35, &CaseLabelMap_56, STATE_VARIABLE_CI_101_101, STATE_VARIABLE_CI_67);
        }
      }
    }
    Var_118 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    mercury__map__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_2[3]), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[5]), CaseLabelMap_56, ((MR_Box) (Var_118)), &conv8_RemainingCasesCode_63);
    RemainingCasesCode_63 = ((MR_Word) (conv8_RemainingCasesCode_63));
    Var_121 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_50, EndCode_48);
    Var_120 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RemainingCasesCode_63, Var_121);
    Var_119 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CasesCode_55, Var_120);
    *Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PtagCode_46, Var_119);
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

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__632__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__619__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__614__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0(
  MR_Word PtagGroups_14,
  MR_Integer MinPtag_15,
  MR_Integer MaxPtag_16,
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
      if ((PtagGroups_14 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        if ((MaybeFailLabel_20 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        }
        else
        {
          MR_Word FailLabel_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailLabel_20, (MR_Integer) 0))));
          MR_String PtagStr_27;
          MR_String Comment_28;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;

          mercury__string__int_to_string_2_p_0(MinPtag_15, &PtagStr_27);
          Comment_28 = mercury__string__f_43_43_2_f_0((MR_String) "no code for ptag ", PtagStr_27);
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (FailLabel_26));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (Var_81));
          }
          {
            Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (Comment_28));
          }
          *Code_22 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_79)));
        }
        *STATE_VARIABLE_CaseLabelMap_61 = STATE_VARIABLE_CaseLabelMap_0_60;
        *STATE_VARIABLE_CI_63 = STATE_VARIABLE_CI_0_62;
      }
      else
      {
        MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PtagGroups_14, (MR_Integer) 1))));
        MR_Word Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PtagGroups_14, (MR_Integer) 0))));

        if ((Var_118 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Integer CurPrimaryPrime_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_119, (MR_Integer) 0))));
          MR_Word PrimaryInfo_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_119, (MR_Integer) 1))));
          MR_Word StagLoc_31;
          MR_Word StagGoalMap_32;
          MR_Word CountInfo_33;
          MR_Word StagLocPrime_34;
          MR_Integer MaxSecondary_35;
          MR_Word Var_69;
          MR_Word Var_72;
          MR_Box conv0_CountInfo_33;

          {
            Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[1]));
            MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1));
            MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (MinPtag_15));
            MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (CurPrimaryPrime_29));
          }
          mercury__require__expect_3_p_0(Var_69, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "cur_primary mismatch");
          StagLoc_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PrimaryInfo_30, (MR_Integer) 0))));
          StagGoalMap_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PrimaryInfo_30, (MR_Integer) 1))));
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_1[1]), PtagCountMap_21, MinPtag_15, &conv0_CountInfo_33);
          CountInfo_33 = ((MR_Word) (conv0_CountInfo_33));
          StagLocPrime_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_33, (MR_Integer) 0))));
          MaxSecondary_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CountInfo_33, (MR_Integer) 1))));
          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[4]));
            MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2));
            MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (StagLoc_31));
            MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) (StagLocPrime_34));
          }
          mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "secondary tag locations differ");
          ll_backend__tag_switch__generate_primary_tag_code_13_p_0(StagGoalMap_32, MinPtag_15, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), MaxSecondary_35, StagReg_18, StagLoc_31, VarRval_19, MaybeFailLabel_20, Code_22, STATE_VARIABLE_CaseLabelMap_0_60, STATE_VARIABLE_CaseLabelMap_61, STATE_VARIABLE_CI_0_62, STATE_VARIABLE_CI_63);
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "caselist not singleton or empty when binary search ends");
            return;
          }
        }
      }
    else
    {
      MR_Integer LowRangeEnd_39;
      MR_Integer HighRangeStart_40;
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
      MR_Integer Var_82 = (MR_Integer) ((MR_Unsigned) MinPtag_15 + (MR_Unsigned) MaxPtag_16);
      MR_Word STATE_VARIABLE_CI_86_86;
      MR_String Var_88;
      MR_String Var_89;
      MR_String Var_92;
      MR_String Var_93;
      MR_Word Var_95;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word STATE_VARIABLE_CaseLabelMap_103_103;
      MR_Word STATE_VARIABLE_CI_104_104;
      MR_Word Var_107;
      MR_Word Var_108;

      LowRangeEnd_39 = mercury__int__f_47_47_2_f_0(Var_82, (MR_Integer) 2);
      HighRangeStart_40 = (MR_Integer) ((MR_Unsigned) LowRangeEnd_39 + (MR_Unsigned) (MR_Integer) 1);
      {
        InLowGroup_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InLowGroup_41, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[7]));
        MR_hl_field(MR_mktag(0), InLowGroup_41, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_3));
        MR_hl_field(MR_mktag(0), InLowGroup_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), InLowGroup_41, 3) = ((MR_Box) (LowRangeEnd_39));
      }
      mercury__list__filter_4_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_2[4]), InLowGroup_41, PtagGroups_14, &LowGroups_45, &HighGroups_46);
      ll_backend__code_info__get_next_label_3_p_0(&NewLabel_47, STATE_VARIABLE_CI_0_62, &STATE_VARIABLE_CI_86_86);
      mercury__string__int_to_string_2_p_0(MinPtag_15, &LowStartStr_48);
      mercury__string__int_to_string_2_p_0(LowRangeEnd_39, &LowEndStr_49);
      mercury__string__int_to_string_2_p_0(HighRangeStart_40, &HighStartStr_50);
      mercury__string__int_to_string_2_p_0(MaxPtag_16, &HighEndStr_51);
      Var_89 = mercury__string__f_43_43_2_f_0((MR_String) " to ", LowEndStr_49);
      Var_88 = mercury__string__f_43_43_2_f_0(LowStartStr_48, Var_89);
      IfComment_52 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough for ptags ", Var_88);
      Var_93 = mercury__string__f_43_43_2_f_0((MR_String) " to ", HighEndStr_51);
      Var_92 = mercury__string__f_43_43_2_f_0(HighStartStr_50, Var_93);
      LabelComment_53 = mercury__string__f_43_43_2_f_0((MR_String) "code for ptags ", Var_92);
      {
        Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (LowRangeEnd_39));
      }
      {
        LowRangeEndConst_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), LowRangeEndConst_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), LowRangeEndConst_54, 1) = ((MR_Box) (Var_95));
      }
      {
        TestRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TestRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), TestRval_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[10])));
        MR_hl_field(MR_mktag(3), TestRval_55, 2) = ((MR_Box) (PtagRval_17));
        MR_hl_field(MR_mktag(3), TestRval_55, 3) = ((MR_Box) (LowRangeEndConst_54));
      }
      {
        Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (NewLabel_47));
      }
      {
        Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (TestRval_55));
        MR_hl_field(MR_mktag(3), Var_99, 2) = ((MR_Box) (Var_100));
      }
      {
        Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (Var_99));
        MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (IfComment_52));
      }
      IfCode_56 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_98)));
      {
        Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_102, 1) = ((MR_Box) (NewLabel_47));
      }
      {
        Var_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (LabelComment_53));
      }
      LabelCode_57 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_101)));
      ll_backend__tag_switch__generate_primary_binary_search_13_p_0(LowGroups_45, MinPtag_15, LowRangeEnd_39, PtagRval_17, StagReg_18, VarRval_19, MaybeFailLabel_20, PtagCountMap_21, &LowRangeCode_58, STATE_VARIABLE_CaseLabelMap_0_60, &STATE_VARIABLE_CaseLabelMap_103_103, STATE_VARIABLE_CI_86_86, &STATE_VARIABLE_CI_104_104);
      ll_backend__tag_switch__generate_primary_binary_search_13_p_0(HighGroups_46, HighRangeStart_40, MaxPtag_16, PtagRval_17, StagReg_18, VarRval_19, MaybeFailLabel_20, PtagCountMap_21, &HighRangeCode_59, STATE_VARIABLE_CaseLabelMap_103_103, STATE_VARIABLE_CaseLabelMap_61, STATE_VARIABLE_CI_104_104, STATE_VARIABLE_CI_63);
      Var_108 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_57, HighRangeCode_59);
      Var_107 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LowRangeCode_58, Var_108);
      *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), IfCode_56, Var_107);
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

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__557__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__544__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0(
  MR_Word PtagGroups_14,
  MR_Integer CurPrimary_15,
  MR_Integer MaxPrimary_16,
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
        Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[6]));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1));
        MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (PtagGroups_14));
        MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__require__expect_3_p_0(Var_44, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_jump_table\'/13", (MR_String) "PtagGroups != [] when Cur > Max");
      *Targets_21 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CI_43 = STATE_VARIABLE_CI_0_42;
      *STATE_VARIABLE_CaseLabelMap_41 = STATE_VARIABLE_CaseLabelMap_0_40;
    }
    else
    {
      MR_Integer NextPrimary_25 = (MR_Integer) ((MR_Unsigned) CurPrimary_15 + (MR_Unsigned) (MR_Integer) 1);
      MR_Word PtagGroupsTail_27;
      MR_Word PrimaryInfo_28;
      MR_Word PtagCaseEntry_26;
      MR_Integer Var_74;

      succeeded = ((MR_tag((MR_Word) PtagGroups_14)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        PtagCaseEntry_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PtagGroups_14, (MR_Integer) 0))));
        PtagGroupsTail_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PtagGroups_14, (MR_Integer) 1))));
        Var_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PtagCaseEntry_26, (MR_Integer) 0))));
        PrimaryInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCaseEntry_26, (MR_Integer) 1))));
        succeeded = (CurPrimary_15 == Var_74);
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
        MR_Word Var_49;
        MR_Word STATE_VARIABLE_CI_52_52;
        MR_String Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word STATE_VARIABLE_CaseLabelMap_58_58;
        MR_Word STATE_VARIABLE_CI_59_59;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Box conv0_CountInfo_31;

        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_1[1]), PtagCountMap_20, CurPrimary_15, &conv0_CountInfo_31);
        CountInfo_31 = ((MR_Word) (conv0_CountInfo_31));
        StagLocPrime_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_31, (MR_Integer) 0))));
        MaxSecondary_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CountInfo_31, (MR_Integer) 1))));
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[4]));
          MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_jump_table_13_p_0_2));
          MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (StagLoc_29));
          MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (StagLocPrime_32));
        }
        mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_jump_table\'/13", (MR_String) "secondary tag locations differ");
        ll_backend__code_info__get_next_label_3_p_0(&NewLabel_34, STATE_VARIABLE_CI_0_42, &STATE_VARIABLE_CI_52_52);
        Var_54 = mercury__string__int_to_string_1_f_0(CurPrimary_15);
        Comment_35 = mercury__string__f_43_43_2_f_0((MR_String) "start of a case in primary tag switch: ptag ", Var_54);
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (NewLabel_34));
        }
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (Comment_35));
        }
        LabelCode_36 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_55)));
        ll_backend__tag_switch__generate_primary_tag_code_13_p_0(StagGoalMap_30, CurPrimary_15, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), MaxSecondary_33, StagReg_17, StagLoc_29, VarRval_18, MaybeFailLabel_19, &ThisTagCode_37, STATE_VARIABLE_CaseLabelMap_0_40, &STATE_VARIABLE_CaseLabelMap_58_58, STATE_VARIABLE_CI_52_52, &STATE_VARIABLE_CI_59_59);
        ll_backend__tag_switch__generate_primary_jump_table_13_p_0(PtagGroupsTail_27, NextPrimary_25, MaxPrimary_16, StagReg_17, VarRval_18, MaybeFailLabel_19, PtagCountMap_20, &TailTargets_38, &TailCode_39, STATE_VARIABLE_CaseLabelMap_58_58, STATE_VARIABLE_CaseLabelMap_41, STATE_VARIABLE_CI_59_59, STATE_VARIABLE_CI_43);
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (NewLabel_34));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Targets_21 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTargets_38));
        }
        Var_63 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisTagCode_37, TailCode_39);
        *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_36, Var_63);
      }
      else
      {
        MR_Word TailTargets_66;

        ll_backend__tag_switch__generate_primary_jump_table_13_p_0(PtagGroups_14, NextPrimary_25, MaxPrimary_16, StagReg_17, VarRval_18, MaybeFailLabel_19, PtagCountMap_20, &TailTargets_66, Code_22, STATE_VARIABLE_CaseLabelMap_0_40, STATE_VARIABLE_CaseLabelMap_41, STATE_VARIABLE_CI_0_42, STATE_VARIABLE_CI_43);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Targets_21 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeFailLabel_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTargets_66));
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

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__446__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_chain\'/13", (MR_String) "empty list");
        return;
      }
    }
    else
    {
      MR_Word PtagGroup_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PtagGroups_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer MainPtag_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PtagGroup_30, (MR_Integer) 0))));
      MR_Word OtherPtags_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagGroup_30, (MR_Integer) 1))));
      MR_Word PtagCase_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagGroup_30, (MR_Integer) 2))));
      MR_Word StagLoc_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_44, (MR_Integer) 0))));
      MR_Word StagGoalMap_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_44, (MR_Integer) 1))));
      MR_Word CountInfo_47;
      MR_Word StagLocPrime_48;
      MR_Integer MaxSecondary_49;
      MR_Word Var_63;
      MR_Box conv0_CountInfo_47;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_1[1]), PtagCountMap_6, MainPtag_42, &conv0_CountInfo_47);
      CountInfo_47 = ((MR_Word) (conv0_CountInfo_47));
      StagLocPrime_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_47, (MR_Integer) 0))));
      MaxSecondary_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CountInfo_47, (MR_Integer) 1))));
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[4]));
        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1));
        MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (StagLoc_45));
        MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) (StagLocPrime_48));
      }
      mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_chain\'/13", (MR_String) "secondary tag locations differ");
      if ((PtagGroups_31 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((MaybeFailLabel_5 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Comment_56));
          }
          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (FailLabel_54));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (Var_78));
          }
          {
            Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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

    conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0(
  MR_String BaseStr_5,
  MR_Integer MainPtag_6,
  MR_Word OtherPtags_7,
  MR_String * Comment_8)
{
  if ((OtherPtags_7 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    MR_String Var_21;

    Var_21 = mercury__string__int_to_string_1_f_0(MainPtag_6);
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

    Var_12 = mercury__string__int_to_string_1_f_0(MainPtag_6);
    Var_18 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[4]), OtherPtags_7);
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

    conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(
  MR_Word PtagRval_17,
  MR_Word StagReg_18,
  MR_Integer MainPtag_19,
  MR_Word OtherPtags_20,
  MR_Word PtagCase_21,
  MR_Integer MaxSecondary_22,
  MR_Word VarRval_23,
  MR_Word MaybeFailLabel_24,
  MR_Word PrevTestsCode0_25,
  MR_Word * PrevTestsCode_26,
  MR_Word PrevCasesCode0_27,
  MR_Word * PrevCasesCode_28,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_40,
  MR_Word * STATE_VARIABLE_CaseLabelMap_41,
  MR_Word STATE_VARIABLE_CI_0_42,
  MR_Word * STATE_VARIABLE_CI_43)
{
  {
    MR_Word ThisPtagLabel_31;
    MR_Word TestRval0_32;
    MR_Word TestRval_33;
    MR_Word TestCode_34;
    MR_String Comment_35;
    MR_Word LabelCode_36;
    MR_Word StagLoc_37;
    MR_Word StagGoalMap_38;
    MR_Word TagCode_39;
    MR_Word STATE_VARIABLE_CI_44_44;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_60;

    ll_backend__code_info__get_next_label_3_p_0(&ThisPtagLabel_31, STATE_VARIABLE_CI_0_42, &STATE_VARIABLE_CI_44_44);
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MainPtag_19));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Var_47, 2) = ((MR_Box) (Var_49));
    }
    {
      TestRval0_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TestRval0_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), TestRval0_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[9])));
      MR_hl_field(MR_mktag(3), TestRval0_32, 2) = ((MR_Box) (PtagRval_17));
      MR_hl_field(MR_mktag(3), TestRval0_32, 3) = ((MR_Box) (Var_47));
    }
    ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_p_0(OtherPtags_20, PtagRval_17, TestRval0_32, &TestRval_33);
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (ThisPtagLabel_31));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (TestRval_33));
      MR_hl_field(MR_mktag(3), Var_52, 2) = ((MR_Box) (Var_53));
    }
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) ((MR_String) "test primary tag only"));
    }
    TestCode_34 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_51)));
    if ((OtherPtags_20 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_String Var_78;

      Var_78 = mercury__string__int_to_string_1_f_0(MainPtag_19);
      Comment_35 = mercury__string__f_43_43_2_f_0((MR_String) "primary tag value: ", Var_78);
    }
    else
    {
      MR_String Var_68;
      MR_String Var_69;
      MR_String Var_70;
      MR_String Var_72;
      MR_String Var_73;
      MR_Word Var_75;

      Var_69 = mercury__string__int_to_string_1_f_0(MainPtag_19);
      Var_75 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__tag_switch_scalar_common_1[3]), OtherPtags_20);
      Var_73 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_75);
      Var_72 = mercury__string__f_43_43_2_f_0(Var_73, (MR_String) ")");
      Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "(shared with ", Var_72);
      Var_68 = mercury__string__f_43_43_2_f_0(Var_69, Var_70);
      Comment_35 = mercury__string__f_43_43_2_f_0((MR_String) "primary tag value: ", Var_68);
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (ThisPtagLabel_31));
    }
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (Comment_35));
    }
    LabelCode_36 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_56)));
    StagLoc_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_21, (MR_Integer) 0))));
    StagGoalMap_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_21, (MR_Integer) 1))));
    ll_backend__tag_switch__generate_primary_tag_code_13_p_0(StagGoalMap_38, MainPtag_19, OtherPtags_20, MaxSecondary_22, StagReg_18, StagLoc_37, VarRval_23, MaybeFailLabel_24, &TagCode_39, STATE_VARIABLE_CaseLabelMap_0_40, STATE_VARIABLE_CaseLabelMap_41, STATE_VARIABLE_CI_44_44, STATE_VARIABLE_CI_43);
    *PrevTestsCode_26 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrevTestsCode0_25, TestCode_34);
    Var_60 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TagCode_39, PrevCasesCode0_27);
    *PrevCasesCode_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_36, Var_60);
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
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *TestRval_4 = HeadVar__3_3;
    else
    {
      MR_Integer OtherPtag_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word OtherPtags_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ThisTestRval_12;
      MR_Word TestRval1_13;
      MR_Word Var_16;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__3_3;

      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (OtherPtag_7));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (Var_19));
      }
      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(3), Var_16, 2) = ((MR_Box) (Var_18));
      }
      {
        ThisTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ThisTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), ThisTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[9])));
        MR_hl_field(MR_mktag(3), ThisTestRval_12, 2) = ((MR_Box) (PtagRval_2));
        MR_hl_field(MR_mktag(3), ThisTestRval_12, 3) = ((MR_Box) (Var_16));
      }
      {
        TestRval1_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TestRval1_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), TestRval1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(3), TestRval1_13, 2) = ((MR_Box) (HeadVar__3_3));
        MR_hl_field(MR_mktag(3), TestRval1_13, 3) = ((MR_Box) (ThisTestRval_12));
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = OtherPtags_8;
      next_value_of_HeadVar__3_3 = TestRval1_13;
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

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__355__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_me_else_chain\'/11", (MR_String) "empty switch");
        return;
      }
    }
    else
    {
      MR_Word PtagGroup_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PtagGroups_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer MainPtag_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PtagGroup_26, (MR_Integer) 0))));
      MR_Word OtherPtags_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagGroup_26, (MR_Integer) 1))));
      MR_Word PtagCase_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagGroup_26, (MR_Integer) 2))));
      MR_Word StagLoc_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_38, (MR_Integer) 0))));
      MR_Word StagGoalMap_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_38, (MR_Integer) 1))));
      MR_Word CountInfo_41;
      MR_Word StagLocPrime_42;
      MR_Integer MaxSecondary_43;
      MR_Word Var_54;
      MR_Box conv0_CountInfo_41;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_1[1]), PtagCountMap_6, MainPtag_36, &conv0_CountInfo_41);
      CountInfo_41 = ((MR_Word) (conv0_CountInfo_41));
      StagLocPrime_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountInfo_41, (MR_Integer) 0))));
      MaxSecondary_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CountInfo_41, (MR_Integer) 1))));
      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[4]));
        MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0_1));
        MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (StagLoc_39));
        MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (StagLocPrime_42));
      }
      mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_me_else_chain\'/11", (MR_String) "secondary tag locations differ");
      if ((PtagGroups_27 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((MaybeFailLabel_5 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (FailLabel_48));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (Var_63));
          }
          {
            Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
  MR_Integer MainPtag_16,
  MR_Word OtherPtags_17,
  MR_Word PtagCase_18,
  MR_Integer MaxSecondary_19,
  MR_Word VarRval_20,
  MR_Word MaybeFailLabel_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_33,
  MR_Word * STATE_VARIABLE_CaseLabelMap_34,
  MR_Word STATE_VARIABLE_CI_0_35,
  MR_Word * STATE_VARIABLE_CI_36)
{
  {
    MR_Word ElseLabel_25;
    MR_Word TestRval0_26;
    MR_Word TestRval_27;
    MR_Word TestCode_28;
    MR_Word StagLoc_29;
    MR_Word StagGoalMap_30;
    MR_Word TagCode_31;
    MR_Word ElseCode_32;
    MR_Word STATE_VARIABLE_CI_37_37;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;

    ll_backend__code_info__get_next_label_3_p_0(&ElseLabel_25, STATE_VARIABLE_CI_0_35, &STATE_VARIABLE_CI_37_37);
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MainPtag_16));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Var_40, 2) = ((MR_Box) (Var_42));
    }
    {
      TestRval0_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TestRval0_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), TestRval0_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[8])));
      MR_hl_field(MR_mktag(3), TestRval0_26, 2) = ((MR_Box) (PtagRval_14));
      MR_hl_field(MR_mktag(3), TestRval0_26, 3) = ((MR_Box) (Var_40));
    }
    ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_p_0(OtherPtags_17, PtagRval_14, TestRval0_26, &TestRval_27);
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (ElseLabel_25));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (TestRval_27));
      MR_hl_field(MR_mktag(3), Var_45, 2) = ((MR_Box) (Var_46));
    }
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) ((MR_String) "test primary tag only"));
    }
    TestCode_28 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_44)));
    StagLoc_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_18, (MR_Integer) 0))));
    StagGoalMap_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PtagCase_18, (MR_Integer) 1))));
    ll_backend__tag_switch__generate_primary_tag_code_13_p_0(StagGoalMap_30, MainPtag_16, OtherPtags_17, MaxSecondary_19, StagReg_15, StagLoc_29, VarRval_20, MaybeFailLabel_21, &TagCode_31, STATE_VARIABLE_CaseLabelMap_0_33, STATE_VARIABLE_CaseLabelMap_34, STATE_VARIABLE_CI_37_37, STATE_VARIABLE_CI_36);
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (ElseLabel_25));
    }
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) ((MR_String) "handle next primary tag"));
    }
    ElseCode_32 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_50)));
    Var_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TagCode_31, ElseCode_32);
    *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_28, Var_53);
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__702__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0(
  MR_Word StagGoalMap_14,
  MR_Integer MainPtag_15,
  MR_Word OtherPtags_16,
  MR_Integer MaxSecondary_17,
  MR_Word StagReg_18,
  MR_Word StagLoc_19,
  MR_Word Rval_20,
  MR_Word MaybeFailLabel_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_48,
  MR_Word * STATE_VARIABLE_CaseLabelMap_49,
  MR_Word STATE_VARIABLE_CI_0_50,
  MR_Word * STATE_VARIABLE_CI_51)
{
  {
    MR_bool succeeded;
    MR_Word StagGoalList_25;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), StagGoalMap_14, &StagGoalList_25);
    switch (StagLoc_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_Word Globals_31;
          MR_Integer DenseSwitchSize_32;
          MR_Integer BinarySwitchSize_33;
          MR_Integer TrySwitchSize_34;
          MR_Word OrigStagRval_36;
          MR_String Comment_37;
          MR_Word MaybeSecFailLabel_45;
          MR_Word Var_52;

          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[3]));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1));
            MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (OtherPtags_16));
            MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__require__expect_3_p_0(Var_52, (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) ">1 ptag with secondary tag");
          ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_50, &Globals_31);
          libs__globals__lookup_int_option_3_p_0(Globals_31, (MR_Integer) 448, &DenseSwitchSize_32);
          libs__globals__lookup_int_option_3_p_0(Globals_31, (MR_Integer) 455, &BinarySwitchSize_33);
          libs__globals__lookup_int_option_3_p_0(Globals_31, (MR_Integer) 454, &TrySwitchSize_34);
          switch (StagLoc_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                {
                  OrigStagRval_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), OrigStagRval_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), OrigStagRval_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
                  MR_hl_field(MR_mktag(3), OrigStagRval_36, 2) = ((MR_Box) (Rval_20));
                }
                Comment_37 = (MR_String) "compute local sec tag to switch on";
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_60;
                MR_Word Var_61;

                {
                  Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MainPtag_15));
                }
                {
                  Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                  MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
                  MR_hl_field(MR_mktag(3), Var_60, 2) = ((MR_Box) (Rval_20));
                  MR_hl_field(MR_mktag(3), Var_60, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[11])));
                }
                {
                  OrigStagRval_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), OrigStagRval_36, 0) = ((MR_Box) (Var_60));
                }
                Comment_37 = (MR_String) "compute remote sec tag to switch on";
              }
              break;
          }
          if ((MaybeFailLabel_21 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            MaybeSecFailLabel_45 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          else
          {
            MR_Integer StagGoalCount_43;
            MR_Integer FullGoalCount_44;

            mercury__list__length_2_p_0((MR_Word) (&ll_backend__tag_switch_scalar_common_1[2]), StagGoalList_25, &StagGoalCount_43);
            FullGoalCount_44 = (MR_Integer) ((MR_Unsigned) MaxSecondary_17 + (MR_Unsigned) (MR_Integer) 1);
            succeeded = (FullGoalCount_44 == StagGoalCount_43);
            if (succeeded)
              MaybeSecFailLabel_45 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            else
              MaybeSecFailLabel_45 = MaybeFailLabel_21;
          }
          succeeded = (MaxSecondary_17 >= DenseSwitchSize_32);
          if (succeeded)
          {
            MR_Word Targets_46;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Word StagCode_106;

            StagCode_106 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(StagGoalList_25, (MR_Integer) 0, MaxSecondary_17, MaybeSecFailLabel_45, &Targets_46);
            {
              Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (OrigStagRval_36));
              MR_hl_field(MR_mktag(3), Var_82, 2) = ((MR_Box) (Targets_46));
            }
            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (Var_82));
              MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) ((MR_String) "switch on secondary tag"));
            }
            *Code_22 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_81)));
            *STATE_VARIABLE_CaseLabelMap_49 = STATE_VARIABLE_CaseLabelMap_0_48;
            *STATE_VARIABLE_CI_51 = STATE_VARIABLE_CI_0_50;
          }
          else
          {
            MR_Word StagCode_117;
            MR_Word StagRval_118;
            MR_Integer NumRealRegs_38;
            MR_Word Var_66;

            succeeded = (MaxSecondary_17 >= (MR_Integer) 2);
            if (succeeded)
            {
              Var_66 = (MR_Integer) 319;
              libs__globals__lookup_int_option_3_p_0(Globals_31, Var_66, &NumRealRegs_38);
              succeeded = (NumRealRegs_38 == (MR_Integer) 0);
              if (!(succeeded))
              {
                MR_Integer StagRegNo_39;
                MR_Word Var_67;

                succeeded = ((MR_tag((MR_Word) StagReg_18)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StagReg_18, (MR_Integer) 0))));
                  StagRegNo_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), StagReg_18, (MR_Integer) 1))));
                  succeeded = (Var_67 == (MR_Integer) 0);
                }
                if (succeeded)
                  succeeded = (StagRegNo_39 <= NumRealRegs_38);
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
              MR_Word Var_108;
              MR_Word Var_109;

              {
                Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (StagReg_18));
                MR_hl_field(MR_mktag(3), Var_109, 2) = ((MR_Box) (OrigStagRval_36));
              }
              {
                Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (Var_109));
                MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (Comment_37));
              }
              StagCode_117 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_108)));
              {
                StagRval_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StagRval_118, 0) = ((MR_Box) (StagReg_18));
              }
            }
            else
            {
              StagCode_117 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              StagRval_118 = OrigStagRval_36;
            }
            succeeded = (MaxSecondary_17 >= BinarySwitchSize_33);
            if (succeeded)
            {
              ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(StagGoalList_25, (MR_Integer) 0, MaxSecondary_17, StagRval_118, MaybeSecFailLabel_45, Code_22, STATE_VARIABLE_CaseLabelMap_0_48, STATE_VARIABLE_CaseLabelMap_49, STATE_VARIABLE_CI_0_50, STATE_VARIABLE_CI_51);
            }
            else
            {
              succeeded = (MaxSecondary_17 >= TrySwitchSize_34);
              if (succeeded)
              {
                MR_Word Codes_47;
                MR_Word Var_75;

                Var_75 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(StagGoalList_25, StagRval_118, MaybeSecFailLabel_45, Var_75, &Codes_47, STATE_VARIABLE_CaseLabelMap_0_48, STATE_VARIABLE_CaseLabelMap_49);
                *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), StagCode_117, Codes_47);
                *STATE_VARIABLE_CI_51 = STATE_VARIABLE_CI_0_50;
              }
              else
              {
                MR_Word Codes_94;

                ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(StagGoalList_25, StagRval_118, MaybeSecFailLabel_45, &Codes_94, STATE_VARIABLE_CaseLabelMap_0_48, STATE_VARIABLE_CaseLabelMap_49, STATE_VARIABLE_CI_0_50, STATE_VARIABLE_CI_51);
                *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), StagCode_117, Codes_94);
              }
            }
          }
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          if ((StagGoalList_25 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "no goal for non-shared tag");
              return;
            }
          }
          else
          {
            MR_Word Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StagGoalList_25, (MR_Integer) 1))));
            MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StagGoalList_25, (MR_Integer) 0))));

            if ((Var_104 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word CaseLabel_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_105, (MR_Integer) 1))));
              MR_Integer Var_88 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_105, (MR_Integer) 0))));

              succeeded = (Var_88 == (MR_Integer) -1);
              if (succeeded)
                ll_backend__switch_case__generate_case_code_or_jump_4_p_0(CaseLabel_27, Code_22, STATE_VARIABLE_CaseLabelMap_0_48, STATE_VARIABLE_CaseLabelMap_49);
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "badly formed goal for non-shared tag");
                  return;
                }
              }
            }
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "more than one goal for non-shared tag");
                return;
              }
            }
          }
          *STATE_VARIABLE_CI_51 = STATE_VARIABLE_CI_0_50;
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

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__976__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__965__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
      if ((StagGoals_11 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        if ((MaybeFailLabel_15 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *Code_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        }
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
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (FailLabel_20));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (Var_65));
          }
          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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

        if ((Var_99 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Integer CurSecPrime_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_100, (MR_Integer) 0))));
          MR_Word CaseLabel_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_100, (MR_Integer) 1))));
          MR_Word Var_58;

          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[1]));
            MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1));
            MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (MinStag_12));
            MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) (CurSecPrime_23));
          }
          mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", (MR_String) "cur_secondary mismatch");
          ll_backend__switch_case__generate_case_code_or_jump_4_p_0(CaseLabel_24, Code_16, STATE_VARIABLE_CaseLabelMap_0_49, STATE_VARIABLE_CaseLabelMap_50);
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", (MR_String) "goallist not singleton or empty when binary search ends");
            return;
          }
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
      HighRangeStart_29 = (MR_Integer) ((MR_Unsigned) LowRangeEnd_28 + (MR_Unsigned) (MR_Integer) 1);
      {
        InLowGroup_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InLowGroup_30, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), InLowGroup_30, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2));
        MR_hl_field(MR_mktag(0), InLowGroup_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
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
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (LowRangeEnd_28));
      }
      {
        LowRangeEndConst_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), LowRangeEndConst_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), LowRangeEndConst_43, 1) = ((MR_Box) (Var_79));
      }
      {
        TestRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TestRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), TestRval_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[10])));
        MR_hl_field(MR_mktag(3), TestRval_44, 2) = ((MR_Box) (StagRval_14));
        MR_hl_field(MR_mktag(3), TestRval_44, 3) = ((MR_Box) (LowRangeEndConst_43));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (NewLabel_36));
      }
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (TestRval_44));
        MR_hl_field(MR_mktag(3), Var_83, 2) = ((MR_Box) (Var_84));
      }
      {
        Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (IfComment_41));
      }
      IfCode_45 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_82)));
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (NewLabel_36));
      }
      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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

    succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__918__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
        Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (CaseList_6));
        MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__require__expect_3_p_0(Var_15, (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_jump_table\'/5", (MR_String) "caselist not empty when reaching limiting secondary tag");
      *Targets_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    else
    {
      MR_Integer NextSecondary_11 = (MR_Integer) ((MR_Unsigned) CurSecondary_7 + (MR_Unsigned) (MR_Integer) 1);
      MR_Word CaseLabel_12;
      MR_Word CaseListTail_13;
      MR_Word Var_20;
      MR_Integer Var_24;

      succeeded = ((MR_tag((MR_Word) CaseList_6)) == (MR_mktag((MR_Integer) 1)));
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
          Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (CaseLabel_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_try_chain\'/7", (MR_String) "empty switch");
        return;
      }
    }
    else
    {
      MR_Word Case_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Secondary_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Case_17, (MR_Integer) 0))));
      MR_Word CaseLabel_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_17, (MR_Integer) 1))));

      if ((Cases_18 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((MaybeFailLabel_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
          MR_Word _CaseCode_53;
          MR_Word _CaseGenerated_54;

          mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), STATE_VARIABLE_CaseLabelMap_0_6, ((MR_Box) (CaseLabel_25)), &conv0_CaseInfo0_51);
          CaseInfo0_51 = ((MR_Word) (conv0_CaseInfo0_51));
          Comment_52 = ((MR_String) ((MR_hl_field(MR_mktag(0), CaseInfo0_51, (MR_Integer) 0))));
          _CaseCode_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseInfo0_51, (MR_Integer) 1))));
          _CaseGenerated_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseInfo0_51, (MR_Integer) 2))));
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Secondary_24));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[9])));
            MR_hl_field(MR_mktag(3), Var_58, 2) = ((MR_Box) (StagRval_2));
            MR_hl_field(MR_mktag(3), Var_58, 3) = ((MR_Box) (Var_61));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (CaseLabel_25));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(3), Var_57, 2) = ((MR_Box) (Var_63));
          }
          Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "test sec tag only for ", Comment_52);
          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (Var_64));
          }
          TestCode_55 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_56)));
          PrevTestsCode1_40 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrevTestsCode0_4, TestCode_55);
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (FailLabel_29));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
          }
          {
            Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
        MR_Word _CaseCode_77;
        MR_Word _CaseGenerated_78;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_PrevTestsCode0_4;

        mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), STATE_VARIABLE_CaseLabelMap_0_6, ((MR_Box) (CaseLabel_25)), &conv1_CaseInfo0_75);
        CaseInfo0_75 = ((MR_Word) (conv1_CaseInfo0_75));
        Comment_76 = ((MR_String) ((MR_hl_field(MR_mktag(0), CaseInfo0_75, (MR_Integer) 0))));
        _CaseCode_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseInfo0_75, (MR_Integer) 1))));
        _CaseGenerated_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseInfo0_75, (MR_Integer) 2))));
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Secondary_24));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (Var_86));
        }
        {
          Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[9])));
          MR_hl_field(MR_mktag(3), Var_82, 2) = ((MR_Box) (StagRval_2));
          MR_hl_field(MR_mktag(3), Var_82, 3) = ((MR_Box) (Var_85));
        }
        {
          Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (CaseLabel_25));
        }
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (Var_82));
          MR_hl_field(MR_mktag(3), Var_81, 2) = ((MR_Box) (Var_87));
        }
        Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "test sec tag only for ", Comment_76);
        {
          Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (Var_88));
        }
        TestCode_79 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_80)));
        PrevTestsCode1_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrevTestsCode0_4, TestCode_79);
        // direct tailcall eliminated
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
  if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_try_me_else_chain\'/8", (MR_String) "empty switch");
      return;
    }
  }
  else
  {
    MR_Word Case_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Secondary_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Case_20, (MR_Integer) 0))));
    MR_Word CaseLabel_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_20, (MR_Integer) 1))));

    if ((Cases_21 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((MaybeFailLabel_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Secondary_27));
        }
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (Var_77));
        }
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[8])));
          MR_hl_field(MR_mktag(3), Var_73, 2) = ((MR_Box) (StagRval_2));
          MR_hl_field(MR_mktag(3), Var_73, 3) = ((MR_Box) (Var_76));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (ElseLabel_66));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(3), Var_72, 2) = ((MR_Box) (Var_78));
        }
        {
          Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) ((MR_String) "test sec tag only"));
        }
        TestCode_67 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_71)));
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (ElseLabel_66));
        }
        {
          Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) ((MR_String) "handle next secondary tag"));
        }
        ElseLabelCode_68 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_80)));
        Var_83 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CaseCode_65, ElseLabelCode_68);
        ThisCode_50 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_67, Var_83);
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (FailLabel_33));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Secondary_11));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[8])));
      MR_hl_field(MR_mktag(3), Var_27, 2) = ((MR_Box) (StagRval_10));
      MR_hl_field(MR_mktag(3), Var_27, 3) = ((MR_Box) (Var_30));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (ElseLabel_16));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(3), Var_26, 2) = ((MR_Box) (Var_32));
    }
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) ((MR_String) "test sec tag only"));
    }
    TestCode_17 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_25)));
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (ElseLabel_16));
    }
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *TestRval_4 = HeadVar__3_3;
    else
    {
      MR_Integer OtherPtag_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word OtherPtags_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ThisTestRval_12;
      MR_Word TestRval1_13;
      MR_Word Var_16;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__3_3;

      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (OtherPtag_7));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (Var_19));
      }
      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(3), Var_16, 2) = ((MR_Box) (Var_18));
      }
      {
        ThisTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ThisTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), ThisTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[8])));
        MR_hl_field(MR_mktag(3), ThisTestRval_12, 2) = ((MR_Box) (PtagRval_2));
        MR_hl_field(MR_mktag(3), ThisTestRval_12, 3) = ((MR_Box) (Var_16));
      }
      {
        TestRval1_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TestRval1_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), TestRval1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(3), TestRval1_13, 2) = ((MR_Box) (HeadVar__3_3));
        MR_hl_field(MR_mktag(3), TestRval1_13, 3) = ((MR_Box) (ThisTestRval_12));
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = OtherPtags_8;
      next_value_of_HeadVar__3_3 = TestRval1_13;
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
