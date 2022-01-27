/*
** Automatically generated from `tag_switch.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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




#line 159 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0;

#line 162 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0;

#line 165 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

#line 168 "ll_backend.tag_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0;

#line 171 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0;

#line 174 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__pti_ptag_case_entry_1__plain_ll_backend__llds__type_ctor_info_label_0;

#line 177 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 180 "ll_backend.tag_switch.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__tag_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

#line 183 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

#line 186 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0;

#line 189 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_0;

#line 192 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_1;

#line 195 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_2;

#line 198 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_3;

#line 201 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_value_ordered_switch_method_0[4];

#line 204 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_name_ordered_switch_method_0[4];

#line 207 "ll_backend.tag_switch.c"
static const MR_Integer ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_switch_method_0[4];

#line 210 "ll_backend.tag_switch.c"
static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0_10001(
#line 213 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 215 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_2);

#line 218 "ll_backend.tag_switch.c"
static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0_10001(
#line 221 "ll_backend.tag_switch.c"
  MR_Box * ll_backend__tag_switch__wrapper_arg_1,
#line 223 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_2,
#line 225 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_3);

#line 975 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__975__1_2_p_0(
#line 975 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__LowRangeEnd_28,
#line 975 "tag_switch.m"
  MR_Word ll_backend__tag_switch__LambdaHeadVar__1_71);

#line 964 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__964__1_2_p_0(
#line 964 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinStag_12,
#line 964 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurSecPrime_23);

#line 917 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__917__1_2_p_0(
#line 917 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseList_6,
#line 917 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_19);

#line 702 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__702__1_2_p_0(
#line 702 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_16,
#line 702 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_56);

#line 631 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__631__1_2_p_0(
#line 631 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__LowRangeEnd_39,
#line 631 "tag_switch.m"
  MR_Word ll_backend__tag_switch__LambdaHeadVar__1_88);

#line 618 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__618__1_2_p_0(
#line 618 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_31,
#line 618 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_34);

#line 613 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__613__1_2_p_0(
#line 613 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinPtag_15,
#line 613 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurPrimaryPrime_29);

#line 556 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__556__1_2_p_0(
#line 556 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_29,
#line 556 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_32);

#line 543 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__543__1_2_p_0(
#line 543 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 543 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_48);

#line 445 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__445__1_2_p_0(
#line 445 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_46,
#line 445 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_49);

#line 354 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__354__1_2_p_0(
#line 354 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_40,
#line 354 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_43);

#line 190 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0(
#line 190 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__HeadVar__1_1,
#line 190 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_2,
#line 190 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__3_3);

#line 190 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0(
#line 190 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_1,
#line 190 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_2);

#line 1019 "tag_switch.m"
static MR_Box MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0_1(
#line 1019 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 1019 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1);

#line 1008 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0(
#line 1008 "tag_switch.m"
  MR_String ll_backend__tag_switch__BaseStr_5,
#line 1008 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_6,
#line 1008 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_7,
#line 1008 "tag_switch.m"
  MR_String * ll_backend__tag_switch__Comment_8);

#line 975 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2(
#line 975 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 975 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1);

#line 964 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1(
#line 964 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 939 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(
#line 939 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagGoals_11,
#line 939 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinStag_12,
#line 939 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxStag_13,
#line 939 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_14,
#line 939 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_15,
#line 939 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_16,
#line 939 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49,
#line 939 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50,
#line 939 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_51,
#line 939 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_52);

#line 917 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1(
#line 917 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 911 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(
#line 911 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseList_6,
#line 911 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurSecondary_7,
#line 911 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_8,
#line 911 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_9,
#line 911 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Targets_10);

#line 858 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(
#line 858 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 858 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_2,
#line 858 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_3,
#line 858 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_4,
#line 858 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_5,
#line 858 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6,
#line 858 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_7);

#line 834 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(
#line 834 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseLabel_9,
#line 834 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_10,
#line 834 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__Secondary_11,
#line 834 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_12,
#line 834 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_19,
#line 834 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_20,
#line 834 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_21,
#line 834 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_22);

#line 800 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(
#line 800 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 800 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_2,
#line 800 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_3,
#line 800 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_4,
#line 800 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5,
#line 800 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6,
#line 800 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_7,
#line 800 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_8);

#line 702 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1(
#line 702 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 669 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0(
#line 669 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagGoalMap_14,
#line 669 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_15,
#line 669 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_16,
#line 669 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_17,
#line 669 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 669 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_19,
#line 669 "tag_switch.m"
  MR_Word ll_backend__tag_switch__Rval_20,
#line 669 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_21,
#line 669 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 669 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48,
#line 669 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49,
#line 669 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_50,
#line 669 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_51);

#line 631 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_3(
#line 631 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 631 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1);

#line 618 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2(
#line 618 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 613 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1(
#line 613 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 585 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0(
#line 585 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 585 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinPtag_15,
#line 585 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxPtag_16,
#line 585 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_17,
#line 585 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 585 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_19,
#line 585 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_20,
#line 585 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_21,
#line 585 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 585 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60,
#line 585 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61,
#line 585 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_62,
#line 585 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_63);

#line 556 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_2(
#line 556 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 543 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1(
#line 543 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 533 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0(
#line 533 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 533 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurPrimary_15,
#line 533 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxPrimary_16,
#line 533 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_17,
#line 533 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_18,
#line 533 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_19,
#line 533 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_20,
#line 533 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Targets_21,
#line 533 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 533 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40,
#line 533 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41,
#line 533 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_42,
#line 533 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_43);

#line 516 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_p_0(
#line 516 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 516 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 516 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__3_3,
#line 516 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__TestRval_4);

#line 1019 "tag_switch.m"
static MR_Box MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0_1(
#line 1019 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 1019 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1);

#line 485 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_17,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 485 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_19,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_20,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCase_21,
#line 485 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_22,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_23,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_24,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_25,
#line 485 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__PrevTestsCode_26,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevCasesCode0_27,
#line 485 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__PrevCasesCode_28,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40,
#line 485 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_42,
#line 485 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_43);

#line 445 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1(
#line 445 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 430 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0(
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_3,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_4,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_5,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_6,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_7,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevCasesCode0_8,
#line 430 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_9,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10,
#line 430 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_11,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_12,
#line 430 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_13);

#line 414 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_p_0(
#line 414 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 414 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 414 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__3_3,
#line 414 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__TestRval_4);

#line 388 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(
#line 388 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_14,
#line 388 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_15,
#line 388 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_16,
#line 388 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_17,
#line 388 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCase_18,
#line 388 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_19,
#line 388 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_20,
#line 388 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_21,
#line 388 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 388 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_33,
#line 388 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_34,
#line 388 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_35,
#line 388 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_36);

#line 354 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0_1(
#line 354 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg);

#line 339 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(
#line 339 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 339 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 339 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_3,
#line 339 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_4,
#line 339 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_5,
#line 339 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_6,
#line 339 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_7,
#line 339 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8,
#line 339 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9,
#line 339 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_10,
#line 339 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_11);

#line 332 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0_2(
#line 332 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 332 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 332 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_2,
#line 332 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_3,
#line 332 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_4);

#line 227 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0_1(
#line 227 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 227 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 227 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_2,
#line 227 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_3,
#line 227 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_4,
#line 227 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_5,
#line 227 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_6,
#line 227 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_7,
#line 227 "tag_switch.m"
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



#line 1017 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__switch_case__type_ctor_info_case_label_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0
  }
};

#line 1026 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0
  }
};

#line 1034 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 1042 "ll_backend.tag_switch.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1050 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__tag_switch__backend_libs__switch_util__ti_ptag_case_entry_1ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1058 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__backend_libs__switch_util__pti_ptag_case_entry_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1066 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1074 "ll_backend.tag_switch.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__tag_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1083 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__tag_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__tag_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1091 "ll_backend.tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__tag_switch__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1100 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_0 = {
  (MR_String) "try_me_else_chain",
  (MR_Integer) 0
};

#line 1106 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_1 = {
  (MR_String) "try_chain",
  (MR_Integer) 1
};

#line 1112 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_2 = {
  (MR_String) "jump_table",
  (MR_Integer) 2
};

#line 1118 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDesc ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_3 = {
  (MR_String) "binary_search",
  (MR_Integer) 3
};

#line 1124 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_value_ordered_switch_method_0[4] = {
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_0,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_1,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_2,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_3
};

#line 1132 "ll_backend.tag_switch.c"
static const MR_EnumFunctorDescPtr ll_backend__tag_switch__ll_backend__tag_switch__enum_name_ordered_switch_method_0[4] = {
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_3,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_2,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_1,
  &ll_backend__tag_switch__ll_backend__tag_switch__enum_functor_desc_switch_method_0_0
};

#line 1140 "ll_backend.tag_switch.c"
static const MR_Integer ll_backend__tag_switch__ll_backend__tag_switch__functor_number_map_switch_method_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1148 "ll_backend.tag_switch.c"
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

#line 1165 "ll_backend.tag_switch.c"
static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0_10001(
#line 1168 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 1170 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_2)
#line 1172 "ll_backend.tag_switch.c"
{
#line 1174 "ll_backend.tag_switch.c"
  {
#line 1176 "ll_backend.tag_switch.c"
    MR_bool ll_backend__tag_switch__succeeded;

#line 1179 "ll_backend.tag_switch.c"
    {
#line 1181 "ll_backend.tag_switch.c"
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch____Unify____switch_method_0_0(((MR_Word) ll_backend__tag_switch__wrapper_arg_1), ((MR_Word) ll_backend__tag_switch__wrapper_arg_2));
    }
#line 1184 "ll_backend.tag_switch.c"
    return ll_backend__tag_switch__succeeded;
#line 1186 "ll_backend.tag_switch.c"
  }
#line 1188 "ll_backend.tag_switch.c"
}

#line 1191 "ll_backend.tag_switch.c"
static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0_10001(
#line 1194 "ll_backend.tag_switch.c"
  MR_Box * ll_backend__tag_switch__wrapper_arg_1,
#line 1196 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_2,
#line 1198 "ll_backend.tag_switch.c"
  MR_Box ll_backend__tag_switch__wrapper_arg_3)
#line 1200 "ll_backend.tag_switch.c"
{
#line 1202 "ll_backend.tag_switch.c"
  {
#line 1204 "ll_backend.tag_switch.c"
    MR_Word ll_backend__tag_switch__conv0_HeadVar__1_1;

#line 1207 "ll_backend.tag_switch.c"
    {
#line 1209 "ll_backend.tag_switch.c"
      ll_backend__tag_switch____Compare____switch_method_0_0(&ll_backend__tag_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__tag_switch__wrapper_arg_2), ((MR_Word) ll_backend__tag_switch__wrapper_arg_3));
    }
#line 1212 "ll_backend.tag_switch.c"
    *ll_backend__tag_switch__wrapper_arg_1 = ((MR_Box) (ll_backend__tag_switch__conv0_HeadVar__1_1));
#line 1214 "ll_backend.tag_switch.c"
  }
#line 1216 "ll_backend.tag_switch.c"
}

#line 975 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__975__1_2_p_0(
#line 975 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__LowRangeEnd_28,
#line 975 "tag_switch.m"
  MR_Word ll_backend__tag_switch__LambdaHeadVar__1_71)
#line 975 "tag_switch.m"
{
#line 975 "tag_switch.m"
  {
#line 975 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 975 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__Stag_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__LambdaHeadVar__1_71, (MR_Integer) 0)));
#line 976 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__LambdaHeadVar__1_71, (MR_Integer) 1)));

#line 977 "tag_switch.m"
    ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__Stag_32 <= ll_backend__tag_switch__LowRangeEnd_28);
#line 975 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 975 "tag_switch.m"
  }
#line 975 "tag_switch.m"
}

#line 964 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__964__1_2_p_0(
#line 964 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinStag_12,
#line 964 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurSecPrime_23)
#line 964 "tag_switch.m"
{
#line 964 "tag_switch.m"
  {
#line 964 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MinStag_12 == ll_backend__tag_switch__CurSecPrime_23);

#line 964 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 964 "tag_switch.m"
  }
#line 964 "tag_switch.m"
}

#line 917 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__917__1_2_p_0(
#line 917 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseList_6,
#line 917 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_19)
#line 917 "tag_switch.m"
{
#line 917 "tag_switch.m"
  {
#line 917 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 917 "tag_switch.m"
    {
#line 917 "tag_switch.m"
      ll_backend__tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[7], ((MR_Box) (ll_backend__tag_switch__CaseList_6)), ((MR_Box) (ll_backend__tag_switch__HeadVar__2_19)));
    }
#line 917 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 917 "tag_switch.m"
  }
#line 917 "tag_switch.m"
}

#line 702 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__702__1_2_p_0(
#line 702 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_16,
#line 702 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_56)
#line 702 "tag_switch.m"
{
#line 702 "tag_switch.m"
  {
#line 702 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 702 "tag_switch.m"
    {
#line 702 "tag_switch.m"
      ll_backend__tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[6], ((MR_Box) (ll_backend__tag_switch__OtherPtags_16)), ((MR_Box) (ll_backend__tag_switch__HeadVar__2_56)));
    }
#line 702 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 702 "tag_switch.m"
  }
#line 702 "tag_switch.m"
}

#line 631 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__631__1_2_p_0(
#line 631 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__LowRangeEnd_39,
#line 631 "tag_switch.m"
  MR_Word ll_backend__tag_switch__LambdaHeadVar__1_88)
#line 631 "tag_switch.m"
{
#line 631 "tag_switch.m"
  {
#line 631 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 631 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__Ptag_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__LambdaHeadVar__1_88, (MR_Integer) 0)));
#line 632 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__LambdaHeadVar__1_88, (MR_Integer) 1)));

#line 633 "tag_switch.m"
    ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__Ptag_43 <= ll_backend__tag_switch__LowRangeEnd_39);
#line 631 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 631 "tag_switch.m"
  }
#line 631 "tag_switch.m"
}

#line 618 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__618__1_2_p_0(
#line 618 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_31,
#line 618 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_34)
#line 618 "tag_switch.m"
{
#line 618 "tag_switch.m"
  {
#line 618 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagLoc_31 == ll_backend__tag_switch__StagLocPrime_34);

#line 618 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 618 "tag_switch.m"
  }
#line 618 "tag_switch.m"
}

#line 613 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__613__1_2_p_0(
#line 613 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinPtag_15,
#line 613 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurPrimaryPrime_29)
#line 613 "tag_switch.m"
{
#line 613 "tag_switch.m"
  {
#line 613 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MinPtag_15 == ll_backend__tag_switch__CurPrimaryPrime_29);

#line 613 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 613 "tag_switch.m"
  }
#line 613 "tag_switch.m"
}

#line 556 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__556__1_2_p_0(
#line 556 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_29,
#line 556 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_32)
#line 556 "tag_switch.m"
{
#line 556 "tag_switch.m"
  {
#line 556 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagLoc_29 == ll_backend__tag_switch__StagLocPrime_32);

#line 556 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 556 "tag_switch.m"
  }
#line 556 "tag_switch.m"
}

#line 543 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__543__1_2_p_0(
#line 543 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 543 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_48)
#line 543 "tag_switch.m"
{
#line 543 "tag_switch.m"
  {
#line 543 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 543 "tag_switch.m"
    {
#line 543 "tag_switch.m"
      ll_backend__tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[5], ((MR_Box) (ll_backend__tag_switch__PtagGroups_14)), ((MR_Box) (ll_backend__tag_switch__HeadVar__2_48)));
    }
#line 543 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 543 "tag_switch.m"
  }
#line 543 "tag_switch.m"
}

#line 445 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__445__1_2_p_0(
#line 445 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_46,
#line 445 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_49)
#line 445 "tag_switch.m"
{
#line 445 "tag_switch.m"
  {
#line 445 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagLoc_46 == ll_backend__tag_switch__StagLocPrime_49);

#line 445 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 445 "tag_switch.m"
  }
#line 445 "tag_switch.m"
}

#line 354 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__354__1_2_p_0(
#line 354 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_40,
#line 354 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLocPrime_43)
#line 354 "tag_switch.m"
{
#line 354 "tag_switch.m"
  {
#line 354 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagLoc_40 == ll_backend__tag_switch__StagLocPrime_43);

#line 354 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 354 "tag_switch.m"
  }
#line 354 "tag_switch.m"
}

#line 190 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch____Compare____switch_method_0_0(
#line 190 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__HeadVar__1_1,
#line 190 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_2,
#line 190 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__3_3)
#line 190 "tag_switch.m"
{
#line 190 "tag_switch.m"
  {
#line 190 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 190 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__Cast_HeadVar1_4 = (MR_Integer) ll_backend__tag_switch__HeadVar__2_2;
#line 190 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__Cast_HeadVar2_5 = (MR_Integer) ll_backend__tag_switch__HeadVar__3_3;

#line 190 "tag_switch.m"
    {
#line 190 "tag_switch.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__tag_switch__HeadVar__1_1, ll_backend__tag_switch__Cast_HeadVar1_4, ll_backend__tag_switch__Cast_HeadVar2_5);
    }
#line 190 "tag_switch.m"
  }
#line 190 "tag_switch.m"
}

#line 190 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch____Unify____switch_method_0_0(
#line 190 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_1,
#line 190 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__2_2)
#line 190 "tag_switch.m"
{
#line 1516 "ll_backend.tag_switch.c"
  {
#line 1518 "ll_backend.tag_switch.c"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__HeadVar__2_1 == ll_backend__tag_switch__HeadVar__2_2);

#line 1521 "ll_backend.tag_switch.c"
    return ll_backend__tag_switch__succeeded;
#line 1523 "ll_backend.tag_switch.c"
  }
#line 190 "tag_switch.m"
}

#line 1019 "tag_switch.m"
static MR_Box MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0_1(
#line 1019 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 1019 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1)
#line 1019 "tag_switch.m"
{
#line 1019 "tag_switch.m"
  {
#line 1019 "tag_switch.m"
    MR_Box ll_backend__tag_switch__wrapper_arg_2;
#line 1019 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;
#line 1019 "tag_switch.m"
    MR_String ll_backend__tag_switch__conv0_HeadVar__2_2;

#line 1019 "tag_switch.m"
    {
#line 1019 "tag_switch.m"
      ll_backend__tag_switch__conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) ll_backend__tag_switch__wrapper_arg_1));
    }
#line 1019 "tag_switch.m"
    ll_backend__tag_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__tag_switch__conv0_HeadVar__2_2));
#line 1019 "tag_switch.m"
    return ll_backend__tag_switch__wrapper_arg_2;
#line 1019 "tag_switch.m"
  }
#line 1019 "tag_switch.m"
}

#line 1008 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__make_ptag_comment_4_p_0(
#line 1008 "tag_switch.m"
  MR_String ll_backend__tag_switch__BaseStr_5,
#line 1008 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_6,
#line 1008 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_7,
#line 1008 "tag_switch.m"
  MR_String * ll_backend__tag_switch__Comment_8)
#line 1008 "tag_switch.m"
{
#line 1013 "tag_switch.m"
  {
#line 1013 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 1013 "tag_switch.m"
    if ((ll_backend__tag_switch__OtherPtags_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1013 "tag_switch.m"
      {
#line 1013 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_21_21;

#line 1014 "tag_switch.m"
        {
#line 1014 "tag_switch.m"
          ll_backend__tag_switch__V_21_21 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__MainPtag_6);
        }
#line 1014 "tag_switch.m"
        {
#line 1014 "tag_switch.m"
          *ll_backend__tag_switch__Comment_8 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__BaseStr_5, ll_backend__tag_switch__V_21_21);
        }
#line 1013 "tag_switch.m"
      }
#line 1013 "tag_switch.m"
    else
#line 1016 "tag_switch.m"
      {
#line 1016 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_11_11;
#line 1016 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_12_12;
#line 1016 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_13_13;
#line 1016 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_15_15;
#line 1016 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_16_16;
#line 1016 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_18_18;

#line 1017 "tag_switch.m"
        {
#line 1017 "tag_switch.m"
          ll_backend__tag_switch__V_12_12 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__MainPtag_6);
        }
#line 1019 "tag_switch.m"
        {
#line 1019 "tag_switch.m"
          ll_backend__tag_switch__V_18_18 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__tag_switch_scalar_common_1[5], ll_backend__tag_switch__OtherPtags_7);
        }
#line 1019 "tag_switch.m"
        {
#line 1019 "tag_switch.m"
          ll_backend__tag_switch__V_16_16 = mercury__string__join_list_2_f_0((MR_String) ", ", ll_backend__tag_switch__V_18_18);
        }
#line 1020 "tag_switch.m"
        {
#line 1020 "tag_switch.m"
          ll_backend__tag_switch__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__V_16_16, (MR_String) ")");
        }
#line 1018 "tag_switch.m"
        {
#line 1018 "tag_switch.m"
          ll_backend__tag_switch__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "(shared with ", ll_backend__tag_switch__V_15_15);
        }
#line 1018 "tag_switch.m"
        {
#line 1018 "tag_switch.m"
          ll_backend__tag_switch__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__V_12_12, ll_backend__tag_switch__V_13_13);
        }
#line 1017 "tag_switch.m"
        {
#line 1017 "tag_switch.m"
          *ll_backend__tag_switch__Comment_8 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__BaseStr_5, ll_backend__tag_switch__V_11_11);
        }
#line 1016 "tag_switch.m"
      }
#line 1013 "tag_switch.m"
  }
#line 1008 "tag_switch.m"
}

#line 975 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2(
#line 975 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 975 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1)
#line 975 "tag_switch.m"
{
#line 975 "tag_switch.m"
  {
#line 975 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 975 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 975 "tag_switch.m"
    {
#line 975 "tag_switch.m"
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__975__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__tag_switch__wrapper_arg_1));
    }
#line 975 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 975 "tag_switch.m"
  }
#line 975 "tag_switch.m"
}

#line 964 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1(
#line 964 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 964 "tag_switch.m"
{
#line 964 "tag_switch.m"
  {
#line 964 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 964 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 964 "tag_switch.m"
    {
#line 964 "tag_switch.m"
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_binary_search__964__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 964 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 964 "tag_switch.m"
  }
#line 964 "tag_switch.m"
}

#line 939 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(
#line 939 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagGoals_11,
#line 939 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinStag_12,
#line 939 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxStag_13,
#line 939 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_14,
#line 939 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_15,
#line 939 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_16,
#line 939 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49,
#line 939 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50,
#line 939 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_51,
#line 939 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_52)
#line 939 "tag_switch.m"
{
#line 946 "tag_switch.m"
  {
#line 946 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MinStag_12 == ll_backend__tag_switch__MaxStag_13);

#line 946 "tag_switch.m"
    if (ll_backend__tag_switch__succeeded)
#line 947 "tag_switch.m"
      {
#line 962 "tag_switch.m"
        if ((ll_backend__tag_switch__StagGoals_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 949 "tag_switch.m"
          {
#line 958 "tag_switch.m"
            if ((ll_backend__tag_switch__MaybeFailLabel_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 959 "tag_switch.m"
              {
#line 960 "tag_switch.m"
                {
#line 960 "tag_switch.m"
                  *ll_backend__tag_switch__Code_16 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
#line 959 "tag_switch.m"
              }
#line 958 "tag_switch.m"
            else
#line 952 "tag_switch.m"
              {
#line 952 "tag_switch.m"
                MR_Word ll_backend__tag_switch__FailLabel_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_15, (MR_Integer) 0)));
#line 952 "tag_switch.m"
                MR_String ll_backend__tag_switch__StagStr_21;
#line 952 "tag_switch.m"
                MR_String ll_backend__tag_switch__Comment_22;
#line 952 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_65_65;
#line 952 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_66_66;
#line 952 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_67_67;

#line 953 "tag_switch.m"
                {
#line 953 "tag_switch.m"
                  mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MinStag_12, &ll_backend__tag_switch__StagStr_21);
                }
#line 954 "tag_switch.m"
                {
#line 954 "tag_switch.m"
                  ll_backend__tag_switch__Comment_22 = mercury__string__f_43_43_2_f_0((MR_String) "no code for ptag ", ll_backend__tag_switch__StagStr_21);
                }
#line 956 "tag_switch.m"
                {
#line 956 "tag_switch.m"
                  ll_backend__tag_switch__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 956 "tag_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_67_67, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_20));
#line 956 "tag_switch.m"
                }
#line 956 "tag_switch.m"
                {
#line 956 "tag_switch.m"
                  ll_backend__tag_switch__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 956 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 956 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_66_66, 1) = ((MR_Box) (ll_backend__tag_switch__V_67_67));
#line 956 "tag_switch.m"
                }
#line 956 "tag_switch.m"
                {
#line 956 "tag_switch.m"
                  ll_backend__tag_switch__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 956 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_65_65, 0) = ((MR_Box) (ll_backend__tag_switch__V_66_66));
#line 956 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_65_65, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_22));
#line 956 "tag_switch.m"
                }
#line 955 "tag_switch.m"
                {
#line 955 "tag_switch.m"
                  *ll_backend__tag_switch__Code_16 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_65_65)));
                }
#line 952 "tag_switch.m"
              }
#line 949 "tag_switch.m"
            *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49;
#line 949 "tag_switch.m"
          }
#line 962 "tag_switch.m"
        else
#line 962 "tag_switch.m"
          {
#line 962 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagGoals_11, (MR_Integer) 1)));
#line 962 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagGoals_11, (MR_Integer) 0)));

#line 962 "tag_switch.m"
            if ((ll_backend__tag_switch__V_100_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 963 "tag_switch.m"
              {
#line 963 "tag_switch.m"
                MR_Integer ll_backend__tag_switch__CurSecPrime_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_101_101, (MR_Integer) 0)));
#line 963 "tag_switch.m"
                MR_Word ll_backend__tag_switch__CaseLabel_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_101_101, (MR_Integer) 1)));
#line 963 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_59_59;

#line 964 "tag_switch.m"
                {
#line 964 "tag_switch.m"
                  ll_backend__tag_switch__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 964 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[3]));
#line 964 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_1));
#line 964 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 964 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 3) = ((MR_Box) (ll_backend__tag_switch__MinStag_12));
#line 964 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_59_59, 4) = ((MR_Box) (ll_backend__tag_switch__CurSecPrime_23));
#line 964 "tag_switch.m"
                }
#line 964 "tag_switch.m"
                {
#line 964 "tag_switch.m"
                  mercury__require__expect_4_p_0(ll_backend__tag_switch__V_59_59, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", (MR_String) "cur_secondary mismatch");
                }
#line 966 "tag_switch.m"
                {
#line 966 "tag_switch.m"
                  ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_24, ll_backend__tag_switch__Code_16, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50);
                }
#line 963 "tag_switch.m"
              }
#line 962 "tag_switch.m"
            else
#line 968 "tag_switch.m"
              {
#line 969 "tag_switch.m"
                {
#line 969 "tag_switch.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_binary_search\'/10", (MR_String) "goallist not singleton or empty when binary search ends");
#line 969 "tag_switch.m"
                  return;
                }
#line 968 "tag_switch.m"
              }
#line 962 "tag_switch.m"
          }
#line 947 "tag_switch.m"
        *ll_backend__tag_switch__STATE_VARIABLE_CI_52 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_51;
#line 947 "tag_switch.m"
      }
#line 946 "tag_switch.m"
    else
#line 973 "tag_switch.m"
      {
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__TypeCtorInfo_99_99;
#line 973 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__LowRangeEnd_28;
#line 973 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__HighRangeStart_29;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__InLowGroup_30;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowGoals_34;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__HighGoals_35;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__NewLabel_36;
#line 973 "tag_switch.m"
        MR_String ll_backend__tag_switch__LowStartStr_37;
#line 973 "tag_switch.m"
        MR_String ll_backend__tag_switch__LowEndStr_38;
#line 973 "tag_switch.m"
        MR_String ll_backend__tag_switch__HighStartStr_39;
#line 973 "tag_switch.m"
        MR_String ll_backend__tag_switch__HighEndStr_40;
#line 973 "tag_switch.m"
        MR_String ll_backend__tag_switch__IfComment_41;
#line 973 "tag_switch.m"
        MR_String ll_backend__tag_switch__LabelComment_42;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowRangeEndConst_43;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__TestRval_44;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__IfCode_45;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LabelCode_46;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowRangeCode_47;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__HighRangeCode_48;
#line 973 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__V_68_68 = (ll_backend__tag_switch__MinStag_12 + ll_backend__tag_switch__MaxStag_13);
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_72_72;
#line 973 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_74_74;
#line 973 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_75_75;
#line 973 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_78_78;
#line 973 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_79_79;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_81_81;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_83_83;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_84_84;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_85_85;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_86_86;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_87_87;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_88_88;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_89_89;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_92_92;
#line 973 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_93_93;

#line 973 "tag_switch.m"
        {
#line 973 "tag_switch.m"
          ll_backend__tag_switch__LowRangeEnd_28 = mercury__int__f_47_47_2_f_0(ll_backend__tag_switch__V_68_68, (MR_Integer) 2);
        }
#line 974 "tag_switch.m"
        ll_backend__tag_switch__HighRangeStart_29 = (ll_backend__tag_switch__LowRangeEnd_28 + (MR_Integer) 1);
#line 975 "tag_switch.m"
        {
#line 975 "tag_switch.m"
          ll_backend__tag_switch__InLowGroup_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 975 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_30, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[7]));
#line 975 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_30, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_binary_search_10_p_0_2));
#line 975 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 975 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_30, 3) = ((MR_Box) (ll_backend__tag_switch__LowRangeEnd_28));
#line 975 "tag_switch.m"
        }
#line 979 "tag_switch.m"
        {
#line 979 "tag_switch.m"
          mercury__list__filter_4_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[2], ll_backend__tag_switch__InLowGroup_30, ll_backend__tag_switch__StagGoals_11, &ll_backend__tag_switch__LowGoals_34, &ll_backend__tag_switch__HighGoals_35);
        }
#line 980 "tag_switch.m"
        {
#line 980 "tag_switch.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__NewLabel_36, ll_backend__tag_switch__STATE_VARIABLE_CI_0_51, &ll_backend__tag_switch__STATE_VARIABLE_CI_72_72);
        }
#line 981 "tag_switch.m"
        {
#line 981 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MinStag_12, &ll_backend__tag_switch__LowStartStr_37);
        }
#line 982 "tag_switch.m"
        {
#line 982 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__LowRangeEnd_28, &ll_backend__tag_switch__LowEndStr_38);
        }
#line 983 "tag_switch.m"
        {
#line 983 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__HighRangeStart_29, &ll_backend__tag_switch__HighStartStr_39);
        }
#line 984 "tag_switch.m"
        {
#line 984 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MaxStag_13, &ll_backend__tag_switch__HighEndStr_40);
        }
#line 986 "tag_switch.m"
        {
#line 986 "tag_switch.m"
          ll_backend__tag_switch__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) " to ", ll_backend__tag_switch__LowEndStr_38);
        }
#line 986 "tag_switch.m"
        {
#line 986 "tag_switch.m"
          ll_backend__tag_switch__V_74_74 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__LowStartStr_37, ll_backend__tag_switch__V_75_75);
        }
#line 985 "tag_switch.m"
        {
#line 985 "tag_switch.m"
          ll_backend__tag_switch__IfComment_41 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough for stags ", ll_backend__tag_switch__V_74_74);
        }
#line 988 "tag_switch.m"
        {
#line 988 "tag_switch.m"
          ll_backend__tag_switch__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) " to ", ll_backend__tag_switch__HighEndStr_40);
        }
#line 988 "tag_switch.m"
        {
#line 988 "tag_switch.m"
          ll_backend__tag_switch__V_78_78 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__HighStartStr_39, ll_backend__tag_switch__V_79_79);
        }
#line 987 "tag_switch.m"
        {
#line 987 "tag_switch.m"
          ll_backend__tag_switch__LabelComment_42 = mercury__string__f_43_43_2_f_0((MR_String) "code for stags ", ll_backend__tag_switch__V_78_78);
        }
#line 989 "tag_switch.m"
        {
#line 989 "tag_switch.m"
          ll_backend__tag_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 989 "tag_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_81_81, 0) = ((MR_Box) (ll_backend__tag_switch__LowRangeEnd_28));
#line 989 "tag_switch.m"
        }
#line 989 "tag_switch.m"
        {
#line 989 "tag_switch.m"
          ll_backend__tag_switch__LowRangeEndConst_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 989 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__LowRangeEndConst_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 989 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__LowRangeEndConst_43, 1) = ((MR_Box) (ll_backend__tag_switch__V_81_81));
#line 989 "tag_switch.m"
        }
#line 990 "tag_switch.m"
        {
#line 990 "tag_switch.m"
          ll_backend__tag_switch__TestRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 990 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 990 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
#line 990 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_44, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_14));
#line 990 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_44, 3) = ((MR_Box) (ll_backend__tag_switch__LowRangeEndConst_43));
#line 990 "tag_switch.m"
        }
#line 2080 "ll_backend.tag_switch.c"
        ll_backend__tag_switch__TypeCtorInfo_99_99 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 992 "tag_switch.m"
        {
#line 992 "tag_switch.m"
          ll_backend__tag_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 992 "tag_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_85_85, 0) = ((MR_Box) (ll_backend__tag_switch__NewLabel_36));
#line 992 "tag_switch.m"
        }
#line 992 "tag_switch.m"
        {
#line 992 "tag_switch.m"
          ll_backend__tag_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 992 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 992 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 1) = ((MR_Box) (ll_backend__tag_switch__TestRval_44));
#line 992 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 2) = ((MR_Box) (ll_backend__tag_switch__V_85_85));
#line 992 "tag_switch.m"
        }
#line 992 "tag_switch.m"
        {
#line 992 "tag_switch.m"
          ll_backend__tag_switch__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 992 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_83_83, 0) = ((MR_Box) (ll_backend__tag_switch__V_84_84));
#line 992 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_83_83, 1) = ((MR_Box) (ll_backend__tag_switch__IfComment_41));
#line 992 "tag_switch.m"
        }
#line 991 "tag_switch.m"
        {
#line 991 "tag_switch.m"
          ll_backend__tag_switch__IfCode_45 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ((MR_Box) (ll_backend__tag_switch__V_83_83)));
        }
#line 995 "tag_switch.m"
        {
#line 995 "tag_switch.m"
          ll_backend__tag_switch__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 995 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_87_87, 1) = ((MR_Box) (ll_backend__tag_switch__NewLabel_36));
#line 995 "tag_switch.m"
        }
#line 995 "tag_switch.m"
        {
#line 995 "tag_switch.m"
          ll_backend__tag_switch__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 995 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_86_86, 0) = ((MR_Box) (ll_backend__tag_switch__V_87_87));
#line 995 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_86_86, 1) = ((MR_Box) (ll_backend__tag_switch__LabelComment_42));
#line 995 "tag_switch.m"
        }
#line 994 "tag_switch.m"
        {
#line 994 "tag_switch.m"
          ll_backend__tag_switch__LabelCode_46 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ((MR_Box) (ll_backend__tag_switch__V_86_86)));
        }
#line 998 "tag_switch.m"
        {
#line 998 "tag_switch.m"
          ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(ll_backend__tag_switch__LowGoals_34, ll_backend__tag_switch__MinStag_12, ll_backend__tag_switch__LowRangeEnd_28, ll_backend__tag_switch__StagRval_14, ll_backend__tag_switch__MaybeFailLabel_15, &ll_backend__tag_switch__LowRangeCode_47, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_49, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_88_88, ll_backend__tag_switch__STATE_VARIABLE_CI_72_72, &ll_backend__tag_switch__STATE_VARIABLE_CI_89_89);
        }
#line 1000 "tag_switch.m"
        {
#line 1000 "tag_switch.m"
          ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(ll_backend__tag_switch__HighGoals_35, ll_backend__tag_switch__HighRangeStart_29, ll_backend__tag_switch__MaxStag_13, ll_backend__tag_switch__StagRval_14, ll_backend__tag_switch__MaybeFailLabel_15, &ll_backend__tag_switch__HighRangeCode_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_88_88, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_50, ll_backend__tag_switch__STATE_VARIABLE_CI_89_89, ll_backend__tag_switch__STATE_VARIABLE_CI_52);
        }
#line 1003 "tag_switch.m"
        {
#line 1003 "tag_switch.m"
          ll_backend__tag_switch__V_93_93 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ll_backend__tag_switch__LabelCode_46, ll_backend__tag_switch__HighRangeCode_48);
        }
#line 1003 "tag_switch.m"
        {
#line 1003 "tag_switch.m"
          ll_backend__tag_switch__V_92_92 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ll_backend__tag_switch__LowRangeCode_47, ll_backend__tag_switch__V_93_93);
        }
#line 1003 "tag_switch.m"
        {
#line 1003 "tag_switch.m"
          *ll_backend__tag_switch__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_99_99, ll_backend__tag_switch__IfCode_45, ll_backend__tag_switch__V_92_92);
        }
#line 973 "tag_switch.m"
      }
#line 946 "tag_switch.m"
  }
#line 939 "tag_switch.m"
}

#line 917 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1(
#line 917 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 917 "tag_switch.m"
{
#line 917 "tag_switch.m"
  {
#line 917 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 917 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 917 "tag_switch.m"
    {
#line 917 "tag_switch.m"
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_secondary_jump_table__917__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 917 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 917 "tag_switch.m"
  }
#line 917 "tag_switch.m"
}

#line 911 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(
#line 911 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseList_6,
#line 911 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurSecondary_7,
#line 911 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_8,
#line 911 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_9,
#line 911 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Targets_10)
#line 911 "tag_switch.m"
{
#line 916 "tag_switch.m"
  {
#line 916 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CurSecondary_7 > ll_backend__tag_switch__MaxSecondary_8);

#line 916 "tag_switch.m"
    if (ll_backend__tag_switch__succeeded)
#line 918 "tag_switch.m"
      {
#line 918 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_15_15;

#line 917 "tag_switch.m"
        {
#line 917 "tag_switch.m"
          ll_backend__tag_switch__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 917 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[6]));
#line 917 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 1) = ((MR_Box) (ll_backend__tag_switch__generate_secondary_jump_table_5_p_0_1));
#line 917 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 917 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 3) = ((MR_Box) (ll_backend__tag_switch__CaseList_6));
#line 917 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_15_15, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 917 "tag_switch.m"
        }
#line 917 "tag_switch.m"
        {
#line 917 "tag_switch.m"
          mercury__require__expect_4_p_0(ll_backend__tag_switch__V_15_15, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_jump_table\'/5", (MR_String) "caselist not empty when reaching limiting secondary tag");
        }
#line 919 "tag_switch.m"
        *ll_backend__tag_switch__Targets_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 918 "tag_switch.m"
      }
#line 916 "tag_switch.m"
    else
#line 921 "tag_switch.m"
      {
#line 921 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__NextSecondary_11 = (ll_backend__tag_switch__CurSecondary_7 + (MR_Integer) 1);
#line 922 "tag_switch.m"
        MR_Word ll_backend__tag_switch__CaseLabel_12;
#line 922 "tag_switch.m"
        MR_Word ll_backend__tag_switch__CaseListTail_13;
#line 922 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_21_21;
#line 922 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__V_25_25;

#line 922 "tag_switch.m"
        ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__CaseList_6)) == (MR_mktag((MR_Integer) 1)));
#line 922 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 922 "tag_switch.m"
          {
#line 922 "tag_switch.m"
            ll_backend__tag_switch__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__CaseList_6, (MR_Integer) 0)));
#line 922 "tag_switch.m"
            ll_backend__tag_switch__CaseListTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__CaseList_6, (MR_Integer) 1)));
#line 922 "tag_switch.m"
            ll_backend__tag_switch__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_21_21, (MR_Integer) 0)));
#line 922 "tag_switch.m"
            ll_backend__tag_switch__CaseLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_21_21, (MR_Integer) 1)));
#line 922 "tag_switch.m"
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CurSecondary_7 == ll_backend__tag_switch__V_25_25);
#line 922 "tag_switch.m"
          }
#line 922 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 924 "tag_switch.m"
          {
#line 924 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherTargets_14;
#line 924 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_22_22;

#line 923 "tag_switch.m"
            {
#line 923 "tag_switch.m"
              ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(ll_backend__tag_switch__CaseListTail_13, ll_backend__tag_switch__NextSecondary_11, ll_backend__tag_switch__MaxSecondary_8, ll_backend__tag_switch__MaybeFailLabel_9, &ll_backend__tag_switch__OtherTargets_14);
            }
#line 925 "tag_switch.m"
            {
#line 925 "tag_switch.m"
              ll_backend__tag_switch__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 925 "tag_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_22_22, 0) = ((MR_Box) (ll_backend__tag_switch__CaseLabel_12));
#line 925 "tag_switch.m"
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
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__tag_switch__V_22_22));
#line 925 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__tag_switch__OtherTargets_14));
#line 925 "tag_switch.m"
            }
#line 924 "tag_switch.m"
          }
#line 922 "tag_switch.m"
        else
#line 928 "tag_switch.m"
          {
#line 928 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherTargets_23;

#line 927 "tag_switch.m"
            {
#line 927 "tag_switch.m"
              ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(ll_backend__tag_switch__CaseList_6, ll_backend__tag_switch__NextSecondary_11, ll_backend__tag_switch__MaxSecondary_8, ll_backend__tag_switch__MaybeFailLabel_9, &ll_backend__tag_switch__OtherTargets_23);
            }
#line 929 "tag_switch.m"
            {
#line 929 "tag_switch.m"
              MR_Word base;
#line 929 "tag_switch.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 929 "tag_switch.m"
              *ll_backend__tag_switch__Targets_10 = base;
#line 929 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__tag_switch__MaybeFailLabel_9));
#line 929 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__tag_switch__OtherTargets_23));
#line 929 "tag_switch.m"
            }
#line 928 "tag_switch.m"
          }
#line 921 "tag_switch.m"
      }
#line 916 "tag_switch.m"
  }
#line 911 "tag_switch.m"
}

#line 858 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(
#line 858 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 858 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_2,
#line 858 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_3,
#line 858 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_4,
#line 858 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_5,
#line 858 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6,
#line 858 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_7)
#line 858 "tag_switch.m"
{
#line 862 "tag_switch.m"
  while (MR_TRUE)
#line 862 "tag_switch.m"
    {
#line 862 "tag_switch.m"
      /* tailcall optimized into a loop */
#line 862 "tag_switch.m"
      {
#line 862 "tag_switch.m"
        MR_bool ll_backend__tag_switch__succeeded;

#line 862 "tag_switch.m"
        if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 862 "tag_switch.m"
          {
#line 863 "tag_switch.m"
            {
#line 863 "tag_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_try_chain\'/7", (MR_String) "empty switch");
#line 863 "tag_switch.m"
              return;
            }
#line 862 "tag_switch.m"
          }
#line 862 "tag_switch.m"
        else
#line 865 "tag_switch.m"
          {
#line 865 "tag_switch.m"
            MR_Word ll_backend__tag_switch__Case_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 865 "tag_switch.m"
            MR_Word ll_backend__tag_switch__Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 865 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__Secondary_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Case_18, (MR_Integer) 0)));
#line 865 "tag_switch.m"
            MR_Word ll_backend__tag_switch__CaseLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Case_18, (MR_Integer) 1)));

#line 873 "tag_switch.m"
            if ((ll_backend__tag_switch__Cases_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 884 "tag_switch.m"
              if ((ll_backend__tag_switch__MaybeFailLabel_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 885 "tag_switch.m"
                {
#line 885 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__ThisCode_32;

#line 886 "tag_switch.m"
                  {
#line 886 "tag_switch.m"
                    ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_26, &ll_backend__tag_switch__ThisCode_32, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_7);
                  }
#line 887 "tag_switch.m"
                  {
#line 887 "tag_switch.m"
                    *ll_backend__tag_switch__Code_5 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__tag_switch__PrevTestsCode0_4, ll_backend__tag_switch__ThisCode_32);
                  }
#line 885 "tag_switch.m"
                }
#line 884 "tag_switch.m"
              else
#line 876 "tag_switch.m"
                {
#line 876 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TypeCtorInfo_44_44;
#line 876 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TypeCtorInfo_29_68;
#line 876 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__FailLabel_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_3, (MR_Integer) 0)));
#line 876 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__FailCode_31;
#line 876 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_36_36;
#line 876 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_37_37;
#line 876 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_38_38;
#line 876 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevTestsCode1_41;
#line 876 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__CaseInfo0_52;
#line 876 "tag_switch.m"
                  MR_String ll_backend__tag_switch__Comment_53;
#line 876 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TestCode_56;
#line 876 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_57_57;
#line 876 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_58_58;
#line 876 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_59_59;
#line 876 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_61_61;
#line 876 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_62_62;
#line 876 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_63_63;
#line 876 "tag_switch.m"
                  MR_String ll_backend__tag_switch__V_64_64;
#line 896 "tag_switch.m"
                  MR_Box ll_backend__tag_switch__conv0_CaseInfo0_52;
#line 897 "tag_switch.m"
                  MR_Word ll_backend__tag_switch___CaseCode_54;
#line 897 "tag_switch.m"
                  MR_Word ll_backend__tag_switch___CaseGenerated_55;

#line 896 "tag_switch.m"
                  {
#line 896 "tag_switch.m"
                    mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6, ((MR_Box) (ll_backend__tag_switch__CaseLabel_26)), &ll_backend__tag_switch__conv0_CaseInfo0_52);
                  }
#line 896 "tag_switch.m"
                  ll_backend__tag_switch__CaseInfo0_52 = ((MR_Word) ll_backend__tag_switch__conv0_CaseInfo0_52);
#line 897 "tag_switch.m"
                  ll_backend__tag_switch__Comment_53 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_52, (MR_Integer) 0)));
#line 897 "tag_switch.m"
                  ll_backend__tag_switch___CaseCode_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_52, (MR_Integer) 1)));
#line 897 "tag_switch.m"
                  ll_backend__tag_switch___CaseGenerated_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_52, (MR_Integer) 2)));
#line 2495 "ll_backend.tag_switch.c"
                  ll_backend__tag_switch__TypeCtorInfo_29_68 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 900 "tag_switch.m"
                  {
#line 900 "tag_switch.m"
                    ll_backend__tag_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 900 "tag_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_62_62, 0) = ((MR_Box) (ll_backend__tag_switch__Secondary_25));
#line 900 "tag_switch.m"
                  }
#line 900 "tag_switch.m"
                  {
#line 900 "tag_switch.m"
                    ll_backend__tag_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 900 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 1) = ((MR_Box) (ll_backend__tag_switch__V_62_62));
#line 900 "tag_switch.m"
                  }
#line 900 "tag_switch.m"
                  {
#line 900 "tag_switch.m"
                    ll_backend__tag_switch__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 900 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 900 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 900 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_59_59, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_2));
#line 900 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_59_59, 3) = ((MR_Box) (ll_backend__tag_switch__V_61_61));
#line 900 "tag_switch.m"
                  }
#line 901 "tag_switch.m"
                  {
#line 901 "tag_switch.m"
                    ll_backend__tag_switch__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 901 "tag_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_63_63, 0) = ((MR_Box) (ll_backend__tag_switch__CaseLabel_26));
#line 901 "tag_switch.m"
                  }
#line 900 "tag_switch.m"
                  {
#line 900 "tag_switch.m"
                    ll_backend__tag_switch__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 900 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 900 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 1) = ((MR_Box) (ll_backend__tag_switch__V_59_59));
#line 900 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 2) = ((MR_Box) (ll_backend__tag_switch__V_63_63));
#line 900 "tag_switch.m"
                  }
#line 902 "tag_switch.m"
                  {
#line 902 "tag_switch.m"
                    ll_backend__tag_switch__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) "test sec tag only for ", ll_backend__tag_switch__Comment_53);
                  }
#line 899 "tag_switch.m"
                  {
#line 899 "tag_switch.m"
                    ll_backend__tag_switch__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 899 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_57_57, 0) = ((MR_Box) (ll_backend__tag_switch__V_58_58));
#line 899 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_57_57, 1) = ((MR_Box) (ll_backend__tag_switch__V_64_64));
#line 899 "tag_switch.m"
                  }
#line 898 "tag_switch.m"
                  {
#line 898 "tag_switch.m"
                    ll_backend__tag_switch__TestCode_56 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_29_68, ((MR_Box) (ll_backend__tag_switch__V_57_57)));
                  }
#line 904 "tag_switch.m"
                  {
#line 904 "tag_switch.m"
                    ll_backend__tag_switch__PrevTestsCode1_41 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_29_68, ll_backend__tag_switch__PrevTestsCode0_4, ll_backend__tag_switch__TestCode_56);
                  }
#line 2574 "ll_backend.tag_switch.c"
                  ll_backend__tag_switch__TypeCtorInfo_44_44 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 880 "tag_switch.m"
                  {
#line 880 "tag_switch.m"
                    ll_backend__tag_switch__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 880 "tag_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_38_38, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_30));
#line 880 "tag_switch.m"
                  }
#line 880 "tag_switch.m"
                  {
#line 880 "tag_switch.m"
                    ll_backend__tag_switch__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 880 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_37_37, 1) = ((MR_Box) (ll_backend__tag_switch__V_38_38));
#line 880 "tag_switch.m"
                  }
#line 880 "tag_switch.m"
                  {
#line 880 "tag_switch.m"
                    ll_backend__tag_switch__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 880 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_36_36, 0) = ((MR_Box) (ll_backend__tag_switch__V_37_37));
#line 880 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_36_36, 1) = ((MR_Box) ((MR_String) "secondary tag with no code to handle it"));
#line 880 "tag_switch.m"
                  }
#line 879 "tag_switch.m"
                  {
#line 879 "tag_switch.m"
                    ll_backend__tag_switch__FailCode_31 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_44_44, ((MR_Box) (ll_backend__tag_switch__V_36_36)));
                  }
#line 883 "tag_switch.m"
                  {
#line 883 "tag_switch.m"
                    *ll_backend__tag_switch__Code_5 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_44_44, ll_backend__tag_switch__PrevTestsCode1_41, ll_backend__tag_switch__FailCode_31);
                  }
#line 876 "tag_switch.m"
                  *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_7 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6;
#line 876 "tag_switch.m"
                }
#line 873 "tag_switch.m"
            else
#line 868 "tag_switch.m"
              {
#line 868 "tag_switch.m"
                MR_Word ll_backend__tag_switch__TypeCtorInfo_29_91;
#line 868 "tag_switch.m"
                MR_Word ll_backend__tag_switch__PrevTestsCode1_29;
#line 868 "tag_switch.m"
                MR_Word ll_backend__tag_switch__CaseInfo0_75;
#line 868 "tag_switch.m"
                MR_String ll_backend__tag_switch__Comment_76;
#line 868 "tag_switch.m"
                MR_Word ll_backend__tag_switch__TestCode_79;
#line 868 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_80_80;
#line 868 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_81_81;
#line 868 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_82_82;
#line 868 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_84_84;
#line 868 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_85_85;
#line 868 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_86_86;
#line 868 "tag_switch.m"
                MR_String ll_backend__tag_switch__V_87_87;
#line 896 "tag_switch.m"
                MR_Box ll_backend__tag_switch__conv1_CaseInfo0_75;
#line 897 "tag_switch.m"
                MR_Word ll_backend__tag_switch___CaseCode_77;
#line 897 "tag_switch.m"
                MR_Word ll_backend__tag_switch___CaseGenerated_78;

#line 896 "tag_switch.m"
                {
#line 896 "tag_switch.m"
                  mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_6, ((MR_Box) (ll_backend__tag_switch__CaseLabel_26)), &ll_backend__tag_switch__conv1_CaseInfo0_75);
                }
#line 896 "tag_switch.m"
                ll_backend__tag_switch__CaseInfo0_75 = ((MR_Word) ll_backend__tag_switch__conv1_CaseInfo0_75);
#line 897 "tag_switch.m"
                ll_backend__tag_switch__Comment_76 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_75, (MR_Integer) 0)));
#line 897 "tag_switch.m"
                ll_backend__tag_switch___CaseCode_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_75, (MR_Integer) 1)));
#line 897 "tag_switch.m"
                ll_backend__tag_switch___CaseGenerated_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CaseInfo0_75, (MR_Integer) 2)));
#line 2666 "ll_backend.tag_switch.c"
                ll_backend__tag_switch__TypeCtorInfo_29_91 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 900 "tag_switch.m"
                {
#line 900 "tag_switch.m"
                  ll_backend__tag_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 900 "tag_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_85_85, 0) = ((MR_Box) (ll_backend__tag_switch__Secondary_25));
#line 900 "tag_switch.m"
                }
#line 900 "tag_switch.m"
                {
#line 900 "tag_switch.m"
                  ll_backend__tag_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 900 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 1) = ((MR_Box) (ll_backend__tag_switch__V_85_85));
#line 900 "tag_switch.m"
                }
#line 900 "tag_switch.m"
                {
#line 900 "tag_switch.m"
                  ll_backend__tag_switch__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 900 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 900 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 900 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_82_82, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_2));
#line 900 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_82_82, 3) = ((MR_Box) (ll_backend__tag_switch__V_84_84));
#line 900 "tag_switch.m"
                }
#line 901 "tag_switch.m"
                {
#line 901 "tag_switch.m"
                  ll_backend__tag_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 901 "tag_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_86_86, 0) = ((MR_Box) (ll_backend__tag_switch__CaseLabel_26));
#line 901 "tag_switch.m"
                }
#line 900 "tag_switch.m"
                {
#line 900 "tag_switch.m"
                  ll_backend__tag_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 900 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 900 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 1) = ((MR_Box) (ll_backend__tag_switch__V_82_82));
#line 900 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 2) = ((MR_Box) (ll_backend__tag_switch__V_86_86));
#line 900 "tag_switch.m"
                }
#line 902 "tag_switch.m"
                {
#line 902 "tag_switch.m"
                  ll_backend__tag_switch__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "test sec tag only for ", ll_backend__tag_switch__Comment_76);
                }
#line 899 "tag_switch.m"
                {
#line 899 "tag_switch.m"
                  ll_backend__tag_switch__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 899 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_80_80, 0) = ((MR_Box) (ll_backend__tag_switch__V_81_81));
#line 899 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_80_80, 1) = ((MR_Box) (ll_backend__tag_switch__V_87_87));
#line 899 "tag_switch.m"
                }
#line 898 "tag_switch.m"
                {
#line 898 "tag_switch.m"
                  ll_backend__tag_switch__TestCode_79 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_29_91, ((MR_Box) (ll_backend__tag_switch__V_80_80)));
                }
#line 904 "tag_switch.m"
                {
#line 904 "tag_switch.m"
                  ll_backend__tag_switch__PrevTestsCode1_29 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_29_91, ll_backend__tag_switch__PrevTestsCode0_4, ll_backend__tag_switch__TestCode_79);
                }
#line 871 "tag_switch.m"
                /* direct tailcall eliminated */
#line 871 "tag_switch.m"
                {
#line 871 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__HeadVar__1__tmp_copy_1 = ll_backend__tag_switch__Cases_19;
#line 871 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevTestsCode0__tmp_copy_4 = ll_backend__tag_switch__PrevTestsCode1_29;

#line 871 "tag_switch.m"
                  ll_backend__tag_switch__PrevTestsCode0_4 = ll_backend__tag_switch__PrevTestsCode0__tmp_copy_4;
#line 871 "tag_switch.m"
                  ll_backend__tag_switch__HeadVar__1_1 = ll_backend__tag_switch__HeadVar__1__tmp_copy_1;
#line 871 "tag_switch.m"
                }
#line 871 "tag_switch.m"
                continue;
#line 868 "tag_switch.m"
              }
#line 865 "tag_switch.m"
          }
#line 862 "tag_switch.m"
      }
#line 862 "tag_switch.m"
      break;
#line 862 "tag_switch.m"
    }
#line 858 "tag_switch.m"
}

#line 834 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(
#line 834 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CaseLabel_9,
#line 834 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_10,
#line 834 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__Secondary_11,
#line 834 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_12,
#line 834 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_19,
#line 834 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_20,
#line 834 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_21,
#line 834 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_22)
#line 834 "tag_switch.m"
{
#line 839 "tag_switch.m"
  {
#line 839 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 839 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_37_37;
#line 839 "tag_switch.m"
    MR_Word ll_backend__tag_switch__CaseCode_15;
#line 839 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ElseLabel_16;
#line 839 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestCode_17;
#line 839 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ElseLabelCode_18;
#line 839 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_25_25;
#line 839 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_26_26;
#line 839 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_27_27;
#line 839 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_29_29;
#line 839 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_30_30;
#line 839 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_31_31;
#line 839 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_33_33;
#line 839 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_34_34;
#line 839 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_36_36;

#line 840 "tag_switch.m"
    {
#line 840 "tag_switch.m"
      ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_9, &ll_backend__tag_switch__CaseCode_15, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_19, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_20);
    }
#line 842 "tag_switch.m"
    {
#line 842 "tag_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__ElseLabel_16, ll_backend__tag_switch__STATE_VARIABLE_CI_0_21, ll_backend__tag_switch__STATE_VARIABLE_CI_22);
    }
#line 2839 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 845 "tag_switch.m"
    {
#line 845 "tag_switch.m"
      ll_backend__tag_switch__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 845 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_30_30, 0) = ((MR_Box) (ll_backend__tag_switch__Secondary_11));
#line 845 "tag_switch.m"
    }
#line 845 "tag_switch.m"
    {
#line 845 "tag_switch.m"
      ll_backend__tag_switch__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 845 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_29_29, 1) = ((MR_Box) (ll_backend__tag_switch__V_30_30));
#line 845 "tag_switch.m"
    }
#line 845 "tag_switch.m"
    {
#line 845 "tag_switch.m"
      ll_backend__tag_switch__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 845 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 845 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 845 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_27_27, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_10));
#line 845 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_27_27, 3) = ((MR_Box) (ll_backend__tag_switch__V_29_29));
#line 845 "tag_switch.m"
    }
#line 846 "tag_switch.m"
    {
#line 846 "tag_switch.m"
      ll_backend__tag_switch__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 846 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_31_31, 0) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_16));
#line 846 "tag_switch.m"
    }
#line 845 "tag_switch.m"
    {
#line 845 "tag_switch.m"
      ll_backend__tag_switch__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 845 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 845 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_26_26, 1) = ((MR_Box) (ll_backend__tag_switch__V_27_27));
#line 845 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_26_26, 2) = ((MR_Box) (ll_backend__tag_switch__V_31_31));
#line 845 "tag_switch.m"
    }
#line 844 "tag_switch.m"
    {
#line 844 "tag_switch.m"
      ll_backend__tag_switch__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 844 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_25_25, 0) = ((MR_Box) (ll_backend__tag_switch__V_26_26));
#line 844 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_25_25, 1) = ((MR_Box) ((MR_String) "test sec tag only"));
#line 844 "tag_switch.m"
    }
#line 843 "tag_switch.m"
    {
#line 843 "tag_switch.m"
      ll_backend__tag_switch__TestCode_17 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_37_37, ((MR_Box) (ll_backend__tag_switch__V_25_25)));
    }
#line 850 "tag_switch.m"
    {
#line 850 "tag_switch.m"
      ll_backend__tag_switch__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 850 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 850 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_34_34, 1) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_16));
#line 850 "tag_switch.m"
    }
#line 850 "tag_switch.m"
    {
#line 850 "tag_switch.m"
      ll_backend__tag_switch__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 850 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_33_33, 0) = ((MR_Box) (ll_backend__tag_switch__V_34_34));
#line 850 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_33_33, 1) = ((MR_Box) ((MR_String) "handle next secondary tag"));
#line 850 "tag_switch.m"
    }
#line 849 "tag_switch.m"
    {
#line 849 "tag_switch.m"
      ll_backend__tag_switch__ElseLabelCode_18 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_37_37, ((MR_Box) (ll_backend__tag_switch__V_33_33)));
    }
#line 852 "tag_switch.m"
    {
#line 852 "tag_switch.m"
      ll_backend__tag_switch__V_36_36 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_37_37, ll_backend__tag_switch__CaseCode_15, ll_backend__tag_switch__ElseLabelCode_18);
    }
#line 852 "tag_switch.m"
    {
#line 852 "tag_switch.m"
      *ll_backend__tag_switch__Code_12 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_37_37, ll_backend__tag_switch__TestCode_17, ll_backend__tag_switch__V_36_36);
    }
#line 839 "tag_switch.m"
  }
#line 834 "tag_switch.m"
}

#line 800 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(
#line 800 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 800 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagRval_2,
#line 800 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_3,
#line 800 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_4,
#line 800 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5,
#line 800 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6,
#line 800 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_7,
#line 800 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_8)
#line 800 "tag_switch.m"
{
#line 805 "tag_switch.m"
  {
#line 805 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 805 "tag_switch.m"
    if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 805 "tag_switch.m"
      {
#line 806 "tag_switch.m"
        {
#line 806 "tag_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_secondary_try_me_else_chain\'/8", (MR_String) "empty switch");
#line 806 "tag_switch.m"
          return;
        }
#line 805 "tag_switch.m"
      }
#line 805 "tag_switch.m"
    else
#line 808 "tag_switch.m"
      {
#line 808 "tag_switch.m"
        MR_Word ll_backend__tag_switch__Case_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 808 "tag_switch.m"
        MR_Word ll_backend__tag_switch__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 808 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__Secondary_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Case_21, (MR_Integer) 0)));
#line 808 "tag_switch.m"
        MR_Word ll_backend__tag_switch__CaseLabel_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Case_21, (MR_Integer) 1)));

#line 817 "tag_switch.m"
        if ((ll_backend__tag_switch__Cases_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 828 "tag_switch.m"
          if ((ll_backend__tag_switch__MaybeFailLabel_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 829 "tag_switch.m"
            {
#line 830 "tag_switch.m"
              {
#line 830 "tag_switch.m"
                ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_29, ll_backend__tag_switch__Code_4, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6);
              }
#line 829 "tag_switch.m"
              *ll_backend__tag_switch__STATE_VARIABLE_CI_8 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_7;
#line 829 "tag_switch.m"
            }
#line 828 "tag_switch.m"
          else
#line 820 "tag_switch.m"
            {
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__TypeCtorInfo_55_55;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__TypeCtorInfo_37_84;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__FailLabel_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_3, (MR_Integer) 0)));
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__FailCode_35;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_43_43;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_44_44;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_45_45;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__ThisCode_51;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__CaseCode_66;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__ElseLabel_67;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__TestCode_68;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__ElseLabelCode_69;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_72_72;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_73_73;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_74_74;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_76_76;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_77_77;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_78_78;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_80_80;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_81_81;
#line 820 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_83_83;

#line 840 "tag_switch.m"
              {
#line 840 "tag_switch.m"
                ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_29, &ll_backend__tag_switch__CaseCode_66, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6);
              }
#line 842 "tag_switch.m"
              {
#line 842 "tag_switch.m"
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__ElseLabel_67, ll_backend__tag_switch__STATE_VARIABLE_CI_0_7, ll_backend__tag_switch__STATE_VARIABLE_CI_8);
              }
#line 3072 "ll_backend.tag_switch.c"
              ll_backend__tag_switch__TypeCtorInfo_37_84 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 845 "tag_switch.m"
              {
#line 845 "tag_switch.m"
                ll_backend__tag_switch__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 845 "tag_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_77_77, 0) = ((MR_Box) (ll_backend__tag_switch__Secondary_28));
#line 845 "tag_switch.m"
              }
#line 845 "tag_switch.m"
              {
#line 845 "tag_switch.m"
                ll_backend__tag_switch__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 845 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_76_76, 1) = ((MR_Box) (ll_backend__tag_switch__V_77_77));
#line 845 "tag_switch.m"
              }
#line 845 "tag_switch.m"
              {
#line 845 "tag_switch.m"
                ll_backend__tag_switch__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 845 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 845 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 845 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_74_74, 2) = ((MR_Box) (ll_backend__tag_switch__StagRval_2));
#line 845 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_74_74, 3) = ((MR_Box) (ll_backend__tag_switch__V_76_76));
#line 845 "tag_switch.m"
              }
#line 846 "tag_switch.m"
              {
#line 846 "tag_switch.m"
                ll_backend__tag_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 846 "tag_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_78_78, 0) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_67));
#line 846 "tag_switch.m"
              }
#line 845 "tag_switch.m"
              {
#line 845 "tag_switch.m"
                ll_backend__tag_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 845 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 845 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_73_73, 1) = ((MR_Box) (ll_backend__tag_switch__V_74_74));
#line 845 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_73_73, 2) = ((MR_Box) (ll_backend__tag_switch__V_78_78));
#line 845 "tag_switch.m"
              }
#line 844 "tag_switch.m"
              {
#line 844 "tag_switch.m"
                ll_backend__tag_switch__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 844 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_72_72, 0) = ((MR_Box) (ll_backend__tag_switch__V_73_73));
#line 844 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_72_72, 1) = ((MR_Box) ((MR_String) "test sec tag only"));
#line 844 "tag_switch.m"
              }
#line 843 "tag_switch.m"
              {
#line 843 "tag_switch.m"
                ll_backend__tag_switch__TestCode_68 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_37_84, ((MR_Box) (ll_backend__tag_switch__V_72_72)));
              }
#line 850 "tag_switch.m"
              {
#line 850 "tag_switch.m"
                ll_backend__tag_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 850 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 850 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_81_81, 1) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_67));
#line 850 "tag_switch.m"
              }
#line 850 "tag_switch.m"
              {
#line 850 "tag_switch.m"
                ll_backend__tag_switch__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 850 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_80_80, 0) = ((MR_Box) (ll_backend__tag_switch__V_81_81));
#line 850 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_80_80, 1) = ((MR_Box) ((MR_String) "handle next secondary tag"));
#line 850 "tag_switch.m"
              }
#line 849 "tag_switch.m"
              {
#line 849 "tag_switch.m"
                ll_backend__tag_switch__ElseLabelCode_69 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_37_84, ((MR_Box) (ll_backend__tag_switch__V_80_80)));
              }
#line 852 "tag_switch.m"
              {
#line 852 "tag_switch.m"
                ll_backend__tag_switch__V_83_83 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_37_84, ll_backend__tag_switch__CaseCode_66, ll_backend__tag_switch__ElseLabelCode_69);
              }
#line 852 "tag_switch.m"
              {
#line 852 "tag_switch.m"
                ll_backend__tag_switch__ThisCode_51 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_37_84, ll_backend__tag_switch__TestCode_68, ll_backend__tag_switch__V_83_83);
              }
#line 3176 "ll_backend.tag_switch.c"
              ll_backend__tag_switch__TypeCtorInfo_55_55 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 824 "tag_switch.m"
              {
#line 824 "tag_switch.m"
                ll_backend__tag_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 824 "tag_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_45_45, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_34));
#line 824 "tag_switch.m"
              }
#line 824 "tag_switch.m"
              {
#line 824 "tag_switch.m"
                ll_backend__tag_switch__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 824 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 1) = ((MR_Box) (ll_backend__tag_switch__V_45_45));
#line 824 "tag_switch.m"
              }
#line 824 "tag_switch.m"
              {
#line 824 "tag_switch.m"
                ll_backend__tag_switch__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 824 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_43_43, 0) = ((MR_Box) (ll_backend__tag_switch__V_44_44));
#line 824 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_43_43, 1) = ((MR_Box) ((MR_String) "secondary tag does not match"));
#line 824 "tag_switch.m"
              }
#line 823 "tag_switch.m"
              {
#line 823 "tag_switch.m"
                ll_backend__tag_switch__FailCode_35 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_55_55, ((MR_Box) (ll_backend__tag_switch__V_43_43)));
              }
#line 827 "tag_switch.m"
              {
#line 827 "tag_switch.m"
                *ll_backend__tag_switch__Code_4 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_55_55, ll_backend__tag_switch__ThisCode_51, ll_backend__tag_switch__FailCode_35);
              }
#line 820 "tag_switch.m"
            }
#line 817 "tag_switch.m"
        else
#line 811 "tag_switch.m"
          {
#line 811 "tag_switch.m"
            MR_Word ll_backend__tag_switch__ThisCode_32;
#line 811 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherCode_33;
#line 811 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_47_47;
#line 811 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_48_48;

#line 812 "tag_switch.m"
            {
#line 812 "tag_switch.m"
              ll_backend__tag_switch__generate_secondary_try_me_else_chain_case_8_p_0(ll_backend__tag_switch__CaseLabel_29, ll_backend__tag_switch__StagRval_2, ll_backend__tag_switch__Secondary_28, &ll_backend__tag_switch__ThisCode_32, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_5, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_47_47, ll_backend__tag_switch__STATE_VARIABLE_CI_0_7, &ll_backend__tag_switch__STATE_VARIABLE_CI_48_48);
            }
#line 814 "tag_switch.m"
            {
#line 814 "tag_switch.m"
              ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(ll_backend__tag_switch__Cases_22, ll_backend__tag_switch__StagRval_2, ll_backend__tag_switch__MaybeFailLabel_3, &ll_backend__tag_switch__OtherCode_33, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_47_47, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_6, ll_backend__tag_switch__STATE_VARIABLE_CI_48_48, ll_backend__tag_switch__STATE_VARIABLE_CI_8);
            }
#line 816 "tag_switch.m"
            {
#line 816 "tag_switch.m"
              *ll_backend__tag_switch__Code_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__tag_switch__ThisCode_32, ll_backend__tag_switch__OtherCode_33);
            }
#line 811 "tag_switch.m"
          }
#line 808 "tag_switch.m"
      }
#line 805 "tag_switch.m"
  }
#line 800 "tag_switch.m"
}

#line 702 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1(
#line 702 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 702 "tag_switch.m"
{
#line 702 "tag_switch.m"
  {
#line 702 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 702 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 702 "tag_switch.m"
    {
#line 702 "tag_switch.m"
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_tag_code__702__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 702 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 702 "tag_switch.m"
  }
#line 702 "tag_switch.m"
}

#line 669 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_tag_code_13_p_0(
#line 669 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagGoalMap_14,
#line 669 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_15,
#line 669 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_16,
#line 669 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_17,
#line 669 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 669 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagLoc_19,
#line 669 "tag_switch.m"
  MR_Word ll_backend__tag_switch__Rval_20,
#line 669 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_21,
#line 669 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 669 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48,
#line 669 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49,
#line 669 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_50,
#line 669 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_51)
#line 669 "tag_switch.m"
{
#line 676 "tag_switch.m"
  {
#line 676 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 676 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagGoalList_25;

#line 677 "tag_switch.m"
    {
#line 677 "tag_switch.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__tag_switch__StagGoalMap_14, &ll_backend__tag_switch__StagGoalList_25);
    }
#line 698 "tag_switch.m"
#line 698 "tag_switch.m"
    switch (ll_backend__tag_switch__StagLoc_19) {
#line 698 "tag_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 698 "tag_switch.m"
      case (MR_Integer) 2:
#line 698 "tag_switch.m"
      case (MR_Integer) 3:
#line 701 "tag_switch.m"
        {
#line 701 "tag_switch.m"
          MR_Word ll_backend__tag_switch__Globals_31;
#line 701 "tag_switch.m"
          MR_Integer ll_backend__tag_switch__DenseSwitchSize_32;
#line 701 "tag_switch.m"
          MR_Integer ll_backend__tag_switch__BinarySwitchSize_33;
#line 701 "tag_switch.m"
          MR_Integer ll_backend__tag_switch__TrySwitchSize_34;
#line 701 "tag_switch.m"
          MR_Word ll_backend__tag_switch__OrigStagRval_36;
#line 701 "tag_switch.m"
          MR_String ll_backend__tag_switch__Comment_37;
#line 701 "tag_switch.m"
          MR_Word ll_backend__tag_switch__MaybeSecFailLabel_45;
#line 701 "tag_switch.m"
          MR_Word ll_backend__tag_switch__V_52_52;

#line 702 "tag_switch.m"
          {
#line 702 "tag_switch.m"
            ll_backend__tag_switch__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 702 "tag_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[5]));
#line 702 "tag_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_tag_code_13_p_0_1));
#line 702 "tag_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 702 "tag_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 3) = ((MR_Box) (ll_backend__tag_switch__OtherPtags_16));
#line 702 "tag_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_52_52, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "tag_switch.m"
          }
#line 702 "tag_switch.m"
          {
#line 702 "tag_switch.m"
            mercury__require__expect_4_p_0(ll_backend__tag_switch__V_52_52, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) ">1 ptag with secondary tag");
          }
#line 706 "tag_switch.m"
          {
#line 706 "tag_switch.m"
            ll_backend__code_info__get_globals_2_p_0(ll_backend__tag_switch__STATE_VARIABLE_CI_0_50, &ll_backend__tag_switch__Globals_31);
          }
#line 707 "tag_switch.m"
          {
#line 707 "tag_switch.m"
            libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_31, (MR_Integer) 429, &ll_backend__tag_switch__DenseSwitchSize_32);
          }
#line 709 "tag_switch.m"
          {
#line 709 "tag_switch.m"
            libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_31, (MR_Integer) 436, &ll_backend__tag_switch__BinarySwitchSize_33);
          }
#line 711 "tag_switch.m"
          {
#line 711 "tag_switch.m"
            libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_31, (MR_Integer) 435, &ll_backend__tag_switch__TrySwitchSize_34);
          }
#line 727 "tag_switch.m"
#line 727 "tag_switch.m"
          switch (ll_backend__tag_switch__StagLoc_19) {
#line 727 "tag_switch.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 727 "tag_switch.m"
            case (MR_Integer) 2:
#line 728 "tag_switch.m"
              {
#line 729 "tag_switch.m"
                {
#line 729 "tag_switch.m"
                  ll_backend__tag_switch__OrigStagRval_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 729 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__OrigStagRval_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 729 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__OrigStagRval_36, 1) = ((MR_Box) ((MR_Integer) 5));
#line 729 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__OrigStagRval_36, 2) = ((MR_Box) (ll_backend__tag_switch__Rval_20));
#line 729 "tag_switch.m"
                }
#line 730 "tag_switch.m"
                ll_backend__tag_switch__Comment_37 = (MR_String) "compute local sec tag to switch on";
#line 728 "tag_switch.m"
              }
#line 727 "tag_switch.m"
              break;
#line 727 "tag_switch.m"
            case (MR_Integer) 3:
#line 723 "tag_switch.m"
              {
#line 723 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_61_61;
#line 723 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_62_62;

#line 724 "tag_switch.m"
                {
#line 724 "tag_switch.m"
                  ll_backend__tag_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 724 "tag_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_62_62, 0) = ((MR_Box) (ll_backend__tag_switch__MainPtag_15));
#line 724 "tag_switch.m"
                }
#line 724 "tag_switch.m"
                {
#line 724 "tag_switch.m"
                  ll_backend__tag_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 724 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 724 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 1) = ((MR_Box) (ll_backend__tag_switch__V_62_62));
#line 724 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 2) = ((MR_Box) (ll_backend__tag_switch__Rval_20));
#line 724 "tag_switch.m"
                  MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_61_61, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__tag_switch_scalar_common_2[8])));
#line 724 "tag_switch.m"
                }
#line 724 "tag_switch.m"
                {
#line 724 "tag_switch.m"
                  ll_backend__tag_switch__OrigStagRval_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 724 "tag_switch.m"
                  MR_hl_field(MR_mktag(0), ll_backend__tag_switch__OrigStagRval_36, 0) = ((MR_Box) (ll_backend__tag_switch__V_61_61));
#line 724 "tag_switch.m"
                }
#line 726 "tag_switch.m"
                ll_backend__tag_switch__Comment_37 = (MR_String) "compute remote sec tag to switch on";
#line 723 "tag_switch.m"
              }
#line 727 "tag_switch.m"
              break;
#line 727 "tag_switch.m"
          }
#line 766 "tag_switch.m"
          if ((ll_backend__tag_switch__MaybeFailLabel_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 767 "tag_switch.m"
            ll_backend__tag_switch__MaybeSecFailLabel_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 766 "tag_switch.m"
          else
#line 757 "tag_switch.m"
            {
#line 758 "tag_switch.m"
              MR_Integer ll_backend__tag_switch__StagGoalCount_43;
#line 758 "tag_switch.m"
              MR_Integer ll_backend__tag_switch__FullGoalCount_44;

#line 758 "tag_switch.m"
              {
#line 758 "tag_switch.m"
                mercury__list__length_2_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[2], ll_backend__tag_switch__StagGoalList_25, &ll_backend__tag_switch__StagGoalCount_43);
              }
#line 759 "tag_switch.m"
              ll_backend__tag_switch__FullGoalCount_44 = (ll_backend__tag_switch__MaxSecondary_17 + (MR_Integer) 1);
#line 760 "tag_switch.m"
              ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__FullGoalCount_44 == ll_backend__tag_switch__StagGoalCount_43);
#line 757 "tag_switch.m"
              if (ll_backend__tag_switch__succeeded)
#line 762 "tag_switch.m"
                ll_backend__tag_switch__MaybeSecFailLabel_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 757 "tag_switch.m"
              else
#line 764 "tag_switch.m"
                ll_backend__tag_switch__MaybeSecFailLabel_45 = ll_backend__tag_switch__MaybeFailLabel_21;
#line 757 "tag_switch.m"
            }
#line 712 "tag_switch.m"
          ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MaxSecondary_17 >= ll_backend__tag_switch__DenseSwitchSize_32);
#line 3501 "ll_backend.tag_switch.c"
          if (ll_backend__tag_switch__succeeded)
#line 3503 "ll_backend.tag_switch.c"
            {
#line 3505 "ll_backend.tag_switch.c"
              MR_Word ll_backend__tag_switch__Targets_46;
#line 3507 "ll_backend.tag_switch.c"
              MR_Word ll_backend__tag_switch__V_83_83;
#line 3509 "ll_backend.tag_switch.c"
              MR_Word ll_backend__tag_switch__V_84_84;
#line 752 "tag_switch.m"
              MR_Word ll_backend__tag_switch__StagCode_111;

#line 752 "tag_switch.m"
              {
#line 752 "tag_switch.m"
                ll_backend__tag_switch__StagCode_111 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 773 "tag_switch.m"
              {
#line 773 "tag_switch.m"
                ll_backend__tag_switch__generate_secondary_jump_table_5_p_0(ll_backend__tag_switch__StagGoalList_25, (MR_Integer) 0, ll_backend__tag_switch__MaxSecondary_17, ll_backend__tag_switch__MaybeSecFailLabel_45, &ll_backend__tag_switch__Targets_46);
              }
#line 776 "tag_switch.m"
              {
#line 776 "tag_switch.m"
                ll_backend__tag_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 776 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 776 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 1) = ((MR_Box) (ll_backend__tag_switch__OrigStagRval_36));
#line 776 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_84_84, 2) = ((MR_Box) (ll_backend__tag_switch__Targets_46));
#line 776 "tag_switch.m"
              }
#line 776 "tag_switch.m"
              {
#line 776 "tag_switch.m"
                ll_backend__tag_switch__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 776 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_83_83, 0) = ((MR_Box) (ll_backend__tag_switch__V_84_84));
#line 776 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_83_83, 1) = ((MR_Box) ((MR_String) "switch on secondary tag"));
#line 776 "tag_switch.m"
              }
#line 775 "tag_switch.m"
              {
#line 775 "tag_switch.m"
                *ll_backend__tag_switch__Code_22 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_83_83)));
              }
#line 772 "tag_switch.m"
              *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48;
#line 772 "tag_switch.m"
              *ll_backend__tag_switch__STATE_VARIABLE_CI_51 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_50;
#line 3555 "ll_backend.tag_switch.c"
            }
#line 3557 "ll_backend.tag_switch.c"
          else
#line 3559 "ll_backend.tag_switch.c"
            {
#line 3561 "ll_backend.tag_switch.c"
              MR_Word ll_backend__tag_switch__StagCode_122;
#line 3563 "ll_backend.tag_switch.c"
              MR_Word ll_backend__tag_switch__StagRval_123;
#line 734 "tag_switch.m"
              MR_Integer ll_backend__tag_switch__NumRealRegs_38;
#line 734 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_67_67;

#line 735 "tag_switch.m"
              ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MaxSecondary_17 >= (MR_Integer) 2);
#line 734 "tag_switch.m"
              if (ll_backend__tag_switch__succeeded)
#line 734 "tag_switch.m"
                {
#line 736 "tag_switch.m"
                  ll_backend__tag_switch__V_67_67 = (MR_Integer) 304;
#line 736 "tag_switch.m"
                  {
#line 736 "tag_switch.m"
                    libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_31, ll_backend__tag_switch__V_67_67, &ll_backend__tag_switch__NumRealRegs_38);
                  }
#line 738 "tag_switch.m"
                  ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__NumRealRegs_38 == (MR_Integer) 0);
#line 739 "tag_switch.m"
                  if (!(ll_backend__tag_switch__succeeded))
#line 740 "tag_switch.m"
                    {
#line 740 "tag_switch.m"
                      MR_Integer ll_backend__tag_switch__StagRegNo_39;
#line 740 "tag_switch.m"
                      MR_Word ll_backend__tag_switch__V_68_68;

#line 740 "tag_switch.m"
                      ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__StagReg_18)) == (MR_mktag((MR_Integer) 1)));
#line 740 "tag_switch.m"
                      if (ll_backend__tag_switch__succeeded)
#line 740 "tag_switch.m"
                        {
#line 740 "tag_switch.m"
                          ll_backend__tag_switch__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagReg_18, (MR_Integer) 0)));
#line 740 "tag_switch.m"
                          ll_backend__tag_switch__StagRegNo_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagReg_18, (MR_Integer) 1)));
#line 740 "tag_switch.m"
                          ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__V_68_68 == (MR_Integer) 0);
#line 740 "tag_switch.m"
                        }
#line 740 "tag_switch.m"
                      if (ll_backend__tag_switch__succeeded)
#line 741 "tag_switch.m"
                        ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__StagRegNo_39 <= ll_backend__tag_switch__NumRealRegs_38);
#line 740 "tag_switch.m"
                      else
#line 743 "tag_switch.m"
                        {
#line 743 "tag_switch.m"
                          {
#line 743 "tag_switch.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "improper reg in tag switch");
#line 743 "tag_switch.m"
                            return;
                          }
#line 743 "tag_switch.m"
                          ll_backend__tag_switch__succeeded = MR_TRUE;
#line 743 "tag_switch.m"
                        }
#line 740 "tag_switch.m"
                    }
#line 734 "tag_switch.m"
                }
#line 733 "tag_switch.m"
              if (ll_backend__tag_switch__succeeded)
#line 749 "tag_switch.m"
                {
#line 749 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_113_113;
#line 749 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_114_114;

#line 748 "tag_switch.m"
                  {
#line 748 "tag_switch.m"
                    ll_backend__tag_switch__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 748 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 748 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_114_114, 1) = ((MR_Box) (ll_backend__tag_switch__StagReg_18));
#line 748 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_114_114, 2) = ((MR_Box) (ll_backend__tag_switch__OrigStagRval_36));
#line 748 "tag_switch.m"
                  }
#line 748 "tag_switch.m"
                  {
#line 748 "tag_switch.m"
                    ll_backend__tag_switch__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 748 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_113_113, 0) = ((MR_Box) (ll_backend__tag_switch__V_114_114));
#line 748 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_113_113, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_37));
#line 748 "tag_switch.m"
                  }
#line 747 "tag_switch.m"
                  {
#line 747 "tag_switch.m"
                    ll_backend__tag_switch__StagCode_122 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_113_113)));
                  }
#line 750 "tag_switch.m"
                  {
#line 750 "tag_switch.m"
                    ll_backend__tag_switch__StagRval_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 750 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__StagRval_123, 0) = ((MR_Box) (ll_backend__tag_switch__StagReg_18));
#line 750 "tag_switch.m"
                  }
#line 749 "tag_switch.m"
                }
#line 733 "tag_switch.m"
              else
#line 752 "tag_switch.m"
                {
#line 752 "tag_switch.m"
                  {
#line 752 "tag_switch.m"
                    ll_backend__tag_switch__StagCode_122 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 753 "tag_switch.m"
                  ll_backend__tag_switch__StagRval_123 = ll_backend__tag_switch__OrigStagRval_36;
#line 752 "tag_switch.m"
                }
#line 714 "tag_switch.m"
              ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MaxSecondary_17 >= ll_backend__tag_switch__BinarySwitchSize_33);
#line 3692 "ll_backend.tag_switch.c"
              if (ll_backend__tag_switch__succeeded)
#line 3694 "ll_backend.tag_switch.c"
                {
#line 781 "tag_switch.m"
                  {
#line 781 "tag_switch.m"
                    ll_backend__tag_switch__generate_secondary_binary_search_10_p_0(ll_backend__tag_switch__StagGoalList_25, (MR_Integer) 0, ll_backend__tag_switch__MaxSecondary_17, ll_backend__tag_switch__StagRval_123, ll_backend__tag_switch__MaybeSecFailLabel_45, ll_backend__tag_switch__Code_22, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49, ll_backend__tag_switch__STATE_VARIABLE_CI_0_50, ll_backend__tag_switch__STATE_VARIABLE_CI_51);
                  }
#line 3701 "ll_backend.tag_switch.c"
                }
#line 3703 "ll_backend.tag_switch.c"
              else
#line 3705 "ll_backend.tag_switch.c"
                {
#line 716 "tag_switch.m"
                  ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MaxSecondary_17 >= ll_backend__tag_switch__TrySwitchSize_34);
#line 3709 "ll_backend.tag_switch.c"
                  if (ll_backend__tag_switch__succeeded)
#line 3711 "ll_backend.tag_switch.c"
                    {
#line 3713 "ll_backend.tag_switch.c"
                      MR_Word ll_backend__tag_switch__TypeCtorInfo_107_107 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 3715 "ll_backend.tag_switch.c"
                      MR_Word ll_backend__tag_switch__Codes_47;
#line 3717 "ll_backend.tag_switch.c"
                      MR_Word ll_backend__tag_switch__V_77_77;

#line 786 "tag_switch.m"
                      {
#line 786 "tag_switch.m"
                        ll_backend__tag_switch__V_77_77 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_107_107);
                      }
#line 785 "tag_switch.m"
                      {
#line 785 "tag_switch.m"
                        ll_backend__tag_switch__generate_secondary_try_chain_7_p_0(ll_backend__tag_switch__StagGoalList_25, ll_backend__tag_switch__StagRval_123, ll_backend__tag_switch__MaybeSecFailLabel_45, ll_backend__tag_switch__V_77_77, &ll_backend__tag_switch__Codes_47, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49);
                      }
#line 787 "tag_switch.m"
                      {
#line 787 "tag_switch.m"
                        *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_107_107, ll_backend__tag_switch__StagCode_122, ll_backend__tag_switch__Codes_47);
                      }
#line 784 "tag_switch.m"
                      *ll_backend__tag_switch__STATE_VARIABLE_CI_51 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_50;
#line 3737 "ll_backend.tag_switch.c"
                    }
#line 3739 "ll_backend.tag_switch.c"
                  else
#line 3741 "ll_backend.tag_switch.c"
                    {
#line 3743 "ll_backend.tag_switch.c"
                      MR_Word ll_backend__tag_switch__Codes_99;

#line 790 "tag_switch.m"
                      {
#line 790 "tag_switch.m"
                        ll_backend__tag_switch__generate_secondary_try_me_else_chain_8_p_0(ll_backend__tag_switch__StagGoalList_25, ll_backend__tag_switch__StagRval_123, ll_backend__tag_switch__MaybeSecFailLabel_45, &ll_backend__tag_switch__Codes_99, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49, ll_backend__tag_switch__STATE_VARIABLE_CI_0_50, ll_backend__tag_switch__STATE_VARIABLE_CI_51);
                      }
#line 792 "tag_switch.m"
                      {
#line 792 "tag_switch.m"
                        *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__tag_switch__StagCode_122, ll_backend__tag_switch__Codes_99);
                      }
#line 3756 "ll_backend.tag_switch.c"
                    }
#line 3758 "ll_backend.tag_switch.c"
                }
#line 3760 "ll_backend.tag_switch.c"
            }
#line 701 "tag_switch.m"
        }
#line 698 "tag_switch.m"
        break;
#line 698 "tag_switch.m"
      case (MR_Integer) 0:
#line 698 "tag_switch.m"
      case (MR_Integer) 1:
#line 681 "tag_switch.m"
        {
#line 686 "tag_switch.m"
          if ((ll_backend__tag_switch__StagGoalList_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 684 "tag_switch.m"
            {
#line 685 "tag_switch.m"
              {
#line 685 "tag_switch.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "no goal for non-shared tag");
#line 685 "tag_switch.m"
                return;
              }
#line 684 "tag_switch.m"
            }
#line 686 "tag_switch.m"
          else
#line 686 "tag_switch.m"
            {
#line 686 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagGoalList_25, (MR_Integer) 1)));
#line 686 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__StagGoalList_25, (MR_Integer) 0)));

#line 686 "tag_switch.m"
              if ((ll_backend__tag_switch__V_109_109 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 688 "tag_switch.m"
                {
#line 688 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__CaseLabel_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_110_110, (MR_Integer) 1)));
#line 688 "tag_switch.m"
                  MR_Integer ll_backend__tag_switch__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_110_110, (MR_Integer) 0)));

#line 688 "tag_switch.m"
                  ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__V_91_91 == (MR_Integer) -1);
#line 688 "tag_switch.m"
                  if (ll_backend__tag_switch__succeeded)
#line 689 "tag_switch.m"
                    {
#line 689 "tag_switch.m"
                      ll_backend__switch_case__generate_case_code_or_jump_4_p_0(ll_backend__tag_switch__CaseLabel_27, ll_backend__tag_switch__Code_22, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_49);
                    }
#line 688 "tag_switch.m"
                  else
#line 691 "tag_switch.m"
                    {
#line 691 "tag_switch.m"
                      {
#line 691 "tag_switch.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "badly formed goal for non-shared tag");
#line 691 "tag_switch.m"
                        return;
                      }
#line 691 "tag_switch.m"
                    }
#line 688 "tag_switch.m"
                }
#line 686 "tag_switch.m"
              else
#line 695 "tag_switch.m"
                {
#line 696 "tag_switch.m"
                  {
#line 696 "tag_switch.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_tag_code\'/13", (MR_String) "more than one goal for non-shared tag");
#line 696 "tag_switch.m"
                    return;
                  }
#line 695 "tag_switch.m"
                }
#line 686 "tag_switch.m"
            }
#line 681 "tag_switch.m"
          *ll_backend__tag_switch__STATE_VARIABLE_CI_51 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_50;
#line 681 "tag_switch.m"
        }
#line 698 "tag_switch.m"
        break;
#line 698 "tag_switch.m"
    }
#line 676 "tag_switch.m"
  }
#line 669 "tag_switch.m"
}

#line 631 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_3(
#line 631 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 631 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1)
#line 631 "tag_switch.m"
{
#line 631 "tag_switch.m"
  {
#line 631 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 631 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 631 "tag_switch.m"
    {
#line 631 "tag_switch.m"
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__631__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__tag_switch__wrapper_arg_1));
    }
#line 631 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 631 "tag_switch.m"
  }
#line 631 "tag_switch.m"
}

#line 618 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2(
#line 618 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 618 "tag_switch.m"
{
#line 618 "tag_switch.m"
  {
#line 618 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 618 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 618 "tag_switch.m"
    {
#line 618 "tag_switch.m"
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__618__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 618 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 618 "tag_switch.m"
  }
#line 618 "tag_switch.m"
}

#line 613 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1(
#line 613 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 613 "tag_switch.m"
{
#line 613 "tag_switch.m"
  {
#line 613 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 613 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 613 "tag_switch.m"
    {
#line 613 "tag_switch.m"
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_binary_search__613__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 613 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 613 "tag_switch.m"
  }
#line 613 "tag_switch.m"
}

#line 585 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_binary_search_13_p_0(
#line 585 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 585 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MinPtag_15,
#line 585 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxPtag_16,
#line 585 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_17,
#line 585 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 585 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_19,
#line 585 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_20,
#line 585 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_21,
#line 585 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 585 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60,
#line 585 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61,
#line 585 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_62,
#line 585 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_63)
#line 585 "tag_switch.m"
{
#line 593 "tag_switch.m"
  {
#line 593 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__MinPtag_15 == ll_backend__tag_switch__MaxPtag_16);

#line 593 "tag_switch.m"
    if (ll_backend__tag_switch__succeeded)
#line 611 "tag_switch.m"
      if ((ll_backend__tag_switch__PtagGroups_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 596 "tag_switch.m"
        {
#line 605 "tag_switch.m"
          if ((ll_backend__tag_switch__MaybeFailLabel_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 606 "tag_switch.m"
            {
#line 609 "tag_switch.m"
              {
#line 609 "tag_switch.m"
                *ll_backend__tag_switch__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 606 "tag_switch.m"
            }
#line 605 "tag_switch.m"
          else
#line 599 "tag_switch.m"
            {
#line 599 "tag_switch.m"
              MR_Word ll_backend__tag_switch__FailLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_20, (MR_Integer) 0)));
#line 599 "tag_switch.m"
              MR_String ll_backend__tag_switch__PtagStr_27;
#line 599 "tag_switch.m"
              MR_String ll_backend__tag_switch__Comment_28;
#line 599 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_82_82;
#line 599 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_83_83;
#line 599 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_84_84;

#line 600 "tag_switch.m"
              {
#line 600 "tag_switch.m"
                mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MinPtag_15, &ll_backend__tag_switch__PtagStr_27);
              }
#line 601 "tag_switch.m"
              {
#line 601 "tag_switch.m"
                ll_backend__tag_switch__Comment_28 = mercury__string__f_43_43_2_f_0((MR_String) "no code for ptag ", ll_backend__tag_switch__PtagStr_27);
              }
#line 603 "tag_switch.m"
              {
#line 603 "tag_switch.m"
                ll_backend__tag_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 603 "tag_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_84_84, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_26));
#line 603 "tag_switch.m"
              }
#line 603 "tag_switch.m"
              {
#line 603 "tag_switch.m"
                ll_backend__tag_switch__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 603 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_83_83, 1) = ((MR_Box) (ll_backend__tag_switch__V_84_84));
#line 603 "tag_switch.m"
              }
#line 603 "tag_switch.m"
              {
#line 603 "tag_switch.m"
                ll_backend__tag_switch__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 603 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_82_82, 0) = ((MR_Box) (ll_backend__tag_switch__V_83_83));
#line 603 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_82_82, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_28));
#line 603 "tag_switch.m"
              }
#line 602 "tag_switch.m"
              {
#line 602 "tag_switch.m"
                *ll_backend__tag_switch__Code_22 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_82_82)));
              }
#line 599 "tag_switch.m"
            }
#line 596 "tag_switch.m"
          *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60;
#line 596 "tag_switch.m"
          *ll_backend__tag_switch__STATE_VARIABLE_CI_63 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_62;
#line 596 "tag_switch.m"
        }
#line 611 "tag_switch.m"
      else
#line 611 "tag_switch.m"
        {
#line 611 "tag_switch.m"
          MR_Word ll_backend__tag_switch__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagGroups_14, (MR_Integer) 1)));
#line 611 "tag_switch.m"
          MR_Word ll_backend__tag_switch__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagGroups_14, (MR_Integer) 0)));

#line 611 "tag_switch.m"
          if ((ll_backend__tag_switch__V_120_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "tag_switch.m"
            {
#line 612 "tag_switch.m"
              MR_Integer ll_backend__tag_switch__CurPrimaryPrime_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_121_121, (MR_Integer) 0)));
#line 612 "tag_switch.m"
              MR_Word ll_backend__tag_switch__PrimaryInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_121_121, (MR_Integer) 1)));
#line 612 "tag_switch.m"
              MR_Word ll_backend__tag_switch__StagLoc_31;
#line 612 "tag_switch.m"
              MR_Word ll_backend__tag_switch__StagGoalMap_32;
#line 612 "tag_switch.m"
              MR_Word ll_backend__tag_switch__CountInfo_33;
#line 612 "tag_switch.m"
              MR_Word ll_backend__tag_switch__StagLocPrime_34;
#line 612 "tag_switch.m"
              MR_Integer ll_backend__tag_switch__MaxSecondary_35;
#line 612 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_70_70;
#line 612 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_74_74;
#line 616 "tag_switch.m"
              MR_Box ll_backend__tag_switch__conv0_CountInfo_33;

#line 613 "tag_switch.m"
              {
#line 613 "tag_switch.m"
                ll_backend__tag_switch__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 613 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[3]));
#line 613 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_1));
#line 613 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 613 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 3) = ((MR_Box) (ll_backend__tag_switch__MinPtag_15));
#line 613 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_70_70, 4) = ((MR_Box) (ll_backend__tag_switch__CurPrimaryPrime_29));
#line 613 "tag_switch.m"
              }
#line 613 "tag_switch.m"
              {
#line 613 "tag_switch.m"
                mercury__require__expect_4_p_0(ll_backend__tag_switch__V_70_70, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "cur_primary mismatch");
              }
#line 615 "tag_switch.m"
              ll_backend__tag_switch__StagLoc_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PrimaryInfo_30, (MR_Integer) 0)));
#line 615 "tag_switch.m"
              ll_backend__tag_switch__StagGoalMap_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PrimaryInfo_30, (MR_Integer) 1)));
#line 616 "tag_switch.m"
              {
#line 616 "tag_switch.m"
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[1], ll_backend__tag_switch__PtagCountMap_21, ll_backend__tag_switch__MinPtag_15, &ll_backend__tag_switch__conv0_CountInfo_33);
              }
#line 616 "tag_switch.m"
              ll_backend__tag_switch__CountInfo_33 = ((MR_Word) ll_backend__tag_switch__conv0_CountInfo_33);
#line 617 "tag_switch.m"
              ll_backend__tag_switch__StagLocPrime_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_33, (MR_Integer) 0)));
#line 617 "tag_switch.m"
              ll_backend__tag_switch__MaxSecondary_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_33, (MR_Integer) 1)));
#line 618 "tag_switch.m"
              {
#line 618 "tag_switch.m"
                ll_backend__tag_switch__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 618 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
#line 618 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_2));
#line 618 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 618 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 3) = ((MR_Box) (ll_backend__tag_switch__StagLoc_31));
#line 618 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_74_74, 4) = ((MR_Box) (ll_backend__tag_switch__StagLocPrime_34));
#line 618 "tag_switch.m"
              }
#line 618 "tag_switch.m"
              {
#line 618 "tag_switch.m"
                mercury__require__expect_4_p_0(ll_backend__tag_switch__V_74_74, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "secondary tag locations differ");
              }
#line 620 "tag_switch.m"
              {
#line 620 "tag_switch.m"
                ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_32, ll_backend__tag_switch__MinPtag_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__tag_switch__MaxSecondary_35, ll_backend__tag_switch__StagReg_18, ll_backend__tag_switch__StagLoc_31, ll_backend__tag_switch__VarRval_19, ll_backend__tag_switch__MaybeFailLabel_20, ll_backend__tag_switch__Code_22, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61, ll_backend__tag_switch__STATE_VARIABLE_CI_0_62, ll_backend__tag_switch__STATE_VARIABLE_CI_63);
              }
#line 612 "tag_switch.m"
            }
#line 611 "tag_switch.m"
          else
#line 624 "tag_switch.m"
            {
#line 625 "tag_switch.m"
              {
#line 625 "tag_switch.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_binary_search\'/13", (MR_String) "caselist not singleton or empty when binary search ends");
#line 625 "tag_switch.m"
                return;
              }
#line 624 "tag_switch.m"
            }
#line 611 "tag_switch.m"
        }
#line 593 "tag_switch.m"
    else
#line 629 "tag_switch.m"
      {
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__TypeCtorInfo_119_119;
#line 629 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__LowRangeEnd_39;
#line 629 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__HighRangeStart_40;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__InLowGroup_41;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowGroups_45;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__HighGroups_46;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__NewLabel_47;
#line 629 "tag_switch.m"
        MR_String ll_backend__tag_switch__LowStartStr_48;
#line 629 "tag_switch.m"
        MR_String ll_backend__tag_switch__LowEndStr_49;
#line 629 "tag_switch.m"
        MR_String ll_backend__tag_switch__HighStartStr_50;
#line 629 "tag_switch.m"
        MR_String ll_backend__tag_switch__HighEndStr_51;
#line 629 "tag_switch.m"
        MR_String ll_backend__tag_switch__IfComment_52;
#line 629 "tag_switch.m"
        MR_String ll_backend__tag_switch__LabelComment_53;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowRangeEndConst_54;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__TestRval_55;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__IfCode_56;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LabelCode_57;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__LowRangeCode_58;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__HighRangeCode_59;
#line 629 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__V_85_85 = (ll_backend__tag_switch__MinPtag_15 + ll_backend__tag_switch__MaxPtag_16);
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_89_89;
#line 629 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_91_91;
#line 629 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_92_92;
#line 629 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_95_95;
#line 629 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_96_96;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_98_98;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_100_100;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_101_101;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_102_102;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_103_103;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_104_104;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_105_105;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_106_106;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_109_109;
#line 629 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_110_110;

#line 629 "tag_switch.m"
        {
#line 629 "tag_switch.m"
          ll_backend__tag_switch__LowRangeEnd_39 = mercury__int__f_47_47_2_f_0(ll_backend__tag_switch__V_85_85, (MR_Integer) 2);
        }
#line 630 "tag_switch.m"
        ll_backend__tag_switch__HighRangeStart_40 = (ll_backend__tag_switch__LowRangeEnd_39 + (MR_Integer) 1);
#line 631 "tag_switch.m"
        {
#line 631 "tag_switch.m"
          ll_backend__tag_switch__InLowGroup_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 631 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_41, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[4]));
#line 631 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_41, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_binary_search_13_p_0_3));
#line 631 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 631 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__InLowGroup_41, 3) = ((MR_Box) (ll_backend__tag_switch__LowRangeEnd_39));
#line 631 "tag_switch.m"
        }
#line 635 "tag_switch.m"
        {
#line 635 "tag_switch.m"
          mercury__list__filter_4_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[4], ll_backend__tag_switch__InLowGroup_41, ll_backend__tag_switch__PtagGroups_14, &ll_backend__tag_switch__LowGroups_45, &ll_backend__tag_switch__HighGroups_46);
        }
#line 636 "tag_switch.m"
        {
#line 636 "tag_switch.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__NewLabel_47, ll_backend__tag_switch__STATE_VARIABLE_CI_0_62, &ll_backend__tag_switch__STATE_VARIABLE_CI_89_89);
        }
#line 637 "tag_switch.m"
        {
#line 637 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MinPtag_15, &ll_backend__tag_switch__LowStartStr_48);
        }
#line 638 "tag_switch.m"
        {
#line 638 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__LowRangeEnd_39, &ll_backend__tag_switch__LowEndStr_49);
        }
#line 639 "tag_switch.m"
        {
#line 639 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__HighRangeStart_40, &ll_backend__tag_switch__HighStartStr_50);
        }
#line 640 "tag_switch.m"
        {
#line 640 "tag_switch.m"
          mercury__string__int_to_string_2_p_0(ll_backend__tag_switch__MaxPtag_16, &ll_backend__tag_switch__HighEndStr_51);
        }
#line 642 "tag_switch.m"
        {
#line 642 "tag_switch.m"
          ll_backend__tag_switch__V_92_92 = mercury__string__f_43_43_2_f_0((MR_String) " to ", ll_backend__tag_switch__LowEndStr_49);
        }
#line 642 "tag_switch.m"
        {
#line 642 "tag_switch.m"
          ll_backend__tag_switch__V_91_91 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__LowStartStr_48, ll_backend__tag_switch__V_92_92);
        }
#line 641 "tag_switch.m"
        {
#line 641 "tag_switch.m"
          ll_backend__tag_switch__IfComment_52 = mercury__string__f_43_43_2_f_0((MR_String) "fallthrough for ptags ", ll_backend__tag_switch__V_91_91);
        }
#line 644 "tag_switch.m"
        {
#line 644 "tag_switch.m"
          ll_backend__tag_switch__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) " to ", ll_backend__tag_switch__HighEndStr_51);
        }
#line 644 "tag_switch.m"
        {
#line 644 "tag_switch.m"
          ll_backend__tag_switch__V_95_95 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__HighStartStr_50, ll_backend__tag_switch__V_96_96);
        }
#line 643 "tag_switch.m"
        {
#line 643 "tag_switch.m"
          ll_backend__tag_switch__LabelComment_53 = mercury__string__f_43_43_2_f_0((MR_String) "code for ptags ", ll_backend__tag_switch__V_95_95);
        }
#line 645 "tag_switch.m"
        {
#line 645 "tag_switch.m"
          ll_backend__tag_switch__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 645 "tag_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_98_98, 0) = ((MR_Box) (ll_backend__tag_switch__LowRangeEnd_39));
#line 645 "tag_switch.m"
        }
#line 645 "tag_switch.m"
        {
#line 645 "tag_switch.m"
          ll_backend__tag_switch__LowRangeEndConst_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__LowRangeEndConst_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 645 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__LowRangeEndConst_54, 1) = ((MR_Box) (ll_backend__tag_switch__V_98_98));
#line 645 "tag_switch.m"
        }
#line 646 "tag_switch.m"
        {
#line 646 "tag_switch.m"
          ll_backend__tag_switch__TestRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 646 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 646 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
#line 646 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_55, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_17));
#line 646 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval_55, 3) = ((MR_Box) (ll_backend__tag_switch__LowRangeEndConst_54));
#line 646 "tag_switch.m"
        }
#line 4357 "ll_backend.tag_switch.c"
        ll_backend__tag_switch__TypeCtorInfo_119_119 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 648 "tag_switch.m"
        {
#line 648 "tag_switch.m"
          ll_backend__tag_switch__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 648 "tag_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_102_102, 0) = ((MR_Box) (ll_backend__tag_switch__NewLabel_47));
#line 648 "tag_switch.m"
        }
#line 648 "tag_switch.m"
        {
#line 648 "tag_switch.m"
          ll_backend__tag_switch__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 648 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 648 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_101_101, 1) = ((MR_Box) (ll_backend__tag_switch__TestRval_55));
#line 648 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_101_101, 2) = ((MR_Box) (ll_backend__tag_switch__V_102_102));
#line 648 "tag_switch.m"
        }
#line 648 "tag_switch.m"
        {
#line 648 "tag_switch.m"
          ll_backend__tag_switch__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 648 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_100_100, 0) = ((MR_Box) (ll_backend__tag_switch__V_101_101));
#line 648 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_100_100, 1) = ((MR_Box) (ll_backend__tag_switch__IfComment_52));
#line 648 "tag_switch.m"
        }
#line 647 "tag_switch.m"
        {
#line 647 "tag_switch.m"
          ll_backend__tag_switch__IfCode_56 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ((MR_Box) (ll_backend__tag_switch__V_100_100)));
        }
#line 651 "tag_switch.m"
        {
#line 651 "tag_switch.m"
          ll_backend__tag_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 651 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_104_104, 1) = ((MR_Box) (ll_backend__tag_switch__NewLabel_47));
#line 651 "tag_switch.m"
        }
#line 651 "tag_switch.m"
        {
#line 651 "tag_switch.m"
          ll_backend__tag_switch__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 651 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_103_103, 0) = ((MR_Box) (ll_backend__tag_switch__V_104_104));
#line 651 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_103_103, 1) = ((MR_Box) (ll_backend__tag_switch__LabelComment_53));
#line 651 "tag_switch.m"
        }
#line 650 "tag_switch.m"
        {
#line 650 "tag_switch.m"
          ll_backend__tag_switch__LabelCode_57 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ((MR_Box) (ll_backend__tag_switch__V_103_103)));
        }
#line 654 "tag_switch.m"
        {
#line 654 "tag_switch.m"
          ll_backend__tag_switch__generate_primary_binary_search_13_p_0(ll_backend__tag_switch__LowGroups_45, ll_backend__tag_switch__MinPtag_15, ll_backend__tag_switch__LowRangeEnd_39, ll_backend__tag_switch__PtagRval_17, ll_backend__tag_switch__StagReg_18, ll_backend__tag_switch__VarRval_19, ll_backend__tag_switch__MaybeFailLabel_20, ll_backend__tag_switch__PtagCountMap_21, &ll_backend__tag_switch__LowRangeCode_58, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_60, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_105_105, ll_backend__tag_switch__STATE_VARIABLE_CI_89_89, &ll_backend__tag_switch__STATE_VARIABLE_CI_106_106);
        }
#line 657 "tag_switch.m"
        {
#line 657 "tag_switch.m"
          ll_backend__tag_switch__generate_primary_binary_search_13_p_0(ll_backend__tag_switch__HighGroups_46, ll_backend__tag_switch__HighRangeStart_40, ll_backend__tag_switch__MaxPtag_16, ll_backend__tag_switch__PtagRval_17, ll_backend__tag_switch__StagReg_18, ll_backend__tag_switch__VarRval_19, ll_backend__tag_switch__MaybeFailLabel_20, ll_backend__tag_switch__PtagCountMap_21, &ll_backend__tag_switch__HighRangeCode_59, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_105_105, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_61, ll_backend__tag_switch__STATE_VARIABLE_CI_106_106, ll_backend__tag_switch__STATE_VARIABLE_CI_63);
        }
#line 660 "tag_switch.m"
        {
#line 660 "tag_switch.m"
          ll_backend__tag_switch__V_110_110 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ll_backend__tag_switch__LabelCode_57, ll_backend__tag_switch__HighRangeCode_59);
        }
#line 660 "tag_switch.m"
        {
#line 660 "tag_switch.m"
          ll_backend__tag_switch__V_109_109 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ll_backend__tag_switch__LowRangeCode_58, ll_backend__tag_switch__V_110_110);
        }
#line 660 "tag_switch.m"
        {
#line 660 "tag_switch.m"
          *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_119_119, ll_backend__tag_switch__IfCode_56, ll_backend__tag_switch__V_109_109);
        }
#line 629 "tag_switch.m"
      }
#line 593 "tag_switch.m"
  }
#line 585 "tag_switch.m"
}

#line 556 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_2(
#line 556 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 556 "tag_switch.m"
{
#line 556 "tag_switch.m"
  {
#line 556 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 556 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 556 "tag_switch.m"
    {
#line 556 "tag_switch.m"
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__556__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 556 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 556 "tag_switch.m"
  }
#line 556 "tag_switch.m"
}

#line 543 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1(
#line 543 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 543 "tag_switch.m"
{
#line 543 "tag_switch.m"
  {
#line 543 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 543 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 543 "tag_switch.m"
    {
#line 543 "tag_switch.m"
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_jump_table__543__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 543 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 543 "tag_switch.m"
  }
#line 543 "tag_switch.m"
}

#line 533 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_jump_table_13_p_0(
#line 533 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagGroups_14,
#line 533 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__CurPrimary_15,
#line 533 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxPrimary_16,
#line 533 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_17,
#line 533 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_18,
#line 533 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_19,
#line 533 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_20,
#line 533 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Targets_21,
#line 533 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 533 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40,
#line 533 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41,
#line 533 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_42,
#line 533 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_43)
#line 533 "tag_switch.m"
{
#line 542 "tag_switch.m"
  {
#line 542 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CurPrimary_15 > ll_backend__tag_switch__MaxPrimary_16);

#line 542 "tag_switch.m"
    if (ll_backend__tag_switch__succeeded)
#line 544 "tag_switch.m"
      {
#line 544 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_44_44;

#line 543 "tag_switch.m"
        {
#line 543 "tag_switch.m"
          ll_backend__tag_switch__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 543 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[2]));
#line 543 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_jump_table_13_p_0_1));
#line 543 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 543 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 3) = ((MR_Box) (ll_backend__tag_switch__PtagGroups_14));
#line 543 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_44_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "tag_switch.m"
        }
#line 543 "tag_switch.m"
        {
#line 543 "tag_switch.m"
          mercury__require__expect_4_p_0(ll_backend__tag_switch__V_44_44, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_jump_table\'/13", (MR_String) "PtagGroups != [] when Cur > Max");
        }
#line 545 "tag_switch.m"
        *ll_backend__tag_switch__Targets_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "tag_switch.m"
        {
#line 546 "tag_switch.m"
          *ll_backend__tag_switch__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 544 "tag_switch.m"
        *ll_backend__tag_switch__STATE_VARIABLE_CI_43 = ll_backend__tag_switch__STATE_VARIABLE_CI_0_42;
#line 544 "tag_switch.m"
        *ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40;
#line 544 "tag_switch.m"
      }
#line 542 "tag_switch.m"
    else
#line 548 "tag_switch.m"
      {
#line 548 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__NextPrimary_25 = (ll_backend__tag_switch__CurPrimary_15 + (MR_Integer) 1);
#line 549 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PtagGroupsTail_27;
#line 549 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PrimaryInfo_28;
#line 550 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PtagCaseEntry_26;
#line 550 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__V_76_76;

#line 550 "tag_switch.m"
        ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__PtagGroups_14)) == (MR_mktag((MR_Integer) 1)));
#line 550 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 550 "tag_switch.m"
          {
#line 550 "tag_switch.m"
            ll_backend__tag_switch__PtagCaseEntry_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagGroups_14, (MR_Integer) 0)));
#line 550 "tag_switch.m"
            ll_backend__tag_switch__PtagGroupsTail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagGroups_14, (MR_Integer) 1)));
#line 551 "tag_switch.m"
            ll_backend__tag_switch__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCaseEntry_26, (MR_Integer) 0)));
#line 551 "tag_switch.m"
            ll_backend__tag_switch__PrimaryInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCaseEntry_26, (MR_Integer) 1)));
#line 551 "tag_switch.m"
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CurPrimary_15 == ll_backend__tag_switch__V_76_76);
#line 550 "tag_switch.m"
          }
#line 549 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 553 "tag_switch.m"
          {
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TypeCtorInfo_75_75;
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagLoc_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PrimaryInfo_28, (MR_Integer) 0)));
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagGoalMap_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PrimaryInfo_28, (MR_Integer) 1)));
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__CountInfo_31;
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagLocPrime_32;
#line 553 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__MaxSecondary_33;
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__NewLabel_34;
#line 553 "tag_switch.m"
            MR_String ll_backend__tag_switch__Comment_35;
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__LabelCode_36;
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__ThisTagCode_37;
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TailTargets_38;
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TailCode_39;
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_50_50;
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_54_54;
#line 553 "tag_switch.m"
            MR_String ll_backend__tag_switch__V_56_56;
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_57_57;
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_58_58;
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_60_60;
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_61_61;
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_64_64;
#line 553 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_65_65;
#line 554 "tag_switch.m"
            MR_Box ll_backend__tag_switch__conv0_CountInfo_31;

#line 554 "tag_switch.m"
            {
#line 554 "tag_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[1], ll_backend__tag_switch__PtagCountMap_20, ll_backend__tag_switch__CurPrimary_15, &ll_backend__tag_switch__conv0_CountInfo_31);
            }
#line 554 "tag_switch.m"
            ll_backend__tag_switch__CountInfo_31 = ((MR_Word) ll_backend__tag_switch__conv0_CountInfo_31);
#line 555 "tag_switch.m"
            ll_backend__tag_switch__StagLocPrime_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_31, (MR_Integer) 0)));
#line 555 "tag_switch.m"
            ll_backend__tag_switch__MaxSecondary_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_31, (MR_Integer) 1)));
#line 556 "tag_switch.m"
            {
#line 556 "tag_switch.m"
              ll_backend__tag_switch__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 556 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
#line 556 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_jump_table_13_p_0_2));
#line 556 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 556 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 3) = ((MR_Box) (ll_backend__tag_switch__StagLoc_29));
#line 556 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 4) = ((MR_Box) (ll_backend__tag_switch__StagLocPrime_32));
#line 556 "tag_switch.m"
            }
#line 556 "tag_switch.m"
            {
#line 556 "tag_switch.m"
              mercury__require__expect_4_p_0(ll_backend__tag_switch__V_50_50, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_jump_table\'/13", (MR_String) "secondary tag locations differ");
            }
#line 558 "tag_switch.m"
            {
#line 558 "tag_switch.m"
              ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__NewLabel_34, ll_backend__tag_switch__STATE_VARIABLE_CI_0_42, &ll_backend__tag_switch__STATE_VARIABLE_CI_54_54);
            }
#line 560 "tag_switch.m"
            {
#line 560 "tag_switch.m"
              ll_backend__tag_switch__V_56_56 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__CurPrimary_15);
            }
#line 559 "tag_switch.m"
            {
#line 559 "tag_switch.m"
              ll_backend__tag_switch__Comment_35 = mercury__string__f_43_43_2_f_0((MR_String) "start of a case in primary tag switch: ptag ", ll_backend__tag_switch__V_56_56);
            }
#line 4709 "ll_backend.tag_switch.c"
            ll_backend__tag_switch__TypeCtorInfo_75_75 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 561 "tag_switch.m"
            {
#line 561 "tag_switch.m"
              ll_backend__tag_switch__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 561 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_58_58, 1) = ((MR_Box) (ll_backend__tag_switch__NewLabel_34));
#line 561 "tag_switch.m"
            }
#line 561 "tag_switch.m"
            {
#line 561 "tag_switch.m"
              ll_backend__tag_switch__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 561 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_57_57, 0) = ((MR_Box) (ll_backend__tag_switch__V_58_58));
#line 561 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_57_57, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_35));
#line 561 "tag_switch.m"
            }
#line 561 "tag_switch.m"
            {
#line 561 "tag_switch.m"
              ll_backend__tag_switch__LabelCode_36 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_75_75, ((MR_Box) (ll_backend__tag_switch__V_57_57)));
            }
#line 562 "tag_switch.m"
            {
#line 562 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_30, ll_backend__tag_switch__CurPrimary_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__tag_switch__MaxSecondary_33, ll_backend__tag_switch__StagReg_17, ll_backend__tag_switch__StagLoc_29, ll_backend__tag_switch__VarRval_18, ll_backend__tag_switch__MaybeFailLabel_19, &ll_backend__tag_switch__ThisTagCode_37, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_60_60, ll_backend__tag_switch__STATE_VARIABLE_CI_54_54, &ll_backend__tag_switch__STATE_VARIABLE_CI_61_61);
            }
#line 565 "tag_switch.m"
            {
#line 565 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_jump_table_13_p_0(ll_backend__tag_switch__PtagGroupsTail_27, ll_backend__tag_switch__NextPrimary_25, ll_backend__tag_switch__MaxPrimary_16, ll_backend__tag_switch__StagReg_17, ll_backend__tag_switch__VarRval_18, ll_backend__tag_switch__MaybeFailLabel_19, ll_backend__tag_switch__PtagCountMap_20, &ll_backend__tag_switch__TailTargets_38, &ll_backend__tag_switch__TailCode_39, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_60_60, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41, ll_backend__tag_switch__STATE_VARIABLE_CI_61_61, ll_backend__tag_switch__STATE_VARIABLE_CI_43);
            }
#line 568 "tag_switch.m"
            {
#line 568 "tag_switch.m"
              ll_backend__tag_switch__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 568 "tag_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_64_64, 0) = ((MR_Box) (ll_backend__tag_switch__NewLabel_34));
#line 568 "tag_switch.m"
            }
#line 568 "tag_switch.m"
            {
#line 568 "tag_switch.m"
              MR_Word base;
#line 568 "tag_switch.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "tag_switch.m"
              *ll_backend__tag_switch__Targets_21 = base;
#line 568 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__tag_switch__V_64_64));
#line 568 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__tag_switch__TailTargets_38));
#line 568 "tag_switch.m"
            }
#line 569 "tag_switch.m"
            {
#line 569 "tag_switch.m"
              ll_backend__tag_switch__V_65_65 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_75_75, ll_backend__tag_switch__ThisTagCode_37, ll_backend__tag_switch__TailCode_39);
            }
#line 569 "tag_switch.m"
            {
#line 569 "tag_switch.m"
              *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_75_75, ll_backend__tag_switch__LabelCode_36, ll_backend__tag_switch__V_65_65);
            }
#line 553 "tag_switch.m"
          }
#line 549 "tag_switch.m"
        else
#line 573 "tag_switch.m"
          {
#line 573 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TailTargets_68;

#line 571 "tag_switch.m"
            {
#line 571 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_jump_table_13_p_0(ll_backend__tag_switch__PtagGroups_14, ll_backend__tag_switch__NextPrimary_25, ll_backend__tag_switch__MaxPrimary_16, ll_backend__tag_switch__StagReg_17, ll_backend__tag_switch__VarRval_18, ll_backend__tag_switch__MaybeFailLabel_19, ll_backend__tag_switch__PtagCountMap_20, &ll_backend__tag_switch__TailTargets_68, ll_backend__tag_switch__Code_22, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41, ll_backend__tag_switch__STATE_VARIABLE_CI_0_42, ll_backend__tag_switch__STATE_VARIABLE_CI_43);
            }
#line 574 "tag_switch.m"
            {
#line 574 "tag_switch.m"
              MR_Word base;
#line 574 "tag_switch.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "tag_switch.m"
              *ll_backend__tag_switch__Targets_21 = base;
#line 574 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__tag_switch__MaybeFailLabel_19));
#line 574 "tag_switch.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__tag_switch__TailTargets_68));
#line 574 "tag_switch.m"
            }
#line 573 "tag_switch.m"
          }
#line 548 "tag_switch.m"
      }
#line 542 "tag_switch.m"
  }
#line 533 "tag_switch.m"
}

#line 516 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_p_0(
#line 516 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 516 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 516 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__3_3,
#line 516 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__TestRval_4)
#line 516 "tag_switch.m"
{
#line 519 "tag_switch.m"
  while (MR_TRUE)
#line 519 "tag_switch.m"
    {
#line 519 "tag_switch.m"
      /* tailcall optimized into a loop */
#line 519 "tag_switch.m"
      {
#line 519 "tag_switch.m"
        MR_bool ll_backend__tag_switch__succeeded;

#line 519 "tag_switch.m"
        if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 519 "tag_switch.m"
          *ll_backend__tag_switch__TestRval_4 = ll_backend__tag_switch__HeadVar__3_3;
#line 519 "tag_switch.m"
        else
#line 521 "tag_switch.m"
          {
#line 521 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__OtherPtag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 521 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherPtags_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 521 "tag_switch.m"
            MR_Word ll_backend__tag_switch__ThisTestRval_12;
#line 521 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TestRval1_13;
#line 521 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_15_15;
#line 521 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_17_17;
#line 521 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_18_18;

#line 523 "tag_switch.m"
            {
#line 523 "tag_switch.m"
              ll_backend__tag_switch__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 523 "tag_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_18_18, 0) = ((MR_Box) (ll_backend__tag_switch__OtherPtag_7));
#line 523 "tag_switch.m"
            }
#line 523 "tag_switch.m"
            {
#line 523 "tag_switch.m"
              ll_backend__tag_switch__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 523 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_17_17, 1) = ((MR_Box) (ll_backend__tag_switch__V_18_18));
#line 523 "tag_switch.m"
            }
#line 523 "tag_switch.m"
            {
#line 523 "tag_switch.m"
              ll_backend__tag_switch__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 523 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 523 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 523 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 2) = ((MR_Box) (ll_backend__tag_switch__V_17_17));
#line 523 "tag_switch.m"
            }
#line 522 "tag_switch.m"
            {
#line 522 "tag_switch.m"
              ll_backend__tag_switch__ThisTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 522 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 522 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 522 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_2));
#line 522 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 3) = ((MR_Box) (ll_backend__tag_switch__V_15_15));
#line 522 "tag_switch.m"
            }
#line 524 "tag_switch.m"
            {
#line 524 "tag_switch.m"
              ll_backend__tag_switch__TestRval1_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 524 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 524 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 524 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 2) = ((MR_Box) (ll_backend__tag_switch__HeadVar__3_3));
#line 524 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 3) = ((MR_Box) (ll_backend__tag_switch__ThisTestRval_12));
#line 524 "tag_switch.m"
            }
#line 525 "tag_switch.m"
            /* direct tailcall eliminated */
#line 525 "tag_switch.m"
            {
#line 525 "tag_switch.m"
              MR_Word ll_backend__tag_switch__HeadVar__1__tmp_copy_1 = ll_backend__tag_switch__OtherPtags_8;
#line 525 "tag_switch.m"
              MR_Word ll_backend__tag_switch__HeadVar__3__tmp_copy_3 = ll_backend__tag_switch__TestRval1_13;

#line 525 "tag_switch.m"
              ll_backend__tag_switch__HeadVar__3_3 = ll_backend__tag_switch__HeadVar__3__tmp_copy_3;
#line 525 "tag_switch.m"
              ll_backend__tag_switch__HeadVar__1_1 = ll_backend__tag_switch__HeadVar__1__tmp_copy_1;
#line 525 "tag_switch.m"
            }
#line 525 "tag_switch.m"
            continue;
#line 521 "tag_switch.m"
          }
#line 519 "tag_switch.m"
      }
#line 519 "tag_switch.m"
      break;
#line 519 "tag_switch.m"
    }
#line 516 "tag_switch.m"
}

#line 1019 "tag_switch.m"
static MR_Box MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0_1(
#line 1019 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 1019 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1)
#line 1019 "tag_switch.m"
{
#line 1019 "tag_switch.m"
  {
#line 1019 "tag_switch.m"
    MR_Box ll_backend__tag_switch__wrapper_arg_2;
#line 1019 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;
#line 1019 "tag_switch.m"
    MR_String ll_backend__tag_switch__conv0_HeadVar__2_2;

#line 1019 "tag_switch.m"
    {
#line 1019 "tag_switch.m"
      ll_backend__tag_switch__conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) ll_backend__tag_switch__wrapper_arg_1));
    }
#line 1019 "tag_switch.m"
    ll_backend__tag_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__tag_switch__conv0_HeadVar__2_2));
#line 1019 "tag_switch.m"
    return ll_backend__tag_switch__wrapper_arg_2;
#line 1019 "tag_switch.m"
  }
#line 1019 "tag_switch.m"
}

#line 485 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_17,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_18,
#line 485 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_19,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_20,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCase_21,
#line 485 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_22,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_23,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_24,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_25,
#line 485 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__PrevTestsCode_26,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevCasesCode0_27,
#line 485 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__PrevCasesCode_28,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40,
#line 485 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41,
#line 485 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_42,
#line 485 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_43)
#line 485 "tag_switch.m"
{
#line 495 "tag_switch.m"
  {
#line 495 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_60_60;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ThisPtagLabel_31;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestRval0_32;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestRval_33;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestCode_34;
#line 495 "tag_switch.m"
    MR_String ll_backend__tag_switch__Comment_35;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__LabelCode_36;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagLoc_37;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagGoalMap_38;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TagCode_39;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_44_44;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_46_46;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_48_48;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_49_49;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_50_50;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_51_51;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_52_52;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_55_55;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_56_56;
#line 495 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_59_59;

#line 496 "tag_switch.m"
    {
#line 496 "tag_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__ThisPtagLabel_31, ll_backend__tag_switch__STATE_VARIABLE_CI_0_42, &ll_backend__tag_switch__STATE_VARIABLE_CI_44_44);
    }
#line 498 "tag_switch.m"
    {
#line 498 "tag_switch.m"
      ll_backend__tag_switch__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 498 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_49_49, 0) = ((MR_Box) (ll_backend__tag_switch__MainPtag_19));
#line 498 "tag_switch.m"
    }
#line 498 "tag_switch.m"
    {
#line 498 "tag_switch.m"
      ll_backend__tag_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 498 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_48_48, 1) = ((MR_Box) (ll_backend__tag_switch__V_49_49));
#line 498 "tag_switch.m"
    }
#line 498 "tag_switch.m"
    {
#line 498 "tag_switch.m"
      ll_backend__tag_switch__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 498 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 498 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_46_46, 1) = ((MR_Box) ((MR_Integer) 0));
#line 498 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_46_46, 2) = ((MR_Box) (ll_backend__tag_switch__V_48_48));
#line 498 "tag_switch.m"
    }
#line 497 "tag_switch.m"
    {
#line 497 "tag_switch.m"
      ll_backend__tag_switch__TestRval0_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 497 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 497 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 497 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_32, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_17));
#line 497 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_32, 3) = ((MR_Box) (ll_backend__tag_switch__V_46_46));
#line 497 "tag_switch.m"
    }
#line 499 "tag_switch.m"
    {
#line 499 "tag_switch.m"
      ll_backend__tag_switch__generate_primary_try_chain_other_ptags_4_p_0(ll_backend__tag_switch__OtherPtags_20, ll_backend__tag_switch__PtagRval_17, ll_backend__tag_switch__TestRval0_32, &ll_backend__tag_switch__TestRval_33);
    }
#line 5116 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_60_60 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 502 "tag_switch.m"
    {
#line 502 "tag_switch.m"
      ll_backend__tag_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 502 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_52_52, 0) = ((MR_Box) (ll_backend__tag_switch__ThisPtagLabel_31));
#line 502 "tag_switch.m"
    }
#line 502 "tag_switch.m"
    {
#line 502 "tag_switch.m"
      ll_backend__tag_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 502 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 502 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_51_51, 1) = ((MR_Box) (ll_backend__tag_switch__TestRval_33));
#line 502 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_51_51, 2) = ((MR_Box) (ll_backend__tag_switch__V_52_52));
#line 502 "tag_switch.m"
    }
#line 502 "tag_switch.m"
    {
#line 502 "tag_switch.m"
      ll_backend__tag_switch__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 502 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 0) = ((MR_Box) (ll_backend__tag_switch__V_51_51));
#line 502 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_50_50, 1) = ((MR_Box) ((MR_String) "test primary tag only"));
#line 502 "tag_switch.m"
    }
#line 501 "tag_switch.m"
    {
#line 501 "tag_switch.m"
      ll_backend__tag_switch__TestCode_34 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ((MR_Box) (ll_backend__tag_switch__V_50_50)));
    }
#line 1013 "tag_switch.m"
    if ((ll_backend__tag_switch__OtherPtags_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1013 "tag_switch.m"
      {
#line 1013 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_77_77;

#line 1014 "tag_switch.m"
        {
#line 1014 "tag_switch.m"
          ll_backend__tag_switch__V_77_77 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__MainPtag_19);
        }
#line 1014 "tag_switch.m"
        {
#line 1014 "tag_switch.m"
          ll_backend__tag_switch__Comment_35 = mercury__string__f_43_43_2_f_0((MR_String) "primary tag value: ", ll_backend__tag_switch__V_77_77);
        }
#line 1013 "tag_switch.m"
      }
#line 1013 "tag_switch.m"
    else
#line 1016 "tag_switch.m"
      {
#line 1016 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_67_67;
#line 1016 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_68_68;
#line 1016 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_69_69;
#line 1016 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_71_71;
#line 1016 "tag_switch.m"
        MR_String ll_backend__tag_switch__V_72_72;
#line 1016 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_74_74;

#line 1017 "tag_switch.m"
        {
#line 1017 "tag_switch.m"
          ll_backend__tag_switch__V_68_68 = mercury__string__int_to_string_1_f_0(ll_backend__tag_switch__MainPtag_19);
        }
#line 1019 "tag_switch.m"
        {
#line 1019 "tag_switch.m"
          ll_backend__tag_switch__V_74_74 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__tag_switch_scalar_common_1[4], ll_backend__tag_switch__OtherPtags_20);
        }
#line 1019 "tag_switch.m"
        {
#line 1019 "tag_switch.m"
          ll_backend__tag_switch__V_72_72 = mercury__string__join_list_2_f_0((MR_String) ", ", ll_backend__tag_switch__V_74_74);
        }
#line 1020 "tag_switch.m"
        {
#line 1020 "tag_switch.m"
          ll_backend__tag_switch__V_71_71 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__V_72_72, (MR_String) ")");
        }
#line 1018 "tag_switch.m"
        {
#line 1018 "tag_switch.m"
          ll_backend__tag_switch__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) "(shared with ", ll_backend__tag_switch__V_71_71);
        }
#line 1018 "tag_switch.m"
        {
#line 1018 "tag_switch.m"
          ll_backend__tag_switch__V_67_67 = mercury__string__f_43_43_2_f_0(ll_backend__tag_switch__V_68_68, ll_backend__tag_switch__V_69_69);
        }
#line 1017 "tag_switch.m"
        {
#line 1017 "tag_switch.m"
          ll_backend__tag_switch__Comment_35 = mercury__string__f_43_43_2_f_0((MR_String) "primary tag value: ", ll_backend__tag_switch__V_67_67);
        }
#line 1016 "tag_switch.m"
      }
#line 507 "tag_switch.m"
    {
#line 507 "tag_switch.m"
      ll_backend__tag_switch__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 507 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_56_56, 1) = ((MR_Box) (ll_backend__tag_switch__ThisPtagLabel_31));
#line 507 "tag_switch.m"
    }
#line 507 "tag_switch.m"
    {
#line 507 "tag_switch.m"
      ll_backend__tag_switch__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 507 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 0) = ((MR_Box) (ll_backend__tag_switch__V_56_56));
#line 507 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 1) = ((MR_Box) (ll_backend__tag_switch__Comment_35));
#line 507 "tag_switch.m"
    }
#line 506 "tag_switch.m"
    {
#line 506 "tag_switch.m"
      ll_backend__tag_switch__LabelCode_36 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ((MR_Box) (ll_backend__tag_switch__V_55_55)));
    }
#line 509 "tag_switch.m"
    ll_backend__tag_switch__StagLoc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_21, (MR_Integer) 0)));
#line 509 "tag_switch.m"
    ll_backend__tag_switch__StagGoalMap_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_21, (MR_Integer) 1)));
#line 510 "tag_switch.m"
    {
#line 510 "tag_switch.m"
      ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_38, ll_backend__tag_switch__MainPtag_19, ll_backend__tag_switch__OtherPtags_20, ll_backend__tag_switch__MaxSecondary_22, ll_backend__tag_switch__StagReg_18, ll_backend__tag_switch__StagLoc_37, ll_backend__tag_switch__VarRval_23, ll_backend__tag_switch__MaybeFailLabel_24, &ll_backend__tag_switch__TagCode_39, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_40, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_41, ll_backend__tag_switch__STATE_VARIABLE_CI_44_44, ll_backend__tag_switch__STATE_VARIABLE_CI_43);
    }
#line 513 "tag_switch.m"
    {
#line 513 "tag_switch.m"
      *ll_backend__tag_switch__PrevTestsCode_26 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ll_backend__tag_switch__PrevTestsCode0_25, ll_backend__tag_switch__TestCode_34);
    }
#line 514 "tag_switch.m"
    {
#line 514 "tag_switch.m"
      ll_backend__tag_switch__V_59_59 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ll_backend__tag_switch__TagCode_39, ll_backend__tag_switch__PrevCasesCode0_27);
    }
#line 514 "tag_switch.m"
    {
#line 514 "tag_switch.m"
      *ll_backend__tag_switch__PrevCasesCode_28 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_60_60, ll_backend__tag_switch__LabelCode_36, ll_backend__tag_switch__V_59_59);
    }
#line 495 "tag_switch.m"
  }
#line 485 "tag_switch.m"
}

#line 445 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1(
#line 445 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 445 "tag_switch.m"
{
#line 445 "tag_switch.m"
  {
#line 445 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 445 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 445 "tag_switch.m"
    {
#line 445 "tag_switch.m"
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_chain__445__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 445 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 445 "tag_switch.m"
  }
#line 445 "tag_switch.m"
}

#line 430 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_chain_13_p_0(
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_3,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_4,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_5,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_6,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevTestsCode0_7,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PrevCasesCode0_8,
#line 430 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_9,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10,
#line 430 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_11,
#line 430 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_12,
#line 430 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_13)
#line 430 "tag_switch.m"
{
#line 436 "tag_switch.m"
  while (MR_TRUE)
#line 436 "tag_switch.m"
    {
#line 436 "tag_switch.m"
      /* tailcall optimized into a loop */
#line 436 "tag_switch.m"
      {
#line 436 "tag_switch.m"
        MR_bool ll_backend__tag_switch__succeeded;

#line 436 "tag_switch.m"
        if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "tag_switch.m"
          {
#line 437 "tag_switch.m"
            {
#line 437 "tag_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_chain\'/13", (MR_String) "empty list");
#line 437 "tag_switch.m"
              return;
            }
#line 436 "tag_switch.m"
          }
#line 436 "tag_switch.m"
        else
#line 440 "tag_switch.m"
          {
#line 440 "tag_switch.m"
            MR_Word ll_backend__tag_switch__PtagGroup_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 440 "tag_switch.m"
            MR_Word ll_backend__tag_switch__PtagGroups_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 440 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__MainPtag_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_31, (MR_Integer) 0)));
#line 440 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherPtags_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_31, (MR_Integer) 1)));
#line 440 "tag_switch.m"
            MR_Word ll_backend__tag_switch__PtagCase_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_31, (MR_Integer) 2)));
#line 440 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagLoc_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_45, (MR_Integer) 0)));
#line 440 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagGoalMap_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_45, (MR_Integer) 1)));
#line 440 "tag_switch.m"
            MR_Word ll_backend__tag_switch__CountInfo_48;
#line 440 "tag_switch.m"
            MR_Word ll_backend__tag_switch__StagLocPrime_49;
#line 440 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__MaxSecondary_50;
#line 440 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_64_64;
#line 443 "tag_switch.m"
            MR_Box ll_backend__tag_switch__conv0_CountInfo_48;

#line 443 "tag_switch.m"
            {
#line 443 "tag_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[1], ll_backend__tag_switch__PtagCountMap_6, ll_backend__tag_switch__MainPtag_43, &ll_backend__tag_switch__conv0_CountInfo_48);
            }
#line 443 "tag_switch.m"
            ll_backend__tag_switch__CountInfo_48 = ((MR_Word) ll_backend__tag_switch__conv0_CountInfo_48);
#line 444 "tag_switch.m"
            ll_backend__tag_switch__StagLocPrime_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_48, (MR_Integer) 0)));
#line 444 "tag_switch.m"
            ll_backend__tag_switch__MaxSecondary_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_48, (MR_Integer) 1)));
#line 445 "tag_switch.m"
            {
#line 445 "tag_switch.m"
              ll_backend__tag_switch__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 445 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
#line 445 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_try_chain_13_p_0_1));
#line 445 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 445 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 3) = ((MR_Box) (ll_backend__tag_switch__StagLoc_46));
#line 445 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_64_64, 4) = ((MR_Box) (ll_backend__tag_switch__StagLocPrime_49));
#line 445 "tag_switch.m"
            }
#line 445 "tag_switch.m"
            {
#line 445 "tag_switch.m"
              mercury__require__expect_4_p_0(ll_backend__tag_switch__V_64_64, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_chain\'/13", (MR_String) "secondary tag locations differ");
            }
#line 457 "tag_switch.m"
            if ((ll_backend__tag_switch__PtagGroups_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "tag_switch.m"
              if ((ll_backend__tag_switch__MaybeFailLabel_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 472 "tag_switch.m"
                {
#line 472 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TypeCtorInfo_97_97;
#line 472 "tag_switch.m"
                  MR_String ll_backend__tag_switch__Comment_57;
#line 472 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__CommentCode_58;
#line 472 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TagCode_59;
#line 472 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_69_69;
#line 472 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_70_70;
#line 472 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_74_74;
#line 472 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_75_75;

#line 473 "tag_switch.m"
                  {
#line 473 "tag_switch.m"
                    ll_backend__tag_switch__make_ptag_comment_4_p_0((MR_String) "fallthrough to last primary tag value: ", ll_backend__tag_switch__MainPtag_43, ll_backend__tag_switch__OtherPtags_44, &ll_backend__tag_switch__Comment_57);
                  }
#line 5450 "ll_backend.tag_switch.c"
                  ll_backend__tag_switch__TypeCtorInfo_97_97 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 476 "tag_switch.m"
                  {
#line 476 "tag_switch.m"
                    ll_backend__tag_switch__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 476 "tag_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_70_70, 0) = ((MR_Box) (ll_backend__tag_switch__Comment_57));
#line 476 "tag_switch.m"
                  }
#line 476 "tag_switch.m"
                  {
#line 476 "tag_switch.m"
                    ll_backend__tag_switch__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 476 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_69_69, 0) = ((MR_Box) (ll_backend__tag_switch__V_70_70));
#line 476 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_69_69, 1) = ((MR_Box) ((MR_String) ""));
#line 476 "tag_switch.m"
                  }
#line 475 "tag_switch.m"
                  {
#line 475 "tag_switch.m"
                    ll_backend__tag_switch__CommentCode_58 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_97_97, ((MR_Box) (ll_backend__tag_switch__V_69_69)));
                  }
#line 478 "tag_switch.m"
                  {
#line 478 "tag_switch.m"
                    ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_47, ll_backend__tag_switch__MainPtag_43, ll_backend__tag_switch__OtherPtags_44, ll_backend__tag_switch__MaxSecondary_50, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__StagLoc_46, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, &ll_backend__tag_switch__TagCode_59, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_11, ll_backend__tag_switch__STATE_VARIABLE_CI_0_12, ll_backend__tag_switch__STATE_VARIABLE_CI_13);
                  }
#line 481 "tag_switch.m"
                  {
#line 481 "tag_switch.m"
                    ll_backend__tag_switch__V_75_75 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_97_97, ll_backend__tag_switch__TagCode_59, ll_backend__tag_switch__PrevCasesCode0_8);
                  }
#line 481 "tag_switch.m"
                  {
#line 481 "tag_switch.m"
                    ll_backend__tag_switch__V_74_74 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_97_97, ll_backend__tag_switch__CommentCode_58, ll_backend__tag_switch__V_75_75);
                  }
#line 481 "tag_switch.m"
                  {
#line 481 "tag_switch.m"
                    *ll_backend__tag_switch__Code_9 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_97_97, ll_backend__tag_switch__PrevTestsCode0_7, ll_backend__tag_switch__V_74_74);
                  }
#line 472 "tag_switch.m"
                }
#line 471 "tag_switch.m"
              else
#line 460 "tag_switch.m"
                {
#line 460 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__TypeCtorInfo_96_96;
#line 460 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__FailLabel_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_5, (MR_Integer) 0)));
#line 460 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__FailCode_56;
#line 460 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_78_78;
#line 460 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_79_79;
#line 460 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_80_80;
#line 460 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__V_82_82;
#line 460 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevTestsCode1_87;
#line 460 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevCasesCode1_88;

#line 461 "tag_switch.m"
                  {
#line 461 "tag_switch.m"
                    ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__MainPtag_43, ll_backend__tag_switch__OtherPtags_44, ll_backend__tag_switch__PtagCase_45, ll_backend__tag_switch__MaxSecondary_50, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, ll_backend__tag_switch__PrevTestsCode0_7, &ll_backend__tag_switch__PrevTestsCode1_87, ll_backend__tag_switch__PrevCasesCode0_8, &ll_backend__tag_switch__PrevCasesCode1_88, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_11, ll_backend__tag_switch__STATE_VARIABLE_CI_0_12, ll_backend__tag_switch__STATE_VARIABLE_CI_13);
                  }
#line 5525 "ll_backend.tag_switch.c"
                  ll_backend__tag_switch__TypeCtorInfo_96_96 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 467 "tag_switch.m"
                  {
#line 467 "tag_switch.m"
                    ll_backend__tag_switch__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 467 "tag_switch.m"
                    MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_80_80, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_55));
#line 467 "tag_switch.m"
                  }
#line 467 "tag_switch.m"
                  {
#line 467 "tag_switch.m"
                    ll_backend__tag_switch__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 467 "tag_switch.m"
                    MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_79_79, 1) = ((MR_Box) (ll_backend__tag_switch__V_80_80));
#line 467 "tag_switch.m"
                  }
#line 467 "tag_switch.m"
                  {
#line 467 "tag_switch.m"
                    ll_backend__tag_switch__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 467 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_78_78, 0) = ((MR_Box) (ll_backend__tag_switch__V_79_79));
#line 467 "tag_switch.m"
                    MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_78_78, 1) = ((MR_Box) ((MR_String) "primary tag with no code to handle it"));
#line 467 "tag_switch.m"
                  }
#line 466 "tag_switch.m"
                  {
#line 466 "tag_switch.m"
                    ll_backend__tag_switch__FailCode_56 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_96_96, ((MR_Box) (ll_backend__tag_switch__V_78_78)));
                  }
#line 470 "tag_switch.m"
                  {
#line 470 "tag_switch.m"
                    ll_backend__tag_switch__V_82_82 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_96_96, ll_backend__tag_switch__FailCode_56, ll_backend__tag_switch__PrevCasesCode1_88);
                  }
#line 470 "tag_switch.m"
                  {
#line 470 "tag_switch.m"
                    *ll_backend__tag_switch__Code_9 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_96_96, ll_backend__tag_switch__PrevTestsCode1_87, ll_backend__tag_switch__V_82_82);
                  }
#line 460 "tag_switch.m"
                }
#line 457 "tag_switch.m"
            else
#line 448 "tag_switch.m"
              {
#line 448 "tag_switch.m"
                MR_Word ll_backend__tag_switch__PrevTestsCode1_53;
#line 448 "tag_switch.m"
                MR_Word ll_backend__tag_switch__PrevCasesCode1_54;
#line 448 "tag_switch.m"
                MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_83_83;
#line 448 "tag_switch.m"
                MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_84_84;

#line 449 "tag_switch.m"
                {
#line 449 "tag_switch.m"
                  ll_backend__tag_switch__generate_primary_try_chain_case_16_p_0(ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__MainPtag_43, ll_backend__tag_switch__OtherPtags_44, ll_backend__tag_switch__PtagCase_45, ll_backend__tag_switch__MaxSecondary_50, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, ll_backend__tag_switch__PrevTestsCode0_7, &ll_backend__tag_switch__PrevTestsCode1_53, ll_backend__tag_switch__PrevCasesCode0_8, &ll_backend__tag_switch__PrevCasesCode1_54, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_83_83, ll_backend__tag_switch__STATE_VARIABLE_CI_0_12, &ll_backend__tag_switch__STATE_VARIABLE_CI_84_84);
                }
#line 454 "tag_switch.m"
                /* direct tailcall eliminated */
#line 454 "tag_switch.m"
                {
#line 454 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__HeadVar__1__tmp_copy_1 = ll_backend__tag_switch__PtagGroups_32;
#line 454 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevTestsCode0__tmp_copy_7 = ll_backend__tag_switch__PrevTestsCode1_53;
#line 454 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__PrevCasesCode0__tmp_copy_8 = ll_backend__tag_switch__PrevCasesCode1_54;
#line 454 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0__tmp_copy_10 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_83_83;
#line 454 "tag_switch.m"
                  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0__tmp_copy_12 = ll_backend__tag_switch__STATE_VARIABLE_CI_84_84;

#line 454 "tag_switch.m"
                  ll_backend__tag_switch__STATE_VARIABLE_CI_0_12 = ll_backend__tag_switch__STATE_VARIABLE_CI_0__tmp_copy_12;
#line 454 "tag_switch.m"
                  ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_10 = ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0__tmp_copy_10;
#line 454 "tag_switch.m"
                  ll_backend__tag_switch__PrevCasesCode0_8 = ll_backend__tag_switch__PrevCasesCode0__tmp_copy_8;
#line 454 "tag_switch.m"
                  ll_backend__tag_switch__PrevTestsCode0_7 = ll_backend__tag_switch__PrevTestsCode0__tmp_copy_7;
#line 454 "tag_switch.m"
                  ll_backend__tag_switch__HeadVar__1_1 = ll_backend__tag_switch__HeadVar__1__tmp_copy_1;
#line 454 "tag_switch.m"
                }
#line 454 "tag_switch.m"
                continue;
#line 448 "tag_switch.m"
              }
#line 440 "tag_switch.m"
          }
#line 436 "tag_switch.m"
      }
#line 436 "tag_switch.m"
      break;
#line 436 "tag_switch.m"
    }
#line 430 "tag_switch.m"
}

#line 414 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_p_0(
#line 414 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 414 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 414 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__3_3,
#line 414 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__TestRval_4)
#line 414 "tag_switch.m"
{
#line 417 "tag_switch.m"
  while (MR_TRUE)
#line 417 "tag_switch.m"
    {
#line 417 "tag_switch.m"
      /* tailcall optimized into a loop */
#line 417 "tag_switch.m"
      {
#line 417 "tag_switch.m"
        MR_bool ll_backend__tag_switch__succeeded;

#line 417 "tag_switch.m"
        if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 417 "tag_switch.m"
          *ll_backend__tag_switch__TestRval_4 = ll_backend__tag_switch__HeadVar__3_3;
#line 417 "tag_switch.m"
        else
#line 419 "tag_switch.m"
          {
#line 419 "tag_switch.m"
            MR_Integer ll_backend__tag_switch__OtherPtag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 419 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherPtags_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 419 "tag_switch.m"
            MR_Word ll_backend__tag_switch__ThisTestRval_12;
#line 419 "tag_switch.m"
            MR_Word ll_backend__tag_switch__TestRval1_13;
#line 419 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_15_15;
#line 419 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_17_17;
#line 419 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_18_18;

#line 421 "tag_switch.m"
            {
#line 421 "tag_switch.m"
              ll_backend__tag_switch__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 421 "tag_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_18_18, 0) = ((MR_Box) (ll_backend__tag_switch__OtherPtag_7));
#line 421 "tag_switch.m"
            }
#line 421 "tag_switch.m"
            {
#line 421 "tag_switch.m"
              ll_backend__tag_switch__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 421 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_17_17, 1) = ((MR_Box) (ll_backend__tag_switch__V_18_18));
#line 421 "tag_switch.m"
            }
#line 421 "tag_switch.m"
            {
#line 421 "tag_switch.m"
              ll_backend__tag_switch__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 421 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 421 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 421 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_15_15, 2) = ((MR_Box) (ll_backend__tag_switch__V_17_17));
#line 421 "tag_switch.m"
            }
#line 420 "tag_switch.m"
            {
#line 420 "tag_switch.m"
              ll_backend__tag_switch__ThisTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 420 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 420 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 420 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_2));
#line 420 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__ThisTestRval_12, 3) = ((MR_Box) (ll_backend__tag_switch__V_15_15));
#line 420 "tag_switch.m"
            }
#line 422 "tag_switch.m"
            {
#line 422 "tag_switch.m"
              ll_backend__tag_switch__TestRval1_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 422 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 422 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 422 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 2) = ((MR_Box) (ll_backend__tag_switch__HeadVar__3_3));
#line 422 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval1_13, 3) = ((MR_Box) (ll_backend__tag_switch__ThisTestRval_12));
#line 422 "tag_switch.m"
            }
#line 423 "tag_switch.m"
            /* direct tailcall eliminated */
#line 423 "tag_switch.m"
            {
#line 423 "tag_switch.m"
              MR_Word ll_backend__tag_switch__HeadVar__1__tmp_copy_1 = ll_backend__tag_switch__OtherPtags_8;
#line 423 "tag_switch.m"
              MR_Word ll_backend__tag_switch__HeadVar__3__tmp_copy_3 = ll_backend__tag_switch__TestRval1_13;

#line 423 "tag_switch.m"
              ll_backend__tag_switch__HeadVar__3_3 = ll_backend__tag_switch__HeadVar__3__tmp_copy_3;
#line 423 "tag_switch.m"
              ll_backend__tag_switch__HeadVar__1_1 = ll_backend__tag_switch__HeadVar__1__tmp_copy_1;
#line 423 "tag_switch.m"
            }
#line 423 "tag_switch.m"
            continue;
#line 419 "tag_switch.m"
          }
#line 417 "tag_switch.m"
      }
#line 417 "tag_switch.m"
      break;
#line 417 "tag_switch.m"
    }
#line 414 "tag_switch.m"
}

#line 388 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(
#line 388 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_14,
#line 388 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_15,
#line 388 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MainPtag_16,
#line 388 "tag_switch.m"
  MR_Word ll_backend__tag_switch__OtherPtags_17,
#line 388 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCase_18,
#line 388 "tag_switch.m"
  MR_Integer ll_backend__tag_switch__MaxSecondary_19,
#line 388 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_20,
#line 388 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_21,
#line 388 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_22,
#line 388 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_33,
#line 388 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_34,
#line 388 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_35,
#line 388 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_36)
#line 388 "tag_switch.m"
{
#line 395 "tag_switch.m"
  {
#line 395 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_53_53;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ElseLabel_25;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestRval0_26;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestRval_27;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TestCode_28;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagLoc_29;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagGoalMap_30;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TagCode_31;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ElseCode_32;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_37_37;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_39_39;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_41_41;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_42_42;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_43_43;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_44_44;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_45_45;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_49_49;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_50_50;
#line 395 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_52_52;

#line 396 "tag_switch.m"
    {
#line 396 "tag_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__ElseLabel_25, ll_backend__tag_switch__STATE_VARIABLE_CI_0_35, &ll_backend__tag_switch__STATE_VARIABLE_CI_37_37);
    }
#line 398 "tag_switch.m"
    {
#line 398 "tag_switch.m"
      ll_backend__tag_switch__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 398 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_42_42, 0) = ((MR_Box) (ll_backend__tag_switch__MainPtag_16));
#line 398 "tag_switch.m"
    }
#line 398 "tag_switch.m"
    {
#line 398 "tag_switch.m"
      ll_backend__tag_switch__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 398 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_41_41, 1) = ((MR_Box) (ll_backend__tag_switch__V_42_42));
#line 398 "tag_switch.m"
    }
#line 398 "tag_switch.m"
    {
#line 398 "tag_switch.m"
      ll_backend__tag_switch__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 398 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 398 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_39_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 398 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_39_39, 2) = ((MR_Box) (ll_backend__tag_switch__V_41_41));
#line 398 "tag_switch.m"
    }
#line 397 "tag_switch.m"
    {
#line 397 "tag_switch.m"
      ll_backend__tag_switch__TestRval0_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 397 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 397 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 397 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_26, 2) = ((MR_Box) (ll_backend__tag_switch__PtagRval_14));
#line 397 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__TestRval0_26, 3) = ((MR_Box) (ll_backend__tag_switch__V_39_39));
#line 397 "tag_switch.m"
    }
#line 399 "tag_switch.m"
    {
#line 399 "tag_switch.m"
      ll_backend__tag_switch__generate_primary_try_me_else_chain_other_ptags_4_p_0(ll_backend__tag_switch__OtherPtags_17, ll_backend__tag_switch__PtagRval_14, ll_backend__tag_switch__TestRval0_26, &ll_backend__tag_switch__TestRval_27);
    }
#line 5893 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_53_53 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 402 "tag_switch.m"
    {
#line 402 "tag_switch.m"
      ll_backend__tag_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 402 "tag_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_45_45, 0) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_25));
#line 402 "tag_switch.m"
    }
#line 402 "tag_switch.m"
    {
#line 402 "tag_switch.m"
      ll_backend__tag_switch__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 402 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 402 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 1) = ((MR_Box) (ll_backend__tag_switch__TestRval_27));
#line 402 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_44_44, 2) = ((MR_Box) (ll_backend__tag_switch__V_45_45));
#line 402 "tag_switch.m"
    }
#line 402 "tag_switch.m"
    {
#line 402 "tag_switch.m"
      ll_backend__tag_switch__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 402 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_43_43, 0) = ((MR_Box) (ll_backend__tag_switch__V_44_44));
#line 402 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_43_43, 1) = ((MR_Box) ((MR_String) "test primary tag only"));
#line 402 "tag_switch.m"
    }
#line 401 "tag_switch.m"
    {
#line 401 "tag_switch.m"
      ll_backend__tag_switch__TestCode_28 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_53_53, ((MR_Box) (ll_backend__tag_switch__V_43_43)));
    }
#line 405 "tag_switch.m"
    ll_backend__tag_switch__StagLoc_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_18, (MR_Integer) 0)));
#line 405 "tag_switch.m"
    ll_backend__tag_switch__StagGoalMap_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_18, (MR_Integer) 1)));
#line 406 "tag_switch.m"
    {
#line 406 "tag_switch.m"
      ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_30, ll_backend__tag_switch__MainPtag_16, ll_backend__tag_switch__OtherPtags_17, ll_backend__tag_switch__MaxSecondary_19, ll_backend__tag_switch__StagReg_15, ll_backend__tag_switch__StagLoc_29, ll_backend__tag_switch__VarRval_20, ll_backend__tag_switch__MaybeFailLabel_21, &ll_backend__tag_switch__TagCode_31, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_33, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_34, ll_backend__tag_switch__STATE_VARIABLE_CI_37_37, ll_backend__tag_switch__STATE_VARIABLE_CI_36);
    }
#line 410 "tag_switch.m"
    {
#line 410 "tag_switch.m"
      ll_backend__tag_switch__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 410 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_50_50, 1) = ((MR_Box) (ll_backend__tag_switch__ElseLabel_25));
#line 410 "tag_switch.m"
    }
#line 410 "tag_switch.m"
    {
#line 410 "tag_switch.m"
      ll_backend__tag_switch__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 410 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_49_49, 0) = ((MR_Box) (ll_backend__tag_switch__V_50_50));
#line 410 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_49_49, 1) = ((MR_Box) ((MR_String) "handle next primary tag"));
#line 410 "tag_switch.m"
    }
#line 409 "tag_switch.m"
    {
#line 409 "tag_switch.m"
      ll_backend__tag_switch__ElseCode_32 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_53_53, ((MR_Box) (ll_backend__tag_switch__V_49_49)));
    }
#line 412 "tag_switch.m"
    {
#line 412 "tag_switch.m"
      ll_backend__tag_switch__V_52_52 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_53_53, ll_backend__tag_switch__TagCode_31, ll_backend__tag_switch__ElseCode_32);
    }
#line 412 "tag_switch.m"
    {
#line 412 "tag_switch.m"
      *ll_backend__tag_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_53_53, ll_backend__tag_switch__TestCode_28, ll_backend__tag_switch__V_52_52);
    }
#line 395 "tag_switch.m"
  }
#line 388 "tag_switch.m"
}

#line 354 "tag_switch.m"
static MR_bool MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0_1(
#line 354 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg)
#line 354 "tag_switch.m"
{
#line 354 "tag_switch.m"
  {
#line 354 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 354 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;

#line 354 "tag_switch.m"
    {
#line 354 "tag_switch.m"
      ll_backend__tag_switch__succeeded = ll_backend__tag_switch__IntroducedFrom__pred__generate_primary_try_me_else_chain__354__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 4))));
    }
#line 354 "tag_switch.m"
    return ll_backend__tag_switch__succeeded;
#line 354 "tag_switch.m"
  }
#line 354 "tag_switch.m"
}

#line 339 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(
#line 339 "tag_switch.m"
  MR_Word ll_backend__tag_switch__HeadVar__1_1,
#line 339 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagRval_2,
#line 339 "tag_switch.m"
  MR_Word ll_backend__tag_switch__StagReg_3,
#line 339 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_4,
#line 339 "tag_switch.m"
  MR_Word ll_backend__tag_switch__MaybeFailLabel_5,
#line 339 "tag_switch.m"
  MR_Word ll_backend__tag_switch__PtagCountMap_6,
#line 339 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_7,
#line 339 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8,
#line 339 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9,
#line 339 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_10,
#line 339 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_11)
#line 339 "tag_switch.m"
{
#line 346 "tag_switch.m"
  {
#line 346 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;

#line 346 "tag_switch.m"
    if ((ll_backend__tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 346 "tag_switch.m"
      {
#line 347 "tag_switch.m"
        {
#line 347 "tag_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_me_else_chain\'/11", (MR_String) "empty switch");
#line 347 "tag_switch.m"
          return;
        }
#line 346 "tag_switch.m"
      }
#line 346 "tag_switch.m"
    else
#line 349 "tag_switch.m"
      {
#line 349 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PtagGroup_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 349 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PtagGroups_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 349 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__MainPtag_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_27, (MR_Integer) 0)));
#line 349 "tag_switch.m"
        MR_Word ll_backend__tag_switch__OtherPtags_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_27, (MR_Integer) 1)));
#line 349 "tag_switch.m"
        MR_Word ll_backend__tag_switch__PtagCase_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagGroup_27, (MR_Integer) 2)));
#line 349 "tag_switch.m"
        MR_Word ll_backend__tag_switch__StagLoc_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_39, (MR_Integer) 0)));
#line 349 "tag_switch.m"
        MR_Word ll_backend__tag_switch__StagGoalMap_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagCase_39, (MR_Integer) 1)));
#line 349 "tag_switch.m"
        MR_Word ll_backend__tag_switch__CountInfo_42;
#line 349 "tag_switch.m"
        MR_Word ll_backend__tag_switch__StagLocPrime_43;
#line 349 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__MaxSecondary_44;
#line 349 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_55_55;
#line 352 "tag_switch.m"
        MR_Box ll_backend__tag_switch__conv0_CountInfo_42;

#line 352 "tag_switch.m"
        {
#line 352 "tag_switch.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__tag_switch_scalar_common_1[1], ll_backend__tag_switch__PtagCountMap_6, ll_backend__tag_switch__MainPtag_37, &ll_backend__tag_switch__conv0_CountInfo_42);
        }
#line 352 "tag_switch.m"
        ll_backend__tag_switch__CountInfo_42 = ((MR_Word) ll_backend__tag_switch__conv0_CountInfo_42);
#line 353 "tag_switch.m"
        ll_backend__tag_switch__StagLocPrime_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_42, (MR_Integer) 0)));
#line 353 "tag_switch.m"
        ll_backend__tag_switch__MaxSecondary_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__CountInfo_42, (MR_Integer) 1)));
#line 354 "tag_switch.m"
        {
#line 354 "tag_switch.m"
          ll_backend__tag_switch__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 354 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_5[0]));
#line 354 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 1) = ((MR_Box) (ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0_1));
#line 354 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 354 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 3) = ((MR_Box) (ll_backend__tag_switch__StagLoc_40));
#line 354 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_55_55, 4) = ((MR_Box) (ll_backend__tag_switch__StagLocPrime_43));
#line 354 "tag_switch.m"
        }
#line 354 "tag_switch.m"
        {
#line 354 "tag_switch.m"
          mercury__require__expect_4_p_0(ll_backend__tag_switch__V_55_55, (MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_primary_try_me_else_chain\'/11", (MR_String) "secondary tag locations differ");
        }
#line 365 "tag_switch.m"
        if ((ll_backend__tag_switch__PtagGroups_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "tag_switch.m"
          if ((ll_backend__tag_switch__MaybeFailLabel_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 382 "tag_switch.m"
            {
#line 382 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_tag_code_13_p_0(ll_backend__tag_switch__StagGoalMap_41, ll_backend__tag_switch__MainPtag_37, ll_backend__tag_switch__OtherPtags_38, ll_backend__tag_switch__MaxSecondary_44, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__StagLoc_40, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, ll_backend__tag_switch__Code_7, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9, ll_backend__tag_switch__STATE_VARIABLE_CI_0_10, ll_backend__tag_switch__STATE_VARIABLE_CI_11);
            }
#line 380 "tag_switch.m"
          else
#line 368 "tag_switch.m"
            {
#line 368 "tag_switch.m"
              MR_Word ll_backend__tag_switch__TypeCtorInfo_78_78;
#line 368 "tag_switch.m"
              MR_Word ll_backend__tag_switch__FailLabel_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_5, (MR_Integer) 0)));
#line 368 "tag_switch.m"
              MR_Word ll_backend__tag_switch__FailCode_50;
#line 368 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_63_63;
#line 368 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_64_64;
#line 368 "tag_switch.m"
              MR_Word ll_backend__tag_switch__V_65_65;
#line 368 "tag_switch.m"
              MR_Word ll_backend__tag_switch__ThisTagCode_71;

#line 369 "tag_switch.m"
              {
#line 369 "tag_switch.m"
                ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__MainPtag_37, ll_backend__tag_switch__OtherPtags_38, ll_backend__tag_switch__PtagCase_39, ll_backend__tag_switch__MaxSecondary_44, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, &ll_backend__tag_switch__ThisTagCode_71, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9, ll_backend__tag_switch__STATE_VARIABLE_CI_0_10, ll_backend__tag_switch__STATE_VARIABLE_CI_11);
              }
#line 6144 "ll_backend.tag_switch.c"
              ll_backend__tag_switch__TypeCtorInfo_78_78 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 376 "tag_switch.m"
              {
#line 376 "tag_switch.m"
                ll_backend__tag_switch__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 376 "tag_switch.m"
                MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_65_65, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_49));
#line 376 "tag_switch.m"
              }
#line 376 "tag_switch.m"
              {
#line 376 "tag_switch.m"
                ll_backend__tag_switch__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 376 "tag_switch.m"
                MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_64_64, 1) = ((MR_Box) (ll_backend__tag_switch__V_65_65));
#line 376 "tag_switch.m"
              }
#line 376 "tag_switch.m"
              {
#line 376 "tag_switch.m"
                ll_backend__tag_switch__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 376 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_63_63, 0) = ((MR_Box) (ll_backend__tag_switch__V_64_64));
#line 376 "tag_switch.m"
                MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_63_63, 1) = ((MR_Box) ((MR_String) "primary tag with no code to handle it"));
#line 376 "tag_switch.m"
              }
#line 375 "tag_switch.m"
              {
#line 375 "tag_switch.m"
                ll_backend__tag_switch__FailCode_50 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_78_78, ((MR_Box) (ll_backend__tag_switch__V_63_63)));
              }
#line 379 "tag_switch.m"
              {
#line 379 "tag_switch.m"
                *ll_backend__tag_switch__Code_7 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_78_78, ll_backend__tag_switch__ThisTagCode_71, ll_backend__tag_switch__FailCode_50);
              }
#line 368 "tag_switch.m"
            }
#line 365 "tag_switch.m"
        else
#line 357 "tag_switch.m"
          {
#line 357 "tag_switch.m"
            MR_Word ll_backend__tag_switch__ThisTagCode_47;
#line 357 "tag_switch.m"
            MR_Word ll_backend__tag_switch__OtherTagsCode_48;
#line 357 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_67_67;
#line 357 "tag_switch.m"
            MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_68_68;

#line 358 "tag_switch.m"
            {
#line 358 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_try_me_else_chain_case_13_p_0(ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__MainPtag_37, ll_backend__tag_switch__OtherPtags_38, ll_backend__tag_switch__PtagCase_39, ll_backend__tag_switch__MaxSecondary_44, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, &ll_backend__tag_switch__ThisTagCode_47, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_0_8, &ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_67_67, ll_backend__tag_switch__STATE_VARIABLE_CI_0_10, &ll_backend__tag_switch__STATE_VARIABLE_CI_68_68);
            }
#line 361 "tag_switch.m"
            {
#line 361 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(ll_backend__tag_switch__PtagGroups_28, ll_backend__tag_switch__PtagRval_2, ll_backend__tag_switch__StagReg_3, ll_backend__tag_switch__VarRval_4, ll_backend__tag_switch__MaybeFailLabel_5, ll_backend__tag_switch__PtagCountMap_6, &ll_backend__tag_switch__OtherTagsCode_48, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_67_67, ll_backend__tag_switch__STATE_VARIABLE_CaseLabelMap_9, ll_backend__tag_switch__STATE_VARIABLE_CI_68_68, ll_backend__tag_switch__STATE_VARIABLE_CI_11);
            }
#line 364 "tag_switch.m"
            {
#line 364 "tag_switch.m"
              *ll_backend__tag_switch__Code_7 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__tag_switch__ThisTagCode_47, ll_backend__tag_switch__OtherTagsCode_48);
            }
#line 357 "tag_switch.m"
          }
#line 349 "tag_switch.m"
      }
#line 346 "tag_switch.m"
  }
#line 339 "tag_switch.m"
}

#line 332 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0_2(
#line 332 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 332 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 332 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_2,
#line 332 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_3,
#line 332 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_4)
#line 332 "tag_switch.m"
{
#line 332 "tag_switch.m"
  {
#line 332 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;
#line 332 "tag_switch.m"
    MR_Word ll_backend__tag_switch__conv7_HeadVar__4_4;

#line 332 "tag_switch.m"
    {
#line 332 "tag_switch.m"
      ll_backend__switch_case__add_remaining_case_4_p_0(((MR_Word) ll_backend__tag_switch__wrapper_arg_1), ((MR_Word) ll_backend__tag_switch__wrapper_arg_2), ((MR_Word) ll_backend__tag_switch__wrapper_arg_3), &ll_backend__tag_switch__conv7_HeadVar__4_4);
    }
#line 332 "tag_switch.m"
    *ll_backend__tag_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__tag_switch__conv7_HeadVar__4_4));
#line 332 "tag_switch.m"
  }
#line 332 "tag_switch.m"
}

#line 227 "tag_switch.m"
static void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0_1(
#line 227 "tag_switch.m"
  MR_Box ll_backend__tag_switch__closure_arg,
#line 227 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_1,
#line 227 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_2,
#line 227 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_3,
#line 227 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_4,
#line 227 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_5,
#line 227 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_6,
#line 227 "tag_switch.m"
  MR_Box ll_backend__tag_switch__wrapper_arg_7,
#line 227 "tag_switch.m"
  MR_Box * ll_backend__tag_switch__wrapper_arg_8)
#line 227 "tag_switch.m"
{
#line 227 "tag_switch.m"
  {
#line 227 "tag_switch.m"
    MR_Box ll_backend__tag_switch__closure = ll_backend__tag_switch__closure_arg;
#line 227 "tag_switch.m"
    MR_Word ll_backend__tag_switch__conv3_HeadVar__3_3;
#line 227 "tag_switch.m"
    MR_Word ll_backend__tag_switch__conv2_HeadVar__5_5;
#line 227 "tag_switch.m"
    MR_Word ll_backend__tag_switch__conv1_HeadVar__7_7;
#line 227 "tag_switch.m"
    MR_Word ll_backend__tag_switch__conv0_HeadVar__9_9;

#line 227 "tag_switch.m"
    {
#line 227 "tag_switch.m"
      ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__tag_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__tag_switch__wrapper_arg_1), &ll_backend__tag_switch__conv3_HeadVar__3_3, ((MR_Word) ll_backend__tag_switch__wrapper_arg_3), &ll_backend__tag_switch__conv2_HeadVar__5_5, ((MR_Word) ll_backend__tag_switch__wrapper_arg_5), &ll_backend__tag_switch__conv1_HeadVar__7_7, ((MR_Word) ll_backend__tag_switch__wrapper_arg_7), &ll_backend__tag_switch__conv0_HeadVar__9_9);
    }
#line 227 "tag_switch.m"
    *ll_backend__tag_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__tag_switch__conv3_HeadVar__3_3));
#line 227 "tag_switch.m"
    *ll_backend__tag_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__tag_switch__conv2_HeadVar__5_5));
#line 227 "tag_switch.m"
    *ll_backend__tag_switch__wrapper_arg_6 = ((MR_Box) (ll_backend__tag_switch__conv1_HeadVar__7_7));
#line 227 "tag_switch.m"
    *ll_backend__tag_switch__wrapper_arg_8 = ((MR_Box) (ll_backend__tag_switch__conv0_HeadVar__9_9));
#line 227 "tag_switch.m"
  }
#line 227 "tag_switch.m"
}

#line 34 "tag_switch.m"
void MR_CALL 
ll_backend__tag_switch__generate_tag_switch_14_p_0(
#line 34 "tag_switch.m"
  MR_Word ll_backend__tag_switch__TaggedCases_15,
#line 34 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarRval_16,
#line 34 "tag_switch.m"
  MR_Word ll_backend__tag_switch__VarType_17,
#line 34 "tag_switch.m"
  MR_String ll_backend__tag_switch__VarName_18,
#line 34 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CodeModel_19,
#line 34 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CanFail_20,
#line 34 "tag_switch.m"
  MR_Word ll_backend__tag_switch__SwitchGoalInfo_21,
#line 34 "tag_switch.m"
  MR_Word ll_backend__tag_switch__EndLabel_22,
#line 34 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_MaybeEnd_0_64,
#line 34 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_MaybeEnd_65,
#line 34 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__Code_24,
#line 34 "tag_switch.m"
  MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_0_66,
#line 34 "tag_switch.m"
  MR_Word * ll_backend__tag_switch__STATE_VARIABLE_CI_67,
#line 34 "tag_switch.m"
  MR_Word ll_backend__tag_switch__CLD0_26)
#line 34 "tag_switch.m"
{
#line 199 "tag_switch.m"
  {
#line 199 "tag_switch.m"
    MR_bool ll_backend__tag_switch__succeeded;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_134_134;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_135_135;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__TypeCtorInfo_143_143;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__PtagReg_28;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__StagReg_29;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__BranchStart_30;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__ModuleInfo_31;
#line 199 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__MaxPrimary_32;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__PtagCountMap_33;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__Params_34;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__CaseLabelMap0_35;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__PtagCaseMap_37;
#line 199 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__PtagsUsed_38;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__Globals_39;
#line 199 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__DenseSwitchSize_40;
#line 199 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__TrySwitchSize_41;
#line 199 "tag_switch.m"
    MR_Integer ll_backend__tag_switch__BinarySwitchSize_42;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__PtagCode_46;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__EndCode_48;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__MaybeFailLabel_49;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__FailCode_50;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__CasesCode_55;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__CaseLabelMap_56;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__RemainingCasesCode_63;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CLD_70_70;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CLD_72_72;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CLD_73_73;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CLD_74_74;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_75_75;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_76_76;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_78_78;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_94_94;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_95_95;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_102_102;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_119_119;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_120_120;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_121_121;
#line 199 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_122_122;
#line 227 "tag_switch.m"
    MR_Word ll_backend__tag_switch__V_36_36;
#line 227 "tag_switch.m"
    MR_Box ll_backend__tag_switch__conv6_CaseLabelMap0_35;
#line 227 "tag_switch.m"
    MR_Box ll_backend__tag_switch__conv5_STATE_VARIABLE_MaybeEnd_65;
#line 227 "tag_switch.m"
    MR_Box ll_backend__tag_switch__conv4_STATE_VARIABLE_CI_78_78;
#line 332 "tag_switch.m"
    MR_Box ll_backend__tag_switch__conv8_RemainingCasesCode_63;

#line 214 "tag_switch.m"
    {
#line 214 "tag_switch.m"
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__tag_switch__PtagReg_28, ll_backend__tag_switch__CLD0_26, &ll_backend__tag_switch__STATE_VARIABLE_CLD_70_70);
    }
#line 215 "tag_switch.m"
    {
#line 215 "tag_switch.m"
      ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__STATE_VARIABLE_CLD_70_70, &ll_backend__tag_switch__STATE_VARIABLE_CLD_72_72);
    }
#line 216 "tag_switch.m"
    {
#line 216 "tag_switch.m"
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__tag_switch__PtagReg_28, ll_backend__tag_switch__STATE_VARIABLE_CLD_72_72, &ll_backend__tag_switch__STATE_VARIABLE_CLD_73_73);
    }
#line 217 "tag_switch.m"
    {
#line 217 "tag_switch.m"
      ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__STATE_VARIABLE_CLD_73_73, &ll_backend__tag_switch__STATE_VARIABLE_CLD_74_74);
    }
#line 218 "tag_switch.m"
    {
#line 218 "tag_switch.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__tag_switch__STATE_VARIABLE_CLD_74_74, &ll_backend__tag_switch__BranchStart_30);
    }
#line 223 "tag_switch.m"
    {
#line 223 "tag_switch.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__tag_switch__STATE_VARIABLE_CI_0_66, &ll_backend__tag_switch__ModuleInfo_31);
    }
#line 224 "tag_switch.m"
    {
#line 224 "tag_switch.m"
      backend_libs__switch_util__get_ptag_counts_4_p_0(ll_backend__tag_switch__VarType_17, ll_backend__tag_switch__ModuleInfo_31, &ll_backend__tag_switch__MaxPrimary_32, &ll_backend__tag_switch__PtagCountMap_33);
    }
#line 225 "tag_switch.m"
    {
#line 225 "tag_switch.m"
      ll_backend__tag_switch__Params_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 225 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_34, 0) = ((MR_Box) (ll_backend__tag_switch__VarName_18));
#line 225 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_34, 1) = ((MR_Box) (ll_backend__tag_switch__SwitchGoalInfo_21));
#line 225 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_34, 2) = ((MR_Box) (ll_backend__tag_switch__CodeModel_19));
#line 225 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_34, 3) = ((MR_Box) (ll_backend__tag_switch__BranchStart_30));
#line 225 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__Params_34, 4) = ((MR_Box) (ll_backend__tag_switch__EndLabel_22));
#line 225 "tag_switch.m"
    }
#line 227 "tag_switch.m"
    {
#line 227 "tag_switch.m"
      ll_backend__tag_switch__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 227 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_75_75, 0) = ((MR_Box) (&ll_backend__tag_switch_scalar_common_3[0]));
#line 227 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_75_75, 1) = ((MR_Box) (ll_backend__tag_switch__generate_tag_switch_14_p_0_1));
#line 227 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 227 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_75_75, 3) = ((MR_Box) (ll_backend__tag_switch__Params_34));
#line 227 "tag_switch.m"
    }
#line 6500 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_134_134 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 6502 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_135_135 = (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0;
#line 228 "tag_switch.m"
    {
#line 228 "tag_switch.m"
      ll_backend__tag_switch__V_76_76 = mercury__map__init_0_f_0(ll_backend__tag_switch__TypeCtorInfo_134_134, ll_backend__tag_switch__TypeCtorInfo_135_135);
    }
#line 227 "tag_switch.m"
    {
#line 227 "tag_switch.m"
      backend_libs__switch_util__group_cases_by_ptag_10_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, (MR_Word) &ll_backend__tag_switch_scalar_common_1[0], (MR_Word) &ll_backend__tag_switch_scalar_common_2[0], (MR_Word) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0, ll_backend__tag_switch__TaggedCases_15, ll_backend__tag_switch__V_75_75, ((MR_Box) (ll_backend__tag_switch__V_76_76)), &ll_backend__tag_switch__conv6_CaseLabelMap0_35, ((MR_Box) (ll_backend__tag_switch__STATE_VARIABLE_MaybeEnd_0_64)), &ll_backend__tag_switch__conv5_STATE_VARIABLE_MaybeEnd_65, ((MR_Box) (ll_backend__tag_switch__STATE_VARIABLE_CI_0_66)), &ll_backend__tag_switch__conv4_STATE_VARIABLE_CI_78_78, &ll_backend__tag_switch__V_36_36, &ll_backend__tag_switch__PtagCaseMap_37);
    }
#line 227 "tag_switch.m"
    ll_backend__tag_switch__CaseLabelMap0_35 = ((MR_Word) ll_backend__tag_switch__conv6_CaseLabelMap0_35);
#line 227 "tag_switch.m"
    *ll_backend__tag_switch__STATE_VARIABLE_MaybeEnd_65 = ((MR_Word) ll_backend__tag_switch__conv5_STATE_VARIABLE_MaybeEnd_65);
#line 227 "tag_switch.m"
    ll_backend__tag_switch__STATE_VARIABLE_CI_78_78 = ((MR_Word) ll_backend__tag_switch__conv4_STATE_VARIABLE_CI_78_78);
#line 230 "tag_switch.m"
    {
#line 230 "tag_switch.m"
      mercury__map__count_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__tag_switch_scalar_common_2[1], ll_backend__tag_switch__PtagCaseMap_37, &ll_backend__tag_switch__PtagsUsed_38);
    }
#line 231 "tag_switch.m"
    {
#line 231 "tag_switch.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__tag_switch__STATE_VARIABLE_CI_78_78, &ll_backend__tag_switch__Globals_39);
    }
#line 232 "tag_switch.m"
    {
#line 232 "tag_switch.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_39, (MR_Integer) 429, &ll_backend__tag_switch__DenseSwitchSize_40);
    }
#line 233 "tag_switch.m"
    {
#line 233 "tag_switch.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_39, (MR_Integer) 435, &ll_backend__tag_switch__TrySwitchSize_41);
    }
#line 234 "tag_switch.m"
    {
#line 234 "tag_switch.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_39, (MR_Integer) 436, &ll_backend__tag_switch__BinarySwitchSize_42);
    }
#line 6545 "ll_backend.tag_switch.c"
    ll_backend__tag_switch__TypeCtorInfo_143_143 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 272 "tag_switch.m"
    {
#line 272 "tag_switch.m"
      ll_backend__tag_switch__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 272 "tag_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_95_95, 1) = ((MR_Box) (ll_backend__tag_switch__EndLabel_22));
#line 272 "tag_switch.m"
    }
#line 272 "tag_switch.m"
    {
#line 272 "tag_switch.m"
      ll_backend__tag_switch__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 272 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_94_94, 0) = ((MR_Box) (ll_backend__tag_switch__V_95_95));
#line 272 "tag_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_94_94, 1) = ((MR_Box) ((MR_String) "end of tag switch"));
#line 272 "tag_switch.m"
    }
#line 271 "tag_switch.m"
    {
#line 271 "tag_switch.m"
      ll_backend__tag_switch__EndCode_48 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ((MR_Box) (ll_backend__tag_switch__V_94_94)));
    }
#line 278 "tag_switch.m"
#line 278 "tag_switch.m"
    switch (ll_backend__tag_switch__CanFail_20) {
#line 278 "tag_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 278 "tag_switch.m"
      case (MR_Integer) 0:
#line 279 "tag_switch.m"
        {
#line 279 "tag_switch.m"
          MR_Word ll_backend__tag_switch__FailLabel_51;
#line 279 "tag_switch.m"
          MR_Word ll_backend__tag_switch__FailLabelCode_52;
#line 279 "tag_switch.m"
          MR_Word ll_backend__tag_switch__FailureCode_53;
#line 279 "tag_switch.m"
          MR_Word ll_backend__tag_switch__STATE_VARIABLE_CI_97_97;
#line 279 "tag_switch.m"
          MR_Word ll_backend__tag_switch__V_98_98;
#line 279 "tag_switch.m"
          MR_Word ll_backend__tag_switch__V_99_99;
#line 279 "tag_switch.m"
          MR_Word ll_backend__tag_switch__STATE_VARIABLE_CLD_101_101;

#line 280 "tag_switch.m"
          {
#line 280 "tag_switch.m"
            ll_backend__code_info__get_next_label_3_p_0(&ll_backend__tag_switch__FailLabel_51, ll_backend__tag_switch__STATE_VARIABLE_CI_78_78, &ll_backend__tag_switch__STATE_VARIABLE_CI_97_97);
          }
#line 281 "tag_switch.m"
          {
#line 281 "tag_switch.m"
            ll_backend__tag_switch__MaybeFailLabel_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 281 "tag_switch.m"
            MR_hl_field(MR_mktag(1), ll_backend__tag_switch__MaybeFailLabel_49, 0) = ((MR_Box) (ll_backend__tag_switch__FailLabel_51));
#line 281 "tag_switch.m"
          }
#line 283 "tag_switch.m"
          {
#line 283 "tag_switch.m"
            ll_backend__tag_switch__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "tag_switch.m"
            MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 283 "tag_switch.m"
            MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_99_99, 1) = ((MR_Box) (ll_backend__tag_switch__FailLabel_51));
#line 283 "tag_switch.m"
          }
#line 283 "tag_switch.m"
          {
#line 283 "tag_switch.m"
            ll_backend__tag_switch__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "tag_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_98_98, 0) = ((MR_Box) (ll_backend__tag_switch__V_99_99));
#line 283 "tag_switch.m"
            MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_98_98, 1) = ((MR_Box) ((MR_String) "switch has failed"));
#line 283 "tag_switch.m"
          }
#line 282 "tag_switch.m"
          {
#line 282 "tag_switch.m"
            ll_backend__tag_switch__FailLabelCode_52 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ((MR_Box) (ll_backend__tag_switch__V_98_98)));
          }
#line 288 "tag_switch.m"
          {
#line 288 "tag_switch.m"
            ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__tag_switch__BranchStart_30, ll_backend__tag_switch__STATE_VARIABLE_CI_97_97, &ll_backend__tag_switch__STATE_VARIABLE_CLD_101_101);
          }
#line 289 "tag_switch.m"
          {
#line 289 "tag_switch.m"
            ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__tag_switch__FailureCode_53, ll_backend__tag_switch__STATE_VARIABLE_CI_97_97, &ll_backend__tag_switch__STATE_VARIABLE_CI_102_102, ll_backend__tag_switch__STATE_VARIABLE_CLD_101_101);
          }
#line 291 "tag_switch.m"
          {
#line 291 "tag_switch.m"
            ll_backend__tag_switch__FailCode_50 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__FailLabelCode_52, ll_backend__tag_switch__FailureCode_53);
          }
#line 279 "tag_switch.m"
        }
#line 278 "tag_switch.m"
        break;
#line 278 "tag_switch.m"
      case (MR_Integer) 1:
#line 275 "tag_switch.m"
        {
#line 276 "tag_switch.m"
          ll_backend__tag_switch__MaybeFailLabel_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 277 "tag_switch.m"
          {
#line 277 "tag_switch.m"
            ll_backend__tag_switch__FailCode_50 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143);
          }
#line 275 "tag_switch.m"
          ll_backend__tag_switch__STATE_VARIABLE_CI_102_102 = ll_backend__tag_switch__STATE_VARIABLE_CI_78_78;
#line 275 "tag_switch.m"
        }
#line 278 "tag_switch.m"
        break;
#line 278 "tag_switch.m"
    }
#line 235 "tag_switch.m"
    ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagsUsed_38 >= ll_backend__tag_switch__DenseSwitchSize_40);
#line 6674 "ll_backend.tag_switch.c"
    if (ll_backend__tag_switch__succeeded)
#line 6676 "ll_backend.tag_switch.c"
      {
#line 6678 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__PtagRval_47;
#line 6680 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__Targets_57;
#line 6682 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__TableCode_58;
#line 6684 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__SwitchCode_59;
#line 6686 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__V_112_112;
#line 6688 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__V_113_113;
#line 6690 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__PtagCaseList_123;

#line 265 "tag_switch.m"
        {
#line 265 "tag_switch.m"
          ll_backend__tag_switch__PtagCode_46 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 266 "tag_switch.m"
        {
#line 266 "tag_switch.m"
          ll_backend__tag_switch__PtagRval_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 266 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 266 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_47, 1) = ((MR_Box) ((MR_Integer) 1));
#line 266 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_47, 2) = ((MR_Box) (ll_backend__tag_switch__VarRval_16));
#line 266 "tag_switch.m"
        }
#line 302 "tag_switch.m"
        {
#line 302 "tag_switch.m"
          backend_libs__switch_util__order_ptags_by_value_4_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, (MR_Integer) 0, ll_backend__tag_switch__MaxPrimary_32, ll_backend__tag_switch__PtagCaseMap_37, &ll_backend__tag_switch__PtagCaseList_123);
        }
#line 303 "tag_switch.m"
        {
#line 303 "tag_switch.m"
          ll_backend__tag_switch__generate_primary_jump_table_13_p_0(ll_backend__tag_switch__PtagCaseList_123, (MR_Integer) 0, ll_backend__tag_switch__MaxPrimary_32, ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__VarRval_16, ll_backend__tag_switch__MaybeFailLabel_49, ll_backend__tag_switch__PtagCountMap_33, &ll_backend__tag_switch__Targets_57, &ll_backend__tag_switch__TableCode_58, ll_backend__tag_switch__CaseLabelMap0_35, &ll_backend__tag_switch__CaseLabelMap_56, ll_backend__tag_switch__STATE_VARIABLE_CI_102_102, ll_backend__tag_switch__STATE_VARIABLE_CI_67);
        }
#line 307 "tag_switch.m"
        {
#line 307 "tag_switch.m"
          ll_backend__tag_switch__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 307 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 307 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_113_113, 1) = ((MR_Box) (ll_backend__tag_switch__PtagRval_47));
#line 307 "tag_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_113_113, 2) = ((MR_Box) (ll_backend__tag_switch__Targets_57));
#line 307 "tag_switch.m"
        }
#line 307 "tag_switch.m"
        {
#line 307 "tag_switch.m"
          ll_backend__tag_switch__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 307 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_112_112, 0) = ((MR_Box) (ll_backend__tag_switch__V_113_113));
#line 307 "tag_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_112_112, 1) = ((MR_Box) ((MR_String) "switch on primary tag"));
#line 307 "tag_switch.m"
        }
#line 306 "tag_switch.m"
        {
#line 306 "tag_switch.m"
          ll_backend__tag_switch__SwitchCode_59 = mercury__cord__singleton_1_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ((MR_Box) (ll_backend__tag_switch__V_112_112)));
        }
#line 310 "tag_switch.m"
        {
#line 310 "tag_switch.m"
          ll_backend__tag_switch__CasesCode_55 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__SwitchCode_59, ll_backend__tag_switch__TableCode_58);
        }
#line 6752 "ll_backend.tag_switch.c"
      }
#line 6754 "ll_backend.tag_switch.c"
    else
#line 6756 "ll_backend.tag_switch.c"
      {
#line 6758 "ll_backend.tag_switch.c"
        MR_Word ll_backend__tag_switch__PtagRval_167;
#line 246 "tag_switch.m"
        MR_Integer ll_backend__tag_switch__NumRealRegs_44;
#line 246 "tag_switch.m"
        MR_Word ll_backend__tag_switch__V_83_83;

#line 247 "tag_switch.m"
        ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagsUsed_38 >= (MR_Integer) 2);
#line 246 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 246 "tag_switch.m"
          {
#line 248 "tag_switch.m"
            ll_backend__tag_switch__V_83_83 = (MR_Integer) 304;
#line 248 "tag_switch.m"
            {
#line 248 "tag_switch.m"
              libs__globals__lookup_int_option_3_p_0(ll_backend__tag_switch__Globals_39, ll_backend__tag_switch__V_83_83, &ll_backend__tag_switch__NumRealRegs_44);
            }
#line 250 "tag_switch.m"
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__NumRealRegs_44 == (MR_Integer) 0);
#line 251 "tag_switch.m"
            if (!(ll_backend__tag_switch__succeeded))
#line 252 "tag_switch.m"
              {
#line 252 "tag_switch.m"
                MR_Integer ll_backend__tag_switch__PtagRegNo_45;
#line 252 "tag_switch.m"
                MR_Word ll_backend__tag_switch__V_84_84;

#line 252 "tag_switch.m"
                ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__PtagReg_28)) == (MR_mktag((MR_Integer) 1)));
#line 252 "tag_switch.m"
                if (ll_backend__tag_switch__succeeded)
#line 252 "tag_switch.m"
                  {
#line 252 "tag_switch.m"
                    ll_backend__tag_switch__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagReg_28, (MR_Integer) 0)));
#line 252 "tag_switch.m"
                    ll_backend__tag_switch__PtagRegNo_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagReg_28, (MR_Integer) 1)));
#line 252 "tag_switch.m"
                    ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__V_84_84 == (MR_Integer) 0);
#line 252 "tag_switch.m"
                  }
#line 252 "tag_switch.m"
                if (ll_backend__tag_switch__succeeded)
#line 253 "tag_switch.m"
                  ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagRegNo_45 <= ll_backend__tag_switch__NumRealRegs_44);
#line 252 "tag_switch.m"
                else
#line 255 "tag_switch.m"
                  {
#line 255 "tag_switch.m"
                    {
#line 255 "tag_switch.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.tag_switch", (MR_String) "predicate \140ll_backend.tag_switch.generate_tag_switch\'/14", (MR_String) "improper reg in tag switch");
#line 255 "tag_switch.m"
                      return;
                    }
#line 255 "tag_switch.m"
                    ll_backend__tag_switch__succeeded = MR_TRUE;
#line 255 "tag_switch.m"
                  }
#line 252 "tag_switch.m"
              }
#line 246 "tag_switch.m"
          }
#line 245 "tag_switch.m"
        if (ll_backend__tag_switch__succeeded)
#line 262 "tag_switch.m"
          {
#line 262 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_150_150;
#line 262 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_151_151;
#line 262 "tag_switch.m"
            MR_Word ll_backend__tag_switch__V_152_152;

#line 260 "tag_switch.m"
            {
#line 260 "tag_switch.m"
              ll_backend__tag_switch__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 260 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 260 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_152_152, 1) = ((MR_Box) ((MR_Integer) 1));
#line 260 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_152_152, 2) = ((MR_Box) (ll_backend__tag_switch__VarRval_16));
#line 260 "tag_switch.m"
            }
#line 260 "tag_switch.m"
            {
#line 260 "tag_switch.m"
              ll_backend__tag_switch__V_151_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 260 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_151_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 260 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_151_151, 1) = ((MR_Box) (ll_backend__tag_switch__PtagReg_28));
#line 260 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__V_151_151, 2) = ((MR_Box) (ll_backend__tag_switch__V_152_152));
#line 260 "tag_switch.m"
            }
#line 260 "tag_switch.m"
            {
#line 260 "tag_switch.m"
              ll_backend__tag_switch__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 260 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_150_150, 0) = ((MR_Box) (ll_backend__tag_switch__V_151_151));
#line 260 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__V_150_150, 1) = ((MR_Box) ((MR_String) "compute tag to switch on"));
#line 260 "tag_switch.m"
            }
#line 259 "tag_switch.m"
            {
#line 259 "tag_switch.m"
              ll_backend__tag_switch__PtagCode_46 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__tag_switch__V_150_150)));
            }
#line 263 "tag_switch.m"
            {
#line 263 "tag_switch.m"
              ll_backend__tag_switch__PtagRval_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 263 "tag_switch.m"
              MR_hl_field(MR_mktag(0), ll_backend__tag_switch__PtagRval_167, 0) = ((MR_Box) (ll_backend__tag_switch__PtagReg_28));
#line 263 "tag_switch.m"
            }
#line 262 "tag_switch.m"
          }
#line 245 "tag_switch.m"
        else
#line 265 "tag_switch.m"
          {
#line 265 "tag_switch.m"
            {
#line 265 "tag_switch.m"
              ll_backend__tag_switch__PtagCode_46 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 266 "tag_switch.m"
            {
#line 266 "tag_switch.m"
              ll_backend__tag_switch__PtagRval_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 266 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_167, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 266 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_167, 1) = ((MR_Box) ((MR_Integer) 1));
#line 266 "tag_switch.m"
              MR_hl_field(MR_mktag(3), ll_backend__tag_switch__PtagRval_167, 2) = ((MR_Box) (ll_backend__tag_switch__VarRval_16));
#line 266 "tag_switch.m"
            }
#line 265 "tag_switch.m"
          }
#line 237 "tag_switch.m"
        ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagsUsed_38 >= ll_backend__tag_switch__BinarySwitchSize_42);
#line 6911 "ll_backend.tag_switch.c"
        if (ll_backend__tag_switch__succeeded)
#line 6913 "ll_backend.tag_switch.c"
          {
#line 6915 "ll_backend.tag_switch.c"
            MR_Word ll_backend__tag_switch__PtagCaseList_54;

#line 296 "tag_switch.m"
            {
#line 296 "tag_switch.m"
              backend_libs__switch_util__order_ptags_by_value_4_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, (MR_Integer) 0, ll_backend__tag_switch__MaxPrimary_32, ll_backend__tag_switch__PtagCaseMap_37, &ll_backend__tag_switch__PtagCaseList_54);
            }
#line 297 "tag_switch.m"
            {
#line 297 "tag_switch.m"
              ll_backend__tag_switch__generate_primary_binary_search_13_p_0(ll_backend__tag_switch__PtagCaseList_54, (MR_Integer) 0, ll_backend__tag_switch__MaxPrimary_32, ll_backend__tag_switch__PtagRval_167, ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__VarRval_16, ll_backend__tag_switch__MaybeFailLabel_49, ll_backend__tag_switch__PtagCountMap_33, &ll_backend__tag_switch__CasesCode_55, ll_backend__tag_switch__CaseLabelMap0_35, &ll_backend__tag_switch__CaseLabelMap_56, ll_backend__tag_switch__STATE_VARIABLE_CI_102_102, ll_backend__tag_switch__STATE_VARIABLE_CI_67);
            }
#line 6928 "ll_backend.tag_switch.c"
          }
#line 6930 "ll_backend.tag_switch.c"
        else
#line 6932 "ll_backend.tag_switch.c"
          {
#line 239 "tag_switch.m"
            ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__PtagsUsed_38 >= ll_backend__tag_switch__TrySwitchSize_41);
#line 6936 "ll_backend.tag_switch.c"
            if (ll_backend__tag_switch__succeeded)
#line 6938 "ll_backend.tag_switch.c"
              {
#line 6940 "ll_backend.tag_switch.c"
                MR_Word ll_backend__tag_switch__PtagCaseList0_60;
#line 6942 "ll_backend.tag_switch.c"
                MR_Word ll_backend__tag_switch__V_106_106;
#line 6944 "ll_backend.tag_switch.c"
                MR_Word ll_backend__tag_switch__V_107_107;
#line 6946 "ll_backend.tag_switch.c"
                MR_Word ll_backend__tag_switch__PtagCaseList_124;
#line 314 "tag_switch.m"
                MR_Word ll_backend__tag_switch__MostFreqCase_61;
#line 314 "tag_switch.m"
                MR_Word ll_backend__tag_switch__OtherCases_62;

#line 313 "tag_switch.m"
                {
#line 313 "tag_switch.m"
                  backend_libs__switch_util__order_ptags_by_count_3_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, ll_backend__tag_switch__PtagCountMap_33, ll_backend__tag_switch__PtagCaseMap_37, &ll_backend__tag_switch__PtagCaseList0_60);
                }
#line 315 "tag_switch.m"
                ll_backend__tag_switch__succeeded = (ll_backend__tag_switch__CanFail_20 == (MR_Integer) 1);
#line 315 "tag_switch.m"
                if (ll_backend__tag_switch__succeeded)
#line 315 "tag_switch.m"
                  {
#line 316 "tag_switch.m"
                    ll_backend__tag_switch__succeeded = ((MR_tag((MR_Word) ll_backend__tag_switch__PtagCaseList0_60)) == (MR_mktag((MR_Integer) 1)));
#line 316 "tag_switch.m"
                    if (ll_backend__tag_switch__succeeded)
#line 316 "tag_switch.m"
                      {
#line 316 "tag_switch.m"
                        ll_backend__tag_switch__MostFreqCase_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagCaseList0_60, (MR_Integer) 0)));
#line 316 "tag_switch.m"
                        ll_backend__tag_switch__OtherCases_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__tag_switch__PtagCaseList0_60, (MR_Integer) 1)));
#line 316 "tag_switch.m"
                      }
#line 315 "tag_switch.m"
                  }
#line 314 "tag_switch.m"
                if (ll_backend__tag_switch__succeeded)
#line 318 "tag_switch.m"
                  {
#line 318 "tag_switch.m"
                    MR_Word ll_backend__tag_switch__V_104_104;

#line 318 "tag_switch.m"
                    {
#line 318 "tag_switch.m"
                      ll_backend__tag_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "tag_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_104_104, 0) = ((MR_Box) (ll_backend__tag_switch__MostFreqCase_61));
#line 318 "tag_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__tag_switch__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "tag_switch.m"
                    }
#line 318 "tag_switch.m"
                    {
#line 318 "tag_switch.m"
                      ll_backend__tag_switch__PtagCaseList_124 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__tag_switch_scalar_common_2[2], ll_backend__tag_switch__OtherCases_62, ll_backend__tag_switch__V_104_104);
                    }
#line 318 "tag_switch.m"
                  }
#line 314 "tag_switch.m"
                else
#line 320 "tag_switch.m"
                  ll_backend__tag_switch__PtagCaseList_124 = ll_backend__tag_switch__PtagCaseList0_60;
#line 323 "tag_switch.m"
                {
#line 323 "tag_switch.m"
                  ll_backend__tag_switch__V_106_106 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143);
                }
#line 323 "tag_switch.m"
                {
#line 323 "tag_switch.m"
                  ll_backend__tag_switch__V_107_107 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143);
                }
#line 322 "tag_switch.m"
                {
#line 322 "tag_switch.m"
                  ll_backend__tag_switch__generate_primary_try_chain_13_p_0(ll_backend__tag_switch__PtagCaseList_124, ll_backend__tag_switch__PtagRval_167, ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__VarRval_16, ll_backend__tag_switch__MaybeFailLabel_49, ll_backend__tag_switch__PtagCountMap_33, ll_backend__tag_switch__V_106_106, ll_backend__tag_switch__V_107_107, &ll_backend__tag_switch__CasesCode_55, ll_backend__tag_switch__CaseLabelMap0_35, &ll_backend__tag_switch__CaseLabelMap_56, ll_backend__tag_switch__STATE_VARIABLE_CI_102_102, ll_backend__tag_switch__STATE_VARIABLE_CI_67);
                }
#line 7021 "ll_backend.tag_switch.c"
              }
#line 7023 "ll_backend.tag_switch.c"
            else
#line 7025 "ll_backend.tag_switch.c"
              {
#line 7027 "ll_backend.tag_switch.c"
                MR_Word ll_backend__tag_switch__PtagCaseList_125;

#line 327 "tag_switch.m"
                {
#line 327 "tag_switch.m"
                  backend_libs__switch_util__order_ptags_by_count_3_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, ll_backend__tag_switch__PtagCountMap_33, ll_backend__tag_switch__PtagCaseMap_37, &ll_backend__tag_switch__PtagCaseList_125);
                }
#line 328 "tag_switch.m"
                {
#line 328 "tag_switch.m"
                  ll_backend__tag_switch__generate_primary_try_me_else_chain_11_p_0(ll_backend__tag_switch__PtagCaseList_125, ll_backend__tag_switch__PtagRval_167, ll_backend__tag_switch__StagReg_29, ll_backend__tag_switch__VarRval_16, ll_backend__tag_switch__MaybeFailLabel_49, ll_backend__tag_switch__PtagCountMap_33, &ll_backend__tag_switch__CasesCode_55, ll_backend__tag_switch__CaseLabelMap0_35, &ll_backend__tag_switch__CaseLabelMap_56, ll_backend__tag_switch__STATE_VARIABLE_CI_102_102, ll_backend__tag_switch__STATE_VARIABLE_CI_67);
                }
#line 7040 "ll_backend.tag_switch.c"
              }
#line 7042 "ll_backend.tag_switch.c"
          }
#line 7044 "ll_backend.tag_switch.c"
      }
#line 332 "tag_switch.m"
    {
#line 332 "tag_switch.m"
      ll_backend__tag_switch__V_119_119 = mercury__cord__empty_0_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143);
    }
#line 332 "tag_switch.m"
    {
#line 332 "tag_switch.m"
      mercury__map__foldl_4_p_0(ll_backend__tag_switch__TypeCtorInfo_134_134, ll_backend__tag_switch__TypeCtorInfo_135_135, (MR_Word) &ll_backend__tag_switch_scalar_common_2[3], (MR_Word) &ll_backend__tag_switch_scalar_common_1[3], ll_backend__tag_switch__CaseLabelMap_56, ((MR_Box) (ll_backend__tag_switch__V_119_119)), &ll_backend__tag_switch__conv8_RemainingCasesCode_63);
    }
#line 332 "tag_switch.m"
    ll_backend__tag_switch__RemainingCasesCode_63 = ((MR_Word) ll_backend__tag_switch__conv8_RemainingCasesCode_63);
#line 333 "tag_switch.m"
    {
#line 333 "tag_switch.m"
      ll_backend__tag_switch__V_122_122 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__FailCode_50, ll_backend__tag_switch__EndCode_48);
    }
#line 333 "tag_switch.m"
    {
#line 333 "tag_switch.m"
      ll_backend__tag_switch__V_121_121 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__RemainingCasesCode_63, ll_backend__tag_switch__V_122_122);
    }
#line 333 "tag_switch.m"
    {
#line 333 "tag_switch.m"
      ll_backend__tag_switch__V_120_120 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__CasesCode_55, ll_backend__tag_switch__V_121_121);
    }
#line 333 "tag_switch.m"
    {
#line 333 "tag_switch.m"
      *ll_backend__tag_switch__Code_24 = mercury__cord__f_43_43_2_f_0(ll_backend__tag_switch__TypeCtorInfo_143_143, ll_backend__tag_switch__PtagCode_46, ll_backend__tag_switch__V_120_120);
    }
#line 199 "tag_switch.m"
  }
#line 34 "tag_switch.m"
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
