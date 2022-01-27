/*
** Automatically generated from `tag_switch.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 148 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0;

#line 151 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_info__type_ctor_info_branch_end_info_0;

#line 154 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

#line 157 "ll_backend.tag_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0;

#line 160 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0;

#line 163 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__pti_ptag_case_entry_1__plain_ll_backend__llds__type_ctor_info_label_0;

#line 166 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 169 "ll_backend.tag_switch.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__tag_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

#line 172 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

#line 175 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0;

#line 178 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_0;

#line 181 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_1;

#line 184 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_2;

#line 187 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_3;

#line 190 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_value_ordered_switch_method_0[4];

#line 193 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_name_ordered_switch_method_0[4];

#line 196 "ll_backend.tag_switch.c"
static const MR_Integer ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_switch_method_0[4];

#line 199 "ll_backend.tag_switch.c"
static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0_10001(
#line 202 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 204 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_2);

#line 207 "ll_backend.tag_switch.c"
static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0_10001(
#line 210 "ll_backend.tag_switch.c"
  MR_Box * ll_backend__tag_switch__wrapper_arg_1,
#line 212 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_2,
#line 214 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_3);

#line 967 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__967__1_2_p_0(
#line 967 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__LowRangeEnd_28,
#line 967 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_71);

#line 956 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__956__1_2_p_0(
#line 956 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinStag_12,
#line 956 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurSecPrime_23);

#line 909 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__909__1_2_p_0(
#line 909 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseList_6,
#line 909 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_19);

#line 694 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__694__1_2_p_0(
#line 694 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_16,
#line 694 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_56);

#line 623 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__623__1_2_p_0(
#line 623 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__LowRangeEnd_39,
#line 623 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_88);

#line 610 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__610__1_2_p_0(
#line 610 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_31,
#line 610 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_34);

#line 605 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__605__1_2_p_0(
#line 605 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinPtag_15,
#line 605 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurPrimaryPrime_29);

#line 548 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__548__1_2_p_0(
#line 548 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_29,
#line 548 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_32);

#line 535 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__535__1_2_p_0(
#line 535 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 535 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_48);

#line 437 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__437__1_2_p_0(
#line 437 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_46,
#line 437 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_49);

#line 346 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__346__1_2_p_0(
#line 346 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_40,
#line 346 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_43);

#line 186 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0(
#line 186 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__HeadVar__1_1,
#line 186 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_2,
#line 186 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__3_3);

#line 186 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0(
#line 186 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_1,
#line 186 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_2);

#line 1011 "tag_switch.m"
static MR_Box MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0_1(
#line 1011 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 1011 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1);

#line 1000 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0(
#line 1000 "tag_switch.m"
  MR_String ll_backend__tag_switch__BaseStr_5,
#line 1000 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_6,
#line 1000 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_7,
#line 1000 "tag_switch.m"
  MR_String * ll_backend__tag_switch__Comment_8);

#line 967 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2(
#line 967 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 967 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1);

#line 956 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1(
#line 956 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 931 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(
#line 931 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagGoals_11,
#line 931 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinStag_12,
#line 931 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxStag_13,
#line 931 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_14,
#line 931 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_15,
#line 931 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_16,
#line 931 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49,
#line 931 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50,
#line 931 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_51,
#line 931 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_52);

#line 909 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1(
#line 909 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 903 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(
#line 903 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseList_6,
#line 903 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurSecondary_7,
#line 903 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_8,
#line 903 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_9,
#line 903 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Targets_10);

#line 850 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(
#line 850 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 850 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_2,
#line 850 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_3,
#line 850 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_4,
#line 850 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_5,
#line 850 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6,
#line 850 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_7);

#line 826 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(
#line 826 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseLabel_9,
#line 826 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_10,
#line 826 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__Secondary_11,
#line 826 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_12,
#line 826 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_19,
#line 826 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_20,
#line 826 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_21,
#line 826 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_22);

#line 792 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(
#line 792 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 792 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_2,
#line 792 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_3,
#line 792 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_4,
#line 792 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5,
#line 792 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6,
#line 792 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_7,
#line 792 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_8);

#line 694 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1(
#line 694 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 661 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0(
#line 661 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagGoalMap_14,
#line 661 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_15,
#line 661 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_16,
#line 661 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_17,
#line 661 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 661 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_19,
#line 661 "tag_switch.m"
  MR_Word ll_backend__tag_switch__Rval_20,
#line 661 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_21,
#line 661 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 661 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48,
#line 661 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49,
#line 661 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_50,
#line 661 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_51);

#line 623 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_3(
#line 623 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 623 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1);

#line 610 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2(
#line 610 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 605 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1(
#line 605 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 577 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0(
#line 577 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 577 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinPtag_15,
#line 577 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxPtag_16,
#line 577 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_17,
#line 577 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 577 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_19,
#line 577 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_20,
#line 577 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_21,
#line 577 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 577 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60,
#line 577 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61,
#line 577 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_62,
#line 577 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_63);

#line 548 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_2(
#line 548 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 535 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1(
#line 535 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 525 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0(
#line 525 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 525 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurPrimary_15,
#line 525 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxPrimary_16,
#line 525 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_17,
#line 525 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_18,
#line 525 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_19,
#line 525 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_20,
#line 525 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Targets_21,
#line 525 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 525 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40,
#line 525 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41,
#line 525 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_42,
#line 525 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_43);

#line 508 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_p_0(
#line 508 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 508 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 508 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__3_3,
#line 508 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__TestRval_4);

#line 1011 "tag_switch.m"
static MR_Box MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0_1(
#line 1011 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 1011 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1);

#line 477 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_17,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 477 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_19,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_20,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCase_21,
#line 477 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_22,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_23,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_24,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_25,
#line 477 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__PrevTestsCode_26,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevCasesCode0_27,
#line 477 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__PrevCasesCode_28,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40,
#line 477 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_42,
#line 477 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_43);

#line 437 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1(
#line 437 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 422 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0(
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_3,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_4,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_5,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_6,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_7,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevCasesCode0_8,
#line 422 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_9,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10,
#line 422 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_11,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_12,
#line 422 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_13);

#line 406 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_p_0(
#line 406 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 406 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 406 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__3_3,
#line 406 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__TestRval_4);

#line 380 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(
#line 380 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_14,
#line 380 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_15,
#line 380 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_16,
#line 380 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_17,
#line 380 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCase_18,
#line 380 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_19,
#line 380 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_20,
#line 380 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_21,
#line 380 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 380 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_33,
#line 380 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_34,
#line 380 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_35,
#line 380 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_36);

#line 346 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0_1(
#line 346 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 331 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(
#line 331 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 331 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 331 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_3,
#line 331 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_4,
#line 331 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_5,
#line 331 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_6,
#line 331 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_7,
#line 331 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8,
#line 331 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9,
#line 331 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_10,
#line 331 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_11);

#line 324 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_13_p_0_2(
#line 324 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 324 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 324 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_2,
#line 324 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_3,
#line 324 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_4);

#line 221 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_13_p_0_1(
#line 221 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 221 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 221 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_2,
#line 221 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_3,
#line 221 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_4,
#line 221 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_5,
#line 221 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_6,
#line 221 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_7,
#line 221 "tag_switch.m"
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
    ((MR_Box) (ll_backend__tag_switch__generate_tag_switch_13_p_0_2)),
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
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_branch_end_info_0))
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
    ((MR_Box) (&ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_info__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_info__type_ctor_info_branch_end_info_0)),
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1014 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0
  }
};

#line 1023 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_info__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_branch_end_info_0
  }
};

#line 1031 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 1039 "ll_backend.tag_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1047 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__tag_switch__backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1055 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__pti_ptag_case_entry_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1063 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1071 "ll_backend.tag_switch.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__tag_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1080 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__tag_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1088 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1097 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_0 = {
  (MR_String) "try_me_else_chain",
  (MR_Integer) 0
};

#line 1103 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_1 = {
  (MR_String) "try_chain",
  (MR_Integer) 1
};

#line 1109 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_2 = {
  (MR_String) "jump_table",
  (MR_Integer) 2
};

#line 1115 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_3 = {
  (MR_String) "binary_search",
  (MR_Integer) 3
};

#line 1121 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_value_ordered_switch_method_0[4] = {
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_0,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_1,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_2,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_3
};

#line 1129 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_name_ordered_switch_method_0[4] = {
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_3,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_2,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_1,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_0
};

#line 1137 "ll_backend.tag_switch.c"
static const MR_Integer ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_switch_method_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1145 "ll_backend.tag_switch.c"
const MR_TypeCtorInfo_Struct ll_backend__tag_switch__ll_backend__tag_switch__type_ctor_info_switch_method_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__tag_switch____Unify____switch_method_0_0_10001)),
  ((MR_Box) (ll_backend__tag_switch____Compare____switch_method_0_0_10001)),
  (MR_String) "ll_backend.tag_switch",
  (MR_String) "switch_method",
  {
    ll_backend__tag_switch__ll_backend__tag_switch__enum_name_ordered_switch_method_0
  },
  {
    ll_backend__tag_switch__ll_backend__tag_switch__enum_value_ordered_switch_method_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_switch_method_0
};

#line 1166 "ll_backend.tag_switch.c"
static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0_10001(
#line 1169 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 1171 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_2)
#line 1173 "ll_backend.tag_switch.c"
{
#line 1175 "ll_backend.tag_switch.c"
  {
#line 1177 "ll_backend.tag_switch.c"
    MR_bool ll_backend__tag_switch__succeeded;

#line 1180 "ll_backend.tag_switch.c"
    {
#line 1182 "ll_backend.tag_switch.c"
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch____Unify____switch_method_0_0(((MR_Word) ll_backend__tag_switch__wrapper_arg_1), ((MR_Word) ll_backend__tag_switch__wrapper_arg_2));
    }
#line 1185 "ll_backend.tag_switch.c"
    return ll_backend__tag_switch__succeeded;
#line 1187 "ll_backend.tag_switch.c"
  }
#line 1189 "ll_backend.tag_switch.c"
}

#line 1192 "ll_backend.tag_switch.c"
static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0_10001(
#line 1195 "ll_backend.tag_switch.c"
  MR_Box * ll_backend__tag_switch__wrapper_arg_1,
#line 1197 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_2,
#line 1199 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_3)
#line 1201 "ll_backend.tag_switch.c"
{
#line 1203 "ll_backend.tag_switch.c"
  {
#line 1205 "ll_backend.tag_switch.c"
    MR_Word ll_backend__tag_switch__conv0_HeadVar__1_1;

#line 1208 "ll_backend.tag_switch.c"
    {
#line 1210 "ll_backend.tag_switch.c"
      ll_backend__tag_switch____Compare____switch_method_0_0(&ll_backend__tag_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__tag_switch__wrapper_arg_2), ((MR_Word) ll_backend__tag_switch__wrapper_arg_3));
    }
#line 1213 "ll_backend.tag_switch.c"
    *ll_backend__tag_switch__wrapper_arg_1 = ((MR_Box) (ll_backend__tag_switch__conv0_HeadVar__1_1));
#line 1215 "ll_backend.tag_switch.c"
  }
#line 1217 "ll_backend.tag_switch.c"
}

#line 967 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__967__1_2_p_0(
#line 967 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__LowRangeEnd_28,
#line 967 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_71)
#line 967 "tag_switch.m"
{
#line 967 "tag_switch.m"
  {
#line 967 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 967 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__Stag_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__HeadVar__2_71, (MR_Integer) 0)));
#line 968 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__HeadVar__2_71, (MR_Integer) 1)));

#line 969 "tag_switch.m"
    ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__Stag_32 <= ll_backend__tag_switch__LowRangeEnd_28);
#line 967 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 967 "tag_switch.m"
  }
#line 967 "tag_switch.m"
}

#line 956 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__956__1_2_p_0(
#line 956 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinStag_12,
#line 956 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurSecPrime_23)
#line 956 "tag_switch.m"
{
#line 956 "tag_switch.m"
  {
#line 956 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MinStag_12 == ll_backend__tag_switch__CurSecPrime_23);

#line 956 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 956 "tag_switch.m"
  }
#line 956 "tag_switch.m"
}

#line 909 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__909__1_2_p_0(
#line 909 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseList_6,
#line 909 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_19)
#line 909 "tag_switch.m"
{
#line 909 "tag_switch.m"
  {
#line 909 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 909 "tag_switch.m"
    {
#line 909 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[7], ((MR_Box) (ll_backend__tag_switch__CaseList_6)), ((MR_Box) (ll_backend__tag_switch__HeadVar__2_19)));
    }
#line 909 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 909 "tag_switch.m"
  }
#line 909 "tag_switch.m"
}

#line 694 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__694__1_2_p_0(
#line 694 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_16,
#line 694 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_56)
#line 694 "tag_switch.m"
{
#line 694 "tag_switch.m"
  {
#line 694 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 694 "tag_switch.m"
    {
#line 694 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[6], ((MR_Box) (ll_backend__tag_switch__OtherPtags_16)), ((MR_Box) (ll_backend__tag_switch__HeadVar__2_56)));
    }
#line 694 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 694 "tag_switch.m"
  }
#line 694 "tag_switch.m"
}

#line 623 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__623__1_2_p_0(
#line 623 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__LowRangeEnd_39,
#line 623 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_88)
#line 623 "tag_switch.m"
{
#line 623 "tag_switch.m"
  {
#line 623 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 623 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__Ptag_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__HeadVar__2_88, (MR_Integer) 0)));
#line 624 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__HeadVar__2_88, (MR_Integer) 1)));

#line 625 "tag_switch.m"
    ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__Ptag_43 <= ll_backend__tag_switch__LowRangeEnd_39);
#line 623 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 623 "tag_switch.m"
  }
#line 623 "tag_switch.m"
}

#line 610 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__610__1_2_p_0(
#line 610 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_31,
#line 610 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_34)
#line 610 "tag_switch.m"
{
#line 610 "tag_switch.m"
  {
#line 610 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagLoc_31 == ll_backend__tag_switch__StagLocPrime_34);

#line 610 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 610 "tag_switch.m"
  }
#line 610 "tag_switch.m"
}

#line 605 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__605__1_2_p_0(
#line 605 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinPtag_15,
#line 605 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurPrimaryPrime_29)
#line 605 "tag_switch.m"
{
#line 605 "tag_switch.m"
  {
#line 605 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MinPtag_15 == ll_backend__tag_switch__CurPrimaryPrime_29);

#line 605 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 605 "tag_switch.m"
  }
#line 605 "tag_switch.m"
}

#line 548 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__548__1_2_p_0(
#line 548 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_29,
#line 548 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_32)
#line 548 "tag_switch.m"
{
#line 548 "tag_switch.m"
  {
#line 548 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagLoc_29 == ll_backend__tag_switch__StagLocPrime_32);

#line 548 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 548 "tag_switch.m"
  }
#line 548 "tag_switch.m"
}

#line 535 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__535__1_2_p_0(
#line 535 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 535 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_48)
#line 535 "tag_switch.m"
{
#line 535 "tag_switch.m"
  {
#line 535 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 535 "tag_switch.m"
    {
#line 535 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[5], ((MR_Box) (ll_backend__tag_switch__PtagGroups_14)), ((MR_Box) (ll_backend__tag_switch__HeadVar__2_48)));
    }
#line 535 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 535 "tag_switch.m"
  }
#line 535 "tag_switch.m"
}

#line 437 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__437__1_2_p_0(
#line 437 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_46,
#line 437 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_49)
#line 437 "tag_switch.m"
{
#line 437 "tag_switch.m"
  {
#line 437 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagLoc_46 == ll_backend__tag_switch__StagLocPrime_49);

#line 437 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 437 "tag_switch.m"
  }
#line 437 "tag_switch.m"
}

#line 346 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__346__1_2_p_0(
#line 346 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_40,
#line 346 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_43)
#line 346 "tag_switch.m"
{
#line 346 "tag_switch.m"
  {
#line 346 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagLoc_40 == ll_backend__tag_switch__StagLocPrime_43);

#line 346 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 346 "tag_switch.m"
  }
#line 346 "tag_switch.m"
}

#line 186 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0(
#line 186 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__HeadVar__1_1,
#line 186 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_2,
#line 186 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__3_3)
#line 186 "tag_switch.m"
{
#line 186 "tag_switch.m"
  {
#line 186 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 186 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__Cast_HeadVar1_4 = (MR_Integer) ll_backend__tag_switch__HeadVar__2_2;
#line 186 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__Cast_HeadVar2_5 = (MR_Integer) ll_backend__tag_switch__HeadVar__3_3;

#line 186 "tag_switch.m"
    {
#line 186 "tag_switch.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__tag_switch__HeadVar__1_1, ll_backend__tag_switch__Cast_HeadVar1_4, ll_backend__tag_switch__Cast_HeadVar2_5);
#line 186 "tag_switch.m"
      return;
    }
#line 186 "tag_switch.m"
  }
#line 186 "tag_switch.m"
}

#line 186 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0(
#line 186 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_1,
#line 186 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_2)
#line 186 "tag_switch.m"
{
#line 1519 "ll_backend.tag_switch.c"
  {
#line 1521 "ll_backend.tag_switch.c"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__HeadVar__2_1 == ll_backend__tag_switch__HeadVar__2_2);

#line 1524 "ll_backend.tag_switch.c"
    return ll_backend__tag_switch__succeeded;
#line 1526 "ll_backend.tag_switch.c"
  }
#line 186 "tag_switch.m"
}

#line 1011 "tag_switch.m"
static MR_Box MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0_1(
#line 1011 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 1011 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1)
#line 1011 "tag_switch.m"
{
#line 1011 "tag_switch.m"
  {
#line 1011 "tag_switch.m"
    MR_Box ll_backend__tag_switch__wrapper_arg_2;
#line 1011 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;
#line 1011 "tag_switch.m"
    MR_String ll_backend__tag_switch__conv0_HeadVar__2_2;

#line 1011 "tag_switch.m"
    {
#line 1011 "tag_switch.m"
      ll_backend__tag_switch__conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) ll_backend__tag_switch__wrapper_arg_1));
    }
#line 1011 "tag_switch.m"
    ll_backend__tag_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__tag_switch__conv0_HeadVar__2_2));
#line 1011 "tag_switch.m"
    return ll_backend__tag_switch__wrapper_arg_2;
#line 1011 "tag_switch.m"
  }
#line 1011 "tag_switch.m"
}

#line 1000 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0(
#line 1000 "tag_switch.m"
  MR_String ll_backend__tag_switch__BaseStr_5,
#line 1000 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_6,
#line 1000 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_7,
#line 1000 "tag_switch.m"
  MR_String * ll_backend__tag_switch__Comment_8)
#line 1000 "tag_switch.m"
{
#line 1005 "tag_switch.m"
  {
#line 1005 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 1005 "tag_switch.m"
    if ((ll_backend__tag_switch__OtherPtags_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1005 "tag_switch.m"
      {
#line 1005 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_21_21;

#line 1006 "tag_switch.m"
        {
#line 1006 "tag_switch.m"
          ll_backend__tag_switch__V_21_21 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__MainPtag_6);
        }
#line 1006 "tag_switch.m"
        {
#line 1006 "tag_switch.m"
          *ll_backend__tag_switch__Comment_8 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__BaseStr_5, ll_backend__tag_switch__V_21_21);
        }
#line 1005 "tag_switch.m"
      }
#line 1005 "tag_switch.m"
    else
#line 1008 "tag_switch.m"
      {
#line 1008 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_11_11;
#line 1008 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_12_12;
#line 1008 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_13_13;
#line 1008 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_15_15;
#line 1008 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_16_16;
#line 1008 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_18_18;

#line 1010 "tag_switch.m"
        {
#line 1010 "tag_switch.m"
          ll_backend__tag_switch__V_12_12 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__MainPtag_6);
        }
#line 1011 "tag_switch.m"
        {
#line 1011 "tag_switch.m"
          ll_backend__tag_switch__V_18_18 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__tag_switch_scalar_common_1[5], ll_backend__tag_switch__OtherPtags_7);
        }
#line 1012 "tag_switch.m"
        {
#line 1012 "tag_switch.m"
          ll_backend__tag_switch__V_16_16 = mercury__string__join_list_2_f_0((MR_String) ", ", ll_backend__tag_switch__V_18_18);
        }
#line 1010 "tag_switch.m"
        {
#line 1010 "tag_switch.m"
          ll_backend__tag_switch__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__V_16_16, (MR_String) ")");
        }
#line 1010 "tag_switch.m"
        {
#line 1010 "tag_switch.m"
          ll_backend__tag_switch__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "(shared with ", ll_backend__tag_switch__V_15_15);
        }
#line 1009 "tag_switch.m"
        {
#line 1009 "tag_switch.m"
          ll_backend__tag_switch__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__V_12_12, ll_backend__tag_switch__V_13_13);
        }
#line 1009 "tag_switch.m"
        {
#line 1009 "tag_switch.m"
          *ll_backend__tag_switch__Comment_8 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__BaseStr_5, ll_backend__tag_switch__V_11_11);
        }
#line 1008 "tag_switch.m"
      }
#line 1005 "tag_switch.m"
  }
#line 1000 "tag_switch.m"
}

#line 967 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2(
#line 967 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 967 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1)
#line 967 "tag_switch.m"
{
#line 967 "tag_switch.m"
  {
#line 967 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 967 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 967 "tag_switch.m"
    {
#line 967 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__967__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__tag_switch__wrapper_arg_1));
    }
#line 967 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 967 "tag_switch.m"
  }
#line 967 "tag_switch.m"
}

#line 956 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1(
#line 956 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 956 "tag_switch.m"
{
#line 956 "tag_switch.m"
  {
#line 956 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 956 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 956 "tag_switch.m"
    {
#line 956 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__956__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 956 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 956 "tag_switch.m"
  }
#line 956 "tag_switch.m"
}

#line 931 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(
#line 931 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagGoals_11,
#line 931 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinStag_12,
#line 931 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxStag_13,
#line 931 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_14,
#line 931 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_15,
#line 931 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_16,
#line 931 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49,
#line 931 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50,
#line 931 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_51,
#line 931 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_52)
#line 931 "tag_switch.m"
{
#line 964 "tag_switch.m"
  {
#line 964 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MinStag_12 == ll_backend__tag_switch__MaxStag_13);

#line 964 "tag_switch.m"
    if (ll_backend__tag_switch__succeeded)
#line 939 "tag_switch.m"
      {
#line 954 "tag_switch.m"
        if ((ll_backend__tag_switch__StagGoals_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 941 "tag_switch.m"
          {
#line 950 "tag_switch.m"
            if ((ll_backend__tag_switch__MaybeFailLabel_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 951 "tag_switch.m"
              {
#line 952 "tag_switch.m"
                {
#line 952 "tag_switch.m"
                  *ll_backend__tag_switch__Code_16 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
#line 951 "tag_switch.m"
              }
#line 950 "tag_switch.m"
            else
#line 944 "tag_switch.m"
              {
#line 944 "tag_switch.m"
                MR_Word ll_backend__tag_switch__FailLabel_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_15, (MR_Integer) 0)));
#line 944 "tag_switch.m"
                MR_String ll_backend__tag_switch__StagStr_21;
#line 944 "tag_switch.m"
                MR_String ll_backend__tag_switch__Comment_22;
#line 944 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_65_65;
#line 944 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_66_66;
#line 944 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_67_67;

#line 945 "tag_switch.m"
                {
#line 945 "tag_switch.m"
                  mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MinStag_12, &ll_backend__tag_switch__StagStr_21);
                }
#line 946 "tag_switch.m"
                {
#line 946 "tag_switch.m"
                  ll_backend__tag_switch__Comment_22 = mercury__string__f_43_43_2_f_0((MR_String) "no code for ptag ", ll_backend__tag_switch__StagStr_21);
                }
#line 948 "tag_switch.m"
                {
#line 948 "tag_switch.m"
                  ll_backend__tag_switch__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 948 "tag_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_67_67, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_20));
#line 948 "tag_switch.m"
                }
#line 948 "tag_switch.m"
                {
#line 948 "tag_switch.m"
                  ll_backend__tag_switch__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 948 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_66_66, 1) = ((MR_Box) (ll_backend__tag_switch__V_67_67));
#line 948 "tag_switch.m"
                }
#line 947 "tag_switch.m"
                {
#line 947 "tag_switch.m"
                  ll_backend__tag_switch__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 947 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_65_65, 0) = ((MR_Box) (ll_backend__tag_switch__V_66_66));
#line 947 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_65_65, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_22));
#line 947 "tag_switch.m"
                }
#line 947 "tag_switch.m"
                {
#line 947 "tag_switch.m"
                  *ll_backend__tag_switch__Code_16 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_65_65)));
                }
#line 944 "tag_switch.m"
              }
#line 952 "tag_switch.m"
            *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49;
#line 941 "tag_switch.m"
          }
#line 954 "tag_switch.m"
        else
#line 954 "tag_switch.m"
          {
#line 954 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagGoals_11, (MR_Integer) 1)));
#line 954 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagGoals_11, (MR_Integer) 0)));

#line 954 "tag_switch.m"
            if ((ll_backend__tag_switch__V_100_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 955 "tag_switch.m"
              {
#line 955 "tag_switch.m"
                MR_Integer ll_backend__tag_switch__CurSecPrime_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_101_101, (MR_Integer) 0)));
#line 955 "tag_switch.m"
                MR_Word ll_backend__tag_switch__CaseLabel_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_101_101, (MR_Integer) 1)));
#line 955 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_59_59;

#line 956 "tag_switch.m"
                {
#line 956 "tag_switch.m"
                  ll_backend__tag_switch__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 956 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[3]));
#line 956 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1));
#line 956 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 956 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 3) = ((MR_Box) (ll_backend__tag_switch__MinStag_12));
#line 956 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 4) = ((MR_Box) (ll_backend__tag_switch__CurSecPrime_23));
#line 956 "tag_switch.m"
                }
#line 956 "tag_switch.m"
                {
#line 956 "tag_switch.m"
                  mercury__require__expect_4_p_0(ll_backend__tag_switch__V_59_59, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", (MR_String) "cur_secondary mismatch");
                }
#line 958 "tag_switch.m"
                {
#line 958 "tag_switch.m"
                  ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_24, ll_backend__tag_switch__Code_16, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50);
                }
#line 955 "tag_switch.m"
              }
#line 954 "tag_switch.m"
            else
#line 960 "tag_switch.m"
              {
#line 961 "tag_switch.m"
                {
#line 961 "tag_switch.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", (MR_String) "goallist not singleton or empty when binary search ends");
#line 961 "tag_switch.m"
                  return;
                }
#line 960 "tag_switch.m"
              }
#line 954 "tag_switch.m"
          }
#line 961 "tag_switch.m"
        *ll_backend__tag_switch__STATE_VARIABLE_CI_52 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_51;
#line 939 "tag_switch.m"
      }
#line 964 "tag_switch.m"
    else
#line 965 "tag_switch.m"
      {
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__TypeCtorInfo_99_99;
#line 965 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__LowRangeEnd_28;
#line 965 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__HighRangeStart_29;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__InLowGroup_30;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowGoals_34;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__HighGoals_35;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__NewLabel_36;
#line 965 "tag_switch.m"
        MR_String ll_backend__tag_switch__LowStartStr_37;
#line 965 "tag_switch.m"
        MR_String ll_backend__tag_switch__LowEndStr_38;
#line 965 "tag_switch.m"
        MR_String ll_backend__tag_switch__HighStartStr_39;
#line 965 "tag_switch.m"
        MR_String ll_backend__tag_switch__HighEndStr_40;
#line 965 "tag_switch.m"
        MR_String ll_backend__tag_switch__IfComment_41;
#line 965 "tag_switch.m"
        MR_String ll_backend__tag_switch__LabelComment_42;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowRangeEndConst_43;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__TestRval_44;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__IfCode_45;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LabelCode_46;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowRangeCode_47;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__HighRangeCode_48;
#line 965 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__V_68_68 = (ll_backend__tag_switch__MinStag_12 + ll_backend__tag_switch__MaxStag_13);
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_72_72;
#line 965 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_74_74;
#line 965 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_75_75;
#line 965 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_78_78;
#line 965 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_79_79;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_81_81;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_83_83;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_84_84;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_85_85;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_86_86;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_87_87;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_88_88;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_89_89;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_92_92;
#line 965 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_93_93;

#line 965 "tag_switch.m"
        {
#line 965 "tag_switch.m"
          ll_backend__tag_switch__LowRangeEnd_28 = mercury__int__f_47_47_2_f_0(ll_backend__tag_switch__V_68_68, (MR_Integer) 2);
        }
#line 966 "tag_switch.m"
        ll_backend__tag_switch__HighRangeStart_29 = (ll_backend__tag_switch__LowRangeEnd_28 + (MR_Integer) 1);
#line 967 "tag_switch.m"
        {
#line 967 "tag_switch.m"
          ll_backend__tag_switch__InLowGroup_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 967 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_30, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[7]));
#line 967 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_30, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2));
#line 967 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 967 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_30, 3) = ((MR_Box) (ll_backend__tag_switch__LowRangeEnd_28));
#line 967 "tag_switch.m"
        }
#line 971 "tag_switch.m"
        {
#line 971 "tag_switch.m"
          mercury__list__filter_4_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[2], ll_backend__tag_switch__InLowGroup_30, ll_backend__tag_switch__StagGoals_11, &ll_backend__tag_switch__LowGoals_34, &ll_backend__tag_switch__HighGoals_35);
        }
#line 972 "tag_switch.m"
        {
#line 972 "tag_switch.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__NewLabel_36, ll_backend__tag_switch__STATE_VARIABLE_CI_0_51, &ll_backend__tag_switch__STATE_VARIABLE_CI_72_72);
        }
#line 973 "tag_switch.m"
        {
#line 973 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MinStag_12, &ll_backend__tag_switch__LowStartStr_37);
        }
#line 974 "tag_switch.m"
        {
#line 974 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__LowRangeEnd_28, &ll_backend__tag_switch__LowEndStr_38);
        }
#line 975 "tag_switch.m"
        {
#line 975 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__HighRangeStart_29, &ll_backend__tag_switch__HighStartStr_39);
        }
#line 976 "tag_switch.m"
        {
#line 976 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MaxStag_13, &ll_backend__tag_switch__HighEndStr_40);
        }
#line 978 "tag_switch.m"
        {
#line 978 "tag_switch.m"
          ll_backend__tag_switch__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) " to ", ll_backend__tag_switch__LowEndStr_38);
        }
#line 977 "tag_switch.m"
        {
#line 977 "tag_switch.m"
          ll_backend__tag_switch__V_74_74 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__LowStartStr_37, ll_backend__tag_switch__V_75_75);
        }
#line 977 "tag_switch.m"
        {
#line 977 "tag_switch.m"
          ll_backend__tag_switch__IfComment_41 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough for stags ", ll_backend__tag_switch__V_74_74);
        }
#line 980 "tag_switch.m"
        {
#line 980 "tag_switch.m"
          ll_backend__tag_switch__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) " to ", ll_backend__tag_switch__HighEndStr_40);
        }
#line 979 "tag_switch.m"
        {
#line 979 "tag_switch.m"
          ll_backend__tag_switch__V_78_78 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__HighStartStr_39, ll_backend__tag_switch__V_79_79);
        }
#line 979 "tag_switch.m"
        {
#line 979 "tag_switch.m"
          ll_backend__tag_switch__LabelComment_42 = mercury__string__f_43_43_2_f_0((MR_String) "code for stags ", ll_backend__tag_switch__V_78_78);
        }
#line 981 "tag_switch.m"
        {
#line 981 "tag_switch.m"
          ll_backend__tag_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 981 "tag_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_81_81, 0) = ((MR_Box) (ll_backend__tag_switch__LowRangeEnd_28));
#line 981 "tag_switch.m"
        }
#line 981 "tag_switch.m"
        {
#line 981 "tag_switch.m"
          ll_backend__tag_switch__LowRangeEndConst_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 981 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__LowRangeEndConst_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 981 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__LowRangeEndConst_43, 1) = ((MR_Box) (ll_backend__tag_switch__V_81_81));
#line 981 "tag_switch.m"
        }
#line 982 "tag_switch.m"
        {
#line 982 "tag_switch.m"
          ll_backend__tag_switch__TestRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 982 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 982 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
#line 982 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_44, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_14));
#line 982 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_44, 3) = ((MR_Box) (ll_backend__tag_switch__LowRangeEndConst_43));
#line 982 "tag_switch.m"
        }
#line 2083 "ll_backend.tag_switch.c"
        ll_backend__tag_switch__TypeCtorInfo_99_99 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 984 "tag_switch.m"
        {
#line 984 "tag_switch.m"
          ll_backend__tag_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 984 "tag_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_85_85, 0) = ((MR_Box) (ll_backend__tag_switch__NewLabel_36));
#line 984 "tag_switch.m"
        }
#line 984 "tag_switch.m"
        {
#line 984 "tag_switch.m"
          ll_backend__tag_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 984 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 984 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 1) = ((MR_Box) (ll_backend__tag_switch__TestRval_44));
#line 984 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 2) = ((MR_Box) (ll_backend__tag_switch__V_85_85));
#line 984 "tag_switch.m"
        }
#line 983 "tag_switch.m"
        {
#line 983 "tag_switch.m"
          ll_backend__tag_switch__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 983 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_83_83, 0) = ((MR_Box) (ll_backend__tag_switch__V_84_84));
#line 983 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_83_83, 1) = ((MR_Box) (ll_backend__tag_switch__IfComment_41));
#line 983 "tag_switch.m"
        }
#line 983 "tag_switch.m"
        {
#line 983 "tag_switch.m"
          ll_backend__tag_switch__IfCode_45 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ((MR_Box) (ll_backend__tag_switch__V_83_83)));
        }
#line 987 "tag_switch.m"
        {
#line 987 "tag_switch.m"
          ll_backend__tag_switch__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 987 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 987 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_87_87, 1) = ((MR_Box) (ll_backend__tag_switch__NewLabel_36));
#line 987 "tag_switch.m"
        }
#line 986 "tag_switch.m"
        {
#line 986 "tag_switch.m"
          ll_backend__tag_switch__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 986 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_86_86, 0) = ((MR_Box) (ll_backend__tag_switch__V_87_87));
#line 986 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_86_86, 1) = ((MR_Box) (ll_backend__tag_switch__LabelComment_42));
#line 986 "tag_switch.m"
        }
#line 986 "tag_switch.m"
        {
#line 986 "tag_switch.m"
          ll_backend__tag_switch__LabelCode_46 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ((MR_Box) (ll_backend__tag_switch__V_86_86)));
        }
#line 990 "tag_switch.m"
        {
#line 990 "tag_switch.m"
          ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(ll_backend__tag_switch__LowGoals_34, ll_backend__tag_switch__MinStag_12, ll_backend__tag_switch__LowRangeEnd_28, ll_backend__tag_switch__StagRval_14, ll_backend__tag_switch__MaybeFailLabel_15, &ll_backend__tag_switch__LowRangeCode_47, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_88_88, ll_backend__tag_switch__STATE_VARIABLE_CI_72_72, &ll_backend__tag_switch__STATE_VARIABLE_CI_89_89);
        }
#line 992 "tag_switch.m"
        {
#line 992 "tag_switch.m"
          ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(ll_backend__tag_switch__HighGoals_35, ll_backend__tag_switch__HighRangeStart_29, ll_backend__tag_switch__MaxStag_13, ll_backend__tag_switch__StagRval_14, ll_backend__tag_switch__MaybeFailLabel_15, &ll_backend__tag_switch__HighRangeCode_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_88_88, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50, ll_backend__tag_switch__STATE_VARIABLE_CI_89_89, ll_backend__tag_switch__STATE_VARIABLE_CI_52);
        }
#line 995 "tag_switch.m"
        {
#line 995 "tag_switch.m"
          ll_backend__tag_switch__V_93_93 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ll_backend__tag_switch__LabelCode_46, ll_backend__tag_switch__HighRangeCode_48);
        }
#line 995 "tag_switch.m"
        {
#line 995 "tag_switch.m"
          ll_backend__tag_switch__V_92_92 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ll_backend__tag_switch__LowRangeCode_47, ll_backend__tag_switch__V_93_93);
        }
#line 995 "tag_switch.m"
        {
#line 995 "tag_switch.m"
          *ll_backend__tag_switch__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ll_backend__tag_switch__IfCode_45, ll_backend__tag_switch__V_92_92);
        }
#line 965 "tag_switch.m"
      }
#line 964 "tag_switch.m"
  }
#line 931 "tag_switch.m"
}

#line 909 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1(
#line 909 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 909 "tag_switch.m"
{
#line 909 "tag_switch.m"
  {
#line 909 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 909 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 909 "tag_switch.m"
    {
#line 909 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__909__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 909 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 909 "tag_switch.m"
  }
#line 909 "tag_switch.m"
}

#line 903 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(
#line 903 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseList_6,
#line 903 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurSecondary_7,
#line 903 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_8,
#line 903 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_9,
#line 903 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Targets_10)
#line 903 "tag_switch.m"
{
#line 912 "tag_switch.m"
  {
#line 912 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CurSecondary_7 > ll_backend__tag_switch__MaxSecondary_8);

#line 912 "tag_switch.m"
    if (ll_backend__tag_switch__succeeded)
#line 910 "tag_switch.m"
      {
#line 910 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_15_15;

#line 909 "tag_switch.m"
        {
#line 909 "tag_switch.m"
          ll_backend__tag_switch__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 909 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[6]));
#line 909 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1));
#line 909 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 909 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 3) = ((MR_Box) (ll_backend__tag_switch__CaseList_6));
#line 909 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 909 "tag_switch.m"
        }
#line 909 "tag_switch.m"
        {
#line 909 "tag_switch.m"
          mercury__require__expect_4_p_0(ll_backend__tag_switch__V_15_15, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_jump_table\'/5", (MR_String) "caselist not empty when reaching limiting secondary tag");
        }
#line 911 "tag_switch.m"
        *ll_backend__tag_switch__Targets_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 910 "tag_switch.m"
      }
#line 912 "tag_switch.m"
    else
#line 913 "tag_switch.m"
      {
#line 913 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__NextSecondary_11 = (ll_backend__tag_switch__CurSecondary_7 + (MR_Integer) 1);
#line 918 "tag_switch.m"
        MR_Word ll_backend__tag_switch__CaseLabel_12;
#line 918 "tag_switch.m"
        MR_Word ll_backend__tag_switch__CaseListTail_13;
#line 914 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_21_21;
#line 914 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__V_25_25;

#line 914 "tag_switch.m"
        ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__CaseList_6)) == (MR_mktag((MR_Integer) 1)));
#line 914 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 914 "tag_switch.m"
          {
#line 914 "tag_switch.m"
            ll_backend__tag_switch__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__CaseList_6, (MR_Integer) 0)));
#line 914 "tag_switch.m"
            ll_backend__tag_switch__CaseListTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__CaseList_6, (MR_Integer) 1)));
#line 914 "tag_switch.m"
            ll_backend__tag_switch__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_21_21, (MR_Integer) 0)));
#line 914 "tag_switch.m"
            ll_backend__tag_switch__CaseLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_21_21, (MR_Integer) 1)));
#line 914 "tag_switch.m"
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CurSecondary_7 == ll_backend__tag_switch__V_25_25);
#line 914 "tag_switch.m"
          }
#line 918 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 916 "tag_switch.m"
          {
#line 916 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherTargets_14;
#line 916 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_22_22;

#line 915 "tag_switch.m"
            {
#line 915 "tag_switch.m"
              ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(ll_backend__tag_switch__CaseListTail_13, ll_backend__tag_switch__NextSecondary_11, ll_backend__tag_switch__MaxSecondary_8, ll_backend__tag_switch__MaybeFailLabel_9, &ll_backend__tag_switch__OtherTargets_14);
            }
#line 917 "tag_switch.m"
            {
#line 917 "tag_switch.m"
              ll_backend__tag_switch__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 917 "tag_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_22_22, 0) = ((MR_Box) (ll_backend__tag_switch__CaseLabel_12));
#line 917 "tag_switch.m"
            }
#line 917 "tag_switch.m"
            {
#line 917 "tag_switch.m"
              MR_Word base;
#line 917 "tag_switch.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "tag_switch.m"
              *ll_backend__tag_switch__Targets_10 = base;
#line 917 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__tag_switch__V_22_22));
#line 917 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__tag_switch__OtherTargets_14));
#line 917 "tag_switch.m"
            }
#line 916 "tag_switch.m"
          }
#line 918 "tag_switch.m"
        else
#line 920 "tag_switch.m"
          {
#line 920 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherTargets_23;

#line 919 "tag_switch.m"
            {
#line 919 "tag_switch.m"
              ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(ll_backend__tag_switch__CaseList_6, ll_backend__tag_switch__NextSecondary_11, ll_backend__tag_switch__MaxSecondary_8, ll_backend__tag_switch__MaybeFailLabel_9, &ll_backend__tag_switch__OtherTargets_23);
            }
#line 921 "tag_switch.m"
            {
#line 921 "tag_switch.m"
              MR_Word base;
#line 921 "tag_switch.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 921 "tag_switch.m"
              *ll_backend__tag_switch__Targets_10 = base;
#line 921 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__tag_switch__MaybeFailLabel_9));
#line 921 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__tag_switch__OtherTargets_23));
#line 921 "tag_switch.m"
            }
#line 920 "tag_switch.m"
          }
#line 913 "tag_switch.m"
      }
#line 912 "tag_switch.m"
  }
#line 903 "tag_switch.m"
}

#line 850 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(
#line 850 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 850 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_2,
#line 850 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_3,
#line 850 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_4,
#line 850 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_5,
#line 850 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6,
#line 850 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_7)
#line 850 "tag_switch.m"
{
#line 854 "tag_switch.m"
  while (MR_TRUE)
#line 854 "tag_switch.m"
    {
#line 854 "tag_switch.m"
      /* tailcall optimized into a loop */
#line 854 "tag_switch.m"
      {
#line 854 "tag_switch.m"
        MR_bool ll_backend__tag_switch__succeeded;

#line 854 "tag_switch.m"
        if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 854 "tag_switch.m"
          {
#line 855 "tag_switch.m"
            {
#line 855 "tag_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_try_chain\'/7", (MR_String) "empty switch");
#line 855 "tag_switch.m"
              return;
            }
#line 854 "tag_switch.m"
          }
#line 854 "tag_switch.m"
        else
#line 857 "tag_switch.m"
          {
#line 857 "tag_switch.m"
            MR_Word ll_backend__tag_switch__Case_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 857 "tag_switch.m"
            MR_Word ll_backend__tag_switch__Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 857 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__Secondary_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Case_18, (MR_Integer) 0)));
#line 857 "tag_switch.m"
            MR_Word ll_backend__tag_switch__CaseLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Case_18, (MR_Integer) 1)));

#line 865 "tag_switch.m"
            if ((ll_backend__tag_switch__Cases_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "tag_switch.m"
              if ((ll_backend__tag_switch__MaybeFailLabel_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 877 "tag_switch.m"
                {
#line 877 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__ThisCode_32;

#line 878 "tag_switch.m"
                  {
#line 878 "tag_switch.m"
                    ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_26, &ll_backend__tag_switch__ThisCode_32, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_7);
                  }
#line 879 "tag_switch.m"
                  {
#line 879 "tag_switch.m"
                    *ll_backend__tag_switch__Code_5 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__tag_switch__PrevTestsCode0_4, ll_backend__tag_switch__ThisCode_32);
                  }
#line 877 "tag_switch.m"
                }
#line 876 "tag_switch.m"
              else
#line 868 "tag_switch.m"
                {
#line 868 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TypeCtorInfo_44_44;
#line 868 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TypeCtorInfo_29_68;
#line 868 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__FailLabel_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_3, (MR_Integer) 0)));
#line 868 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__FailCode_31;
#line 868 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_36_36;
#line 868 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_37_37;
#line 868 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_38_38;
#line 868 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevTestsCode1_41;
#line 868 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__CaseInfo0_52;
#line 868 "tag_switch.m"
                  MR_String ll_backend__tag_switch__Comment_53;
#line 868 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TestCode_56;
#line 868 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_57_57;
#line 868 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_58_58;
#line 868 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_59_59;
#line 868 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_61_61;
#line 868 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_62_62;
#line 868 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_63_63;
#line 868 "tag_switch.m"
                  MR_String ll_backend__tag_switch__V_64_64;
#line 888 "tag_switch.m"
                  MR_Box ll_backend__tag_switch__conv0_CaseInfo0_52;
#line 889 "tag_switch.m"
                  MR_Word ll_backend__tag_switch___CaseCode_54;
#line 889 "tag_switch.m"
                  MR_Word ll_backend__tag_switch___CaseGenerated_55;

#line 888 "tag_switch.m"
                  {
#line 888 "tag_switch.m"
                    mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6, ((MR_Box) (ll_backend__tag_switch__CaseLabel_26)), &ll_backend__tag_switch__conv0_CaseInfo0_52);
                  }
#line 888 "tag_switch.m"
                  ll_backend__tag_switch__CaseInfo0_52 = ((MR_Word) ll_backend__tag_switch__conv0_CaseInfo0_52);
#line 889 "tag_switch.m"
                  ll_backend__tag_switch__Comment_53 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_52, (MR_Integer) 0)));
#line 889 "tag_switch.m"
                  ll_backend__tag_switch___CaseCode_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_52, (MR_Integer) 1)));
#line 889 "tag_switch.m"
                  ll_backend__tag_switch___CaseGenerated_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_52, (MR_Integer) 2)));
#line 2498 "ll_backend.tag_switch.c"
                  ll_backend__tag_switch__TypeCtorInfo_29_68 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 892 "tag_switch.m"
                  {
#line 892 "tag_switch.m"
                    ll_backend__tag_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 892 "tag_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_62_62, 0) = ((MR_Box) (ll_backend__tag_switch__Secondary_25));
#line 892 "tag_switch.m"
                  }
#line 892 "tag_switch.m"
                  {
#line 892 "tag_switch.m"
                    ll_backend__tag_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 892 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 1) = ((MR_Box) (ll_backend__tag_switch__V_62_62));
#line 892 "tag_switch.m"
                  }
#line 892 "tag_switch.m"
                  {
#line 892 "tag_switch.m"
                    ll_backend__tag_switch__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 892 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 892 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 892 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_59_59, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_2));
#line 892 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_59_59, 3) = ((MR_Box) (ll_backend__tag_switch__V_61_61));
#line 892 "tag_switch.m"
                  }
#line 892 "tag_switch.m"
                  {
#line 892 "tag_switch.m"
                    ll_backend__tag_switch__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 892 "tag_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_63_63, 0) = ((MR_Box) (ll_backend__tag_switch__CaseLabel_26));
#line 892 "tag_switch.m"
                  }
#line 891 "tag_switch.m"
                  {
#line 891 "tag_switch.m"
                    ll_backend__tag_switch__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 891 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 891 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 1) = ((MR_Box) (ll_backend__tag_switch__V_59_59));
#line 891 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 2) = ((MR_Box) (ll_backend__tag_switch__V_63_63));
#line 891 "tag_switch.m"
                  }
#line 891 "tag_switch.m"
                  {
#line 891 "tag_switch.m"
                    ll_backend__tag_switch__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) "test sec tag only for ", ll_backend__tag_switch__Comment_53);
                  }
#line 890 "tag_switch.m"
                  {
#line 890 "tag_switch.m"
                    ll_backend__tag_switch__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 890 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_57_57, 0) = ((MR_Box) (ll_backend__tag_switch__V_58_58));
#line 890 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_57_57, 1) = ((MR_Box) (ll_backend__tag_switch__V_64_64));
#line 890 "tag_switch.m"
                  }
#line 890 "tag_switch.m"
                  {
#line 890 "tag_switch.m"
                    ll_backend__tag_switch__TestCode_56 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_29_68, ((MR_Box) (ll_backend__tag_switch__V_57_57)));
                  }
#line 896 "tag_switch.m"
                  {
#line 896 "tag_switch.m"
                    ll_backend__tag_switch__PrevTestsCode1_41 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_29_68, ll_backend__tag_switch__PrevTestsCode0_4, ll_backend__tag_switch__TestCode_56);
                  }
#line 2577 "ll_backend.tag_switch.c"
                  ll_backend__tag_switch__TypeCtorInfo_44_44 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 872 "tag_switch.m"
                  {
#line 872 "tag_switch.m"
                    ll_backend__tag_switch__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 872 "tag_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_38_38, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_30));
#line 872 "tag_switch.m"
                  }
#line 872 "tag_switch.m"
                  {
#line 872 "tag_switch.m"
                    ll_backend__tag_switch__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 872 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_37_37, 1) = ((MR_Box) (ll_backend__tag_switch__V_38_38));
#line 872 "tag_switch.m"
                  }
#line 871 "tag_switch.m"
                  {
#line 871 "tag_switch.m"
                    ll_backend__tag_switch__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 871 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_36_36, 0) = ((MR_Box) (ll_backend__tag_switch__V_37_37));
#line 871 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_36_36, 1) = ((MR_Box) ((MR_String) "secondary tag with no code to handle it"));
#line 871 "tag_switch.m"
                  }
#line 871 "tag_switch.m"
                  {
#line 871 "tag_switch.m"
                    ll_backend__tag_switch__FailCode_31 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_44_44, ((MR_Box) (ll_backend__tag_switch__V_36_36)));
                  }
#line 875 "tag_switch.m"
                  {
#line 875 "tag_switch.m"
                    *ll_backend__tag_switch__Code_5 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_44_44, ll_backend__tag_switch__PrevTestsCode1_41, ll_backend__tag_switch__FailCode_31);
                  }
#line 875 "tag_switch.m"
                  *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_7 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6;
#line 868 "tag_switch.m"
                }
#line 865 "tag_switch.m"
            else
#line 860 "tag_switch.m"
              {
#line 860 "tag_switch.m"
                MR_Word ll_backend__tag_switch__TypeCtorInfo_29_91;
#line 860 "tag_switch.m"
                MR_Word ll_backend__tag_switch__PrevTestsCode1_29;
#line 860 "tag_switch.m"
                MR_Word ll_backend__tag_switch__CaseInfo0_75;
#line 860 "tag_switch.m"
                MR_String ll_backend__tag_switch__Comment_76;
#line 860 "tag_switch.m"
                MR_Word ll_backend__tag_switch__TestCode_79;
#line 860 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_80_80;
#line 860 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_81_81;
#line 860 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_82_82;
#line 860 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_84_84;
#line 860 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_85_85;
#line 860 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_86_86;
#line 860 "tag_switch.m"
                MR_String ll_backend__tag_switch__V_87_87;
#line 888 "tag_switch.m"
                MR_Box ll_backend__tag_switch__conv1_CaseInfo0_75;
#line 889 "tag_switch.m"
                MR_Word ll_backend__tag_switch___CaseCode_77;
#line 889 "tag_switch.m"
                MR_Word ll_backend__tag_switch___CaseGenerated_78;

#line 888 "tag_switch.m"
                {
#line 888 "tag_switch.m"
                  mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6, ((MR_Box) (ll_backend__tag_switch__CaseLabel_26)), &ll_backend__tag_switch__conv1_CaseInfo0_75);
                }
#line 888 "tag_switch.m"
                ll_backend__tag_switch__CaseInfo0_75 = ((MR_Word) ll_backend__tag_switch__conv1_CaseInfo0_75);
#line 889 "tag_switch.m"
                ll_backend__tag_switch__Comment_76 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_75, (MR_Integer) 0)));
#line 889 "tag_switch.m"
                ll_backend__tag_switch___CaseCode_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_75, (MR_Integer) 1)));
#line 889 "tag_switch.m"
                ll_backend__tag_switch___CaseGenerated_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_75, (MR_Integer) 2)));
#line 2669 "ll_backend.tag_switch.c"
                ll_backend__tag_switch__TypeCtorInfo_29_91 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 892 "tag_switch.m"
                {
#line 892 "tag_switch.m"
                  ll_backend__tag_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 892 "tag_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_85_85, 0) = ((MR_Box) (ll_backend__tag_switch__Secondary_25));
#line 892 "tag_switch.m"
                }
#line 892 "tag_switch.m"
                {
#line 892 "tag_switch.m"
                  ll_backend__tag_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 892 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 1) = ((MR_Box) (ll_backend__tag_switch__V_85_85));
#line 892 "tag_switch.m"
                }
#line 892 "tag_switch.m"
                {
#line 892 "tag_switch.m"
                  ll_backend__tag_switch__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 892 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 892 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 892 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_82_82, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_2));
#line 892 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_82_82, 3) = ((MR_Box) (ll_backend__tag_switch__V_84_84));
#line 892 "tag_switch.m"
                }
#line 892 "tag_switch.m"
                {
#line 892 "tag_switch.m"
                  ll_backend__tag_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 892 "tag_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_86_86, 0) = ((MR_Box) (ll_backend__tag_switch__CaseLabel_26));
#line 892 "tag_switch.m"
                }
#line 891 "tag_switch.m"
                {
#line 891 "tag_switch.m"
                  ll_backend__tag_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 891 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 891 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 1) = ((MR_Box) (ll_backend__tag_switch__V_82_82));
#line 891 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 2) = ((MR_Box) (ll_backend__tag_switch__V_86_86));
#line 891 "tag_switch.m"
                }
#line 891 "tag_switch.m"
                {
#line 891 "tag_switch.m"
                  ll_backend__tag_switch__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "test sec tag only for ", ll_backend__tag_switch__Comment_76);
                }
#line 890 "tag_switch.m"
                {
#line 890 "tag_switch.m"
                  ll_backend__tag_switch__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 890 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_80_80, 0) = ((MR_Box) (ll_backend__tag_switch__V_81_81));
#line 890 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_80_80, 1) = ((MR_Box) (ll_backend__tag_switch__V_87_87));
#line 890 "tag_switch.m"
                }
#line 890 "tag_switch.m"
                {
#line 890 "tag_switch.m"
                  ll_backend__tag_switch__TestCode_79 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_29_91, ((MR_Box) (ll_backend__tag_switch__V_80_80)));
                }
#line 896 "tag_switch.m"
                {
#line 896 "tag_switch.m"
                  ll_backend__tag_switch__PrevTestsCode1_29 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_29_91, ll_backend__tag_switch__PrevTestsCode0_4, ll_backend__tag_switch__TestCode_79);
                }
#line 863 "tag_switch.m"
                /* direct tailcall eliminated */
#line 863 "tag_switch.m"
                {
#line 863 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__HeadVar__1__tmp_copy_1 = ll_backend__tag_switch__Cases_19;
#line 863 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevTestsCode0__tmp_copy_4 = ll_backend__tag_switch__PrevTestsCode1_29;

#line 863 "tag_switch.m"
                  ll_backend__tag_switch__PrevTestsCode0_4 = ll_backend__tag_switch__PrevTestsCode0__tmp_copy_4;
#line 863 "tag_switch.m"
                  ll_backend__tag_switch__HeadVar__1_1 = ll_backend__tag_switch__HeadVar__1__tmp_copy_1;
#line 863 "tag_switch.m"
                }
#line 863 "tag_switch.m"
                continue;
#line 860 "tag_switch.m"
              }
#line 857 "tag_switch.m"
          }
#line 854 "tag_switch.m"
      }
#line 854 "tag_switch.m"
      break;
#line 854 "tag_switch.m"
    }
#line 850 "tag_switch.m"
}

#line 826 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(
#line 826 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseLabel_9,
#line 826 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_10,
#line 826 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__Secondary_11,
#line 826 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_12,
#line 826 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_19,
#line 826 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_20,
#line 826 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_21,
#line 826 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_22)
#line 826 "tag_switch.m"
{
#line 831 "tag_switch.m"
  {
#line 831 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 831 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_37_37;
#line 831 "tag_switch.m"
    MR_Word ll_backend__tag_switch__CaseCode_15;
#line 831 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ElseLabel_16;
#line 831 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestCode_17;
#line 831 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ElseLabelCode_18;
#line 831 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_25_25;
#line 831 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_26_26;
#line 831 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_27_27;
#line 831 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_29_29;
#line 831 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_30_30;
#line 831 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_31_31;
#line 831 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_33_33;
#line 831 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_34_34;
#line 831 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_36_36;

#line 832 "tag_switch.m"
    {
#line 832 "tag_switch.m"
      ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_9, &ll_backend__tag_switch__CaseCode_15, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_19, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_20);
    }
#line 834 "tag_switch.m"
    {
#line 834 "tag_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__ElseLabel_16, ll_backend__tag_switch__STATE_VARIABLE_CI_0_21, ll_backend__tag_switch__STATE_VARIABLE_CI_22);
    }
#line 2842 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 837 "tag_switch.m"
    {
#line 837 "tag_switch.m"
      ll_backend__tag_switch__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 837 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_30_30, 0) = ((MR_Box) (ll_backend__tag_switch__Secondary_11));
#line 837 "tag_switch.m"
    }
#line 837 "tag_switch.m"
    {
#line 837 "tag_switch.m"
      ll_backend__tag_switch__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 837 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_29_29, 1) = ((MR_Box) (ll_backend__tag_switch__V_30_30));
#line 837 "tag_switch.m"
    }
#line 837 "tag_switch.m"
    {
#line 837 "tag_switch.m"
      ll_backend__tag_switch__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 837 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 837 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 837 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_27_27, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_10));
#line 837 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_27_27, 3) = ((MR_Box) (ll_backend__tag_switch__V_29_29));
#line 837 "tag_switch.m"
    }
#line 837 "tag_switch.m"
    {
#line 837 "tag_switch.m"
      ll_backend__tag_switch__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 837 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_31_31, 0) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_16));
#line 837 "tag_switch.m"
    }
#line 836 "tag_switch.m"
    {
#line 836 "tag_switch.m"
      ll_backend__tag_switch__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 836 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 836 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_26_26, 1) = ((MR_Box) (ll_backend__tag_switch__V_27_27));
#line 836 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_26_26, 2) = ((MR_Box) (ll_backend__tag_switch__V_31_31));
#line 836 "tag_switch.m"
    }
#line 835 "tag_switch.m"
    {
#line 835 "tag_switch.m"
      ll_backend__tag_switch__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 835 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_25_25, 0) = ((MR_Box) (ll_backend__tag_switch__V_26_26));
#line 835 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_25_25, 1) = ((MR_Box) ((MR_String) "test sec tag only"));
#line 835 "tag_switch.m"
    }
#line 835 "tag_switch.m"
    {
#line 835 "tag_switch.m"
      ll_backend__tag_switch__TestCode_17 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_37_37, ((MR_Box) (ll_backend__tag_switch__V_25_25)));
    }
#line 842 "tag_switch.m"
    {
#line 842 "tag_switch.m"
      ll_backend__tag_switch__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 842 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_34_34, 1) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_16));
#line 842 "tag_switch.m"
    }
#line 841 "tag_switch.m"
    {
#line 841 "tag_switch.m"
      ll_backend__tag_switch__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 841 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_33_33, 0) = ((MR_Box) (ll_backend__tag_switch__V_34_34));
#line 841 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_33_33, 1) = ((MR_Box) ((MR_String) "handle next secondary tag"));
#line 841 "tag_switch.m"
    }
#line 841 "tag_switch.m"
    {
#line 841 "tag_switch.m"
      ll_backend__tag_switch__ElseLabelCode_18 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_37_37, ((MR_Box) (ll_backend__tag_switch__V_33_33)));
    }
#line 844 "tag_switch.m"
    {
#line 844 "tag_switch.m"
      ll_backend__tag_switch__V_36_36 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_37_37, ll_backend__tag_switch__CaseCode_15, ll_backend__tag_switch__ElseLabelCode_18);
    }
#line 844 "tag_switch.m"
    {
#line 844 "tag_switch.m"
      *ll_backend__tag_switch__Code_12 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_37_37, ll_backend__tag_switch__TestCode_17, ll_backend__tag_switch__V_36_36);
    }
#line 831 "tag_switch.m"
  }
#line 826 "tag_switch.m"
}

#line 792 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(
#line 792 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 792 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_2,
#line 792 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_3,
#line 792 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_4,
#line 792 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5,
#line 792 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6,
#line 792 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_7,
#line 792 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_8)
#line 792 "tag_switch.m"
{
#line 797 "tag_switch.m"
  {
#line 797 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 797 "tag_switch.m"
    if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 797 "tag_switch.m"
      {
#line 798 "tag_switch.m"
        {
#line 798 "tag_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_try_me_else_chain\'/8", (MR_String) "empty switch");
#line 798 "tag_switch.m"
          return;
        }
#line 797 "tag_switch.m"
      }
#line 797 "tag_switch.m"
    else
#line 800 "tag_switch.m"
      {
#line 800 "tag_switch.m"
        MR_Word ll_backend__tag_switch__Case_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 800 "tag_switch.m"
        MR_Word ll_backend__tag_switch__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 800 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__Secondary_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Case_21, (MR_Integer) 0)));
#line 800 "tag_switch.m"
        MR_Word ll_backend__tag_switch__CaseLabel_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Case_21, (MR_Integer) 1)));

#line 809 "tag_switch.m"
        if ((ll_backend__tag_switch__Cases_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 820 "tag_switch.m"
          if ((ll_backend__tag_switch__MaybeFailLabel_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 821 "tag_switch.m"
            {
#line 822 "tag_switch.m"
              {
#line 822 "tag_switch.m"
                ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_29, ll_backend__tag_switch__Code_4, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6);
              }
#line 822 "tag_switch.m"
              *ll_backend__tag_switch__STATE_VARIABLE_CI_8 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_7;
#line 821 "tag_switch.m"
            }
#line 820 "tag_switch.m"
          else
#line 812 "tag_switch.m"
            {
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__TypeCtorInfo_55_55;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__TypeCtorInfo_37_84;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__FailLabel_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_3, (MR_Integer) 0)));
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__FailCode_35;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_43_43;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_44_44;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_45_45;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__ThisCode_51;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__CaseCode_66;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__ElseLabel_67;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__TestCode_68;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__ElseLabelCode_69;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_72_72;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_73_73;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_74_74;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_76_76;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_77_77;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_78_78;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_80_80;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_81_81;
#line 812 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_83_83;

#line 832 "tag_switch.m"
              {
#line 832 "tag_switch.m"
                ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_29, &ll_backend__tag_switch__CaseCode_66, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6);
              }
#line 834 "tag_switch.m"
              {
#line 834 "tag_switch.m"
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__ElseLabel_67, ll_backend__tag_switch__STATE_VARIABLE_CI_0_7, ll_backend__tag_switch__STATE_VARIABLE_CI_8);
              }
#line 3075 "ll_backend.tag_switch.c"
              ll_backend__tag_switch__TypeCtorInfo_37_84 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 837 "tag_switch.m"
              {
#line 837 "tag_switch.m"
                ll_backend__tag_switch__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 837 "tag_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_77_77, 0) = ((MR_Box) (ll_backend__tag_switch__Secondary_28));
#line 837 "tag_switch.m"
              }
#line 837 "tag_switch.m"
              {
#line 837 "tag_switch.m"
                ll_backend__tag_switch__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 837 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_76_76, 1) = ((MR_Box) (ll_backend__tag_switch__V_77_77));
#line 837 "tag_switch.m"
              }
#line 837 "tag_switch.m"
              {
#line 837 "tag_switch.m"
                ll_backend__tag_switch__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 837 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 837 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 837 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_74_74, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_2));
#line 837 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_74_74, 3) = ((MR_Box) (ll_backend__tag_switch__V_76_76));
#line 837 "tag_switch.m"
              }
#line 837 "tag_switch.m"
              {
#line 837 "tag_switch.m"
                ll_backend__tag_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 837 "tag_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_78_78, 0) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_67));
#line 837 "tag_switch.m"
              }
#line 836 "tag_switch.m"
              {
#line 836 "tag_switch.m"
                ll_backend__tag_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 836 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 836 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_73_73, 1) = ((MR_Box) (ll_backend__tag_switch__V_74_74));
#line 836 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_73_73, 2) = ((MR_Box) (ll_backend__tag_switch__V_78_78));
#line 836 "tag_switch.m"
              }
#line 835 "tag_switch.m"
              {
#line 835 "tag_switch.m"
                ll_backend__tag_switch__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 835 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_72_72, 0) = ((MR_Box) (ll_backend__tag_switch__V_73_73));
#line 835 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_72_72, 1) = ((MR_Box) ((MR_String) "test sec tag only"));
#line 835 "tag_switch.m"
              }
#line 835 "tag_switch.m"
              {
#line 835 "tag_switch.m"
                ll_backend__tag_switch__TestCode_68 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_37_84, ((MR_Box) (ll_backend__tag_switch__V_72_72)));
              }
#line 842 "tag_switch.m"
              {
#line 842 "tag_switch.m"
                ll_backend__tag_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 842 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 1) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_67));
#line 842 "tag_switch.m"
              }
#line 841 "tag_switch.m"
              {
#line 841 "tag_switch.m"
                ll_backend__tag_switch__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 841 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_80_80, 0) = ((MR_Box) (ll_backend__tag_switch__V_81_81));
#line 841 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_80_80, 1) = ((MR_Box) ((MR_String) "handle next secondary tag"));
#line 841 "tag_switch.m"
              }
#line 841 "tag_switch.m"
              {
#line 841 "tag_switch.m"
                ll_backend__tag_switch__ElseLabelCode_69 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_37_84, ((MR_Box) (ll_backend__tag_switch__V_80_80)));
              }
#line 844 "tag_switch.m"
              {
#line 844 "tag_switch.m"
                ll_backend__tag_switch__V_83_83 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_37_84, ll_backend__tag_switch__CaseCode_66, ll_backend__tag_switch__ElseLabelCode_69);
              }
#line 844 "tag_switch.m"
              {
#line 844 "tag_switch.m"
                ll_backend__tag_switch__ThisCode_51 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_37_84, ll_backend__tag_switch__TestCode_68, ll_backend__tag_switch__V_83_83);
              }
#line 3179 "ll_backend.tag_switch.c"
              ll_backend__tag_switch__TypeCtorInfo_55_55 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 816 "tag_switch.m"
              {
#line 816 "tag_switch.m"
                ll_backend__tag_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 816 "tag_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_45_45, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_34));
#line 816 "tag_switch.m"
              }
#line 816 "tag_switch.m"
              {
#line 816 "tag_switch.m"
                ll_backend__tag_switch__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 816 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 1) = ((MR_Box) (ll_backend__tag_switch__V_45_45));
#line 816 "tag_switch.m"
              }
#line 815 "tag_switch.m"
              {
#line 815 "tag_switch.m"
                ll_backend__tag_switch__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 815 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_43_43, 0) = ((MR_Box) (ll_backend__tag_switch__V_44_44));
#line 815 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_43_43, 1) = ((MR_Box) ((MR_String) "secondary tag does not match"));
#line 815 "tag_switch.m"
              }
#line 815 "tag_switch.m"
              {
#line 815 "tag_switch.m"
                ll_backend__tag_switch__FailCode_35 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_55_55, ((MR_Box) (ll_backend__tag_switch__V_43_43)));
              }
#line 819 "tag_switch.m"
              {
#line 819 "tag_switch.m"
                *ll_backend__tag_switch__Code_4 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_55_55, ll_backend__tag_switch__ThisCode_51, ll_backend__tag_switch__FailCode_35);
              }
#line 812 "tag_switch.m"
            }
#line 809 "tag_switch.m"
        else
#line 803 "tag_switch.m"
          {
#line 803 "tag_switch.m"
            MR_Word ll_backend__tag_switch__ThisCode_32;
#line 803 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherCode_33;
#line 803 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_47_47;
#line 803 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_48_48;

#line 804 "tag_switch.m"
            {
#line 804 "tag_switch.m"
              ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(ll_backend__tag_switch__CaseLabel_29, ll_backend__tag_switch__StagRval_2, ll_backend__tag_switch__Secondary_28, &ll_backend__tag_switch__ThisCode_32, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_47_47, ll_backend__tag_switch__STATE_VARIABLE_CI_0_7, &ll_backend__tag_switch__STATE_VARIABLE_CI_48_48);
            }
#line 806 "tag_switch.m"
            {
#line 806 "tag_switch.m"
              ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(ll_backend__tag_switch__Cases_22, ll_backend__tag_switch__StagRval_2, ll_backend__tag_switch__MaybeFailLabel_3, &ll_backend__tag_switch__OtherCode_33, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_47_47, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6, ll_backend__tag_switch__STATE_VARIABLE_CI_48_48, ll_backend__tag_switch__STATE_VARIABLE_CI_8);
            }
#line 808 "tag_switch.m"
            {
#line 808 "tag_switch.m"
              *ll_backend__tag_switch__Code_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__tag_switch__ThisCode_32, ll_backend__tag_switch__OtherCode_33);
            }
#line 803 "tag_switch.m"
          }
#line 800 "tag_switch.m"
      }
#line 797 "tag_switch.m"
  }
#line 792 "tag_switch.m"
}

#line 694 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1(
#line 694 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 694 "tag_switch.m"
{
#line 694 "tag_switch.m"
  {
#line 694 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 694 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 694 "tag_switch.m"
    {
#line 694 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__694__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 694 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 694 "tag_switch.m"
  }
#line 694 "tag_switch.m"
}

#line 661 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0(
#line 661 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagGoalMap_14,
#line 661 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_15,
#line 661 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_16,
#line 661 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_17,
#line 661 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 661 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_19,
#line 661 "tag_switch.m"
  MR_Word ll_backend__tag_switch__Rval_20,
#line 661 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_21,
#line 661 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 661 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48,
#line 661 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49,
#line 661 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_50,
#line 661 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_51)
#line 661 "tag_switch.m"
{
#line 668 "tag_switch.m"
  {
#line 668 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 668 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagGoalList_25;

#line 669 "tag_switch.m"
    {
#line 669 "tag_switch.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__tag_switch__StagGoalMap_14, &ll_backend__tag_switch__StagGoalList_25);
    }
#line 690 "tag_switch.m"
    if ((((ll_backend__tag_switch__StagLoc_19 == (MR_Integer) 2)) || ((ll_backend__tag_switch__StagLoc_19 == (MR_Integer) 3))))
#line 693 "tag_switch.m"
      {
#line 693 "tag_switch.m"
        MR_Word ll_backend__tag_switch__Globals_31;
#line 693 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__DenseSwitchSize_32;
#line 693 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__BinarySwitchSize_33;
#line 693 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__TrySwitchSize_34;
#line 693 "tag_switch.m"
        MR_Word ll_backend__tag_switch__OrigStagRval_36;
#line 693 "tag_switch.m"
        MR_String ll_backend__tag_switch__Comment_37;
#line 693 "tag_switch.m"
        MR_Word ll_backend__tag_switch__MaybeSecFailLabel_45;
#line 693 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_52_52;

#line 694 "tag_switch.m"
        {
#line 694 "tag_switch.m"
          ll_backend__tag_switch__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 694 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[5]));
#line 694 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1));
#line 694 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 694 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 3) = ((MR_Box) (ll_backend__tag_switch__OtherPtags_16));
#line 694 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 694 "tag_switch.m"
        }
#line 694 "tag_switch.m"
        {
#line 694 "tag_switch.m"
          mercury__require__expect_4_p_0(ll_backend__tag_switch__V_52_52, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) ">1 ptag with secondary tag");
        }
#line 698 "tag_switch.m"
        {
#line 698 "tag_switch.m"
          ll_backend__code_info__get_globals_2_p_0(ll_backend__tag_switch__STATE_VARIABLE_CI_0_50, &ll_backend__tag_switch__Globals_31);
        }
#line 699 "tag_switch.m"
        {
#line 699 "tag_switch.m"
          libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_31, (MR_Integer) 434, &ll_backend__tag_switch__DenseSwitchSize_32);
        }
#line 701 "tag_switch.m"
        {
#line 701 "tag_switch.m"
          libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_31, (MR_Integer) 440, &ll_backend__tag_switch__BinarySwitchSize_33);
        }
#line 703 "tag_switch.m"
        {
#line 703 "tag_switch.m"
          libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_31, (MR_Integer) 439, &ll_backend__tag_switch__TrySwitchSize_34);
        }
#line 719 "tag_switch.m"
        if ((ll_backend__tag_switch__StagLoc_19 == (MR_Integer) 2))
#line 720 "tag_switch.m"
          {
#line 721 "tag_switch.m"
            {
#line 721 "tag_switch.m"
              ll_backend__tag_switch__OrigStagRval_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 721 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__OrigStagRval_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 721 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__OrigStagRval_36, 1) = ((MR_Box) ((MR_Integer) 5));
#line 721 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__OrigStagRval_36, 2) = ((MR_Box) (ll_backend__tag_switch__Rval_20));
#line 721 "tag_switch.m"
            }
#line 722 "tag_switch.m"
            ll_backend__tag_switch__Comment_37 = (MR_String) "compute local sec tag to switch on";
#line 720 "tag_switch.m"
          }
#line 719 "tag_switch.m"
        else
#line 715 "tag_switch.m"
          {
#line 715 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_61_61;
#line 715 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_62_62;

#line 716 "tag_switch.m"
            {
#line 716 "tag_switch.m"
              ll_backend__tag_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 716 "tag_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_62_62, 0) = ((MR_Box) (ll_backend__tag_switch__MainPtag_15));
#line 716 "tag_switch.m"
            }
#line 716 "tag_switch.m"
            {
#line 716 "tag_switch.m"
              ll_backend__tag_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 716 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 716 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 1) = ((MR_Box) (ll_backend__tag_switch__V_62_62));
#line 716 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 2) = ((MR_Box) (ll_backend__tag_switch__Rval_20));
#line 716 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[8])));
#line 716 "tag_switch.m"
            }
#line 716 "tag_switch.m"
            {
#line 716 "tag_switch.m"
              ll_backend__tag_switch__OrigStagRval_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 716 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__OrigStagRval_36, 0) = ((MR_Box) (ll_backend__tag_switch__V_61_61));
#line 716 "tag_switch.m"
            }
#line 718 "tag_switch.m"
            ll_backend__tag_switch__Comment_37 = (MR_String) "compute remote sec tag to switch on";
#line 715 "tag_switch.m"
          }
#line 758 "tag_switch.m"
        if ((ll_backend__tag_switch__MaybeFailLabel_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 759 "tag_switch.m"
          ll_backend__tag_switch__MaybeSecFailLabel_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 758 "tag_switch.m"
        else
#line 755 "tag_switch.m"
          {
#line 750 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__StagGoalCount_43;
#line 750 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__FullGoalCount_44;

#line 750 "tag_switch.m"
            {
#line 750 "tag_switch.m"
              mercury__list__length_2_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[2], ll_backend__tag_switch__StagGoalList_25, &ll_backend__tag_switch__StagGoalCount_43);
            }
#line 751 "tag_switch.m"
            ll_backend__tag_switch__FullGoalCount_44 = (ll_backend__tag_switch__MaxSecondary_17 + (MR_Integer) 1);
#line 752 "tag_switch.m"
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__FullGoalCount_44 == ll_backend__tag_switch__StagGoalCount_43);
#line 755 "tag_switch.m"
            if (ll_backend__tag_switch__succeeded)
#line 754 "tag_switch.m"
              ll_backend__tag_switch__MaybeSecFailLabel_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "tag_switch.m"
            else
#line 756 "tag_switch.m"
              ll_backend__tag_switch__MaybeSecFailLabel_45 = ll_backend__tag_switch__MaybeFailLabel_21;
#line 755 "tag_switch.m"
          }
#line 704 "tag_switch.m"
        ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MaxSecondary_17 >= ll_backend__tag_switch__DenseSwitchSize_32);
#line 3486 "ll_backend.tag_switch.c"
        if (ll_backend__tag_switch__succeeded)
#line 3488 "ll_backend.tag_switch.c"
          {
#line 3490 "ll_backend.tag_switch.c"
            MR_Word ll_backend__tag_switch__Targets_46;
#line 3492 "ll_backend.tag_switch.c"
            MR_Word ll_backend__tag_switch__V_83_83;
#line 3494 "ll_backend.tag_switch.c"
            MR_Word ll_backend__tag_switch__V_84_84;
#line 744 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagCode_111;

#line 744 "tag_switch.m"
            {
#line 744 "tag_switch.m"
              ll_backend__tag_switch__StagCode_111 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 765 "tag_switch.m"
            {
#line 765 "tag_switch.m"
              ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(ll_backend__tag_switch__StagGoalList_25, (MR_Integer) 0, ll_backend__tag_switch__MaxSecondary_17, ll_backend__tag_switch__MaybeSecFailLabel_45, &ll_backend__tag_switch__Targets_46);
            }
#line 768 "tag_switch.m"
            {
#line 768 "tag_switch.m"
              ll_backend__tag_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 768 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 768 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 1) = ((MR_Box) (ll_backend__tag_switch__OrigStagRval_36));
#line 768 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 2) = ((MR_Box) (ll_backend__tag_switch__Targets_46));
#line 768 "tag_switch.m"
            }
#line 767 "tag_switch.m"
            {
#line 767 "tag_switch.m"
              ll_backend__tag_switch__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 767 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_83_83, 0) = ((MR_Box) (ll_backend__tag_switch__V_84_84));
#line 767 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_83_83, 1) = ((MR_Box) ((MR_String) "switch on secondary tag"));
#line 767 "tag_switch.m"
            }
#line 767 "tag_switch.m"
            {
#line 767 "tag_switch.m"
              *ll_backend__tag_switch__Code_22 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_83_83)));
            }
#line 768 "tag_switch.m"
            *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48;
#line 768 "tag_switch.m"
            *ll_backend__tag_switch__STATE_VARIABLE_CI_51 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_50;
#line 3540 "ll_backend.tag_switch.c"
          }
#line 3542 "ll_backend.tag_switch.c"
        else
#line 3544 "ll_backend.tag_switch.c"
          {
#line 3546 "ll_backend.tag_switch.c"
            MR_Word ll_backend__tag_switch__StagCode_122;
#line 3548 "ll_backend.tag_switch.c"
            MR_Word ll_backend__tag_switch__StagRval_123;
#line 726 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__NumRealRegs_38;
#line 726 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_67_67;

#line 727 "tag_switch.m"
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MaxSecondary_17 >= (MR_Integer) 2);
#line 726 "tag_switch.m"
            if (ll_backend__tag_switch__succeeded)
#line 726 "tag_switch.m"
              {
#line 728 "tag_switch.m"
                ll_backend__tag_switch__V_67_67 = (MR_Integer) 308;
#line 728 "tag_switch.m"
                {
#line 728 "tag_switch.m"
                  libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_31, ll_backend__tag_switch__V_67_67, &ll_backend__tag_switch__NumRealRegs_38);
                }
#line 730 "tag_switch.m"
                ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__NumRealRegs_38 == (MR_Integer) 0);
#line 731 "tag_switch.m"
                if (!(ll_backend__tag_switch__succeeded))
#line 734 "tag_switch.m"
                  {
#line 734 "tag_switch.m"
                    MR_Integer ll_backend__tag_switch__StagRegNo_39;
#line 732 "tag_switch.m"
                    MR_Word ll_backend__tag_switch__V_68_68;

#line 732 "tag_switch.m"
                    ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__StagReg_18)) == (MR_mktag((MR_Integer) 1)));
#line 732 "tag_switch.m"
                    if (ll_backend__tag_switch__succeeded)
#line 732 "tag_switch.m"
                      {
#line 732 "tag_switch.m"
                        ll_backend__tag_switch__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagReg_18, (MR_Integer) 0)));
#line 732 "tag_switch.m"
                        ll_backend__tag_switch__StagRegNo_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagReg_18, (MR_Integer) 1)));
#line 732 "tag_switch.m"
                        ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__V_68_68 == (MR_Integer) 0);
#line 732 "tag_switch.m"
                      }
#line 734 "tag_switch.m"
                    if (ll_backend__tag_switch__succeeded)
#line 733 "tag_switch.m"
                      ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagRegNo_39 <= ll_backend__tag_switch__NumRealRegs_38);
#line 734 "tag_switch.m"
                    else
#line 735 "tag_switch.m"
                      {
#line 735 "tag_switch.m"
                        {
#line 735 "tag_switch.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "improper reg in tag switch");
#line 735 "tag_switch.m"
                          return;
                        }
#line 735 "tag_switch.m"
                        ll_backend__tag_switch__succeeded = MR_TRUE;
#line 735 "tag_switch.m"
                      }
#line 734 "tag_switch.m"
                  }
#line 726 "tag_switch.m"
              }
#line 743 "tag_switch.m"
            if (ll_backend__tag_switch__succeeded)
#line 741 "tag_switch.m"
              {
#line 741 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_113_113;
#line 741 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_114_114;

#line 740 "tag_switch.m"
                {
#line 740 "tag_switch.m"
                  ll_backend__tag_switch__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 740 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 740 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_114_114, 1) = ((MR_Box) (ll_backend__tag_switch__StagReg_18));
#line 740 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_114_114, 2) = ((MR_Box) (ll_backend__tag_switch__OrigStagRval_36));
#line 740 "tag_switch.m"
                }
#line 739 "tag_switch.m"
                {
#line 739 "tag_switch.m"
                  ll_backend__tag_switch__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 739 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_113_113, 0) = ((MR_Box) (ll_backend__tag_switch__V_114_114));
#line 739 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_113_113, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_37));
#line 739 "tag_switch.m"
                }
#line 739 "tag_switch.m"
                {
#line 739 "tag_switch.m"
                  ll_backend__tag_switch__StagCode_122 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_113_113)));
                }
#line 742 "tag_switch.m"
                {
#line 742 "tag_switch.m"
                  ll_backend__tag_switch__StagRval_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 742 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__StagRval_123, 0) = ((MR_Box) (ll_backend__tag_switch__StagReg_18));
#line 742 "tag_switch.m"
                }
#line 741 "tag_switch.m"
              }
#line 743 "tag_switch.m"
            else
#line 744 "tag_switch.m"
              {
#line 744 "tag_switch.m"
                {
#line 744 "tag_switch.m"
                  ll_backend__tag_switch__StagCode_122 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
#line 745 "tag_switch.m"
                ll_backend__tag_switch__StagRval_123 = ll_backend__tag_switch__OrigStagRval_36;
#line 744 "tag_switch.m"
              }
#line 706 "tag_switch.m"
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MaxSecondary_17 >= ll_backend__tag_switch__BinarySwitchSize_33);
#line 3677 "ll_backend.tag_switch.c"
            if (ll_backend__tag_switch__succeeded)
#line 3679 "ll_backend.tag_switch.c"
              {
#line 773 "tag_switch.m"
                {
#line 773 "tag_switch.m"
                  ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(ll_backend__tag_switch__StagGoalList_25, (MR_Integer) 0, ll_backend__tag_switch__MaxSecondary_17, ll_backend__tag_switch__StagRval_123, ll_backend__tag_switch__MaybeSecFailLabel_45, ll_backend__tag_switch__Code_22, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49, ll_backend__tag_switch__STATE_VARIABLE_CI_0_50, ll_backend__tag_switch__STATE_VARIABLE_CI_51);
#line 773 "tag_switch.m"
                  return;
                }
#line 3688 "ll_backend.tag_switch.c"
              }
#line 3690 "ll_backend.tag_switch.c"
            else
#line 3692 "ll_backend.tag_switch.c"
              {
#line 708 "tag_switch.m"
                ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MaxSecondary_17 >= ll_backend__tag_switch__TrySwitchSize_34);
#line 3696 "ll_backend.tag_switch.c"
                if (ll_backend__tag_switch__succeeded)
#line 3698 "ll_backend.tag_switch.c"
                  {
#line 3700 "ll_backend.tag_switch.c"
                    MR_Word ll_backend__tag_switch__TypeCtorInfo_107_107 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 3702 "ll_backend.tag_switch.c"
                    MR_Word ll_backend__tag_switch__Codes_47;
#line 3704 "ll_backend.tag_switch.c"
                    MR_Word ll_backend__tag_switch__V_77_77;

#line 777 "tag_switch.m"
                    {
#line 777 "tag_switch.m"
                      ll_backend__tag_switch__V_77_77 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_107_107);
                    }
#line 777 "tag_switch.m"
                    {
#line 777 "tag_switch.m"
                      ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(ll_backend__tag_switch__StagGoalList_25, ll_backend__tag_switch__StagRval_123, ll_backend__tag_switch__MaybeSecFailLabel_45, ll_backend__tag_switch__V_77_77, &ll_backend__tag_switch__Codes_47, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49);
                    }
#line 779 "tag_switch.m"
                    {
#line 779 "tag_switch.m"
                      *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_107_107, ll_backend__tag_switch__StagCode_122, ll_backend__tag_switch__Codes_47);
                    }
#line 779 "tag_switch.m"
                    *ll_backend__tag_switch__STATE_VARIABLE_CI_51 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_50;
#line 3724 "ll_backend.tag_switch.c"
                  }
#line 3726 "ll_backend.tag_switch.c"
                else
#line 3728 "ll_backend.tag_switch.c"
                  {
#line 3730 "ll_backend.tag_switch.c"
                    MR_Word ll_backend__tag_switch__Codes_99;

#line 782 "tag_switch.m"
                    {
#line 782 "tag_switch.m"
                      ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(ll_backend__tag_switch__StagGoalList_25, ll_backend__tag_switch__StagRval_123, ll_backend__tag_switch__MaybeSecFailLabel_45, &ll_backend__tag_switch__Codes_99, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49, ll_backend__tag_switch__STATE_VARIABLE_CI_0_50, ll_backend__tag_switch__STATE_VARIABLE_CI_51);
                    }
#line 784 "tag_switch.m"
                    {
#line 784 "tag_switch.m"
                      *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__tag_switch__StagCode_122, ll_backend__tag_switch__Codes_99);
                    }
#line 3743 "ll_backend.tag_switch.c"
                  }
#line 3745 "ll_backend.tag_switch.c"
              }
#line 3747 "ll_backend.tag_switch.c"
          }
#line 693 "tag_switch.m"
      }
#line 690 "tag_switch.m"
    else
#line 673 "tag_switch.m"
      {
#line 678 "tag_switch.m"
        if ((ll_backend__tag_switch__StagGoalList_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 676 "tag_switch.m"
          {
#line 677 "tag_switch.m"
            {
#line 677 "tag_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "no goal for non-shared tag");
#line 677 "tag_switch.m"
              return;
            }
#line 676 "tag_switch.m"
          }
#line 678 "tag_switch.m"
        else
#line 678 "tag_switch.m"
          {
#line 678 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagGoalList_25, (MR_Integer) 1)));
#line 678 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagGoalList_25, (MR_Integer) 0)));

#line 678 "tag_switch.m"
            if ((ll_backend__tag_switch__V_109_109 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "tag_switch.m"
              {
#line 682 "tag_switch.m"
                MR_Word ll_backend__tag_switch__CaseLabel_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_110_110, (MR_Integer) 1)));
#line 680 "tag_switch.m"
                MR_Integer ll_backend__tag_switch__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_110_110, (MR_Integer) 0)));

#line 680 "tag_switch.m"
                ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__V_91_91 == (MR_Integer) -1);
#line 682 "tag_switch.m"
                if (ll_backend__tag_switch__succeeded)
#line 681 "tag_switch.m"
                  {
#line 681 "tag_switch.m"
                    ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_27, ll_backend__tag_switch__Code_22, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49);
                  }
#line 682 "tag_switch.m"
                else
#line 683 "tag_switch.m"
                  {
#line 683 "tag_switch.m"
                    {
#line 683 "tag_switch.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "badly formed goal for non-shared tag");
#line 683 "tag_switch.m"
                      return;
                    }
#line 683 "tag_switch.m"
                  }
#line 682 "tag_switch.m"
              }
#line 678 "tag_switch.m"
            else
#line 687 "tag_switch.m"
              {
#line 688 "tag_switch.m"
                {
#line 688 "tag_switch.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "more than one goal for non-shared tag");
#line 688 "tag_switch.m"
                  return;
                }
#line 687 "tag_switch.m"
              }
#line 678 "tag_switch.m"
          }
#line 688 "tag_switch.m"
        *ll_backend__tag_switch__STATE_VARIABLE_CI_51 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_50;
#line 673 "tag_switch.m"
      }
#line 668 "tag_switch.m"
  }
#line 661 "tag_switch.m"
}

#line 623 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_3(
#line 623 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 623 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1)
#line 623 "tag_switch.m"
{
#line 623 "tag_switch.m"
  {
#line 623 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 623 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 623 "tag_switch.m"
    {
#line 623 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__623__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__tag_switch__wrapper_arg_1));
    }
#line 623 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 623 "tag_switch.m"
  }
#line 623 "tag_switch.m"
}

#line 610 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2(
#line 610 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 610 "tag_switch.m"
{
#line 610 "tag_switch.m"
  {
#line 610 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 610 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 610 "tag_switch.m"
    {
#line 610 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__610__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 610 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 610 "tag_switch.m"
  }
#line 610 "tag_switch.m"
}

#line 605 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1(
#line 605 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 605 "tag_switch.m"
{
#line 605 "tag_switch.m"
  {
#line 605 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 605 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 605 "tag_switch.m"
    {
#line 605 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__605__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 605 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 605 "tag_switch.m"
  }
#line 605 "tag_switch.m"
}

#line 577 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0(
#line 577 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 577 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinPtag_15,
#line 577 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxPtag_16,
#line 577 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_17,
#line 577 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 577 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_19,
#line 577 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_20,
#line 577 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_21,
#line 577 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 577 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60,
#line 577 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61,
#line 577 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_62,
#line 577 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_63)
#line 577 "tag_switch.m"
{
#line 620 "tag_switch.m"
  {
#line 620 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MinPtag_15 == ll_backend__tag_switch__MaxPtag_16);

#line 620 "tag_switch.m"
    if (ll_backend__tag_switch__succeeded)
#line 603 "tag_switch.m"
      if ((ll_backend__tag_switch__PtagGroups_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 588 "tag_switch.m"
        {
#line 597 "tag_switch.m"
          if ((ll_backend__tag_switch__MaybeFailLabel_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 598 "tag_switch.m"
            {
#line 601 "tag_switch.m"
              {
#line 601 "tag_switch.m"
                *ll_backend__tag_switch__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 598 "tag_switch.m"
            }
#line 597 "tag_switch.m"
          else
#line 591 "tag_switch.m"
            {
#line 591 "tag_switch.m"
              MR_Word ll_backend__tag_switch__FailLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_20, (MR_Integer) 0)));
#line 591 "tag_switch.m"
              MR_String ll_backend__tag_switch__PtagStr_27;
#line 591 "tag_switch.m"
              MR_String ll_backend__tag_switch__Comment_28;
#line 591 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_82_82;
#line 591 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_83_83;
#line 591 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_84_84;

#line 592 "tag_switch.m"
              {
#line 592 "tag_switch.m"
                mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MinPtag_15, &ll_backend__tag_switch__PtagStr_27);
              }
#line 593 "tag_switch.m"
              {
#line 593 "tag_switch.m"
                ll_backend__tag_switch__Comment_28 = mercury__string__f_43_43_2_f_0((MR_String) "no code for ptag ", ll_backend__tag_switch__PtagStr_27);
              }
#line 595 "tag_switch.m"
              {
#line 595 "tag_switch.m"
                ll_backend__tag_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 595 "tag_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_84_84, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_26));
#line 595 "tag_switch.m"
              }
#line 595 "tag_switch.m"
              {
#line 595 "tag_switch.m"
                ll_backend__tag_switch__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 595 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_83_83, 1) = ((MR_Box) (ll_backend__tag_switch__V_84_84));
#line 595 "tag_switch.m"
              }
#line 594 "tag_switch.m"
              {
#line 594 "tag_switch.m"
                ll_backend__tag_switch__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 594 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_82_82, 0) = ((MR_Box) (ll_backend__tag_switch__V_83_83));
#line 594 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_82_82, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_28));
#line 594 "tag_switch.m"
              }
#line 594 "tag_switch.m"
              {
#line 594 "tag_switch.m"
                *ll_backend__tag_switch__Code_22 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_82_82)));
              }
#line 591 "tag_switch.m"
            }
#line 601 "tag_switch.m"
          *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60;
#line 601 "tag_switch.m"
          *ll_backend__tag_switch__STATE_VARIABLE_CI_63 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_62;
#line 588 "tag_switch.m"
        }
#line 603 "tag_switch.m"
      else
#line 603 "tag_switch.m"
        {
#line 603 "tag_switch.m"
          MR_Word ll_backend__tag_switch__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagGroups_14, (MR_Integer) 1)));
#line 603 "tag_switch.m"
          MR_Word ll_backend__tag_switch__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagGroups_14, (MR_Integer) 0)));

#line 603 "tag_switch.m"
          if ((ll_backend__tag_switch__V_120_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 604 "tag_switch.m"
            {
#line 604 "tag_switch.m"
              MR_Integer ll_backend__tag_switch__CurPrimaryPrime_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_121_121, (MR_Integer) 0)));
#line 604 "tag_switch.m"
              MR_Word ll_backend__tag_switch__PrimaryInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_121_121, (MR_Integer) 1)));
#line 604 "tag_switch.m"
              MR_Word ll_backend__tag_switch__StagLoc_31;
#line 604 "tag_switch.m"
              MR_Word ll_backend__tag_switch__StagGoalMap_32;
#line 604 "tag_switch.m"
              MR_Word ll_backend__tag_switch__CountInfo_33;
#line 604 "tag_switch.m"
              MR_Word ll_backend__tag_switch__StagLocPrime_34;
#line 604 "tag_switch.m"
              MR_Integer ll_backend__tag_switch__MaxSecondary_35;
#line 604 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_70_70;
#line 604 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_74_74;
#line 608 "tag_switch.m"
              MR_Box ll_backend__tag_switch__conv0_CountInfo_33;

#line 605 "tag_switch.m"
              {
#line 605 "tag_switch.m"
                ll_backend__tag_switch__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 605 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[3]));
#line 605 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1));
#line 605 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 605 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 3) = ((MR_Box) (ll_backend__tag_switch__MinPtag_15));
#line 605 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 4) = ((MR_Box) (ll_backend__tag_switch__CurPrimaryPrime_29));
#line 605 "tag_switch.m"
              }
#line 605 "tag_switch.m"
              {
#line 605 "tag_switch.m"
                mercury__require__expect_4_p_0(ll_backend__tag_switch__V_70_70, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "cur_primary mismatch");
              }
#line 607 "tag_switch.m"
              ll_backend__tag_switch__StagLoc_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PrimaryInfo_30, (MR_Integer) 0)));
#line 607 "tag_switch.m"
              ll_backend__tag_switch__StagGoalMap_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PrimaryInfo_30, (MR_Integer) 1)));
#line 608 "tag_switch.m"
              {
#line 608 "tag_switch.m"
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[1], ll_backend__tag_switch__PtagCountMap_21, ll_backend__tag_switch__MinPtag_15, &ll_backend__tag_switch__conv0_CountInfo_33);
              }
#line 608 "tag_switch.m"
              ll_backend__tag_switch__CountInfo_33 = ((MR_Word) ll_backend__tag_switch__conv0_CountInfo_33);
#line 609 "tag_switch.m"
              ll_backend__tag_switch__StagLocPrime_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_33, (MR_Integer) 0)));
#line 609 "tag_switch.m"
              ll_backend__tag_switch__MaxSecondary_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_33, (MR_Integer) 1)));
#line 610 "tag_switch.m"
              {
#line 610 "tag_switch.m"
                ll_backend__tag_switch__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 610 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
#line 610 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2));
#line 610 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 610 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 3) = ((MR_Box) (ll_backend__tag_switch__StagLoc_31));
#line 610 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 4) = ((MR_Box) (ll_backend__tag_switch__StagLocPrime_34));
#line 610 "tag_switch.m"
              }
#line 610 "tag_switch.m"
              {
#line 610 "tag_switch.m"
                mercury__require__expect_4_p_0(ll_backend__tag_switch__V_74_74, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "secondary tag locations differ");
              }
#line 612 "tag_switch.m"
              {
#line 612 "tag_switch.m"
                ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_32, ll_backend__tag_switch__MinPtag_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__tag_switch__MaxSecondary_35, ll_backend__tag_switch__StagReg_18, ll_backend__tag_switch__StagLoc_31, ll_backend__tag_switch__VarRval_19, ll_backend__tag_switch__MaybeFailLabel_20, ll_backend__tag_switch__Code_22, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61, ll_backend__tag_switch__STATE_VARIABLE_CI_0_62, ll_backend__tag_switch__STATE_VARIABLE_CI_63);
#line 612 "tag_switch.m"
                return;
              }
#line 604 "tag_switch.m"
            }
#line 603 "tag_switch.m"
          else
#line 616 "tag_switch.m"
            {
#line 617 "tag_switch.m"
              {
#line 617 "tag_switch.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "caselist not singleton or empty when binary search ends");
#line 617 "tag_switch.m"
                return;
              }
#line 616 "tag_switch.m"
            }
#line 603 "tag_switch.m"
        }
#line 620 "tag_switch.m"
    else
#line 621 "tag_switch.m"
      {
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__TypeCtorInfo_119_119;
#line 621 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__LowRangeEnd_39;
#line 621 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__HighRangeStart_40;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__InLowGroup_41;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowGroups_45;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__HighGroups_46;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__NewLabel_47;
#line 621 "tag_switch.m"
        MR_String ll_backend__tag_switch__LowStartStr_48;
#line 621 "tag_switch.m"
        MR_String ll_backend__tag_switch__LowEndStr_49;
#line 621 "tag_switch.m"
        MR_String ll_backend__tag_switch__HighStartStr_50;
#line 621 "tag_switch.m"
        MR_String ll_backend__tag_switch__HighEndStr_51;
#line 621 "tag_switch.m"
        MR_String ll_backend__tag_switch__IfComment_52;
#line 621 "tag_switch.m"
        MR_String ll_backend__tag_switch__LabelComment_53;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowRangeEndConst_54;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__TestRval_55;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__IfCode_56;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LabelCode_57;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowRangeCode_58;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__HighRangeCode_59;
#line 621 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__V_85_85 = (ll_backend__tag_switch__MinPtag_15 + ll_backend__tag_switch__MaxPtag_16);
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_89_89;
#line 621 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_91_91;
#line 621 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_92_92;
#line 621 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_95_95;
#line 621 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_96_96;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_98_98;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_100_100;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_101_101;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_102_102;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_103_103;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_104_104;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_105_105;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_106_106;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_109_109;
#line 621 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_110_110;

#line 621 "tag_switch.m"
        {
#line 621 "tag_switch.m"
          ll_backend__tag_switch__LowRangeEnd_39 = mercury__int__f_47_47_2_f_0(ll_backend__tag_switch__V_85_85, (MR_Integer) 2);
        }
#line 622 "tag_switch.m"
        ll_backend__tag_switch__HighRangeStart_40 = (ll_backend__tag_switch__LowRangeEnd_39 + (MR_Integer) 1);
#line 623 "tag_switch.m"
        {
#line 623 "tag_switch.m"
          ll_backend__tag_switch__InLowGroup_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 623 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_41, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[4]));
#line 623 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_41, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_3));
#line 623 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 623 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_41, 3) = ((MR_Box) (ll_backend__tag_switch__LowRangeEnd_39));
#line 623 "tag_switch.m"
        }
#line 627 "tag_switch.m"
        {
#line 627 "tag_switch.m"
          mercury__list__filter_4_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[4], ll_backend__tag_switch__InLowGroup_41, ll_backend__tag_switch__PtagGroups_14, &ll_backend__tag_switch__LowGroups_45, &ll_backend__tag_switch__HighGroups_46);
        }
#line 628 "tag_switch.m"
        {
#line 628 "tag_switch.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__NewLabel_47, ll_backend__tag_switch__STATE_VARIABLE_CI_0_62, &ll_backend__tag_switch__STATE_VARIABLE_CI_89_89);
        }
#line 629 "tag_switch.m"
        {
#line 629 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MinPtag_15, &ll_backend__tag_switch__LowStartStr_48);
        }
#line 630 "tag_switch.m"
        {
#line 630 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__LowRangeEnd_39, &ll_backend__tag_switch__LowEndStr_49);
        }
#line 631 "tag_switch.m"
        {
#line 631 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__HighRangeStart_40, &ll_backend__tag_switch__HighStartStr_50);
        }
#line 632 "tag_switch.m"
        {
#line 632 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MaxPtag_16, &ll_backend__tag_switch__HighEndStr_51);
        }
#line 634 "tag_switch.m"
        {
#line 634 "tag_switch.m"
          ll_backend__tag_switch__V_92_92 = mercury__string__f_43_43_2_f_0((MR_String) " to ", ll_backend__tag_switch__LowEndStr_49);
        }
#line 633 "tag_switch.m"
        {
#line 633 "tag_switch.m"
          ll_backend__tag_switch__V_91_91 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__LowStartStr_48, ll_backend__tag_switch__V_92_92);
        }
#line 633 "tag_switch.m"
        {
#line 633 "tag_switch.m"
          ll_backend__tag_switch__IfComment_52 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough for ptags ", ll_backend__tag_switch__V_91_91);
        }
#line 636 "tag_switch.m"
        {
#line 636 "tag_switch.m"
          ll_backend__tag_switch__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) " to ", ll_backend__tag_switch__HighEndStr_51);
        }
#line 635 "tag_switch.m"
        {
#line 635 "tag_switch.m"
          ll_backend__tag_switch__V_95_95 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__HighStartStr_50, ll_backend__tag_switch__V_96_96);
        }
#line 635 "tag_switch.m"
        {
#line 635 "tag_switch.m"
          ll_backend__tag_switch__LabelComment_53 = mercury__string__f_43_43_2_f_0((MR_String) "code for ptags ", ll_backend__tag_switch__V_95_95);
        }
#line 637 "tag_switch.m"
        {
#line 637 "tag_switch.m"
          ll_backend__tag_switch__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 637 "tag_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_98_98, 0) = ((MR_Box) (ll_backend__tag_switch__LowRangeEnd_39));
#line 637 "tag_switch.m"
        }
#line 637 "tag_switch.m"
        {
#line 637 "tag_switch.m"
          ll_backend__tag_switch__LowRangeEndConst_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__LowRangeEndConst_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 637 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__LowRangeEndConst_54, 1) = ((MR_Box) (ll_backend__tag_switch__V_98_98));
#line 637 "tag_switch.m"
        }
#line 638 "tag_switch.m"
        {
#line 638 "tag_switch.m"
          ll_backend__tag_switch__TestRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 638 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 638 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
#line 638 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_55, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_17));
#line 638 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_55, 3) = ((MR_Box) (ll_backend__tag_switch__LowRangeEndConst_54));
#line 638 "tag_switch.m"
        }
#line 4338 "ll_backend.tag_switch.c"
        ll_backend__tag_switch__TypeCtorInfo_119_119 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 640 "tag_switch.m"
        {
#line 640 "tag_switch.m"
          ll_backend__tag_switch__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 640 "tag_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_102_102, 0) = ((MR_Box) (ll_backend__tag_switch__NewLabel_47));
#line 640 "tag_switch.m"
        }
#line 640 "tag_switch.m"
        {
#line 640 "tag_switch.m"
          ll_backend__tag_switch__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 640 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 640 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_101_101, 1) = ((MR_Box) (ll_backend__tag_switch__TestRval_55));
#line 640 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_101_101, 2) = ((MR_Box) (ll_backend__tag_switch__V_102_102));
#line 640 "tag_switch.m"
        }
#line 639 "tag_switch.m"
        {
#line 639 "tag_switch.m"
          ll_backend__tag_switch__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 639 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_100_100, 0) = ((MR_Box) (ll_backend__tag_switch__V_101_101));
#line 639 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_100_100, 1) = ((MR_Box) (ll_backend__tag_switch__IfComment_52));
#line 639 "tag_switch.m"
        }
#line 639 "tag_switch.m"
        {
#line 639 "tag_switch.m"
          ll_backend__tag_switch__IfCode_56 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ((MR_Box) (ll_backend__tag_switch__V_100_100)));
        }
#line 643 "tag_switch.m"
        {
#line 643 "tag_switch.m"
          ll_backend__tag_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 643 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_104_104, 1) = ((MR_Box) (ll_backend__tag_switch__NewLabel_47));
#line 643 "tag_switch.m"
        }
#line 642 "tag_switch.m"
        {
#line 642 "tag_switch.m"
          ll_backend__tag_switch__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 642 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_103_103, 0) = ((MR_Box) (ll_backend__tag_switch__V_104_104));
#line 642 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_103_103, 1) = ((MR_Box) (ll_backend__tag_switch__LabelComment_53));
#line 642 "tag_switch.m"
        }
#line 642 "tag_switch.m"
        {
#line 642 "tag_switch.m"
          ll_backend__tag_switch__LabelCode_57 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ((MR_Box) (ll_backend__tag_switch__V_103_103)));
        }
#line 646 "tag_switch.m"
        {
#line 646 "tag_switch.m"
          ll_backend__tag_switch__generate_primary_binary_search_13_p_0(ll_backend__tag_switch__LowGroups_45, ll_backend__tag_switch__MinPtag_15, ll_backend__tag_switch__LowRangeEnd_39, ll_backend__tag_switch__PtagRval_17, ll_backend__tag_switch__StagReg_18, ll_backend__tag_switch__VarRval_19, ll_backend__tag_switch__MaybeFailLabel_20, ll_backend__tag_switch__PtagCountMap_21, &ll_backend__tag_switch__LowRangeCode_58, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_105_105, ll_backend__tag_switch__STATE_VARIABLE_CI_89_89, &ll_backend__tag_switch__STATE_VARIABLE_CI_106_106);
        }
#line 649 "tag_switch.m"
        {
#line 649 "tag_switch.m"
          ll_backend__tag_switch__generate_primary_binary_search_13_p_0(ll_backend__tag_switch__HighGroups_46, ll_backend__tag_switch__HighRangeStart_40, ll_backend__tag_switch__MaxPtag_16, ll_backend__tag_switch__PtagRval_17, ll_backend__tag_switch__StagReg_18, ll_backend__tag_switch__VarRval_19, ll_backend__tag_switch__MaybeFailLabel_20, ll_backend__tag_switch__PtagCountMap_21, &ll_backend__tag_switch__HighRangeCode_59, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_105_105, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61, ll_backend__tag_switch__STATE_VARIABLE_CI_106_106, ll_backend__tag_switch__STATE_VARIABLE_CI_63);
        }
#line 652 "tag_switch.m"
        {
#line 652 "tag_switch.m"
          ll_backend__tag_switch__V_110_110 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ll_backend__tag_switch__LabelCode_57, ll_backend__tag_switch__HighRangeCode_59);
        }
#line 652 "tag_switch.m"
        {
#line 652 "tag_switch.m"
          ll_backend__tag_switch__V_109_109 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ll_backend__tag_switch__LowRangeCode_58, ll_backend__tag_switch__V_110_110);
        }
#line 652 "tag_switch.m"
        {
#line 652 "tag_switch.m"
          *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ll_backend__tag_switch__IfCode_56, ll_backend__tag_switch__V_109_109);
        }
#line 621 "tag_switch.m"
      }
#line 620 "tag_switch.m"
  }
#line 577 "tag_switch.m"
}

#line 548 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_2(
#line 548 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 548 "tag_switch.m"
{
#line 548 "tag_switch.m"
  {
#line 548 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 548 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 548 "tag_switch.m"
    {
#line 548 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__548__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 548 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 548 "tag_switch.m"
  }
#line 548 "tag_switch.m"
}

#line 535 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1(
#line 535 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 535 "tag_switch.m"
{
#line 535 "tag_switch.m"
  {
#line 535 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 535 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 535 "tag_switch.m"
    {
#line 535 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__535__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 535 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 535 "tag_switch.m"
  }
#line 535 "tag_switch.m"
}

#line 525 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0(
#line 525 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 525 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurPrimary_15,
#line 525 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxPrimary_16,
#line 525 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_17,
#line 525 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_18,
#line 525 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_19,
#line 525 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_20,
#line 525 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Targets_21,
#line 525 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 525 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40,
#line 525 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41,
#line 525 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_42,
#line 525 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_43)
#line 525 "tag_switch.m"
{
#line 539 "tag_switch.m"
  {
#line 539 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CurPrimary_15 > ll_backend__tag_switch__MaxPrimary_16);

#line 539 "tag_switch.m"
    if (ll_backend__tag_switch__succeeded)
#line 536 "tag_switch.m"
      {
#line 536 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_44_44;

#line 535 "tag_switch.m"
        {
#line 535 "tag_switch.m"
          ll_backend__tag_switch__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 535 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[2]));
#line 535 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1));
#line 535 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 535 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 3) = ((MR_Box) (ll_backend__tag_switch__PtagGroups_14));
#line 535 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "tag_switch.m"
        }
#line 535 "tag_switch.m"
        {
#line 535 "tag_switch.m"
          mercury__require__expect_4_p_0(ll_backend__tag_switch__V_44_44, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_jump_table\'/13", (MR_String) "PtagGroups != [] when Cur > Max");
        }
#line 537 "tag_switch.m"
        *ll_backend__tag_switch__Targets_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 538 "tag_switch.m"
        {
#line 538 "tag_switch.m"
          *ll_backend__tag_switch__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 538 "tag_switch.m"
        *ll_backend__tag_switch__STATE_VARIABLE_CI_43 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_42;
#line 538 "tag_switch.m"
        *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40;
#line 536 "tag_switch.m"
      }
#line 539 "tag_switch.m"
    else
#line 540 "tag_switch.m"
      {
#line 540 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__NextPrimary_25 = (ll_backend__tag_switch__CurPrimary_15 + (MR_Integer) 1);
#line 562 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PtagGroupsTail_27;
#line 562 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PrimaryInfo_28;
#line 542 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PtagCaseEntry_26;
#line 542 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__V_76_76;

#line 542 "tag_switch.m"
        ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__PtagGroups_14)) == (MR_mktag((MR_Integer) 1)));
#line 542 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 542 "tag_switch.m"
          {
#line 542 "tag_switch.m"
            ll_backend__tag_switch__PtagCaseEntry_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagGroups_14, (MR_Integer) 0)));
#line 542 "tag_switch.m"
            ll_backend__tag_switch__PtagGroupsTail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagGroups_14, (MR_Integer) 1)));
#line 543 "tag_switch.m"
            ll_backend__tag_switch__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCaseEntry_26, (MR_Integer) 0)));
#line 543 "tag_switch.m"
            ll_backend__tag_switch__PrimaryInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCaseEntry_26, (MR_Integer) 1)));
#line 543 "tag_switch.m"
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CurPrimary_15 == ll_backend__tag_switch__V_76_76);
#line 542 "tag_switch.m"
          }
#line 562 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 545 "tag_switch.m"
          {
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TypeCtorInfo_75_75;
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagLoc_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PrimaryInfo_28, (MR_Integer) 0)));
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagGoalMap_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PrimaryInfo_28, (MR_Integer) 1)));
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__CountInfo_31;
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagLocPrime_32;
#line 545 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__MaxSecondary_33;
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__NewLabel_34;
#line 545 "tag_switch.m"
            MR_String ll_backend__tag_switch__Comment_35;
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__LabelCode_36;
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__ThisTagCode_37;
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TailTargets_38;
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TailCode_39;
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_50_50;
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_54_54;
#line 545 "tag_switch.m"
            MR_String ll_backend__tag_switch__V_56_56;
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_57_57;
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_58_58;
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_60_60;
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_61_61;
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_64_64;
#line 545 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_65_65;
#line 546 "tag_switch.m"
            MR_Box ll_backend__tag_switch__conv0_CountInfo_31;

#line 546 "tag_switch.m"
            {
#line 546 "tag_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[1], ll_backend__tag_switch__PtagCountMap_20, ll_backend__tag_switch__CurPrimary_15, &ll_backend__tag_switch__conv0_CountInfo_31);
            }
#line 546 "tag_switch.m"
            ll_backend__tag_switch__CountInfo_31 = ((MR_Word) ll_backend__tag_switch__conv0_CountInfo_31);
#line 547 "tag_switch.m"
            ll_backend__tag_switch__StagLocPrime_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_31, (MR_Integer) 0)));
#line 547 "tag_switch.m"
            ll_backend__tag_switch__MaxSecondary_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_31, (MR_Integer) 1)));
#line 548 "tag_switch.m"
            {
#line 548 "tag_switch.m"
              ll_backend__tag_switch__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 548 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
#line 548 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_jump_table_13_p_0_2));
#line 548 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 548 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 3) = ((MR_Box) (ll_backend__tag_switch__StagLoc_29));
#line 548 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 4) = ((MR_Box) (ll_backend__tag_switch__StagLocPrime_32));
#line 548 "tag_switch.m"
            }
#line 548 "tag_switch.m"
            {
#line 548 "tag_switch.m"
              mercury__require__expect_4_p_0(ll_backend__tag_switch__V_50_50, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_jump_table\'/13", (MR_String) "secondary tag locations differ");
            }
#line 550 "tag_switch.m"
            {
#line 550 "tag_switch.m"
              ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__NewLabel_34, ll_backend__tag_switch__STATE_VARIABLE_CI_0_42, &ll_backend__tag_switch__STATE_VARIABLE_CI_54_54);
            }
#line 551 "tag_switch.m"
            {
#line 551 "tag_switch.m"
              ll_backend__tag_switch__V_56_56 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__CurPrimary_15);
            }
#line 551 "tag_switch.m"
            {
#line 551 "tag_switch.m"
              ll_backend__tag_switch__Comment_35 = mercury__string__f_43_43_2_f_0((MR_String) "start of a case in primary tag switch: ptag ", ll_backend__tag_switch__V_56_56);
            }
#line 4690 "ll_backend.tag_switch.c"
            ll_backend__tag_switch__TypeCtorInfo_75_75 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 553 "tag_switch.m"
            {
#line 553 "tag_switch.m"
              ll_backend__tag_switch__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 553 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 1) = ((MR_Box) (ll_backend__tag_switch__NewLabel_34));
#line 553 "tag_switch.m"
            }
#line 553 "tag_switch.m"
            {
#line 553 "tag_switch.m"
              ll_backend__tag_switch__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 553 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_57_57, 0) = ((MR_Box) (ll_backend__tag_switch__V_58_58));
#line 553 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_57_57, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_35));
#line 553 "tag_switch.m"
            }
#line 553 "tag_switch.m"
            {
#line 553 "tag_switch.m"
              ll_backend__tag_switch__LabelCode_36 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_75_75, ((MR_Box) (ll_backend__tag_switch__V_57_57)));
            }
#line 554 "tag_switch.m"
            {
#line 554 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_30, ll_backend__tag_switch__CurPrimary_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__tag_switch__MaxSecondary_33, ll_backend__tag_switch__StagReg_17, ll_backend__tag_switch__StagLoc_29, ll_backend__tag_switch__VarRval_18, ll_backend__tag_switch__MaybeFailLabel_19, &ll_backend__tag_switch__ThisTagCode_37, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_60_60, ll_backend__tag_switch__STATE_VARIABLE_CI_54_54, &ll_backend__tag_switch__STATE_VARIABLE_CI_61_61);
            }
#line 557 "tag_switch.m"
            {
#line 557 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_jump_table_13_p_0(ll_backend__tag_switch__PtagGroupsTail_27, ll_backend__tag_switch__NextPrimary_25, ll_backend__tag_switch__MaxPrimary_16, ll_backend__tag_switch__StagReg_17, ll_backend__tag_switch__VarRval_18, ll_backend__tag_switch__MaybeFailLabel_19, ll_backend__tag_switch__PtagCountMap_20, &ll_backend__tag_switch__TailTargets_38, &ll_backend__tag_switch__TailCode_39, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_60_60, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41, ll_backend__tag_switch__STATE_VARIABLE_CI_61_61, ll_backend__tag_switch__STATE_VARIABLE_CI_43);
            }
#line 560 "tag_switch.m"
            {
#line 560 "tag_switch.m"
              ll_backend__tag_switch__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 560 "tag_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_64_64, 0) = ((MR_Box) (ll_backend__tag_switch__NewLabel_34));
#line 560 "tag_switch.m"
            }
#line 560 "tag_switch.m"
            {
#line 560 "tag_switch.m"
              MR_Word base;
#line 560 "tag_switch.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "tag_switch.m"
              *ll_backend__tag_switch__Targets_21 = base;
#line 560 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__tag_switch__V_64_64));
#line 560 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__tag_switch__TailTargets_38));
#line 560 "tag_switch.m"
            }
#line 561 "tag_switch.m"
            {
#line 561 "tag_switch.m"
              ll_backend__tag_switch__V_65_65 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_75_75, ll_backend__tag_switch__ThisTagCode_37, ll_backend__tag_switch__TailCode_39);
            }
#line 561 "tag_switch.m"
            {
#line 561 "tag_switch.m"
              *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_75_75, ll_backend__tag_switch__LabelCode_36, ll_backend__tag_switch__V_65_65);
            }
#line 545 "tag_switch.m"
          }
#line 562 "tag_switch.m"
        else
#line 565 "tag_switch.m"
          {
#line 565 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TailTargets_68;

#line 563 "tag_switch.m"
            {
#line 563 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_jump_table_13_p_0(ll_backend__tag_switch__PtagGroups_14, ll_backend__tag_switch__NextPrimary_25, ll_backend__tag_switch__MaxPrimary_16, ll_backend__tag_switch__StagReg_17, ll_backend__tag_switch__VarRval_18, ll_backend__tag_switch__MaybeFailLabel_19, ll_backend__tag_switch__PtagCountMap_20, &ll_backend__tag_switch__TailTargets_68, ll_backend__tag_switch__Code_22, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41, ll_backend__tag_switch__STATE_VARIABLE_CI_0_42, ll_backend__tag_switch__STATE_VARIABLE_CI_43);
            }
#line 566 "tag_switch.m"
            {
#line 566 "tag_switch.m"
              MR_Word base;
#line 566 "tag_switch.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "tag_switch.m"
              *ll_backend__tag_switch__Targets_21 = base;
#line 566 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__tag_switch__MaybeFailLabel_19));
#line 566 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__tag_switch__TailTargets_68));
#line 566 "tag_switch.m"
            }
#line 565 "tag_switch.m"
          }
#line 540 "tag_switch.m"
      }
#line 539 "tag_switch.m"
  }
#line 525 "tag_switch.m"
}

#line 508 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_p_0(
#line 508 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 508 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 508 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__3_3,
#line 508 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__TestRval_4)
#line 508 "tag_switch.m"
{
#line 511 "tag_switch.m"
  while (MR_TRUE)
#line 511 "tag_switch.m"
    {
#line 511 "tag_switch.m"
      /* tailcall optimized into a loop */
#line 511 "tag_switch.m"
      {
#line 511 "tag_switch.m"
        MR_bool ll_backend__tag_switch__succeeded;

#line 511 "tag_switch.m"
        if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 511 "tag_switch.m"
          *ll_backend__tag_switch__TestRval_4 = ll_backend__tag_switch__HeadVar__3_3;
#line 511 "tag_switch.m"
        else
#line 513 "tag_switch.m"
          {
#line 513 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__OtherPtag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 513 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherPtags_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 513 "tag_switch.m"
            MR_Word ll_backend__tag_switch__ThisTestRval_12;
#line 513 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TestRval1_13;
#line 513 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_15_15;
#line 513 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_17_17;
#line 513 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_18_18;

#line 515 "tag_switch.m"
            {
#line 515 "tag_switch.m"
              ll_backend__tag_switch__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 515 "tag_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_18_18, 0) = ((MR_Box) (ll_backend__tag_switch__OtherPtag_7));
#line 515 "tag_switch.m"
            }
#line 515 "tag_switch.m"
            {
#line 515 "tag_switch.m"
              ll_backend__tag_switch__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 515 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_17_17, 1) = ((MR_Box) (ll_backend__tag_switch__V_18_18));
#line 515 "tag_switch.m"
            }
#line 514 "tag_switch.m"
            {
#line 514 "tag_switch.m"
              ll_backend__tag_switch__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 514 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 514 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 514 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 2) = ((MR_Box) (ll_backend__tag_switch__V_17_17));
#line 514 "tag_switch.m"
            }
#line 514 "tag_switch.m"
            {
#line 514 "tag_switch.m"
              ll_backend__tag_switch__ThisTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 514 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 514 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 514 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_2));
#line 514 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 3) = ((MR_Box) (ll_backend__tag_switch__V_15_15));
#line 514 "tag_switch.m"
            }
#line 516 "tag_switch.m"
            {
#line 516 "tag_switch.m"
              ll_backend__tag_switch__TestRval1_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 516 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 516 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 516 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 2) = ((MR_Box) (ll_backend__tag_switch__HeadVar__3_3));
#line 516 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 3) = ((MR_Box) (ll_backend__tag_switch__ThisTestRval_12));
#line 516 "tag_switch.m"
            }
#line 517 "tag_switch.m"
            /* direct tailcall eliminated */
#line 517 "tag_switch.m"
            {
#line 517 "tag_switch.m"
              MR_Word ll_backend__tag_switch__HeadVar__1__tmp_copy_1 = ll_backend__tag_switch__OtherPtags_8;
#line 517 "tag_switch.m"
              MR_Word ll_backend__tag_switch__HeadVar__3__tmp_copy_3 = ll_backend__tag_switch__TestRval1_13;

#line 517 "tag_switch.m"
              ll_backend__tag_switch__HeadVar__3_3 = ll_backend__tag_switch__HeadVar__3__tmp_copy_3;
#line 517 "tag_switch.m"
              ll_backend__tag_switch__HeadVar__1_1 = ll_backend__tag_switch__HeadVar__1__tmp_copy_1;
#line 517 "tag_switch.m"
            }
#line 517 "tag_switch.m"
            continue;
#line 513 "tag_switch.m"
          }
#line 511 "tag_switch.m"
      }
#line 511 "tag_switch.m"
      break;
#line 511 "tag_switch.m"
    }
#line 508 "tag_switch.m"
}

#line 1011 "tag_switch.m"
static MR_Box MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0_1(
#line 1011 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 1011 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1)
#line 1011 "tag_switch.m"
{
#line 1011 "tag_switch.m"
  {
#line 1011 "tag_switch.m"
    MR_Box ll_backend__tag_switch__wrapper_arg_2;
#line 1011 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;
#line 1011 "tag_switch.m"
    MR_String ll_backend__tag_switch__conv0_HeadVar__2_2;

#line 1011 "tag_switch.m"
    {
#line 1011 "tag_switch.m"
      ll_backend__tag_switch__conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) ll_backend__tag_switch__wrapper_arg_1));
    }
#line 1011 "tag_switch.m"
    ll_backend__tag_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__tag_switch__conv0_HeadVar__2_2));
#line 1011 "tag_switch.m"
    return ll_backend__tag_switch__wrapper_arg_2;
#line 1011 "tag_switch.m"
  }
#line 1011 "tag_switch.m"
}

#line 477 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_17,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 477 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_19,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_20,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCase_21,
#line 477 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_22,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_23,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_24,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_25,
#line 477 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__PrevTestsCode_26,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevCasesCode0_27,
#line 477 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__PrevCasesCode_28,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40,
#line 477 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41,
#line 477 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_42,
#line 477 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_43)
#line 477 "tag_switch.m"
{
#line 487 "tag_switch.m"
  {
#line 487 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_60_60;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ThisPtagLabel_31;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestRval0_32;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestRval_33;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestCode_34;
#line 487 "tag_switch.m"
    MR_String ll_backend__tag_switch__Comment_35;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__LabelCode_36;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagLoc_37;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagGoalMap_38;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TagCode_39;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_44_44;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_46_46;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_48_48;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_49_49;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_50_50;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_51_51;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_52_52;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_55_55;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_56_56;
#line 487 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_59_59;

#line 488 "tag_switch.m"
    {
#line 488 "tag_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__ThisPtagLabel_31, ll_backend__tag_switch__STATE_VARIABLE_CI_0_42, &ll_backend__tag_switch__STATE_VARIABLE_CI_44_44);
    }
#line 490 "tag_switch.m"
    {
#line 490 "tag_switch.m"
      ll_backend__tag_switch__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 490 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_49_49, 0) = ((MR_Box) (ll_backend__tag_switch__MainPtag_19));
#line 490 "tag_switch.m"
    }
#line 490 "tag_switch.m"
    {
#line 490 "tag_switch.m"
      ll_backend__tag_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 490 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_48_48, 1) = ((MR_Box) (ll_backend__tag_switch__V_49_49));
#line 490 "tag_switch.m"
    }
#line 489 "tag_switch.m"
    {
#line 489 "tag_switch.m"
      ll_backend__tag_switch__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 489 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 489 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_46_46, 1) = ((MR_Box) ((MR_Integer) 0));
#line 489 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_46_46, 2) = ((MR_Box) (ll_backend__tag_switch__V_48_48));
#line 489 "tag_switch.m"
    }
#line 489 "tag_switch.m"
    {
#line 489 "tag_switch.m"
      ll_backend__tag_switch__TestRval0_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 489 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 489 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 489 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_32, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_17));
#line 489 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_32, 3) = ((MR_Box) (ll_backend__tag_switch__V_46_46));
#line 489 "tag_switch.m"
    }
#line 491 "tag_switch.m"
    {
#line 491 "tag_switch.m"
      ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_p_0(ll_backend__tag_switch__OtherPtags_20, ll_backend__tag_switch__PtagRval_17, ll_backend__tag_switch__TestRval0_32, &ll_backend__tag_switch__TestRval_33);
    }
#line 5097 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_60_60 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 494 "tag_switch.m"
    {
#line 494 "tag_switch.m"
      ll_backend__tag_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 494 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_52_52, 0) = ((MR_Box) (ll_backend__tag_switch__ThisPtagLabel_31));
#line 494 "tag_switch.m"
    }
#line 494 "tag_switch.m"
    {
#line 494 "tag_switch.m"
      ll_backend__tag_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 494 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 494 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_51_51, 1) = ((MR_Box) (ll_backend__tag_switch__TestRval_33));
#line 494 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_51_51, 2) = ((MR_Box) (ll_backend__tag_switch__V_52_52));
#line 494 "tag_switch.m"
    }
#line 493 "tag_switch.m"
    {
#line 493 "tag_switch.m"
      ll_backend__tag_switch__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 493 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 0) = ((MR_Box) (ll_backend__tag_switch__V_51_51));
#line 493 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 1) = ((MR_Box) ((MR_String) "test primary tag only"));
#line 493 "tag_switch.m"
    }
#line 493 "tag_switch.m"
    {
#line 493 "tag_switch.m"
      ll_backend__tag_switch__TestCode_34 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ((MR_Box) (ll_backend__tag_switch__V_50_50)));
    }
#line 1005 "tag_switch.m"
    if ((ll_backend__tag_switch__OtherPtags_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1005 "tag_switch.m"
      {
#line 1005 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_77_77;

#line 1006 "tag_switch.m"
        {
#line 1006 "tag_switch.m"
          ll_backend__tag_switch__V_77_77 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__MainPtag_19);
        }
#line 1006 "tag_switch.m"
        {
#line 1006 "tag_switch.m"
          ll_backend__tag_switch__Comment_35 = mercury__string__f_43_43_2_f_0((MR_String) "primary tag value: ", ll_backend__tag_switch__V_77_77);
        }
#line 1005 "tag_switch.m"
      }
#line 1005 "tag_switch.m"
    else
#line 1008 "tag_switch.m"
      {
#line 1008 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_67_67;
#line 1008 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_68_68;
#line 1008 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_69_69;
#line 1008 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_71_71;
#line 1008 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_72_72;
#line 1008 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_74_74;

#line 1010 "tag_switch.m"
        {
#line 1010 "tag_switch.m"
          ll_backend__tag_switch__V_68_68 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__MainPtag_19);
        }
#line 1011 "tag_switch.m"
        {
#line 1011 "tag_switch.m"
          ll_backend__tag_switch__V_74_74 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__tag_switch_scalar_common_1[4], ll_backend__tag_switch__OtherPtags_20);
        }
#line 1012 "tag_switch.m"
        {
#line 1012 "tag_switch.m"
          ll_backend__tag_switch__V_72_72 = mercury__string__join_list_2_f_0((MR_String) ", ", ll_backend__tag_switch__V_74_74);
        }
#line 1010 "tag_switch.m"
        {
#line 1010 "tag_switch.m"
          ll_backend__tag_switch__V_71_71 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__V_72_72, (MR_String) ")");
        }
#line 1010 "tag_switch.m"
        {
#line 1010 "tag_switch.m"
          ll_backend__tag_switch__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) "(shared with ", ll_backend__tag_switch__V_71_71);
        }
#line 1009 "tag_switch.m"
        {
#line 1009 "tag_switch.m"
          ll_backend__tag_switch__V_67_67 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__V_68_68, ll_backend__tag_switch__V_69_69);
        }
#line 1009 "tag_switch.m"
        {
#line 1009 "tag_switch.m"
          ll_backend__tag_switch__Comment_35 = mercury__string__f_43_43_2_f_0((MR_String) "primary tag value: ", ll_backend__tag_switch__V_67_67);
        }
#line 1008 "tag_switch.m"
      }
#line 499 "tag_switch.m"
    {
#line 499 "tag_switch.m"
      ll_backend__tag_switch__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 499 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_56_56, 1) = ((MR_Box) (ll_backend__tag_switch__ThisPtagLabel_31));
#line 499 "tag_switch.m"
    }
#line 498 "tag_switch.m"
    {
#line 498 "tag_switch.m"
      ll_backend__tag_switch__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 498 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 0) = ((MR_Box) (ll_backend__tag_switch__V_56_56));
#line 498 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_35));
#line 498 "tag_switch.m"
    }
#line 498 "tag_switch.m"
    {
#line 498 "tag_switch.m"
      ll_backend__tag_switch__LabelCode_36 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ((MR_Box) (ll_backend__tag_switch__V_55_55)));
    }
#line 501 "tag_switch.m"
    ll_backend__tag_switch__StagLoc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_21, (MR_Integer) 0)));
#line 501 "tag_switch.m"
    ll_backend__tag_switch__StagGoalMap_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_21, (MR_Integer) 1)));
#line 502 "tag_switch.m"
    {
#line 502 "tag_switch.m"
      ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_38, ll_backend__tag_switch__MainPtag_19, ll_backend__tag_switch__OtherPtags_20, ll_backend__tag_switch__MaxSecondary_22, ll_backend__tag_switch__StagReg_18, ll_backend__tag_switch__StagLoc_37, ll_backend__tag_switch__VarRval_23, ll_backend__tag_switch__MaybeFailLabel_24, &ll_backend__tag_switch__TagCode_39, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41, ll_backend__tag_switch__STATE_VARIABLE_CI_44_44, ll_backend__tag_switch__STATE_VARIABLE_CI_43);
    }
#line 505 "tag_switch.m"
    {
#line 505 "tag_switch.m"
      *ll_backend__tag_switch__PrevTestsCode_26 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ll_backend__tag_switch__PrevTestsCode0_25, ll_backend__tag_switch__TestCode_34);
    }
#line 506 "tag_switch.m"
    {
#line 506 "tag_switch.m"
      ll_backend__tag_switch__V_59_59 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ll_backend__tag_switch__TagCode_39, ll_backend__tag_switch__PrevCasesCode0_27);
    }
#line 506 "tag_switch.m"
    {
#line 506 "tag_switch.m"
      *ll_backend__tag_switch__PrevCasesCode_28 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ll_backend__tag_switch__LabelCode_36, ll_backend__tag_switch__V_59_59);
    }
#line 487 "tag_switch.m"
  }
#line 477 "tag_switch.m"
}

#line 437 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1(
#line 437 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 437 "tag_switch.m"
{
#line 437 "tag_switch.m"
  {
#line 437 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 437 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 437 "tag_switch.m"
    {
#line 437 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__437__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 437 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 437 "tag_switch.m"
  }
#line 437 "tag_switch.m"
}

#line 422 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0(
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_3,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_4,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_5,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_6,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_7,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevCasesCode0_8,
#line 422 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_9,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10,
#line 422 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_11,
#line 422 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_12,
#line 422 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_13)
#line 422 "tag_switch.m"
{
#line 428 "tag_switch.m"
  while (MR_TRUE)
#line 428 "tag_switch.m"
    {
#line 428 "tag_switch.m"
      /* tailcall optimized into a loop */
#line 428 "tag_switch.m"
      {
#line 428 "tag_switch.m"
        MR_bool ll_backend__tag_switch__succeeded;

#line 428 "tag_switch.m"
        if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "tag_switch.m"
          {
#line 429 "tag_switch.m"
            {
#line 429 "tag_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_chain\'/13", (MR_String) "empty list");
#line 429 "tag_switch.m"
              return;
            }
#line 428 "tag_switch.m"
          }
#line 428 "tag_switch.m"
        else
#line 432 "tag_switch.m"
          {
#line 432 "tag_switch.m"
            MR_Word ll_backend__tag_switch__PtagGroup_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 432 "tag_switch.m"
            MR_Word ll_backend__tag_switch__PtagGroups_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 432 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__MainPtag_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_31, (MR_Integer) 0)));
#line 432 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherPtags_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_31, (MR_Integer) 1)));
#line 432 "tag_switch.m"
            MR_Word ll_backend__tag_switch__PtagCase_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_31, (MR_Integer) 2)));
#line 432 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagLoc_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_45, (MR_Integer) 0)));
#line 432 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagGoalMap_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_45, (MR_Integer) 1)));
#line 432 "tag_switch.m"
            MR_Word ll_backend__tag_switch__CountInfo_48;
#line 432 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagLocPrime_49;
#line 432 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__MaxSecondary_50;
#line 432 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_64_64;
#line 435 "tag_switch.m"
            MR_Box ll_backend__tag_switch__conv0_CountInfo_48;

#line 435 "tag_switch.m"
            {
#line 435 "tag_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[1], ll_backend__tag_switch__PtagCountMap_6, ll_backend__tag_switch__MainPtag_43, &ll_backend__tag_switch__conv0_CountInfo_48);
            }
#line 435 "tag_switch.m"
            ll_backend__tag_switch__CountInfo_48 = ((MR_Word) ll_backend__tag_switch__conv0_CountInfo_48);
#line 436 "tag_switch.m"
            ll_backend__tag_switch__StagLocPrime_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_48, (MR_Integer) 0)));
#line 436 "tag_switch.m"
            ll_backend__tag_switch__MaxSecondary_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_48, (MR_Integer) 1)));
#line 437 "tag_switch.m"
            {
#line 437 "tag_switch.m"
              ll_backend__tag_switch__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 437 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
#line 437 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1));
#line 437 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 437 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 3) = ((MR_Box) (ll_backend__tag_switch__StagLoc_46));
#line 437 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 4) = ((MR_Box) (ll_backend__tag_switch__StagLocPrime_49));
#line 437 "tag_switch.m"
            }
#line 437 "tag_switch.m"
            {
#line 437 "tag_switch.m"
              mercury__require__expect_4_p_0(ll_backend__tag_switch__V_64_64, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_chain\'/13", (MR_String) "secondary tag locations differ");
            }
#line 449 "tag_switch.m"
            if ((ll_backend__tag_switch__PtagGroups_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 463 "tag_switch.m"
              if ((ll_backend__tag_switch__MaybeFailLabel_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 464 "tag_switch.m"
                {
#line 464 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TypeCtorInfo_97_97;
#line 464 "tag_switch.m"
                  MR_String ll_backend__tag_switch__Comment_57;
#line 464 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__CommentCode_58;
#line 464 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TagCode_59;
#line 464 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_69_69;
#line 464 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_70_70;
#line 464 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_74_74;
#line 464 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_75_75;

#line 465 "tag_switch.m"
                  {
#line 465 "tag_switch.m"
                    ll_backend__tag_switch__make_ptag_comment_4_p_0((MR_String) "fallthrough to last primary tag value: ", ll_backend__tag_switch__MainPtag_43, ll_backend__tag_switch__OtherPtags_44, &ll_backend__tag_switch__Comment_57);
                  }
#line 5431 "ll_backend.tag_switch.c"
                  ll_backend__tag_switch__TypeCtorInfo_97_97 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 468 "tag_switch.m"
                  {
#line 468 "tag_switch.m"
                    ll_backend__tag_switch__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 468 "tag_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_70_70, 0) = ((MR_Box) (ll_backend__tag_switch__Comment_57));
#line 468 "tag_switch.m"
                  }
#line 467 "tag_switch.m"
                  {
#line 467 "tag_switch.m"
                    ll_backend__tag_switch__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 467 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_69_69, 0) = ((MR_Box) (ll_backend__tag_switch__V_70_70));
#line 467 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_69_69, 1) = ((MR_Box) ((MR_String) ""));
#line 467 "tag_switch.m"
                  }
#line 467 "tag_switch.m"
                  {
#line 467 "tag_switch.m"
                    ll_backend__tag_switch__CommentCode_58 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_97_97, ((MR_Box) (ll_backend__tag_switch__V_69_69)));
                  }
#line 470 "tag_switch.m"
                  {
#line 470 "tag_switch.m"
                    ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_47, ll_backend__tag_switch__MainPtag_43, ll_backend__tag_switch__OtherPtags_44, ll_backend__tag_switch__MaxSecondary_50, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__StagLoc_46, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, &ll_backend__tag_switch__TagCode_59, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_11, ll_backend__tag_switch__STATE_VARIABLE_CI_0_12, ll_backend__tag_switch__STATE_VARIABLE_CI_13);
                  }
#line 473 "tag_switch.m"
                  {
#line 473 "tag_switch.m"
                    ll_backend__tag_switch__V_75_75 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_97_97, ll_backend__tag_switch__TagCode_59, ll_backend__tag_switch__PrevCasesCode0_8);
                  }
#line 473 "tag_switch.m"
                  {
#line 473 "tag_switch.m"
                    ll_backend__tag_switch__V_74_74 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_97_97, ll_backend__tag_switch__CommentCode_58, ll_backend__tag_switch__V_75_75);
                  }
#line 473 "tag_switch.m"
                  {
#line 473 "tag_switch.m"
                    *ll_backend__tag_switch__Code_9 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_97_97, ll_backend__tag_switch__PrevTestsCode0_7, ll_backend__tag_switch__V_74_74);
                  }
#line 464 "tag_switch.m"
                }
#line 463 "tag_switch.m"
              else
#line 452 "tag_switch.m"
                {
#line 452 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TypeCtorInfo_96_96;
#line 452 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__FailLabel_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_5, (MR_Integer) 0)));
#line 452 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__FailCode_56;
#line 452 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_78_78;
#line 452 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_79_79;
#line 452 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_80_80;
#line 452 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_82_82;
#line 452 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevTestsCode1_87;
#line 452 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevCasesCode1_88;

#line 453 "tag_switch.m"
                  {
#line 453 "tag_switch.m"
                    ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__MainPtag_43, ll_backend__tag_switch__OtherPtags_44, ll_backend__tag_switch__PtagCase_45, ll_backend__tag_switch__MaxSecondary_50, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, ll_backend__tag_switch__PrevTestsCode0_7, &ll_backend__tag_switch__PrevTestsCode1_87, ll_backend__tag_switch__PrevCasesCode0_8, &ll_backend__tag_switch__PrevCasesCode1_88, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_11, ll_backend__tag_switch__STATE_VARIABLE_CI_0_12, ll_backend__tag_switch__STATE_VARIABLE_CI_13);
                  }
#line 5506 "ll_backend.tag_switch.c"
                  ll_backend__tag_switch__TypeCtorInfo_96_96 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 459 "tag_switch.m"
                  {
#line 459 "tag_switch.m"
                    ll_backend__tag_switch__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 459 "tag_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_80_80, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_55));
#line 459 "tag_switch.m"
                  }
#line 459 "tag_switch.m"
                  {
#line 459 "tag_switch.m"
                    ll_backend__tag_switch__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 459 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_79_79, 1) = ((MR_Box) (ll_backend__tag_switch__V_80_80));
#line 459 "tag_switch.m"
                  }
#line 458 "tag_switch.m"
                  {
#line 458 "tag_switch.m"
                    ll_backend__tag_switch__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 458 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_78_78, 0) = ((MR_Box) (ll_backend__tag_switch__V_79_79));
#line 458 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_78_78, 1) = ((MR_Box) ((MR_String) "primary tag with no code to handle it"));
#line 458 "tag_switch.m"
                  }
#line 458 "tag_switch.m"
                  {
#line 458 "tag_switch.m"
                    ll_backend__tag_switch__FailCode_56 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_96_96, ((MR_Box) (ll_backend__tag_switch__V_78_78)));
                  }
#line 462 "tag_switch.m"
                  {
#line 462 "tag_switch.m"
                    ll_backend__tag_switch__V_82_82 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_96_96, ll_backend__tag_switch__FailCode_56, ll_backend__tag_switch__PrevCasesCode1_88);
                  }
#line 462 "tag_switch.m"
                  {
#line 462 "tag_switch.m"
                    *ll_backend__tag_switch__Code_9 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_96_96, ll_backend__tag_switch__PrevTestsCode1_87, ll_backend__tag_switch__V_82_82);
                  }
#line 452 "tag_switch.m"
                }
#line 449 "tag_switch.m"
            else
#line 440 "tag_switch.m"
              {
#line 440 "tag_switch.m"
                MR_Word ll_backend__tag_switch__PrevTestsCode1_53;
#line 440 "tag_switch.m"
                MR_Word ll_backend__tag_switch__PrevCasesCode1_54;
#line 440 "tag_switch.m"
                MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_83_83;
#line 440 "tag_switch.m"
                MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_84_84;

#line 441 "tag_switch.m"
                {
#line 441 "tag_switch.m"
                  ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__MainPtag_43, ll_backend__tag_switch__OtherPtags_44, ll_backend__tag_switch__PtagCase_45, ll_backend__tag_switch__MaxSecondary_50, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, ll_backend__tag_switch__PrevTestsCode0_7, &ll_backend__tag_switch__PrevTestsCode1_53, ll_backend__tag_switch__PrevCasesCode0_8, &ll_backend__tag_switch__PrevCasesCode1_54, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_83_83, ll_backend__tag_switch__STATE_VARIABLE_CI_0_12, &ll_backend__tag_switch__STATE_VARIABLE_CI_84_84);
                }
#line 446 "tag_switch.m"
                /* direct tailcall eliminated */
#line 446 "tag_switch.m"
                {
#line 446 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__HeadVar__1__tmp_copy_1 = ll_backend__tag_switch__PtagGroups_32;
#line 446 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevTestsCode0__tmp_copy_7 = ll_backend__tag_switch__PrevTestsCode1_53;
#line 446 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevCasesCode0__tmp_copy_8 = ll_backend__tag_switch__PrevCasesCode1_54;
#line 446 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0__tmp_copy_10 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_83_83;
#line 446 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0__tmp_copy_12 = ll_backend__tag_switch__STATE_VARIABLE_CI_84_84;

#line 446 "tag_switch.m"
                  ll_backend__tag_switch__STATE_VARIABLE_CI_0_12 = ll_backend__tag_switch__STATE_VARIABLE_CI_0__tmp_copy_12;
#line 446 "tag_switch.m"
                  ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0__tmp_copy_10;
#line 446 "tag_switch.m"
                  ll_backend__tag_switch__PrevCasesCode0_8 = ll_backend__tag_switch__PrevCasesCode0__tmp_copy_8;
#line 446 "tag_switch.m"
                  ll_backend__tag_switch__PrevTestsCode0_7 = ll_backend__tag_switch__PrevTestsCode0__tmp_copy_7;
#line 446 "tag_switch.m"
                  ll_backend__tag_switch__HeadVar__1_1 = ll_backend__tag_switch__HeadVar__1__tmp_copy_1;
#line 446 "tag_switch.m"
                }
#line 446 "tag_switch.m"
                continue;
#line 440 "tag_switch.m"
              }
#line 432 "tag_switch.m"
          }
#line 428 "tag_switch.m"
      }
#line 428 "tag_switch.m"
      break;
#line 428 "tag_switch.m"
    }
#line 422 "tag_switch.m"
}

#line 406 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_p_0(
#line 406 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 406 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 406 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__3_3,
#line 406 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__TestRval_4)
#line 406 "tag_switch.m"
{
#line 409 "tag_switch.m"
  while (MR_TRUE)
#line 409 "tag_switch.m"
    {
#line 409 "tag_switch.m"
      /* tailcall optimized into a loop */
#line 409 "tag_switch.m"
      {
#line 409 "tag_switch.m"
        MR_bool ll_backend__tag_switch__succeeded;

#line 409 "tag_switch.m"
        if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "tag_switch.m"
          *ll_backend__tag_switch__TestRval_4 = ll_backend__tag_switch__HeadVar__3_3;
#line 409 "tag_switch.m"
        else
#line 411 "tag_switch.m"
          {
#line 411 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__OtherPtag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 411 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherPtags_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 411 "tag_switch.m"
            MR_Word ll_backend__tag_switch__ThisTestRval_12;
#line 411 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TestRval1_13;
#line 411 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_15_15;
#line 411 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_17_17;
#line 411 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_18_18;

#line 413 "tag_switch.m"
            {
#line 413 "tag_switch.m"
              ll_backend__tag_switch__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 413 "tag_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_18_18, 0) = ((MR_Box) (ll_backend__tag_switch__OtherPtag_7));
#line 413 "tag_switch.m"
            }
#line 413 "tag_switch.m"
            {
#line 413 "tag_switch.m"
              ll_backend__tag_switch__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 413 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_17_17, 1) = ((MR_Box) (ll_backend__tag_switch__V_18_18));
#line 413 "tag_switch.m"
            }
#line 412 "tag_switch.m"
            {
#line 412 "tag_switch.m"
              ll_backend__tag_switch__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 412 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 412 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 412 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 2) = ((MR_Box) (ll_backend__tag_switch__V_17_17));
#line 412 "tag_switch.m"
            }
#line 412 "tag_switch.m"
            {
#line 412 "tag_switch.m"
              ll_backend__tag_switch__ThisTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 412 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 412 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 412 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_2));
#line 412 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 3) = ((MR_Box) (ll_backend__tag_switch__V_15_15));
#line 412 "tag_switch.m"
            }
#line 414 "tag_switch.m"
            {
#line 414 "tag_switch.m"
              ll_backend__tag_switch__TestRval1_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 414 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 414 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 414 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 2) = ((MR_Box) (ll_backend__tag_switch__HeadVar__3_3));
#line 414 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 3) = ((MR_Box) (ll_backend__tag_switch__ThisTestRval_12));
#line 414 "tag_switch.m"
            }
#line 415 "tag_switch.m"
            /* direct tailcall eliminated */
#line 415 "tag_switch.m"
            {
#line 415 "tag_switch.m"
              MR_Word ll_backend__tag_switch__HeadVar__1__tmp_copy_1 = ll_backend__tag_switch__OtherPtags_8;
#line 415 "tag_switch.m"
              MR_Word ll_backend__tag_switch__HeadVar__3__tmp_copy_3 = ll_backend__tag_switch__TestRval1_13;

#line 415 "tag_switch.m"
              ll_backend__tag_switch__HeadVar__3_3 = ll_backend__tag_switch__HeadVar__3__tmp_copy_3;
#line 415 "tag_switch.m"
              ll_backend__tag_switch__HeadVar__1_1 = ll_backend__tag_switch__HeadVar__1__tmp_copy_1;
#line 415 "tag_switch.m"
            }
#line 415 "tag_switch.m"
            continue;
#line 411 "tag_switch.m"
          }
#line 409 "tag_switch.m"
      }
#line 409 "tag_switch.m"
      break;
#line 409 "tag_switch.m"
    }
#line 406 "tag_switch.m"
}

#line 380 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(
#line 380 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_14,
#line 380 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_15,
#line 380 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_16,
#line 380 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_17,
#line 380 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCase_18,
#line 380 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_19,
#line 380 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_20,
#line 380 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_21,
#line 380 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 380 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_33,
#line 380 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_34,
#line 380 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_35,
#line 380 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_36)
#line 380 "tag_switch.m"
{
#line 387 "tag_switch.m"
  {
#line 387 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_53_53;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ElseLabel_25;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestRval0_26;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestRval_27;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestCode_28;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagLoc_29;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagGoalMap_30;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TagCode_31;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ElseCode_32;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_37_37;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_39_39;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_41_41;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_42_42;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_43_43;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_44_44;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_45_45;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_49_49;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_50_50;
#line 387 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_52_52;

#line 388 "tag_switch.m"
    {
#line 388 "tag_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__ElseLabel_25, ll_backend__tag_switch__STATE_VARIABLE_CI_0_35, &ll_backend__tag_switch__STATE_VARIABLE_CI_37_37);
    }
#line 390 "tag_switch.m"
    {
#line 390 "tag_switch.m"
      ll_backend__tag_switch__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 390 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_42_42, 0) = ((MR_Box) (ll_backend__tag_switch__MainPtag_16));
#line 390 "tag_switch.m"
    }
#line 390 "tag_switch.m"
    {
#line 390 "tag_switch.m"
      ll_backend__tag_switch__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 390 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_41_41, 1) = ((MR_Box) (ll_backend__tag_switch__V_42_42));
#line 390 "tag_switch.m"
    }
#line 389 "tag_switch.m"
    {
#line 389 "tag_switch.m"
      ll_backend__tag_switch__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 389 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 389 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_39_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 389 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_39_39, 2) = ((MR_Box) (ll_backend__tag_switch__V_41_41));
#line 389 "tag_switch.m"
    }
#line 389 "tag_switch.m"
    {
#line 389 "tag_switch.m"
      ll_backend__tag_switch__TestRval0_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 389 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 389 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 389 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_26, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_14));
#line 389 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_26, 3) = ((MR_Box) (ll_backend__tag_switch__V_39_39));
#line 389 "tag_switch.m"
    }
#line 391 "tag_switch.m"
    {
#line 391 "tag_switch.m"
      ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_p_0(ll_backend__tag_switch__OtherPtags_17, ll_backend__tag_switch__PtagRval_14, ll_backend__tag_switch__TestRval0_26, &ll_backend__tag_switch__TestRval_27);
    }
#line 5874 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_53_53 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 394 "tag_switch.m"
    {
#line 394 "tag_switch.m"
      ll_backend__tag_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 394 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_45_45, 0) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_25));
#line 394 "tag_switch.m"
    }
#line 394 "tag_switch.m"
    {
#line 394 "tag_switch.m"
      ll_backend__tag_switch__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 394 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 394 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 1) = ((MR_Box) (ll_backend__tag_switch__TestRval_27));
#line 394 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 2) = ((MR_Box) (ll_backend__tag_switch__V_45_45));
#line 394 "tag_switch.m"
    }
#line 393 "tag_switch.m"
    {
#line 393 "tag_switch.m"
      ll_backend__tag_switch__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_43_43, 0) = ((MR_Box) (ll_backend__tag_switch__V_44_44));
#line 393 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_43_43, 1) = ((MR_Box) ((MR_String) "test primary tag only"));
#line 393 "tag_switch.m"
    }
#line 393 "tag_switch.m"
    {
#line 393 "tag_switch.m"
      ll_backend__tag_switch__TestCode_28 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_53_53, ((MR_Box) (ll_backend__tag_switch__V_43_43)));
    }
#line 397 "tag_switch.m"
    ll_backend__tag_switch__StagLoc_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_18, (MR_Integer) 0)));
#line 397 "tag_switch.m"
    ll_backend__tag_switch__StagGoalMap_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_18, (MR_Integer) 1)));
#line 398 "tag_switch.m"
    {
#line 398 "tag_switch.m"
      ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_30, ll_backend__tag_switch__MainPtag_16, ll_backend__tag_switch__OtherPtags_17, ll_backend__tag_switch__MaxSecondary_19, ll_backend__tag_switch__StagReg_15, ll_backend__tag_switch__StagLoc_29, ll_backend__tag_switch__VarRval_20, ll_backend__tag_switch__MaybeFailLabel_21, &ll_backend__tag_switch__TagCode_31, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_33, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_34, ll_backend__tag_switch__STATE_VARIABLE_CI_37_37, ll_backend__tag_switch__STATE_VARIABLE_CI_36);
    }
#line 402 "tag_switch.m"
    {
#line 402 "tag_switch.m"
      ll_backend__tag_switch__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 402 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_50_50, 1) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_25));
#line 402 "tag_switch.m"
    }
#line 401 "tag_switch.m"
    {
#line 401 "tag_switch.m"
      ll_backend__tag_switch__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_49_49, 0) = ((MR_Box) (ll_backend__tag_switch__V_50_50));
#line 401 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_49_49, 1) = ((MR_Box) ((MR_String) "handle next primary tag"));
#line 401 "tag_switch.m"
    }
#line 401 "tag_switch.m"
    {
#line 401 "tag_switch.m"
      ll_backend__tag_switch__ElseCode_32 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_53_53, ((MR_Box) (ll_backend__tag_switch__V_49_49)));
    }
#line 404 "tag_switch.m"
    {
#line 404 "tag_switch.m"
      ll_backend__tag_switch__V_52_52 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_53_53, ll_backend__tag_switch__TagCode_31, ll_backend__tag_switch__ElseCode_32);
    }
#line 404 "tag_switch.m"
    {
#line 404 "tag_switch.m"
      *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_53_53, ll_backend__tag_switch__TestCode_28, ll_backend__tag_switch__V_52_52);
    }
#line 387 "tag_switch.m"
  }
#line 380 "tag_switch.m"
}

#line 346 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0_1(
#line 346 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 346 "tag_switch.m"
{
#line 346 "tag_switch.m"
  {
#line 346 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 346 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 346 "tag_switch.m"
    {
#line 346 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__346__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 346 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 346 "tag_switch.m"
  }
#line 346 "tag_switch.m"
}

#line 331 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(
#line 331 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 331 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 331 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_3,
#line 331 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_4,
#line 331 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_5,
#line 331 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_6,
#line 331 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_7,
#line 331 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8,
#line 331 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9,
#line 331 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_10,
#line 331 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_11)
#line 331 "tag_switch.m"
{
#line 338 "tag_switch.m"
  {
#line 338 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 338 "tag_switch.m"
    if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "tag_switch.m"
      {
#line 339 "tag_switch.m"
        {
#line 339 "tag_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_me_else_chain\'/11", (MR_String) "empty switch");
#line 339 "tag_switch.m"
          return;
        }
#line 338 "tag_switch.m"
      }
#line 338 "tag_switch.m"
    else
#line 341 "tag_switch.m"
      {
#line 341 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PtagGroup_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 341 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PtagGroups_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 341 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__MainPtag_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_27, (MR_Integer) 0)));
#line 341 "tag_switch.m"
        MR_Word ll_backend__tag_switch__OtherPtags_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_27, (MR_Integer) 1)));
#line 341 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PtagCase_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_27, (MR_Integer) 2)));
#line 341 "tag_switch.m"
        MR_Word ll_backend__tag_switch__StagLoc_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_39, (MR_Integer) 0)));
#line 341 "tag_switch.m"
        MR_Word ll_backend__tag_switch__StagGoalMap_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_39, (MR_Integer) 1)));
#line 341 "tag_switch.m"
        MR_Word ll_backend__tag_switch__CountInfo_42;
#line 341 "tag_switch.m"
        MR_Word ll_backend__tag_switch__StagLocPrime_43;
#line 341 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__MaxSecondary_44;
#line 341 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_55_55;
#line 344 "tag_switch.m"
        MR_Box ll_backend__tag_switch__conv0_CountInfo_42;

#line 344 "tag_switch.m"
        {
#line 344 "tag_switch.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[1], ll_backend__tag_switch__PtagCountMap_6, ll_backend__tag_switch__MainPtag_37, &ll_backend__tag_switch__conv0_CountInfo_42);
        }
#line 344 "tag_switch.m"
        ll_backend__tag_switch__CountInfo_42 = ((MR_Word) ll_backend__tag_switch__conv0_CountInfo_42);
#line 345 "tag_switch.m"
        ll_backend__tag_switch__StagLocPrime_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_42, (MR_Integer) 0)));
#line 345 "tag_switch.m"
        ll_backend__tag_switch__MaxSecondary_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_42, (MR_Integer) 1)));
#line 346 "tag_switch.m"
        {
#line 346 "tag_switch.m"
          ll_backend__tag_switch__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 346 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
#line 346 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0_1));
#line 346 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 346 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 3) = ((MR_Box) (ll_backend__tag_switch__StagLoc_40));
#line 346 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 4) = ((MR_Box) (ll_backend__tag_switch__StagLocPrime_43));
#line 346 "tag_switch.m"
        }
#line 346 "tag_switch.m"
        {
#line 346 "tag_switch.m"
          mercury__require__expect_4_p_0(ll_backend__tag_switch__V_55_55, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_me_else_chain\'/11", (MR_String) "secondary tag locations differ");
        }
#line 357 "tag_switch.m"
        if ((ll_backend__tag_switch__PtagGroups_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 372 "tag_switch.m"
          if ((ll_backend__tag_switch__MaybeFailLabel_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 374 "tag_switch.m"
            {
#line 374 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_41, ll_backend__tag_switch__MainPtag_37, ll_backend__tag_switch__OtherPtags_38, ll_backend__tag_switch__MaxSecondary_44, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__StagLoc_40, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, ll_backend__tag_switch__Code_7, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9, ll_backend__tag_switch__STATE_VARIABLE_CI_0_10, ll_backend__tag_switch__STATE_VARIABLE_CI_11);
#line 374 "tag_switch.m"
              return;
            }
#line 372 "tag_switch.m"
          else
#line 360 "tag_switch.m"
            {
#line 360 "tag_switch.m"
              MR_Word ll_backend__tag_switch__TypeCtorInfo_78_78;
#line 360 "tag_switch.m"
              MR_Word ll_backend__tag_switch__FailLabel_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_5, (MR_Integer) 0)));
#line 360 "tag_switch.m"
              MR_Word ll_backend__tag_switch__FailCode_50;
#line 360 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_63_63;
#line 360 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_64_64;
#line 360 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_65_65;
#line 360 "tag_switch.m"
              MR_Word ll_backend__tag_switch__ThisTagCode_71;

#line 361 "tag_switch.m"
              {
#line 361 "tag_switch.m"
                ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__MainPtag_37, ll_backend__tag_switch__OtherPtags_38, ll_backend__tag_switch__PtagCase_39, ll_backend__tag_switch__MaxSecondary_44, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, &ll_backend__tag_switch__ThisTagCode_71, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9, ll_backend__tag_switch__STATE_VARIABLE_CI_0_10, ll_backend__tag_switch__STATE_VARIABLE_CI_11);
              }
#line 6127 "ll_backend.tag_switch.c"
              ll_backend__tag_switch__TypeCtorInfo_78_78 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 368 "tag_switch.m"
              {
#line 368 "tag_switch.m"
                ll_backend__tag_switch__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 368 "tag_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_65_65, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_49));
#line 368 "tag_switch.m"
              }
#line 368 "tag_switch.m"
              {
#line 368 "tag_switch.m"
                ll_backend__tag_switch__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 368 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_64_64, 1) = ((MR_Box) (ll_backend__tag_switch__V_65_65));
#line 368 "tag_switch.m"
              }
#line 367 "tag_switch.m"
              {
#line 367 "tag_switch.m"
                ll_backend__tag_switch__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 367 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_63_63, 0) = ((MR_Box) (ll_backend__tag_switch__V_64_64));
#line 367 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_63_63, 1) = ((MR_Box) ((MR_String) "primary tag with no code to handle it"));
#line 367 "tag_switch.m"
              }
#line 367 "tag_switch.m"
              {
#line 367 "tag_switch.m"
                ll_backend__tag_switch__FailCode_50 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_78_78, ((MR_Box) (ll_backend__tag_switch__V_63_63)));
              }
#line 371 "tag_switch.m"
              {
#line 371 "tag_switch.m"
                *ll_backend__tag_switch__Code_7 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_78_78, ll_backend__tag_switch__ThisTagCode_71, ll_backend__tag_switch__FailCode_50);
              }
#line 360 "tag_switch.m"
            }
#line 357 "tag_switch.m"
        else
#line 349 "tag_switch.m"
          {
#line 349 "tag_switch.m"
            MR_Word ll_backend__tag_switch__ThisTagCode_47;
#line 349 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherTagsCode_48;
#line 349 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_67_67;
#line 349 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_68_68;

#line 350 "tag_switch.m"
            {
#line 350 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__MainPtag_37, ll_backend__tag_switch__OtherPtags_38, ll_backend__tag_switch__PtagCase_39, ll_backend__tag_switch__MaxSecondary_44, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, &ll_backend__tag_switch__ThisTagCode_47, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_67_67, ll_backend__tag_switch__STATE_VARIABLE_CI_0_10, &ll_backend__tag_switch__STATE_VARIABLE_CI_68_68);
            }
#line 353 "tag_switch.m"
            {
#line 353 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(ll_backend__tag_switch__PtagGroups_28, ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, ll_backend__tag_switch__PtagCountMap_6, &ll_backend__tag_switch__OtherTagsCode_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_67_67, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9, ll_backend__tag_switch__STATE_VARIABLE_CI_68_68, ll_backend__tag_switch__STATE_VARIABLE_CI_11);
            }
#line 356 "tag_switch.m"
            {
#line 356 "tag_switch.m"
              *ll_backend__tag_switch__Code_7 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__tag_switch__ThisTagCode_47, ll_backend__tag_switch__OtherTagsCode_48);
            }
#line 349 "tag_switch.m"
          }
#line 341 "tag_switch.m"
      }
#line 338 "tag_switch.m"
  }
#line 331 "tag_switch.m"
}

#line 324 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_13_p_0_2(
#line 324 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 324 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 324 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_2,
#line 324 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_3,
#line 324 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_4)
#line 324 "tag_switch.m"
{
#line 324 "tag_switch.m"
  {
#line 324 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;
#line 324 "tag_switch.m"
    MR_Word ll_backend__tag_switch__conv7_HeadVar__4_4;

#line 324 "tag_switch.m"
    {
#line 324 "tag_switch.m"
      ll_backend__switch_case__add_remaining_case_4_p_0(((MR_Word) ll_backend__tag_switch__wrapper_arg_1), ((MR_Word) ll_backend__tag_switch__wrapper_arg_2), ((MR_Word) ll_backend__tag_switch__wrapper_arg_3), &ll_backend__tag_switch__conv7_HeadVar__4_4);
    }
#line 324 "tag_switch.m"
    *ll_backend__tag_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__tag_switch__conv7_HeadVar__4_4));
#line 324 "tag_switch.m"
  }
#line 324 "tag_switch.m"
}

#line 221 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_13_p_0_1(
#line 221 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 221 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 221 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_2,
#line 221 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_3,
#line 221 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_4,
#line 221 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_5,
#line 221 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_6,
#line 221 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_7,
#line 221 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_8)
#line 221 "tag_switch.m"
{
#line 221 "tag_switch.m"
  {
#line 221 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;
#line 221 "tag_switch.m"
    MR_Word ll_backend__tag_switch__conv3_HeadVar__3_3;
#line 221 "tag_switch.m"
    MR_Word ll_backend__tag_switch__conv2_HeadVar__5_5;
#line 221 "tag_switch.m"
    MR_Word ll_backend__tag_switch__conv1_HeadVar__7_7;
#line 221 "tag_switch.m"
    MR_Word ll_backend__tag_switch__conv0_HeadVar__9_9;

#line 221 "tag_switch.m"
    {
#line 221 "tag_switch.m"
      ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__tag_switch__wrapper_arg_1), &ll_backend__tag_switch__conv3_HeadVar__3_3, ((MR_Word) ll_backend__tag_switch__wrapper_arg_3), &ll_backend__tag_switch__conv2_HeadVar__5_5, ((MR_Word) ll_backend__tag_switch__wrapper_arg_5), &ll_backend__tag_switch__conv1_HeadVar__7_7, ((MR_Word) ll_backend__tag_switch__wrapper_arg_7), &ll_backend__tag_switch__conv0_HeadVar__9_9);
    }
#line 221 "tag_switch.m"
    *ll_backend__tag_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__tag_switch__conv3_HeadVar__3_3));
#line 221 "tag_switch.m"
    *ll_backend__tag_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__tag_switch__conv2_HeadVar__5_5));
#line 221 "tag_switch.m"
    *ll_backend__tag_switch__wrapper_arg_6 = ((MR_Box) (ll_backend__tag_switch__conv1_HeadVar__7_7));
#line 221 "tag_switch.m"
    *ll_backend__tag_switch__wrapper_arg_8 = ((MR_Box) (ll_backend__tag_switch__conv0_HeadVar__9_9));
#line 221 "tag_switch.m"
  }
#line 221 "tag_switch.m"
}

#line 31 "tag_switch.m"
void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_13_p_0(
#line 31 "tag_switch.m"
  MR_Word ll_backend__tag_switch__TaggedCases_14,
#line 31 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_15,
#line 31 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarType_16,
#line 31 "tag_switch.m"
  MR_String ll_backend__tag_switch__VarName_17,
#line 31 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CodeModel_18,
#line 31 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CanFail_19,
#line 31 "tag_switch.m"
  MR_Word ll_backend__tag_switch__SwitchGoalInfo_20,
#line 31 "tag_switch.m"
  MR_Word ll_backend__tag_switch__EndLabel_21,
#line 31 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_MaybeEnd_0_61,
#line 31 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_MaybeEnd_62,
#line 31 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_23,
#line 31 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_63,
#line 31 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_64)
#line 31 "tag_switch.m"
{
#line 195 "tag_switch.m"
  {
#line 195 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_130_130;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_131_131;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_139_139;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__PtagReg_25;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagReg_26;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ModuleInfo_27;
#line 195 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__MaxPrimary_28;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__PtagCountMap_29;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__BranchStart_30;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__Params_31;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__CaseLabelMap0_32;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__PtagCaseMap_34;
#line 195 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__PtagsUsed_35;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__Globals_36;
#line 195 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__DenseSwitchSize_37;
#line 195 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__TrySwitchSize_38;
#line 195 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__BinarySwitchSize_39;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__PtagCode_43;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__EndCode_45;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__MaybeFailLabel_46;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__FailCode_47;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__CasesCode_52;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__CaseLabelMap_53;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__RemainingCasesCode_60;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_66_66;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_68_68;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_69_69;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_70_70;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_71_71;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_72_72;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_74_74;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_90_90;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_91_91;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_98_98;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_115_115;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_116_116;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_117_117;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_118_118;
#line 221 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_33_33;
#line 221 "tag_switch.m"
    MR_Box ll_backend__tag_switch__conv6_CaseLabelMap0_32;
#line 221 "tag_switch.m"
    MR_Box ll_backend__tag_switch__conv5_STATE_VARIABLE_MaybeEnd_62;
#line 221 "tag_switch.m"
    MR_Box ll_backend__tag_switch__conv4_STATE_VARIABLE_CI_74_74;
#line 324 "tag_switch.m"
    MR_Box ll_backend__tag_switch__conv8_RemainingCasesCode_60;

#line 209 "tag_switch.m"
    {
#line 209 "tag_switch.m"
      ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__tag_switch__PtagReg_25, ll_backend__tag_switch__STATE_VARIABLE_CI_0_63, &ll_backend__tag_switch__STATE_VARIABLE_CI_66_66);
    }
#line 210 "tag_switch.m"
    {
#line 210 "tag_switch.m"
      ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__tag_switch__StagReg_26, ll_backend__tag_switch__STATE_VARIABLE_CI_66_66, &ll_backend__tag_switch__STATE_VARIABLE_CI_68_68);
    }
#line 211 "tag_switch.m"
    {
#line 211 "tag_switch.m"
      ll_backend__code_info__release_reg_3_p_0(ll_backend__tag_switch__PtagReg_25, ll_backend__tag_switch__STATE_VARIABLE_CI_68_68, &ll_backend__tag_switch__STATE_VARIABLE_CI_69_69);
    }
#line 212 "tag_switch.m"
    {
#line 212 "tag_switch.m"
      ll_backend__code_info__release_reg_3_p_0(ll_backend__tag_switch__StagReg_26, ll_backend__tag_switch__STATE_VARIABLE_CI_69_69, &ll_backend__tag_switch__STATE_VARIABLE_CI_70_70);
    }
#line 216 "tag_switch.m"
    {
#line 216 "tag_switch.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__tag_switch__STATE_VARIABLE_CI_70_70, &ll_backend__tag_switch__ModuleInfo_27);
    }
#line 217 "tag_switch.m"
    {
#line 217 "tag_switch.m"
      backend_libs__switch_util__get_ptag_counts_4_p_0(ll_backend__tag_switch__VarType_16, ll_backend__tag_switch__ModuleInfo_27, &ll_backend__tag_switch__MaxPrimary_28, &ll_backend__tag_switch__PtagCountMap_29);
    }
#line 218 "tag_switch.m"
    {
#line 218 "tag_switch.m"
      ll_backend__code_info__remember_position_2_p_0(ll_backend__tag_switch__STATE_VARIABLE_CI_70_70, &ll_backend__tag_switch__BranchStart_30);
    }
#line 219 "tag_switch.m"
    {
#line 219 "tag_switch.m"
      ll_backend__tag_switch__Params_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 219 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_31, 0) = ((MR_Box) (ll_backend__tag_switch__VarName_17));
#line 219 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_31, 1) = ((MR_Box) (ll_backend__tag_switch__SwitchGoalInfo_20));
#line 219 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_31, 2) = ((MR_Box) (ll_backend__tag_switch__CodeModel_18));
#line 219 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_31, 3) = ((MR_Box) (ll_backend__tag_switch__BranchStart_30));
#line 219 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_31, 4) = ((MR_Box) (ll_backend__tag_switch__EndLabel_21));
#line 219 "tag_switch.m"
    }
#line 221 "tag_switch.m"
    {
#line 221 "tag_switch.m"
      ll_backend__tag_switch__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 221 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_71_71, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[0]));
#line 221 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_71_71, 1) = ((MR_Box) (ll_backend__tag_switch__generate_tag_switch_13_p_0_1));
#line 221 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 221 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_71_71, 3) = ((MR_Box) (ll_backend__tag_switch__Params_31));
#line 221 "tag_switch.m"
    }
#line 6481 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_130_130 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 6483 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_131_131 = (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0;
#line 221 "tag_switch.m"
    {
#line 221 "tag_switch.m"
      ll_backend__tag_switch__V_72_72 = mercury__map__init_0_f_0(ll_backend__tag_switch__TypeCtorInfo_130_130, ll_backend__tag_switch__TypeCtorInfo_131_131);
    }
#line 221 "tag_switch.m"
    {
#line 221 "tag_switch.m"
      backend_libs__switch_util__group_cases_by_ptag_10_p_0(ll_backend__tag_switch__TypeCtorInfo_130_130, (MR_Word) &ll_backend__tag_switch_scalar_common_1[0], (MR_Word) &ll_backend__tag_switch_scalar_common_2[0], (MR_Word) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0, ll_backend__tag_switch__TaggedCases_14, ll_backend__tag_switch__V_71_71, ((MR_Box) (ll_backend__tag_switch__V_72_72)), &ll_backend__tag_switch__conv6_CaseLabelMap0_32, ((MR_Box) (ll_backend__tag_switch__STATE_VARIABLE_MaybeEnd_0_61)), &ll_backend__tag_switch__conv5_STATE_VARIABLE_MaybeEnd_62, ((MR_Box) (ll_backend__tag_switch__STATE_VARIABLE_CI_70_70)), &ll_backend__tag_switch__conv4_STATE_VARIABLE_CI_74_74, &ll_backend__tag_switch__V_33_33, &ll_backend__tag_switch__PtagCaseMap_34);
    }
#line 221 "tag_switch.m"
    ll_backend__tag_switch__CaseLabelMap0_32 = ((MR_Word) ll_backend__tag_switch__conv6_CaseLabelMap0_32);
#line 221 "tag_switch.m"
    *ll_backend__tag_switch__STATE_VARIABLE_MaybeEnd_62 = ((MR_Word) ll_backend__tag_switch__conv5_STATE_VARIABLE_MaybeEnd_62);
#line 221 "tag_switch.m"
    ll_backend__tag_switch__STATE_VARIABLE_CI_74_74 = ((MR_Word) ll_backend__tag_switch__conv4_STATE_VARIABLE_CI_74_74);
#line 224 "tag_switch.m"
    {
#line 224 "tag_switch.m"
      mercury__map__count_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__tag_switch_scalar_common_2[1], ll_backend__tag_switch__PtagCaseMap_34, &ll_backend__tag_switch__PtagsUsed_35);
    }
#line 225 "tag_switch.m"
    {
#line 225 "tag_switch.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__tag_switch__STATE_VARIABLE_CI_74_74, &ll_backend__tag_switch__Globals_36);
    }
#line 226 "tag_switch.m"
    {
#line 226 "tag_switch.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_36, (MR_Integer) 434, &ll_backend__tag_switch__DenseSwitchSize_37);
    }
#line 227 "tag_switch.m"
    {
#line 227 "tag_switch.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_36, (MR_Integer) 439, &ll_backend__tag_switch__TrySwitchSize_38);
    }
#line 228 "tag_switch.m"
    {
#line 228 "tag_switch.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_36, (MR_Integer) 440, &ll_backend__tag_switch__BinarySwitchSize_39);
    }
#line 6526 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_139_139 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 266 "tag_switch.m"
    {
#line 266 "tag_switch.m"
      ll_backend__tag_switch__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 266 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_91_91, 1) = ((MR_Box) (ll_backend__tag_switch__EndLabel_21));
#line 266 "tag_switch.m"
    }
#line 265 "tag_switch.m"
    {
#line 265 "tag_switch.m"
      ll_backend__tag_switch__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 265 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_90_90, 0) = ((MR_Box) (ll_backend__tag_switch__V_91_91));
#line 265 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_90_90, 1) = ((MR_Box) ((MR_String) "end of tag switch"));
#line 265 "tag_switch.m"
    }
#line 265 "tag_switch.m"
    {
#line 265 "tag_switch.m"
      ll_backend__tag_switch__EndCode_45 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_139_139, ((MR_Box) (ll_backend__tag_switch__V_90_90)));
    }
#line 272 "tag_switch.m"
    if ((ll_backend__tag_switch__CanFail_19 == (MR_Integer) 0))
#line 273 "tag_switch.m"
      {
#line 273 "tag_switch.m"
        MR_Word ll_backend__tag_switch__FailLabel_48;
#line 273 "tag_switch.m"
        MR_Word ll_backend__tag_switch__FailLabelCode_49;
#line 273 "tag_switch.m"
        MR_Word ll_backend__tag_switch__FailureCode_50;
#line 273 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_93_93;
#line 273 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_94_94;
#line 273 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_95_95;
#line 273 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_97_97;

#line 274 "tag_switch.m"
        {
#line 274 "tag_switch.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__FailLabel_48, ll_backend__tag_switch__STATE_VARIABLE_CI_74_74, &ll_backend__tag_switch__STATE_VARIABLE_CI_93_93);
        }
#line 275 "tag_switch.m"
        {
#line 275 "tag_switch.m"
          ll_backend__tag_switch__MaybeFailLabel_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 275 "tag_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_46, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_48));
#line 275 "tag_switch.m"
        }
#line 277 "tag_switch.m"
        {
#line 277 "tag_switch.m"
          ll_backend__tag_switch__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 277 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_95_95, 1) = ((MR_Box) (ll_backend__tag_switch__FailLabel_48));
#line 277 "tag_switch.m"
        }
#line 276 "tag_switch.m"
        {
#line 276 "tag_switch.m"
          ll_backend__tag_switch__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 276 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_94_94, 0) = ((MR_Box) (ll_backend__tag_switch__V_95_95));
#line 276 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_94_94, 1) = ((MR_Box) ((MR_String) "switch has failed"));
#line 276 "tag_switch.m"
        }
#line 276 "tag_switch.m"
        {
#line 276 "tag_switch.m"
          ll_backend__tag_switch__FailLabelCode_49 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_139_139, ((MR_Box) (ll_backend__tag_switch__V_94_94)));
        }
#line 281 "tag_switch.m"
        {
#line 281 "tag_switch.m"
          ll_backend__code_info__reset_to_position_3_p_0(ll_backend__tag_switch__BranchStart_30, ll_backend__tag_switch__STATE_VARIABLE_CI_93_93, &ll_backend__tag_switch__STATE_VARIABLE_CI_97_97);
        }
#line 282 "tag_switch.m"
        {
#line 282 "tag_switch.m"
          ll_backend__code_info__generate_failure_3_p_0(&ll_backend__tag_switch__FailureCode_50, ll_backend__tag_switch__STATE_VARIABLE_CI_97_97, &ll_backend__tag_switch__STATE_VARIABLE_CI_98_98);
        }
#line 283 "tag_switch.m"
        {
#line 283 "tag_switch.m"
          ll_backend__tag_switch__FailCode_47 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_139_139, ll_backend__tag_switch__FailLabelCode_49, ll_backend__tag_switch__FailureCode_50);
        }
#line 273 "tag_switch.m"
      }
#line 272 "tag_switch.m"
    else
#line 269 "tag_switch.m"
      {
#line 270 "tag_switch.m"
        ll_backend__tag_switch__MaybeFailLabel_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 271 "tag_switch.m"
        {
#line 271 "tag_switch.m"
          ll_backend__tag_switch__FailCode_47 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_139_139);
        }
#line 271 "tag_switch.m"
        ll_backend__tag_switch__STATE_VARIABLE_CI_98_98 = ll_backend__tag_switch__STATE_VARIABLE_CI_74_74;
#line 269 "tag_switch.m"
      }
#line 229 "tag_switch.m"
    ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagsUsed_35 >= ll_backend__tag_switch__DenseSwitchSize_37);
#line 6644 "ll_backend.tag_switch.c"
    if (ll_backend__tag_switch__succeeded)
#line 6646 "ll_backend.tag_switch.c"
      {
#line 6648 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__PtagRval_44;
#line 6650 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__Targets_54;
#line 6652 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__TableCode_55;
#line 6654 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__SwitchCode_56;
#line 6656 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__V_108_108;
#line 6658 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__V_109_109;
#line 6660 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__PtagCaseList_119;

#line 259 "tag_switch.m"
        {
#line 259 "tag_switch.m"
          ll_backend__tag_switch__PtagCode_43 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 260 "tag_switch.m"
        {
#line 260 "tag_switch.m"
          ll_backend__tag_switch__PtagRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 260 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 260 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_44, 1) = ((MR_Box) ((MR_Integer) 1));
#line 260 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_44, 2) = ((MR_Box) (ll_backend__tag_switch__VarRval_15));
#line 260 "tag_switch.m"
        }
#line 294 "tag_switch.m"
        {
#line 294 "tag_switch.m"
          backend_libs__switch_util__order_ptags_by_value_4_p_0(ll_backend__tag_switch__TypeCtorInfo_130_130, (MR_Integer) 0, ll_backend__tag_switch__MaxPrimary_28, ll_backend__tag_switch__PtagCaseMap_34, &ll_backend__tag_switch__PtagCaseList_119);
        }
#line 295 "tag_switch.m"
        {
#line 295 "tag_switch.m"
          ll_backend__tag_switch__generate_primary_jump_table_13_p_0(ll_backend__tag_switch__PtagCaseList_119, (MR_Integer) 0, ll_backend__tag_switch__MaxPrimary_28, ll_backend__tag_switch__StagReg_26, ll_backend__tag_switch__VarRval_15, ll_backend__tag_switch__MaybeFailLabel_46, ll_backend__tag_switch__PtagCountMap_29, &ll_backend__tag_switch__Targets_54, &ll_backend__tag_switch__TableCode_55, ll_backend__tag_switch__CaseLabelMap0_32, &ll_backend__tag_switch__CaseLabelMap_53, ll_backend__tag_switch__STATE_VARIABLE_CI_98_98, ll_backend__tag_switch__STATE_VARIABLE_CI_64);
        }
#line 299 "tag_switch.m"
        {
#line 299 "tag_switch.m"
          ll_backend__tag_switch__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 299 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 299 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_109_109, 1) = ((MR_Box) (ll_backend__tag_switch__PtagRval_44));
#line 299 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_109_109, 2) = ((MR_Box) (ll_backend__tag_switch__Targets_54));
#line 299 "tag_switch.m"
        }
#line 298 "tag_switch.m"
        {
#line 298 "tag_switch.m"
          ll_backend__tag_switch__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 298 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_108_108, 0) = ((MR_Box) (ll_backend__tag_switch__V_109_109));
#line 298 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_108_108, 1) = ((MR_Box) ((MR_String) "switch on primary tag"));
#line 298 "tag_switch.m"
        }
#line 298 "tag_switch.m"
        {
#line 298 "tag_switch.m"
          ll_backend__tag_switch__SwitchCode_56 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_139_139, ((MR_Box) (ll_backend__tag_switch__V_108_108)));
        }
#line 302 "tag_switch.m"
        {
#line 302 "tag_switch.m"
          ll_backend__tag_switch__CasesCode_52 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_139_139, ll_backend__tag_switch__SwitchCode_56, ll_backend__tag_switch__TableCode_55);
        }
#line 6722 "ll_backend.tag_switch.c"
      }
#line 6724 "ll_backend.tag_switch.c"
    else
#line 6726 "ll_backend.tag_switch.c"
      {
#line 6728 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__PtagRval_163;
#line 240 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__NumRealRegs_41;
#line 240 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_79_79;

#line 241 "tag_switch.m"
        ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagsUsed_35 >= (MR_Integer) 2);
#line 240 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 240 "tag_switch.m"
          {
#line 242 "tag_switch.m"
            ll_backend__tag_switch__V_79_79 = (MR_Integer) 308;
#line 242 "tag_switch.m"
            {
#line 242 "tag_switch.m"
              libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_36, ll_backend__tag_switch__V_79_79, &ll_backend__tag_switch__NumRealRegs_41);
            }
#line 244 "tag_switch.m"
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__NumRealRegs_41 == (MR_Integer) 0);
#line 245 "tag_switch.m"
            if (!(ll_backend__tag_switch__succeeded))
#line 248 "tag_switch.m"
              {
#line 248 "tag_switch.m"
                MR_Integer ll_backend__tag_switch__PtagRegNo_42;
#line 246 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_80_80;

#line 246 "tag_switch.m"
                ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__PtagReg_25)) == (MR_mktag((MR_Integer) 1)));
#line 246 "tag_switch.m"
                if (ll_backend__tag_switch__succeeded)
#line 246 "tag_switch.m"
                  {
#line 246 "tag_switch.m"
                    ll_backend__tag_switch__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagReg_25, (MR_Integer) 0)));
#line 246 "tag_switch.m"
                    ll_backend__tag_switch__PtagRegNo_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagReg_25, (MR_Integer) 1)));
#line 246 "tag_switch.m"
                    ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__V_80_80 == (MR_Integer) 0);
#line 246 "tag_switch.m"
                  }
#line 248 "tag_switch.m"
                if (ll_backend__tag_switch__succeeded)
#line 247 "tag_switch.m"
                  ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagRegNo_42 <= ll_backend__tag_switch__NumRealRegs_41);
#line 248 "tag_switch.m"
                else
#line 249 "tag_switch.m"
                  {
#line 249 "tag_switch.m"
                    {
#line 249 "tag_switch.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_tag_switch\'/13", (MR_String) "improper reg in tag switch");
#line 249 "tag_switch.m"
                      return;
                    }
#line 249 "tag_switch.m"
                    ll_backend__tag_switch__succeeded = MR_TRUE;
#line 249 "tag_switch.m"
                  }
#line 248 "tag_switch.m"
              }
#line 240 "tag_switch.m"
          }
#line 258 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 256 "tag_switch.m"
          {
#line 256 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_146_146;
#line 256 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_147_147;
#line 256 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_148_148;

#line 254 "tag_switch.m"
            {
#line 254 "tag_switch.m"
              ll_backend__tag_switch__V_148_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 254 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_148_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 254 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_148_148, 1) = ((MR_Box) ((MR_Integer) 1));
#line 254 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_148_148, 2) = ((MR_Box) (ll_backend__tag_switch__VarRval_15));
#line 254 "tag_switch.m"
            }
#line 254 "tag_switch.m"
            {
#line 254 "tag_switch.m"
              ll_backend__tag_switch__V_147_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 254 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_147_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 254 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_147_147, 1) = ((MR_Box) (ll_backend__tag_switch__PtagReg_25));
#line 254 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_147_147, 2) = ((MR_Box) (ll_backend__tag_switch__V_148_148));
#line 254 "tag_switch.m"
            }
#line 253 "tag_switch.m"
            {
#line 253 "tag_switch.m"
              ll_backend__tag_switch__V_146_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 253 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_146_146, 0) = ((MR_Box) (ll_backend__tag_switch__V_147_147));
#line 253 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_146_146, 1) = ((MR_Box) ((MR_String) "compute tag to switch on"));
#line 253 "tag_switch.m"
            }
#line 253 "tag_switch.m"
            {
#line 253 "tag_switch.m"
              ll_backend__tag_switch__PtagCode_43 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_146_146)));
            }
#line 257 "tag_switch.m"
            {
#line 257 "tag_switch.m"
              ll_backend__tag_switch__PtagRval_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 257 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagRval_163, 0) = ((MR_Box) (ll_backend__tag_switch__PtagReg_25));
#line 257 "tag_switch.m"
            }
#line 256 "tag_switch.m"
          }
#line 258 "tag_switch.m"
        else
#line 259 "tag_switch.m"
          {
#line 259 "tag_switch.m"
            {
#line 259 "tag_switch.m"
              ll_backend__tag_switch__PtagCode_43 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 260 "tag_switch.m"
            {
#line 260 "tag_switch.m"
              ll_backend__tag_switch__PtagRval_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 260 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_163, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 260 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_163, 1) = ((MR_Box) ((MR_Integer) 1));
#line 260 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_163, 2) = ((MR_Box) (ll_backend__tag_switch__VarRval_15));
#line 260 "tag_switch.m"
            }
#line 259 "tag_switch.m"
          }
#line 231 "tag_switch.m"
        ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagsUsed_35 >= ll_backend__tag_switch__BinarySwitchSize_39);
#line 6881 "ll_backend.tag_switch.c"
        if (ll_backend__tag_switch__succeeded)
#line 6883 "ll_backend.tag_switch.c"
          {
#line 6885 "ll_backend.tag_switch.c"
            MR_Word ll_backend__tag_switch__PtagCaseList_51;

#line 288 "tag_switch.m"
            {
#line 288 "tag_switch.m"
              backend_libs__switch_util__order_ptags_by_value_4_p_0(ll_backend__tag_switch__TypeCtorInfo_130_130, (MR_Integer) 0, ll_backend__tag_switch__MaxPrimary_28, ll_backend__tag_switch__PtagCaseMap_34, &ll_backend__tag_switch__PtagCaseList_51);
            }
#line 289 "tag_switch.m"
            {
#line 289 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_binary_search_13_p_0(ll_backend__tag_switch__PtagCaseList_51, (MR_Integer) 0, ll_backend__tag_switch__MaxPrimary_28, ll_backend__tag_switch__PtagRval_163, ll_backend__tag_switch__StagReg_26, ll_backend__tag_switch__VarRval_15, ll_backend__tag_switch__MaybeFailLabel_46, ll_backend__tag_switch__PtagCountMap_29, &ll_backend__tag_switch__CasesCode_52, ll_backend__tag_switch__CaseLabelMap0_32, &ll_backend__tag_switch__CaseLabelMap_53, ll_backend__tag_switch__STATE_VARIABLE_CI_98_98, ll_backend__tag_switch__STATE_VARIABLE_CI_64);
            }
#line 6898 "ll_backend.tag_switch.c"
          }
#line 6900 "ll_backend.tag_switch.c"
        else
#line 6902 "ll_backend.tag_switch.c"
          {
#line 233 "tag_switch.m"
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagsUsed_35 >= ll_backend__tag_switch__TrySwitchSize_38);
#line 6906 "ll_backend.tag_switch.c"
            if (ll_backend__tag_switch__succeeded)
#line 6908 "ll_backend.tag_switch.c"
              {
#line 6910 "ll_backend.tag_switch.c"
                MR_Word ll_backend__tag_switch__PtagCaseList0_57;
#line 6912 "ll_backend.tag_switch.c"
                MR_Word ll_backend__tag_switch__V_102_102;
#line 6914 "ll_backend.tag_switch.c"
                MR_Word ll_backend__tag_switch__V_103_103;
#line 6916 "ll_backend.tag_switch.c"
                MR_Word ll_backend__tag_switch__PtagCaseList_120;
#line 311 "tag_switch.m"
                MR_Word ll_backend__tag_switch__MostFreqCase_58;
#line 311 "tag_switch.m"
                MR_Word ll_backend__tag_switch__OtherCases_59;

#line 305 "tag_switch.m"
                {
#line 305 "tag_switch.m"
                  backend_libs__switch_util__order_ptags_by_count_3_p_0(ll_backend__tag_switch__TypeCtorInfo_130_130, ll_backend__tag_switch__PtagCountMap_29, ll_backend__tag_switch__PtagCaseMap_34, &ll_backend__tag_switch__PtagCaseList0_57);
                }
#line 307 "tag_switch.m"
                ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CanFail_19 == (MR_Integer) 1);
#line 307 "tag_switch.m"
                if (ll_backend__tag_switch__succeeded)
#line 307 "tag_switch.m"
                  {
#line 308 "tag_switch.m"
                    ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__PtagCaseList0_57)) == (MR_mktag((MR_Integer) 1)));
#line 308 "tag_switch.m"
                    if (ll_backend__tag_switch__succeeded)
#line 308 "tag_switch.m"
                      {
#line 308 "tag_switch.m"
                        ll_backend__tag_switch__MostFreqCase_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagCaseList0_57, (MR_Integer) 0)));
#line 308 "tag_switch.m"
                        ll_backend__tag_switch__OtherCases_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagCaseList0_57, (MR_Integer) 1)));
#line 308 "tag_switch.m"
                      }
#line 307 "tag_switch.m"
                  }
#line 311 "tag_switch.m"
                if (ll_backend__tag_switch__succeeded)
#line 310 "tag_switch.m"
                  {
#line 310 "tag_switch.m"
                    MR_Word ll_backend__tag_switch__V_100_100;

#line 310 "tag_switch.m"
                    {
#line 310 "tag_switch.m"
                      ll_backend__tag_switch__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "tag_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_100_100, 0) = ((MR_Box) (ll_backend__tag_switch__MostFreqCase_58));
#line 310 "tag_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "tag_switch.m"
                    }
#line 310 "tag_switch.m"
                    {
#line 310 "tag_switch.m"
                      ll_backend__tag_switch__PtagCaseList_120 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[2], ll_backend__tag_switch__OtherCases_59, ll_backend__tag_switch__V_100_100);
                    }
#line 310 "tag_switch.m"
                  }
#line 311 "tag_switch.m"
                else
#line 312 "tag_switch.m"
                  ll_backend__tag_switch__PtagCaseList_120 = ll_backend__tag_switch__PtagCaseList0_57;
#line 314 "tag_switch.m"
                {
#line 314 "tag_switch.m"
                  ll_backend__tag_switch__V_102_102 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_139_139);
                }
#line 314 "tag_switch.m"
                {
#line 314 "tag_switch.m"
                  ll_backend__tag_switch__V_103_103 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_139_139);
                }
#line 314 "tag_switch.m"
                {
#line 314 "tag_switch.m"
                  ll_backend__tag_switch__generate_primary_try_chain_13_p_0(ll_backend__tag_switch__PtagCaseList_120, ll_backend__tag_switch__PtagRval_163, ll_backend__tag_switch__StagReg_26, ll_backend__tag_switch__VarRval_15, ll_backend__tag_switch__MaybeFailLabel_46, ll_backend__tag_switch__PtagCountMap_29, ll_backend__tag_switch__V_102_102, ll_backend__tag_switch__V_103_103, &ll_backend__tag_switch__CasesCode_52, ll_backend__tag_switch__CaseLabelMap0_32, &ll_backend__tag_switch__CaseLabelMap_53, ll_backend__tag_switch__STATE_VARIABLE_CI_98_98, ll_backend__tag_switch__STATE_VARIABLE_CI_64);
                }
#line 6991 "ll_backend.tag_switch.c"
              }
#line 6993 "ll_backend.tag_switch.c"
            else
#line 6995 "ll_backend.tag_switch.c"
              {
#line 6997 "ll_backend.tag_switch.c"
                MR_Word ll_backend__tag_switch__PtagCaseList_121;

#line 319 "tag_switch.m"
                {
#line 319 "tag_switch.m"
                  backend_libs__switch_util__order_ptags_by_count_3_p_0(ll_backend__tag_switch__TypeCtorInfo_130_130, ll_backend__tag_switch__PtagCountMap_29, ll_backend__tag_switch__PtagCaseMap_34, &ll_backend__tag_switch__PtagCaseList_121);
                }
#line 320 "tag_switch.m"
                {
#line 320 "tag_switch.m"
                  ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(ll_backend__tag_switch__PtagCaseList_121, ll_backend__tag_switch__PtagRval_163, ll_backend__tag_switch__StagReg_26, ll_backend__tag_switch__VarRval_15, ll_backend__tag_switch__MaybeFailLabel_46, ll_backend__tag_switch__PtagCountMap_29, &ll_backend__tag_switch__CasesCode_52, ll_backend__tag_switch__CaseLabelMap0_32, &ll_backend__tag_switch__CaseLabelMap_53, ll_backend__tag_switch__STATE_VARIABLE_CI_98_98, ll_backend__tag_switch__STATE_VARIABLE_CI_64);
                }
#line 7010 "ll_backend.tag_switch.c"
              }
#line 7012 "ll_backend.tag_switch.c"
          }
#line 7014 "ll_backend.tag_switch.c"
      }
#line 324 "tag_switch.m"
    {
#line 324 "tag_switch.m"
      ll_backend__tag_switch__V_115_115 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_139_139);
    }
#line 324 "tag_switch.m"
    {
#line 324 "tag_switch.m"
      mercury__map__foldl_4_p_0(ll_backend__tag_switch__TypeCtorInfo_130_130, ll_backend__tag_switch__TypeCtorInfo_131_131, (MR_Word) &ll_backend__tag_switch_scalar_common_2[3], (MR_Word) &ll_backend__tag_switch_scalar_common_1[3], ll_backend__tag_switch__CaseLabelMap_53, ((MR_Box) (ll_backend__tag_switch__V_115_115)), &ll_backend__tag_switch__conv8_RemainingCasesCode_60);
    }
#line 324 "tag_switch.m"
    ll_backend__tag_switch__RemainingCasesCode_60 = ((MR_Word) ll_backend__tag_switch__conv8_RemainingCasesCode_60);
#line 325 "tag_switch.m"
    {
#line 325 "tag_switch.m"
      ll_backend__tag_switch__V_118_118 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_139_139, ll_backend__tag_switch__FailCode_47, ll_backend__tag_switch__EndCode_45);
    }
#line 325 "tag_switch.m"
    {
#line 325 "tag_switch.m"
      ll_backend__tag_switch__V_117_117 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_139_139, ll_backend__tag_switch__RemainingCasesCode_60, ll_backend__tag_switch__V_118_118);
    }
#line 325 "tag_switch.m"
    {
#line 325 "tag_switch.m"
      ll_backend__tag_switch__V_116_116 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_139_139, ll_backend__tag_switch__CasesCode_52, ll_backend__tag_switch__V_117_117);
    }
#line 325 "tag_switch.m"
    {
#line 325 "tag_switch.m"
      *ll_backend__tag_switch__Code_23 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_139_139, ll_backend__tag_switch__PtagCode_43, ll_backend__tag_switch__V_116_116);
    }
#line 195 "tag_switch.m"
  }
#line 31 "tag_switch.m"
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
