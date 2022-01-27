/*
** Automatically generated from `tag_switch.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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




#line 156 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0;

#line 159 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0;

#line 162 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

#line 165 "ll_backend.tag_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0;

#line 168 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0;

#line 171 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__pti_ptag_case_entry_1__plain_ll_backend__llds__type_ctor_info_label_0;

#line 174 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 177 "ll_backend.tag_switch.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__tag_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

#line 180 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

#line 183 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0;

#line 186 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_0;

#line 189 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_1;

#line 192 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_2;

#line 195 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_3;

#line 198 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_value_ordered_switch_method_0[4];

#line 201 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_name_ordered_switch_method_0[4];

#line 204 "ll_backend.tag_switch.c"
static const MR_Integer ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_switch_method_0[4];

#line 207 "ll_backend.tag_switch.c"
static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0_10001(
#line 210 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 212 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_2);

#line 215 "ll_backend.tag_switch.c"
static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0_10001(
#line 218 "ll_backend.tag_switch.c"
  MR_Box * ll_backend__tag_switch__wrapper_arg_1,
#line 220 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_2,
#line 222 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_3);

#line 971 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__971__1_2_p_0(
#line 971 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__LowRangeEnd_28,
#line 971 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_71);

#line 960 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__960__1_2_p_0(
#line 960 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinStag_12,
#line 960 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurSecPrime_23);

#line 913 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__913__1_2_p_0(
#line 913 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseList_6,
#line 913 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_19);

#line 698 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__698__1_2_p_0(
#line 698 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_16,
#line 698 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_56);

#line 627 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__627__1_2_p_0(
#line 627 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__LowRangeEnd_39,
#line 627 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_88);

#line 614 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__614__1_2_p_0(
#line 614 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_31,
#line 614 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_34);

#line 609 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__609__1_2_p_0(
#line 609 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinPtag_15,
#line 609 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurPrimaryPrime_29);

#line 552 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__552__1_2_p_0(
#line 552 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_29,
#line 552 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_32);

#line 539 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__539__1_2_p_0(
#line 539 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 539 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_48);

#line 441 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__441__1_2_p_0(
#line 441 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_46,
#line 441 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_49);

#line 350 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__350__1_2_p_0(
#line 350 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_40,
#line 350 "tag_switch.m"
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

#line 1015 "tag_switch.m"
static MR_Box MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0_1(
#line 1015 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 1015 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1);

#line 1004 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0(
#line 1004 "tag_switch.m"
  MR_String ll_backend__tag_switch__BaseStr_5,
#line 1004 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_6,
#line 1004 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_7,
#line 1004 "tag_switch.m"
  MR_String * ll_backend__tag_switch__Comment_8);

#line 971 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2(
#line 971 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 971 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1);

#line 960 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1(
#line 960 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 935 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(
#line 935 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagGoals_11,
#line 935 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinStag_12,
#line 935 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxStag_13,
#line 935 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_14,
#line 935 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_15,
#line 935 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_16,
#line 935 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49,
#line 935 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50,
#line 935 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_51,
#line 935 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_52);

#line 913 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1(
#line 913 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 907 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(
#line 907 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseList_6,
#line 907 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurSecondary_7,
#line 907 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_8,
#line 907 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_9,
#line 907 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Targets_10);

#line 854 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(
#line 854 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 854 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_2,
#line 854 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_3,
#line 854 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_4,
#line 854 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_5,
#line 854 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6,
#line 854 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_7);

#line 830 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(
#line 830 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseLabel_9,
#line 830 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_10,
#line 830 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__Secondary_11,
#line 830 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_12,
#line 830 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_19,
#line 830 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_20,
#line 830 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_21,
#line 830 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_22);

#line 796 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(
#line 796 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 796 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_2,
#line 796 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_3,
#line 796 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_4,
#line 796 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5,
#line 796 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6,
#line 796 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_7,
#line 796 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_8);

#line 698 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1(
#line 698 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 665 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0(
#line 665 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagGoalMap_14,
#line 665 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_15,
#line 665 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_16,
#line 665 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_17,
#line 665 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 665 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_19,
#line 665 "tag_switch.m"
  MR_Word ll_backend__tag_switch__Rval_20,
#line 665 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_21,
#line 665 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 665 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48,
#line 665 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49,
#line 665 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_50,
#line 665 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_51);

#line 627 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_3(
#line 627 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 627 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1);

#line 614 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2(
#line 614 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 609 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1(
#line 609 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 581 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0(
#line 581 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 581 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinPtag_15,
#line 581 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxPtag_16,
#line 581 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_17,
#line 581 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 581 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_19,
#line 581 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_20,
#line 581 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_21,
#line 581 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 581 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60,
#line 581 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61,
#line 581 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_62,
#line 581 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_63);

#line 552 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_2(
#line 552 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 539 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1(
#line 539 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 529 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0(
#line 529 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 529 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurPrimary_15,
#line 529 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxPrimary_16,
#line 529 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_17,
#line 529 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_18,
#line 529 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_19,
#line 529 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_20,
#line 529 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Targets_21,
#line 529 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 529 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40,
#line 529 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41,
#line 529 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_42,
#line 529 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_43);

#line 512 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_p_0(
#line 512 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 512 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 512 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__3_3,
#line 512 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__TestRval_4);

#line 1015 "tag_switch.m"
static MR_Box MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0_1(
#line 1015 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 1015 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1);

#line 481 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_17,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 481 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_19,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_20,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCase_21,
#line 481 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_22,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_23,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_24,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_25,
#line 481 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__PrevTestsCode_26,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevCasesCode0_27,
#line 481 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__PrevCasesCode_28,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40,
#line 481 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_42,
#line 481 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_43);

#line 441 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1(
#line 441 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 426 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0(
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_3,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_4,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_5,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_6,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_7,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevCasesCode0_8,
#line 426 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_9,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10,
#line 426 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_11,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_12,
#line 426 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_13);

#line 410 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_p_0(
#line 410 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 410 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 410 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__3_3,
#line 410 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__TestRval_4);

#line 384 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(
#line 384 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_14,
#line 384 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_15,
#line 384 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_16,
#line 384 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_17,
#line 384 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCase_18,
#line 384 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_19,
#line 384 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_20,
#line 384 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_21,
#line 384 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 384 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_33,
#line 384 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_34,
#line 384 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_35,
#line 384 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_36);

#line 350 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0_1(
#line 350 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 335 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(
#line 335 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 335 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 335 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_3,
#line 335 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_4,
#line 335 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_5,
#line 335 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_6,
#line 335 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_7,
#line 335 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8,
#line 335 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9,
#line 335 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_10,
#line 335 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_11);

#line 328 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0_2(
#line 328 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 328 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 328 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_2,
#line 328 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_3,
#line 328 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_4);

#line 223 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0_1(
#line 223 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 223 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 223 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_2,
#line 223 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_3,
#line 223 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_4,
#line 223 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_5,
#line 223 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_6,
#line 223 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_7,
#line 223 "tag_switch.m"
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



#line 1014 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0
  }
};

#line 1023 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0
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
  {     ll_backend__tag_switch__ll_backend__tag_switch__enum_name_ordered_switch_method_0 },
  {     ll_backend__tag_switch__ll_backend__tag_switch__enum_value_ordered_switch_method_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_switch_method_0
};

#line 1162 "ll_backend.tag_switch.c"
static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0_10001(
#line 1165 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 1167 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_2)
#line 1169 "ll_backend.tag_switch.c"
{
#line 1171 "ll_backend.tag_switch.c"
  {
#line 1173 "ll_backend.tag_switch.c"
    MR_bool ll_backend__tag_switch__succeeded;

#line 1176 "ll_backend.tag_switch.c"
    {
#line 1178 "ll_backend.tag_switch.c"
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch____Unify____switch_method_0_0(((MR_Word) ll_backend__tag_switch__wrapper_arg_1), ((MR_Word) ll_backend__tag_switch__wrapper_arg_2));
    }
#line 1181 "ll_backend.tag_switch.c"
    return ll_backend__tag_switch__succeeded;
#line 1183 "ll_backend.tag_switch.c"
  }
#line 1185 "ll_backend.tag_switch.c"
}

#line 1188 "ll_backend.tag_switch.c"
static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0_10001(
#line 1191 "ll_backend.tag_switch.c"
  MR_Box * ll_backend__tag_switch__wrapper_arg_1,
#line 1193 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_2,
#line 1195 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_3)
#line 1197 "ll_backend.tag_switch.c"
{
#line 1199 "ll_backend.tag_switch.c"
  {
#line 1201 "ll_backend.tag_switch.c"
    MR_Word ll_backend__tag_switch__conv0_HeadVar__1_1;

#line 1204 "ll_backend.tag_switch.c"
    {
#line 1206 "ll_backend.tag_switch.c"
      ll_backend__tag_switch____Compare____switch_method_0_0(&ll_backend__tag_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__tag_switch__wrapper_arg_2), ((MR_Word) ll_backend__tag_switch__wrapper_arg_3));
    }
#line 1209 "ll_backend.tag_switch.c"
    *ll_backend__tag_switch__wrapper_arg_1 = ((MR_Box) (ll_backend__tag_switch__conv0_HeadVar__1_1));
#line 1211 "ll_backend.tag_switch.c"
  }
#line 1213 "ll_backend.tag_switch.c"
}

#line 971 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__971__1_2_p_0(
#line 971 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__LowRangeEnd_28,
#line 971 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_71)
#line 971 "tag_switch.m"
{
#line 971 "tag_switch.m"
  {
#line 971 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 971 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__Stag_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__HeadVar__2_71, (MR_Integer) 0)));
#line 972 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__HeadVar__2_71, (MR_Integer) 1)));

#line 973 "tag_switch.m"
    ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__Stag_32 <= ll_backend__tag_switch__LowRangeEnd_28);
#line 971 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 971 "tag_switch.m"
  }
#line 971 "tag_switch.m"
}

#line 960 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__960__1_2_p_0(
#line 960 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinStag_12,
#line 960 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurSecPrime_23)
#line 960 "tag_switch.m"
{
#line 960 "tag_switch.m"
  {
#line 960 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MinStag_12 == ll_backend__tag_switch__CurSecPrime_23);

#line 960 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 960 "tag_switch.m"
  }
#line 960 "tag_switch.m"
}

#line 913 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__913__1_2_p_0(
#line 913 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseList_6,
#line 913 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_19)
#line 913 "tag_switch.m"
{
#line 913 "tag_switch.m"
  {
#line 913 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 913 "tag_switch.m"
    {
#line 913 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[7], ((MR_Box) (ll_backend__tag_switch__CaseList_6)), ((MR_Box) (ll_backend__tag_switch__HeadVar__2_19)));
    }
#line 913 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 913 "tag_switch.m"
  }
#line 913 "tag_switch.m"
}

#line 698 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__698__1_2_p_0(
#line 698 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_16,
#line 698 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_56)
#line 698 "tag_switch.m"
{
#line 698 "tag_switch.m"
  {
#line 698 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 698 "tag_switch.m"
    {
#line 698 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[6], ((MR_Box) (ll_backend__tag_switch__OtherPtags_16)), ((MR_Box) (ll_backend__tag_switch__HeadVar__2_56)));
    }
#line 698 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 698 "tag_switch.m"
  }
#line 698 "tag_switch.m"
}

#line 627 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__627__1_2_p_0(
#line 627 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__LowRangeEnd_39,
#line 627 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_88)
#line 627 "tag_switch.m"
{
#line 627 "tag_switch.m"
  {
#line 627 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 627 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__Ptag_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__HeadVar__2_88, (MR_Integer) 0)));
#line 628 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__HeadVar__2_88, (MR_Integer) 1)));

#line 629 "tag_switch.m"
    ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__Ptag_43 <= ll_backend__tag_switch__LowRangeEnd_39);
#line 627 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 627 "tag_switch.m"
  }
#line 627 "tag_switch.m"
}

#line 614 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__614__1_2_p_0(
#line 614 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_31,
#line 614 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_34)
#line 614 "tag_switch.m"
{
#line 614 "tag_switch.m"
  {
#line 614 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagLoc_31 == ll_backend__tag_switch__StagLocPrime_34);

#line 614 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 614 "tag_switch.m"
  }
#line 614 "tag_switch.m"
}

#line 609 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__609__1_2_p_0(
#line 609 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinPtag_15,
#line 609 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurPrimaryPrime_29)
#line 609 "tag_switch.m"
{
#line 609 "tag_switch.m"
  {
#line 609 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MinPtag_15 == ll_backend__tag_switch__CurPrimaryPrime_29);

#line 609 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 609 "tag_switch.m"
  }
#line 609 "tag_switch.m"
}

#line 552 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__552__1_2_p_0(
#line 552 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_29,
#line 552 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_32)
#line 552 "tag_switch.m"
{
#line 552 "tag_switch.m"
  {
#line 552 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagLoc_29 == ll_backend__tag_switch__StagLocPrime_32);

#line 552 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 552 "tag_switch.m"
  }
#line 552 "tag_switch.m"
}

#line 539 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__539__1_2_p_0(
#line 539 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 539 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_48)
#line 539 "tag_switch.m"
{
#line 539 "tag_switch.m"
  {
#line 539 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 539 "tag_switch.m"
    {
#line 539 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[5], ((MR_Box) (ll_backend__tag_switch__PtagGroups_14)), ((MR_Box) (ll_backend__tag_switch__HeadVar__2_48)));
    }
#line 539 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 539 "tag_switch.m"
  }
#line 539 "tag_switch.m"
}

#line 441 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__441__1_2_p_0(
#line 441 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_46,
#line 441 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_49)
#line 441 "tag_switch.m"
{
#line 441 "tag_switch.m"
  {
#line 441 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagLoc_46 == ll_backend__tag_switch__StagLocPrime_49);

#line 441 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 441 "tag_switch.m"
  }
#line 441 "tag_switch.m"
}

#line 350 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__350__1_2_p_0(
#line 350 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_40,
#line 350 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_43)
#line 350 "tag_switch.m"
{
#line 350 "tag_switch.m"
  {
#line 350 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagLoc_40 == ll_backend__tag_switch__StagLocPrime_43);

#line 350 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 350 "tag_switch.m"
  }
#line 350 "tag_switch.m"
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
#line 1515 "ll_backend.tag_switch.c"
  {
#line 1517 "ll_backend.tag_switch.c"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__HeadVar__2_1 == ll_backend__tag_switch__HeadVar__2_2);

#line 1520 "ll_backend.tag_switch.c"
    return ll_backend__tag_switch__succeeded;
#line 1522 "ll_backend.tag_switch.c"
  }
#line 186 "tag_switch.m"
}

#line 1015 "tag_switch.m"
static MR_Box MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0_1(
#line 1015 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 1015 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1)
#line 1015 "tag_switch.m"
{
#line 1015 "tag_switch.m"
  {
#line 1015 "tag_switch.m"
    MR_Box ll_backend__tag_switch__wrapper_arg_2;
#line 1015 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;
#line 1015 "tag_switch.m"
    MR_String ll_backend__tag_switch__conv0_HeadVar__2_2;

#line 1015 "tag_switch.m"
    {
#line 1015 "tag_switch.m"
      ll_backend__tag_switch__conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) ll_backend__tag_switch__wrapper_arg_1));
    }
#line 1015 "tag_switch.m"
    ll_backend__tag_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__tag_switch__conv0_HeadVar__2_2));
#line 1015 "tag_switch.m"
    return ll_backend__tag_switch__wrapper_arg_2;
#line 1015 "tag_switch.m"
  }
#line 1015 "tag_switch.m"
}

#line 1004 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0(
#line 1004 "tag_switch.m"
  MR_String ll_backend__tag_switch__BaseStr_5,
#line 1004 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_6,
#line 1004 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_7,
#line 1004 "tag_switch.m"
  MR_String * ll_backend__tag_switch__Comment_8)
#line 1004 "tag_switch.m"
{
#line 1009 "tag_switch.m"
  {
#line 1009 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 1009 "tag_switch.m"
    if ((ll_backend__tag_switch__OtherPtags_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "tag_switch.m"
      {
#line 1009 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_21_21;

#line 1010 "tag_switch.m"
        {
#line 1010 "tag_switch.m"
          ll_backend__tag_switch__V_21_21 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__MainPtag_6);
        }
#line 1010 "tag_switch.m"
        {
#line 1010 "tag_switch.m"
          *ll_backend__tag_switch__Comment_8 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__BaseStr_5, ll_backend__tag_switch__V_21_21);
        }
#line 1009 "tag_switch.m"
      }
#line 1009 "tag_switch.m"
    else
#line 1012 "tag_switch.m"
      {
#line 1012 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_11_11;
#line 1012 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_12_12;
#line 1012 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_13_13;
#line 1012 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_15_15;
#line 1012 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_16_16;
#line 1012 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_18_18;

#line 1013 "tag_switch.m"
        {
#line 1013 "tag_switch.m"
          ll_backend__tag_switch__V_12_12 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__MainPtag_6);
        }
#line 1015 "tag_switch.m"
        {
#line 1015 "tag_switch.m"
          ll_backend__tag_switch__V_18_18 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__tag_switch_scalar_common_1[5], ll_backend__tag_switch__OtherPtags_7);
        }
#line 1015 "tag_switch.m"
        {
#line 1015 "tag_switch.m"
          ll_backend__tag_switch__V_16_16 = mercury__string__join_list_2_f_0((MR_String) ", ", ll_backend__tag_switch__V_18_18);
        }
#line 1016 "tag_switch.m"
        {
#line 1016 "tag_switch.m"
          ll_backend__tag_switch__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__V_16_16, (MR_String) ")");
        }
#line 1014 "tag_switch.m"
        {
#line 1014 "tag_switch.m"
          ll_backend__tag_switch__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "(shared with ", ll_backend__tag_switch__V_15_15);
        }
#line 1014 "tag_switch.m"
        {
#line 1014 "tag_switch.m"
          ll_backend__tag_switch__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__V_12_12, ll_backend__tag_switch__V_13_13);
        }
#line 1013 "tag_switch.m"
        {
#line 1013 "tag_switch.m"
          *ll_backend__tag_switch__Comment_8 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__BaseStr_5, ll_backend__tag_switch__V_11_11);
        }
#line 1012 "tag_switch.m"
      }
#line 1009 "tag_switch.m"
  }
#line 1004 "tag_switch.m"
}

#line 971 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2(
#line 971 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 971 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1)
#line 971 "tag_switch.m"
{
#line 971 "tag_switch.m"
  {
#line 971 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 971 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 971 "tag_switch.m"
    {
#line 971 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__971__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__tag_switch__wrapper_arg_1));
    }
#line 971 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 971 "tag_switch.m"
  }
#line 971 "tag_switch.m"
}

#line 960 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1(
#line 960 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 960 "tag_switch.m"
{
#line 960 "tag_switch.m"
  {
#line 960 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 960 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 960 "tag_switch.m"
    {
#line 960 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__960__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 960 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 960 "tag_switch.m"
  }
#line 960 "tag_switch.m"
}

#line 935 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(
#line 935 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagGoals_11,
#line 935 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinStag_12,
#line 935 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxStag_13,
#line 935 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_14,
#line 935 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_15,
#line 935 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_16,
#line 935 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49,
#line 935 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50,
#line 935 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_51,
#line 935 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_52)
#line 935 "tag_switch.m"
{
#line 968 "tag_switch.m"
  {
#line 968 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MinStag_12 == ll_backend__tag_switch__MaxStag_13);

#line 968 "tag_switch.m"
    if (ll_backend__tag_switch__succeeded)
#line 943 "tag_switch.m"
      {
#line 958 "tag_switch.m"
        if ((ll_backend__tag_switch__StagGoals_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 945 "tag_switch.m"
          {
#line 954 "tag_switch.m"
            if ((ll_backend__tag_switch__MaybeFailLabel_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 955 "tag_switch.m"
              {
#line 956 "tag_switch.m"
                {
#line 956 "tag_switch.m"
                  *ll_backend__tag_switch__Code_16 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
#line 955 "tag_switch.m"
              }
#line 954 "tag_switch.m"
            else
#line 948 "tag_switch.m"
              {
#line 948 "tag_switch.m"
                MR_Word ll_backend__tag_switch__FailLabel_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_15, (MR_Integer) 0)));
#line 948 "tag_switch.m"
                MR_String ll_backend__tag_switch__StagStr_21;
#line 948 "tag_switch.m"
                MR_String ll_backend__tag_switch__Comment_22;
#line 948 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_65_65;
#line 948 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_66_66;
#line 948 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_67_67;

#line 949 "tag_switch.m"
                {
#line 949 "tag_switch.m"
                  mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MinStag_12, &ll_backend__tag_switch__StagStr_21);
                }
#line 950 "tag_switch.m"
                {
#line 950 "tag_switch.m"
                  ll_backend__tag_switch__Comment_22 = mercury__string__f_43_43_2_f_0((MR_String) "no code for ptag ", ll_backend__tag_switch__StagStr_21);
                }
#line 952 "tag_switch.m"
                {
#line 952 "tag_switch.m"
                  ll_backend__tag_switch__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 952 "tag_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_67_67, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_20));
#line 952 "tag_switch.m"
                }
#line 952 "tag_switch.m"
                {
#line 952 "tag_switch.m"
                  ll_backend__tag_switch__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 952 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_66_66, 1) = ((MR_Box) (ll_backend__tag_switch__V_67_67));
#line 952 "tag_switch.m"
                }
#line 952 "tag_switch.m"
                {
#line 952 "tag_switch.m"
                  ll_backend__tag_switch__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 952 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_65_65, 0) = ((MR_Box) (ll_backend__tag_switch__V_66_66));
#line 952 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_65_65, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_22));
#line 952 "tag_switch.m"
                }
#line 951 "tag_switch.m"
                {
#line 951 "tag_switch.m"
                  *ll_backend__tag_switch__Code_16 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_65_65)));
                }
#line 948 "tag_switch.m"
              }
#line 945 "tag_switch.m"
            *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49;
#line 945 "tag_switch.m"
          }
#line 958 "tag_switch.m"
        else
#line 958 "tag_switch.m"
          {
#line 958 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagGoals_11, (MR_Integer) 1)));
#line 958 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagGoals_11, (MR_Integer) 0)));

#line 958 "tag_switch.m"
            if ((ll_backend__tag_switch__V_100_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 959 "tag_switch.m"
              {
#line 959 "tag_switch.m"
                MR_Integer ll_backend__tag_switch__CurSecPrime_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_101_101, (MR_Integer) 0)));
#line 959 "tag_switch.m"
                MR_Word ll_backend__tag_switch__CaseLabel_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_101_101, (MR_Integer) 1)));
#line 959 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_59_59;

#line 960 "tag_switch.m"
                {
#line 960 "tag_switch.m"
                  ll_backend__tag_switch__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 960 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[3]));
#line 960 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1));
#line 960 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 960 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 3) = ((MR_Box) (ll_backend__tag_switch__MinStag_12));
#line 960 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 4) = ((MR_Box) (ll_backend__tag_switch__CurSecPrime_23));
#line 960 "tag_switch.m"
                }
#line 960 "tag_switch.m"
                {
#line 960 "tag_switch.m"
                  mercury__require__expect_4_p_0(ll_backend__tag_switch__V_59_59, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", (MR_String) "cur_secondary mismatch");
                }
#line 962 "tag_switch.m"
                {
#line 962 "tag_switch.m"
                  ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_24, ll_backend__tag_switch__Code_16, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50);
                }
#line 959 "tag_switch.m"
              }
#line 958 "tag_switch.m"
            else
#line 964 "tag_switch.m"
              {
#line 965 "tag_switch.m"
                {
#line 965 "tag_switch.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", (MR_String) "goallist not singleton or empty when binary search ends");
#line 965 "tag_switch.m"
                  return;
                }
#line 964 "tag_switch.m"
              }
#line 958 "tag_switch.m"
          }
#line 943 "tag_switch.m"
        *ll_backend__tag_switch__STATE_VARIABLE_CI_52 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_51;
#line 943 "tag_switch.m"
      }
#line 968 "tag_switch.m"
    else
#line 969 "tag_switch.m"
      {
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__TypeCtorInfo_99_99;
#line 969 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__LowRangeEnd_28;
#line 969 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__HighRangeStart_29;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__InLowGroup_30;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowGoals_34;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__HighGoals_35;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__NewLabel_36;
#line 969 "tag_switch.m"
        MR_String ll_backend__tag_switch__LowStartStr_37;
#line 969 "tag_switch.m"
        MR_String ll_backend__tag_switch__LowEndStr_38;
#line 969 "tag_switch.m"
        MR_String ll_backend__tag_switch__HighStartStr_39;
#line 969 "tag_switch.m"
        MR_String ll_backend__tag_switch__HighEndStr_40;
#line 969 "tag_switch.m"
        MR_String ll_backend__tag_switch__IfComment_41;
#line 969 "tag_switch.m"
        MR_String ll_backend__tag_switch__LabelComment_42;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowRangeEndConst_43;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__TestRval_44;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__IfCode_45;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LabelCode_46;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowRangeCode_47;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__HighRangeCode_48;
#line 969 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__V_68_68 = (ll_backend__tag_switch__MinStag_12 + ll_backend__tag_switch__MaxStag_13);
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_72_72;
#line 969 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_74_74;
#line 969 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_75_75;
#line 969 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_78_78;
#line 969 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_79_79;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_81_81;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_83_83;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_84_84;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_85_85;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_86_86;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_87_87;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_88_88;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_89_89;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_92_92;
#line 969 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_93_93;

#line 969 "tag_switch.m"
        {
#line 969 "tag_switch.m"
          ll_backend__tag_switch__LowRangeEnd_28 = mercury__int__f_47_47_2_f_0(ll_backend__tag_switch__V_68_68, (MR_Integer) 2);
        }
#line 970 "tag_switch.m"
        ll_backend__tag_switch__HighRangeStart_29 = (ll_backend__tag_switch__LowRangeEnd_28 + (MR_Integer) 1);
#line 971 "tag_switch.m"
        {
#line 971 "tag_switch.m"
          ll_backend__tag_switch__InLowGroup_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 971 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_30, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[7]));
#line 971 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_30, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2));
#line 971 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 971 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_30, 3) = ((MR_Box) (ll_backend__tag_switch__LowRangeEnd_28));
#line 971 "tag_switch.m"
        }
#line 975 "tag_switch.m"
        {
#line 975 "tag_switch.m"
          mercury__list__filter_4_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[2], ll_backend__tag_switch__InLowGroup_30, ll_backend__tag_switch__StagGoals_11, &ll_backend__tag_switch__LowGoals_34, &ll_backend__tag_switch__HighGoals_35);
        }
#line 976 "tag_switch.m"
        {
#line 976 "tag_switch.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__NewLabel_36, ll_backend__tag_switch__STATE_VARIABLE_CI_0_51, &ll_backend__tag_switch__STATE_VARIABLE_CI_72_72);
        }
#line 977 "tag_switch.m"
        {
#line 977 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MinStag_12, &ll_backend__tag_switch__LowStartStr_37);
        }
#line 978 "tag_switch.m"
        {
#line 978 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__LowRangeEnd_28, &ll_backend__tag_switch__LowEndStr_38);
        }
#line 979 "tag_switch.m"
        {
#line 979 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__HighRangeStart_29, &ll_backend__tag_switch__HighStartStr_39);
        }
#line 980 "tag_switch.m"
        {
#line 980 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MaxStag_13, &ll_backend__tag_switch__HighEndStr_40);
        }
#line 982 "tag_switch.m"
        {
#line 982 "tag_switch.m"
          ll_backend__tag_switch__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) " to ", ll_backend__tag_switch__LowEndStr_38);
        }
#line 982 "tag_switch.m"
        {
#line 982 "tag_switch.m"
          ll_backend__tag_switch__V_74_74 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__LowStartStr_37, ll_backend__tag_switch__V_75_75);
        }
#line 981 "tag_switch.m"
        {
#line 981 "tag_switch.m"
          ll_backend__tag_switch__IfComment_41 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough for stags ", ll_backend__tag_switch__V_74_74);
        }
#line 984 "tag_switch.m"
        {
#line 984 "tag_switch.m"
          ll_backend__tag_switch__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) " to ", ll_backend__tag_switch__HighEndStr_40);
        }
#line 984 "tag_switch.m"
        {
#line 984 "tag_switch.m"
          ll_backend__tag_switch__V_78_78 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__HighStartStr_39, ll_backend__tag_switch__V_79_79);
        }
#line 983 "tag_switch.m"
        {
#line 983 "tag_switch.m"
          ll_backend__tag_switch__LabelComment_42 = mercury__string__f_43_43_2_f_0((MR_String) "code for stags ", ll_backend__tag_switch__V_78_78);
        }
#line 985 "tag_switch.m"
        {
#line 985 "tag_switch.m"
          ll_backend__tag_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 985 "tag_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_81_81, 0) = ((MR_Box) (ll_backend__tag_switch__LowRangeEnd_28));
#line 985 "tag_switch.m"
        }
#line 985 "tag_switch.m"
        {
#line 985 "tag_switch.m"
          ll_backend__tag_switch__LowRangeEndConst_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__LowRangeEndConst_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 985 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__LowRangeEndConst_43, 1) = ((MR_Box) (ll_backend__tag_switch__V_81_81));
#line 985 "tag_switch.m"
        }
#line 986 "tag_switch.m"
        {
#line 986 "tag_switch.m"
          ll_backend__tag_switch__TestRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 986 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 986 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
#line 986 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_44, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_14));
#line 986 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_44, 3) = ((MR_Box) (ll_backend__tag_switch__LowRangeEndConst_43));
#line 986 "tag_switch.m"
        }
#line 2079 "ll_backend.tag_switch.c"
        ll_backend__tag_switch__TypeCtorInfo_99_99 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 988 "tag_switch.m"
        {
#line 988 "tag_switch.m"
          ll_backend__tag_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 988 "tag_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_85_85, 0) = ((MR_Box) (ll_backend__tag_switch__NewLabel_36));
#line 988 "tag_switch.m"
        }
#line 988 "tag_switch.m"
        {
#line 988 "tag_switch.m"
          ll_backend__tag_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 988 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 988 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 1) = ((MR_Box) (ll_backend__tag_switch__TestRval_44));
#line 988 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 2) = ((MR_Box) (ll_backend__tag_switch__V_85_85));
#line 988 "tag_switch.m"
        }
#line 988 "tag_switch.m"
        {
#line 988 "tag_switch.m"
          ll_backend__tag_switch__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 988 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_83_83, 0) = ((MR_Box) (ll_backend__tag_switch__V_84_84));
#line 988 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_83_83, 1) = ((MR_Box) (ll_backend__tag_switch__IfComment_41));
#line 988 "tag_switch.m"
        }
#line 987 "tag_switch.m"
        {
#line 987 "tag_switch.m"
          ll_backend__tag_switch__IfCode_45 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ((MR_Box) (ll_backend__tag_switch__V_83_83)));
        }
#line 991 "tag_switch.m"
        {
#line 991 "tag_switch.m"
          ll_backend__tag_switch__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 991 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_87_87, 1) = ((MR_Box) (ll_backend__tag_switch__NewLabel_36));
#line 991 "tag_switch.m"
        }
#line 991 "tag_switch.m"
        {
#line 991 "tag_switch.m"
          ll_backend__tag_switch__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 991 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_86_86, 0) = ((MR_Box) (ll_backend__tag_switch__V_87_87));
#line 991 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_86_86, 1) = ((MR_Box) (ll_backend__tag_switch__LabelComment_42));
#line 991 "tag_switch.m"
        }
#line 990 "tag_switch.m"
        {
#line 990 "tag_switch.m"
          ll_backend__tag_switch__LabelCode_46 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ((MR_Box) (ll_backend__tag_switch__V_86_86)));
        }
#line 994 "tag_switch.m"
        {
#line 994 "tag_switch.m"
          ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(ll_backend__tag_switch__LowGoals_34, ll_backend__tag_switch__MinStag_12, ll_backend__tag_switch__LowRangeEnd_28, ll_backend__tag_switch__StagRval_14, ll_backend__tag_switch__MaybeFailLabel_15, &ll_backend__tag_switch__LowRangeCode_47, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_88_88, ll_backend__tag_switch__STATE_VARIABLE_CI_72_72, &ll_backend__tag_switch__STATE_VARIABLE_CI_89_89);
        }
#line 996 "tag_switch.m"
        {
#line 996 "tag_switch.m"
          ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(ll_backend__tag_switch__HighGoals_35, ll_backend__tag_switch__HighRangeStart_29, ll_backend__tag_switch__MaxStag_13, ll_backend__tag_switch__StagRval_14, ll_backend__tag_switch__MaybeFailLabel_15, &ll_backend__tag_switch__HighRangeCode_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_88_88, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50, ll_backend__tag_switch__STATE_VARIABLE_CI_89_89, ll_backend__tag_switch__STATE_VARIABLE_CI_52);
        }
#line 999 "tag_switch.m"
        {
#line 999 "tag_switch.m"
          ll_backend__tag_switch__V_93_93 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ll_backend__tag_switch__LabelCode_46, ll_backend__tag_switch__HighRangeCode_48);
        }
#line 999 "tag_switch.m"
        {
#line 999 "tag_switch.m"
          ll_backend__tag_switch__V_92_92 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ll_backend__tag_switch__LowRangeCode_47, ll_backend__tag_switch__V_93_93);
        }
#line 999 "tag_switch.m"
        {
#line 999 "tag_switch.m"
          *ll_backend__tag_switch__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ll_backend__tag_switch__IfCode_45, ll_backend__tag_switch__V_92_92);
        }
#line 969 "tag_switch.m"
      }
#line 968 "tag_switch.m"
  }
#line 935 "tag_switch.m"
}

#line 913 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1(
#line 913 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 913 "tag_switch.m"
{
#line 913 "tag_switch.m"
  {
#line 913 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 913 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 913 "tag_switch.m"
    {
#line 913 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__913__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 913 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 913 "tag_switch.m"
  }
#line 913 "tag_switch.m"
}

#line 907 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(
#line 907 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseList_6,
#line 907 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurSecondary_7,
#line 907 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_8,
#line 907 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_9,
#line 907 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Targets_10)
#line 907 "tag_switch.m"
{
#line 916 "tag_switch.m"
  {
#line 916 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CurSecondary_7 > ll_backend__tag_switch__MaxSecondary_8);

#line 916 "tag_switch.m"
    if (ll_backend__tag_switch__succeeded)
#line 914 "tag_switch.m"
      {
#line 914 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_15_15;

#line 913 "tag_switch.m"
        {
#line 913 "tag_switch.m"
          ll_backend__tag_switch__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 913 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[6]));
#line 913 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1));
#line 913 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 913 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 3) = ((MR_Box) (ll_backend__tag_switch__CaseList_6));
#line 913 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 913 "tag_switch.m"
        }
#line 913 "tag_switch.m"
        {
#line 913 "tag_switch.m"
          mercury__require__expect_4_p_0(ll_backend__tag_switch__V_15_15, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_jump_table\'/5", (MR_String) "caselist not empty when reaching limiting secondary tag");
        }
#line 915 "tag_switch.m"
        *ll_backend__tag_switch__Targets_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 914 "tag_switch.m"
      }
#line 916 "tag_switch.m"
    else
#line 917 "tag_switch.m"
      {
#line 917 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__NextSecondary_11 = (ll_backend__tag_switch__CurSecondary_7 + (MR_Integer) 1);
#line 922 "tag_switch.m"
        MR_Word ll_backend__tag_switch__CaseLabel_12;
#line 922 "tag_switch.m"
        MR_Word ll_backend__tag_switch__CaseListTail_13;
#line 918 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_21_21;
#line 918 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__V_25_25;

#line 918 "tag_switch.m"
        ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__CaseList_6)) == (MR_mktag((MR_Integer) 1)));
#line 918 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 918 "tag_switch.m"
          {
#line 918 "tag_switch.m"
            ll_backend__tag_switch__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__CaseList_6, (MR_Integer) 0)));
#line 918 "tag_switch.m"
            ll_backend__tag_switch__CaseListTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__CaseList_6, (MR_Integer) 1)));
#line 918 "tag_switch.m"
            ll_backend__tag_switch__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_21_21, (MR_Integer) 0)));
#line 918 "tag_switch.m"
            ll_backend__tag_switch__CaseLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_21_21, (MR_Integer) 1)));
#line 918 "tag_switch.m"
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CurSecondary_7 == ll_backend__tag_switch__V_25_25);
#line 918 "tag_switch.m"
          }
#line 922 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 920 "tag_switch.m"
          {
#line 920 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherTargets_14;
#line 920 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_22_22;

#line 919 "tag_switch.m"
            {
#line 919 "tag_switch.m"
              ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(ll_backend__tag_switch__CaseListTail_13, ll_backend__tag_switch__NextSecondary_11, ll_backend__tag_switch__MaxSecondary_8, ll_backend__tag_switch__MaybeFailLabel_9, &ll_backend__tag_switch__OtherTargets_14);
            }
#line 921 "tag_switch.m"
            {
#line 921 "tag_switch.m"
              ll_backend__tag_switch__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 921 "tag_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_22_22, 0) = ((MR_Box) (ll_backend__tag_switch__CaseLabel_12));
#line 921 "tag_switch.m"
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
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__tag_switch__V_22_22));
#line 921 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__tag_switch__OtherTargets_14));
#line 921 "tag_switch.m"
            }
#line 920 "tag_switch.m"
          }
#line 922 "tag_switch.m"
        else
#line 924 "tag_switch.m"
          {
#line 924 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherTargets_23;

#line 923 "tag_switch.m"
            {
#line 923 "tag_switch.m"
              ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(ll_backend__tag_switch__CaseList_6, ll_backend__tag_switch__NextSecondary_11, ll_backend__tag_switch__MaxSecondary_8, ll_backend__tag_switch__MaybeFailLabel_9, &ll_backend__tag_switch__OtherTargets_23);
            }
#line 925 "tag_switch.m"
            {
#line 925 "tag_switch.m"
              MR_Word base;
#line 925 "tag_switch.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "tag_switch.m"
              *ll_backend__tag_switch__Targets_10 = base;
#line 925 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__tag_switch__MaybeFailLabel_9));
#line 925 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__tag_switch__OtherTargets_23));
#line 925 "tag_switch.m"
            }
#line 924 "tag_switch.m"
          }
#line 917 "tag_switch.m"
      }
#line 916 "tag_switch.m"
  }
#line 907 "tag_switch.m"
}

#line 854 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(
#line 854 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 854 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_2,
#line 854 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_3,
#line 854 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_4,
#line 854 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_5,
#line 854 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6,
#line 854 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_7)
#line 854 "tag_switch.m"
{
#line 858 "tag_switch.m"
  while (MR_TRUE)
#line 858 "tag_switch.m"
    {
#line 858 "tag_switch.m"
      /* tailcall optimized into a loop */
#line 858 "tag_switch.m"
      {
#line 858 "tag_switch.m"
        MR_bool ll_backend__tag_switch__succeeded;

#line 858 "tag_switch.m"
        if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 858 "tag_switch.m"
          {
#line 859 "tag_switch.m"
            {
#line 859 "tag_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_try_chain\'/7", (MR_String) "empty switch");
#line 859 "tag_switch.m"
              return;
            }
#line 858 "tag_switch.m"
          }
#line 858 "tag_switch.m"
        else
#line 861 "tag_switch.m"
          {
#line 861 "tag_switch.m"
            MR_Word ll_backend__tag_switch__Case_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 861 "tag_switch.m"
            MR_Word ll_backend__tag_switch__Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 861 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__Secondary_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Case_18, (MR_Integer) 0)));
#line 861 "tag_switch.m"
            MR_Word ll_backend__tag_switch__CaseLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Case_18, (MR_Integer) 1)));

#line 869 "tag_switch.m"
            if ((ll_backend__tag_switch__Cases_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 880 "tag_switch.m"
              if ((ll_backend__tag_switch__MaybeFailLabel_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 881 "tag_switch.m"
                {
#line 881 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__ThisCode_32;

#line 882 "tag_switch.m"
                  {
#line 882 "tag_switch.m"
                    ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_26, &ll_backend__tag_switch__ThisCode_32, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_7);
                  }
#line 883 "tag_switch.m"
                  {
#line 883 "tag_switch.m"
                    *ll_backend__tag_switch__Code_5 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__tag_switch__PrevTestsCode0_4, ll_backend__tag_switch__ThisCode_32);
                  }
#line 881 "tag_switch.m"
                }
#line 880 "tag_switch.m"
              else
#line 872 "tag_switch.m"
                {
#line 872 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TypeCtorInfo_44_44;
#line 872 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TypeCtorInfo_29_68;
#line 872 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__FailLabel_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_3, (MR_Integer) 0)));
#line 872 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__FailCode_31;
#line 872 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_36_36;
#line 872 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_37_37;
#line 872 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_38_38;
#line 872 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevTestsCode1_41;
#line 872 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__CaseInfo0_52;
#line 872 "tag_switch.m"
                  MR_String ll_backend__tag_switch__Comment_53;
#line 872 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TestCode_56;
#line 872 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_57_57;
#line 872 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_58_58;
#line 872 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_59_59;
#line 872 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_61_61;
#line 872 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_62_62;
#line 872 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_63_63;
#line 872 "tag_switch.m"
                  MR_String ll_backend__tag_switch__V_64_64;
#line 892 "tag_switch.m"
                  MR_Box ll_backend__tag_switch__conv0_CaseInfo0_52;
#line 893 "tag_switch.m"
                  MR_Word ll_backend__tag_switch___CaseCode_54;
#line 893 "tag_switch.m"
                  MR_Word ll_backend__tag_switch___CaseGenerated_55;

#line 892 "tag_switch.m"
                  {
#line 892 "tag_switch.m"
                    mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6, ((MR_Box) (ll_backend__tag_switch__CaseLabel_26)), &ll_backend__tag_switch__conv0_CaseInfo0_52);
                  }
#line 892 "tag_switch.m"
                  ll_backend__tag_switch__CaseInfo0_52 = ((MR_Word) ll_backend__tag_switch__conv0_CaseInfo0_52);
#line 893 "tag_switch.m"
                  ll_backend__tag_switch__Comment_53 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_52, (MR_Integer) 0)));
#line 893 "tag_switch.m"
                  ll_backend__tag_switch___CaseCode_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_52, (MR_Integer) 1)));
#line 893 "tag_switch.m"
                  ll_backend__tag_switch___CaseGenerated_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_52, (MR_Integer) 2)));
#line 2494 "ll_backend.tag_switch.c"
                  ll_backend__tag_switch__TypeCtorInfo_29_68 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 896 "tag_switch.m"
                  {
#line 896 "tag_switch.m"
                    ll_backend__tag_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 896 "tag_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_62_62, 0) = ((MR_Box) (ll_backend__tag_switch__Secondary_25));
#line 896 "tag_switch.m"
                  }
#line 896 "tag_switch.m"
                  {
#line 896 "tag_switch.m"
                    ll_backend__tag_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 896 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 1) = ((MR_Box) (ll_backend__tag_switch__V_62_62));
#line 896 "tag_switch.m"
                  }
#line 896 "tag_switch.m"
                  {
#line 896 "tag_switch.m"
                    ll_backend__tag_switch__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 896 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 896 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 896 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_59_59, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_2));
#line 896 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_59_59, 3) = ((MR_Box) (ll_backend__tag_switch__V_61_61));
#line 896 "tag_switch.m"
                  }
#line 897 "tag_switch.m"
                  {
#line 897 "tag_switch.m"
                    ll_backend__tag_switch__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 897 "tag_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_63_63, 0) = ((MR_Box) (ll_backend__tag_switch__CaseLabel_26));
#line 897 "tag_switch.m"
                  }
#line 896 "tag_switch.m"
                  {
#line 896 "tag_switch.m"
                    ll_backend__tag_switch__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 896 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 896 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 1) = ((MR_Box) (ll_backend__tag_switch__V_59_59));
#line 896 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 2) = ((MR_Box) (ll_backend__tag_switch__V_63_63));
#line 896 "tag_switch.m"
                  }
#line 898 "tag_switch.m"
                  {
#line 898 "tag_switch.m"
                    ll_backend__tag_switch__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) "test sec tag only for ", ll_backend__tag_switch__Comment_53);
                  }
#line 895 "tag_switch.m"
                  {
#line 895 "tag_switch.m"
                    ll_backend__tag_switch__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 895 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_57_57, 0) = ((MR_Box) (ll_backend__tag_switch__V_58_58));
#line 895 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_57_57, 1) = ((MR_Box) (ll_backend__tag_switch__V_64_64));
#line 895 "tag_switch.m"
                  }
#line 894 "tag_switch.m"
                  {
#line 894 "tag_switch.m"
                    ll_backend__tag_switch__TestCode_56 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_29_68, ((MR_Box) (ll_backend__tag_switch__V_57_57)));
                  }
#line 900 "tag_switch.m"
                  {
#line 900 "tag_switch.m"
                    ll_backend__tag_switch__PrevTestsCode1_41 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_29_68, ll_backend__tag_switch__PrevTestsCode0_4, ll_backend__tag_switch__TestCode_56);
                  }
#line 2573 "ll_backend.tag_switch.c"
                  ll_backend__tag_switch__TypeCtorInfo_44_44 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 876 "tag_switch.m"
                  {
#line 876 "tag_switch.m"
                    ll_backend__tag_switch__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 876 "tag_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_38_38, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_30));
#line 876 "tag_switch.m"
                  }
#line 876 "tag_switch.m"
                  {
#line 876 "tag_switch.m"
                    ll_backend__tag_switch__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 876 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 876 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_37_37, 1) = ((MR_Box) (ll_backend__tag_switch__V_38_38));
#line 876 "tag_switch.m"
                  }
#line 876 "tag_switch.m"
                  {
#line 876 "tag_switch.m"
                    ll_backend__tag_switch__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 876 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_36_36, 0) = ((MR_Box) (ll_backend__tag_switch__V_37_37));
#line 876 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_36_36, 1) = ((MR_Box) ((MR_String) "secondary tag with no code to handle it"));
#line 876 "tag_switch.m"
                  }
#line 875 "tag_switch.m"
                  {
#line 875 "tag_switch.m"
                    ll_backend__tag_switch__FailCode_31 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_44_44, ((MR_Box) (ll_backend__tag_switch__V_36_36)));
                  }
#line 879 "tag_switch.m"
                  {
#line 879 "tag_switch.m"
                    *ll_backend__tag_switch__Code_5 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_44_44, ll_backend__tag_switch__PrevTestsCode1_41, ll_backend__tag_switch__FailCode_31);
                  }
#line 872 "tag_switch.m"
                  *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_7 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6;
#line 872 "tag_switch.m"
                }
#line 869 "tag_switch.m"
            else
#line 864 "tag_switch.m"
              {
#line 864 "tag_switch.m"
                MR_Word ll_backend__tag_switch__TypeCtorInfo_29_91;
#line 864 "tag_switch.m"
                MR_Word ll_backend__tag_switch__PrevTestsCode1_29;
#line 864 "tag_switch.m"
                MR_Word ll_backend__tag_switch__CaseInfo0_75;
#line 864 "tag_switch.m"
                MR_String ll_backend__tag_switch__Comment_76;
#line 864 "tag_switch.m"
                MR_Word ll_backend__tag_switch__TestCode_79;
#line 864 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_80_80;
#line 864 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_81_81;
#line 864 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_82_82;
#line 864 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_84_84;
#line 864 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_85_85;
#line 864 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_86_86;
#line 864 "tag_switch.m"
                MR_String ll_backend__tag_switch__V_87_87;
#line 892 "tag_switch.m"
                MR_Box ll_backend__tag_switch__conv1_CaseInfo0_75;
#line 893 "tag_switch.m"
                MR_Word ll_backend__tag_switch___CaseCode_77;
#line 893 "tag_switch.m"
                MR_Word ll_backend__tag_switch___CaseGenerated_78;

#line 892 "tag_switch.m"
                {
#line 892 "tag_switch.m"
                  mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6, ((MR_Box) (ll_backend__tag_switch__CaseLabel_26)), &ll_backend__tag_switch__conv1_CaseInfo0_75);
                }
#line 892 "tag_switch.m"
                ll_backend__tag_switch__CaseInfo0_75 = ((MR_Word) ll_backend__tag_switch__conv1_CaseInfo0_75);
#line 893 "tag_switch.m"
                ll_backend__tag_switch__Comment_76 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_75, (MR_Integer) 0)));
#line 893 "tag_switch.m"
                ll_backend__tag_switch___CaseCode_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_75, (MR_Integer) 1)));
#line 893 "tag_switch.m"
                ll_backend__tag_switch___CaseGenerated_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_75, (MR_Integer) 2)));
#line 2665 "ll_backend.tag_switch.c"
                ll_backend__tag_switch__TypeCtorInfo_29_91 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 896 "tag_switch.m"
                {
#line 896 "tag_switch.m"
                  ll_backend__tag_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 896 "tag_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_85_85, 0) = ((MR_Box) (ll_backend__tag_switch__Secondary_25));
#line 896 "tag_switch.m"
                }
#line 896 "tag_switch.m"
                {
#line 896 "tag_switch.m"
                  ll_backend__tag_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 896 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 1) = ((MR_Box) (ll_backend__tag_switch__V_85_85));
#line 896 "tag_switch.m"
                }
#line 896 "tag_switch.m"
                {
#line 896 "tag_switch.m"
                  ll_backend__tag_switch__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 896 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 896 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 896 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_82_82, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_2));
#line 896 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_82_82, 3) = ((MR_Box) (ll_backend__tag_switch__V_84_84));
#line 896 "tag_switch.m"
                }
#line 897 "tag_switch.m"
                {
#line 897 "tag_switch.m"
                  ll_backend__tag_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 897 "tag_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_86_86, 0) = ((MR_Box) (ll_backend__tag_switch__CaseLabel_26));
#line 897 "tag_switch.m"
                }
#line 896 "tag_switch.m"
                {
#line 896 "tag_switch.m"
                  ll_backend__tag_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 896 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 896 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 1) = ((MR_Box) (ll_backend__tag_switch__V_82_82));
#line 896 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 2) = ((MR_Box) (ll_backend__tag_switch__V_86_86));
#line 896 "tag_switch.m"
                }
#line 898 "tag_switch.m"
                {
#line 898 "tag_switch.m"
                  ll_backend__tag_switch__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "test sec tag only for ", ll_backend__tag_switch__Comment_76);
                }
#line 895 "tag_switch.m"
                {
#line 895 "tag_switch.m"
                  ll_backend__tag_switch__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 895 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_80_80, 0) = ((MR_Box) (ll_backend__tag_switch__V_81_81));
#line 895 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_80_80, 1) = ((MR_Box) (ll_backend__tag_switch__V_87_87));
#line 895 "tag_switch.m"
                }
#line 894 "tag_switch.m"
                {
#line 894 "tag_switch.m"
                  ll_backend__tag_switch__TestCode_79 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_29_91, ((MR_Box) (ll_backend__tag_switch__V_80_80)));
                }
#line 900 "tag_switch.m"
                {
#line 900 "tag_switch.m"
                  ll_backend__tag_switch__PrevTestsCode1_29 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_29_91, ll_backend__tag_switch__PrevTestsCode0_4, ll_backend__tag_switch__TestCode_79);
                }
#line 867 "tag_switch.m"
                /* direct tailcall eliminated */
#line 867 "tag_switch.m"
                {
#line 867 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__HeadVar__1__tmp_copy_1 = ll_backend__tag_switch__Cases_19;
#line 867 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevTestsCode0__tmp_copy_4 = ll_backend__tag_switch__PrevTestsCode1_29;

#line 867 "tag_switch.m"
                  ll_backend__tag_switch__PrevTestsCode0_4 = ll_backend__tag_switch__PrevTestsCode0__tmp_copy_4;
#line 867 "tag_switch.m"
                  ll_backend__tag_switch__HeadVar__1_1 = ll_backend__tag_switch__HeadVar__1__tmp_copy_1;
#line 867 "tag_switch.m"
                }
#line 867 "tag_switch.m"
                continue;
#line 864 "tag_switch.m"
              }
#line 861 "tag_switch.m"
          }
#line 858 "tag_switch.m"
      }
#line 858 "tag_switch.m"
      break;
#line 858 "tag_switch.m"
    }
#line 854 "tag_switch.m"
}

#line 830 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(
#line 830 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseLabel_9,
#line 830 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_10,
#line 830 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__Secondary_11,
#line 830 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_12,
#line 830 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_19,
#line 830 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_20,
#line 830 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_21,
#line 830 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_22)
#line 830 "tag_switch.m"
{
#line 835 "tag_switch.m"
  {
#line 835 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 835 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_37_37;
#line 835 "tag_switch.m"
    MR_Word ll_backend__tag_switch__CaseCode_15;
#line 835 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ElseLabel_16;
#line 835 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestCode_17;
#line 835 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ElseLabelCode_18;
#line 835 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_25_25;
#line 835 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_26_26;
#line 835 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_27_27;
#line 835 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_29_29;
#line 835 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_30_30;
#line 835 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_31_31;
#line 835 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_33_33;
#line 835 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_34_34;
#line 835 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_36_36;

#line 836 "tag_switch.m"
    {
#line 836 "tag_switch.m"
      ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_9, &ll_backend__tag_switch__CaseCode_15, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_19, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_20);
    }
#line 838 "tag_switch.m"
    {
#line 838 "tag_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__ElseLabel_16, ll_backend__tag_switch__STATE_VARIABLE_CI_0_21, ll_backend__tag_switch__STATE_VARIABLE_CI_22);
    }
#line 2838 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 841 "tag_switch.m"
    {
#line 841 "tag_switch.m"
      ll_backend__tag_switch__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 841 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_30_30, 0) = ((MR_Box) (ll_backend__tag_switch__Secondary_11));
#line 841 "tag_switch.m"
    }
#line 841 "tag_switch.m"
    {
#line 841 "tag_switch.m"
      ll_backend__tag_switch__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 841 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 841 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_29_29, 1) = ((MR_Box) (ll_backend__tag_switch__V_30_30));
#line 841 "tag_switch.m"
    }
#line 841 "tag_switch.m"
    {
#line 841 "tag_switch.m"
      ll_backend__tag_switch__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 841 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 841 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 841 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_27_27, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_10));
#line 841 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_27_27, 3) = ((MR_Box) (ll_backend__tag_switch__V_29_29));
#line 841 "tag_switch.m"
    }
#line 842 "tag_switch.m"
    {
#line 842 "tag_switch.m"
      ll_backend__tag_switch__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 842 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_31_31, 0) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_16));
#line 842 "tag_switch.m"
    }
#line 841 "tag_switch.m"
    {
#line 841 "tag_switch.m"
      ll_backend__tag_switch__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 841 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 841 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_26_26, 1) = ((MR_Box) (ll_backend__tag_switch__V_27_27));
#line 841 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_26_26, 2) = ((MR_Box) (ll_backend__tag_switch__V_31_31));
#line 841 "tag_switch.m"
    }
#line 840 "tag_switch.m"
    {
#line 840 "tag_switch.m"
      ll_backend__tag_switch__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 840 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_25_25, 0) = ((MR_Box) (ll_backend__tag_switch__V_26_26));
#line 840 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_25_25, 1) = ((MR_Box) ((MR_String) "test sec tag only"));
#line 840 "tag_switch.m"
    }
#line 839 "tag_switch.m"
    {
#line 839 "tag_switch.m"
      ll_backend__tag_switch__TestCode_17 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_37_37, ((MR_Box) (ll_backend__tag_switch__V_25_25)));
    }
#line 846 "tag_switch.m"
    {
#line 846 "tag_switch.m"
      ll_backend__tag_switch__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 846 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_34_34, 1) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_16));
#line 846 "tag_switch.m"
    }
#line 846 "tag_switch.m"
    {
#line 846 "tag_switch.m"
      ll_backend__tag_switch__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 846 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_33_33, 0) = ((MR_Box) (ll_backend__tag_switch__V_34_34));
#line 846 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_33_33, 1) = ((MR_Box) ((MR_String) "handle next secondary tag"));
#line 846 "tag_switch.m"
    }
#line 845 "tag_switch.m"
    {
#line 845 "tag_switch.m"
      ll_backend__tag_switch__ElseLabelCode_18 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_37_37, ((MR_Box) (ll_backend__tag_switch__V_33_33)));
    }
#line 848 "tag_switch.m"
    {
#line 848 "tag_switch.m"
      ll_backend__tag_switch__V_36_36 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_37_37, ll_backend__tag_switch__CaseCode_15, ll_backend__tag_switch__ElseLabelCode_18);
    }
#line 848 "tag_switch.m"
    {
#line 848 "tag_switch.m"
      *ll_backend__tag_switch__Code_12 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_37_37, ll_backend__tag_switch__TestCode_17, ll_backend__tag_switch__V_36_36);
    }
#line 835 "tag_switch.m"
  }
#line 830 "tag_switch.m"
}

#line 796 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(
#line 796 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 796 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_2,
#line 796 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_3,
#line 796 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_4,
#line 796 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5,
#line 796 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6,
#line 796 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_7,
#line 796 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_8)
#line 796 "tag_switch.m"
{
#line 801 "tag_switch.m"
  {
#line 801 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 801 "tag_switch.m"
    if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 801 "tag_switch.m"
      {
#line 802 "tag_switch.m"
        {
#line 802 "tag_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_try_me_else_chain\'/8", (MR_String) "empty switch");
#line 802 "tag_switch.m"
          return;
        }
#line 801 "tag_switch.m"
      }
#line 801 "tag_switch.m"
    else
#line 804 "tag_switch.m"
      {
#line 804 "tag_switch.m"
        MR_Word ll_backend__tag_switch__Case_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 804 "tag_switch.m"
        MR_Word ll_backend__tag_switch__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 804 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__Secondary_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Case_21, (MR_Integer) 0)));
#line 804 "tag_switch.m"
        MR_Word ll_backend__tag_switch__CaseLabel_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Case_21, (MR_Integer) 1)));

#line 813 "tag_switch.m"
        if ((ll_backend__tag_switch__Cases_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 824 "tag_switch.m"
          if ((ll_backend__tag_switch__MaybeFailLabel_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 825 "tag_switch.m"
            {
#line 826 "tag_switch.m"
              {
#line 826 "tag_switch.m"
                ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_29, ll_backend__tag_switch__Code_4, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6);
              }
#line 825 "tag_switch.m"
              *ll_backend__tag_switch__STATE_VARIABLE_CI_8 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_7;
#line 825 "tag_switch.m"
            }
#line 824 "tag_switch.m"
          else
#line 816 "tag_switch.m"
            {
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__TypeCtorInfo_55_55;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__TypeCtorInfo_37_84;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__FailLabel_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_3, (MR_Integer) 0)));
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__FailCode_35;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_43_43;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_44_44;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_45_45;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__ThisCode_51;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__CaseCode_66;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__ElseLabel_67;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__TestCode_68;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__ElseLabelCode_69;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_72_72;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_73_73;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_74_74;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_76_76;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_77_77;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_78_78;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_80_80;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_81_81;
#line 816 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_83_83;

#line 836 "tag_switch.m"
              {
#line 836 "tag_switch.m"
                ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_29, &ll_backend__tag_switch__CaseCode_66, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6);
              }
#line 838 "tag_switch.m"
              {
#line 838 "tag_switch.m"
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__ElseLabel_67, ll_backend__tag_switch__STATE_VARIABLE_CI_0_7, ll_backend__tag_switch__STATE_VARIABLE_CI_8);
              }
#line 3071 "ll_backend.tag_switch.c"
              ll_backend__tag_switch__TypeCtorInfo_37_84 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 841 "tag_switch.m"
              {
#line 841 "tag_switch.m"
                ll_backend__tag_switch__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 841 "tag_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_77_77, 0) = ((MR_Box) (ll_backend__tag_switch__Secondary_28));
#line 841 "tag_switch.m"
              }
#line 841 "tag_switch.m"
              {
#line 841 "tag_switch.m"
                ll_backend__tag_switch__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 841 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 841 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_76_76, 1) = ((MR_Box) (ll_backend__tag_switch__V_77_77));
#line 841 "tag_switch.m"
              }
#line 841 "tag_switch.m"
              {
#line 841 "tag_switch.m"
                ll_backend__tag_switch__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 841 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 841 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 841 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_74_74, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_2));
#line 841 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_74_74, 3) = ((MR_Box) (ll_backend__tag_switch__V_76_76));
#line 841 "tag_switch.m"
              }
#line 842 "tag_switch.m"
              {
#line 842 "tag_switch.m"
                ll_backend__tag_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 842 "tag_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_78_78, 0) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_67));
#line 842 "tag_switch.m"
              }
#line 841 "tag_switch.m"
              {
#line 841 "tag_switch.m"
                ll_backend__tag_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 841 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 841 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_73_73, 1) = ((MR_Box) (ll_backend__tag_switch__V_74_74));
#line 841 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_73_73, 2) = ((MR_Box) (ll_backend__tag_switch__V_78_78));
#line 841 "tag_switch.m"
              }
#line 840 "tag_switch.m"
              {
#line 840 "tag_switch.m"
                ll_backend__tag_switch__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 840 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_72_72, 0) = ((MR_Box) (ll_backend__tag_switch__V_73_73));
#line 840 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_72_72, 1) = ((MR_Box) ((MR_String) "test sec tag only"));
#line 840 "tag_switch.m"
              }
#line 839 "tag_switch.m"
              {
#line 839 "tag_switch.m"
                ll_backend__tag_switch__TestCode_68 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_37_84, ((MR_Box) (ll_backend__tag_switch__V_72_72)));
              }
#line 846 "tag_switch.m"
              {
#line 846 "tag_switch.m"
                ll_backend__tag_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 846 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 1) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_67));
#line 846 "tag_switch.m"
              }
#line 846 "tag_switch.m"
              {
#line 846 "tag_switch.m"
                ll_backend__tag_switch__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 846 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_80_80, 0) = ((MR_Box) (ll_backend__tag_switch__V_81_81));
#line 846 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_80_80, 1) = ((MR_Box) ((MR_String) "handle next secondary tag"));
#line 846 "tag_switch.m"
              }
#line 845 "tag_switch.m"
              {
#line 845 "tag_switch.m"
                ll_backend__tag_switch__ElseLabelCode_69 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_37_84, ((MR_Box) (ll_backend__tag_switch__V_80_80)));
              }
#line 848 "tag_switch.m"
              {
#line 848 "tag_switch.m"
                ll_backend__tag_switch__V_83_83 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_37_84, ll_backend__tag_switch__CaseCode_66, ll_backend__tag_switch__ElseLabelCode_69);
              }
#line 848 "tag_switch.m"
              {
#line 848 "tag_switch.m"
                ll_backend__tag_switch__ThisCode_51 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_37_84, ll_backend__tag_switch__TestCode_68, ll_backend__tag_switch__V_83_83);
              }
#line 3175 "ll_backend.tag_switch.c"
              ll_backend__tag_switch__TypeCtorInfo_55_55 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 820 "tag_switch.m"
              {
#line 820 "tag_switch.m"
                ll_backend__tag_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 820 "tag_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_45_45, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_34));
#line 820 "tag_switch.m"
              }
#line 820 "tag_switch.m"
              {
#line 820 "tag_switch.m"
                ll_backend__tag_switch__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 820 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 1) = ((MR_Box) (ll_backend__tag_switch__V_45_45));
#line 820 "tag_switch.m"
              }
#line 820 "tag_switch.m"
              {
#line 820 "tag_switch.m"
                ll_backend__tag_switch__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 820 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_43_43, 0) = ((MR_Box) (ll_backend__tag_switch__V_44_44));
#line 820 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_43_43, 1) = ((MR_Box) ((MR_String) "secondary tag does not match"));
#line 820 "tag_switch.m"
              }
#line 819 "tag_switch.m"
              {
#line 819 "tag_switch.m"
                ll_backend__tag_switch__FailCode_35 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_55_55, ((MR_Box) (ll_backend__tag_switch__V_43_43)));
              }
#line 823 "tag_switch.m"
              {
#line 823 "tag_switch.m"
                *ll_backend__tag_switch__Code_4 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_55_55, ll_backend__tag_switch__ThisCode_51, ll_backend__tag_switch__FailCode_35);
              }
#line 816 "tag_switch.m"
            }
#line 813 "tag_switch.m"
        else
#line 807 "tag_switch.m"
          {
#line 807 "tag_switch.m"
            MR_Word ll_backend__tag_switch__ThisCode_32;
#line 807 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherCode_33;
#line 807 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_47_47;
#line 807 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_48_48;

#line 808 "tag_switch.m"
            {
#line 808 "tag_switch.m"
              ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(ll_backend__tag_switch__CaseLabel_29, ll_backend__tag_switch__StagRval_2, ll_backend__tag_switch__Secondary_28, &ll_backend__tag_switch__ThisCode_32, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_47_47, ll_backend__tag_switch__STATE_VARIABLE_CI_0_7, &ll_backend__tag_switch__STATE_VARIABLE_CI_48_48);
            }
#line 810 "tag_switch.m"
            {
#line 810 "tag_switch.m"
              ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(ll_backend__tag_switch__Cases_22, ll_backend__tag_switch__StagRval_2, ll_backend__tag_switch__MaybeFailLabel_3, &ll_backend__tag_switch__OtherCode_33, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_47_47, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6, ll_backend__tag_switch__STATE_VARIABLE_CI_48_48, ll_backend__tag_switch__STATE_VARIABLE_CI_8);
            }
#line 812 "tag_switch.m"
            {
#line 812 "tag_switch.m"
              *ll_backend__tag_switch__Code_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__tag_switch__ThisCode_32, ll_backend__tag_switch__OtherCode_33);
            }
#line 807 "tag_switch.m"
          }
#line 804 "tag_switch.m"
      }
#line 801 "tag_switch.m"
  }
#line 796 "tag_switch.m"
}

#line 698 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1(
#line 698 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 698 "tag_switch.m"
{
#line 698 "tag_switch.m"
  {
#line 698 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 698 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 698 "tag_switch.m"
    {
#line 698 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__698__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 698 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 698 "tag_switch.m"
  }
#line 698 "tag_switch.m"
}

#line 665 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0(
#line 665 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagGoalMap_14,
#line 665 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_15,
#line 665 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_16,
#line 665 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_17,
#line 665 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 665 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_19,
#line 665 "tag_switch.m"
  MR_Word ll_backend__tag_switch__Rval_20,
#line 665 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_21,
#line 665 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 665 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48,
#line 665 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49,
#line 665 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_50,
#line 665 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_51)
#line 665 "tag_switch.m"
{
#line 672 "tag_switch.m"
  {
#line 672 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 672 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagGoalList_25;

#line 673 "tag_switch.m"
    {
#line 673 "tag_switch.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__tag_switch__StagGoalMap_14, &ll_backend__tag_switch__StagGoalList_25);
    }
#line 694 "tag_switch.m"
#line 694 "tag_switch.m"
    switch (ll_backend__tag_switch__StagLoc_19) {
#line 694 "tag_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 694 "tag_switch.m"
      case (MR_Integer) 2:
#line 694 "tag_switch.m"
      case (MR_Integer) 3:
#line 697 "tag_switch.m"
        {
#line 697 "tag_switch.m"
          MR_Word ll_backend__tag_switch__Globals_31;
#line 697 "tag_switch.m"
          MR_Integer ll_backend__tag_switch__DenseSwitchSize_32;
#line 697 "tag_switch.m"
          MR_Integer ll_backend__tag_switch__BinarySwitchSize_33;
#line 697 "tag_switch.m"
          MR_Integer ll_backend__tag_switch__TrySwitchSize_34;
#line 697 "tag_switch.m"
          MR_Word ll_backend__tag_switch__OrigStagRval_36;
#line 697 "tag_switch.m"
          MR_String ll_backend__tag_switch__Comment_37;
#line 697 "tag_switch.m"
          MR_Word ll_backend__tag_switch__MaybeSecFailLabel_45;
#line 697 "tag_switch.m"
          MR_Word ll_backend__tag_switch__V_52_52;

#line 698 "tag_switch.m"
          {
#line 698 "tag_switch.m"
            ll_backend__tag_switch__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 698 "tag_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[5]));
#line 698 "tag_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1));
#line 698 "tag_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 698 "tag_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 3) = ((MR_Box) (ll_backend__tag_switch__OtherPtags_16));
#line 698 "tag_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 698 "tag_switch.m"
          }
#line 698 "tag_switch.m"
          {
#line 698 "tag_switch.m"
            mercury__require__expect_4_p_0(ll_backend__tag_switch__V_52_52, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) ">1 ptag with secondary tag");
          }
#line 702 "tag_switch.m"
          {
#line 702 "tag_switch.m"
            ll_backend__code_info__get_globals_2_p_0(ll_backend__tag_switch__STATE_VARIABLE_CI_0_50, &ll_backend__tag_switch__Globals_31);
          }
#line 703 "tag_switch.m"
          {
#line 703 "tag_switch.m"
            libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_31, (MR_Integer) 429, &ll_backend__tag_switch__DenseSwitchSize_32);
          }
#line 705 "tag_switch.m"
          {
#line 705 "tag_switch.m"
            libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_31, (MR_Integer) 436, &ll_backend__tag_switch__BinarySwitchSize_33);
          }
#line 707 "tag_switch.m"
          {
#line 707 "tag_switch.m"
            libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_31, (MR_Integer) 435, &ll_backend__tag_switch__TrySwitchSize_34);
          }
#line 723 "tag_switch.m"
#line 723 "tag_switch.m"
          switch (ll_backend__tag_switch__StagLoc_19) {
#line 723 "tag_switch.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 723 "tag_switch.m"
            case (MR_Integer) 2:
#line 724 "tag_switch.m"
              {
#line 725 "tag_switch.m"
                {
#line 725 "tag_switch.m"
                  ll_backend__tag_switch__OrigStagRval_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 725 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__OrigStagRval_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 725 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__OrigStagRval_36, 1) = ((MR_Box) ((MR_Integer) 5));
#line 725 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__OrigStagRval_36, 2) = ((MR_Box) (ll_backend__tag_switch__Rval_20));
#line 725 "tag_switch.m"
                }
#line 726 "tag_switch.m"
                ll_backend__tag_switch__Comment_37 = (MR_String) "compute local sec tag to switch on";
#line 724 "tag_switch.m"
              }
#line 723 "tag_switch.m"
              break;
#line 723 "tag_switch.m"
            case (MR_Integer) 3:
#line 719 "tag_switch.m"
              {
#line 719 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_61_61;
#line 719 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_62_62;

#line 720 "tag_switch.m"
                {
#line 720 "tag_switch.m"
                  ll_backend__tag_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 720 "tag_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_62_62, 0) = ((MR_Box) (ll_backend__tag_switch__MainPtag_15));
#line 720 "tag_switch.m"
                }
#line 720 "tag_switch.m"
                {
#line 720 "tag_switch.m"
                  ll_backend__tag_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 720 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 720 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 1) = ((MR_Box) (ll_backend__tag_switch__V_62_62));
#line 720 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 2) = ((MR_Box) (ll_backend__tag_switch__Rval_20));
#line 720 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[8])));
#line 720 "tag_switch.m"
                }
#line 720 "tag_switch.m"
                {
#line 720 "tag_switch.m"
                  ll_backend__tag_switch__OrigStagRval_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 720 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__OrigStagRval_36, 0) = ((MR_Box) (ll_backend__tag_switch__V_61_61));
#line 720 "tag_switch.m"
                }
#line 722 "tag_switch.m"
                ll_backend__tag_switch__Comment_37 = (MR_String) "compute remote sec tag to switch on";
#line 719 "tag_switch.m"
              }
#line 723 "tag_switch.m"
              break;
#line 723 "tag_switch.m"
          }
#line 762 "tag_switch.m"
          if ((ll_backend__tag_switch__MaybeFailLabel_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "tag_switch.m"
            ll_backend__tag_switch__MaybeSecFailLabel_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 762 "tag_switch.m"
          else
#line 759 "tag_switch.m"
            {
#line 754 "tag_switch.m"
              MR_Integer ll_backend__tag_switch__StagGoalCount_43;
#line 754 "tag_switch.m"
              MR_Integer ll_backend__tag_switch__FullGoalCount_44;

#line 754 "tag_switch.m"
              {
#line 754 "tag_switch.m"
                mercury__list__length_2_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[2], ll_backend__tag_switch__StagGoalList_25, &ll_backend__tag_switch__StagGoalCount_43);
              }
#line 755 "tag_switch.m"
              ll_backend__tag_switch__FullGoalCount_44 = (ll_backend__tag_switch__MaxSecondary_17 + (MR_Integer) 1);
#line 756 "tag_switch.m"
              ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__FullGoalCount_44 == ll_backend__tag_switch__StagGoalCount_43);
#line 759 "tag_switch.m"
              if (ll_backend__tag_switch__succeeded)
#line 758 "tag_switch.m"
                ll_backend__tag_switch__MaybeSecFailLabel_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 759 "tag_switch.m"
              else
#line 760 "tag_switch.m"
                ll_backend__tag_switch__MaybeSecFailLabel_45 = ll_backend__tag_switch__MaybeFailLabel_21;
#line 759 "tag_switch.m"
            }
#line 708 "tag_switch.m"
          ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MaxSecondary_17 >= ll_backend__tag_switch__DenseSwitchSize_32);
#line 3500 "ll_backend.tag_switch.c"
          if (ll_backend__tag_switch__succeeded)
#line 3502 "ll_backend.tag_switch.c"
            {
#line 3504 "ll_backend.tag_switch.c"
              MR_Word ll_backend__tag_switch__Targets_46;
#line 3506 "ll_backend.tag_switch.c"
              MR_Word ll_backend__tag_switch__V_83_83;
#line 3508 "ll_backend.tag_switch.c"
              MR_Word ll_backend__tag_switch__V_84_84;
#line 748 "tag_switch.m"
              MR_Word ll_backend__tag_switch__StagCode_111;

#line 748 "tag_switch.m"
              {
#line 748 "tag_switch.m"
                ll_backend__tag_switch__StagCode_111 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 769 "tag_switch.m"
              {
#line 769 "tag_switch.m"
                ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(ll_backend__tag_switch__StagGoalList_25, (MR_Integer) 0, ll_backend__tag_switch__MaxSecondary_17, ll_backend__tag_switch__MaybeSecFailLabel_45, &ll_backend__tag_switch__Targets_46);
              }
#line 772 "tag_switch.m"
              {
#line 772 "tag_switch.m"
                ll_backend__tag_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 772 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 772 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 1) = ((MR_Box) (ll_backend__tag_switch__OrigStagRval_36));
#line 772 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 2) = ((MR_Box) (ll_backend__tag_switch__Targets_46));
#line 772 "tag_switch.m"
              }
#line 772 "tag_switch.m"
              {
#line 772 "tag_switch.m"
                ll_backend__tag_switch__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 772 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_83_83, 0) = ((MR_Box) (ll_backend__tag_switch__V_84_84));
#line 772 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_83_83, 1) = ((MR_Box) ((MR_String) "switch on secondary tag"));
#line 772 "tag_switch.m"
              }
#line 771 "tag_switch.m"
              {
#line 771 "tag_switch.m"
                *ll_backend__tag_switch__Code_22 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_83_83)));
              }
#line 768 "tag_switch.m"
              *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48;
#line 768 "tag_switch.m"
              *ll_backend__tag_switch__STATE_VARIABLE_CI_51 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_50;
#line 3554 "ll_backend.tag_switch.c"
            }
#line 3556 "ll_backend.tag_switch.c"
          else
#line 3558 "ll_backend.tag_switch.c"
            {
#line 3560 "ll_backend.tag_switch.c"
              MR_Word ll_backend__tag_switch__StagCode_122;
#line 3562 "ll_backend.tag_switch.c"
              MR_Word ll_backend__tag_switch__StagRval_123;
#line 730 "tag_switch.m"
              MR_Integer ll_backend__tag_switch__NumRealRegs_38;
#line 730 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_67_67;

#line 731 "tag_switch.m"
              ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MaxSecondary_17 >= (MR_Integer) 2);
#line 730 "tag_switch.m"
              if (ll_backend__tag_switch__succeeded)
#line 730 "tag_switch.m"
                {
#line 732 "tag_switch.m"
                  ll_backend__tag_switch__V_67_67 = (MR_Integer) 304;
#line 732 "tag_switch.m"
                  {
#line 732 "tag_switch.m"
                    libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_31, ll_backend__tag_switch__V_67_67, &ll_backend__tag_switch__NumRealRegs_38);
                  }
#line 734 "tag_switch.m"
                  ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__NumRealRegs_38 == (MR_Integer) 0);
#line 735 "tag_switch.m"
                  if (!(ll_backend__tag_switch__succeeded))
#line 738 "tag_switch.m"
                    {
#line 738 "tag_switch.m"
                      MR_Integer ll_backend__tag_switch__StagRegNo_39;
#line 736 "tag_switch.m"
                      MR_Word ll_backend__tag_switch__V_68_68;

#line 736 "tag_switch.m"
                      ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__StagReg_18)) == (MR_mktag((MR_Integer) 1)));
#line 736 "tag_switch.m"
                      if (ll_backend__tag_switch__succeeded)
#line 736 "tag_switch.m"
                        {
#line 736 "tag_switch.m"
                          ll_backend__tag_switch__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagReg_18, (MR_Integer) 0)));
#line 736 "tag_switch.m"
                          ll_backend__tag_switch__StagRegNo_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagReg_18, (MR_Integer) 1)));
#line 736 "tag_switch.m"
                          ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__V_68_68 == (MR_Integer) 0);
#line 736 "tag_switch.m"
                        }
#line 738 "tag_switch.m"
                      if (ll_backend__tag_switch__succeeded)
#line 737 "tag_switch.m"
                        ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagRegNo_39 <= ll_backend__tag_switch__NumRealRegs_38);
#line 738 "tag_switch.m"
                      else
#line 739 "tag_switch.m"
                        {
#line 739 "tag_switch.m"
                          {
#line 739 "tag_switch.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "improper reg in tag switch");
#line 739 "tag_switch.m"
                            return;
                          }
#line 739 "tag_switch.m"
                          ll_backend__tag_switch__succeeded = MR_TRUE;
#line 739 "tag_switch.m"
                        }
#line 738 "tag_switch.m"
                    }
#line 730 "tag_switch.m"
                }
#line 747 "tag_switch.m"
              if (ll_backend__tag_switch__succeeded)
#line 745 "tag_switch.m"
                {
#line 745 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_113_113;
#line 745 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_114_114;

#line 744 "tag_switch.m"
                  {
#line 744 "tag_switch.m"
                    ll_backend__tag_switch__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 744 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 744 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_114_114, 1) = ((MR_Box) (ll_backend__tag_switch__StagReg_18));
#line 744 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_114_114, 2) = ((MR_Box) (ll_backend__tag_switch__OrigStagRval_36));
#line 744 "tag_switch.m"
                  }
#line 744 "tag_switch.m"
                  {
#line 744 "tag_switch.m"
                    ll_backend__tag_switch__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 744 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_113_113, 0) = ((MR_Box) (ll_backend__tag_switch__V_114_114));
#line 744 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_113_113, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_37));
#line 744 "tag_switch.m"
                  }
#line 743 "tag_switch.m"
                  {
#line 743 "tag_switch.m"
                    ll_backend__tag_switch__StagCode_122 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_113_113)));
                  }
#line 746 "tag_switch.m"
                  {
#line 746 "tag_switch.m"
                    ll_backend__tag_switch__StagRval_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 746 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__StagRval_123, 0) = ((MR_Box) (ll_backend__tag_switch__StagReg_18));
#line 746 "tag_switch.m"
                  }
#line 745 "tag_switch.m"
                }
#line 747 "tag_switch.m"
              else
#line 748 "tag_switch.m"
                {
#line 748 "tag_switch.m"
                  {
#line 748 "tag_switch.m"
                    ll_backend__tag_switch__StagCode_122 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 749 "tag_switch.m"
                  ll_backend__tag_switch__StagRval_123 = ll_backend__tag_switch__OrigStagRval_36;
#line 748 "tag_switch.m"
                }
#line 710 "tag_switch.m"
              ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MaxSecondary_17 >= ll_backend__tag_switch__BinarySwitchSize_33);
#line 3691 "ll_backend.tag_switch.c"
              if (ll_backend__tag_switch__succeeded)
#line 3693 "ll_backend.tag_switch.c"
                {
#line 777 "tag_switch.m"
                  {
#line 777 "tag_switch.m"
                    ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(ll_backend__tag_switch__StagGoalList_25, (MR_Integer) 0, ll_backend__tag_switch__MaxSecondary_17, ll_backend__tag_switch__StagRval_123, ll_backend__tag_switch__MaybeSecFailLabel_45, ll_backend__tag_switch__Code_22, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49, ll_backend__tag_switch__STATE_VARIABLE_CI_0_50, ll_backend__tag_switch__STATE_VARIABLE_CI_51);
#line 777 "tag_switch.m"
                    return;
                  }
#line 3702 "ll_backend.tag_switch.c"
                }
#line 3704 "ll_backend.tag_switch.c"
              else
#line 3706 "ll_backend.tag_switch.c"
                {
#line 712 "tag_switch.m"
                  ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MaxSecondary_17 >= ll_backend__tag_switch__TrySwitchSize_34);
#line 3710 "ll_backend.tag_switch.c"
                  if (ll_backend__tag_switch__succeeded)
#line 3712 "ll_backend.tag_switch.c"
                    {
#line 3714 "ll_backend.tag_switch.c"
                      MR_Word ll_backend__tag_switch__TypeCtorInfo_107_107 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 3716 "ll_backend.tag_switch.c"
                      MR_Word ll_backend__tag_switch__Codes_47;
#line 3718 "ll_backend.tag_switch.c"
                      MR_Word ll_backend__tag_switch__V_77_77;

#line 782 "tag_switch.m"
                      {
#line 782 "tag_switch.m"
                        ll_backend__tag_switch__V_77_77 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_107_107);
                      }
#line 781 "tag_switch.m"
                      {
#line 781 "tag_switch.m"
                        ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(ll_backend__tag_switch__StagGoalList_25, ll_backend__tag_switch__StagRval_123, ll_backend__tag_switch__MaybeSecFailLabel_45, ll_backend__tag_switch__V_77_77, &ll_backend__tag_switch__Codes_47, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49);
                      }
#line 783 "tag_switch.m"
                      {
#line 783 "tag_switch.m"
                        *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_107_107, ll_backend__tag_switch__StagCode_122, ll_backend__tag_switch__Codes_47);
                      }
#line 780 "tag_switch.m"
                      *ll_backend__tag_switch__STATE_VARIABLE_CI_51 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_50;
#line 3738 "ll_backend.tag_switch.c"
                    }
#line 3740 "ll_backend.tag_switch.c"
                  else
#line 3742 "ll_backend.tag_switch.c"
                    {
#line 3744 "ll_backend.tag_switch.c"
                      MR_Word ll_backend__tag_switch__Codes_99;

#line 786 "tag_switch.m"
                      {
#line 786 "tag_switch.m"
                        ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(ll_backend__tag_switch__StagGoalList_25, ll_backend__tag_switch__StagRval_123, ll_backend__tag_switch__MaybeSecFailLabel_45, &ll_backend__tag_switch__Codes_99, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49, ll_backend__tag_switch__STATE_VARIABLE_CI_0_50, ll_backend__tag_switch__STATE_VARIABLE_CI_51);
                      }
#line 788 "tag_switch.m"
                      {
#line 788 "tag_switch.m"
                        *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__tag_switch__StagCode_122, ll_backend__tag_switch__Codes_99);
                      }
#line 3757 "ll_backend.tag_switch.c"
                    }
#line 3759 "ll_backend.tag_switch.c"
                }
#line 3761 "ll_backend.tag_switch.c"
            }
#line 697 "tag_switch.m"
        }
#line 694 "tag_switch.m"
        break;
#line 694 "tag_switch.m"
      case (MR_Integer) 0:
#line 694 "tag_switch.m"
      case (MR_Integer) 1:
#line 677 "tag_switch.m"
        {
#line 682 "tag_switch.m"
          if ((ll_backend__tag_switch__StagGoalList_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 680 "tag_switch.m"
            {
#line 681 "tag_switch.m"
              {
#line 681 "tag_switch.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "no goal for non-shared tag");
#line 681 "tag_switch.m"
                return;
              }
#line 680 "tag_switch.m"
            }
#line 682 "tag_switch.m"
          else
#line 682 "tag_switch.m"
            {
#line 682 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagGoalList_25, (MR_Integer) 1)));
#line 682 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagGoalList_25, (MR_Integer) 0)));

#line 682 "tag_switch.m"
              if ((ll_backend__tag_switch__V_109_109 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 686 "tag_switch.m"
                {
#line 686 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__CaseLabel_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_110_110, (MR_Integer) 1)));
#line 684 "tag_switch.m"
                  MR_Integer ll_backend__tag_switch__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_110_110, (MR_Integer) 0)));

#line 684 "tag_switch.m"
                  ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__V_91_91 == (MR_Integer) -1);
#line 686 "tag_switch.m"
                  if (ll_backend__tag_switch__succeeded)
#line 685 "tag_switch.m"
                    {
#line 685 "tag_switch.m"
                      ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_27, ll_backend__tag_switch__Code_22, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49);
                    }
#line 686 "tag_switch.m"
                  else
#line 687 "tag_switch.m"
                    {
#line 687 "tag_switch.m"
                      {
#line 687 "tag_switch.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "badly formed goal for non-shared tag");
#line 687 "tag_switch.m"
                        return;
                      }
#line 687 "tag_switch.m"
                    }
#line 686 "tag_switch.m"
                }
#line 682 "tag_switch.m"
              else
#line 691 "tag_switch.m"
                {
#line 692 "tag_switch.m"
                  {
#line 692 "tag_switch.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "more than one goal for non-shared tag");
#line 692 "tag_switch.m"
                    return;
                  }
#line 691 "tag_switch.m"
                }
#line 682 "tag_switch.m"
            }
#line 677 "tag_switch.m"
          *ll_backend__tag_switch__STATE_VARIABLE_CI_51 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_50;
#line 677 "tag_switch.m"
        }
#line 694 "tag_switch.m"
        break;
#line 694 "tag_switch.m"
    }
#line 672 "tag_switch.m"
  }
#line 665 "tag_switch.m"
}

#line 627 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_3(
#line 627 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 627 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1)
#line 627 "tag_switch.m"
{
#line 627 "tag_switch.m"
  {
#line 627 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 627 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 627 "tag_switch.m"
    {
#line 627 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__627__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__tag_switch__wrapper_arg_1));
    }
#line 627 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 627 "tag_switch.m"
  }
#line 627 "tag_switch.m"
}

#line 614 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2(
#line 614 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 614 "tag_switch.m"
{
#line 614 "tag_switch.m"
  {
#line 614 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 614 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 614 "tag_switch.m"
    {
#line 614 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__614__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 614 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 614 "tag_switch.m"
  }
#line 614 "tag_switch.m"
}

#line 609 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1(
#line 609 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 609 "tag_switch.m"
{
#line 609 "tag_switch.m"
  {
#line 609 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 609 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 609 "tag_switch.m"
    {
#line 609 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__609__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 609 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 609 "tag_switch.m"
  }
#line 609 "tag_switch.m"
}

#line 581 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0(
#line 581 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 581 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinPtag_15,
#line 581 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxPtag_16,
#line 581 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_17,
#line 581 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 581 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_19,
#line 581 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_20,
#line 581 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_21,
#line 581 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 581 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60,
#line 581 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61,
#line 581 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_62,
#line 581 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_63)
#line 581 "tag_switch.m"
{
#line 624 "tag_switch.m"
  {
#line 624 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MinPtag_15 == ll_backend__tag_switch__MaxPtag_16);

#line 624 "tag_switch.m"
    if (ll_backend__tag_switch__succeeded)
#line 607 "tag_switch.m"
      if ((ll_backend__tag_switch__PtagGroups_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 592 "tag_switch.m"
        {
#line 601 "tag_switch.m"
          if ((ll_backend__tag_switch__MaybeFailLabel_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 602 "tag_switch.m"
            {
#line 605 "tag_switch.m"
              {
#line 605 "tag_switch.m"
                *ll_backend__tag_switch__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 602 "tag_switch.m"
            }
#line 601 "tag_switch.m"
          else
#line 595 "tag_switch.m"
            {
#line 595 "tag_switch.m"
              MR_Word ll_backend__tag_switch__FailLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_20, (MR_Integer) 0)));
#line 595 "tag_switch.m"
              MR_String ll_backend__tag_switch__PtagStr_27;
#line 595 "tag_switch.m"
              MR_String ll_backend__tag_switch__Comment_28;
#line 595 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_82_82;
#line 595 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_83_83;
#line 595 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_84_84;

#line 596 "tag_switch.m"
              {
#line 596 "tag_switch.m"
                mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MinPtag_15, &ll_backend__tag_switch__PtagStr_27);
              }
#line 597 "tag_switch.m"
              {
#line 597 "tag_switch.m"
                ll_backend__tag_switch__Comment_28 = mercury__string__f_43_43_2_f_0((MR_String) "no code for ptag ", ll_backend__tag_switch__PtagStr_27);
              }
#line 599 "tag_switch.m"
              {
#line 599 "tag_switch.m"
                ll_backend__tag_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 599 "tag_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_84_84, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_26));
#line 599 "tag_switch.m"
              }
#line 599 "tag_switch.m"
              {
#line 599 "tag_switch.m"
                ll_backend__tag_switch__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 599 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_83_83, 1) = ((MR_Box) (ll_backend__tag_switch__V_84_84));
#line 599 "tag_switch.m"
              }
#line 599 "tag_switch.m"
              {
#line 599 "tag_switch.m"
                ll_backend__tag_switch__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 599 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_82_82, 0) = ((MR_Box) (ll_backend__tag_switch__V_83_83));
#line 599 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_82_82, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_28));
#line 599 "tag_switch.m"
              }
#line 598 "tag_switch.m"
              {
#line 598 "tag_switch.m"
                *ll_backend__tag_switch__Code_22 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_82_82)));
              }
#line 595 "tag_switch.m"
            }
#line 592 "tag_switch.m"
          *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60;
#line 592 "tag_switch.m"
          *ll_backend__tag_switch__STATE_VARIABLE_CI_63 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_62;
#line 592 "tag_switch.m"
        }
#line 607 "tag_switch.m"
      else
#line 607 "tag_switch.m"
        {
#line 607 "tag_switch.m"
          MR_Word ll_backend__tag_switch__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagGroups_14, (MR_Integer) 1)));
#line 607 "tag_switch.m"
          MR_Word ll_backend__tag_switch__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagGroups_14, (MR_Integer) 0)));

#line 607 "tag_switch.m"
          if ((ll_backend__tag_switch__V_120_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 608 "tag_switch.m"
            {
#line 608 "tag_switch.m"
              MR_Integer ll_backend__tag_switch__CurPrimaryPrime_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_121_121, (MR_Integer) 0)));
#line 608 "tag_switch.m"
              MR_Word ll_backend__tag_switch__PrimaryInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_121_121, (MR_Integer) 1)));
#line 608 "tag_switch.m"
              MR_Word ll_backend__tag_switch__StagLoc_31;
#line 608 "tag_switch.m"
              MR_Word ll_backend__tag_switch__StagGoalMap_32;
#line 608 "tag_switch.m"
              MR_Word ll_backend__tag_switch__CountInfo_33;
#line 608 "tag_switch.m"
              MR_Word ll_backend__tag_switch__StagLocPrime_34;
#line 608 "tag_switch.m"
              MR_Integer ll_backend__tag_switch__MaxSecondary_35;
#line 608 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_70_70;
#line 608 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_74_74;
#line 612 "tag_switch.m"
              MR_Box ll_backend__tag_switch__conv0_CountInfo_33;

#line 609 "tag_switch.m"
              {
#line 609 "tag_switch.m"
                ll_backend__tag_switch__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 609 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[3]));
#line 609 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1));
#line 609 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 609 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 3) = ((MR_Box) (ll_backend__tag_switch__MinPtag_15));
#line 609 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 4) = ((MR_Box) (ll_backend__tag_switch__CurPrimaryPrime_29));
#line 609 "tag_switch.m"
              }
#line 609 "tag_switch.m"
              {
#line 609 "tag_switch.m"
                mercury__require__expect_4_p_0(ll_backend__tag_switch__V_70_70, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "cur_primary mismatch");
              }
#line 611 "tag_switch.m"
              ll_backend__tag_switch__StagLoc_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PrimaryInfo_30, (MR_Integer) 0)));
#line 611 "tag_switch.m"
              ll_backend__tag_switch__StagGoalMap_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PrimaryInfo_30, (MR_Integer) 1)));
#line 612 "tag_switch.m"
              {
#line 612 "tag_switch.m"
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[1], ll_backend__tag_switch__PtagCountMap_21, ll_backend__tag_switch__MinPtag_15, &ll_backend__tag_switch__conv0_CountInfo_33);
              }
#line 612 "tag_switch.m"
              ll_backend__tag_switch__CountInfo_33 = ((MR_Word) ll_backend__tag_switch__conv0_CountInfo_33);
#line 613 "tag_switch.m"
              ll_backend__tag_switch__StagLocPrime_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_33, (MR_Integer) 0)));
#line 613 "tag_switch.m"
              ll_backend__tag_switch__MaxSecondary_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_33, (MR_Integer) 1)));
#line 614 "tag_switch.m"
              {
#line 614 "tag_switch.m"
                ll_backend__tag_switch__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 614 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
#line 614 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2));
#line 614 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 614 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 3) = ((MR_Box) (ll_backend__tag_switch__StagLoc_31));
#line 614 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 4) = ((MR_Box) (ll_backend__tag_switch__StagLocPrime_34));
#line 614 "tag_switch.m"
              }
#line 614 "tag_switch.m"
              {
#line 614 "tag_switch.m"
                mercury__require__expect_4_p_0(ll_backend__tag_switch__V_74_74, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "secondary tag locations differ");
              }
#line 616 "tag_switch.m"
              {
#line 616 "tag_switch.m"
                ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_32, ll_backend__tag_switch__MinPtag_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__tag_switch__MaxSecondary_35, ll_backend__tag_switch__StagReg_18, ll_backend__tag_switch__StagLoc_31, ll_backend__tag_switch__VarRval_19, ll_backend__tag_switch__MaybeFailLabel_20, ll_backend__tag_switch__Code_22, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61, ll_backend__tag_switch__STATE_VARIABLE_CI_0_62, ll_backend__tag_switch__STATE_VARIABLE_CI_63);
#line 616 "tag_switch.m"
                return;
              }
#line 608 "tag_switch.m"
            }
#line 607 "tag_switch.m"
          else
#line 620 "tag_switch.m"
            {
#line 621 "tag_switch.m"
              {
#line 621 "tag_switch.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "caselist not singleton or empty when binary search ends");
#line 621 "tag_switch.m"
                return;
              }
#line 620 "tag_switch.m"
            }
#line 607 "tag_switch.m"
        }
#line 624 "tag_switch.m"
    else
#line 625 "tag_switch.m"
      {
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__TypeCtorInfo_119_119;
#line 625 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__LowRangeEnd_39;
#line 625 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__HighRangeStart_40;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__InLowGroup_41;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowGroups_45;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__HighGroups_46;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__NewLabel_47;
#line 625 "tag_switch.m"
        MR_String ll_backend__tag_switch__LowStartStr_48;
#line 625 "tag_switch.m"
        MR_String ll_backend__tag_switch__LowEndStr_49;
#line 625 "tag_switch.m"
        MR_String ll_backend__tag_switch__HighStartStr_50;
#line 625 "tag_switch.m"
        MR_String ll_backend__tag_switch__HighEndStr_51;
#line 625 "tag_switch.m"
        MR_String ll_backend__tag_switch__IfComment_52;
#line 625 "tag_switch.m"
        MR_String ll_backend__tag_switch__LabelComment_53;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowRangeEndConst_54;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__TestRval_55;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__IfCode_56;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LabelCode_57;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowRangeCode_58;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__HighRangeCode_59;
#line 625 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__V_85_85 = (ll_backend__tag_switch__MinPtag_15 + ll_backend__tag_switch__MaxPtag_16);
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_89_89;
#line 625 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_91_91;
#line 625 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_92_92;
#line 625 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_95_95;
#line 625 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_96_96;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_98_98;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_100_100;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_101_101;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_102_102;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_103_103;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_104_104;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_105_105;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_106_106;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_109_109;
#line 625 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_110_110;

#line 625 "tag_switch.m"
        {
#line 625 "tag_switch.m"
          ll_backend__tag_switch__LowRangeEnd_39 = mercury__int__f_47_47_2_f_0(ll_backend__tag_switch__V_85_85, (MR_Integer) 2);
        }
#line 626 "tag_switch.m"
        ll_backend__tag_switch__HighRangeStart_40 = (ll_backend__tag_switch__LowRangeEnd_39 + (MR_Integer) 1);
#line 627 "tag_switch.m"
        {
#line 627 "tag_switch.m"
          ll_backend__tag_switch__InLowGroup_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 627 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_41, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[4]));
#line 627 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_41, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_3));
#line 627 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 627 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_41, 3) = ((MR_Box) (ll_backend__tag_switch__LowRangeEnd_39));
#line 627 "tag_switch.m"
        }
#line 631 "tag_switch.m"
        {
#line 631 "tag_switch.m"
          mercury__list__filter_4_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[4], ll_backend__tag_switch__InLowGroup_41, ll_backend__tag_switch__PtagGroups_14, &ll_backend__tag_switch__LowGroups_45, &ll_backend__tag_switch__HighGroups_46);
        }
#line 632 "tag_switch.m"
        {
#line 632 "tag_switch.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__NewLabel_47, ll_backend__tag_switch__STATE_VARIABLE_CI_0_62, &ll_backend__tag_switch__STATE_VARIABLE_CI_89_89);
        }
#line 633 "tag_switch.m"
        {
#line 633 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MinPtag_15, &ll_backend__tag_switch__LowStartStr_48);
        }
#line 634 "tag_switch.m"
        {
#line 634 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__LowRangeEnd_39, &ll_backend__tag_switch__LowEndStr_49);
        }
#line 635 "tag_switch.m"
        {
#line 635 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__HighRangeStart_40, &ll_backend__tag_switch__HighStartStr_50);
        }
#line 636 "tag_switch.m"
        {
#line 636 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MaxPtag_16, &ll_backend__tag_switch__HighEndStr_51);
        }
#line 638 "tag_switch.m"
        {
#line 638 "tag_switch.m"
          ll_backend__tag_switch__V_92_92 = mercury__string__f_43_43_2_f_0((MR_String) " to ", ll_backend__tag_switch__LowEndStr_49);
        }
#line 638 "tag_switch.m"
        {
#line 638 "tag_switch.m"
          ll_backend__tag_switch__V_91_91 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__LowStartStr_48, ll_backend__tag_switch__V_92_92);
        }
#line 637 "tag_switch.m"
        {
#line 637 "tag_switch.m"
          ll_backend__tag_switch__IfComment_52 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough for ptags ", ll_backend__tag_switch__V_91_91);
        }
#line 640 "tag_switch.m"
        {
#line 640 "tag_switch.m"
          ll_backend__tag_switch__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) " to ", ll_backend__tag_switch__HighEndStr_51);
        }
#line 640 "tag_switch.m"
        {
#line 640 "tag_switch.m"
          ll_backend__tag_switch__V_95_95 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__HighStartStr_50, ll_backend__tag_switch__V_96_96);
        }
#line 639 "tag_switch.m"
        {
#line 639 "tag_switch.m"
          ll_backend__tag_switch__LabelComment_53 = mercury__string__f_43_43_2_f_0((MR_String) "code for ptags ", ll_backend__tag_switch__V_95_95);
        }
#line 641 "tag_switch.m"
        {
#line 641 "tag_switch.m"
          ll_backend__tag_switch__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "tag_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_98_98, 0) = ((MR_Box) (ll_backend__tag_switch__LowRangeEnd_39));
#line 641 "tag_switch.m"
        }
#line 641 "tag_switch.m"
        {
#line 641 "tag_switch.m"
          ll_backend__tag_switch__LowRangeEndConst_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__LowRangeEndConst_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 641 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__LowRangeEndConst_54, 1) = ((MR_Box) (ll_backend__tag_switch__V_98_98));
#line 641 "tag_switch.m"
        }
#line 642 "tag_switch.m"
        {
#line 642 "tag_switch.m"
          ll_backend__tag_switch__TestRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 642 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 642 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
#line 642 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_55, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_17));
#line 642 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_55, 3) = ((MR_Box) (ll_backend__tag_switch__LowRangeEndConst_54));
#line 642 "tag_switch.m"
        }
#line 4360 "ll_backend.tag_switch.c"
        ll_backend__tag_switch__TypeCtorInfo_119_119 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 644 "tag_switch.m"
        {
#line 644 "tag_switch.m"
          ll_backend__tag_switch__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 644 "tag_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_102_102, 0) = ((MR_Box) (ll_backend__tag_switch__NewLabel_47));
#line 644 "tag_switch.m"
        }
#line 644 "tag_switch.m"
        {
#line 644 "tag_switch.m"
          ll_backend__tag_switch__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 644 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 644 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_101_101, 1) = ((MR_Box) (ll_backend__tag_switch__TestRval_55));
#line 644 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_101_101, 2) = ((MR_Box) (ll_backend__tag_switch__V_102_102));
#line 644 "tag_switch.m"
        }
#line 644 "tag_switch.m"
        {
#line 644 "tag_switch.m"
          ll_backend__tag_switch__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 644 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_100_100, 0) = ((MR_Box) (ll_backend__tag_switch__V_101_101));
#line 644 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_100_100, 1) = ((MR_Box) (ll_backend__tag_switch__IfComment_52));
#line 644 "tag_switch.m"
        }
#line 643 "tag_switch.m"
        {
#line 643 "tag_switch.m"
          ll_backend__tag_switch__IfCode_56 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ((MR_Box) (ll_backend__tag_switch__V_100_100)));
        }
#line 647 "tag_switch.m"
        {
#line 647 "tag_switch.m"
          ll_backend__tag_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 647 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_104_104, 1) = ((MR_Box) (ll_backend__tag_switch__NewLabel_47));
#line 647 "tag_switch.m"
        }
#line 647 "tag_switch.m"
        {
#line 647 "tag_switch.m"
          ll_backend__tag_switch__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 647 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_103_103, 0) = ((MR_Box) (ll_backend__tag_switch__V_104_104));
#line 647 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_103_103, 1) = ((MR_Box) (ll_backend__tag_switch__LabelComment_53));
#line 647 "tag_switch.m"
        }
#line 646 "tag_switch.m"
        {
#line 646 "tag_switch.m"
          ll_backend__tag_switch__LabelCode_57 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ((MR_Box) (ll_backend__tag_switch__V_103_103)));
        }
#line 650 "tag_switch.m"
        {
#line 650 "tag_switch.m"
          ll_backend__tag_switch__generate_primary_binary_search_13_p_0(ll_backend__tag_switch__LowGroups_45, ll_backend__tag_switch__MinPtag_15, ll_backend__tag_switch__LowRangeEnd_39, ll_backend__tag_switch__PtagRval_17, ll_backend__tag_switch__StagReg_18, ll_backend__tag_switch__VarRval_19, ll_backend__tag_switch__MaybeFailLabel_20, ll_backend__tag_switch__PtagCountMap_21, &ll_backend__tag_switch__LowRangeCode_58, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_105_105, ll_backend__tag_switch__STATE_VARIABLE_CI_89_89, &ll_backend__tag_switch__STATE_VARIABLE_CI_106_106);
        }
#line 653 "tag_switch.m"
        {
#line 653 "tag_switch.m"
          ll_backend__tag_switch__generate_primary_binary_search_13_p_0(ll_backend__tag_switch__HighGroups_46, ll_backend__tag_switch__HighRangeStart_40, ll_backend__tag_switch__MaxPtag_16, ll_backend__tag_switch__PtagRval_17, ll_backend__tag_switch__StagReg_18, ll_backend__tag_switch__VarRval_19, ll_backend__tag_switch__MaybeFailLabel_20, ll_backend__tag_switch__PtagCountMap_21, &ll_backend__tag_switch__HighRangeCode_59, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_105_105, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61, ll_backend__tag_switch__STATE_VARIABLE_CI_106_106, ll_backend__tag_switch__STATE_VARIABLE_CI_63);
        }
#line 656 "tag_switch.m"
        {
#line 656 "tag_switch.m"
          ll_backend__tag_switch__V_110_110 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ll_backend__tag_switch__LabelCode_57, ll_backend__tag_switch__HighRangeCode_59);
        }
#line 656 "tag_switch.m"
        {
#line 656 "tag_switch.m"
          ll_backend__tag_switch__V_109_109 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ll_backend__tag_switch__LowRangeCode_58, ll_backend__tag_switch__V_110_110);
        }
#line 656 "tag_switch.m"
        {
#line 656 "tag_switch.m"
          *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ll_backend__tag_switch__IfCode_56, ll_backend__tag_switch__V_109_109);
        }
#line 625 "tag_switch.m"
      }
#line 624 "tag_switch.m"
  }
#line 581 "tag_switch.m"
}

#line 552 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_2(
#line 552 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 552 "tag_switch.m"
{
#line 552 "tag_switch.m"
  {
#line 552 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 552 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 552 "tag_switch.m"
    {
#line 552 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__552__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 552 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 552 "tag_switch.m"
  }
#line 552 "tag_switch.m"
}

#line 539 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1(
#line 539 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 539 "tag_switch.m"
{
#line 539 "tag_switch.m"
  {
#line 539 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 539 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 539 "tag_switch.m"
    {
#line 539 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__539__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 539 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 539 "tag_switch.m"
  }
#line 539 "tag_switch.m"
}

#line 529 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0(
#line 529 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 529 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurPrimary_15,
#line 529 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxPrimary_16,
#line 529 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_17,
#line 529 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_18,
#line 529 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_19,
#line 529 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_20,
#line 529 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Targets_21,
#line 529 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 529 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40,
#line 529 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41,
#line 529 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_42,
#line 529 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_43)
#line 529 "tag_switch.m"
{
#line 543 "tag_switch.m"
  {
#line 543 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CurPrimary_15 > ll_backend__tag_switch__MaxPrimary_16);

#line 543 "tag_switch.m"
    if (ll_backend__tag_switch__succeeded)
#line 540 "tag_switch.m"
      {
#line 540 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_44_44;

#line 539 "tag_switch.m"
        {
#line 539 "tag_switch.m"
          ll_backend__tag_switch__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 539 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[2]));
#line 539 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1));
#line 539 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 539 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 3) = ((MR_Box) (ll_backend__tag_switch__PtagGroups_14));
#line 539 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 539 "tag_switch.m"
        }
#line 539 "tag_switch.m"
        {
#line 539 "tag_switch.m"
          mercury__require__expect_4_p_0(ll_backend__tag_switch__V_44_44, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_jump_table\'/13", (MR_String) "PtagGroups != [] when Cur > Max");
        }
#line 541 "tag_switch.m"
        *ll_backend__tag_switch__Targets_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 542 "tag_switch.m"
        {
#line 542 "tag_switch.m"
          *ll_backend__tag_switch__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 540 "tag_switch.m"
        *ll_backend__tag_switch__STATE_VARIABLE_CI_43 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_42;
#line 540 "tag_switch.m"
        *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40;
#line 540 "tag_switch.m"
      }
#line 543 "tag_switch.m"
    else
#line 544 "tag_switch.m"
      {
#line 544 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__NextPrimary_25 = (ll_backend__tag_switch__CurPrimary_15 + (MR_Integer) 1);
#line 566 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PtagGroupsTail_27;
#line 566 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PrimaryInfo_28;
#line 546 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PtagCaseEntry_26;
#line 546 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__V_76_76;

#line 546 "tag_switch.m"
        ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__PtagGroups_14)) == (MR_mktag((MR_Integer) 1)));
#line 546 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 546 "tag_switch.m"
          {
#line 546 "tag_switch.m"
            ll_backend__tag_switch__PtagCaseEntry_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagGroups_14, (MR_Integer) 0)));
#line 546 "tag_switch.m"
            ll_backend__tag_switch__PtagGroupsTail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagGroups_14, (MR_Integer) 1)));
#line 547 "tag_switch.m"
            ll_backend__tag_switch__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCaseEntry_26, (MR_Integer) 0)));
#line 547 "tag_switch.m"
            ll_backend__tag_switch__PrimaryInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCaseEntry_26, (MR_Integer) 1)));
#line 547 "tag_switch.m"
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CurPrimary_15 == ll_backend__tag_switch__V_76_76);
#line 546 "tag_switch.m"
          }
#line 566 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 549 "tag_switch.m"
          {
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TypeCtorInfo_75_75;
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagLoc_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PrimaryInfo_28, (MR_Integer) 0)));
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagGoalMap_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PrimaryInfo_28, (MR_Integer) 1)));
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__CountInfo_31;
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagLocPrime_32;
#line 549 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__MaxSecondary_33;
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__NewLabel_34;
#line 549 "tag_switch.m"
            MR_String ll_backend__tag_switch__Comment_35;
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__LabelCode_36;
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__ThisTagCode_37;
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TailTargets_38;
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TailCode_39;
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_50_50;
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_54_54;
#line 549 "tag_switch.m"
            MR_String ll_backend__tag_switch__V_56_56;
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_57_57;
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_58_58;
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_60_60;
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_61_61;
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_64_64;
#line 549 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_65_65;
#line 550 "tag_switch.m"
            MR_Box ll_backend__tag_switch__conv0_CountInfo_31;

#line 550 "tag_switch.m"
            {
#line 550 "tag_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[1], ll_backend__tag_switch__PtagCountMap_20, ll_backend__tag_switch__CurPrimary_15, &ll_backend__tag_switch__conv0_CountInfo_31);
            }
#line 550 "tag_switch.m"
            ll_backend__tag_switch__CountInfo_31 = ((MR_Word) ll_backend__tag_switch__conv0_CountInfo_31);
#line 551 "tag_switch.m"
            ll_backend__tag_switch__StagLocPrime_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_31, (MR_Integer) 0)));
#line 551 "tag_switch.m"
            ll_backend__tag_switch__MaxSecondary_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_31, (MR_Integer) 1)));
#line 552 "tag_switch.m"
            {
#line 552 "tag_switch.m"
              ll_backend__tag_switch__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 552 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
#line 552 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_jump_table_13_p_0_2));
#line 552 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 552 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 3) = ((MR_Box) (ll_backend__tag_switch__StagLoc_29));
#line 552 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 4) = ((MR_Box) (ll_backend__tag_switch__StagLocPrime_32));
#line 552 "tag_switch.m"
            }
#line 552 "tag_switch.m"
            {
#line 552 "tag_switch.m"
              mercury__require__expect_4_p_0(ll_backend__tag_switch__V_50_50, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_jump_table\'/13", (MR_String) "secondary tag locations differ");
            }
#line 554 "tag_switch.m"
            {
#line 554 "tag_switch.m"
              ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__NewLabel_34, ll_backend__tag_switch__STATE_VARIABLE_CI_0_42, &ll_backend__tag_switch__STATE_VARIABLE_CI_54_54);
            }
#line 556 "tag_switch.m"
            {
#line 556 "tag_switch.m"
              ll_backend__tag_switch__V_56_56 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__CurPrimary_15);
            }
#line 555 "tag_switch.m"
            {
#line 555 "tag_switch.m"
              ll_backend__tag_switch__Comment_35 = mercury__string__f_43_43_2_f_0((MR_String) "start of a case in primary tag switch: ptag ", ll_backend__tag_switch__V_56_56);
            }
#line 4712 "ll_backend.tag_switch.c"
            ll_backend__tag_switch__TypeCtorInfo_75_75 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 557 "tag_switch.m"
            {
#line 557 "tag_switch.m"
              ll_backend__tag_switch__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 557 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 1) = ((MR_Box) (ll_backend__tag_switch__NewLabel_34));
#line 557 "tag_switch.m"
            }
#line 557 "tag_switch.m"
            {
#line 557 "tag_switch.m"
              ll_backend__tag_switch__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 557 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_57_57, 0) = ((MR_Box) (ll_backend__tag_switch__V_58_58));
#line 557 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_57_57, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_35));
#line 557 "tag_switch.m"
            }
#line 557 "tag_switch.m"
            {
#line 557 "tag_switch.m"
              ll_backend__tag_switch__LabelCode_36 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_75_75, ((MR_Box) (ll_backend__tag_switch__V_57_57)));
            }
#line 558 "tag_switch.m"
            {
#line 558 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_30, ll_backend__tag_switch__CurPrimary_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__tag_switch__MaxSecondary_33, ll_backend__tag_switch__StagReg_17, ll_backend__tag_switch__StagLoc_29, ll_backend__tag_switch__VarRval_18, ll_backend__tag_switch__MaybeFailLabel_19, &ll_backend__tag_switch__ThisTagCode_37, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_60_60, ll_backend__tag_switch__STATE_VARIABLE_CI_54_54, &ll_backend__tag_switch__STATE_VARIABLE_CI_61_61);
            }
#line 561 "tag_switch.m"
            {
#line 561 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_jump_table_13_p_0(ll_backend__tag_switch__PtagGroupsTail_27, ll_backend__tag_switch__NextPrimary_25, ll_backend__tag_switch__MaxPrimary_16, ll_backend__tag_switch__StagReg_17, ll_backend__tag_switch__VarRval_18, ll_backend__tag_switch__MaybeFailLabel_19, ll_backend__tag_switch__PtagCountMap_20, &ll_backend__tag_switch__TailTargets_38, &ll_backend__tag_switch__TailCode_39, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_60_60, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41, ll_backend__tag_switch__STATE_VARIABLE_CI_61_61, ll_backend__tag_switch__STATE_VARIABLE_CI_43);
            }
#line 564 "tag_switch.m"
            {
#line 564 "tag_switch.m"
              ll_backend__tag_switch__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 564 "tag_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_64_64, 0) = ((MR_Box) (ll_backend__tag_switch__NewLabel_34));
#line 564 "tag_switch.m"
            }
#line 564 "tag_switch.m"
            {
#line 564 "tag_switch.m"
              MR_Word base;
#line 564 "tag_switch.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "tag_switch.m"
              *ll_backend__tag_switch__Targets_21 = base;
#line 564 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__tag_switch__V_64_64));
#line 564 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__tag_switch__TailTargets_38));
#line 564 "tag_switch.m"
            }
#line 565 "tag_switch.m"
            {
#line 565 "tag_switch.m"
              ll_backend__tag_switch__V_65_65 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_75_75, ll_backend__tag_switch__ThisTagCode_37, ll_backend__tag_switch__TailCode_39);
            }
#line 565 "tag_switch.m"
            {
#line 565 "tag_switch.m"
              *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_75_75, ll_backend__tag_switch__LabelCode_36, ll_backend__tag_switch__V_65_65);
            }
#line 549 "tag_switch.m"
          }
#line 566 "tag_switch.m"
        else
#line 569 "tag_switch.m"
          {
#line 569 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TailTargets_68;

#line 567 "tag_switch.m"
            {
#line 567 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_jump_table_13_p_0(ll_backend__tag_switch__PtagGroups_14, ll_backend__tag_switch__NextPrimary_25, ll_backend__tag_switch__MaxPrimary_16, ll_backend__tag_switch__StagReg_17, ll_backend__tag_switch__VarRval_18, ll_backend__tag_switch__MaybeFailLabel_19, ll_backend__tag_switch__PtagCountMap_20, &ll_backend__tag_switch__TailTargets_68, ll_backend__tag_switch__Code_22, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41, ll_backend__tag_switch__STATE_VARIABLE_CI_0_42, ll_backend__tag_switch__STATE_VARIABLE_CI_43);
            }
#line 570 "tag_switch.m"
            {
#line 570 "tag_switch.m"
              MR_Word base;
#line 570 "tag_switch.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "tag_switch.m"
              *ll_backend__tag_switch__Targets_21 = base;
#line 570 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__tag_switch__MaybeFailLabel_19));
#line 570 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__tag_switch__TailTargets_68));
#line 570 "tag_switch.m"
            }
#line 569 "tag_switch.m"
          }
#line 544 "tag_switch.m"
      }
#line 543 "tag_switch.m"
  }
#line 529 "tag_switch.m"
}

#line 512 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_p_0(
#line 512 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 512 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 512 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__3_3,
#line 512 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__TestRval_4)
#line 512 "tag_switch.m"
{
#line 515 "tag_switch.m"
  while (MR_TRUE)
#line 515 "tag_switch.m"
    {
#line 515 "tag_switch.m"
      /* tailcall optimized into a loop */
#line 515 "tag_switch.m"
      {
#line 515 "tag_switch.m"
        MR_bool ll_backend__tag_switch__succeeded;

#line 515 "tag_switch.m"
        if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "tag_switch.m"
          *ll_backend__tag_switch__TestRval_4 = ll_backend__tag_switch__HeadVar__3_3;
#line 515 "tag_switch.m"
        else
#line 517 "tag_switch.m"
          {
#line 517 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__OtherPtag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 517 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherPtags_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 517 "tag_switch.m"
            MR_Word ll_backend__tag_switch__ThisTestRval_12;
#line 517 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TestRval1_13;
#line 517 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_15_15;
#line 517 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_17_17;
#line 517 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_18_18;

#line 519 "tag_switch.m"
            {
#line 519 "tag_switch.m"
              ll_backend__tag_switch__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 519 "tag_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_18_18, 0) = ((MR_Box) (ll_backend__tag_switch__OtherPtag_7));
#line 519 "tag_switch.m"
            }
#line 519 "tag_switch.m"
            {
#line 519 "tag_switch.m"
              ll_backend__tag_switch__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 519 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_17_17, 1) = ((MR_Box) (ll_backend__tag_switch__V_18_18));
#line 519 "tag_switch.m"
            }
#line 519 "tag_switch.m"
            {
#line 519 "tag_switch.m"
              ll_backend__tag_switch__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 519 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 519 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 519 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 2) = ((MR_Box) (ll_backend__tag_switch__V_17_17));
#line 519 "tag_switch.m"
            }
#line 518 "tag_switch.m"
            {
#line 518 "tag_switch.m"
              ll_backend__tag_switch__ThisTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 518 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 518 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 518 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_2));
#line 518 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 3) = ((MR_Box) (ll_backend__tag_switch__V_15_15));
#line 518 "tag_switch.m"
            }
#line 520 "tag_switch.m"
            {
#line 520 "tag_switch.m"
              ll_backend__tag_switch__TestRval1_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 520 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 520 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 520 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 2) = ((MR_Box) (ll_backend__tag_switch__HeadVar__3_3));
#line 520 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 3) = ((MR_Box) (ll_backend__tag_switch__ThisTestRval_12));
#line 520 "tag_switch.m"
            }
#line 521 "tag_switch.m"
            /* direct tailcall eliminated */
#line 521 "tag_switch.m"
            {
#line 521 "tag_switch.m"
              MR_Word ll_backend__tag_switch__HeadVar__1__tmp_copy_1 = ll_backend__tag_switch__OtherPtags_8;
#line 521 "tag_switch.m"
              MR_Word ll_backend__tag_switch__HeadVar__3__tmp_copy_3 = ll_backend__tag_switch__TestRval1_13;

#line 521 "tag_switch.m"
              ll_backend__tag_switch__HeadVar__3_3 = ll_backend__tag_switch__HeadVar__3__tmp_copy_3;
#line 521 "tag_switch.m"
              ll_backend__tag_switch__HeadVar__1_1 = ll_backend__tag_switch__HeadVar__1__tmp_copy_1;
#line 521 "tag_switch.m"
            }
#line 521 "tag_switch.m"
            continue;
#line 517 "tag_switch.m"
          }
#line 515 "tag_switch.m"
      }
#line 515 "tag_switch.m"
      break;
#line 515 "tag_switch.m"
    }
#line 512 "tag_switch.m"
}

#line 1015 "tag_switch.m"
static MR_Box MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0_1(
#line 1015 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 1015 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1)
#line 1015 "tag_switch.m"
{
#line 1015 "tag_switch.m"
  {
#line 1015 "tag_switch.m"
    MR_Box ll_backend__tag_switch__wrapper_arg_2;
#line 1015 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;
#line 1015 "tag_switch.m"
    MR_String ll_backend__tag_switch__conv0_HeadVar__2_2;

#line 1015 "tag_switch.m"
    {
#line 1015 "tag_switch.m"
      ll_backend__tag_switch__conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) ll_backend__tag_switch__wrapper_arg_1));
    }
#line 1015 "tag_switch.m"
    ll_backend__tag_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__tag_switch__conv0_HeadVar__2_2));
#line 1015 "tag_switch.m"
    return ll_backend__tag_switch__wrapper_arg_2;
#line 1015 "tag_switch.m"
  }
#line 1015 "tag_switch.m"
}

#line 481 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_17,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 481 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_19,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_20,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCase_21,
#line 481 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_22,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_23,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_24,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_25,
#line 481 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__PrevTestsCode_26,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevCasesCode0_27,
#line 481 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__PrevCasesCode_28,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40,
#line 481 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41,
#line 481 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_42,
#line 481 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_43)
#line 481 "tag_switch.m"
{
#line 491 "tag_switch.m"
  {
#line 491 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_60_60;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ThisPtagLabel_31;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestRval0_32;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestRval_33;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestCode_34;
#line 491 "tag_switch.m"
    MR_String ll_backend__tag_switch__Comment_35;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__LabelCode_36;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagLoc_37;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagGoalMap_38;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TagCode_39;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_44_44;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_46_46;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_48_48;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_49_49;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_50_50;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_51_51;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_52_52;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_55_55;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_56_56;
#line 491 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_59_59;

#line 492 "tag_switch.m"
    {
#line 492 "tag_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__ThisPtagLabel_31, ll_backend__tag_switch__STATE_VARIABLE_CI_0_42, &ll_backend__tag_switch__STATE_VARIABLE_CI_44_44);
    }
#line 494 "tag_switch.m"
    {
#line 494 "tag_switch.m"
      ll_backend__tag_switch__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 494 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_49_49, 0) = ((MR_Box) (ll_backend__tag_switch__MainPtag_19));
#line 494 "tag_switch.m"
    }
#line 494 "tag_switch.m"
    {
#line 494 "tag_switch.m"
      ll_backend__tag_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 494 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_48_48, 1) = ((MR_Box) (ll_backend__tag_switch__V_49_49));
#line 494 "tag_switch.m"
    }
#line 494 "tag_switch.m"
    {
#line 494 "tag_switch.m"
      ll_backend__tag_switch__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 494 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 494 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_46_46, 1) = ((MR_Box) ((MR_Integer) 0));
#line 494 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_46_46, 2) = ((MR_Box) (ll_backend__tag_switch__V_48_48));
#line 494 "tag_switch.m"
    }
#line 493 "tag_switch.m"
    {
#line 493 "tag_switch.m"
      ll_backend__tag_switch__TestRval0_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 493 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 493 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 493 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_32, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_17));
#line 493 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_32, 3) = ((MR_Box) (ll_backend__tag_switch__V_46_46));
#line 493 "tag_switch.m"
    }
#line 495 "tag_switch.m"
    {
#line 495 "tag_switch.m"
      ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_p_0(ll_backend__tag_switch__OtherPtags_20, ll_backend__tag_switch__PtagRval_17, ll_backend__tag_switch__TestRval0_32, &ll_backend__tag_switch__TestRval_33);
    }
#line 5119 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_60_60 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 498 "tag_switch.m"
    {
#line 498 "tag_switch.m"
      ll_backend__tag_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 498 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_52_52, 0) = ((MR_Box) (ll_backend__tag_switch__ThisPtagLabel_31));
#line 498 "tag_switch.m"
    }
#line 498 "tag_switch.m"
    {
#line 498 "tag_switch.m"
      ll_backend__tag_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 498 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 498 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_51_51, 1) = ((MR_Box) (ll_backend__tag_switch__TestRval_33));
#line 498 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_51_51, 2) = ((MR_Box) (ll_backend__tag_switch__V_52_52));
#line 498 "tag_switch.m"
    }
#line 498 "tag_switch.m"
    {
#line 498 "tag_switch.m"
      ll_backend__tag_switch__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 498 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 0) = ((MR_Box) (ll_backend__tag_switch__V_51_51));
#line 498 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 1) = ((MR_Box) ((MR_String) "test primary tag only"));
#line 498 "tag_switch.m"
    }
#line 497 "tag_switch.m"
    {
#line 497 "tag_switch.m"
      ll_backend__tag_switch__TestCode_34 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ((MR_Box) (ll_backend__tag_switch__V_50_50)));
    }
#line 1009 "tag_switch.m"
    if ((ll_backend__tag_switch__OtherPtags_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "tag_switch.m"
      {
#line 1009 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_77_77;

#line 1010 "tag_switch.m"
        {
#line 1010 "tag_switch.m"
          ll_backend__tag_switch__V_77_77 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__MainPtag_19);
        }
#line 1010 "tag_switch.m"
        {
#line 1010 "tag_switch.m"
          ll_backend__tag_switch__Comment_35 = mercury__string__f_43_43_2_f_0((MR_String) "primary tag value: ", ll_backend__tag_switch__V_77_77);
        }
#line 1009 "tag_switch.m"
      }
#line 1009 "tag_switch.m"
    else
#line 1012 "tag_switch.m"
      {
#line 1012 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_67_67;
#line 1012 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_68_68;
#line 1012 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_69_69;
#line 1012 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_71_71;
#line 1012 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_72_72;
#line 1012 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_74_74;

#line 1013 "tag_switch.m"
        {
#line 1013 "tag_switch.m"
          ll_backend__tag_switch__V_68_68 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__MainPtag_19);
        }
#line 1015 "tag_switch.m"
        {
#line 1015 "tag_switch.m"
          ll_backend__tag_switch__V_74_74 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__tag_switch_scalar_common_1[4], ll_backend__tag_switch__OtherPtags_20);
        }
#line 1015 "tag_switch.m"
        {
#line 1015 "tag_switch.m"
          ll_backend__tag_switch__V_72_72 = mercury__string__join_list_2_f_0((MR_String) ", ", ll_backend__tag_switch__V_74_74);
        }
#line 1016 "tag_switch.m"
        {
#line 1016 "tag_switch.m"
          ll_backend__tag_switch__V_71_71 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__V_72_72, (MR_String) ")");
        }
#line 1014 "tag_switch.m"
        {
#line 1014 "tag_switch.m"
          ll_backend__tag_switch__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) "(shared with ", ll_backend__tag_switch__V_71_71);
        }
#line 1014 "tag_switch.m"
        {
#line 1014 "tag_switch.m"
          ll_backend__tag_switch__V_67_67 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__V_68_68, ll_backend__tag_switch__V_69_69);
        }
#line 1013 "tag_switch.m"
        {
#line 1013 "tag_switch.m"
          ll_backend__tag_switch__Comment_35 = mercury__string__f_43_43_2_f_0((MR_String) "primary tag value: ", ll_backend__tag_switch__V_67_67);
        }
#line 1012 "tag_switch.m"
      }
#line 503 "tag_switch.m"
    {
#line 503 "tag_switch.m"
      ll_backend__tag_switch__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 503 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_56_56, 1) = ((MR_Box) (ll_backend__tag_switch__ThisPtagLabel_31));
#line 503 "tag_switch.m"
    }
#line 503 "tag_switch.m"
    {
#line 503 "tag_switch.m"
      ll_backend__tag_switch__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 503 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 0) = ((MR_Box) (ll_backend__tag_switch__V_56_56));
#line 503 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_35));
#line 503 "tag_switch.m"
    }
#line 502 "tag_switch.m"
    {
#line 502 "tag_switch.m"
      ll_backend__tag_switch__LabelCode_36 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ((MR_Box) (ll_backend__tag_switch__V_55_55)));
    }
#line 505 "tag_switch.m"
    ll_backend__tag_switch__StagLoc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_21, (MR_Integer) 0)));
#line 505 "tag_switch.m"
    ll_backend__tag_switch__StagGoalMap_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_21, (MR_Integer) 1)));
#line 506 "tag_switch.m"
    {
#line 506 "tag_switch.m"
      ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_38, ll_backend__tag_switch__MainPtag_19, ll_backend__tag_switch__OtherPtags_20, ll_backend__tag_switch__MaxSecondary_22, ll_backend__tag_switch__StagReg_18, ll_backend__tag_switch__StagLoc_37, ll_backend__tag_switch__VarRval_23, ll_backend__tag_switch__MaybeFailLabel_24, &ll_backend__tag_switch__TagCode_39, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41, ll_backend__tag_switch__STATE_VARIABLE_CI_44_44, ll_backend__tag_switch__STATE_VARIABLE_CI_43);
    }
#line 509 "tag_switch.m"
    {
#line 509 "tag_switch.m"
      *ll_backend__tag_switch__PrevTestsCode_26 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ll_backend__tag_switch__PrevTestsCode0_25, ll_backend__tag_switch__TestCode_34);
    }
#line 510 "tag_switch.m"
    {
#line 510 "tag_switch.m"
      ll_backend__tag_switch__V_59_59 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ll_backend__tag_switch__TagCode_39, ll_backend__tag_switch__PrevCasesCode0_27);
    }
#line 510 "tag_switch.m"
    {
#line 510 "tag_switch.m"
      *ll_backend__tag_switch__PrevCasesCode_28 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ll_backend__tag_switch__LabelCode_36, ll_backend__tag_switch__V_59_59);
    }
#line 491 "tag_switch.m"
  }
#line 481 "tag_switch.m"
}

#line 441 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1(
#line 441 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 441 "tag_switch.m"
{
#line 441 "tag_switch.m"
  {
#line 441 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 441 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 441 "tag_switch.m"
    {
#line 441 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__441__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 441 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 441 "tag_switch.m"
  }
#line 441 "tag_switch.m"
}

#line 426 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0(
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_3,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_4,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_5,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_6,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_7,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevCasesCode0_8,
#line 426 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_9,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10,
#line 426 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_11,
#line 426 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_12,
#line 426 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_13)
#line 426 "tag_switch.m"
{
#line 432 "tag_switch.m"
  while (MR_TRUE)
#line 432 "tag_switch.m"
    {
#line 432 "tag_switch.m"
      /* tailcall optimized into a loop */
#line 432 "tag_switch.m"
      {
#line 432 "tag_switch.m"
        MR_bool ll_backend__tag_switch__succeeded;

#line 432 "tag_switch.m"
        if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 432 "tag_switch.m"
          {
#line 433 "tag_switch.m"
            {
#line 433 "tag_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_chain\'/13", (MR_String) "empty list");
#line 433 "tag_switch.m"
              return;
            }
#line 432 "tag_switch.m"
          }
#line 432 "tag_switch.m"
        else
#line 436 "tag_switch.m"
          {
#line 436 "tag_switch.m"
            MR_Word ll_backend__tag_switch__PtagGroup_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 436 "tag_switch.m"
            MR_Word ll_backend__tag_switch__PtagGroups_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 436 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__MainPtag_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_31, (MR_Integer) 0)));
#line 436 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherPtags_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_31, (MR_Integer) 1)));
#line 436 "tag_switch.m"
            MR_Word ll_backend__tag_switch__PtagCase_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_31, (MR_Integer) 2)));
#line 436 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagLoc_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_45, (MR_Integer) 0)));
#line 436 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagGoalMap_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_45, (MR_Integer) 1)));
#line 436 "tag_switch.m"
            MR_Word ll_backend__tag_switch__CountInfo_48;
#line 436 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagLocPrime_49;
#line 436 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__MaxSecondary_50;
#line 436 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_64_64;
#line 439 "tag_switch.m"
            MR_Box ll_backend__tag_switch__conv0_CountInfo_48;

#line 439 "tag_switch.m"
            {
#line 439 "tag_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[1], ll_backend__tag_switch__PtagCountMap_6, ll_backend__tag_switch__MainPtag_43, &ll_backend__tag_switch__conv0_CountInfo_48);
            }
#line 439 "tag_switch.m"
            ll_backend__tag_switch__CountInfo_48 = ((MR_Word) ll_backend__tag_switch__conv0_CountInfo_48);
#line 440 "tag_switch.m"
            ll_backend__tag_switch__StagLocPrime_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_48, (MR_Integer) 0)));
#line 440 "tag_switch.m"
            ll_backend__tag_switch__MaxSecondary_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_48, (MR_Integer) 1)));
#line 441 "tag_switch.m"
            {
#line 441 "tag_switch.m"
              ll_backend__tag_switch__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 441 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
#line 441 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1));
#line 441 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 441 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 3) = ((MR_Box) (ll_backend__tag_switch__StagLoc_46));
#line 441 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 4) = ((MR_Box) (ll_backend__tag_switch__StagLocPrime_49));
#line 441 "tag_switch.m"
            }
#line 441 "tag_switch.m"
            {
#line 441 "tag_switch.m"
              mercury__require__expect_4_p_0(ll_backend__tag_switch__V_64_64, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_chain\'/13", (MR_String) "secondary tag locations differ");
            }
#line 453 "tag_switch.m"
            if ((ll_backend__tag_switch__PtagGroups_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 467 "tag_switch.m"
              if ((ll_backend__tag_switch__MaybeFailLabel_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 468 "tag_switch.m"
                {
#line 468 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TypeCtorInfo_97_97;
#line 468 "tag_switch.m"
                  MR_String ll_backend__tag_switch__Comment_57;
#line 468 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__CommentCode_58;
#line 468 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TagCode_59;
#line 468 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_69_69;
#line 468 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_70_70;
#line 468 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_74_74;
#line 468 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_75_75;

#line 469 "tag_switch.m"
                  {
#line 469 "tag_switch.m"
                    ll_backend__tag_switch__make_ptag_comment_4_p_0((MR_String) "fallthrough to last primary tag value: ", ll_backend__tag_switch__MainPtag_43, ll_backend__tag_switch__OtherPtags_44, &ll_backend__tag_switch__Comment_57);
                  }
#line 5453 "ll_backend.tag_switch.c"
                  ll_backend__tag_switch__TypeCtorInfo_97_97 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 472 "tag_switch.m"
                  {
#line 472 "tag_switch.m"
                    ll_backend__tag_switch__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 472 "tag_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_70_70, 0) = ((MR_Box) (ll_backend__tag_switch__Comment_57));
#line 472 "tag_switch.m"
                  }
#line 472 "tag_switch.m"
                  {
#line 472 "tag_switch.m"
                    ll_backend__tag_switch__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 472 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_69_69, 0) = ((MR_Box) (ll_backend__tag_switch__V_70_70));
#line 472 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_69_69, 1) = ((MR_Box) ((MR_String) ""));
#line 472 "tag_switch.m"
                  }
#line 471 "tag_switch.m"
                  {
#line 471 "tag_switch.m"
                    ll_backend__tag_switch__CommentCode_58 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_97_97, ((MR_Box) (ll_backend__tag_switch__V_69_69)));
                  }
#line 474 "tag_switch.m"
                  {
#line 474 "tag_switch.m"
                    ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_47, ll_backend__tag_switch__MainPtag_43, ll_backend__tag_switch__OtherPtags_44, ll_backend__tag_switch__MaxSecondary_50, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__StagLoc_46, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, &ll_backend__tag_switch__TagCode_59, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_11, ll_backend__tag_switch__STATE_VARIABLE_CI_0_12, ll_backend__tag_switch__STATE_VARIABLE_CI_13);
                  }
#line 477 "tag_switch.m"
                  {
#line 477 "tag_switch.m"
                    ll_backend__tag_switch__V_75_75 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_97_97, ll_backend__tag_switch__TagCode_59, ll_backend__tag_switch__PrevCasesCode0_8);
                  }
#line 477 "tag_switch.m"
                  {
#line 477 "tag_switch.m"
                    ll_backend__tag_switch__V_74_74 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_97_97, ll_backend__tag_switch__CommentCode_58, ll_backend__tag_switch__V_75_75);
                  }
#line 477 "tag_switch.m"
                  {
#line 477 "tag_switch.m"
                    *ll_backend__tag_switch__Code_9 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_97_97, ll_backend__tag_switch__PrevTestsCode0_7, ll_backend__tag_switch__V_74_74);
                  }
#line 468 "tag_switch.m"
                }
#line 467 "tag_switch.m"
              else
#line 456 "tag_switch.m"
                {
#line 456 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TypeCtorInfo_96_96;
#line 456 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__FailLabel_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_5, (MR_Integer) 0)));
#line 456 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__FailCode_56;
#line 456 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_78_78;
#line 456 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_79_79;
#line 456 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_80_80;
#line 456 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_82_82;
#line 456 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevTestsCode1_87;
#line 456 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevCasesCode1_88;

#line 457 "tag_switch.m"
                  {
#line 457 "tag_switch.m"
                    ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__MainPtag_43, ll_backend__tag_switch__OtherPtags_44, ll_backend__tag_switch__PtagCase_45, ll_backend__tag_switch__MaxSecondary_50, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, ll_backend__tag_switch__PrevTestsCode0_7, &ll_backend__tag_switch__PrevTestsCode1_87, ll_backend__tag_switch__PrevCasesCode0_8, &ll_backend__tag_switch__PrevCasesCode1_88, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_11, ll_backend__tag_switch__STATE_VARIABLE_CI_0_12, ll_backend__tag_switch__STATE_VARIABLE_CI_13);
                  }
#line 5528 "ll_backend.tag_switch.c"
                  ll_backend__tag_switch__TypeCtorInfo_96_96 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 463 "tag_switch.m"
                  {
#line 463 "tag_switch.m"
                    ll_backend__tag_switch__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 463 "tag_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_80_80, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_55));
#line 463 "tag_switch.m"
                  }
#line 463 "tag_switch.m"
                  {
#line 463 "tag_switch.m"
                    ll_backend__tag_switch__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 463 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_79_79, 1) = ((MR_Box) (ll_backend__tag_switch__V_80_80));
#line 463 "tag_switch.m"
                  }
#line 463 "tag_switch.m"
                  {
#line 463 "tag_switch.m"
                    ll_backend__tag_switch__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 463 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_78_78, 0) = ((MR_Box) (ll_backend__tag_switch__V_79_79));
#line 463 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_78_78, 1) = ((MR_Box) ((MR_String) "primary tag with no code to handle it"));
#line 463 "tag_switch.m"
                  }
#line 462 "tag_switch.m"
                  {
#line 462 "tag_switch.m"
                    ll_backend__tag_switch__FailCode_56 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_96_96, ((MR_Box) (ll_backend__tag_switch__V_78_78)));
                  }
#line 466 "tag_switch.m"
                  {
#line 466 "tag_switch.m"
                    ll_backend__tag_switch__V_82_82 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_96_96, ll_backend__tag_switch__FailCode_56, ll_backend__tag_switch__PrevCasesCode1_88);
                  }
#line 466 "tag_switch.m"
                  {
#line 466 "tag_switch.m"
                    *ll_backend__tag_switch__Code_9 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_96_96, ll_backend__tag_switch__PrevTestsCode1_87, ll_backend__tag_switch__V_82_82);
                  }
#line 456 "tag_switch.m"
                }
#line 453 "tag_switch.m"
            else
#line 444 "tag_switch.m"
              {
#line 444 "tag_switch.m"
                MR_Word ll_backend__tag_switch__PrevTestsCode1_53;
#line 444 "tag_switch.m"
                MR_Word ll_backend__tag_switch__PrevCasesCode1_54;
#line 444 "tag_switch.m"
                MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_83_83;
#line 444 "tag_switch.m"
                MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_84_84;

#line 445 "tag_switch.m"
                {
#line 445 "tag_switch.m"
                  ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__MainPtag_43, ll_backend__tag_switch__OtherPtags_44, ll_backend__tag_switch__PtagCase_45, ll_backend__tag_switch__MaxSecondary_50, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, ll_backend__tag_switch__PrevTestsCode0_7, &ll_backend__tag_switch__PrevTestsCode1_53, ll_backend__tag_switch__PrevCasesCode0_8, &ll_backend__tag_switch__PrevCasesCode1_54, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_83_83, ll_backend__tag_switch__STATE_VARIABLE_CI_0_12, &ll_backend__tag_switch__STATE_VARIABLE_CI_84_84);
                }
#line 450 "tag_switch.m"
                /* direct tailcall eliminated */
#line 450 "tag_switch.m"
                {
#line 450 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__HeadVar__1__tmp_copy_1 = ll_backend__tag_switch__PtagGroups_32;
#line 450 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevTestsCode0__tmp_copy_7 = ll_backend__tag_switch__PrevTestsCode1_53;
#line 450 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevCasesCode0__tmp_copy_8 = ll_backend__tag_switch__PrevCasesCode1_54;
#line 450 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0__tmp_copy_10 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_83_83;
#line 450 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0__tmp_copy_12 = ll_backend__tag_switch__STATE_VARIABLE_CI_84_84;

#line 450 "tag_switch.m"
                  ll_backend__tag_switch__STATE_VARIABLE_CI_0_12 = ll_backend__tag_switch__STATE_VARIABLE_CI_0__tmp_copy_12;
#line 450 "tag_switch.m"
                  ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0__tmp_copy_10;
#line 450 "tag_switch.m"
                  ll_backend__tag_switch__PrevCasesCode0_8 = ll_backend__tag_switch__PrevCasesCode0__tmp_copy_8;
#line 450 "tag_switch.m"
                  ll_backend__tag_switch__PrevTestsCode0_7 = ll_backend__tag_switch__PrevTestsCode0__tmp_copy_7;
#line 450 "tag_switch.m"
                  ll_backend__tag_switch__HeadVar__1_1 = ll_backend__tag_switch__HeadVar__1__tmp_copy_1;
#line 450 "tag_switch.m"
                }
#line 450 "tag_switch.m"
                continue;
#line 444 "tag_switch.m"
              }
#line 436 "tag_switch.m"
          }
#line 432 "tag_switch.m"
      }
#line 432 "tag_switch.m"
      break;
#line 432 "tag_switch.m"
    }
#line 426 "tag_switch.m"
}

#line 410 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_p_0(
#line 410 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 410 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 410 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__3_3,
#line 410 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__TestRval_4)
#line 410 "tag_switch.m"
{
#line 413 "tag_switch.m"
  while (MR_TRUE)
#line 413 "tag_switch.m"
    {
#line 413 "tag_switch.m"
      /* tailcall optimized into a loop */
#line 413 "tag_switch.m"
      {
#line 413 "tag_switch.m"
        MR_bool ll_backend__tag_switch__succeeded;

#line 413 "tag_switch.m"
        if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 413 "tag_switch.m"
          *ll_backend__tag_switch__TestRval_4 = ll_backend__tag_switch__HeadVar__3_3;
#line 413 "tag_switch.m"
        else
#line 415 "tag_switch.m"
          {
#line 415 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__OtherPtag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 415 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherPtags_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 415 "tag_switch.m"
            MR_Word ll_backend__tag_switch__ThisTestRval_12;
#line 415 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TestRval1_13;
#line 415 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_15_15;
#line 415 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_17_17;
#line 415 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_18_18;

#line 417 "tag_switch.m"
            {
#line 417 "tag_switch.m"
              ll_backend__tag_switch__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 417 "tag_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_18_18, 0) = ((MR_Box) (ll_backend__tag_switch__OtherPtag_7));
#line 417 "tag_switch.m"
            }
#line 417 "tag_switch.m"
            {
#line 417 "tag_switch.m"
              ll_backend__tag_switch__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 417 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_17_17, 1) = ((MR_Box) (ll_backend__tag_switch__V_18_18));
#line 417 "tag_switch.m"
            }
#line 417 "tag_switch.m"
            {
#line 417 "tag_switch.m"
              ll_backend__tag_switch__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 417 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 417 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 417 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 2) = ((MR_Box) (ll_backend__tag_switch__V_17_17));
#line 417 "tag_switch.m"
            }
#line 416 "tag_switch.m"
            {
#line 416 "tag_switch.m"
              ll_backend__tag_switch__ThisTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 416 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 416 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 416 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_2));
#line 416 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 3) = ((MR_Box) (ll_backend__tag_switch__V_15_15));
#line 416 "tag_switch.m"
            }
#line 418 "tag_switch.m"
            {
#line 418 "tag_switch.m"
              ll_backend__tag_switch__TestRval1_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 418 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 418 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 418 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 2) = ((MR_Box) (ll_backend__tag_switch__HeadVar__3_3));
#line 418 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 3) = ((MR_Box) (ll_backend__tag_switch__ThisTestRval_12));
#line 418 "tag_switch.m"
            }
#line 419 "tag_switch.m"
            /* direct tailcall eliminated */
#line 419 "tag_switch.m"
            {
#line 419 "tag_switch.m"
              MR_Word ll_backend__tag_switch__HeadVar__1__tmp_copy_1 = ll_backend__tag_switch__OtherPtags_8;
#line 419 "tag_switch.m"
              MR_Word ll_backend__tag_switch__HeadVar__3__tmp_copy_3 = ll_backend__tag_switch__TestRval1_13;

#line 419 "tag_switch.m"
              ll_backend__tag_switch__HeadVar__3_3 = ll_backend__tag_switch__HeadVar__3__tmp_copy_3;
#line 419 "tag_switch.m"
              ll_backend__tag_switch__HeadVar__1_1 = ll_backend__tag_switch__HeadVar__1__tmp_copy_1;
#line 419 "tag_switch.m"
            }
#line 419 "tag_switch.m"
            continue;
#line 415 "tag_switch.m"
          }
#line 413 "tag_switch.m"
      }
#line 413 "tag_switch.m"
      break;
#line 413 "tag_switch.m"
    }
#line 410 "tag_switch.m"
}

#line 384 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(
#line 384 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_14,
#line 384 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_15,
#line 384 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_16,
#line 384 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_17,
#line 384 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCase_18,
#line 384 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_19,
#line 384 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_20,
#line 384 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_21,
#line 384 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 384 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_33,
#line 384 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_34,
#line 384 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_35,
#line 384 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_36)
#line 384 "tag_switch.m"
{
#line 391 "tag_switch.m"
  {
#line 391 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_53_53;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ElseLabel_25;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestRval0_26;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestRval_27;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestCode_28;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagLoc_29;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagGoalMap_30;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TagCode_31;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ElseCode_32;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_37_37;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_39_39;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_41_41;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_42_42;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_43_43;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_44_44;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_45_45;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_49_49;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_50_50;
#line 391 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_52_52;

#line 392 "tag_switch.m"
    {
#line 392 "tag_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__ElseLabel_25, ll_backend__tag_switch__STATE_VARIABLE_CI_0_35, &ll_backend__tag_switch__STATE_VARIABLE_CI_37_37);
    }
#line 394 "tag_switch.m"
    {
#line 394 "tag_switch.m"
      ll_backend__tag_switch__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 394 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_42_42, 0) = ((MR_Box) (ll_backend__tag_switch__MainPtag_16));
#line 394 "tag_switch.m"
    }
#line 394 "tag_switch.m"
    {
#line 394 "tag_switch.m"
      ll_backend__tag_switch__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 394 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_41_41, 1) = ((MR_Box) (ll_backend__tag_switch__V_42_42));
#line 394 "tag_switch.m"
    }
#line 394 "tag_switch.m"
    {
#line 394 "tag_switch.m"
      ll_backend__tag_switch__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 394 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 394 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_39_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 394 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_39_39, 2) = ((MR_Box) (ll_backend__tag_switch__V_41_41));
#line 394 "tag_switch.m"
    }
#line 393 "tag_switch.m"
    {
#line 393 "tag_switch.m"
      ll_backend__tag_switch__TestRval0_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 393 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 393 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 393 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_26, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_14));
#line 393 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_26, 3) = ((MR_Box) (ll_backend__tag_switch__V_39_39));
#line 393 "tag_switch.m"
    }
#line 395 "tag_switch.m"
    {
#line 395 "tag_switch.m"
      ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_p_0(ll_backend__tag_switch__OtherPtags_17, ll_backend__tag_switch__PtagRval_14, ll_backend__tag_switch__TestRval0_26, &ll_backend__tag_switch__TestRval_27);
    }
#line 5896 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_53_53 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 398 "tag_switch.m"
    {
#line 398 "tag_switch.m"
      ll_backend__tag_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 398 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_45_45, 0) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_25));
#line 398 "tag_switch.m"
    }
#line 398 "tag_switch.m"
    {
#line 398 "tag_switch.m"
      ll_backend__tag_switch__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 398 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 398 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 1) = ((MR_Box) (ll_backend__tag_switch__TestRval_27));
#line 398 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 2) = ((MR_Box) (ll_backend__tag_switch__V_45_45));
#line 398 "tag_switch.m"
    }
#line 398 "tag_switch.m"
    {
#line 398 "tag_switch.m"
      ll_backend__tag_switch__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_43_43, 0) = ((MR_Box) (ll_backend__tag_switch__V_44_44));
#line 398 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_43_43, 1) = ((MR_Box) ((MR_String) "test primary tag only"));
#line 398 "tag_switch.m"
    }
#line 397 "tag_switch.m"
    {
#line 397 "tag_switch.m"
      ll_backend__tag_switch__TestCode_28 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_53_53, ((MR_Box) (ll_backend__tag_switch__V_43_43)));
    }
#line 401 "tag_switch.m"
    ll_backend__tag_switch__StagLoc_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_18, (MR_Integer) 0)));
#line 401 "tag_switch.m"
    ll_backend__tag_switch__StagGoalMap_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_18, (MR_Integer) 1)));
#line 402 "tag_switch.m"
    {
#line 402 "tag_switch.m"
      ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_30, ll_backend__tag_switch__MainPtag_16, ll_backend__tag_switch__OtherPtags_17, ll_backend__tag_switch__MaxSecondary_19, ll_backend__tag_switch__StagReg_15, ll_backend__tag_switch__StagLoc_29, ll_backend__tag_switch__VarRval_20, ll_backend__tag_switch__MaybeFailLabel_21, &ll_backend__tag_switch__TagCode_31, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_33, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_34, ll_backend__tag_switch__STATE_VARIABLE_CI_37_37, ll_backend__tag_switch__STATE_VARIABLE_CI_36);
    }
#line 406 "tag_switch.m"
    {
#line 406 "tag_switch.m"
      ll_backend__tag_switch__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 406 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_50_50, 1) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_25));
#line 406 "tag_switch.m"
    }
#line 406 "tag_switch.m"
    {
#line 406 "tag_switch.m"
      ll_backend__tag_switch__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 406 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_49_49, 0) = ((MR_Box) (ll_backend__tag_switch__V_50_50));
#line 406 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_49_49, 1) = ((MR_Box) ((MR_String) "handle next primary tag"));
#line 406 "tag_switch.m"
    }
#line 405 "tag_switch.m"
    {
#line 405 "tag_switch.m"
      ll_backend__tag_switch__ElseCode_32 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_53_53, ((MR_Box) (ll_backend__tag_switch__V_49_49)));
    }
#line 408 "tag_switch.m"
    {
#line 408 "tag_switch.m"
      ll_backend__tag_switch__V_52_52 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_53_53, ll_backend__tag_switch__TagCode_31, ll_backend__tag_switch__ElseCode_32);
    }
#line 408 "tag_switch.m"
    {
#line 408 "tag_switch.m"
      *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_53_53, ll_backend__tag_switch__TestCode_28, ll_backend__tag_switch__V_52_52);
    }
#line 391 "tag_switch.m"
  }
#line 384 "tag_switch.m"
}

#line 350 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0_1(
#line 350 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 350 "tag_switch.m"
{
#line 350 "tag_switch.m"
  {
#line 350 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 350 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 350 "tag_switch.m"
    {
#line 350 "tag_switch.m"
      return ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__350__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 350 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 350 "tag_switch.m"
  }
#line 350 "tag_switch.m"
}

#line 335 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(
#line 335 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 335 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 335 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_3,
#line 335 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_4,
#line 335 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_5,
#line 335 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_6,
#line 335 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_7,
#line 335 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8,
#line 335 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9,
#line 335 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_10,
#line 335 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_11)
#line 335 "tag_switch.m"
{
#line 342 "tag_switch.m"
  {
#line 342 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 342 "tag_switch.m"
    if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 342 "tag_switch.m"
      {
#line 343 "tag_switch.m"
        {
#line 343 "tag_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_me_else_chain\'/11", (MR_String) "empty switch");
#line 343 "tag_switch.m"
          return;
        }
#line 342 "tag_switch.m"
      }
#line 342 "tag_switch.m"
    else
#line 345 "tag_switch.m"
      {
#line 345 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PtagGroup_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 345 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PtagGroups_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 345 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__MainPtag_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_27, (MR_Integer) 0)));
#line 345 "tag_switch.m"
        MR_Word ll_backend__tag_switch__OtherPtags_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_27, (MR_Integer) 1)));
#line 345 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PtagCase_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_27, (MR_Integer) 2)));
#line 345 "tag_switch.m"
        MR_Word ll_backend__tag_switch__StagLoc_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_39, (MR_Integer) 0)));
#line 345 "tag_switch.m"
        MR_Word ll_backend__tag_switch__StagGoalMap_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_39, (MR_Integer) 1)));
#line 345 "tag_switch.m"
        MR_Word ll_backend__tag_switch__CountInfo_42;
#line 345 "tag_switch.m"
        MR_Word ll_backend__tag_switch__StagLocPrime_43;
#line 345 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__MaxSecondary_44;
#line 345 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_55_55;
#line 348 "tag_switch.m"
        MR_Box ll_backend__tag_switch__conv0_CountInfo_42;

#line 348 "tag_switch.m"
        {
#line 348 "tag_switch.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[1], ll_backend__tag_switch__PtagCountMap_6, ll_backend__tag_switch__MainPtag_37, &ll_backend__tag_switch__conv0_CountInfo_42);
        }
#line 348 "tag_switch.m"
        ll_backend__tag_switch__CountInfo_42 = ((MR_Word) ll_backend__tag_switch__conv0_CountInfo_42);
#line 349 "tag_switch.m"
        ll_backend__tag_switch__StagLocPrime_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_42, (MR_Integer) 0)));
#line 349 "tag_switch.m"
        ll_backend__tag_switch__MaxSecondary_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_42, (MR_Integer) 1)));
#line 350 "tag_switch.m"
        {
#line 350 "tag_switch.m"
          ll_backend__tag_switch__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 350 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
#line 350 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0_1));
#line 350 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 350 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 3) = ((MR_Box) (ll_backend__tag_switch__StagLoc_40));
#line 350 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 4) = ((MR_Box) (ll_backend__tag_switch__StagLocPrime_43));
#line 350 "tag_switch.m"
        }
#line 350 "tag_switch.m"
        {
#line 350 "tag_switch.m"
          mercury__require__expect_4_p_0(ll_backend__tag_switch__V_55_55, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_me_else_chain\'/11", (MR_String) "secondary tag locations differ");
        }
#line 361 "tag_switch.m"
        if ((ll_backend__tag_switch__PtagGroups_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "tag_switch.m"
          if ((ll_backend__tag_switch__MaybeFailLabel_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "tag_switch.m"
            {
#line 378 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_41, ll_backend__tag_switch__MainPtag_37, ll_backend__tag_switch__OtherPtags_38, ll_backend__tag_switch__MaxSecondary_44, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__StagLoc_40, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, ll_backend__tag_switch__Code_7, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9, ll_backend__tag_switch__STATE_VARIABLE_CI_0_10, ll_backend__tag_switch__STATE_VARIABLE_CI_11);
#line 378 "tag_switch.m"
              return;
            }
#line 376 "tag_switch.m"
          else
#line 364 "tag_switch.m"
            {
#line 364 "tag_switch.m"
              MR_Word ll_backend__tag_switch__TypeCtorInfo_78_78;
#line 364 "tag_switch.m"
              MR_Word ll_backend__tag_switch__FailLabel_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_5, (MR_Integer) 0)));
#line 364 "tag_switch.m"
              MR_Word ll_backend__tag_switch__FailCode_50;
#line 364 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_63_63;
#line 364 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_64_64;
#line 364 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_65_65;
#line 364 "tag_switch.m"
              MR_Word ll_backend__tag_switch__ThisTagCode_71;

#line 365 "tag_switch.m"
              {
#line 365 "tag_switch.m"
                ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__MainPtag_37, ll_backend__tag_switch__OtherPtags_38, ll_backend__tag_switch__PtagCase_39, ll_backend__tag_switch__MaxSecondary_44, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, &ll_backend__tag_switch__ThisTagCode_71, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9, ll_backend__tag_switch__STATE_VARIABLE_CI_0_10, ll_backend__tag_switch__STATE_VARIABLE_CI_11);
              }
#line 6149 "ll_backend.tag_switch.c"
              ll_backend__tag_switch__TypeCtorInfo_78_78 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 372 "tag_switch.m"
              {
#line 372 "tag_switch.m"
                ll_backend__tag_switch__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 372 "tag_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_65_65, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_49));
#line 372 "tag_switch.m"
              }
#line 372 "tag_switch.m"
              {
#line 372 "tag_switch.m"
                ll_backend__tag_switch__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 372 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_64_64, 1) = ((MR_Box) (ll_backend__tag_switch__V_65_65));
#line 372 "tag_switch.m"
              }
#line 372 "tag_switch.m"
              {
#line 372 "tag_switch.m"
                ll_backend__tag_switch__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 372 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_63_63, 0) = ((MR_Box) (ll_backend__tag_switch__V_64_64));
#line 372 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_63_63, 1) = ((MR_Box) ((MR_String) "primary tag with no code to handle it"));
#line 372 "tag_switch.m"
              }
#line 371 "tag_switch.m"
              {
#line 371 "tag_switch.m"
                ll_backend__tag_switch__FailCode_50 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_78_78, ((MR_Box) (ll_backend__tag_switch__V_63_63)));
              }
#line 375 "tag_switch.m"
              {
#line 375 "tag_switch.m"
                *ll_backend__tag_switch__Code_7 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_78_78, ll_backend__tag_switch__ThisTagCode_71, ll_backend__tag_switch__FailCode_50);
              }
#line 364 "tag_switch.m"
            }
#line 361 "tag_switch.m"
        else
#line 353 "tag_switch.m"
          {
#line 353 "tag_switch.m"
            MR_Word ll_backend__tag_switch__ThisTagCode_47;
#line 353 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherTagsCode_48;
#line 353 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_67_67;
#line 353 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_68_68;

#line 354 "tag_switch.m"
            {
#line 354 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__MainPtag_37, ll_backend__tag_switch__OtherPtags_38, ll_backend__tag_switch__PtagCase_39, ll_backend__tag_switch__MaxSecondary_44, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, &ll_backend__tag_switch__ThisTagCode_47, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_67_67, ll_backend__tag_switch__STATE_VARIABLE_CI_0_10, &ll_backend__tag_switch__STATE_VARIABLE_CI_68_68);
            }
#line 357 "tag_switch.m"
            {
#line 357 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(ll_backend__tag_switch__PtagGroups_28, ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, ll_backend__tag_switch__PtagCountMap_6, &ll_backend__tag_switch__OtherTagsCode_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_67_67, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9, ll_backend__tag_switch__STATE_VARIABLE_CI_68_68, ll_backend__tag_switch__STATE_VARIABLE_CI_11);
            }
#line 360 "tag_switch.m"
            {
#line 360 "tag_switch.m"
              *ll_backend__tag_switch__Code_7 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__tag_switch__ThisTagCode_47, ll_backend__tag_switch__OtherTagsCode_48);
            }
#line 353 "tag_switch.m"
          }
#line 345 "tag_switch.m"
      }
#line 342 "tag_switch.m"
  }
#line 335 "tag_switch.m"
}

#line 328 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0_2(
#line 328 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 328 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 328 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_2,
#line 328 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_3,
#line 328 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_4)
#line 328 "tag_switch.m"
{
#line 328 "tag_switch.m"
  {
#line 328 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;
#line 328 "tag_switch.m"
    MR_Word ll_backend__tag_switch__conv7_HeadVar__4_4;

#line 328 "tag_switch.m"
    {
#line 328 "tag_switch.m"
      ll_backend__switch_case__add_remaining_case_4_p_0(((MR_Word) ll_backend__tag_switch__wrapper_arg_1), ((MR_Word) ll_backend__tag_switch__wrapper_arg_2), ((MR_Word) ll_backend__tag_switch__wrapper_arg_3), &ll_backend__tag_switch__conv7_HeadVar__4_4);
    }
#line 328 "tag_switch.m"
    *ll_backend__tag_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__tag_switch__conv7_HeadVar__4_4));
#line 328 "tag_switch.m"
  }
#line 328 "tag_switch.m"
}

#line 223 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0_1(
#line 223 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 223 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 223 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_2,
#line 223 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_3,
#line 223 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_4,
#line 223 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_5,
#line 223 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_6,
#line 223 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_7,
#line 223 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_8)
#line 223 "tag_switch.m"
{
#line 223 "tag_switch.m"
  {
#line 223 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;
#line 223 "tag_switch.m"
    MR_Word ll_backend__tag_switch__conv3_HeadVar__3_3;
#line 223 "tag_switch.m"
    MR_Word ll_backend__tag_switch__conv2_HeadVar__5_5;
#line 223 "tag_switch.m"
    MR_Word ll_backend__tag_switch__conv1_HeadVar__7_7;
#line 223 "tag_switch.m"
    MR_Word ll_backend__tag_switch__conv0_HeadVar__9_9;

#line 223 "tag_switch.m"
    {
#line 223 "tag_switch.m"
      ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__tag_switch__wrapper_arg_1), &ll_backend__tag_switch__conv3_HeadVar__3_3, ((MR_Word) ll_backend__tag_switch__wrapper_arg_3), &ll_backend__tag_switch__conv2_HeadVar__5_5, ((MR_Word) ll_backend__tag_switch__wrapper_arg_5), &ll_backend__tag_switch__conv1_HeadVar__7_7, ((MR_Word) ll_backend__tag_switch__wrapper_arg_7), &ll_backend__tag_switch__conv0_HeadVar__9_9);
    }
#line 223 "tag_switch.m"
    *ll_backend__tag_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__tag_switch__conv3_HeadVar__3_3));
#line 223 "tag_switch.m"
    *ll_backend__tag_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__tag_switch__conv2_HeadVar__5_5));
#line 223 "tag_switch.m"
    *ll_backend__tag_switch__wrapper_arg_6 = ((MR_Box) (ll_backend__tag_switch__conv1_HeadVar__7_7));
#line 223 "tag_switch.m"
    *ll_backend__tag_switch__wrapper_arg_8 = ((MR_Box) (ll_backend__tag_switch__conv0_HeadVar__9_9));
#line 223 "tag_switch.m"
  }
#line 223 "tag_switch.m"
}

#line 32 "tag_switch.m"
void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0(
#line 32 "tag_switch.m"
  MR_Word ll_backend__tag_switch__TaggedCases_15,
#line 32 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_16,
#line 32 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarType_17,
#line 32 "tag_switch.m"
  MR_String ll_backend__tag_switch__VarName_18,
#line 32 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CodeModel_19,
#line 32 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CanFail_20,
#line 32 "tag_switch.m"
  MR_Word ll_backend__tag_switch__SwitchGoalInfo_21,
#line 32 "tag_switch.m"
  MR_Word ll_backend__tag_switch__EndLabel_22,
#line 32 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_MaybeEnd_0_64,
#line 32 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_MaybeEnd_65,
#line 32 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_24,
#line 32 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_66,
#line 32 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_67,
#line 32 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CLD0_26)
#line 32 "tag_switch.m"
{
#line 195 "tag_switch.m"
  {
#line 195 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_134_134;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_135_135;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_143_143;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__PtagReg_28;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagReg_29;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__BranchStart_30;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ModuleInfo_31;
#line 195 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__MaxPrimary_32;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__PtagCountMap_33;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__Params_34;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__CaseLabelMap0_35;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__PtagCaseMap_37;
#line 195 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__PtagsUsed_38;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__Globals_39;
#line 195 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__DenseSwitchSize_40;
#line 195 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__TrySwitchSize_41;
#line 195 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__BinarySwitchSize_42;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__PtagCode_46;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__EndCode_48;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__MaybeFailLabel_49;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__FailCode_50;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__CasesCode_55;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__CaseLabelMap_56;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__RemainingCasesCode_63;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CLD_70_70;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CLD_72_72;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CLD_73_73;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CLD_74_74;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_75_75;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_76_76;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_78_78;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_94_94;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_95_95;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_102_102;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_119_119;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_120_120;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_121_121;
#line 195 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_122_122;
#line 223 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_36_36;
#line 223 "tag_switch.m"
    MR_Box ll_backend__tag_switch__conv6_CaseLabelMap0_35;
#line 223 "tag_switch.m"
    MR_Box ll_backend__tag_switch__conv5_STATE_VARIABLE_MaybeEnd_65;
#line 223 "tag_switch.m"
    MR_Box ll_backend__tag_switch__conv4_STATE_VARIABLE_CI_78_78;
#line 328 "tag_switch.m"
    MR_Box ll_backend__tag_switch__conv8_RemainingCasesCode_63;

#line 210 "tag_switch.m"
    {
#line 210 "tag_switch.m"
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__tag_switch__PtagReg_28, ll_backend__tag_switch__CLD0_26, &ll_backend__tag_switch__STATE_VARIABLE_CLD_70_70);
    }
#line 211 "tag_switch.m"
    {
#line 211 "tag_switch.m"
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__STATE_VARIABLE_CLD_70_70, &ll_backend__tag_switch__STATE_VARIABLE_CLD_72_72);
    }
#line 212 "tag_switch.m"
    {
#line 212 "tag_switch.m"
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__tag_switch__PtagReg_28, ll_backend__tag_switch__STATE_VARIABLE_CLD_72_72, &ll_backend__tag_switch__STATE_VARIABLE_CLD_73_73);
    }
#line 213 "tag_switch.m"
    {
#line 213 "tag_switch.m"
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__STATE_VARIABLE_CLD_73_73, &ll_backend__tag_switch__STATE_VARIABLE_CLD_74_74);
    }
#line 214 "tag_switch.m"
    {
#line 214 "tag_switch.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__tag_switch__STATE_VARIABLE_CLD_74_74, &ll_backend__tag_switch__BranchStart_30);
    }
#line 219 "tag_switch.m"
    {
#line 219 "tag_switch.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__tag_switch__STATE_VARIABLE_CI_0_66, &ll_backend__tag_switch__ModuleInfo_31);
    }
#line 220 "tag_switch.m"
    {
#line 220 "tag_switch.m"
      backend_libs__switch_util__get_ptag_counts_4_p_0(ll_backend__tag_switch__VarType_17, ll_backend__tag_switch__ModuleInfo_31, &ll_backend__tag_switch__MaxPrimary_32, &ll_backend__tag_switch__PtagCountMap_33);
    }
#line 221 "tag_switch.m"
    {
#line 221 "tag_switch.m"
      ll_backend__tag_switch__Params_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 221 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_34, 0) = ((MR_Box) (ll_backend__tag_switch__VarName_18));
#line 221 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_34, 1) = ((MR_Box) (ll_backend__tag_switch__SwitchGoalInfo_21));
#line 221 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_34, 2) = ((MR_Box) (ll_backend__tag_switch__CodeModel_19));
#line 221 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_34, 3) = ((MR_Box) (ll_backend__tag_switch__BranchStart_30));
#line 221 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_34, 4) = ((MR_Box) (ll_backend__tag_switch__EndLabel_22));
#line 221 "tag_switch.m"
    }
#line 223 "tag_switch.m"
    {
#line 223 "tag_switch.m"
      ll_backend__tag_switch__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 223 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_75_75, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[0]));
#line 223 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_75_75, 1) = ((MR_Box) (ll_backend__tag_switch__generate_tag_switch_14_p_0_1));
#line 223 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 223 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_75_75, 3) = ((MR_Box) (ll_backend__tag_switch__Params_34));
#line 223 "tag_switch.m"
    }
#line 6505 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_134_134 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 6507 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_135_135 = (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0;
#line 224 "tag_switch.m"
    {
#line 224 "tag_switch.m"
      ll_backend__tag_switch__V_76_76 = mercury__map__init_0_f_0(ll_backend__tag_switch__TypeCtorInfo_134_134, ll_backend__tag_switch__TypeCtorInfo_135_135);
    }
#line 223 "tag_switch.m"
    {
#line 223 "tag_switch.m"
      backend_libs__switch_util__group_cases_by_ptag_10_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, (MR_Word) &ll_backend__tag_switch_scalar_common_1[0], (MR_Word) &ll_backend__tag_switch_scalar_common_2[0], (MR_Word) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0, ll_backend__tag_switch__TaggedCases_15, ll_backend__tag_switch__V_75_75, ((MR_Box) (ll_backend__tag_switch__V_76_76)), &ll_backend__tag_switch__conv6_CaseLabelMap0_35, ((MR_Box) (ll_backend__tag_switch__STATE_VARIABLE_MaybeEnd_0_64)), &ll_backend__tag_switch__conv5_STATE_VARIABLE_MaybeEnd_65, ((MR_Box) (ll_backend__tag_switch__STATE_VARIABLE_CI_0_66)), &ll_backend__tag_switch__conv4_STATE_VARIABLE_CI_78_78, &ll_backend__tag_switch__V_36_36, &ll_backend__tag_switch__PtagCaseMap_37);
    }
#line 223 "tag_switch.m"
    ll_backend__tag_switch__CaseLabelMap0_35 = ((MR_Word) ll_backend__tag_switch__conv6_CaseLabelMap0_35);
#line 223 "tag_switch.m"
    *ll_backend__tag_switch__STATE_VARIABLE_MaybeEnd_65 = ((MR_Word) ll_backend__tag_switch__conv5_STATE_VARIABLE_MaybeEnd_65);
#line 223 "tag_switch.m"
    ll_backend__tag_switch__STATE_VARIABLE_CI_78_78 = ((MR_Word) ll_backend__tag_switch__conv4_STATE_VARIABLE_CI_78_78);
#line 226 "tag_switch.m"
    {
#line 226 "tag_switch.m"
      mercury__map__count_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__tag_switch_scalar_common_2[1], ll_backend__tag_switch__PtagCaseMap_37, &ll_backend__tag_switch__PtagsUsed_38);
    }
#line 227 "tag_switch.m"
    {
#line 227 "tag_switch.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__tag_switch__STATE_VARIABLE_CI_78_78, &ll_backend__tag_switch__Globals_39);
    }
#line 228 "tag_switch.m"
    {
#line 228 "tag_switch.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_39, (MR_Integer) 429, &ll_backend__tag_switch__DenseSwitchSize_40);
    }
#line 229 "tag_switch.m"
    {
#line 229 "tag_switch.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_39, (MR_Integer) 435, &ll_backend__tag_switch__TrySwitchSize_41);
    }
#line 230 "tag_switch.m"
    {
#line 230 "tag_switch.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_39, (MR_Integer) 436, &ll_backend__tag_switch__BinarySwitchSize_42);
    }
#line 6550 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_143_143 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 268 "tag_switch.m"
    {
#line 268 "tag_switch.m"
      ll_backend__tag_switch__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 268 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_95_95, 1) = ((MR_Box) (ll_backend__tag_switch__EndLabel_22));
#line 268 "tag_switch.m"
    }
#line 268 "tag_switch.m"
    {
#line 268 "tag_switch.m"
      ll_backend__tag_switch__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 268 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_94_94, 0) = ((MR_Box) (ll_backend__tag_switch__V_95_95));
#line 268 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_94_94, 1) = ((MR_Box) ((MR_String) "end of tag switch"));
#line 268 "tag_switch.m"
    }
#line 267 "tag_switch.m"
    {
#line 267 "tag_switch.m"
      ll_backend__tag_switch__EndCode_48 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ((MR_Box) (ll_backend__tag_switch__V_94_94)));
    }
#line 274 "tag_switch.m"
#line 274 "tag_switch.m"
    switch (ll_backend__tag_switch__CanFail_20) {
#line 274 "tag_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 274 "tag_switch.m"
      case (MR_Integer) 0:
#line 275 "tag_switch.m"
        {
#line 275 "tag_switch.m"
          MR_Word ll_backend__tag_switch__FailLabel_51;
#line 275 "tag_switch.m"
          MR_Word ll_backend__tag_switch__FailLabelCode_52;
#line 275 "tag_switch.m"
          MR_Word ll_backend__tag_switch__FailureCode_53;
#line 275 "tag_switch.m"
          MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_97_97;
#line 275 "tag_switch.m"
          MR_Word ll_backend__tag_switch__V_98_98;
#line 275 "tag_switch.m"
          MR_Word ll_backend__tag_switch__V_99_99;
#line 275 "tag_switch.m"
          MR_Word ll_backend__tag_switch__STATE_VARIABLE_CLD_101_101;

#line 276 "tag_switch.m"
          {
#line 276 "tag_switch.m"
            ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__FailLabel_51, ll_backend__tag_switch__STATE_VARIABLE_CI_78_78, &ll_backend__tag_switch__STATE_VARIABLE_CI_97_97);
          }
#line 277 "tag_switch.m"
          {
#line 277 "tag_switch.m"
            ll_backend__tag_switch__MaybeFailLabel_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 277 "tag_switch.m"
            MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_49, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_51));
#line 277 "tag_switch.m"
          }
#line 279 "tag_switch.m"
          {
#line 279 "tag_switch.m"
            ll_backend__tag_switch__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "tag_switch.m"
            MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 279 "tag_switch.m"
            MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_99_99, 1) = ((MR_Box) (ll_backend__tag_switch__FailLabel_51));
#line 279 "tag_switch.m"
          }
#line 279 "tag_switch.m"
          {
#line 279 "tag_switch.m"
            ll_backend__tag_switch__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 279 "tag_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_98_98, 0) = ((MR_Box) (ll_backend__tag_switch__V_99_99));
#line 279 "tag_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_98_98, 1) = ((MR_Box) ((MR_String) "switch has failed"));
#line 279 "tag_switch.m"
          }
#line 278 "tag_switch.m"
          {
#line 278 "tag_switch.m"
            ll_backend__tag_switch__FailLabelCode_52 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ((MR_Box) (ll_backend__tag_switch__V_98_98)));
          }
#line 284 "tag_switch.m"
          {
#line 284 "tag_switch.m"
            ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__tag_switch__BranchStart_30, ll_backend__tag_switch__STATE_VARIABLE_CI_97_97, &ll_backend__tag_switch__STATE_VARIABLE_CLD_101_101);
          }
#line 285 "tag_switch.m"
          {
#line 285 "tag_switch.m"
            ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__tag_switch__FailureCode_53, ll_backend__tag_switch__STATE_VARIABLE_CI_97_97, &ll_backend__tag_switch__STATE_VARIABLE_CI_102_102, ll_backend__tag_switch__STATE_VARIABLE_CLD_101_101);
          }
#line 287 "tag_switch.m"
          {
#line 287 "tag_switch.m"
            ll_backend__tag_switch__FailCode_50 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__FailLabelCode_52, ll_backend__tag_switch__FailureCode_53);
          }
#line 275 "tag_switch.m"
        }
#line 274 "tag_switch.m"
        break;
#line 274 "tag_switch.m"
      case (MR_Integer) 1:
#line 271 "tag_switch.m"
        {
#line 272 "tag_switch.m"
          ll_backend__tag_switch__MaybeFailLabel_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 273 "tag_switch.m"
          {
#line 273 "tag_switch.m"
            ll_backend__tag_switch__FailCode_50 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143);
          }
#line 271 "tag_switch.m"
          ll_backend__tag_switch__STATE_VARIABLE_CI_102_102 = ll_backend__tag_switch__STATE_VARIABLE_CI_78_78;
#line 271 "tag_switch.m"
        }
#line 274 "tag_switch.m"
        break;
#line 274 "tag_switch.m"
    }
#line 231 "tag_switch.m"
    ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagsUsed_38 >= ll_backend__tag_switch__DenseSwitchSize_40);
#line 6679 "ll_backend.tag_switch.c"
    if (ll_backend__tag_switch__succeeded)
#line 6681 "ll_backend.tag_switch.c"
      {
#line 6683 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__PtagRval_47;
#line 6685 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__Targets_57;
#line 6687 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__TableCode_58;
#line 6689 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__SwitchCode_59;
#line 6691 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__V_112_112;
#line 6693 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__V_113_113;
#line 6695 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__PtagCaseList_123;

#line 261 "tag_switch.m"
        {
#line 261 "tag_switch.m"
          ll_backend__tag_switch__PtagCode_46 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 262 "tag_switch.m"
        {
#line 262 "tag_switch.m"
          ll_backend__tag_switch__PtagRval_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 262 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 262 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_47, 1) = ((MR_Box) ((MR_Integer) 1));
#line 262 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_47, 2) = ((MR_Box) (ll_backend__tag_switch__VarRval_16));
#line 262 "tag_switch.m"
        }
#line 298 "tag_switch.m"
        {
#line 298 "tag_switch.m"
          backend_libs__switch_util__order_ptags_by_value_4_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, (MR_Integer) 0, ll_backend__tag_switch__MaxPrimary_32, ll_backend__tag_switch__PtagCaseMap_37, &ll_backend__tag_switch__PtagCaseList_123);
        }
#line 299 "tag_switch.m"
        {
#line 299 "tag_switch.m"
          ll_backend__tag_switch__generate_primary_jump_table_13_p_0(ll_backend__tag_switch__PtagCaseList_123, (MR_Integer) 0, ll_backend__tag_switch__MaxPrimary_32, ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__VarRval_16, ll_backend__tag_switch__MaybeFailLabel_49, ll_backend__tag_switch__PtagCountMap_33, &ll_backend__tag_switch__Targets_57, &ll_backend__tag_switch__TableCode_58, ll_backend__tag_switch__CaseLabelMap0_35, &ll_backend__tag_switch__CaseLabelMap_56, ll_backend__tag_switch__STATE_VARIABLE_CI_102_102, ll_backend__tag_switch__STATE_VARIABLE_CI_67);
        }
#line 303 "tag_switch.m"
        {
#line 303 "tag_switch.m"
          ll_backend__tag_switch__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 303 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 303 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_113_113, 1) = ((MR_Box) (ll_backend__tag_switch__PtagRval_47));
#line 303 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_113_113, 2) = ((MR_Box) (ll_backend__tag_switch__Targets_57));
#line 303 "tag_switch.m"
        }
#line 303 "tag_switch.m"
        {
#line 303 "tag_switch.m"
          ll_backend__tag_switch__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_112_112, 0) = ((MR_Box) (ll_backend__tag_switch__V_113_113));
#line 303 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_112_112, 1) = ((MR_Box) ((MR_String) "switch on primary tag"));
#line 303 "tag_switch.m"
        }
#line 302 "tag_switch.m"
        {
#line 302 "tag_switch.m"
          ll_backend__tag_switch__SwitchCode_59 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ((MR_Box) (ll_backend__tag_switch__V_112_112)));
        }
#line 306 "tag_switch.m"
        {
#line 306 "tag_switch.m"
          ll_backend__tag_switch__CasesCode_55 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__SwitchCode_59, ll_backend__tag_switch__TableCode_58);
        }
#line 6757 "ll_backend.tag_switch.c"
      }
#line 6759 "ll_backend.tag_switch.c"
    else
#line 6761 "ll_backend.tag_switch.c"
      {
#line 6763 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__PtagRval_167;
#line 242 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__NumRealRegs_44;
#line 242 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_83_83;

#line 243 "tag_switch.m"
        ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagsUsed_38 >= (MR_Integer) 2);
#line 242 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 242 "tag_switch.m"
          {
#line 244 "tag_switch.m"
            ll_backend__tag_switch__V_83_83 = (MR_Integer) 304;
#line 244 "tag_switch.m"
            {
#line 244 "tag_switch.m"
              libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_39, ll_backend__tag_switch__V_83_83, &ll_backend__tag_switch__NumRealRegs_44);
            }
#line 246 "tag_switch.m"
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__NumRealRegs_44 == (MR_Integer) 0);
#line 247 "tag_switch.m"
            if (!(ll_backend__tag_switch__succeeded))
#line 250 "tag_switch.m"
              {
#line 250 "tag_switch.m"
                MR_Integer ll_backend__tag_switch__PtagRegNo_45;
#line 248 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_84_84;

#line 248 "tag_switch.m"
                ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__PtagReg_28)) == (MR_mktag((MR_Integer) 1)));
#line 248 "tag_switch.m"
                if (ll_backend__tag_switch__succeeded)
#line 248 "tag_switch.m"
                  {
#line 248 "tag_switch.m"
                    ll_backend__tag_switch__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagReg_28, (MR_Integer) 0)));
#line 248 "tag_switch.m"
                    ll_backend__tag_switch__PtagRegNo_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagReg_28, (MR_Integer) 1)));
#line 248 "tag_switch.m"
                    ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__V_84_84 == (MR_Integer) 0);
#line 248 "tag_switch.m"
                  }
#line 250 "tag_switch.m"
                if (ll_backend__tag_switch__succeeded)
#line 249 "tag_switch.m"
                  ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagRegNo_45 <= ll_backend__tag_switch__NumRealRegs_44);
#line 250 "tag_switch.m"
                else
#line 251 "tag_switch.m"
                  {
#line 251 "tag_switch.m"
                    {
#line 251 "tag_switch.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_tag_switch\'/14", (MR_String) "improper reg in tag switch");
#line 251 "tag_switch.m"
                      return;
                    }
#line 251 "tag_switch.m"
                    ll_backend__tag_switch__succeeded = MR_TRUE;
#line 251 "tag_switch.m"
                  }
#line 250 "tag_switch.m"
              }
#line 242 "tag_switch.m"
          }
#line 260 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 258 "tag_switch.m"
          {
#line 258 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_150_150;
#line 258 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_151_151;
#line 258 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_152_152;

#line 256 "tag_switch.m"
            {
#line 256 "tag_switch.m"
              ll_backend__tag_switch__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 256 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 256 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_152_152, 1) = ((MR_Box) ((MR_Integer) 1));
#line 256 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_152_152, 2) = ((MR_Box) (ll_backend__tag_switch__VarRval_16));
#line 256 "tag_switch.m"
            }
#line 256 "tag_switch.m"
            {
#line 256 "tag_switch.m"
              ll_backend__tag_switch__V_151_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 256 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_151_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 256 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_151_151, 1) = ((MR_Box) (ll_backend__tag_switch__PtagReg_28));
#line 256 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_151_151, 2) = ((MR_Box) (ll_backend__tag_switch__V_152_152));
#line 256 "tag_switch.m"
            }
#line 256 "tag_switch.m"
            {
#line 256 "tag_switch.m"
              ll_backend__tag_switch__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 256 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_150_150, 0) = ((MR_Box) (ll_backend__tag_switch__V_151_151));
#line 256 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_150_150, 1) = ((MR_Box) ((MR_String) "compute tag to switch on"));
#line 256 "tag_switch.m"
            }
#line 255 "tag_switch.m"
            {
#line 255 "tag_switch.m"
              ll_backend__tag_switch__PtagCode_46 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_150_150)));
            }
#line 259 "tag_switch.m"
            {
#line 259 "tag_switch.m"
              ll_backend__tag_switch__PtagRval_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 259 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagRval_167, 0) = ((MR_Box) (ll_backend__tag_switch__PtagReg_28));
#line 259 "tag_switch.m"
            }
#line 258 "tag_switch.m"
          }
#line 260 "tag_switch.m"
        else
#line 261 "tag_switch.m"
          {
#line 261 "tag_switch.m"
            {
#line 261 "tag_switch.m"
              ll_backend__tag_switch__PtagCode_46 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 262 "tag_switch.m"
            {
#line 262 "tag_switch.m"
              ll_backend__tag_switch__PtagRval_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 262 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_167, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 262 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_167, 1) = ((MR_Box) ((MR_Integer) 1));
#line 262 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_167, 2) = ((MR_Box) (ll_backend__tag_switch__VarRval_16));
#line 262 "tag_switch.m"
            }
#line 261 "tag_switch.m"
          }
#line 233 "tag_switch.m"
        ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagsUsed_38 >= ll_backend__tag_switch__BinarySwitchSize_42);
#line 6916 "ll_backend.tag_switch.c"
        if (ll_backend__tag_switch__succeeded)
#line 6918 "ll_backend.tag_switch.c"
          {
#line 6920 "ll_backend.tag_switch.c"
            MR_Word ll_backend__tag_switch__PtagCaseList_54;

#line 292 "tag_switch.m"
            {
#line 292 "tag_switch.m"
              backend_libs__switch_util__order_ptags_by_value_4_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, (MR_Integer) 0, ll_backend__tag_switch__MaxPrimary_32, ll_backend__tag_switch__PtagCaseMap_37, &ll_backend__tag_switch__PtagCaseList_54);
            }
#line 293 "tag_switch.m"
            {
#line 293 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_binary_search_13_p_0(ll_backend__tag_switch__PtagCaseList_54, (MR_Integer) 0, ll_backend__tag_switch__MaxPrimary_32, ll_backend__tag_switch__PtagRval_167, ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__VarRval_16, ll_backend__tag_switch__MaybeFailLabel_49, ll_backend__tag_switch__PtagCountMap_33, &ll_backend__tag_switch__CasesCode_55, ll_backend__tag_switch__CaseLabelMap0_35, &ll_backend__tag_switch__CaseLabelMap_56, ll_backend__tag_switch__STATE_VARIABLE_CI_102_102, ll_backend__tag_switch__STATE_VARIABLE_CI_67);
            }
#line 6933 "ll_backend.tag_switch.c"
          }
#line 6935 "ll_backend.tag_switch.c"
        else
#line 6937 "ll_backend.tag_switch.c"
          {
#line 235 "tag_switch.m"
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagsUsed_38 >= ll_backend__tag_switch__TrySwitchSize_41);
#line 6941 "ll_backend.tag_switch.c"
            if (ll_backend__tag_switch__succeeded)
#line 6943 "ll_backend.tag_switch.c"
              {
#line 6945 "ll_backend.tag_switch.c"
                MR_Word ll_backend__tag_switch__PtagCaseList0_60;
#line 6947 "ll_backend.tag_switch.c"
                MR_Word ll_backend__tag_switch__V_106_106;
#line 6949 "ll_backend.tag_switch.c"
                MR_Word ll_backend__tag_switch__V_107_107;
#line 6951 "ll_backend.tag_switch.c"
                MR_Word ll_backend__tag_switch__PtagCaseList_124;
#line 315 "tag_switch.m"
                MR_Word ll_backend__tag_switch__MostFreqCase_61;
#line 315 "tag_switch.m"
                MR_Word ll_backend__tag_switch__OtherCases_62;

#line 309 "tag_switch.m"
                {
#line 309 "tag_switch.m"
                  backend_libs__switch_util__order_ptags_by_count_3_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, ll_backend__tag_switch__PtagCountMap_33, ll_backend__tag_switch__PtagCaseMap_37, &ll_backend__tag_switch__PtagCaseList0_60);
                }
#line 311 "tag_switch.m"
                ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CanFail_20 == (MR_Integer) 1);
#line 311 "tag_switch.m"
                if (ll_backend__tag_switch__succeeded)
#line 311 "tag_switch.m"
                  {
#line 312 "tag_switch.m"
                    ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__PtagCaseList0_60)) == (MR_mktag((MR_Integer) 1)));
#line 312 "tag_switch.m"
                    if (ll_backend__tag_switch__succeeded)
#line 312 "tag_switch.m"
                      {
#line 312 "tag_switch.m"
                        ll_backend__tag_switch__MostFreqCase_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagCaseList0_60, (MR_Integer) 0)));
#line 312 "tag_switch.m"
                        ll_backend__tag_switch__OtherCases_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagCaseList0_60, (MR_Integer) 1)));
#line 312 "tag_switch.m"
                      }
#line 311 "tag_switch.m"
                  }
#line 315 "tag_switch.m"
                if (ll_backend__tag_switch__succeeded)
#line 314 "tag_switch.m"
                  {
#line 314 "tag_switch.m"
                    MR_Word ll_backend__tag_switch__V_104_104;

#line 314 "tag_switch.m"
                    {
#line 314 "tag_switch.m"
                      ll_backend__tag_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "tag_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_104_104, 0) = ((MR_Box) (ll_backend__tag_switch__MostFreqCase_61));
#line 314 "tag_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "tag_switch.m"
                    }
#line 314 "tag_switch.m"
                    {
#line 314 "tag_switch.m"
                      ll_backend__tag_switch__PtagCaseList_124 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[2], ll_backend__tag_switch__OtherCases_62, ll_backend__tag_switch__V_104_104);
                    }
#line 314 "tag_switch.m"
                  }
#line 315 "tag_switch.m"
                else
#line 316 "tag_switch.m"
                  ll_backend__tag_switch__PtagCaseList_124 = ll_backend__tag_switch__PtagCaseList0_60;
#line 319 "tag_switch.m"
                {
#line 319 "tag_switch.m"
                  ll_backend__tag_switch__V_106_106 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143);
                }
#line 319 "tag_switch.m"
                {
#line 319 "tag_switch.m"
                  ll_backend__tag_switch__V_107_107 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143);
                }
#line 318 "tag_switch.m"
                {
#line 318 "tag_switch.m"
                  ll_backend__tag_switch__generate_primary_try_chain_13_p_0(ll_backend__tag_switch__PtagCaseList_124, ll_backend__tag_switch__PtagRval_167, ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__VarRval_16, ll_backend__tag_switch__MaybeFailLabel_49, ll_backend__tag_switch__PtagCountMap_33, ll_backend__tag_switch__V_106_106, ll_backend__tag_switch__V_107_107, &ll_backend__tag_switch__CasesCode_55, ll_backend__tag_switch__CaseLabelMap0_35, &ll_backend__tag_switch__CaseLabelMap_56, ll_backend__tag_switch__STATE_VARIABLE_CI_102_102, ll_backend__tag_switch__STATE_VARIABLE_CI_67);
                }
#line 7026 "ll_backend.tag_switch.c"
              }
#line 7028 "ll_backend.tag_switch.c"
            else
#line 7030 "ll_backend.tag_switch.c"
              {
#line 7032 "ll_backend.tag_switch.c"
                MR_Word ll_backend__tag_switch__PtagCaseList_125;

#line 323 "tag_switch.m"
                {
#line 323 "tag_switch.m"
                  backend_libs__switch_util__order_ptags_by_count_3_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, ll_backend__tag_switch__PtagCountMap_33, ll_backend__tag_switch__PtagCaseMap_37, &ll_backend__tag_switch__PtagCaseList_125);
                }
#line 324 "tag_switch.m"
                {
#line 324 "tag_switch.m"
                  ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(ll_backend__tag_switch__PtagCaseList_125, ll_backend__tag_switch__PtagRval_167, ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__VarRval_16, ll_backend__tag_switch__MaybeFailLabel_49, ll_backend__tag_switch__PtagCountMap_33, &ll_backend__tag_switch__CasesCode_55, ll_backend__tag_switch__CaseLabelMap0_35, &ll_backend__tag_switch__CaseLabelMap_56, ll_backend__tag_switch__STATE_VARIABLE_CI_102_102, ll_backend__tag_switch__STATE_VARIABLE_CI_67);
                }
#line 7045 "ll_backend.tag_switch.c"
              }
#line 7047 "ll_backend.tag_switch.c"
          }
#line 7049 "ll_backend.tag_switch.c"
      }
#line 328 "tag_switch.m"
    {
#line 328 "tag_switch.m"
      ll_backend__tag_switch__V_119_119 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143);
    }
#line 328 "tag_switch.m"
    {
#line 328 "tag_switch.m"
      mercury__map__foldl_4_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, ll_backend__tag_switch__TypeCtorInfo_135_135, (MR_Word) &ll_backend__tag_switch_scalar_common_2[3], (MR_Word) &ll_backend__tag_switch_scalar_common_1[3], ll_backend__tag_switch__CaseLabelMap_56, ((MR_Box) (ll_backend__tag_switch__V_119_119)), &ll_backend__tag_switch__conv8_RemainingCasesCode_63);
    }
#line 328 "tag_switch.m"
    ll_backend__tag_switch__RemainingCasesCode_63 = ((MR_Word) ll_backend__tag_switch__conv8_RemainingCasesCode_63);
#line 329 "tag_switch.m"
    {
#line 329 "tag_switch.m"
      ll_backend__tag_switch__V_122_122 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__FailCode_50, ll_backend__tag_switch__EndCode_48);
    }
#line 329 "tag_switch.m"
    {
#line 329 "tag_switch.m"
      ll_backend__tag_switch__V_121_121 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__RemainingCasesCode_63, ll_backend__tag_switch__V_122_122);
    }
#line 329 "tag_switch.m"
    {
#line 329 "tag_switch.m"
      ll_backend__tag_switch__V_120_120 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__CasesCode_55, ll_backend__tag_switch__V_121_121);
    }
#line 329 "tag_switch.m"
    {
#line 329 "tag_switch.m"
      *ll_backend__tag_switch__Code_24 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__PtagCode_46, ll_backend__tag_switch__V_120_120);
    }
#line 195 "tag_switch.m"
  }
#line 32 "tag_switch.m"
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
