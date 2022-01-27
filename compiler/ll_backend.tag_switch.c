/*
** Automatically generated from `tag_switch.m'
** by the Mercury compiler,
** version rotd-2016-02-18
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module ll_backend.tag_switch. */
/* :- implementation. */

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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__pti_ptag_case_entry_1__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__tag_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_0;

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_1;

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_2;

static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_3;

static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_value_ordered_switch_method_0[4];

static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_name_ordered_switch_method_0[4];

static const MR_Integer ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_switch_method_0[4];

static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0_10001(
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
  MR_Box ll_backend__tag_switch__wrapper_arg_2);

static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0_10001(
  MR_Box * ll_backend__tag_switch__wrapper_arg_1,
  MR_Box ll_backend__tag_switch__wrapper_arg_2,
  MR_Box ll_backend__tag_switch__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__975__1_2_p_0(
  MR_Integer ll_backend__tag_switch__LowRangeEnd_28,
  MR_Word ll_backend__tag_switch__LambdaHeadVar__1_71);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__964__1_2_p_0(
  MR_Integer ll_backend__tag_switch__MinStag_12,
  MR_Integer ll_backend__tag_switch__CurSecPrime_23);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__917__1_2_p_0(
  MR_Word ll_backend__tag_switch__CaseList_6,
  MR_Word ll_backend__tag_switch__HeadVar__2_19);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__702__1_2_p_0(
  MR_Word ll_backend__tag_switch__OtherPtags_16,
  MR_Word ll_backend__tag_switch__HeadVar__2_56);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__631__1_2_p_0(
  MR_Integer ll_backend__tag_switch__LowRangeEnd_39,
  MR_Word ll_backend__tag_switch__LambdaHeadVar__1_88);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__618__1_2_p_0(
  MR_Word ll_backend__tag_switch__StagLoc_31,
  MR_Word ll_backend__tag_switch__StagLocPrime_34);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__613__1_2_p_0(
  MR_Integer ll_backend__tag_switch__MinPtag_15,
  MR_Integer ll_backend__tag_switch__CurPrimaryPrime_29);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__556__1_2_p_0(
  MR_Word ll_backend__tag_switch__StagLoc_29,
  MR_Word ll_backend__tag_switch__StagLocPrime_32);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__543__1_2_p_0(
  MR_Word ll_backend__tag_switch__PtagGroups_14,
  MR_Word ll_backend__tag_switch__HeadVar__2_48);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__445__1_2_p_0(
  MR_Word ll_backend__tag_switch__StagLoc_46,
  MR_Word ll_backend__tag_switch__StagLocPrime_49);

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__354__1_2_p_0(
  MR_Word ll_backend__tag_switch__StagLoc_40,
  MR_Word ll_backend__tag_switch__StagLocPrime_43);

static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0(
  MR_Word * ll_backend__tag_switch__HeadVar__1_1,
  MR_Word ll_backend__tag_switch__HeadVar__2_2,
  MR_Word ll_backend__tag_switch__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0(
  MR_Word ll_backend__tag_switch__HeadVar__2_1,
  MR_Word ll_backend__tag_switch__HeadVar__2_2);

static MR_Box MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg,
  MR_Box ll_backend__tag_switch__wrapper_arg_1);

static void MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0(
  MR_String ll_backend__tag_switch__BaseStr_5,
  MR_Integer ll_backend__tag_switch__MainPtag_6,
  MR_Word ll_backend__tag_switch__OtherPtags_7,
  MR_String * ll_backend__tag_switch__Comment_8);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2(
  MR_Box ll_backend__tag_switch__closure_arg,
  MR_Box ll_backend__tag_switch__wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(
  MR_Word ll_backend__tag_switch__StagGoals_11,
  MR_Integer ll_backend__tag_switch__MinStag_12,
  MR_Integer ll_backend__tag_switch__MaxStag_13,
  MR_Word ll_backend__tag_switch__StagRval_14,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_15,
  MR_Word * ll_backend__tag_switch__Code_16,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_51,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_52);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(
  MR_Word ll_backend__tag_switch__CaseList_6,
  MR_Integer ll_backend__tag_switch__CurSecondary_7,
  MR_Integer ll_backend__tag_switch__MaxSecondary_8,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_9,
  MR_Word * ll_backend__tag_switch__Targets_10);

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
  MR_Word ll_backend__tag_switch__StagRval_2,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_3,
  MR_Word ll_backend__tag_switch__PrevTestsCode0_4,
  MR_Word * ll_backend__tag_switch__Code_5,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_7);

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(
  MR_Word ll_backend__tag_switch__CaseLabel_9,
  MR_Word ll_backend__tag_switch__StagRval_10,
  MR_Integer ll_backend__tag_switch__Secondary_11,
  MR_Word * ll_backend__tag_switch__Code_12,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_19,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_20,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_21,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_22);

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
  MR_Word ll_backend__tag_switch__StagRval_2,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_3,
  MR_Word * ll_backend__tag_switch__Code_4,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_7,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_8);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0(
  MR_Word ll_backend__tag_switch__StagGoalMap_14,
  MR_Integer ll_backend__tag_switch__MainPtag_15,
  MR_Word ll_backend__tag_switch__OtherPtags_16,
  MR_Integer ll_backend__tag_switch__MaxSecondary_17,
  MR_Word ll_backend__tag_switch__StagReg_18,
  MR_Word ll_backend__tag_switch__StagLoc_19,
  MR_Word ll_backend__tag_switch__Rval_20,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_21,
  MR_Word * ll_backend__tag_switch__Code_22,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_50,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_51);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_3(
  MR_Box ll_backend__tag_switch__closure_arg,
  MR_Box ll_backend__tag_switch__wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2(
  MR_Box ll_backend__tag_switch__closure_arg);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0(
  MR_Word ll_backend__tag_switch__PtagGroups_14,
  MR_Integer ll_backend__tag_switch__MinPtag_15,
  MR_Integer ll_backend__tag_switch__MaxPtag_16,
  MR_Word ll_backend__tag_switch__PtagRval_17,
  MR_Word ll_backend__tag_switch__StagReg_18,
  MR_Word ll_backend__tag_switch__VarRval_19,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_20,
  MR_Word ll_backend__tag_switch__PtagCountMap_21,
  MR_Word * ll_backend__tag_switch__Code_22,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_62,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_63);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_2(
  MR_Box ll_backend__tag_switch__closure_arg);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0(
  MR_Word ll_backend__tag_switch__PtagGroups_14,
  MR_Integer ll_backend__tag_switch__CurPrimary_15,
  MR_Integer ll_backend__tag_switch__MaxPrimary_16,
  MR_Word ll_backend__tag_switch__StagReg_17,
  MR_Word ll_backend__tag_switch__VarRval_18,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_19,
  MR_Word ll_backend__tag_switch__PtagCountMap_20,
  MR_Word * ll_backend__tag_switch__Targets_21,
  MR_Word * ll_backend__tag_switch__Code_22,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_42,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_43);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_p_0(
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
  MR_Word ll_backend__tag_switch__PtagRval_2,
  MR_Word ll_backend__tag_switch__HeadVar__3_3,
  MR_Word * ll_backend__tag_switch__TestRval_4);

static MR_Box MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg,
  MR_Box ll_backend__tag_switch__wrapper_arg_1);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(
  MR_Word ll_backend__tag_switch__PtagRval_17,
  MR_Word ll_backend__tag_switch__StagReg_18,
  MR_Integer ll_backend__tag_switch__MainPtag_19,
  MR_Word ll_backend__tag_switch__OtherPtags_20,
  MR_Word ll_backend__tag_switch__PtagCase_21,
  MR_Integer ll_backend__tag_switch__MaxSecondary_22,
  MR_Word ll_backend__tag_switch__VarRval_23,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_24,
  MR_Word ll_backend__tag_switch__PrevTestsCode0_25,
  MR_Word * ll_backend__tag_switch__PrevTestsCode_26,
  MR_Word ll_backend__tag_switch__PrevCasesCode0_27,
  MR_Word * ll_backend__tag_switch__PrevCasesCode_28,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_42,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_43);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0(
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
  MR_Word ll_backend__tag_switch__PtagRval_2,
  MR_Word ll_backend__tag_switch__StagReg_3,
  MR_Word ll_backend__tag_switch__VarRval_4,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_5,
  MR_Word ll_backend__tag_switch__PtagCountMap_6,
  MR_Word ll_backend__tag_switch__PrevTestsCode0_7,
  MR_Word ll_backend__tag_switch__PrevCasesCode0_8,
  MR_Word * ll_backend__tag_switch__Code_9,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_11,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_12,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_13);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_p_0(
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
  MR_Word ll_backend__tag_switch__PtagRval_2,
  MR_Word ll_backend__tag_switch__HeadVar__3_3,
  MR_Word * ll_backend__tag_switch__TestRval_4);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(
  MR_Word ll_backend__tag_switch__PtagRval_14,
  MR_Word ll_backend__tag_switch__StagReg_15,
  MR_Integer ll_backend__tag_switch__MainPtag_16,
  MR_Word ll_backend__tag_switch__OtherPtags_17,
  MR_Word ll_backend__tag_switch__PtagCase_18,
  MR_Integer ll_backend__tag_switch__MaxSecondary_19,
  MR_Word ll_backend__tag_switch__VarRval_20,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_21,
  MR_Word * ll_backend__tag_switch__Code_22,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_33,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_34,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_35,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_36);

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg);

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
  MR_Word ll_backend__tag_switch__PtagRval_2,
  MR_Word ll_backend__tag_switch__StagReg_3,
  MR_Word ll_backend__tag_switch__VarRval_4,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_5,
  MR_Word ll_backend__tag_switch__PtagCountMap_6,
  MR_Word * ll_backend__tag_switch__Code_7,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_10,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_11);

static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0_2(
  MR_Box ll_backend__tag_switch__closure_arg,
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
  MR_Box ll_backend__tag_switch__wrapper_arg_2,
  MR_Box ll_backend__tag_switch__wrapper_arg_3,
  MR_Box * ll_backend__tag_switch__wrapper_arg_4);

static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg,
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
  MR_Box * ll_backend__tag_switch__wrapper_arg_2,
  MR_Box ll_backend__tag_switch__wrapper_arg_3,
  MR_Box * ll_backend__tag_switch__wrapper_arg_4,
  MR_Box ll_backend__tag_switch__wrapper_arg_5,
  MR_Box * ll_backend__tag_switch__wrapper_arg_6,
  MR_Box ll_backend__tag_switch__wrapper_arg_7,
  MR_Box * ll_backend__tag_switch__wrapper_arg_8);


static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_1[6][3];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_2[9][2];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_3[1][12];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_4[1][7];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_5[8][5];

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_6[1][1];




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
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_4[0])),
    ((MR_Box) (ll_backend__tag_switch__generate_tag_switch_14_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[1])),
    ((MR_Box) (ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[1])),
    ((MR_Box) (ll_backend__tag_switch__make_ptag_comment_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_2[9][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__tag_switch_scalar_common_6[0])))
  },
};

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_3[1][12] = {
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

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_4[1][7] = {
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

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_5[8][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__tag_switch__backend_libs__switch_util__pti_ptag_case_entry_1__plain_ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__tag_switch__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__tag_switch_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__tag_switch__backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__pti_ptag_case_entry_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__tag_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__tag_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
ll_backend__tag_switch____Unify____switch_method_0_0_10001(
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
  MR_Box ll_backend__tag_switch__wrapper_arg_2)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;

    {
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch____Unify____switch_method_0_0(((MR_Word) ll_backend__tag_switch__wrapper_arg_1), ((MR_Word) ll_backend__tag_switch__wrapper_arg_2));
    }
    return ll_backend__tag_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0_10001(
  MR_Box * ll_backend__tag_switch__wrapper_arg_1,
  MR_Box ll_backend__tag_switch__wrapper_arg_2,
  MR_Box ll_backend__tag_switch__wrapper_arg_3)
{
  {
    MR_Word ll_backend__tag_switch__conv0_HeadVar__1_1;

    {
      ll_backend__tag_switch____Compare____switch_method_0_0(&ll_backend__tag_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__tag_switch__wrapper_arg_2), ((MR_Word) ll_backend__tag_switch__wrapper_arg_3));
    }
    *ll_backend__tag_switch__wrapper_arg_1 = ((MR_Box) (ll_backend__tag_switch__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__975__1_2_p_0(
  MR_Integer ll_backend__tag_switch__LowRangeEnd_28,
  MR_Word ll_backend__tag_switch__LambdaHeadVar__1_71)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Integer ll_backend__tag_switch__Stag_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__LambdaHeadVar__1_71, (MR_Integer) 0)));
    MR_Word ll_backend__tag_switch__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__LambdaHeadVar__1_71, (MR_Integer) 1)));

    ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__Stag_32 <= ll_backend__tag_switch__LowRangeEnd_28);
    return ll_backend__tag_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__964__1_2_p_0(
  MR_Integer ll_backend__tag_switch__MinStag_12,
  MR_Integer ll_backend__tag_switch__CurSecPrime_23)
{
  {
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MinStag_12 == ll_backend__tag_switch__CurSecPrime_23);

    return ll_backend__tag_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__917__1_2_p_0(
  MR_Word ll_backend__tag_switch__CaseList_6,
  MR_Word ll_backend__tag_switch__HeadVar__2_19)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;

    {
      ll_backend__tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[7], ((MR_Box) (ll_backend__tag_switch__CaseList_6)), ((MR_Box) (ll_backend__tag_switch__HeadVar__2_19)));
    }
    return ll_backend__tag_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__702__1_2_p_0(
  MR_Word ll_backend__tag_switch__OtherPtags_16,
  MR_Word ll_backend__tag_switch__HeadVar__2_56)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;

    {
      ll_backend__tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[6], ((MR_Box) (ll_backend__tag_switch__OtherPtags_16)), ((MR_Box) (ll_backend__tag_switch__HeadVar__2_56)));
    }
    return ll_backend__tag_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__631__1_2_p_0(
  MR_Integer ll_backend__tag_switch__LowRangeEnd_39,
  MR_Word ll_backend__tag_switch__LambdaHeadVar__1_88)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Integer ll_backend__tag_switch__Ptag_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__LambdaHeadVar__1_88, (MR_Integer) 0)));
    MR_Word ll_backend__tag_switch__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__LambdaHeadVar__1_88, (MR_Integer) 1)));

    ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__Ptag_43 <= ll_backend__tag_switch__LowRangeEnd_39);
    return ll_backend__tag_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__618__1_2_p_0(
  MR_Word ll_backend__tag_switch__StagLoc_31,
  MR_Word ll_backend__tag_switch__StagLocPrime_34)
{
  {
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagLoc_31 == ll_backend__tag_switch__StagLocPrime_34);

    return ll_backend__tag_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__613__1_2_p_0(
  MR_Integer ll_backend__tag_switch__MinPtag_15,
  MR_Integer ll_backend__tag_switch__CurPrimaryPrime_29)
{
  {
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MinPtag_15 == ll_backend__tag_switch__CurPrimaryPrime_29);

    return ll_backend__tag_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__556__1_2_p_0(
  MR_Word ll_backend__tag_switch__StagLoc_29,
  MR_Word ll_backend__tag_switch__StagLocPrime_32)
{
  {
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagLoc_29 == ll_backend__tag_switch__StagLocPrime_32);

    return ll_backend__tag_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__543__1_2_p_0(
  MR_Word ll_backend__tag_switch__PtagGroups_14,
  MR_Word ll_backend__tag_switch__HeadVar__2_48)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;

    {
      ll_backend__tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[5], ((MR_Box) (ll_backend__tag_switch__PtagGroups_14)), ((MR_Box) (ll_backend__tag_switch__HeadVar__2_48)));
    }
    return ll_backend__tag_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__445__1_2_p_0(
  MR_Word ll_backend__tag_switch__StagLoc_46,
  MR_Word ll_backend__tag_switch__StagLocPrime_49)
{
  {
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagLoc_46 == ll_backend__tag_switch__StagLocPrime_49);

    return ll_backend__tag_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__354__1_2_p_0(
  MR_Word ll_backend__tag_switch__StagLoc_40,
  MR_Word ll_backend__tag_switch__StagLocPrime_43)
{
  {
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagLoc_40 == ll_backend__tag_switch__StagLocPrime_43);

    return ll_backend__tag_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0(
  MR_Word * ll_backend__tag_switch__HeadVar__1_1,
  MR_Word ll_backend__tag_switch__HeadVar__2_2,
  MR_Word ll_backend__tag_switch__HeadVar__3_3)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Integer ll_backend__tag_switch__Cast_HeadVar1_4 = (MR_Integer) ll_backend__tag_switch__HeadVar__2_2;
    MR_Integer ll_backend__tag_switch__Cast_HeadVar2_5 = (MR_Integer) ll_backend__tag_switch__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__tag_switch__HeadVar__1_1, ll_backend__tag_switch__Cast_HeadVar1_4, ll_backend__tag_switch__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0(
  MR_Word ll_backend__tag_switch__HeadVar__2_1,
  MR_Word ll_backend__tag_switch__HeadVar__2_2)
{
  {
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__HeadVar__2_1 == ll_backend__tag_switch__HeadVar__2_2);

    return ll_backend__tag_switch__succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg,
  MR_Box ll_backend__tag_switch__wrapper_arg_1)
{
  {
    MR_Box ll_backend__tag_switch__wrapper_arg_2;
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;
    MR_String ll_backend__tag_switch__conv0_HeadVar__2_2;

    {
      ll_backend__tag_switch__conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) ll_backend__tag_switch__wrapper_arg_1));
    }
    ll_backend__tag_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__tag_switch__conv0_HeadVar__2_2));
    return ll_backend__tag_switch__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0(
  MR_String ll_backend__tag_switch__BaseStr_5,
  MR_Integer ll_backend__tag_switch__MainPtag_6,
  MR_Word ll_backend__tag_switch__OtherPtags_7,
  MR_String * ll_backend__tag_switch__Comment_8)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;

    if ((ll_backend__tag_switch__OtherPtags_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String ll_backend__tag_switch__V_21_21;

        {
          ll_backend__tag_switch__V_21_21 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__MainPtag_6);
        }
        {
          *ll_backend__tag_switch__Comment_8 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__BaseStr_5, ll_backend__tag_switch__V_21_21);
        }
      }
    else
      {
        MR_String ll_backend__tag_switch__V_11_11;
        MR_String ll_backend__tag_switch__V_12_12;
        MR_String ll_backend__tag_switch__V_13_13;
        MR_String ll_backend__tag_switch__V_15_15;
        MR_String ll_backend__tag_switch__V_16_16;
        MR_Word ll_backend__tag_switch__V_18_18;

        {
          ll_backend__tag_switch__V_12_12 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__MainPtag_6);
        }
        {
          ll_backend__tag_switch__V_18_18 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__tag_switch_scalar_common_1[5], ll_backend__tag_switch__OtherPtags_7);
        }
        {
          ll_backend__tag_switch__V_16_16 = mercury__string__join_list_2_f_0((MR_String) ", ", ll_backend__tag_switch__V_18_18);
        }
        {
          ll_backend__tag_switch__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__V_16_16, (MR_String) ")");
        }
        {
          ll_backend__tag_switch__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "(shared with ", ll_backend__tag_switch__V_15_15);
        }
        {
          ll_backend__tag_switch__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__V_12_12, ll_backend__tag_switch__V_13_13);
        }
        {
          *ll_backend__tag_switch__Comment_8 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__BaseStr_5, ll_backend__tag_switch__V_11_11);
        }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2(
  MR_Box ll_backend__tag_switch__closure_arg,
  MR_Box ll_backend__tag_switch__wrapper_arg_1)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

    {
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__975__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__tag_switch__wrapper_arg_1));
    }
    return ll_backend__tag_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

    {
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__964__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
    return ll_backend__tag_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(
  MR_Word ll_backend__tag_switch__StagGoals_11,
  MR_Integer ll_backend__tag_switch__MinStag_12,
  MR_Integer ll_backend__tag_switch__MaxStag_13,
  MR_Word ll_backend__tag_switch__StagRval_14,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_15,
  MR_Word * ll_backend__tag_switch__Code_16,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_51,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_52)
{
  {
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MinStag_12 == ll_backend__tag_switch__MaxStag_13);

    if (ll_backend__tag_switch__succeeded)
      {
        if ((ll_backend__tag_switch__StagGoals_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            if ((ll_backend__tag_switch__MaybeFailLabel_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  *ll_backend__tag_switch__Code_16 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
              }
            else
              {
                MR_Word ll_backend__tag_switch__FailLabel_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_15, (MR_Integer) 0)));
                MR_String ll_backend__tag_switch__StagStr_21;
                MR_String ll_backend__tag_switch__Comment_22;
                MR_Word ll_backend__tag_switch__V_65_65;
                MR_Word ll_backend__tag_switch__V_66_66;
                MR_Word ll_backend__tag_switch__V_67_67;

                {
                  mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MinStag_12, &ll_backend__tag_switch__StagStr_21);
                }
                {
                  ll_backend__tag_switch__Comment_22 = mercury__string__f_43_43_2_f_0((MR_String) "no code for ptag ", ll_backend__tag_switch__StagStr_21);
                }
                {
                  ll_backend__tag_switch__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_67_67, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_20));
                }
                {
                  ll_backend__tag_switch__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_66_66, 1) = ((MR_Box) (ll_backend__tag_switch__V_67_67));
                }
                {
                  ll_backend__tag_switch__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_65_65, 0) = ((MR_Box) (ll_backend__tag_switch__V_66_66));
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_65_65, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_22));
                }
                {
                  *ll_backend__tag_switch__Code_16 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_65_65)));
                }
              }
            *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49;
          }
        else
          {
            MR_Word ll_backend__tag_switch__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagGoals_11, (MR_Integer) 1)));
            MR_Word ll_backend__tag_switch__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagGoals_11, (MR_Integer) 0)));

            if ((ll_backend__tag_switch__V_100_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Integer ll_backend__tag_switch__CurSecPrime_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_101_101, (MR_Integer) 0)));
                MR_Word ll_backend__tag_switch__CaseLabel_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_101_101, (MR_Integer) 1)));
                MR_Word ll_backend__tag_switch__V_59_59;

                {
                  ll_backend__tag_switch__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[3]));
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1));
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 3) = ((MR_Box) (ll_backend__tag_switch__MinStag_12));
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 4) = ((MR_Box) (ll_backend__tag_switch__CurSecPrime_23));
                }
                {
                  mercury__require__expect_4_p_0(ll_backend__tag_switch__V_59_59, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", (MR_String) "cur_secondary mismatch");
                }
                {
                  ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_24, ll_backend__tag_switch__Code_16, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50);
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", (MR_String) "goallist not singleton or empty when binary search ends");
                  return;
                }
              }
          }
        *ll_backend__tag_switch__STATE_VARIABLE_CI_52 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_51;
      }
    else
      {
        MR_Word ll_backend__tag_switch__TypeCtorInfo_99_99;
        MR_Integer ll_backend__tag_switch__LowRangeEnd_28;
        MR_Integer ll_backend__tag_switch__HighRangeStart_29;
        MR_Word ll_backend__tag_switch__InLowGroup_30;
        MR_Word ll_backend__tag_switch__LowGoals_34;
        MR_Word ll_backend__tag_switch__HighGoals_35;
        MR_Word ll_backend__tag_switch__NewLabel_36;
        MR_String ll_backend__tag_switch__LowStartStr_37;
        MR_String ll_backend__tag_switch__LowEndStr_38;
        MR_String ll_backend__tag_switch__HighStartStr_39;
        MR_String ll_backend__tag_switch__HighEndStr_40;
        MR_String ll_backend__tag_switch__IfComment_41;
        MR_String ll_backend__tag_switch__LabelComment_42;
        MR_Word ll_backend__tag_switch__LowRangeEndConst_43;
        MR_Word ll_backend__tag_switch__TestRval_44;
        MR_Word ll_backend__tag_switch__IfCode_45;
        MR_Word ll_backend__tag_switch__LabelCode_46;
        MR_Word ll_backend__tag_switch__LowRangeCode_47;
        MR_Word ll_backend__tag_switch__HighRangeCode_48;
        MR_Integer ll_backend__tag_switch__V_68_68 = (ll_backend__tag_switch__MinStag_12 + ll_backend__tag_switch__MaxStag_13);
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_72_72;
        MR_String ll_backend__tag_switch__V_74_74;
        MR_String ll_backend__tag_switch__V_75_75;
        MR_String ll_backend__tag_switch__V_78_78;
        MR_String ll_backend__tag_switch__V_79_79;
        MR_Word ll_backend__tag_switch__V_81_81;
        MR_Word ll_backend__tag_switch__V_83_83;
        MR_Word ll_backend__tag_switch__V_84_84;
        MR_Word ll_backend__tag_switch__V_85_85;
        MR_Word ll_backend__tag_switch__V_86_86;
        MR_Word ll_backend__tag_switch__V_87_87;
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_88_88;
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_89_89;
        MR_Word ll_backend__tag_switch__V_92_92;
        MR_Word ll_backend__tag_switch__V_93_93;

        {
          ll_backend__tag_switch__LowRangeEnd_28 = mercury__int__f_47_47_2_f_0(ll_backend__tag_switch__V_68_68, (MR_Integer) 2);
        }
        ll_backend__tag_switch__HighRangeStart_29 = (ll_backend__tag_switch__LowRangeEnd_28 + (MR_Integer) 1);
        {
          ll_backend__tag_switch__InLowGroup_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_30, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[7]));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_30, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_30, 3) = ((MR_Box) (ll_backend__tag_switch__LowRangeEnd_28));
        }
        {
          mercury__list__filter_4_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[2], ll_backend__tag_switch__InLowGroup_30, ll_backend__tag_switch__StagGoals_11, &ll_backend__tag_switch__LowGoals_34, &ll_backend__tag_switch__HighGoals_35);
        }
        {
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__NewLabel_36, ll_backend__tag_switch__STATE_VARIABLE_CI_0_51, &ll_backend__tag_switch__STATE_VARIABLE_CI_72_72);
        }
        {
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MinStag_12, &ll_backend__tag_switch__LowStartStr_37);
        }
        {
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__LowRangeEnd_28, &ll_backend__tag_switch__LowEndStr_38);
        }
        {
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__HighRangeStart_29, &ll_backend__tag_switch__HighStartStr_39);
        }
        {
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MaxStag_13, &ll_backend__tag_switch__HighEndStr_40);
        }
        {
          ll_backend__tag_switch__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) " to ", ll_backend__tag_switch__LowEndStr_38);
        }
        {
          ll_backend__tag_switch__V_74_74 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__LowStartStr_37, ll_backend__tag_switch__V_75_75);
        }
        {
          ll_backend__tag_switch__IfComment_41 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough for stags ", ll_backend__tag_switch__V_74_74);
        }
        {
          ll_backend__tag_switch__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) " to ", ll_backend__tag_switch__HighEndStr_40);
        }
        {
          ll_backend__tag_switch__V_78_78 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__HighStartStr_39, ll_backend__tag_switch__V_79_79);
        }
        {
          ll_backend__tag_switch__LabelComment_42 = mercury__string__f_43_43_2_f_0((MR_String) "code for stags ", ll_backend__tag_switch__V_78_78);
        }
        {
          ll_backend__tag_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_81_81, 0) = ((MR_Box) (ll_backend__tag_switch__LowRangeEnd_28));
        }
        {
          ll_backend__tag_switch__LowRangeEndConst_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__LowRangeEndConst_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__LowRangeEndConst_43, 1) = ((MR_Box) (ll_backend__tag_switch__V_81_81));
        }
        {
          ll_backend__tag_switch__TestRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_44, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_14));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_44, 3) = ((MR_Box) (ll_backend__tag_switch__LowRangeEndConst_43));
        }
        ll_backend__tag_switch__TypeCtorInfo_99_99 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        {
          ll_backend__tag_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_85_85, 0) = ((MR_Box) (ll_backend__tag_switch__NewLabel_36));
        }
        {
          ll_backend__tag_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 1) = ((MR_Box) (ll_backend__tag_switch__TestRval_44));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 2) = ((MR_Box) (ll_backend__tag_switch__V_85_85));
        }
        {
          ll_backend__tag_switch__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_83_83, 0) = ((MR_Box) (ll_backend__tag_switch__V_84_84));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_83_83, 1) = ((MR_Box) (ll_backend__tag_switch__IfComment_41));
        }
        {
          ll_backend__tag_switch__IfCode_45 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ((MR_Box) (ll_backend__tag_switch__V_83_83)));
        }
        {
          ll_backend__tag_switch__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_87_87, 1) = ((MR_Box) (ll_backend__tag_switch__NewLabel_36));
        }
        {
          ll_backend__tag_switch__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_86_86, 0) = ((MR_Box) (ll_backend__tag_switch__V_87_87));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_86_86, 1) = ((MR_Box) (ll_backend__tag_switch__LabelComment_42));
        }
        {
          ll_backend__tag_switch__LabelCode_46 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ((MR_Box) (ll_backend__tag_switch__V_86_86)));
        }
        {
          ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(ll_backend__tag_switch__LowGoals_34, ll_backend__tag_switch__MinStag_12, ll_backend__tag_switch__LowRangeEnd_28, ll_backend__tag_switch__StagRval_14, ll_backend__tag_switch__MaybeFailLabel_15, &ll_backend__tag_switch__LowRangeCode_47, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_88_88, ll_backend__tag_switch__STATE_VARIABLE_CI_72_72, &ll_backend__tag_switch__STATE_VARIABLE_CI_89_89);
        }
        {
          ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(ll_backend__tag_switch__HighGoals_35, ll_backend__tag_switch__HighRangeStart_29, ll_backend__tag_switch__MaxStag_13, ll_backend__tag_switch__StagRval_14, ll_backend__tag_switch__MaybeFailLabel_15, &ll_backend__tag_switch__HighRangeCode_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_88_88, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50, ll_backend__tag_switch__STATE_VARIABLE_CI_89_89, ll_backend__tag_switch__STATE_VARIABLE_CI_52);
        }
        {
          ll_backend__tag_switch__V_93_93 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ll_backend__tag_switch__LabelCode_46, ll_backend__tag_switch__HighRangeCode_48);
        }
        {
          ll_backend__tag_switch__V_92_92 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ll_backend__tag_switch__LowRangeCode_47, ll_backend__tag_switch__V_93_93);
        }
        {
          *ll_backend__tag_switch__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ll_backend__tag_switch__IfCode_45, ll_backend__tag_switch__V_92_92);
        }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

    {
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__917__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
    return ll_backend__tag_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(
  MR_Word ll_backend__tag_switch__CaseList_6,
  MR_Integer ll_backend__tag_switch__CurSecondary_7,
  MR_Integer ll_backend__tag_switch__MaxSecondary_8,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_9,
  MR_Word * ll_backend__tag_switch__Targets_10)
{
  {
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CurSecondary_7 > ll_backend__tag_switch__MaxSecondary_8);

    if (ll_backend__tag_switch__succeeded)
      {
        MR_Word ll_backend__tag_switch__V_15_15;

        {
          ll_backend__tag_switch__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[6]));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 3) = ((MR_Box) (ll_backend__tag_switch__CaseList_6));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__expect_4_p_0(ll_backend__tag_switch__V_15_15, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_jump_table\'/5", (MR_String) "caselist not empty when reaching limiting secondary tag");
        }
        *ll_backend__tag_switch__Targets_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Integer ll_backend__tag_switch__NextSecondary_11 = (ll_backend__tag_switch__CurSecondary_7 + (MR_Integer) 1);
        MR_Word ll_backend__tag_switch__CaseLabel_12;
        MR_Word ll_backend__tag_switch__CaseListTail_13;
        MR_Word ll_backend__tag_switch__V_21_21;
        MR_Integer ll_backend__tag_switch__V_25_25;

        ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__CaseList_6)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__tag_switch__succeeded)
          {
            ll_backend__tag_switch__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__CaseList_6, (MR_Integer) 0)));
            ll_backend__tag_switch__CaseListTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__CaseList_6, (MR_Integer) 1)));
            ll_backend__tag_switch__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_21_21, (MR_Integer) 0)));
            ll_backend__tag_switch__CaseLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_21_21, (MR_Integer) 1)));
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CurSecondary_7 == ll_backend__tag_switch__V_25_25);
          }
        if (ll_backend__tag_switch__succeeded)
          {
            MR_Word ll_backend__tag_switch__OtherTargets_14;
            MR_Word ll_backend__tag_switch__V_22_22;

            {
              ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(ll_backend__tag_switch__CaseListTail_13, ll_backend__tag_switch__NextSecondary_11, ll_backend__tag_switch__MaxSecondary_8, ll_backend__tag_switch__MaybeFailLabel_9, &ll_backend__tag_switch__OtherTargets_14);
            }
            {
              ll_backend__tag_switch__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_22_22, 0) = ((MR_Box) (ll_backend__tag_switch__CaseLabel_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__tag_switch__Targets_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__tag_switch__V_22_22));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__tag_switch__OtherTargets_14));
            }
          }
        else
          {
            MR_Word ll_backend__tag_switch__OtherTargets_23;

            {
              ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(ll_backend__tag_switch__CaseList_6, ll_backend__tag_switch__NextSecondary_11, ll_backend__tag_switch__MaxSecondary_8, ll_backend__tag_switch__MaybeFailLabel_9, &ll_backend__tag_switch__OtherTargets_23);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__tag_switch__Targets_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__tag_switch__MaybeFailLabel_9));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__tag_switch__OtherTargets_23));
            }
          }
      }
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
  MR_Word ll_backend__tag_switch__StagRval_2,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_3,
  MR_Word ll_backend__tag_switch__PrevTestsCode0_4,
  MR_Word * ll_backend__tag_switch__Code_5,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__tag_switch__succeeded;

        if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_try_chain\'/7", (MR_String) "empty switch");
              return;
            }
          }
        else
          {
            MR_Word ll_backend__tag_switch__Case_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__tag_switch__Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ll_backend__tag_switch__Secondary_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Case_18, (MR_Integer) 0)));
            MR_Word ll_backend__tag_switch__CaseLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Case_18, (MR_Integer) 1)));

            if ((ll_backend__tag_switch__Cases_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              if ((ll_backend__tag_switch__MaybeFailLabel_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word ll_backend__tag_switch__ThisCode_32;

                  {
                    ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_26, &ll_backend__tag_switch__ThisCode_32, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_7);
                  }
                  {
                    *ll_backend__tag_switch__Code_5 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__tag_switch__PrevTestsCode0_4, ll_backend__tag_switch__ThisCode_32);
                  }
                }
              else
                {
                  MR_Word ll_backend__tag_switch__TypeCtorInfo_44_44;
                  MR_Word ll_backend__tag_switch__TypeCtorInfo_29_68;
                  MR_Word ll_backend__tag_switch__FailLabel_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_3, (MR_Integer) 0)));
                  MR_Word ll_backend__tag_switch__FailCode_31;
                  MR_Word ll_backend__tag_switch__V_36_36;
                  MR_Word ll_backend__tag_switch__V_37_37;
                  MR_Word ll_backend__tag_switch__V_38_38;
                  MR_Word ll_backend__tag_switch__PrevTestsCode1_41;
                  MR_Word ll_backend__tag_switch__CaseInfo0_52;
                  MR_String ll_backend__tag_switch__Comment_53;
                  MR_Word ll_backend__tag_switch__TestCode_56;
                  MR_Word ll_backend__tag_switch__V_57_57;
                  MR_Word ll_backend__tag_switch__V_58_58;
                  MR_Word ll_backend__tag_switch__V_59_59;
                  MR_Word ll_backend__tag_switch__V_61_61;
                  MR_Word ll_backend__tag_switch__V_62_62;
                  MR_Word ll_backend__tag_switch__V_63_63;
                  MR_String ll_backend__tag_switch__V_64_64;
                  MR_Box ll_backend__tag_switch__conv0_CaseInfo0_52;
                  MR_Word ll_backend__tag_switch___CaseCode_54;
                  MR_Word ll_backend__tag_switch___CaseGenerated_55;

                  {
                    mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6, ((MR_Box) (ll_backend__tag_switch__CaseLabel_26)), &ll_backend__tag_switch__conv0_CaseInfo0_52);
                  }
                  ll_backend__tag_switch__CaseInfo0_52 = ((MR_Word) ll_backend__tag_switch__conv0_CaseInfo0_52);
                  ll_backend__tag_switch__Comment_53 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_52, (MR_Integer) 0)));
                  ll_backend__tag_switch___CaseCode_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_52, (MR_Integer) 1)));
                  ll_backend__tag_switch___CaseGenerated_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_52, (MR_Integer) 2)));
                  ll_backend__tag_switch__TypeCtorInfo_29_68 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                  {
                    ll_backend__tag_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_62_62, 0) = ((MR_Box) (ll_backend__tag_switch__Secondary_25));
                  }
                  {
                    ll_backend__tag_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 1) = ((MR_Box) (ll_backend__tag_switch__V_62_62));
                  }
                  {
                    ll_backend__tag_switch__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_59_59, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_2));
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_59_59, 3) = ((MR_Box) (ll_backend__tag_switch__V_61_61));
                  }
                  {
                    ll_backend__tag_switch__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_63_63, 0) = ((MR_Box) (ll_backend__tag_switch__CaseLabel_26));
                  }
                  {
                    ll_backend__tag_switch__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 1) = ((MR_Box) (ll_backend__tag_switch__V_59_59));
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 2) = ((MR_Box) (ll_backend__tag_switch__V_63_63));
                  }
                  {
                    ll_backend__tag_switch__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) "test sec tag only for ", ll_backend__tag_switch__Comment_53);
                  }
                  {
                    ll_backend__tag_switch__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_57_57, 0) = ((MR_Box) (ll_backend__tag_switch__V_58_58));
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_57_57, 1) = ((MR_Box) (ll_backend__tag_switch__V_64_64));
                  }
                  {
                    ll_backend__tag_switch__TestCode_56 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_29_68, ((MR_Box) (ll_backend__tag_switch__V_57_57)));
                  }
                  {
                    ll_backend__tag_switch__PrevTestsCode1_41 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_29_68, ll_backend__tag_switch__PrevTestsCode0_4, ll_backend__tag_switch__TestCode_56);
                  }
                  ll_backend__tag_switch__TypeCtorInfo_44_44 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                  {
                    ll_backend__tag_switch__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_38_38, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_30));
                  }
                  {
                    ll_backend__tag_switch__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_37_37, 1) = ((MR_Box) (ll_backend__tag_switch__V_38_38));
                  }
                  {
                    ll_backend__tag_switch__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_36_36, 0) = ((MR_Box) (ll_backend__tag_switch__V_37_37));
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_36_36, 1) = ((MR_Box) ((MR_String) "secondary tag with no code to handle it"));
                  }
                  {
                    ll_backend__tag_switch__FailCode_31 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_44_44, ((MR_Box) (ll_backend__tag_switch__V_36_36)));
                  }
                  {
                    *ll_backend__tag_switch__Code_5 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_44_44, ll_backend__tag_switch__PrevTestsCode1_41, ll_backend__tag_switch__FailCode_31);
                  }
                  *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_7 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6;
                }
            else
              {
                MR_Word ll_backend__tag_switch__TypeCtorInfo_29_91;
                MR_Word ll_backend__tag_switch__PrevTestsCode1_29;
                MR_Word ll_backend__tag_switch__CaseInfo0_75;
                MR_String ll_backend__tag_switch__Comment_76;
                MR_Word ll_backend__tag_switch__TestCode_79;
                MR_Word ll_backend__tag_switch__V_80_80;
                MR_Word ll_backend__tag_switch__V_81_81;
                MR_Word ll_backend__tag_switch__V_82_82;
                MR_Word ll_backend__tag_switch__V_84_84;
                MR_Word ll_backend__tag_switch__V_85_85;
                MR_Word ll_backend__tag_switch__V_86_86;
                MR_String ll_backend__tag_switch__V_87_87;
                MR_Box ll_backend__tag_switch__conv1_CaseInfo0_75;
                MR_Word ll_backend__tag_switch___CaseCode_77;
                MR_Word ll_backend__tag_switch___CaseGenerated_78;

                {
                  mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6, ((MR_Box) (ll_backend__tag_switch__CaseLabel_26)), &ll_backend__tag_switch__conv1_CaseInfo0_75);
                }
                ll_backend__tag_switch__CaseInfo0_75 = ((MR_Word) ll_backend__tag_switch__conv1_CaseInfo0_75);
                ll_backend__tag_switch__Comment_76 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_75, (MR_Integer) 0)));
                ll_backend__tag_switch___CaseCode_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_75, (MR_Integer) 1)));
                ll_backend__tag_switch___CaseGenerated_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_75, (MR_Integer) 2)));
                ll_backend__tag_switch__TypeCtorInfo_29_91 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                {
                  ll_backend__tag_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_85_85, 0) = ((MR_Box) (ll_backend__tag_switch__Secondary_25));
                }
                {
                  ll_backend__tag_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 1) = ((MR_Box) (ll_backend__tag_switch__V_85_85));
                }
                {
                  ll_backend__tag_switch__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_82_82, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_2));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_82_82, 3) = ((MR_Box) (ll_backend__tag_switch__V_84_84));
                }
                {
                  ll_backend__tag_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_86_86, 0) = ((MR_Box) (ll_backend__tag_switch__CaseLabel_26));
                }
                {
                  ll_backend__tag_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 1) = ((MR_Box) (ll_backend__tag_switch__V_82_82));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 2) = ((MR_Box) (ll_backend__tag_switch__V_86_86));
                }
                {
                  ll_backend__tag_switch__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "test sec tag only for ", ll_backend__tag_switch__Comment_76);
                }
                {
                  ll_backend__tag_switch__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_80_80, 0) = ((MR_Box) (ll_backend__tag_switch__V_81_81));
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_80_80, 1) = ((MR_Box) (ll_backend__tag_switch__V_87_87));
                }
                {
                  ll_backend__tag_switch__TestCode_79 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_29_91, ((MR_Box) (ll_backend__tag_switch__V_80_80)));
                }
                {
                  ll_backend__tag_switch__PrevTestsCode1_29 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_29_91, ll_backend__tag_switch__PrevTestsCode0_4, ll_backend__tag_switch__TestCode_79);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__tag_switch__HeadVar__1__tmp_copy_1 = ll_backend__tag_switch__Cases_19;
                  MR_Word ll_backend__tag_switch__PrevTestsCode0__tmp_copy_4 = ll_backend__tag_switch__PrevTestsCode1_29;

                  ll_backend__tag_switch__PrevTestsCode0_4 = ll_backend__tag_switch__PrevTestsCode0__tmp_copy_4;
                  ll_backend__tag_switch__HeadVar__1_1 = ll_backend__tag_switch__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(
  MR_Word ll_backend__tag_switch__CaseLabel_9,
  MR_Word ll_backend__tag_switch__StagRval_10,
  MR_Integer ll_backend__tag_switch__Secondary_11,
  MR_Word * ll_backend__tag_switch__Code_12,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_19,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_20,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_21,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_22)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Word ll_backend__tag_switch__TypeCtorInfo_37_37;
    MR_Word ll_backend__tag_switch__CaseCode_15;
    MR_Word ll_backend__tag_switch__ElseLabel_16;
    MR_Word ll_backend__tag_switch__TestCode_17;
    MR_Word ll_backend__tag_switch__ElseLabelCode_18;
    MR_Word ll_backend__tag_switch__V_25_25;
    MR_Word ll_backend__tag_switch__V_26_26;
    MR_Word ll_backend__tag_switch__V_27_27;
    MR_Word ll_backend__tag_switch__V_29_29;
    MR_Word ll_backend__tag_switch__V_30_30;
    MR_Word ll_backend__tag_switch__V_31_31;
    MR_Word ll_backend__tag_switch__V_33_33;
    MR_Word ll_backend__tag_switch__V_34_34;
    MR_Word ll_backend__tag_switch__V_36_36;

    {
      ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_9, &ll_backend__tag_switch__CaseCode_15, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_19, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_20);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__ElseLabel_16, ll_backend__tag_switch__STATE_VARIABLE_CI_0_21, ll_backend__tag_switch__STATE_VARIABLE_CI_22);
    }
    ll_backend__tag_switch__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__tag_switch__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_30_30, 0) = ((MR_Box) (ll_backend__tag_switch__Secondary_11));
    }
    {
      ll_backend__tag_switch__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_29_29, 1) = ((MR_Box) (ll_backend__tag_switch__V_30_30));
    }
    {
      ll_backend__tag_switch__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_27_27, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_10));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_27_27, 3) = ((MR_Box) (ll_backend__tag_switch__V_29_29));
    }
    {
      ll_backend__tag_switch__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_31_31, 0) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_16));
    }
    {
      ll_backend__tag_switch__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_26_26, 1) = ((MR_Box) (ll_backend__tag_switch__V_27_27));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_26_26, 2) = ((MR_Box) (ll_backend__tag_switch__V_31_31));
    }
    {
      ll_backend__tag_switch__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_25_25, 0) = ((MR_Box) (ll_backend__tag_switch__V_26_26));
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_25_25, 1) = ((MR_Box) ((MR_String) "test sec tag only"));
    }
    {
      ll_backend__tag_switch__TestCode_17 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_37_37, ((MR_Box) (ll_backend__tag_switch__V_25_25)));
    }
    {
      ll_backend__tag_switch__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_34_34, 1) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_16));
    }
    {
      ll_backend__tag_switch__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_33_33, 0) = ((MR_Box) (ll_backend__tag_switch__V_34_34));
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_33_33, 1) = ((MR_Box) ((MR_String) "handle next secondary tag"));
    }
    {
      ll_backend__tag_switch__ElseLabelCode_18 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_37_37, ((MR_Box) (ll_backend__tag_switch__V_33_33)));
    }
    {
      ll_backend__tag_switch__V_36_36 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_37_37, ll_backend__tag_switch__CaseCode_15, ll_backend__tag_switch__ElseLabelCode_18);
    }
    {
      *ll_backend__tag_switch__Code_12 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_37_37, ll_backend__tag_switch__TestCode_17, ll_backend__tag_switch__V_36_36);
    }
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
  MR_Word ll_backend__tag_switch__StagRval_2,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_3,
  MR_Word * ll_backend__tag_switch__Code_4,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_7,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_8)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;

    if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_try_me_else_chain\'/8", (MR_String) "empty switch");
          return;
        }
      }
    else
      {
        MR_Word ll_backend__tag_switch__Case_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__tag_switch__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer ll_backend__tag_switch__Secondary_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Case_21, (MR_Integer) 0)));
        MR_Word ll_backend__tag_switch__CaseLabel_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Case_21, (MR_Integer) 1)));

        if ((ll_backend__tag_switch__Cases_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((ll_backend__tag_switch__MaybeFailLabel_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_29, ll_backend__tag_switch__Code_4, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6);
              }
              *ll_backend__tag_switch__STATE_VARIABLE_CI_8 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_7;
            }
          else
            {
              MR_Word ll_backend__tag_switch__TypeCtorInfo_55_55;
              MR_Word ll_backend__tag_switch__TypeCtorInfo_37_84;
              MR_Word ll_backend__tag_switch__FailLabel_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_3, (MR_Integer) 0)));
              MR_Word ll_backend__tag_switch__FailCode_35;
              MR_Word ll_backend__tag_switch__V_43_43;
              MR_Word ll_backend__tag_switch__V_44_44;
              MR_Word ll_backend__tag_switch__V_45_45;
              MR_Word ll_backend__tag_switch__ThisCode_51;
              MR_Word ll_backend__tag_switch__CaseCode_66;
              MR_Word ll_backend__tag_switch__ElseLabel_67;
              MR_Word ll_backend__tag_switch__TestCode_68;
              MR_Word ll_backend__tag_switch__ElseLabelCode_69;
              MR_Word ll_backend__tag_switch__V_72_72;
              MR_Word ll_backend__tag_switch__V_73_73;
              MR_Word ll_backend__tag_switch__V_74_74;
              MR_Word ll_backend__tag_switch__V_76_76;
              MR_Word ll_backend__tag_switch__V_77_77;
              MR_Word ll_backend__tag_switch__V_78_78;
              MR_Word ll_backend__tag_switch__V_80_80;
              MR_Word ll_backend__tag_switch__V_81_81;
              MR_Word ll_backend__tag_switch__V_83_83;

              {
                ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_29, &ll_backend__tag_switch__CaseCode_66, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6);
              }
              {
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__ElseLabel_67, ll_backend__tag_switch__STATE_VARIABLE_CI_0_7, ll_backend__tag_switch__STATE_VARIABLE_CI_8);
              }
              ll_backend__tag_switch__TypeCtorInfo_37_84 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              {
                ll_backend__tag_switch__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_77_77, 0) = ((MR_Box) (ll_backend__tag_switch__Secondary_28));
              }
              {
                ll_backend__tag_switch__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_76_76, 1) = ((MR_Box) (ll_backend__tag_switch__V_77_77));
              }
              {
                ll_backend__tag_switch__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_74_74, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_2));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_74_74, 3) = ((MR_Box) (ll_backend__tag_switch__V_76_76));
              }
              {
                ll_backend__tag_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_78_78, 0) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_67));
              }
              {
                ll_backend__tag_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_73_73, 1) = ((MR_Box) (ll_backend__tag_switch__V_74_74));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_73_73, 2) = ((MR_Box) (ll_backend__tag_switch__V_78_78));
              }
              {
                ll_backend__tag_switch__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_72_72, 0) = ((MR_Box) (ll_backend__tag_switch__V_73_73));
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_72_72, 1) = ((MR_Box) ((MR_String) "test sec tag only"));
              }
              {
                ll_backend__tag_switch__TestCode_68 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_37_84, ((MR_Box) (ll_backend__tag_switch__V_72_72)));
              }
              {
                ll_backend__tag_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 1) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_67));
              }
              {
                ll_backend__tag_switch__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_80_80, 0) = ((MR_Box) (ll_backend__tag_switch__V_81_81));
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_80_80, 1) = ((MR_Box) ((MR_String) "handle next secondary tag"));
              }
              {
                ll_backend__tag_switch__ElseLabelCode_69 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_37_84, ((MR_Box) (ll_backend__tag_switch__V_80_80)));
              }
              {
                ll_backend__tag_switch__V_83_83 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_37_84, ll_backend__tag_switch__CaseCode_66, ll_backend__tag_switch__ElseLabelCode_69);
              }
              {
                ll_backend__tag_switch__ThisCode_51 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_37_84, ll_backend__tag_switch__TestCode_68, ll_backend__tag_switch__V_83_83);
              }
              ll_backend__tag_switch__TypeCtorInfo_55_55 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              {
                ll_backend__tag_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_45_45, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_34));
              }
              {
                ll_backend__tag_switch__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 1) = ((MR_Box) (ll_backend__tag_switch__V_45_45));
              }
              {
                ll_backend__tag_switch__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_43_43, 0) = ((MR_Box) (ll_backend__tag_switch__V_44_44));
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_43_43, 1) = ((MR_Box) ((MR_String) "secondary tag does not match"));
              }
              {
                ll_backend__tag_switch__FailCode_35 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_55_55, ((MR_Box) (ll_backend__tag_switch__V_43_43)));
              }
              {
                *ll_backend__tag_switch__Code_4 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_55_55, ll_backend__tag_switch__ThisCode_51, ll_backend__tag_switch__FailCode_35);
              }
            }
        else
          {
            MR_Word ll_backend__tag_switch__ThisCode_32;
            MR_Word ll_backend__tag_switch__OtherCode_33;
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_47_47;
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_48_48;

            {
              ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(ll_backend__tag_switch__CaseLabel_29, ll_backend__tag_switch__StagRval_2, ll_backend__tag_switch__Secondary_28, &ll_backend__tag_switch__ThisCode_32, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_47_47, ll_backend__tag_switch__STATE_VARIABLE_CI_0_7, &ll_backend__tag_switch__STATE_VARIABLE_CI_48_48);
            }
            {
              ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(ll_backend__tag_switch__Cases_22, ll_backend__tag_switch__StagRval_2, ll_backend__tag_switch__MaybeFailLabel_3, &ll_backend__tag_switch__OtherCode_33, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_47_47, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6, ll_backend__tag_switch__STATE_VARIABLE_CI_48_48, ll_backend__tag_switch__STATE_VARIABLE_CI_8);
            }
            {
              *ll_backend__tag_switch__Code_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__tag_switch__ThisCode_32, ll_backend__tag_switch__OtherCode_33);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

    {
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__702__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
    return ll_backend__tag_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0(
  MR_Word ll_backend__tag_switch__StagGoalMap_14,
  MR_Integer ll_backend__tag_switch__MainPtag_15,
  MR_Word ll_backend__tag_switch__OtherPtags_16,
  MR_Integer ll_backend__tag_switch__MaxSecondary_17,
  MR_Word ll_backend__tag_switch__StagReg_18,
  MR_Word ll_backend__tag_switch__StagLoc_19,
  MR_Word ll_backend__tag_switch__Rval_20,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_21,
  MR_Word * ll_backend__tag_switch__Code_22,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_50,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_51)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Word ll_backend__tag_switch__StagGoalList_25;

    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__tag_switch__StagGoalMap_14, &ll_backend__tag_switch__StagGoalList_25);
    }
    switch (ll_backend__tag_switch__StagLoc_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_Word ll_backend__tag_switch__Globals_31;
          MR_Integer ll_backend__tag_switch__DenseSwitchSize_32;
          MR_Integer ll_backend__tag_switch__BinarySwitchSize_33;
          MR_Integer ll_backend__tag_switch__TrySwitchSize_34;
          MR_Word ll_backend__tag_switch__OrigStagRval_36;
          MR_String ll_backend__tag_switch__Comment_37;
          MR_Word ll_backend__tag_switch__MaybeSecFailLabel_45;
          MR_Word ll_backend__tag_switch__V_52_52;

          {
            ll_backend__tag_switch__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[5]));
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1));
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 3) = ((MR_Box) (ll_backend__tag_switch__OtherPtags_16));
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            mercury__require__expect_4_p_0(ll_backend__tag_switch__V_52_52, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) ">1 ptag with secondary tag");
          }
          {
            ll_backend__code_info__get_globals_2_p_0(ll_backend__tag_switch__STATE_VARIABLE_CI_0_50, &ll_backend__tag_switch__Globals_31);
          }
          {
            libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_31, (MR_Integer) 430, &ll_backend__tag_switch__DenseSwitchSize_32);
          }
          {
            libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_31, (MR_Integer) 437, &ll_backend__tag_switch__BinarySwitchSize_33);
          }
          {
            libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_31, (MR_Integer) 436, &ll_backend__tag_switch__TrySwitchSize_34);
          }
          switch (ll_backend__tag_switch__StagLoc_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                {
                  ll_backend__tag_switch__OrigStagRval_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__OrigStagRval_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__OrigStagRval_36, 1) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__OrigStagRval_36, 2) = ((MR_Box) (ll_backend__tag_switch__Rval_20));
                }
                ll_backend__tag_switch__Comment_37 = (MR_String) "compute local sec tag to switch on";
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ll_backend__tag_switch__V_61_61;
                MR_Word ll_backend__tag_switch__V_62_62;

                {
                  ll_backend__tag_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_62_62, 0) = ((MR_Box) (ll_backend__tag_switch__MainPtag_15));
                }
                {
                  ll_backend__tag_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 1) = ((MR_Box) (ll_backend__tag_switch__V_62_62));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 2) = ((MR_Box) (ll_backend__tag_switch__Rval_20));
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[8])));
                }
                {
                  ll_backend__tag_switch__OrigStagRval_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__OrigStagRval_36, 0) = ((MR_Box) (ll_backend__tag_switch__V_61_61));
                }
                ll_backend__tag_switch__Comment_37 = (MR_String) "compute remote sec tag to switch on";
              }
              break;
          }
          if ((ll_backend__tag_switch__MaybeFailLabel_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            ll_backend__tag_switch__MaybeSecFailLabel_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              MR_Integer ll_backend__tag_switch__StagGoalCount_43;
              MR_Integer ll_backend__tag_switch__FullGoalCount_44;

              {
                mercury__list__length_2_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[2], ll_backend__tag_switch__StagGoalList_25, &ll_backend__tag_switch__StagGoalCount_43);
              }
              ll_backend__tag_switch__FullGoalCount_44 = (ll_backend__tag_switch__MaxSecondary_17 + (MR_Integer) 1);
              ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__FullGoalCount_44 == ll_backend__tag_switch__StagGoalCount_43);
              if (ll_backend__tag_switch__succeeded)
                ll_backend__tag_switch__MaybeSecFailLabel_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                ll_backend__tag_switch__MaybeSecFailLabel_45 = ll_backend__tag_switch__MaybeFailLabel_21;
            }
          ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MaxSecondary_17 >= ll_backend__tag_switch__DenseSwitchSize_32);
          if (ll_backend__tag_switch__succeeded)
            {
              MR_Word ll_backend__tag_switch__Targets_46;
              MR_Word ll_backend__tag_switch__V_83_83;
              MR_Word ll_backend__tag_switch__V_84_84;
              MR_Word ll_backend__tag_switch__StagCode_111;

              {
                ll_backend__tag_switch__StagCode_111 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              {
                ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(ll_backend__tag_switch__StagGoalList_25, (MR_Integer) 0, ll_backend__tag_switch__MaxSecondary_17, ll_backend__tag_switch__MaybeSecFailLabel_45, &ll_backend__tag_switch__Targets_46);
              }
              {
                ll_backend__tag_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 1) = ((MR_Box) (ll_backend__tag_switch__OrigStagRval_36));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 2) = ((MR_Box) (ll_backend__tag_switch__Targets_46));
              }
              {
                ll_backend__tag_switch__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_83_83, 0) = ((MR_Box) (ll_backend__tag_switch__V_84_84));
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_83_83, 1) = ((MR_Box) ((MR_String) "switch on secondary tag"));
              }
              {
                *ll_backend__tag_switch__Code_22 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_83_83)));
              }
              *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48;
              *ll_backend__tag_switch__STATE_VARIABLE_CI_51 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_50;
            }
          else
            {
              MR_Word ll_backend__tag_switch__StagCode_122;
              MR_Word ll_backend__tag_switch__StagRval_123;
              MR_Integer ll_backend__tag_switch__NumRealRegs_38;
              MR_Word ll_backend__tag_switch__V_67_67;

              ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MaxSecondary_17 >= (MR_Integer) 2);
              if (ll_backend__tag_switch__succeeded)
                {
                  ll_backend__tag_switch__V_67_67 = (MR_Integer) 305;
                  {
                    libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_31, ll_backend__tag_switch__V_67_67, &ll_backend__tag_switch__NumRealRegs_38);
                  }
                  ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__NumRealRegs_38 == (MR_Integer) 0);
                  if (!(ll_backend__tag_switch__succeeded))
                    {
                      MR_Integer ll_backend__tag_switch__StagRegNo_39;
                      MR_Word ll_backend__tag_switch__V_68_68;

                      ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__StagReg_18)) == (MR_mktag((MR_Integer) 1)));
                      if (ll_backend__tag_switch__succeeded)
                        {
                          ll_backend__tag_switch__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagReg_18, (MR_Integer) 0)));
                          ll_backend__tag_switch__StagRegNo_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagReg_18, (MR_Integer) 1)));
                          ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__V_68_68 == (MR_Integer) 0);
                        }
                      if (ll_backend__tag_switch__succeeded)
                        ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagRegNo_39 <= ll_backend__tag_switch__NumRealRegs_38);
                      else
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "improper reg in tag switch");
                            return;
                          }
                          ll_backend__tag_switch__succeeded = MR_TRUE;
                        }
                    }
                }
              if (ll_backend__tag_switch__succeeded)
                {
                  MR_Word ll_backend__tag_switch__V_113_113;
                  MR_Word ll_backend__tag_switch__V_114_114;

                  {
                    ll_backend__tag_switch__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_114_114, 1) = ((MR_Box) (ll_backend__tag_switch__StagReg_18));
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_114_114, 2) = ((MR_Box) (ll_backend__tag_switch__OrigStagRval_36));
                  }
                  {
                    ll_backend__tag_switch__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_113_113, 0) = ((MR_Box) (ll_backend__tag_switch__V_114_114));
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_113_113, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_37));
                  }
                  {
                    ll_backend__tag_switch__StagCode_122 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_113_113)));
                  }
                  {
                    ll_backend__tag_switch__StagRval_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__StagRval_123, 0) = ((MR_Box) (ll_backend__tag_switch__StagReg_18));
                  }
                }
              else
                {
                  {
                    ll_backend__tag_switch__StagCode_122 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  ll_backend__tag_switch__StagRval_123 = ll_backend__tag_switch__OrigStagRval_36;
                }
              ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MaxSecondary_17 >= ll_backend__tag_switch__BinarySwitchSize_33);
              if (ll_backend__tag_switch__succeeded)
                {
                  {
                    ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(ll_backend__tag_switch__StagGoalList_25, (MR_Integer) 0, ll_backend__tag_switch__MaxSecondary_17, ll_backend__tag_switch__StagRval_123, ll_backend__tag_switch__MaybeSecFailLabel_45, ll_backend__tag_switch__Code_22, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49, ll_backend__tag_switch__STATE_VARIABLE_CI_0_50, ll_backend__tag_switch__STATE_VARIABLE_CI_51);
                  }
                }
              else
                {
                  ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MaxSecondary_17 >= ll_backend__tag_switch__TrySwitchSize_34);
                  if (ll_backend__tag_switch__succeeded)
                    {
                      MR_Word ll_backend__tag_switch__TypeCtorInfo_107_107 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                      MR_Word ll_backend__tag_switch__Codes_47;
                      MR_Word ll_backend__tag_switch__V_77_77;

                      {
                        ll_backend__tag_switch__V_77_77 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_107_107);
                      }
                      {
                        ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(ll_backend__tag_switch__StagGoalList_25, ll_backend__tag_switch__StagRval_123, ll_backend__tag_switch__MaybeSecFailLabel_45, ll_backend__tag_switch__V_77_77, &ll_backend__tag_switch__Codes_47, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49);
                      }
                      {
                        *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_107_107, ll_backend__tag_switch__StagCode_122, ll_backend__tag_switch__Codes_47);
                      }
                      *ll_backend__tag_switch__STATE_VARIABLE_CI_51 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_50;
                    }
                  else
                    {
                      MR_Word ll_backend__tag_switch__Codes_99;

                      {
                        ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(ll_backend__tag_switch__StagGoalList_25, ll_backend__tag_switch__StagRval_123, ll_backend__tag_switch__MaybeSecFailLabel_45, &ll_backend__tag_switch__Codes_99, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49, ll_backend__tag_switch__STATE_VARIABLE_CI_0_50, ll_backend__tag_switch__STATE_VARIABLE_CI_51);
                      }
                      {
                        *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__tag_switch__StagCode_122, ll_backend__tag_switch__Codes_99);
                      }
                    }
                }
            }
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          if ((ll_backend__tag_switch__StagGoalList_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "no goal for non-shared tag");
                return;
              }
            }
          else
            {
              MR_Word ll_backend__tag_switch__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagGoalList_25, (MR_Integer) 1)));
              MR_Word ll_backend__tag_switch__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagGoalList_25, (MR_Integer) 0)));

              if ((ll_backend__tag_switch__V_109_109 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word ll_backend__tag_switch__CaseLabel_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_110_110, (MR_Integer) 1)));
                  MR_Integer ll_backend__tag_switch__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_110_110, (MR_Integer) 0)));

                  ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__V_91_91 == (MR_Integer) -1);
                  if (ll_backend__tag_switch__succeeded)
                    {
                      ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_27, ll_backend__tag_switch__Code_22, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49);
                    }
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "badly formed goal for non-shared tag");
                        return;
                      }
                    }
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "more than one goal for non-shared tag");
                    return;
                  }
                }
            }
          *ll_backend__tag_switch__STATE_VARIABLE_CI_51 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_50;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_3(
  MR_Box ll_backend__tag_switch__closure_arg,
  MR_Box ll_backend__tag_switch__wrapper_arg_1)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

    {
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__631__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__tag_switch__wrapper_arg_1));
    }
    return ll_backend__tag_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2(
  MR_Box ll_backend__tag_switch__closure_arg)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

    {
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__618__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
    return ll_backend__tag_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

    {
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__613__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
    return ll_backend__tag_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0(
  MR_Word ll_backend__tag_switch__PtagGroups_14,
  MR_Integer ll_backend__tag_switch__MinPtag_15,
  MR_Integer ll_backend__tag_switch__MaxPtag_16,
  MR_Word ll_backend__tag_switch__PtagRval_17,
  MR_Word ll_backend__tag_switch__StagReg_18,
  MR_Word ll_backend__tag_switch__VarRval_19,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_20,
  MR_Word ll_backend__tag_switch__PtagCountMap_21,
  MR_Word * ll_backend__tag_switch__Code_22,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_62,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_63)
{
  {
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MinPtag_15 == ll_backend__tag_switch__MaxPtag_16);

    if (ll_backend__tag_switch__succeeded)
      if ((ll_backend__tag_switch__PtagGroups_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          if ((ll_backend__tag_switch__MaybeFailLabel_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                *ll_backend__tag_switch__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
            }
          else
            {
              MR_Word ll_backend__tag_switch__FailLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_20, (MR_Integer) 0)));
              MR_String ll_backend__tag_switch__PtagStr_27;
              MR_String ll_backend__tag_switch__Comment_28;
              MR_Word ll_backend__tag_switch__V_82_82;
              MR_Word ll_backend__tag_switch__V_83_83;
              MR_Word ll_backend__tag_switch__V_84_84;

              {
                mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MinPtag_15, &ll_backend__tag_switch__PtagStr_27);
              }
              {
                ll_backend__tag_switch__Comment_28 = mercury__string__f_43_43_2_f_0((MR_String) "no code for ptag ", ll_backend__tag_switch__PtagStr_27);
              }
              {
                ll_backend__tag_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_84_84, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_26));
              }
              {
                ll_backend__tag_switch__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_83_83, 1) = ((MR_Box) (ll_backend__tag_switch__V_84_84));
              }
              {
                ll_backend__tag_switch__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_82_82, 0) = ((MR_Box) (ll_backend__tag_switch__V_83_83));
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_82_82, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_28));
              }
              {
                *ll_backend__tag_switch__Code_22 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_82_82)));
              }
            }
          *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60;
          *ll_backend__tag_switch__STATE_VARIABLE_CI_63 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_62;
        }
      else
        {
          MR_Word ll_backend__tag_switch__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagGroups_14, (MR_Integer) 1)));
          MR_Word ll_backend__tag_switch__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagGroups_14, (MR_Integer) 0)));

          if ((ll_backend__tag_switch__V_120_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Integer ll_backend__tag_switch__CurPrimaryPrime_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_121_121, (MR_Integer) 0)));
              MR_Word ll_backend__tag_switch__PrimaryInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_121_121, (MR_Integer) 1)));
              MR_Word ll_backend__tag_switch__StagLoc_31;
              MR_Word ll_backend__tag_switch__StagGoalMap_32;
              MR_Word ll_backend__tag_switch__CountInfo_33;
              MR_Word ll_backend__tag_switch__StagLocPrime_34;
              MR_Integer ll_backend__tag_switch__MaxSecondary_35;
              MR_Word ll_backend__tag_switch__V_70_70;
              MR_Word ll_backend__tag_switch__V_74_74;
              MR_Box ll_backend__tag_switch__conv0_CountInfo_33;

              {
                ll_backend__tag_switch__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[3]));
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1));
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 3) = ((MR_Box) (ll_backend__tag_switch__MinPtag_15));
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 4) = ((MR_Box) (ll_backend__tag_switch__CurPrimaryPrime_29));
              }
              {
                mercury__require__expect_4_p_0(ll_backend__tag_switch__V_70_70, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "cur_primary mismatch");
              }
              ll_backend__tag_switch__StagLoc_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PrimaryInfo_30, (MR_Integer) 0)));
              ll_backend__tag_switch__StagGoalMap_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PrimaryInfo_30, (MR_Integer) 1)));
              {
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[1], ll_backend__tag_switch__PtagCountMap_21, ll_backend__tag_switch__MinPtag_15, &ll_backend__tag_switch__conv0_CountInfo_33);
              }
              ll_backend__tag_switch__CountInfo_33 = ((MR_Word) ll_backend__tag_switch__conv0_CountInfo_33);
              ll_backend__tag_switch__StagLocPrime_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_33, (MR_Integer) 0)));
              ll_backend__tag_switch__MaxSecondary_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_33, (MR_Integer) 1)));
              {
                ll_backend__tag_switch__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2));
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 3) = ((MR_Box) (ll_backend__tag_switch__StagLoc_31));
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 4) = ((MR_Box) (ll_backend__tag_switch__StagLocPrime_34));
              }
              {
                mercury__require__expect_4_p_0(ll_backend__tag_switch__V_74_74, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "secondary tag locations differ");
              }
              {
                ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_32, ll_backend__tag_switch__MinPtag_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__tag_switch__MaxSecondary_35, ll_backend__tag_switch__StagReg_18, ll_backend__tag_switch__StagLoc_31, ll_backend__tag_switch__VarRval_19, ll_backend__tag_switch__MaybeFailLabel_20, ll_backend__tag_switch__Code_22, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61, ll_backend__tag_switch__STATE_VARIABLE_CI_0_62, ll_backend__tag_switch__STATE_VARIABLE_CI_63);
              }
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "caselist not singleton or empty when binary search ends");
                return;
              }
            }
        }
    else
      {
        MR_Word ll_backend__tag_switch__TypeCtorInfo_119_119;
        MR_Integer ll_backend__tag_switch__LowRangeEnd_39;
        MR_Integer ll_backend__tag_switch__HighRangeStart_40;
        MR_Word ll_backend__tag_switch__InLowGroup_41;
        MR_Word ll_backend__tag_switch__LowGroups_45;
        MR_Word ll_backend__tag_switch__HighGroups_46;
        MR_Word ll_backend__tag_switch__NewLabel_47;
        MR_String ll_backend__tag_switch__LowStartStr_48;
        MR_String ll_backend__tag_switch__LowEndStr_49;
        MR_String ll_backend__tag_switch__HighStartStr_50;
        MR_String ll_backend__tag_switch__HighEndStr_51;
        MR_String ll_backend__tag_switch__IfComment_52;
        MR_String ll_backend__tag_switch__LabelComment_53;
        MR_Word ll_backend__tag_switch__LowRangeEndConst_54;
        MR_Word ll_backend__tag_switch__TestRval_55;
        MR_Word ll_backend__tag_switch__IfCode_56;
        MR_Word ll_backend__tag_switch__LabelCode_57;
        MR_Word ll_backend__tag_switch__LowRangeCode_58;
        MR_Word ll_backend__tag_switch__HighRangeCode_59;
        MR_Integer ll_backend__tag_switch__V_85_85 = (ll_backend__tag_switch__MinPtag_15 + ll_backend__tag_switch__MaxPtag_16);
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_89_89;
        MR_String ll_backend__tag_switch__V_91_91;
        MR_String ll_backend__tag_switch__V_92_92;
        MR_String ll_backend__tag_switch__V_95_95;
        MR_String ll_backend__tag_switch__V_96_96;
        MR_Word ll_backend__tag_switch__V_98_98;
        MR_Word ll_backend__tag_switch__V_100_100;
        MR_Word ll_backend__tag_switch__V_101_101;
        MR_Word ll_backend__tag_switch__V_102_102;
        MR_Word ll_backend__tag_switch__V_103_103;
        MR_Word ll_backend__tag_switch__V_104_104;
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_105_105;
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_106_106;
        MR_Word ll_backend__tag_switch__V_109_109;
        MR_Word ll_backend__tag_switch__V_110_110;

        {
          ll_backend__tag_switch__LowRangeEnd_39 = mercury__int__f_47_47_2_f_0(ll_backend__tag_switch__V_85_85, (MR_Integer) 2);
        }
        ll_backend__tag_switch__HighRangeStart_40 = (ll_backend__tag_switch__LowRangeEnd_39 + (MR_Integer) 1);
        {
          ll_backend__tag_switch__InLowGroup_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_41, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[4]));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_41, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_3));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_41, 3) = ((MR_Box) (ll_backend__tag_switch__LowRangeEnd_39));
        }
        {
          mercury__list__filter_4_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[4], ll_backend__tag_switch__InLowGroup_41, ll_backend__tag_switch__PtagGroups_14, &ll_backend__tag_switch__LowGroups_45, &ll_backend__tag_switch__HighGroups_46);
        }
        {
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__NewLabel_47, ll_backend__tag_switch__STATE_VARIABLE_CI_0_62, &ll_backend__tag_switch__STATE_VARIABLE_CI_89_89);
        }
        {
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MinPtag_15, &ll_backend__tag_switch__LowStartStr_48);
        }
        {
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__LowRangeEnd_39, &ll_backend__tag_switch__LowEndStr_49);
        }
        {
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__HighRangeStart_40, &ll_backend__tag_switch__HighStartStr_50);
        }
        {
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MaxPtag_16, &ll_backend__tag_switch__HighEndStr_51);
        }
        {
          ll_backend__tag_switch__V_92_92 = mercury__string__f_43_43_2_f_0((MR_String) " to ", ll_backend__tag_switch__LowEndStr_49);
        }
        {
          ll_backend__tag_switch__V_91_91 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__LowStartStr_48, ll_backend__tag_switch__V_92_92);
        }
        {
          ll_backend__tag_switch__IfComment_52 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough for ptags ", ll_backend__tag_switch__V_91_91);
        }
        {
          ll_backend__tag_switch__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) " to ", ll_backend__tag_switch__HighEndStr_51);
        }
        {
          ll_backend__tag_switch__V_95_95 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__HighStartStr_50, ll_backend__tag_switch__V_96_96);
        }
        {
          ll_backend__tag_switch__LabelComment_53 = mercury__string__f_43_43_2_f_0((MR_String) "code for ptags ", ll_backend__tag_switch__V_95_95);
        }
        {
          ll_backend__tag_switch__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_98_98, 0) = ((MR_Box) (ll_backend__tag_switch__LowRangeEnd_39));
        }
        {
          ll_backend__tag_switch__LowRangeEndConst_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__LowRangeEndConst_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__LowRangeEndConst_54, 1) = ((MR_Box) (ll_backend__tag_switch__V_98_98));
        }
        {
          ll_backend__tag_switch__TestRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_55, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_17));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_55, 3) = ((MR_Box) (ll_backend__tag_switch__LowRangeEndConst_54));
        }
        ll_backend__tag_switch__TypeCtorInfo_119_119 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        {
          ll_backend__tag_switch__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_102_102, 0) = ((MR_Box) (ll_backend__tag_switch__NewLabel_47));
        }
        {
          ll_backend__tag_switch__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_101_101, 1) = ((MR_Box) (ll_backend__tag_switch__TestRval_55));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_101_101, 2) = ((MR_Box) (ll_backend__tag_switch__V_102_102));
        }
        {
          ll_backend__tag_switch__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_100_100, 0) = ((MR_Box) (ll_backend__tag_switch__V_101_101));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_100_100, 1) = ((MR_Box) (ll_backend__tag_switch__IfComment_52));
        }
        {
          ll_backend__tag_switch__IfCode_56 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ((MR_Box) (ll_backend__tag_switch__V_100_100)));
        }
        {
          ll_backend__tag_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_104_104, 1) = ((MR_Box) (ll_backend__tag_switch__NewLabel_47));
        }
        {
          ll_backend__tag_switch__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_103_103, 0) = ((MR_Box) (ll_backend__tag_switch__V_104_104));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_103_103, 1) = ((MR_Box) (ll_backend__tag_switch__LabelComment_53));
        }
        {
          ll_backend__tag_switch__LabelCode_57 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ((MR_Box) (ll_backend__tag_switch__V_103_103)));
        }
        {
          ll_backend__tag_switch__generate_primary_binary_search_13_p_0(ll_backend__tag_switch__LowGroups_45, ll_backend__tag_switch__MinPtag_15, ll_backend__tag_switch__LowRangeEnd_39, ll_backend__tag_switch__PtagRval_17, ll_backend__tag_switch__StagReg_18, ll_backend__tag_switch__VarRval_19, ll_backend__tag_switch__MaybeFailLabel_20, ll_backend__tag_switch__PtagCountMap_21, &ll_backend__tag_switch__LowRangeCode_58, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_105_105, ll_backend__tag_switch__STATE_VARIABLE_CI_89_89, &ll_backend__tag_switch__STATE_VARIABLE_CI_106_106);
        }
        {
          ll_backend__tag_switch__generate_primary_binary_search_13_p_0(ll_backend__tag_switch__HighGroups_46, ll_backend__tag_switch__HighRangeStart_40, ll_backend__tag_switch__MaxPtag_16, ll_backend__tag_switch__PtagRval_17, ll_backend__tag_switch__StagReg_18, ll_backend__tag_switch__VarRval_19, ll_backend__tag_switch__MaybeFailLabel_20, ll_backend__tag_switch__PtagCountMap_21, &ll_backend__tag_switch__HighRangeCode_59, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_105_105, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61, ll_backend__tag_switch__STATE_VARIABLE_CI_106_106, ll_backend__tag_switch__STATE_VARIABLE_CI_63);
        }
        {
          ll_backend__tag_switch__V_110_110 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ll_backend__tag_switch__LabelCode_57, ll_backend__tag_switch__HighRangeCode_59);
        }
        {
          ll_backend__tag_switch__V_109_109 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ll_backend__tag_switch__LowRangeCode_58, ll_backend__tag_switch__V_110_110);
        }
        {
          *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ll_backend__tag_switch__IfCode_56, ll_backend__tag_switch__V_109_109);
        }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_2(
  MR_Box ll_backend__tag_switch__closure_arg)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

    {
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__556__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
    return ll_backend__tag_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

    {
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__543__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
    return ll_backend__tag_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0(
  MR_Word ll_backend__tag_switch__PtagGroups_14,
  MR_Integer ll_backend__tag_switch__CurPrimary_15,
  MR_Integer ll_backend__tag_switch__MaxPrimary_16,
  MR_Word ll_backend__tag_switch__StagReg_17,
  MR_Word ll_backend__tag_switch__VarRval_18,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_19,
  MR_Word ll_backend__tag_switch__PtagCountMap_20,
  MR_Word * ll_backend__tag_switch__Targets_21,
  MR_Word * ll_backend__tag_switch__Code_22,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_42,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_43)
{
  {
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CurPrimary_15 > ll_backend__tag_switch__MaxPrimary_16);

    if (ll_backend__tag_switch__succeeded)
      {
        MR_Word ll_backend__tag_switch__V_44_44;

        {
          ll_backend__tag_switch__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 3) = ((MR_Box) (ll_backend__tag_switch__PtagGroups_14));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__expect_4_p_0(ll_backend__tag_switch__V_44_44, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_jump_table\'/13", (MR_String) "PtagGroups != [] when Cur > Max");
        }
        *ll_backend__tag_switch__Targets_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          *ll_backend__tag_switch__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__tag_switch__STATE_VARIABLE_CI_43 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_42;
        *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40;
      }
    else
      {
        MR_Integer ll_backend__tag_switch__NextPrimary_25 = (ll_backend__tag_switch__CurPrimary_15 + (MR_Integer) 1);
        MR_Word ll_backend__tag_switch__PtagGroupsTail_27;
        MR_Word ll_backend__tag_switch__PrimaryInfo_28;
        MR_Word ll_backend__tag_switch__PtagCaseEntry_26;
        MR_Integer ll_backend__tag_switch__V_76_76;

        ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__PtagGroups_14)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__tag_switch__succeeded)
          {
            ll_backend__tag_switch__PtagCaseEntry_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagGroups_14, (MR_Integer) 0)));
            ll_backend__tag_switch__PtagGroupsTail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagGroups_14, (MR_Integer) 1)));
            ll_backend__tag_switch__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCaseEntry_26, (MR_Integer) 0)));
            ll_backend__tag_switch__PrimaryInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCaseEntry_26, (MR_Integer) 1)));
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CurPrimary_15 == ll_backend__tag_switch__V_76_76);
          }
        if (ll_backend__tag_switch__succeeded)
          {
            MR_Word ll_backend__tag_switch__TypeCtorInfo_75_75;
            MR_Word ll_backend__tag_switch__StagLoc_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PrimaryInfo_28, (MR_Integer) 0)));
            MR_Word ll_backend__tag_switch__StagGoalMap_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PrimaryInfo_28, (MR_Integer) 1)));
            MR_Word ll_backend__tag_switch__CountInfo_31;
            MR_Word ll_backend__tag_switch__StagLocPrime_32;
            MR_Integer ll_backend__tag_switch__MaxSecondary_33;
            MR_Word ll_backend__tag_switch__NewLabel_34;
            MR_String ll_backend__tag_switch__Comment_35;
            MR_Word ll_backend__tag_switch__LabelCode_36;
            MR_Word ll_backend__tag_switch__ThisTagCode_37;
            MR_Word ll_backend__tag_switch__TailTargets_38;
            MR_Word ll_backend__tag_switch__TailCode_39;
            MR_Word ll_backend__tag_switch__V_50_50;
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_54_54;
            MR_String ll_backend__tag_switch__V_56_56;
            MR_Word ll_backend__tag_switch__V_57_57;
            MR_Word ll_backend__tag_switch__V_58_58;
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_60_60;
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_61_61;
            MR_Word ll_backend__tag_switch__V_64_64;
            MR_Word ll_backend__tag_switch__V_65_65;
            MR_Box ll_backend__tag_switch__conv0_CountInfo_31;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[1], ll_backend__tag_switch__PtagCountMap_20, ll_backend__tag_switch__CurPrimary_15, &ll_backend__tag_switch__conv0_CountInfo_31);
            }
            ll_backend__tag_switch__CountInfo_31 = ((MR_Word) ll_backend__tag_switch__conv0_CountInfo_31);
            ll_backend__tag_switch__StagLocPrime_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_31, (MR_Integer) 0)));
            ll_backend__tag_switch__MaxSecondary_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_31, (MR_Integer) 1)));
            {
              ll_backend__tag_switch__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_jump_table_13_p_0_2));
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 3) = ((MR_Box) (ll_backend__tag_switch__StagLoc_29));
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 4) = ((MR_Box) (ll_backend__tag_switch__StagLocPrime_32));
            }
            {
              mercury__require__expect_4_p_0(ll_backend__tag_switch__V_50_50, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_jump_table\'/13", (MR_String) "secondary tag locations differ");
            }
            {
              ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__NewLabel_34, ll_backend__tag_switch__STATE_VARIABLE_CI_0_42, &ll_backend__tag_switch__STATE_VARIABLE_CI_54_54);
            }
            {
              ll_backend__tag_switch__V_56_56 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__CurPrimary_15);
            }
            {
              ll_backend__tag_switch__Comment_35 = mercury__string__f_43_43_2_f_0((MR_String) "start of a case in primary tag switch: ptag ", ll_backend__tag_switch__V_56_56);
            }
            ll_backend__tag_switch__TypeCtorInfo_75_75 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
            {
              ll_backend__tag_switch__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 1) = ((MR_Box) (ll_backend__tag_switch__NewLabel_34));
            }
            {
              ll_backend__tag_switch__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_57_57, 0) = ((MR_Box) (ll_backend__tag_switch__V_58_58));
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_57_57, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_35));
            }
            {
              ll_backend__tag_switch__LabelCode_36 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_75_75, ((MR_Box) (ll_backend__tag_switch__V_57_57)));
            }
            {
              ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_30, ll_backend__tag_switch__CurPrimary_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__tag_switch__MaxSecondary_33, ll_backend__tag_switch__StagReg_17, ll_backend__tag_switch__StagLoc_29, ll_backend__tag_switch__VarRval_18, ll_backend__tag_switch__MaybeFailLabel_19, &ll_backend__tag_switch__ThisTagCode_37, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_60_60, ll_backend__tag_switch__STATE_VARIABLE_CI_54_54, &ll_backend__tag_switch__STATE_VARIABLE_CI_61_61);
            }
            {
              ll_backend__tag_switch__generate_primary_jump_table_13_p_0(ll_backend__tag_switch__PtagGroupsTail_27, ll_backend__tag_switch__NextPrimary_25, ll_backend__tag_switch__MaxPrimary_16, ll_backend__tag_switch__StagReg_17, ll_backend__tag_switch__VarRval_18, ll_backend__tag_switch__MaybeFailLabel_19, ll_backend__tag_switch__PtagCountMap_20, &ll_backend__tag_switch__TailTargets_38, &ll_backend__tag_switch__TailCode_39, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_60_60, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41, ll_backend__tag_switch__STATE_VARIABLE_CI_61_61, ll_backend__tag_switch__STATE_VARIABLE_CI_43);
            }
            {
              ll_backend__tag_switch__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_64_64, 0) = ((MR_Box) (ll_backend__tag_switch__NewLabel_34));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__tag_switch__Targets_21 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__tag_switch__V_64_64));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__tag_switch__TailTargets_38));
            }
            {
              ll_backend__tag_switch__V_65_65 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_75_75, ll_backend__tag_switch__ThisTagCode_37, ll_backend__tag_switch__TailCode_39);
            }
            {
              *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_75_75, ll_backend__tag_switch__LabelCode_36, ll_backend__tag_switch__V_65_65);
            }
          }
        else
          {
            MR_Word ll_backend__tag_switch__TailTargets_68;

            {
              ll_backend__tag_switch__generate_primary_jump_table_13_p_0(ll_backend__tag_switch__PtagGroups_14, ll_backend__tag_switch__NextPrimary_25, ll_backend__tag_switch__MaxPrimary_16, ll_backend__tag_switch__StagReg_17, ll_backend__tag_switch__VarRval_18, ll_backend__tag_switch__MaybeFailLabel_19, ll_backend__tag_switch__PtagCountMap_20, &ll_backend__tag_switch__TailTargets_68, ll_backend__tag_switch__Code_22, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41, ll_backend__tag_switch__STATE_VARIABLE_CI_0_42, ll_backend__tag_switch__STATE_VARIABLE_CI_43);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__tag_switch__Targets_21 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__tag_switch__MaybeFailLabel_19));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__tag_switch__TailTargets_68));
            }
          }
      }
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_p_0(
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
  MR_Word ll_backend__tag_switch__PtagRval_2,
  MR_Word ll_backend__tag_switch__HeadVar__3_3,
  MR_Word * ll_backend__tag_switch__TestRval_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__tag_switch__succeeded;

        if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__tag_switch__TestRval_4 = ll_backend__tag_switch__HeadVar__3_3;
        else
          {
            MR_Integer ll_backend__tag_switch__OtherPtag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__tag_switch__OtherPtags_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__tag_switch__ThisTestRval_12;
            MR_Word ll_backend__tag_switch__TestRval1_13;
            MR_Word ll_backend__tag_switch__V_15_15;
            MR_Word ll_backend__tag_switch__V_17_17;
            MR_Word ll_backend__tag_switch__V_18_18;

            {
              ll_backend__tag_switch__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_18_18, 0) = ((MR_Box) (ll_backend__tag_switch__OtherPtag_7));
            }
            {
              ll_backend__tag_switch__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_17_17, 1) = ((MR_Box) (ll_backend__tag_switch__V_18_18));
            }
            {
              ll_backend__tag_switch__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 2) = ((MR_Box) (ll_backend__tag_switch__V_17_17));
            }
            {
              ll_backend__tag_switch__ThisTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_2));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 3) = ((MR_Box) (ll_backend__tag_switch__V_15_15));
            }
            {
              ll_backend__tag_switch__TestRval1_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 2) = ((MR_Box) (ll_backend__tag_switch__HeadVar__3_3));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 3) = ((MR_Box) (ll_backend__tag_switch__ThisTestRval_12));
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__tag_switch__HeadVar__1__tmp_copy_1 = ll_backend__tag_switch__OtherPtags_8;
              MR_Word ll_backend__tag_switch__HeadVar__3__tmp_copy_3 = ll_backend__tag_switch__TestRval1_13;

              ll_backend__tag_switch__HeadVar__3_3 = ll_backend__tag_switch__HeadVar__3__tmp_copy_3;
              ll_backend__tag_switch__HeadVar__1_1 = ll_backend__tag_switch__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg,
  MR_Box ll_backend__tag_switch__wrapper_arg_1)
{
  {
    MR_Box ll_backend__tag_switch__wrapper_arg_2;
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;
    MR_String ll_backend__tag_switch__conv0_HeadVar__2_2;

    {
      ll_backend__tag_switch__conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) ll_backend__tag_switch__wrapper_arg_1));
    }
    ll_backend__tag_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__tag_switch__conv0_HeadVar__2_2));
    return ll_backend__tag_switch__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(
  MR_Word ll_backend__tag_switch__PtagRval_17,
  MR_Word ll_backend__tag_switch__StagReg_18,
  MR_Integer ll_backend__tag_switch__MainPtag_19,
  MR_Word ll_backend__tag_switch__OtherPtags_20,
  MR_Word ll_backend__tag_switch__PtagCase_21,
  MR_Integer ll_backend__tag_switch__MaxSecondary_22,
  MR_Word ll_backend__tag_switch__VarRval_23,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_24,
  MR_Word ll_backend__tag_switch__PrevTestsCode0_25,
  MR_Word * ll_backend__tag_switch__PrevTestsCode_26,
  MR_Word ll_backend__tag_switch__PrevCasesCode0_27,
  MR_Word * ll_backend__tag_switch__PrevCasesCode_28,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_42,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_43)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Word ll_backend__tag_switch__TypeCtorInfo_60_60;
    MR_Word ll_backend__tag_switch__ThisPtagLabel_31;
    MR_Word ll_backend__tag_switch__TestRval0_32;
    MR_Word ll_backend__tag_switch__TestRval_33;
    MR_Word ll_backend__tag_switch__TestCode_34;
    MR_String ll_backend__tag_switch__Comment_35;
    MR_Word ll_backend__tag_switch__LabelCode_36;
    MR_Word ll_backend__tag_switch__StagLoc_37;
    MR_Word ll_backend__tag_switch__StagGoalMap_38;
    MR_Word ll_backend__tag_switch__TagCode_39;
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_44_44;
    MR_Word ll_backend__tag_switch__V_46_46;
    MR_Word ll_backend__tag_switch__V_48_48;
    MR_Word ll_backend__tag_switch__V_49_49;
    MR_Word ll_backend__tag_switch__V_50_50;
    MR_Word ll_backend__tag_switch__V_51_51;
    MR_Word ll_backend__tag_switch__V_52_52;
    MR_Word ll_backend__tag_switch__V_55_55;
    MR_Word ll_backend__tag_switch__V_56_56;
    MR_Word ll_backend__tag_switch__V_59_59;

    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__ThisPtagLabel_31, ll_backend__tag_switch__STATE_VARIABLE_CI_0_42, &ll_backend__tag_switch__STATE_VARIABLE_CI_44_44);
    }
    {
      ll_backend__tag_switch__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_49_49, 0) = ((MR_Box) (ll_backend__tag_switch__MainPtag_19));
    }
    {
      ll_backend__tag_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_48_48, 1) = ((MR_Box) (ll_backend__tag_switch__V_49_49));
    }
    {
      ll_backend__tag_switch__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_46_46, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_46_46, 2) = ((MR_Box) (ll_backend__tag_switch__V_48_48));
    }
    {
      ll_backend__tag_switch__TestRval0_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_32, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_17));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_32, 3) = ((MR_Box) (ll_backend__tag_switch__V_46_46));
    }
    {
      ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_p_0(ll_backend__tag_switch__OtherPtags_20, ll_backend__tag_switch__PtagRval_17, ll_backend__tag_switch__TestRval0_32, &ll_backend__tag_switch__TestRval_33);
    }
    ll_backend__tag_switch__TypeCtorInfo_60_60 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__tag_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_52_52, 0) = ((MR_Box) (ll_backend__tag_switch__ThisPtagLabel_31));
    }
    {
      ll_backend__tag_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_51_51, 1) = ((MR_Box) (ll_backend__tag_switch__TestRval_33));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_51_51, 2) = ((MR_Box) (ll_backend__tag_switch__V_52_52));
    }
    {
      ll_backend__tag_switch__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 0) = ((MR_Box) (ll_backend__tag_switch__V_51_51));
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 1) = ((MR_Box) ((MR_String) "test primary tag only"));
    }
    {
      ll_backend__tag_switch__TestCode_34 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ((MR_Box) (ll_backend__tag_switch__V_50_50)));
    }
    if ((ll_backend__tag_switch__OtherPtags_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String ll_backend__tag_switch__V_77_77;

        {
          ll_backend__tag_switch__V_77_77 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__MainPtag_19);
        }
        {
          ll_backend__tag_switch__Comment_35 = mercury__string__f_43_43_2_f_0((MR_String) "primary tag value: ", ll_backend__tag_switch__V_77_77);
        }
      }
    else
      {
        MR_String ll_backend__tag_switch__V_67_67;
        MR_String ll_backend__tag_switch__V_68_68;
        MR_String ll_backend__tag_switch__V_69_69;
        MR_String ll_backend__tag_switch__V_71_71;
        MR_String ll_backend__tag_switch__V_72_72;
        MR_Word ll_backend__tag_switch__V_74_74;

        {
          ll_backend__tag_switch__V_68_68 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__MainPtag_19);
        }
        {
          ll_backend__tag_switch__V_74_74 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__tag_switch_scalar_common_1[4], ll_backend__tag_switch__OtherPtags_20);
        }
        {
          ll_backend__tag_switch__V_72_72 = mercury__string__join_list_2_f_0((MR_String) ", ", ll_backend__tag_switch__V_74_74);
        }
        {
          ll_backend__tag_switch__V_71_71 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__V_72_72, (MR_String) ")");
        }
        {
          ll_backend__tag_switch__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) "(shared with ", ll_backend__tag_switch__V_71_71);
        }
        {
          ll_backend__tag_switch__V_67_67 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__V_68_68, ll_backend__tag_switch__V_69_69);
        }
        {
          ll_backend__tag_switch__Comment_35 = mercury__string__f_43_43_2_f_0((MR_String) "primary tag value: ", ll_backend__tag_switch__V_67_67);
        }
      }
    {
      ll_backend__tag_switch__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_56_56, 1) = ((MR_Box) (ll_backend__tag_switch__ThisPtagLabel_31));
    }
    {
      ll_backend__tag_switch__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 0) = ((MR_Box) (ll_backend__tag_switch__V_56_56));
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_35));
    }
    {
      ll_backend__tag_switch__LabelCode_36 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ((MR_Box) (ll_backend__tag_switch__V_55_55)));
    }
    ll_backend__tag_switch__StagLoc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_21, (MR_Integer) 0)));
    ll_backend__tag_switch__StagGoalMap_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_21, (MR_Integer) 1)));
    {
      ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_38, ll_backend__tag_switch__MainPtag_19, ll_backend__tag_switch__OtherPtags_20, ll_backend__tag_switch__MaxSecondary_22, ll_backend__tag_switch__StagReg_18, ll_backend__tag_switch__StagLoc_37, ll_backend__tag_switch__VarRval_23, ll_backend__tag_switch__MaybeFailLabel_24, &ll_backend__tag_switch__TagCode_39, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41, ll_backend__tag_switch__STATE_VARIABLE_CI_44_44, ll_backend__tag_switch__STATE_VARIABLE_CI_43);
    }
    {
      *ll_backend__tag_switch__PrevTestsCode_26 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ll_backend__tag_switch__PrevTestsCode0_25, ll_backend__tag_switch__TestCode_34);
    }
    {
      ll_backend__tag_switch__V_59_59 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ll_backend__tag_switch__TagCode_39, ll_backend__tag_switch__PrevCasesCode0_27);
    }
    {
      *ll_backend__tag_switch__PrevCasesCode_28 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ll_backend__tag_switch__LabelCode_36, ll_backend__tag_switch__V_59_59);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

    {
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__445__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
    return ll_backend__tag_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0(
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
  MR_Word ll_backend__tag_switch__PtagRval_2,
  MR_Word ll_backend__tag_switch__StagReg_3,
  MR_Word ll_backend__tag_switch__VarRval_4,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_5,
  MR_Word ll_backend__tag_switch__PtagCountMap_6,
  MR_Word ll_backend__tag_switch__PrevTestsCode0_7,
  MR_Word ll_backend__tag_switch__PrevCasesCode0_8,
  MR_Word * ll_backend__tag_switch__Code_9,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_11,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_12,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__tag_switch__succeeded;

        if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_chain\'/13", (MR_String) "empty list");
              return;
            }
          }
        else
          {
            MR_Word ll_backend__tag_switch__PtagGroup_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__tag_switch__PtagGroups_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ll_backend__tag_switch__MainPtag_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_31, (MR_Integer) 0)));
            MR_Word ll_backend__tag_switch__OtherPtags_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_31, (MR_Integer) 1)));
            MR_Word ll_backend__tag_switch__PtagCase_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_31, (MR_Integer) 2)));
            MR_Word ll_backend__tag_switch__StagLoc_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_45, (MR_Integer) 0)));
            MR_Word ll_backend__tag_switch__StagGoalMap_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_45, (MR_Integer) 1)));
            MR_Word ll_backend__tag_switch__CountInfo_48;
            MR_Word ll_backend__tag_switch__StagLocPrime_49;
            MR_Integer ll_backend__tag_switch__MaxSecondary_50;
            MR_Word ll_backend__tag_switch__V_64_64;
            MR_Box ll_backend__tag_switch__conv0_CountInfo_48;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[1], ll_backend__tag_switch__PtagCountMap_6, ll_backend__tag_switch__MainPtag_43, &ll_backend__tag_switch__conv0_CountInfo_48);
            }
            ll_backend__tag_switch__CountInfo_48 = ((MR_Word) ll_backend__tag_switch__conv0_CountInfo_48);
            ll_backend__tag_switch__StagLocPrime_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_48, (MR_Integer) 0)));
            ll_backend__tag_switch__MaxSecondary_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_48, (MR_Integer) 1)));
            {
              ll_backend__tag_switch__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1));
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 3) = ((MR_Box) (ll_backend__tag_switch__StagLoc_46));
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 4) = ((MR_Box) (ll_backend__tag_switch__StagLocPrime_49));
            }
            {
              mercury__require__expect_4_p_0(ll_backend__tag_switch__V_64_64, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_chain\'/13", (MR_String) "secondary tag locations differ");
            }
            if ((ll_backend__tag_switch__PtagGroups_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              if ((ll_backend__tag_switch__MaybeFailLabel_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word ll_backend__tag_switch__TypeCtorInfo_97_97;
                  MR_String ll_backend__tag_switch__Comment_57;
                  MR_Word ll_backend__tag_switch__CommentCode_58;
                  MR_Word ll_backend__tag_switch__TagCode_59;
                  MR_Word ll_backend__tag_switch__V_69_69;
                  MR_Word ll_backend__tag_switch__V_70_70;
                  MR_Word ll_backend__tag_switch__V_74_74;
                  MR_Word ll_backend__tag_switch__V_75_75;

                  {
                    ll_backend__tag_switch__make_ptag_comment_4_p_0((MR_String) "fallthrough to last primary tag value: ", ll_backend__tag_switch__MainPtag_43, ll_backend__tag_switch__OtherPtags_44, &ll_backend__tag_switch__Comment_57);
                  }
                  ll_backend__tag_switch__TypeCtorInfo_97_97 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                  {
                    ll_backend__tag_switch__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_70_70, 0) = ((MR_Box) (ll_backend__tag_switch__Comment_57));
                  }
                  {
                    ll_backend__tag_switch__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_69_69, 0) = ((MR_Box) (ll_backend__tag_switch__V_70_70));
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_69_69, 1) = ((MR_Box) ((MR_String) ""));
                  }
                  {
                    ll_backend__tag_switch__CommentCode_58 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_97_97, ((MR_Box) (ll_backend__tag_switch__V_69_69)));
                  }
                  {
                    ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_47, ll_backend__tag_switch__MainPtag_43, ll_backend__tag_switch__OtherPtags_44, ll_backend__tag_switch__MaxSecondary_50, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__StagLoc_46, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, &ll_backend__tag_switch__TagCode_59, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_11, ll_backend__tag_switch__STATE_VARIABLE_CI_0_12, ll_backend__tag_switch__STATE_VARIABLE_CI_13);
                  }
                  {
                    ll_backend__tag_switch__V_75_75 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_97_97, ll_backend__tag_switch__TagCode_59, ll_backend__tag_switch__PrevCasesCode0_8);
                  }
                  {
                    ll_backend__tag_switch__V_74_74 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_97_97, ll_backend__tag_switch__CommentCode_58, ll_backend__tag_switch__V_75_75);
                  }
                  {
                    *ll_backend__tag_switch__Code_9 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_97_97, ll_backend__tag_switch__PrevTestsCode0_7, ll_backend__tag_switch__V_74_74);
                  }
                }
              else
                {
                  MR_Word ll_backend__tag_switch__TypeCtorInfo_96_96;
                  MR_Word ll_backend__tag_switch__FailLabel_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_5, (MR_Integer) 0)));
                  MR_Word ll_backend__tag_switch__FailCode_56;
                  MR_Word ll_backend__tag_switch__V_78_78;
                  MR_Word ll_backend__tag_switch__V_79_79;
                  MR_Word ll_backend__tag_switch__V_80_80;
                  MR_Word ll_backend__tag_switch__V_82_82;
                  MR_Word ll_backend__tag_switch__PrevTestsCode1_87;
                  MR_Word ll_backend__tag_switch__PrevCasesCode1_88;

                  {
                    ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__MainPtag_43, ll_backend__tag_switch__OtherPtags_44, ll_backend__tag_switch__PtagCase_45, ll_backend__tag_switch__MaxSecondary_50, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, ll_backend__tag_switch__PrevTestsCode0_7, &ll_backend__tag_switch__PrevTestsCode1_87, ll_backend__tag_switch__PrevCasesCode0_8, &ll_backend__tag_switch__PrevCasesCode1_88, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_11, ll_backend__tag_switch__STATE_VARIABLE_CI_0_12, ll_backend__tag_switch__STATE_VARIABLE_CI_13);
                  }
                  ll_backend__tag_switch__TypeCtorInfo_96_96 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                  {
                    ll_backend__tag_switch__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_80_80, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_55));
                  }
                  {
                    ll_backend__tag_switch__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_79_79, 1) = ((MR_Box) (ll_backend__tag_switch__V_80_80));
                  }
                  {
                    ll_backend__tag_switch__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_78_78, 0) = ((MR_Box) (ll_backend__tag_switch__V_79_79));
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_78_78, 1) = ((MR_Box) ((MR_String) "primary tag with no code to handle it"));
                  }
                  {
                    ll_backend__tag_switch__FailCode_56 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_96_96, ((MR_Box) (ll_backend__tag_switch__V_78_78)));
                  }
                  {
                    ll_backend__tag_switch__V_82_82 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_96_96, ll_backend__tag_switch__FailCode_56, ll_backend__tag_switch__PrevCasesCode1_88);
                  }
                  {
                    *ll_backend__tag_switch__Code_9 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_96_96, ll_backend__tag_switch__PrevTestsCode1_87, ll_backend__tag_switch__V_82_82);
                  }
                }
            else
              {
                MR_Word ll_backend__tag_switch__PrevTestsCode1_53;
                MR_Word ll_backend__tag_switch__PrevCasesCode1_54;
                MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_83_83;
                MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_84_84;

                {
                  ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__MainPtag_43, ll_backend__tag_switch__OtherPtags_44, ll_backend__tag_switch__PtagCase_45, ll_backend__tag_switch__MaxSecondary_50, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, ll_backend__tag_switch__PrevTestsCode0_7, &ll_backend__tag_switch__PrevTestsCode1_53, ll_backend__tag_switch__PrevCasesCode0_8, &ll_backend__tag_switch__PrevCasesCode1_54, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_83_83, ll_backend__tag_switch__STATE_VARIABLE_CI_0_12, &ll_backend__tag_switch__STATE_VARIABLE_CI_84_84);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__tag_switch__HeadVar__1__tmp_copy_1 = ll_backend__tag_switch__PtagGroups_32;
                  MR_Word ll_backend__tag_switch__PrevTestsCode0__tmp_copy_7 = ll_backend__tag_switch__PrevTestsCode1_53;
                  MR_Word ll_backend__tag_switch__PrevCasesCode0__tmp_copy_8 = ll_backend__tag_switch__PrevCasesCode1_54;
                  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0__tmp_copy_10 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_83_83;
                  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0__tmp_copy_12 = ll_backend__tag_switch__STATE_VARIABLE_CI_84_84;

                  ll_backend__tag_switch__STATE_VARIABLE_CI_0_12 = ll_backend__tag_switch__STATE_VARIABLE_CI_0__tmp_copy_12;
                  ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0__tmp_copy_10;
                  ll_backend__tag_switch__PrevCasesCode0_8 = ll_backend__tag_switch__PrevCasesCode0__tmp_copy_8;
                  ll_backend__tag_switch__PrevTestsCode0_7 = ll_backend__tag_switch__PrevTestsCode0__tmp_copy_7;
                  ll_backend__tag_switch__HeadVar__1_1 = ll_backend__tag_switch__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_p_0(
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
  MR_Word ll_backend__tag_switch__PtagRval_2,
  MR_Word ll_backend__tag_switch__HeadVar__3_3,
  MR_Word * ll_backend__tag_switch__TestRval_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__tag_switch__succeeded;

        if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__tag_switch__TestRval_4 = ll_backend__tag_switch__HeadVar__3_3;
        else
          {
            MR_Integer ll_backend__tag_switch__OtherPtag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__tag_switch__OtherPtags_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__tag_switch__ThisTestRval_12;
            MR_Word ll_backend__tag_switch__TestRval1_13;
            MR_Word ll_backend__tag_switch__V_15_15;
            MR_Word ll_backend__tag_switch__V_17_17;
            MR_Word ll_backend__tag_switch__V_18_18;

            {
              ll_backend__tag_switch__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_18_18, 0) = ((MR_Box) (ll_backend__tag_switch__OtherPtag_7));
            }
            {
              ll_backend__tag_switch__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_17_17, 1) = ((MR_Box) (ll_backend__tag_switch__V_18_18));
            }
            {
              ll_backend__tag_switch__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 2) = ((MR_Box) (ll_backend__tag_switch__V_17_17));
            }
            {
              ll_backend__tag_switch__ThisTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_2));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 3) = ((MR_Box) (ll_backend__tag_switch__V_15_15));
            }
            {
              ll_backend__tag_switch__TestRval1_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 2) = ((MR_Box) (ll_backend__tag_switch__HeadVar__3_3));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 3) = ((MR_Box) (ll_backend__tag_switch__ThisTestRval_12));
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__tag_switch__HeadVar__1__tmp_copy_1 = ll_backend__tag_switch__OtherPtags_8;
              MR_Word ll_backend__tag_switch__HeadVar__3__tmp_copy_3 = ll_backend__tag_switch__TestRval1_13;

              ll_backend__tag_switch__HeadVar__3_3 = ll_backend__tag_switch__HeadVar__3__tmp_copy_3;
              ll_backend__tag_switch__HeadVar__1_1 = ll_backend__tag_switch__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(
  MR_Word ll_backend__tag_switch__PtagRval_14,
  MR_Word ll_backend__tag_switch__StagReg_15,
  MR_Integer ll_backend__tag_switch__MainPtag_16,
  MR_Word ll_backend__tag_switch__OtherPtags_17,
  MR_Word ll_backend__tag_switch__PtagCase_18,
  MR_Integer ll_backend__tag_switch__MaxSecondary_19,
  MR_Word ll_backend__tag_switch__VarRval_20,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_21,
  MR_Word * ll_backend__tag_switch__Code_22,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_33,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_34,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_35,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_36)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Word ll_backend__tag_switch__TypeCtorInfo_53_53;
    MR_Word ll_backend__tag_switch__ElseLabel_25;
    MR_Word ll_backend__tag_switch__TestRval0_26;
    MR_Word ll_backend__tag_switch__TestRval_27;
    MR_Word ll_backend__tag_switch__TestCode_28;
    MR_Word ll_backend__tag_switch__StagLoc_29;
    MR_Word ll_backend__tag_switch__StagGoalMap_30;
    MR_Word ll_backend__tag_switch__TagCode_31;
    MR_Word ll_backend__tag_switch__ElseCode_32;
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_37_37;
    MR_Word ll_backend__tag_switch__V_39_39;
    MR_Word ll_backend__tag_switch__V_41_41;
    MR_Word ll_backend__tag_switch__V_42_42;
    MR_Word ll_backend__tag_switch__V_43_43;
    MR_Word ll_backend__tag_switch__V_44_44;
    MR_Word ll_backend__tag_switch__V_45_45;
    MR_Word ll_backend__tag_switch__V_49_49;
    MR_Word ll_backend__tag_switch__V_50_50;
    MR_Word ll_backend__tag_switch__V_52_52;

    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__ElseLabel_25, ll_backend__tag_switch__STATE_VARIABLE_CI_0_35, &ll_backend__tag_switch__STATE_VARIABLE_CI_37_37);
    }
    {
      ll_backend__tag_switch__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_42_42, 0) = ((MR_Box) (ll_backend__tag_switch__MainPtag_16));
    }
    {
      ll_backend__tag_switch__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_41_41, 1) = ((MR_Box) (ll_backend__tag_switch__V_42_42));
    }
    {
      ll_backend__tag_switch__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_39_39, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_39_39, 2) = ((MR_Box) (ll_backend__tag_switch__V_41_41));
    }
    {
      ll_backend__tag_switch__TestRval0_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_26, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_14));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_26, 3) = ((MR_Box) (ll_backend__tag_switch__V_39_39));
    }
    {
      ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_p_0(ll_backend__tag_switch__OtherPtags_17, ll_backend__tag_switch__PtagRval_14, ll_backend__tag_switch__TestRval0_26, &ll_backend__tag_switch__TestRval_27);
    }
    ll_backend__tag_switch__TypeCtorInfo_53_53 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__tag_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_45_45, 0) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_25));
    }
    {
      ll_backend__tag_switch__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 1) = ((MR_Box) (ll_backend__tag_switch__TestRval_27));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 2) = ((MR_Box) (ll_backend__tag_switch__V_45_45));
    }
    {
      ll_backend__tag_switch__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_43_43, 0) = ((MR_Box) (ll_backend__tag_switch__V_44_44));
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_43_43, 1) = ((MR_Box) ((MR_String) "test primary tag only"));
    }
    {
      ll_backend__tag_switch__TestCode_28 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_53_53, ((MR_Box) (ll_backend__tag_switch__V_43_43)));
    }
    ll_backend__tag_switch__StagLoc_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_18, (MR_Integer) 0)));
    ll_backend__tag_switch__StagGoalMap_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_18, (MR_Integer) 1)));
    {
      ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_30, ll_backend__tag_switch__MainPtag_16, ll_backend__tag_switch__OtherPtags_17, ll_backend__tag_switch__MaxSecondary_19, ll_backend__tag_switch__StagReg_15, ll_backend__tag_switch__StagLoc_29, ll_backend__tag_switch__VarRval_20, ll_backend__tag_switch__MaybeFailLabel_21, &ll_backend__tag_switch__TagCode_31, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_33, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_34, ll_backend__tag_switch__STATE_VARIABLE_CI_37_37, ll_backend__tag_switch__STATE_VARIABLE_CI_36);
    }
    {
      ll_backend__tag_switch__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_50_50, 1) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_25));
    }
    {
      ll_backend__tag_switch__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_49_49, 0) = ((MR_Box) (ll_backend__tag_switch__V_50_50));
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_49_49, 1) = ((MR_Box) ((MR_String) "handle next primary tag"));
    }
    {
      ll_backend__tag_switch__ElseCode_32 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_53_53, ((MR_Box) (ll_backend__tag_switch__V_49_49)));
    }
    {
      ll_backend__tag_switch__V_52_52 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_53_53, ll_backend__tag_switch__TagCode_31, ll_backend__tag_switch__ElseCode_32);
    }
    {
      *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_53_53, ll_backend__tag_switch__TestCode_28, ll_backend__tag_switch__V_52_52);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

    {
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__354__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
    return ll_backend__tag_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
  MR_Word ll_backend__tag_switch__PtagRval_2,
  MR_Word ll_backend__tag_switch__StagReg_3,
  MR_Word ll_backend__tag_switch__VarRval_4,
  MR_Word ll_backend__tag_switch__MaybeFailLabel_5,
  MR_Word ll_backend__tag_switch__PtagCountMap_6,
  MR_Word * ll_backend__tag_switch__Code_7,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_10,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_11)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;

    if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_me_else_chain\'/11", (MR_String) "empty switch");
          return;
        }
      }
    else
      {
        MR_Word ll_backend__tag_switch__PtagGroup_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__tag_switch__PtagGroups_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer ll_backend__tag_switch__MainPtag_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_27, (MR_Integer) 0)));
        MR_Word ll_backend__tag_switch__OtherPtags_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_27, (MR_Integer) 1)));
        MR_Word ll_backend__tag_switch__PtagCase_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_27, (MR_Integer) 2)));
        MR_Word ll_backend__tag_switch__StagLoc_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_39, (MR_Integer) 0)));
        MR_Word ll_backend__tag_switch__StagGoalMap_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_39, (MR_Integer) 1)));
        MR_Word ll_backend__tag_switch__CountInfo_42;
        MR_Word ll_backend__tag_switch__StagLocPrime_43;
        MR_Integer ll_backend__tag_switch__MaxSecondary_44;
        MR_Word ll_backend__tag_switch__V_55_55;
        MR_Box ll_backend__tag_switch__conv0_CountInfo_42;

        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[1], ll_backend__tag_switch__PtagCountMap_6, ll_backend__tag_switch__MainPtag_37, &ll_backend__tag_switch__conv0_CountInfo_42);
        }
        ll_backend__tag_switch__CountInfo_42 = ((MR_Word) ll_backend__tag_switch__conv0_CountInfo_42);
        ll_backend__tag_switch__StagLocPrime_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_42, (MR_Integer) 0)));
        ll_backend__tag_switch__MaxSecondary_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_42, (MR_Integer) 1)));
        {
          ll_backend__tag_switch__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 3) = ((MR_Box) (ll_backend__tag_switch__StagLoc_40));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 4) = ((MR_Box) (ll_backend__tag_switch__StagLocPrime_43));
        }
        {
          mercury__require__expect_4_p_0(ll_backend__tag_switch__V_55_55, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_me_else_chain\'/11", (MR_String) "secondary tag locations differ");
        }
        if ((ll_backend__tag_switch__PtagGroups_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((ll_backend__tag_switch__MaybeFailLabel_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_41, ll_backend__tag_switch__MainPtag_37, ll_backend__tag_switch__OtherPtags_38, ll_backend__tag_switch__MaxSecondary_44, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__StagLoc_40, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, ll_backend__tag_switch__Code_7, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9, ll_backend__tag_switch__STATE_VARIABLE_CI_0_10, ll_backend__tag_switch__STATE_VARIABLE_CI_11);
            }
          else
            {
              MR_Word ll_backend__tag_switch__TypeCtorInfo_78_78;
              MR_Word ll_backend__tag_switch__FailLabel_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_5, (MR_Integer) 0)));
              MR_Word ll_backend__tag_switch__FailCode_50;
              MR_Word ll_backend__tag_switch__V_63_63;
              MR_Word ll_backend__tag_switch__V_64_64;
              MR_Word ll_backend__tag_switch__V_65_65;
              MR_Word ll_backend__tag_switch__ThisTagCode_71;

              {
                ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__MainPtag_37, ll_backend__tag_switch__OtherPtags_38, ll_backend__tag_switch__PtagCase_39, ll_backend__tag_switch__MaxSecondary_44, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, &ll_backend__tag_switch__ThisTagCode_71, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9, ll_backend__tag_switch__STATE_VARIABLE_CI_0_10, ll_backend__tag_switch__STATE_VARIABLE_CI_11);
              }
              ll_backend__tag_switch__TypeCtorInfo_78_78 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              {
                ll_backend__tag_switch__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_65_65, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_49));
              }
              {
                ll_backend__tag_switch__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_64_64, 1) = ((MR_Box) (ll_backend__tag_switch__V_65_65));
              }
              {
                ll_backend__tag_switch__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_63_63, 0) = ((MR_Box) (ll_backend__tag_switch__V_64_64));
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_63_63, 1) = ((MR_Box) ((MR_String) "primary tag with no code to handle it"));
              }
              {
                ll_backend__tag_switch__FailCode_50 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_78_78, ((MR_Box) (ll_backend__tag_switch__V_63_63)));
              }
              {
                *ll_backend__tag_switch__Code_7 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_78_78, ll_backend__tag_switch__ThisTagCode_71, ll_backend__tag_switch__FailCode_50);
              }
            }
        else
          {
            MR_Word ll_backend__tag_switch__ThisTagCode_47;
            MR_Word ll_backend__tag_switch__OtherTagsCode_48;
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_67_67;
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_68_68;

            {
              ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__MainPtag_37, ll_backend__tag_switch__OtherPtags_38, ll_backend__tag_switch__PtagCase_39, ll_backend__tag_switch__MaxSecondary_44, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, &ll_backend__tag_switch__ThisTagCode_47, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_67_67, ll_backend__tag_switch__STATE_VARIABLE_CI_0_10, &ll_backend__tag_switch__STATE_VARIABLE_CI_68_68);
            }
            {
              ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(ll_backend__tag_switch__PtagGroups_28, ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, ll_backend__tag_switch__PtagCountMap_6, &ll_backend__tag_switch__OtherTagsCode_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_67_67, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9, ll_backend__tag_switch__STATE_VARIABLE_CI_68_68, ll_backend__tag_switch__STATE_VARIABLE_CI_11);
            }
            {
              *ll_backend__tag_switch__Code_7 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__tag_switch__ThisTagCode_47, ll_backend__tag_switch__OtherTagsCode_48);
            }
          }
      }
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0_2(
  MR_Box ll_backend__tag_switch__closure_arg,
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
  MR_Box ll_backend__tag_switch__wrapper_arg_2,
  MR_Box ll_backend__tag_switch__wrapper_arg_3,
  MR_Box * ll_backend__tag_switch__wrapper_arg_4)
{
  {
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;
    MR_Word ll_backend__tag_switch__conv7_HeadVar__4_4;

    {
      ll_backend__switch_case__add_remaining_case_4_p_0(((MR_Word) ll_backend__tag_switch__wrapper_arg_1), ((MR_Word) ll_backend__tag_switch__wrapper_arg_2), ((MR_Word) ll_backend__tag_switch__wrapper_arg_3), &ll_backend__tag_switch__conv7_HeadVar__4_4);
    }
    *ll_backend__tag_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__tag_switch__conv7_HeadVar__4_4));
  }
}

static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0_1(
  MR_Box ll_backend__tag_switch__closure_arg,
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
  MR_Box * ll_backend__tag_switch__wrapper_arg_2,
  MR_Box ll_backend__tag_switch__wrapper_arg_3,
  MR_Box * ll_backend__tag_switch__wrapper_arg_4,
  MR_Box ll_backend__tag_switch__wrapper_arg_5,
  MR_Box * ll_backend__tag_switch__wrapper_arg_6,
  MR_Box ll_backend__tag_switch__wrapper_arg_7,
  MR_Box * ll_backend__tag_switch__wrapper_arg_8)
{
  {
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;
    MR_Word ll_backend__tag_switch__conv3_HeadVar__3_3;
    MR_Word ll_backend__tag_switch__conv2_HeadVar__5_5;
    MR_Word ll_backend__tag_switch__conv1_HeadVar__7_7;
    MR_Word ll_backend__tag_switch__conv0_HeadVar__9_9;

    {
      ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__tag_switch__wrapper_arg_1), &ll_backend__tag_switch__conv3_HeadVar__3_3, ((MR_Word) ll_backend__tag_switch__wrapper_arg_3), &ll_backend__tag_switch__conv2_HeadVar__5_5, ((MR_Word) ll_backend__tag_switch__wrapper_arg_5), &ll_backend__tag_switch__conv1_HeadVar__7_7, ((MR_Word) ll_backend__tag_switch__wrapper_arg_7), &ll_backend__tag_switch__conv0_HeadVar__9_9);
    }
    *ll_backend__tag_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__tag_switch__conv3_HeadVar__3_3));
    *ll_backend__tag_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__tag_switch__conv2_HeadVar__5_5));
    *ll_backend__tag_switch__wrapper_arg_6 = ((MR_Box) (ll_backend__tag_switch__conv1_HeadVar__7_7));
    *ll_backend__tag_switch__wrapper_arg_8 = ((MR_Box) (ll_backend__tag_switch__conv0_HeadVar__9_9));
  }
}

void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0(
  MR_Word ll_backend__tag_switch__TaggedCases_15,
  MR_Word ll_backend__tag_switch__VarRval_16,
  MR_Word ll_backend__tag_switch__VarType_17,
  MR_String ll_backend__tag_switch__VarName_18,
  MR_Word ll_backend__tag_switch__CodeModel_19,
  MR_Word ll_backend__tag_switch__CanFail_20,
  MR_Word ll_backend__tag_switch__SwitchGoalInfo_21,
  MR_Word ll_backend__tag_switch__EndLabel_22,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_MaybeEnd_0_64,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_MaybeEnd_65,
  MR_Word * ll_backend__tag_switch__Code_24,
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_66,
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_67,
  MR_Word ll_backend__tag_switch__CLD0_26)
{
  {
    MR_bool ll_backend__tag_switch__succeeded;
    MR_Word ll_backend__tag_switch__TypeCtorInfo_134_134;
    MR_Word ll_backend__tag_switch__TypeCtorInfo_135_135;
    MR_Word ll_backend__tag_switch__TypeCtorInfo_143_143;
    MR_Word ll_backend__tag_switch__PtagReg_28;
    MR_Word ll_backend__tag_switch__StagReg_29;
    MR_Word ll_backend__tag_switch__BranchStart_30;
    MR_Word ll_backend__tag_switch__ModuleInfo_31;
    MR_Integer ll_backend__tag_switch__MaxPrimary_32;
    MR_Word ll_backend__tag_switch__PtagCountMap_33;
    MR_Word ll_backend__tag_switch__Params_34;
    MR_Word ll_backend__tag_switch__CaseLabelMap0_35;
    MR_Word ll_backend__tag_switch__PtagCaseMap_37;
    MR_Integer ll_backend__tag_switch__PtagsUsed_38;
    MR_Word ll_backend__tag_switch__Globals_39;
    MR_Integer ll_backend__tag_switch__DenseSwitchSize_40;
    MR_Integer ll_backend__tag_switch__TrySwitchSize_41;
    MR_Integer ll_backend__tag_switch__BinarySwitchSize_42;
    MR_Word ll_backend__tag_switch__PtagCode_46;
    MR_Word ll_backend__tag_switch__EndCode_48;
    MR_Word ll_backend__tag_switch__MaybeFailLabel_49;
    MR_Word ll_backend__tag_switch__FailCode_50;
    MR_Word ll_backend__tag_switch__CasesCode_55;
    MR_Word ll_backend__tag_switch__CaseLabelMap_56;
    MR_Word ll_backend__tag_switch__RemainingCasesCode_63;
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CLD_70_70;
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CLD_72_72;
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CLD_73_73;
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CLD_74_74;
    MR_Word ll_backend__tag_switch__V_75_75;
    MR_Word ll_backend__tag_switch__V_76_76;
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_78_78;
    MR_Word ll_backend__tag_switch__V_94_94;
    MR_Word ll_backend__tag_switch__V_95_95;
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_102_102;
    MR_Word ll_backend__tag_switch__V_119_119;
    MR_Word ll_backend__tag_switch__V_120_120;
    MR_Word ll_backend__tag_switch__V_121_121;
    MR_Word ll_backend__tag_switch__V_122_122;
    MR_Word ll_backend__tag_switch__V_36_36;
    MR_Box ll_backend__tag_switch__conv6_CaseLabelMap0_35;
    MR_Box ll_backend__tag_switch__conv5_STATE_VARIABLE_MaybeEnd_65;
    MR_Box ll_backend__tag_switch__conv4_STATE_VARIABLE_CI_78_78;
    MR_Box ll_backend__tag_switch__conv8_RemainingCasesCode_63;

    {
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__tag_switch__PtagReg_28, ll_backend__tag_switch__CLD0_26, &ll_backend__tag_switch__STATE_VARIABLE_CLD_70_70);
    }
    {
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__STATE_VARIABLE_CLD_70_70, &ll_backend__tag_switch__STATE_VARIABLE_CLD_72_72);
    }
    {
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__tag_switch__PtagReg_28, ll_backend__tag_switch__STATE_VARIABLE_CLD_72_72, &ll_backend__tag_switch__STATE_VARIABLE_CLD_73_73);
    }
    {
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__STATE_VARIABLE_CLD_73_73, &ll_backend__tag_switch__STATE_VARIABLE_CLD_74_74);
    }
    {
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__tag_switch__STATE_VARIABLE_CLD_74_74, &ll_backend__tag_switch__BranchStart_30);
    }
    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__tag_switch__STATE_VARIABLE_CI_0_66, &ll_backend__tag_switch__ModuleInfo_31);
    }
    {
      backend_libs__switch_util__get_ptag_counts_4_p_0(ll_backend__tag_switch__VarType_17, ll_backend__tag_switch__ModuleInfo_31, &ll_backend__tag_switch__MaxPrimary_32, &ll_backend__tag_switch__PtagCountMap_33);
    }
    {
      ll_backend__tag_switch__Params_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_34, 0) = ((MR_Box) (ll_backend__tag_switch__VarName_18));
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_34, 1) = ((MR_Box) (ll_backend__tag_switch__SwitchGoalInfo_21));
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_34, 2) = ((MR_Box) (ll_backend__tag_switch__CodeModel_19));
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_34, 3) = ((MR_Box) (ll_backend__tag_switch__BranchStart_30));
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_34, 4) = ((MR_Box) (ll_backend__tag_switch__EndLabel_22));
    }
    {
      ll_backend__tag_switch__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_75_75, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_75_75, 1) = ((MR_Box) (ll_backend__tag_switch__generate_tag_switch_14_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_75_75, 3) = ((MR_Box) (ll_backend__tag_switch__Params_34));
    }
    ll_backend__tag_switch__TypeCtorInfo_134_134 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
    ll_backend__tag_switch__TypeCtorInfo_135_135 = (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0;
    {
      ll_backend__tag_switch__V_76_76 = mercury__map__init_0_f_0(ll_backend__tag_switch__TypeCtorInfo_134_134, ll_backend__tag_switch__TypeCtorInfo_135_135);
    }
    {
      backend_libs__switch_util__group_cases_by_ptag_10_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, (MR_Word) &ll_backend__tag_switch_scalar_common_1[0], (MR_Word) &ll_backend__tag_switch_scalar_common_2[0], (MR_Word) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0, ll_backend__tag_switch__TaggedCases_15, ll_backend__tag_switch__V_75_75, ((MR_Box) (ll_backend__tag_switch__V_76_76)), &ll_backend__tag_switch__conv6_CaseLabelMap0_35, ((MR_Box) (ll_backend__tag_switch__STATE_VARIABLE_MaybeEnd_0_64)), &ll_backend__tag_switch__conv5_STATE_VARIABLE_MaybeEnd_65, ((MR_Box) (ll_backend__tag_switch__STATE_VARIABLE_CI_0_66)), &ll_backend__tag_switch__conv4_STATE_VARIABLE_CI_78_78, &ll_backend__tag_switch__V_36_36, &ll_backend__tag_switch__PtagCaseMap_37);
    }
    ll_backend__tag_switch__CaseLabelMap0_35 = ((MR_Word) ll_backend__tag_switch__conv6_CaseLabelMap0_35);
    *ll_backend__tag_switch__STATE_VARIABLE_MaybeEnd_65 = ((MR_Word) ll_backend__tag_switch__conv5_STATE_VARIABLE_MaybeEnd_65);
    ll_backend__tag_switch__STATE_VARIABLE_CI_78_78 = ((MR_Word) ll_backend__tag_switch__conv4_STATE_VARIABLE_CI_78_78);
    {
      mercury__map__count_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__tag_switch_scalar_common_2[1], ll_backend__tag_switch__PtagCaseMap_37, &ll_backend__tag_switch__PtagsUsed_38);
    }
    {
      ll_backend__code_info__get_globals_2_p_0(ll_backend__tag_switch__STATE_VARIABLE_CI_78_78, &ll_backend__tag_switch__Globals_39);
    }
    {
      libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_39, (MR_Integer) 430, &ll_backend__tag_switch__DenseSwitchSize_40);
    }
    {
      libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_39, (MR_Integer) 436, &ll_backend__tag_switch__TrySwitchSize_41);
    }
    {
      libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_39, (MR_Integer) 437, &ll_backend__tag_switch__BinarySwitchSize_42);
    }
    ll_backend__tag_switch__TypeCtorInfo_143_143 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__tag_switch__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_95_95, 1) = ((MR_Box) (ll_backend__tag_switch__EndLabel_22));
    }
    {
      ll_backend__tag_switch__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_94_94, 0) = ((MR_Box) (ll_backend__tag_switch__V_95_95));
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_94_94, 1) = ((MR_Box) ((MR_String) "end of tag switch"));
    }
    {
      ll_backend__tag_switch__EndCode_48 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ((MR_Box) (ll_backend__tag_switch__V_94_94)));
    }
    switch (ll_backend__tag_switch__CanFail_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__tag_switch__FailLabel_51;
          MR_Word ll_backend__tag_switch__FailLabelCode_52;
          MR_Word ll_backend__tag_switch__FailureCode_53;
          MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_97_97;
          MR_Word ll_backend__tag_switch__V_98_98;
          MR_Word ll_backend__tag_switch__V_99_99;
          MR_Word ll_backend__tag_switch__STATE_VARIABLE_CLD_101_101;

          {
            ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__FailLabel_51, ll_backend__tag_switch__STATE_VARIABLE_CI_78_78, &ll_backend__tag_switch__STATE_VARIABLE_CI_97_97);
          }
          {
            ll_backend__tag_switch__MaybeFailLabel_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_49, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_51));
          }
          {
            ll_backend__tag_switch__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_99_99, 1) = ((MR_Box) (ll_backend__tag_switch__FailLabel_51));
          }
          {
            ll_backend__tag_switch__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_98_98, 0) = ((MR_Box) (ll_backend__tag_switch__V_99_99));
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_98_98, 1) = ((MR_Box) ((MR_String) "switch has failed"));
          }
          {
            ll_backend__tag_switch__FailLabelCode_52 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ((MR_Box) (ll_backend__tag_switch__V_98_98)));
          }
          {
            ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__tag_switch__BranchStart_30, ll_backend__tag_switch__STATE_VARIABLE_CI_97_97, &ll_backend__tag_switch__STATE_VARIABLE_CLD_101_101);
          }
          {
            ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__tag_switch__FailureCode_53, ll_backend__tag_switch__STATE_VARIABLE_CI_97_97, &ll_backend__tag_switch__STATE_VARIABLE_CI_102_102, ll_backend__tag_switch__STATE_VARIABLE_CLD_101_101);
          }
          {
            ll_backend__tag_switch__FailCode_50 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__FailLabelCode_52, ll_backend__tag_switch__FailureCode_53);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__tag_switch__MaybeFailLabel_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            ll_backend__tag_switch__FailCode_50 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143);
          }
          ll_backend__tag_switch__STATE_VARIABLE_CI_102_102 = ll_backend__tag_switch__STATE_VARIABLE_CI_78_78;
        }
        break;
    }
    ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagsUsed_38 >= ll_backend__tag_switch__DenseSwitchSize_40);
    if (ll_backend__tag_switch__succeeded)
      {
        MR_Word ll_backend__tag_switch__PtagRval_47;
        MR_Word ll_backend__tag_switch__Targets_57;
        MR_Word ll_backend__tag_switch__TableCode_58;
        MR_Word ll_backend__tag_switch__SwitchCode_59;
        MR_Word ll_backend__tag_switch__V_112_112;
        MR_Word ll_backend__tag_switch__V_113_113;
        MR_Word ll_backend__tag_switch__PtagCaseList_123;

        {
          ll_backend__tag_switch__PtagCode_46 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        {
          ll_backend__tag_switch__PtagRval_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_47, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_47, 2) = ((MR_Box) (ll_backend__tag_switch__VarRval_16));
        }
        {
          backend_libs__switch_util__order_ptags_by_value_4_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, (MR_Integer) 0, ll_backend__tag_switch__MaxPrimary_32, ll_backend__tag_switch__PtagCaseMap_37, &ll_backend__tag_switch__PtagCaseList_123);
        }
        {
          ll_backend__tag_switch__generate_primary_jump_table_13_p_0(ll_backend__tag_switch__PtagCaseList_123, (MR_Integer) 0, ll_backend__tag_switch__MaxPrimary_32, ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__VarRval_16, ll_backend__tag_switch__MaybeFailLabel_49, ll_backend__tag_switch__PtagCountMap_33, &ll_backend__tag_switch__Targets_57, &ll_backend__tag_switch__TableCode_58, ll_backend__tag_switch__CaseLabelMap0_35, &ll_backend__tag_switch__CaseLabelMap_56, ll_backend__tag_switch__STATE_VARIABLE_CI_102_102, ll_backend__tag_switch__STATE_VARIABLE_CI_67);
        }
        {
          ll_backend__tag_switch__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_113_113, 1) = ((MR_Box) (ll_backend__tag_switch__PtagRval_47));
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_113_113, 2) = ((MR_Box) (ll_backend__tag_switch__Targets_57));
        }
        {
          ll_backend__tag_switch__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_112_112, 0) = ((MR_Box) (ll_backend__tag_switch__V_113_113));
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_112_112, 1) = ((MR_Box) ((MR_String) "switch on primary tag"));
        }
        {
          ll_backend__tag_switch__SwitchCode_59 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ((MR_Box) (ll_backend__tag_switch__V_112_112)));
        }
        {
          ll_backend__tag_switch__CasesCode_55 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__SwitchCode_59, ll_backend__tag_switch__TableCode_58);
        }
      }
    else
      {
        MR_Word ll_backend__tag_switch__PtagRval_167;
        MR_Integer ll_backend__tag_switch__NumRealRegs_44;
        MR_Word ll_backend__tag_switch__V_83_83;

        ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagsUsed_38 >= (MR_Integer) 2);
        if (ll_backend__tag_switch__succeeded)
          {
            ll_backend__tag_switch__V_83_83 = (MR_Integer) 305;
            {
              libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_39, ll_backend__tag_switch__V_83_83, &ll_backend__tag_switch__NumRealRegs_44);
            }
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__NumRealRegs_44 == (MR_Integer) 0);
            if (!(ll_backend__tag_switch__succeeded))
              {
                MR_Integer ll_backend__tag_switch__PtagRegNo_45;
                MR_Word ll_backend__tag_switch__V_84_84;

                ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__PtagReg_28)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__tag_switch__succeeded)
                  {
                    ll_backend__tag_switch__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagReg_28, (MR_Integer) 0)));
                    ll_backend__tag_switch__PtagRegNo_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagReg_28, (MR_Integer) 1)));
                    ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__V_84_84 == (MR_Integer) 0);
                  }
                if (ll_backend__tag_switch__succeeded)
                  ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagRegNo_45 <= ll_backend__tag_switch__NumRealRegs_44);
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_tag_switch\'/14", (MR_String) "improper reg in tag switch");
                      return;
                    }
                    ll_backend__tag_switch__succeeded = MR_TRUE;
                  }
              }
          }
        if (ll_backend__tag_switch__succeeded)
          {
            MR_Word ll_backend__tag_switch__V_150_150;
            MR_Word ll_backend__tag_switch__V_151_151;
            MR_Word ll_backend__tag_switch__V_152_152;

            {
              ll_backend__tag_switch__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_152_152, 1) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_152_152, 2) = ((MR_Box) (ll_backend__tag_switch__VarRval_16));
            }
            {
              ll_backend__tag_switch__V_151_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_151_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_151_151, 1) = ((MR_Box) (ll_backend__tag_switch__PtagReg_28));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_151_151, 2) = ((MR_Box) (ll_backend__tag_switch__V_152_152));
            }
            {
              ll_backend__tag_switch__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_150_150, 0) = ((MR_Box) (ll_backend__tag_switch__V_151_151));
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_150_150, 1) = ((MR_Box) ((MR_String) "compute tag to switch on"));
            }
            {
              ll_backend__tag_switch__PtagCode_46 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_150_150)));
            }
            {
              ll_backend__tag_switch__PtagRval_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagRval_167, 0) = ((MR_Box) (ll_backend__tag_switch__PtagReg_28));
            }
          }
        else
          {
            {
              ll_backend__tag_switch__PtagCode_46 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
            {
              ll_backend__tag_switch__PtagRval_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_167, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_167, 1) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_167, 2) = ((MR_Box) (ll_backend__tag_switch__VarRval_16));
            }
          }
        ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagsUsed_38 >= ll_backend__tag_switch__BinarySwitchSize_42);
        if (ll_backend__tag_switch__succeeded)
          {
            MR_Word ll_backend__tag_switch__PtagCaseList_54;

            {
              backend_libs__switch_util__order_ptags_by_value_4_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, (MR_Integer) 0, ll_backend__tag_switch__MaxPrimary_32, ll_backend__tag_switch__PtagCaseMap_37, &ll_backend__tag_switch__PtagCaseList_54);
            }
            {
              ll_backend__tag_switch__generate_primary_binary_search_13_p_0(ll_backend__tag_switch__PtagCaseList_54, (MR_Integer) 0, ll_backend__tag_switch__MaxPrimary_32, ll_backend__tag_switch__PtagRval_167, ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__VarRval_16, ll_backend__tag_switch__MaybeFailLabel_49, ll_backend__tag_switch__PtagCountMap_33, &ll_backend__tag_switch__CasesCode_55, ll_backend__tag_switch__CaseLabelMap0_35, &ll_backend__tag_switch__CaseLabelMap_56, ll_backend__tag_switch__STATE_VARIABLE_CI_102_102, ll_backend__tag_switch__STATE_VARIABLE_CI_67);
            }
          }
        else
          {
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagsUsed_38 >= ll_backend__tag_switch__TrySwitchSize_41);
            if (ll_backend__tag_switch__succeeded)
              {
                MR_Word ll_backend__tag_switch__PtagCaseList0_60;
                MR_Word ll_backend__tag_switch__V_106_106;
                MR_Word ll_backend__tag_switch__V_107_107;
                MR_Word ll_backend__tag_switch__PtagCaseList_124;
                MR_Word ll_backend__tag_switch__MostFreqCase_61;
                MR_Word ll_backend__tag_switch__OtherCases_62;

                {
                  backend_libs__switch_util__order_ptags_by_count_3_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, ll_backend__tag_switch__PtagCountMap_33, ll_backend__tag_switch__PtagCaseMap_37, &ll_backend__tag_switch__PtagCaseList0_60);
                }
                ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CanFail_20 == (MR_Integer) 1);
                if (ll_backend__tag_switch__succeeded)
                  {
                    ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__PtagCaseList0_60)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__tag_switch__succeeded)
                      {
                        ll_backend__tag_switch__MostFreqCase_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagCaseList0_60, (MR_Integer) 0)));
                        ll_backend__tag_switch__OtherCases_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagCaseList0_60, (MR_Integer) 1)));
                      }
                  }
                if (ll_backend__tag_switch__succeeded)
                  {
                    MR_Word ll_backend__tag_switch__V_104_104;

                    {
                      ll_backend__tag_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_104_104, 0) = ((MR_Box) (ll_backend__tag_switch__MostFreqCase_61));
                      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      ll_backend__tag_switch__PtagCaseList_124 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[2], ll_backend__tag_switch__OtherCases_62, ll_backend__tag_switch__V_104_104);
                    }
                  }
                else
                  ll_backend__tag_switch__PtagCaseList_124 = ll_backend__tag_switch__PtagCaseList0_60;
                {
                  ll_backend__tag_switch__V_106_106 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143);
                }
                {
                  ll_backend__tag_switch__V_107_107 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143);
                }
                {
                  ll_backend__tag_switch__generate_primary_try_chain_13_p_0(ll_backend__tag_switch__PtagCaseList_124, ll_backend__tag_switch__PtagRval_167, ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__VarRval_16, ll_backend__tag_switch__MaybeFailLabel_49, ll_backend__tag_switch__PtagCountMap_33, ll_backend__tag_switch__V_106_106, ll_backend__tag_switch__V_107_107, &ll_backend__tag_switch__CasesCode_55, ll_backend__tag_switch__CaseLabelMap0_35, &ll_backend__tag_switch__CaseLabelMap_56, ll_backend__tag_switch__STATE_VARIABLE_CI_102_102, ll_backend__tag_switch__STATE_VARIABLE_CI_67);
                }
              }
            else
              {
                MR_Word ll_backend__tag_switch__PtagCaseList_125;

                {
                  backend_libs__switch_util__order_ptags_by_count_3_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, ll_backend__tag_switch__PtagCountMap_33, ll_backend__tag_switch__PtagCaseMap_37, &ll_backend__tag_switch__PtagCaseList_125);
                }
                {
                  ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(ll_backend__tag_switch__PtagCaseList_125, ll_backend__tag_switch__PtagRval_167, ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__VarRval_16, ll_backend__tag_switch__MaybeFailLabel_49, ll_backend__tag_switch__PtagCountMap_33, &ll_backend__tag_switch__CasesCode_55, ll_backend__tag_switch__CaseLabelMap0_35, &ll_backend__tag_switch__CaseLabelMap_56, ll_backend__tag_switch__STATE_VARIABLE_CI_102_102, ll_backend__tag_switch__STATE_VARIABLE_CI_67);
                }
              }
          }
      }
    {
      ll_backend__tag_switch__V_119_119 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143);
    }
    {
      mercury__map__foldl_4_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, ll_backend__tag_switch__TypeCtorInfo_135_135, (MR_Word) &ll_backend__tag_switch_scalar_common_2[3], (MR_Word) &ll_backend__tag_switch_scalar_common_1[3], ll_backend__tag_switch__CaseLabelMap_56, ((MR_Box) (ll_backend__tag_switch__V_119_119)), &ll_backend__tag_switch__conv8_RemainingCasesCode_63);
    }
    ll_backend__tag_switch__RemainingCasesCode_63 = ((MR_Word) ll_backend__tag_switch__conv8_RemainingCasesCode_63);
    {
      ll_backend__tag_switch__V_122_122 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__FailCode_50, ll_backend__tag_switch__EndCode_48);
    }
    {
      ll_backend__tag_switch__V_121_121 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__RemainingCasesCode_63, ll_backend__tag_switch__V_122_122);
    }
    {
      ll_backend__tag_switch__V_120_120 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__CasesCode_55, ll_backend__tag_switch__V_121_121);
    }
    {
      *ll_backend__tag_switch__Code_24 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__PtagCode_46, ll_backend__tag_switch__V_120_120);
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.tag_switch. */
