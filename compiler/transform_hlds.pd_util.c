/*
** Automatically generated from `pd_util.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module transform_hlds.pd_util. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__pd_util__init
ENDINIT
*/

#include "transform_hlds.pd_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_analysis.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.unify_proc.mih"
#include "check_hlds.unique_modes.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
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
#include "transform_hlds.constraint.mih"
#include "transform_hlds.pd_debug.mih"
#include "transform_hlds.pd_info.mih"
#include "transform_hlds.pd_term.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 151 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 154 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_util__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 163 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 166 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_util__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 175 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 178 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 181 "transform_hlds.pd_util.c"
static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____expansions_0_0_10001(
#line 184 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 186 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_2);

#line 189 "transform_hlds.pd_util.c"
static void MR_CALL 
transform_hlds__pd_util____Compare____expansions_0_0_10001(
#line 192 "transform_hlds.pd_util.c"
  MR_Box * transform_hlds__pd_util__wrapper_arg_1,
#line 194 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
#line 196 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_3);

#line 199 "transform_hlds.pd_util.c"
static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____pd_var_info_0_0_10001(
#line 202 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 204 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_2);

#line 207 "transform_hlds.pd_util.c"
static void MR_CALL 
transform_hlds__pd_util____Compare____pd_var_info_0_0_10001(
#line 210 "transform_hlds.pd_util.c"
  MR_Box * transform_hlds__pd_util__wrapper_arg_1,
#line 212 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
#line 214 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_3);

#line 729 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(
#line 729 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 729 "pd_util.m"
  MR_Word transform_hlds__pd_util__ProcArgInfo_2,
#line 729 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_3,
#line 729 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
#line 729 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_6,
#line 729 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
#line 729 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8);

#line 696 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_p_0(
#line 696 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 696 "pd_util.m"
  MR_Word transform_hlds__pd_util__ProcArgInfo_2,
#line 696 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_3,
#line 696 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
#line 696 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_6,
#line 696 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
#line 696 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8);

#line 572 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0_2(
#line 572 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 572 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 572 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2);

#line 580 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0_1(
#line 580 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 580 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 580 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2);

#line 529 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0(
#line 529 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 529 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 529 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
#line 529 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap0_5,
#line 529 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6,
#line 529 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_LeftVars_7,
#line 529 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8,
#line 529 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_9);

#line 1011 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0_1(
#line 1011 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 1011 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 1011 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2);

#line 1101 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1101__1_3_p_0(
#line 1101 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_93,
#line 1101 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_94,
#line 1101 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__3_95);

#line 624 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__624__1_7_p_0(
#line 624 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 624 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_4,
#line 624 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_5,
#line 624 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMapDelta_17,
#line 624 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__5_43,
#line 624 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__6_44,
#line 624 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__7_45);

#line 572 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__572__1_2_p_0(
#line 572 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_37,
#line 572 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__2_38);

#line 580 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__580__1_2_p_0(
#line 580 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_35,
#line 580 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__2_36);

#line 380 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__rerun_det_analysis__380__1_2_p_0(
#line 380 "pd_util.m"
  MR_Word transform_hlds__pd_util__ContainsErrors_29,
#line 380 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_42);

#line 1011 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goals_match__1011__1_3_p_0(
#line 1011 "pd_util.m"
  MR_Word transform_hlds__pd_util__OldNewRenaming_15,
#line 1011 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_30,
#line 1011 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__3_31);

#line 395 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__395__1_3_p_0(
#line 395 "pd_util.m"
  MR_Word transform_hlds__pd_util__Args_5,
#line 395 "pd_util.m"
  MR_Integer transform_hlds__pd_util__HeadVar__2_27,
#line 395 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__3_28);

#line 391 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__391__1_3_p_0(
#line 391 "pd_util.m"
  MR_Word transform_hlds__pd_util__Args_5,
#line 391 "pd_util.m"
  MR_Integer transform_hlds__pd_util__HeadVar__2_24,
#line 391 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__3_25);

#line 187 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__187__1_2_p_0(
#line 187 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_16,
#line 187 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__2_17);

#line 411 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util____Compare____pd_var_info_0_0(
#line 411 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__1_1,
#line 411 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 411 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3);

#line 411 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____pd_var_info_0_0(
#line 411 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 411 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2);

#line 811 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util____Compare____expansions_0_0(
#line 811 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__1_1,
#line 811 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 811 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3);

#line 811 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____expansions_0_0(
#line 811 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 811 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2);

#line 1131 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__match_generic_call_2_p_0(
#line 1131 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 1131 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2);

#line 1101 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_2_4_p_0_1(
#line 1101 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 1101 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 1101 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
#line 1101 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_3);

#line 1048 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_2_4_p_0(
#line 1048 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 1048 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 1048 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3,
#line 1048 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_4);

#line 1026 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__collect_matching_arg_types_5_p_0(
#line 1026 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 1026 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 1026 "pd_util.m"
  MR_Word transform_hlds__pd_util__Renaming_3,
#line 1026 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4,
#line 1026 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_5);

#line 990 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__inst_list_size_5_p_0(
#line 990 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 990 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 990 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_3,
#line 990 "pd_util.m"
  MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_0_4,
#line 990 "pd_util.m"
  MR_Integer * transform_hlds__pd_util__STATE_VARIABLE_Size_5);

#line 976 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__bound_inst_size_5_p_0(
#line 976 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 976 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 976 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_3,
#line 976 "pd_util.m"
  MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_0_4,
#line 976 "pd_util.m"
  MR_Integer * transform_hlds__pd_util__STATE_VARIABLE_Size_5);

#line 945 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__inst_size_2_4_p_0(
#line 945 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_5,
#line 945 "pd_util.m"
  MR_Word transform_hlds__pd_util__Inst_6,
#line 945 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23,
#line 945 "pd_util.m"
  MR_Integer * transform_hlds__pd_util__Size_8);

#line 897 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(
#line 897 "pd_util.m"
  MR_Word transform_hlds__pd_util__Xs_8,
#line 897 "pd_util.m"
  MR_Word transform_hlds__pd_util__Ys_9,
#line 897 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_10,
#line 897 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_11,
#line 897 "pd_util.m"
  MR_Word transform_hlds__pd_util__Uniq_12,
#line 897 "pd_util.m"
  MR_Word transform_hlds__pd_util__BoundInsts_13,
#line 897 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Inst_14);

#line 878 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__inst_list_MSG_5_p_0(
#line 878 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 878 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 878 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_3,
#line 878 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
#line 878 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__5_5);

#line 833 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__inst_MSG_2_5_p_0(
#line 833 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstA_6,
#line 833 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstB_7,
#line 833 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_8,
#line 833 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_9,
#line 833 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Inst_10);

#line 764 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__combine_vars_4_p_0(
#line 764 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_1,
#line 764 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 764 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3,
#line 764 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_4);

#line 710 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__examine_case_list_10_p_0(
#line 710 "pd_util.m"
  MR_Word transform_hlds__pd_util__ProcArgInfo_1,
#line 710 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_2,
#line 710 "pd_util.m"
  MR_Word transform_hlds__pd_util__Var_3,
#line 710 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
#line 710 "pd_util.m"
  MR_Word transform_hlds__pd_util__VarTypes_5,
#line 710 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap0_6,
#line 710 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
#line 710 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8,
#line 710 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_9,
#line 710 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_10);

#line 650 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_sub_branch_vars_goal_8_p_0(
#line 650 "pd_util.m"
  MR_Word transform_hlds__pd_util__ProcArgInfo_1,
#line 650 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 650 "pd_util.m"
  MR_Word transform_hlds__pd_util__VarTypes_3,
#line 650 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap0_4,
#line 650 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__5_5,
#line 650 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__6_6,
#line 650 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__7_7,
#line 650 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__8_8);

#line 609 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_branch_vars_7_p_0_1(
#line 609 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 609 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 609 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
#line 609 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_3);

#line 602 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__get_branch_vars_7_p_0(
#line 602 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 602 "pd_util.m"
  MR_Word transform_hlds__pd_util__Goal_2,
#line 602 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
#line 602 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_4,
#line 602 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_5,
#line 602 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0_6,
#line 602 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_7);

#line 592 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_left_vars_3_p_0(
#line 592 "pd_util.m"
  MR_Word transform_hlds__pd_util__Goal_4,
#line 592 "pd_util.m"
  MR_Word transform_hlds__pd_util__Vars0_5,
#line 592 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Vars_6);

#line 480 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_extra_info_headvars_8_p_0(
#line 480 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 480 "pd_util.m"
  MR_Integer transform_hlds__pd_util__ArgNo_2,
#line 480 "pd_util.m"
  MR_Word transform_hlds__pd_util__LeftVars_3,
#line 480 "pd_util.m"
  MR_Word transform_hlds__pd_util__VarInfo_4,
#line 480 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__5_5,
#line 480 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__6_6,
#line 480 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__7_7,
#line 480 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__8_8);

#line 458 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_opaque_args_6_p_0(
#line 458 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 458 "pd_util.m"
  MR_Integer transform_hlds__pd_util__ArgNo_2,
#line 458 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
#line 458 "pd_util.m"
  MR_Word transform_hlds__pd_util__ExtraInfoArgs_4,
#line 458 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5,
#line 458 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_6);

#line 400 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_2_4_p_0(
#line 400 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 400 "pd_util.m"
  MR_Word transform_hlds__pd_util__Args_2,
#line 400 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0_3,
#line 400 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_VarInfo_4);

#line 327 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_goal_live_vars_2_6_p_0(
#line 327 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 327 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 327 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_3,
#line 327 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMapDelta_4,
#line 327 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5,
#line 327 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_6);

#line 395 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0_2(
#line 395 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 395 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 395 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2);

#line 391 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0_1(
#line 391 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 391 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 391 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2);

#line 292 "pd_util.m"
static MR_Box MR_CALL 
transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0_1(
#line 292 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 292 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1);

#line 380 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__propagate_constraints_4_p_0_1(
#line 380 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg);

#line 187 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__goal_get_calls_2_p_0_1(
#line 187 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 187 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 187 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2);


static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_2[8][3];

static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_3[4][5];

static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_4[4][6];

static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_5[1][10];




static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__pd_util__goal_get_calls_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__pd_util__goals_match_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_3[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
};

static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_4[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__pd_util__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__pd_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__pd_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__pd_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__pd_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__pd_util_scalar_common_5[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__pd_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 960 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 968 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_util__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 976 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 984 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 992 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1001 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1010 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1019 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_util__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1028 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_util__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1036 "transform_hlds.pd_util.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_util__transform_hlds__pd_util__type_ctor_info_expansions_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_util____Unify____expansions_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_util____Compare____expansions_0_0_10001)),
  (MR_String) "transform_hlds.pd_util",
  (MR_String) "expansions",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1057 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1066 "transform_hlds.pd_util.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_util__transform_hlds__pd_util__type_ctor_info_pd_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_util____Unify____pd_var_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_util____Compare____pd_var_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_util",
  (MR_String) "pd_var_info",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1087 "transform_hlds.pd_util.c"
static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____expansions_0_0_10001(
#line 1090 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 1092 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_2)
#line 1094 "transform_hlds.pd_util.c"
{
#line 1096 "transform_hlds.pd_util.c"
  {
#line 1098 "transform_hlds.pd_util.c"
    MR_bool transform_hlds__pd_util__succeeded;

#line 1101 "transform_hlds.pd_util.c"
    {
#line 1103 "transform_hlds.pd_util.c"
      transform_hlds__pd_util__succeeded = transform_hlds__pd_util____Unify____expansions_0_0(((MR_Word) transform_hlds__pd_util__wrapper_arg_1), ((MR_Word) transform_hlds__pd_util__wrapper_arg_2));
    }
#line 1106 "transform_hlds.pd_util.c"
    return transform_hlds__pd_util__succeeded;
#line 1108 "transform_hlds.pd_util.c"
  }
#line 1110 "transform_hlds.pd_util.c"
}

#line 1113 "transform_hlds.pd_util.c"
static void MR_CALL 
transform_hlds__pd_util____Compare____expansions_0_0_10001(
#line 1116 "transform_hlds.pd_util.c"
  MR_Box * transform_hlds__pd_util__wrapper_arg_1,
#line 1118 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
#line 1120 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_3)
#line 1122 "transform_hlds.pd_util.c"
{
#line 1124 "transform_hlds.pd_util.c"
  {
#line 1126 "transform_hlds.pd_util.c"
    MR_Word transform_hlds__pd_util__conv0_HeadVar__1_1;

#line 1129 "transform_hlds.pd_util.c"
    {
#line 1131 "transform_hlds.pd_util.c"
      transform_hlds__pd_util____Compare____expansions_0_0(&transform_hlds__pd_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_util__wrapper_arg_2), ((MR_Word) transform_hlds__pd_util__wrapper_arg_3));
    }
#line 1134 "transform_hlds.pd_util.c"
    *transform_hlds__pd_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__1_1));
#line 1136 "transform_hlds.pd_util.c"
  }
#line 1138 "transform_hlds.pd_util.c"
}

#line 1141 "transform_hlds.pd_util.c"
static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____pd_var_info_0_0_10001(
#line 1144 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 1146 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_2)
#line 1148 "transform_hlds.pd_util.c"
{
#line 1150 "transform_hlds.pd_util.c"
  {
#line 1152 "transform_hlds.pd_util.c"
    MR_bool transform_hlds__pd_util__succeeded;

#line 1155 "transform_hlds.pd_util.c"
    {
#line 1157 "transform_hlds.pd_util.c"
      transform_hlds__pd_util__succeeded = transform_hlds__pd_util____Unify____pd_var_info_0_0(((MR_Word) transform_hlds__pd_util__wrapper_arg_1), ((MR_Word) transform_hlds__pd_util__wrapper_arg_2));
    }
#line 1160 "transform_hlds.pd_util.c"
    return transform_hlds__pd_util__succeeded;
#line 1162 "transform_hlds.pd_util.c"
  }
#line 1164 "transform_hlds.pd_util.c"
}

#line 1167 "transform_hlds.pd_util.c"
static void MR_CALL 
transform_hlds__pd_util____Compare____pd_var_info_0_0_10001(
#line 1170 "transform_hlds.pd_util.c"
  MR_Box * transform_hlds__pd_util__wrapper_arg_1,
#line 1172 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
#line 1174 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_3)
#line 1176 "transform_hlds.pd_util.c"
{
#line 1178 "transform_hlds.pd_util.c"
  {
#line 1180 "transform_hlds.pd_util.c"
    MR_Word transform_hlds__pd_util__conv0_HeadVar__1_1;

#line 1183 "transform_hlds.pd_util.c"
    {
#line 1185 "transform_hlds.pd_util.c"
      transform_hlds__pd_util____Compare____pd_var_info_0_0(&transform_hlds__pd_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_util__wrapper_arg_2), ((MR_Word) transform_hlds__pd_util__wrapper_arg_3));
    }
#line 1188 "transform_hlds.pd_util.c"
    *transform_hlds__pd_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__1_1));
#line 1190 "transform_hlds.pd_util.c"
  }
#line 1192 "transform_hlds.pd_util.c"
}

#line 729 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(
#line 729 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 729 "pd_util.m"
  MR_Word transform_hlds__pd_util__ProcArgInfo_2,
#line 729 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_3,
#line 729 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
#line 729 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_6,
#line 729 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
#line 729 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8)
#line 729 "pd_util.m"
{
#line 733 "pd_util.m"
  while (MR_TRUE)
#line 733 "pd_util.m"
    {
#line 733 "pd_util.m"
      /* tailcall optimized into a loop */
#line 733 "pd_util.m"
      {
#line 733 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 733 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 733 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_Vars_8 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7;
#line 733 "pd_util.m"
        else
#line 735 "pd_util.m"
          {
#line 735 "pd_util.m"
            MR_Word transform_hlds__pd_util__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 0)));
#line 735 "pd_util.m"
            MR_Word transform_hlds__pd_util__Goals_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 1)));
#line 735 "pd_util.m"
            MR_Word transform_hlds__pd_util__GoalInfo_41;
#line 735 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMapDelta_42;
#line 735 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMap1_43;
#line 735 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49;
#line 747 "pd_util.m"
            MR_Word transform_hlds__pd_util__PredId_25;
#line 747 "pd_util.m"
            MR_Integer transform_hlds__pd_util__ProcId_26;
#line 747 "pd_util.m"
            MR_Word transform_hlds__pd_util__Args_27;
#line 737 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 0)));
#line 737 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 1)));
#line 737 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_28_28;
#line 737 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_29_29;
#line 737 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_30_30;
#line 758 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_40_40;

#line 737 "pd_util.m"
            transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__V_46_46)) == (MR_mktag((MR_Integer) 2)));
#line 737 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 737 "pd_util.m"
              {
#line 737 "pd_util.m"
                transform_hlds__pd_util__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_46_46, (MR_Integer) 0)));
#line 737 "pd_util.m"
                transform_hlds__pd_util__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_46_46, (MR_Integer) 1)));
#line 737 "pd_util.m"
                transform_hlds__pd_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_46_46, (MR_Integer) 2)));
#line 737 "pd_util.m"
                transform_hlds__pd_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_46_46, (MR_Integer) 3)));
#line 737 "pd_util.m"
                transform_hlds__pd_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_46_46, (MR_Integer) 4)));
#line 737 "pd_util.m"
                transform_hlds__pd_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_46_46, (MR_Integer) 5)));
#line 744 "pd_util.m"
                {
#line 744 "pd_util.m"
                  MR_Word transform_hlds__pd_util__ThisProcArgInfo_32;
#line 739 "pd_util.m"
                  MR_Word transform_hlds__pd_util__V_47_47;
#line 739 "pd_util.m"
                  MR_Box transform_hlds__pd_util__conv0_ThisProcArgInfo_32;

#line 739 "pd_util.m"
                  {
#line 739 "pd_util.m"
                    transform_hlds__pd_util__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 739 "pd_util.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_47_47, 0) = ((MR_Box) (transform_hlds__pd_util__PredId_25));
#line 739 "pd_util.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_47_47, 1) = ((MR_Box) (transform_hlds__pd_util__ProcId_26));
#line 739 "pd_util.m"
                  }
#line 739 "pd_util.m"
                  {
#line 739 "pd_util.m"
                    transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_util_scalar_common_1[2], transform_hlds__pd_util__ProcArgInfo_2, ((MR_Box) (transform_hlds__pd_util__V_47_47)), &transform_hlds__pd_util__conv0_ThisProcArgInfo_32);
                  }
#line 739 "pd_util.m"
                  if (transform_hlds__pd_util__succeeded)
#line 739 "pd_util.m"
                    {
#line 739 "pd_util.m"
                      transform_hlds__pd_util__ThisProcArgInfo_32 = ((MR_Word) transform_hlds__pd_util__conv0_ThisProcArgInfo_32);
#line 739 "pd_util.m"
                      transform_hlds__pd_util__succeeded = MR_TRUE;
#line 739 "pd_util.m"
                    }
#line 744 "pd_util.m"
                  if (transform_hlds__pd_util__succeeded)
#line 740 "pd_util.m"
                    {
#line 740 "pd_util.m"
                      MR_Word transform_hlds__pd_util__BranchInfo_33;
#line 740 "pd_util.m"
                      MR_Word transform_hlds__pd_util__ExtraVars1_36;
#line 740 "pd_util.m"
                      MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_48_48;
#line 741 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_34_34;
#line 741 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_35_35;

#line 740 "pd_util.m"
                      {
#line 740 "pd_util.m"
                        transform_hlds__pd_util__convert_branch_info_3_p_0(transform_hlds__pd_util__ThisProcArgInfo_32, transform_hlds__pd_util__Args_27, &transform_hlds__pd_util__BranchInfo_33);
                      }
#line 741 "pd_util.m"
                      transform_hlds__pd_util__STATE_VARIABLE_Vars_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_33, (MR_Integer) 0)));
#line 741 "pd_util.m"
                      transform_hlds__pd_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_33, (MR_Integer) 1)));
#line 741 "pd_util.m"
                      transform_hlds__pd_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_33, (MR_Integer) 2)));
#line 742 "pd_util.m"
                      {
#line 742 "pd_util.m"
                        mercury__map__keys_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__STATE_VARIABLE_Vars_48_48, &transform_hlds__pd_util__ExtraVars1_36);
                      }
#line 743 "pd_util.m"
                      {
#line 743 "pd_util.m"
                        transform_hlds__pd_util__combine_vars_4_p_0(transform_hlds__pd_util__BranchNo_3, transform_hlds__pd_util__ExtraVars1_36, transform_hlds__pd_util__STATE_VARIABLE_Vars_48_48, &transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49);
                      }
#line 740 "pd_util.m"
                    }
#line 744 "pd_util.m"
                  else
#line 743 "pd_util.m"
                    transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7;
#line 744 "pd_util.m"
                }
#line 737 "pd_util.m"
              }
#line 737 "pd_util.m"
            else
#line 755 "pd_util.m"
              {
#line 755 "pd_util.m"
                MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_53_53;
#line 748 "pd_util.m"
                MR_Word transform_hlds__pd_util__LeftVars0_37;
#line 748 "pd_util.m"
                MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_50_50;
#line 748 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_51_51;
#line 750 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_38_38;

#line 748 "pd_util.m"
                {
#line 748 "pd_util.m"
                  parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__pd_util__LeftVars0_37);
                }
#line 749 "pd_util.m"
                {
#line 749 "pd_util.m"
                  mercury__map__init_1_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], &transform_hlds__pd_util__STATE_VARIABLE_Vars_50_50);
                }
#line 750 "pd_util.m"
                {
#line 750 "pd_util.m"
                  transform_hlds__pd_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "pd_util.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_51_51, 0) = ((MR_Box) (transform_hlds__pd_util__Goal_20));
#line 750 "pd_util.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 750 "pd_util.m"
                }
#line 750 "pd_util.m"
                {
#line 750 "pd_util.m"
                  transform_hlds__pd_util__succeeded = transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__V_51_51, (MR_Integer) 0, transform_hlds__pd_util__InstMap_6, transform_hlds__pd_util__LeftVars0_37, &transform_hlds__pd_util__V_38_38, transform_hlds__pd_util__STATE_VARIABLE_Vars_50_50, &transform_hlds__pd_util__STATE_VARIABLE_Vars_53_53);
                }
#line 755 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 753 "pd_util.m"
                  {
#line 753 "pd_util.m"
                    MR_Word transform_hlds__pd_util__ExtraVars2_39;

#line 753 "pd_util.m"
                    {
#line 753 "pd_util.m"
                      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__STATE_VARIABLE_Vars_53_53, &transform_hlds__pd_util__ExtraVars2_39);
                    }
#line 754 "pd_util.m"
                    {
#line 754 "pd_util.m"
                      transform_hlds__pd_util__combine_vars_4_p_0(transform_hlds__pd_util__BranchNo_3, transform_hlds__pd_util__ExtraVars2_39, transform_hlds__pd_util__STATE_VARIABLE_Vars_53_53, &transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49);
                    }
#line 753 "pd_util.m"
                  }
#line 755 "pd_util.m"
                else
#line 754 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7;
#line 755 "pd_util.m"
              }
#line 758 "pd_util.m"
            transform_hlds__pd_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 0)));
#line 758 "pd_util.m"
            transform_hlds__pd_util__GoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 1)));
#line 759 "pd_util.m"
            {
#line 759 "pd_util.m"
              transform_hlds__pd_util__InstMapDelta_42 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo_41);
            }
#line 760 "pd_util.m"
            {
#line 760 "pd_util.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__pd_util__InstMap_6, transform_hlds__pd_util__InstMapDelta_42, &transform_hlds__pd_util__InstMap1_43);
            }
#line 761 "pd_util.m"
            /* direct tailcall eliminated */
#line 761 "pd_util.m"
            {
#line 761 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__4__tmp_copy_4 = transform_hlds__pd_util__Goals_21;
#line 761 "pd_util.m"
              MR_Word transform_hlds__pd_util__InstMap__tmp_copy_6 = transform_hlds__pd_util__InstMap1_43;
#line 761 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_7 = transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49;

#line 761 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_7;
#line 761 "pd_util.m"
              transform_hlds__pd_util__InstMap_6 = transform_hlds__pd_util__InstMap__tmp_copy_6;
#line 761 "pd_util.m"
              transform_hlds__pd_util__HeadVar__4_4 = transform_hlds__pd_util__HeadVar__4__tmp_copy_4;
#line 761 "pd_util.m"
            }
#line 761 "pd_util.m"
            continue;
#line 735 "pd_util.m"
          }
#line 733 "pd_util.m"
      }
#line 733 "pd_util.m"
      break;
#line 733 "pd_util.m"
    }
#line 729 "pd_util.m"
}

#line 696 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_p_0(
#line 696 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 696 "pd_util.m"
  MR_Word transform_hlds__pd_util__ProcArgInfo_2,
#line 696 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_3,
#line 696 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
#line 696 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_6,
#line 696 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
#line 696 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8)
#line 696 "pd_util.m"
{
#line 700 "pd_util.m"
  while (MR_TRUE)
#line 700 "pd_util.m"
    {
#line 700 "pd_util.m"
      /* tailcall optimized into a loop */
#line 700 "pd_util.m"
      {
#line 700 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 700 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 700 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_Vars_8 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7;
#line 700 "pd_util.m"
        else
#line 702 "pd_util.m"
          {
#line 702 "pd_util.m"
            MR_Word transform_hlds__pd_util__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 0)));
#line 702 "pd_util.m"
            MR_Word transform_hlds__pd_util__Goals_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 1)));
#line 702 "pd_util.m"
            MR_Word transform_hlds__pd_util__GoalList_25;
#line 702 "pd_util.m"
            MR_Integer transform_hlds__pd_util__NextBranch_26;
#line 702 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_29_29;

#line 703 "pd_util.m"
            {
#line 703 "pd_util.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__Goal_20, &transform_hlds__pd_util__GoalList_25);
            }
#line 704 "pd_util.m"
            {
#line 704 "pd_util.m"
              transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__ProcArgInfo_2, transform_hlds__pd_util__BranchNo_3, transform_hlds__pd_util__GoalList_25, transform_hlds__pd_util__InstMap_6, transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7, &transform_hlds__pd_util__STATE_VARIABLE_Vars_29_29);
            }
#line 706 "pd_util.m"
            transform_hlds__pd_util__NextBranch_26 = (transform_hlds__pd_util__BranchNo_3 + (MR_Integer) 1);
#line 707 "pd_util.m"
            /* direct tailcall eliminated */
#line 707 "pd_util.m"
            {
#line 707 "pd_util.m"
              MR_Integer transform_hlds__pd_util__BranchNo__tmp_copy_3 = transform_hlds__pd_util__NextBranch_26;
#line 707 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__4__tmp_copy_4 = transform_hlds__pd_util__Goals_21;
#line 707 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_7 = transform_hlds__pd_util__STATE_VARIABLE_Vars_29_29;

#line 707 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_7;
#line 707 "pd_util.m"
              transform_hlds__pd_util__HeadVar__4_4 = transform_hlds__pd_util__HeadVar__4__tmp_copy_4;
#line 707 "pd_util.m"
              transform_hlds__pd_util__BranchNo_3 = transform_hlds__pd_util__BranchNo__tmp_copy_3;
#line 707 "pd_util.m"
            }
#line 707 "pd_util.m"
            continue;
#line 702 "pd_util.m"
          }
#line 700 "pd_util.m"
      }
#line 700 "pd_util.m"
      break;
#line 700 "pd_util.m"
    }
#line 696 "pd_util.m"
}

#line 572 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0_2(
#line 572 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 572 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 572 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2)
#line 572 "pd_util.m"
{
#line 572 "pd_util.m"
  {
#line 572 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
#line 572 "pd_util.m"
    MR_Word transform_hlds__pd_util__conv1_HeadVar__2_38;

#line 572 "pd_util.m"
    {
#line 572 "pd_util.m"
      transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__572__1_2_p_0(((MR_Word) transform_hlds__pd_util__wrapper_arg_1), &transform_hlds__pd_util__conv1_HeadVar__2_38);
    }
#line 572 "pd_util.m"
    *transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv1_HeadVar__2_38));
#line 572 "pd_util.m"
  }
#line 572 "pd_util.m"
}

#line 580 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0_1(
#line 580 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 580 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 580 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2)
#line 580 "pd_util.m"
{
#line 580 "pd_util.m"
  {
#line 580 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
#line 580 "pd_util.m"
    MR_Word transform_hlds__pd_util__conv0_HeadVar__2_36;

#line 580 "pd_util.m"
    {
#line 580 "pd_util.m"
      transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__580__1_2_p_0(((MR_Word) transform_hlds__pd_util__wrapper_arg_1), &transform_hlds__pd_util__conv0_HeadVar__2_36);
    }
#line 580 "pd_util.m"
    *transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__2_36));
#line 580 "pd_util.m"
  }
#line 580 "pd_util.m"
}

#line 529 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0(
#line 529 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 529 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 529 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
#line 529 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap0_5,
#line 529 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6,
#line 529 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_LeftVars_7,
#line 529 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8,
#line 529 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_9)
#line 529 "pd_util.m"
{
#line 534 "pd_util.m"
  while (MR_TRUE)
#line 534 "pd_util.m"
    {
#line 534 "pd_util.m"
      /* tailcall optimized into a loop */
#line 534 "pd_util.m"
      {
#line 534 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 534 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 534 "pd_util.m"
          {
#line 534 "pd_util.m"
            transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__HeadVar__3_3 == (MR_Integer) 1);
#line 534 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 534 "pd_util.m"
              {
#line 534 "pd_util.m"
                *transform_hlds__pd_util__STATE_VARIABLE_Vars_9 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8;
#line 534 "pd_util.m"
                *transform_hlds__pd_util__STATE_VARIABLE_LeftVars_7 = transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6;
#line 534 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_TRUE;
#line 534 "pd_util.m"
              }
#line 534 "pd_util.m"
          }
#line 534 "pd_util.m"
        else
#line 536 "pd_util.m"
          {
#line 536 "pd_util.m"
            MR_Word transform_hlds__pd_util__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 536 "pd_util.m"
            MR_Word transform_hlds__pd_util__Goals_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 536 "pd_util.m"
            MR_Word transform_hlds__pd_util__GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 1)));
#line 536 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMapDelta_29;
#line 536 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMap_30;
#line 536 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_40_40;
#line 536 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_LeftVars_41_41;
#line 536 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_FoundBranch_42_42;
#line 537 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 0)));
#line 549 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMapDeltas_31;
#line 559 "pd_util.m"
            MR_Word transform_hlds__pd_util__GoalExpr_48;
#line 560 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_49_49;

#line 538 "pd_util.m"
            {
#line 538 "pd_util.m"
              transform_hlds__pd_util__InstMapDelta_29 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo_28);
            }
#line 539 "pd_util.m"
            {
#line 539 "pd_util.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__pd_util__InstMap0_5, transform_hlds__pd_util__InstMapDelta_29, &transform_hlds__pd_util__InstMap_30);
            }
#line 560 "pd_util.m"
            transform_hlds__pd_util__GoalExpr_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 0)));
#line 560 "pd_util.m"
            transform_hlds__pd_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 1)));
#line 570 "pd_util.m"
            if (((((MR_tag((MR_Word) transform_hlds__pd_util__GoalExpr_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 579 "pd_util.m"
              {
#line 579 "pd_util.m"
                MR_Word transform_hlds__pd_util__Disjuncts_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 1)));

#line 585 "pd_util.m"
                {
#line 585 "pd_util.m"
                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0, (MR_Word) &transform_hlds__pd_util_scalar_common_2[6], transform_hlds__pd_util__Disjuncts_73, &transform_hlds__pd_util__InstMapDeltas_31);
                }
#line 579 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_TRUE;
#line 579 "pd_util.m"
              }
#line 570 "pd_util.m"
            else
#line 570 "pd_util.m"
              if (((((MR_tag((MR_Word) transform_hlds__pd_util__GoalExpr_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 562 "pd_util.m"
                {
#line 562 "pd_util.m"
                  MR_Word transform_hlds__pd_util__Cond_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 2)));
#line 562 "pd_util.m"
                  MR_Word transform_hlds__pd_util__Then_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 3)));
#line 562 "pd_util.m"
                  MR_Word transform_hlds__pd_util__Else_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 4)));
#line 562 "pd_util.m"
                  MR_Word transform_hlds__pd_util__CondInfo_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Cond_51, (MR_Integer) 1)));
#line 562 "pd_util.m"
                  MR_Word transform_hlds__pd_util__ThenInfo_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Then_52, (MR_Integer) 1)));
#line 562 "pd_util.m"
                  MR_Word transform_hlds__pd_util__ElseInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Else_53, (MR_Integer) 1)));
#line 562 "pd_util.m"
                  MR_Word transform_hlds__pd_util__CondDelta_60;
#line 562 "pd_util.m"
                  MR_Word transform_hlds__pd_util__ThenDelta_61;
#line 562 "pd_util.m"
                  MR_Word transform_hlds__pd_util__ElseDelta_62;
#line 562 "pd_util.m"
                  MR_Word transform_hlds__pd_util__V_83_83;
#line 562 "pd_util.m"
                  MR_Word transform_hlds__pd_util__V_84_84;
#line 562 "pd_util.m"
                  MR_Word transform_hlds__pd_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 1)));
#line 563 "pd_util.m"
                  MR_Word transform_hlds__pd_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Cond_51, (MR_Integer) 0)));
#line 564 "pd_util.m"
                  MR_Word transform_hlds__pd_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Then_52, (MR_Integer) 0)));
#line 565 "pd_util.m"
                  MR_Word transform_hlds__pd_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Else_53, (MR_Integer) 0)));

#line 566 "pd_util.m"
                  {
#line 566 "pd_util.m"
                    transform_hlds__pd_util__CondDelta_60 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__CondInfo_55);
                  }
#line 567 "pd_util.m"
                  {
#line 567 "pd_util.m"
                    transform_hlds__pd_util__ThenDelta_61 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__ThenInfo_57);
                  }
#line 568 "pd_util.m"
                  {
#line 568 "pd_util.m"
                    transform_hlds__pd_util__ElseDelta_62 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__ElseInfo_59);
                  }
#line 569 "pd_util.m"
                  {
#line 569 "pd_util.m"
                    transform_hlds__pd_util__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "pd_util.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_84_84, 0) = ((MR_Box) (transform_hlds__pd_util__ElseDelta_62));
#line 569 "pd_util.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 569 "pd_util.m"
                  }
#line 569 "pd_util.m"
                  {
#line 569 "pd_util.m"
                    transform_hlds__pd_util__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "pd_util.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_83_83, 0) = ((MR_Box) (transform_hlds__pd_util__ThenDelta_61));
#line 569 "pd_util.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_83_83, 1) = ((MR_Box) (transform_hlds__pd_util__V_84_84));
#line 569 "pd_util.m"
                  }
#line 569 "pd_util.m"
                  {
#line 569 "pd_util.m"
                    transform_hlds__pd_util__InstMapDeltas_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "pd_util.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__InstMapDeltas_31, 0) = ((MR_Box) (transform_hlds__pd_util__CondDelta_60));
#line 569 "pd_util.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__InstMapDeltas_31, 1) = ((MR_Box) (transform_hlds__pd_util__V_83_83));
#line 569 "pd_util.m"
                  }
#line 562 "pd_util.m"
                  transform_hlds__pd_util__succeeded = MR_TRUE;
#line 562 "pd_util.m"
                }
#line 570 "pd_util.m"
              else
#line 570 "pd_util.m"
                if (((((MR_tag((MR_Word) transform_hlds__pd_util__GoalExpr_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 571 "pd_util.m"
                  {
#line 571 "pd_util.m"
                    MR_Word transform_hlds__pd_util__Cases_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 3)));
#line 571 "pd_util.m"
                    MR_Word transform_hlds__pd_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 1)));
#line 571 "pd_util.m"
                    MR_Word transform_hlds__pd_util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 2)));

#line 577 "pd_util.m"
                    {
#line 577 "pd_util.m"
                      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0, (MR_Word) &transform_hlds__pd_util_scalar_common_2[7], transform_hlds__pd_util__Cases_65, &transform_hlds__pd_util__InstMapDeltas_31);
                    }
#line 571 "pd_util.m"
                    transform_hlds__pd_util__succeeded = MR_TRUE;
#line 571 "pd_util.m"
                  }
#line 570 "pd_util.m"
                else
#line 570 "pd_util.m"
                  transform_hlds__pd_util__succeeded = MR_FALSE;
#line 549 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 544 "pd_util.m"
              {
#line 544 "pd_util.m"
                MR_Integer transform_hlds__pd_util__V_39_39;

#line 544 "pd_util.m"
                transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__HeadVar__3_3 == (MR_Integer) 0);
#line 544 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 544 "pd_util.m"
                  {
#line 546 "pd_util.m"
                    transform_hlds__pd_util__V_39_39 = (MR_Integer) 1;
#line 545 "pd_util.m"
                    {
#line 545 "pd_util.m"
                      transform_hlds__pd_util__succeeded = transform_hlds__pd_util__get_branch_vars_7_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__Goal_20, transform_hlds__pd_util__InstMapDeltas_31, transform_hlds__pd_util__InstMap_30, transform_hlds__pd_util__V_39_39, transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8, &transform_hlds__pd_util__STATE_VARIABLE_Vars_40_40);
                    }
#line 544 "pd_util.m"
                    if (transform_hlds__pd_util__succeeded)
#line 544 "pd_util.m"
                      {
#line 547 "pd_util.m"
                        {
#line 547 "pd_util.m"
                          transform_hlds__pd_util__get_left_vars_3_p_0(transform_hlds__pd_util__Goal_20, transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6, &transform_hlds__pd_util__STATE_VARIABLE_LeftVars_41_41);
                        }
#line 548 "pd_util.m"
                        transform_hlds__pd_util__STATE_VARIABLE_FoundBranch_42_42 = (MR_Integer) 1;
#line 548 "pd_util.m"
                        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 544 "pd_util.m"
                      }
#line 544 "pd_util.m"
                  }
#line 544 "pd_util.m"
              }
#line 549 "pd_util.m"
            else
#line 550 "pd_util.m"
              {
#line 550 "pd_util.m"
                MR_Word transform_hlds__pd_util__GoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 0)));
#line 550 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_43_43;
#line 550 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 1)));

#line 551 "pd_util.m"
                {
#line 551 "pd_util.m"
                  transform_hlds__pd_util__V_43_43 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__pd_util__GoalExpr_32);
                }
#line 551 "pd_util.m"
                transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__V_43_43 == (MR_Integer) 1);
#line 550 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 550 "pd_util.m"
                  {
#line 551 "pd_util.m"
                    transform_hlds__pd_util__STATE_VARIABLE_Vars_40_40 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8;
#line 551 "pd_util.m"
                    transform_hlds__pd_util__STATE_VARIABLE_LeftVars_41_41 = transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6;
#line 551 "pd_util.m"
                    transform_hlds__pd_util__STATE_VARIABLE_FoundBranch_42_42 = transform_hlds__pd_util__HeadVar__3_3;
#line 551 "pd_util.m"
                    transform_hlds__pd_util__succeeded = MR_TRUE;
#line 550 "pd_util.m"
                  }
#line 550 "pd_util.m"
              }
#line 536 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 553 "pd_util.m"
              {
#line 553 "pd_util.m"
                /* direct tailcall eliminated */
#line 553 "pd_util.m"
                {
#line 553 "pd_util.m"
                  MR_Word transform_hlds__pd_util__HeadVar__2__tmp_copy_2 = transform_hlds__pd_util__Goals_21;
#line 553 "pd_util.m"
                  MR_Word transform_hlds__pd_util__HeadVar__3__tmp_copy_3 = transform_hlds__pd_util__STATE_VARIABLE_FoundBranch_42_42;
#line 553 "pd_util.m"
                  MR_Word transform_hlds__pd_util__InstMap0__tmp_copy_5 = transform_hlds__pd_util__InstMap_30;
#line 553 "pd_util.m"
                  MR_Word transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0__tmp_copy_6 = transform_hlds__pd_util__STATE_VARIABLE_LeftVars_41_41;
#line 553 "pd_util.m"
                  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_8 = transform_hlds__pd_util__STATE_VARIABLE_Vars_40_40;

#line 553 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_8;
#line 553 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6 = transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0__tmp_copy_6;
#line 553 "pd_util.m"
                  transform_hlds__pd_util__InstMap0_5 = transform_hlds__pd_util__InstMap0__tmp_copy_5;
#line 553 "pd_util.m"
                  transform_hlds__pd_util__HeadVar__3_3 = transform_hlds__pd_util__HeadVar__3__tmp_copy_3;
#line 553 "pd_util.m"
                  transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__HeadVar__2__tmp_copy_2;
#line 553 "pd_util.m"
                }
#line 553 "pd_util.m"
                continue;
#line 553 "pd_util.m"
              }
#line 536 "pd_util.m"
          }
#line 534 "pd_util.m"
        return transform_hlds__pd_util__succeeded;
#line 534 "pd_util.m"
      }
#line 534 "pd_util.m"
      break;
#line 534 "pd_util.m"
    }
#line 529 "pd_util.m"
}

#line 1011 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0_1(
#line 1011 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 1011 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 1011 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2)
#line 1011 "pd_util.m"
{
#line 1011 "pd_util.m"
  {
#line 1011 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 1011 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
#line 1011 "pd_util.m"
    MR_Word transform_hlds__pd_util__conv0_HeadVar__3_31;

#line 1011 "pd_util.m"
    {
#line 1011 "pd_util.m"
      transform_hlds__pd_util__succeeded = transform_hlds__pd_util__IntroducedFrom__pred__goals_match__1011__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__pd_util__wrapper_arg_1), &transform_hlds__pd_util__conv0_HeadVar__3_31);
    }
#line 1011 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 1011 "pd_util.m"
      {
#line 1011 "pd_util.m"
        *transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__3_31));
#line 1011 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1011 "pd_util.m"
      }
#line 1011 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 1011 "pd_util.m"
  }
#line 1011 "pd_util.m"
}

#line 133 "pd_util.m"
MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0(
#line 133 "pd_util.m"
  MR_Word transform_hlds__pd_util__OldGoal_10,
#line 133 "pd_util.m"
  MR_Word transform_hlds__pd_util__OldArgs_11,
#line 133 "pd_util.m"
  MR_Word transform_hlds__pd_util__OldArgTypes_12,
#line 133 "pd_util.m"
  MR_Word transform_hlds__pd_util__NewGoal_13,
#line 133 "pd_util.m"
  MR_Word transform_hlds__pd_util__NewVarTypes_14,
#line 133 "pd_util.m"
  MR_Word * transform_hlds__pd_util__OldNewRenaming_15,
#line 133 "pd_util.m"
  MR_Word * transform_hlds__pd_util__TypeSubn_16)
#line 133 "pd_util.m"
{
#line 1002 "pd_util.m"
  {
#line 1002 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 1002 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeInfo_35_35;
#line 1002 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeCtorInfo_37_37;
#line 1002 "pd_util.m"
    MR_Word transform_hlds__pd_util__OldGoalList_17;
#line 1002 "pd_util.m"
    MR_Word transform_hlds__pd_util__NewGoalList_18;
#line 1002 "pd_util.m"
    MR_Word transform_hlds__pd_util__OldNewRenaming0_19;
#line 1002 "pd_util.m"
    MR_Word transform_hlds__pd_util__Search_20;
#line 1002 "pd_util.m"
    MR_Word transform_hlds__pd_util__NewArgs_23;
#line 1002 "pd_util.m"
    MR_Word transform_hlds__pd_util__NewGoalInfo_25;
#line 1002 "pd_util.m"
    MR_Word transform_hlds__pd_util__NewNonLocals_26;
#line 1002 "pd_util.m"
    MR_Word transform_hlds__pd_util__UnmatchedNonLocals_27;
#line 1002 "pd_util.m"
    MR_Word transform_hlds__pd_util__MatchingArgTypes_28;
#line 1002 "pd_util.m"
    MR_Word transform_hlds__pd_util__NewArgTypes_29;
#line 1002 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_32_32;
#line 1015 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_24_24;

#line 1003 "pd_util.m"
    {
#line 1003 "pd_util.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__OldGoal_10, &transform_hlds__pd_util__OldGoalList_17);
    }
#line 1004 "pd_util.m"
    {
#line 1004 "pd_util.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__NewGoal_13, &transform_hlds__pd_util__NewGoalList_18);
    }
#line 2074 "transform_hlds.pd_util.c"
    transform_hlds__pd_util__TypeInfo_35_35 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 1005 "pd_util.m"
    {
#line 1005 "pd_util.m"
      mercury__map__init_1_p_0(transform_hlds__pd_util__TypeInfo_35_35, transform_hlds__pd_util__TypeInfo_35_35, &transform_hlds__pd_util__OldNewRenaming0_19);
    }
#line 1006 "pd_util.m"
    {
#line 1006 "pd_util.m"
      transform_hlds__pd_util__succeeded = transform_hlds__pd_util__goals_match_2_4_p_0(transform_hlds__pd_util__OldGoalList_17, transform_hlds__pd_util__NewGoalList_18, transform_hlds__pd_util__OldNewRenaming0_19, transform_hlds__pd_util__OldNewRenaming_15);
    }
#line 1002 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 1002 "pd_util.m"
      {
#line 1011 "pd_util.m"
        {
#line 1011 "pd_util.m"
          transform_hlds__pd_util__Search_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1011 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Search_20, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[3]));
#line 1011 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Search_20, 1) = ((MR_Box) (transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0_1));
#line 1011 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Search_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1011 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Search_20, 3) = ((MR_Box) (*transform_hlds__pd_util__OldNewRenaming_15));
#line 1011 "pd_util.m"
        }
#line 1014 "pd_util.m"
        {
#line 1014 "pd_util.m"
          transform_hlds__pd_util__succeeded = mercury__list__map_3_p_2(transform_hlds__pd_util__TypeInfo_35_35, transform_hlds__pd_util__TypeInfo_35_35, transform_hlds__pd_util__Search_20, transform_hlds__pd_util__OldArgs_11, &transform_hlds__pd_util__NewArgs_23);
        }
#line 1002 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 1002 "pd_util.m"
          {
#line 1015 "pd_util.m"
            transform_hlds__pd_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewGoal_13, (MR_Integer) 0)));
#line 1015 "pd_util.m"
            transform_hlds__pd_util__NewGoalInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewGoal_13, (MR_Integer) 1)));
#line 1016 "pd_util.m"
            {
#line 1016 "pd_util.m"
              transform_hlds__pd_util__NewNonLocals_26 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_util__NewGoalInfo_25);
            }
#line 2122 "transform_hlds.pd_util.c"
            transform_hlds__pd_util__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1017 "pd_util.m"
            {
#line 1017 "pd_util.m"
              parse_tree__set_of_var__delete_list_3_p_0(transform_hlds__pd_util__TypeCtorInfo_37_37, transform_hlds__pd_util__NewArgs_23, transform_hlds__pd_util__NewNonLocals_26, &transform_hlds__pd_util__UnmatchedNonLocals_27);
            }
#line 1018 "pd_util.m"
            {
#line 1018 "pd_util.m"
              transform_hlds__pd_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__pd_util__TypeCtorInfo_37_37, transform_hlds__pd_util__UnmatchedNonLocals_27);
            }
#line 1002 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 1002 "pd_util.m"
              {
#line 1022 "pd_util.m"
                transform_hlds__pd_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1021 "pd_util.m"
                {
#line 1021 "pd_util.m"
                  transform_hlds__pd_util__collect_matching_arg_types_5_p_0(transform_hlds__pd_util__OldArgs_11, transform_hlds__pd_util__OldArgTypes_12, *transform_hlds__pd_util__OldNewRenaming_15, transform_hlds__pd_util__V_32_32, &transform_hlds__pd_util__MatchingArgTypes_28);
                }
#line 1023 "pd_util.m"
                {
#line 1023 "pd_util.m"
                  parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__pd_util__NewVarTypes_14, transform_hlds__pd_util__NewArgs_23, &transform_hlds__pd_util__NewArgTypes_29);
                }
#line 1024 "pd_util.m"
                {
#line 1024 "pd_util.m"
                  return transform_hlds__pd_util__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(transform_hlds__pd_util__MatchingArgTypes_28, transform_hlds__pd_util__NewArgTypes_29, transform_hlds__pd_util__TypeSubn_16);
                }
#line 1002 "pd_util.m"
              }
#line 1002 "pd_util.m"
          }
#line 1002 "pd_util.m"
      }
#line 1002 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 1002 "pd_util.m"
  }
#line 133 "pd_util.m"
}

#line 1101 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1101__1_3_p_0(
#line 1101 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_93,
#line 1101 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_94,
#line 1101 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__3_95)
#line 1101 "pd_util.m"
{
#line 1101 "pd_util.m"
  {
#line 1101 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 1101 "pd_util.m"
    MR_Word transform_hlds__pd_util__Key_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_93, (MR_Integer) 0)));
#line 1101 "pd_util.m"
    MR_Word transform_hlds__pd_util__Value_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_93, (MR_Integer) 1)));
#line 1107 "pd_util.m"
    MR_Word transform_hlds__pd_util__Value0_76;
#line 1104 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeInfo_115_115 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 1104 "pd_util.m"
    MR_Box transform_hlds__pd_util__conv0_Value0_76;

#line 1104 "pd_util.m"
    {
#line 1104 "pd_util.m"
      transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_util__TypeInfo_115_115, transform_hlds__pd_util__TypeInfo_115_115, transform_hlds__pd_util__HeadVar__2_94, ((MR_Box) (transform_hlds__pd_util__Key_74)), &transform_hlds__pd_util__conv0_Value0_76);
    }
#line 1104 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 1104 "pd_util.m"
      {
#line 1104 "pd_util.m"
        transform_hlds__pd_util__Value0_76 = ((MR_Word) transform_hlds__pd_util__conv0_Value0_76);
#line 1104 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1104 "pd_util.m"
      }
#line 1107 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 1105 "pd_util.m"
      {
#line 1105 "pd_util.m"
        {
#line 1105 "pd_util.m"
          transform_hlds__pd_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], ((MR_Box) (transform_hlds__pd_util__Value_75)), ((MR_Box) (transform_hlds__pd_util__Value0_76)));
        }
#line 1105 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 1105 "pd_util.m"
          {
#line 1106 "pd_util.m"
            *transform_hlds__pd_util__HeadVar__3_95 = transform_hlds__pd_util__HeadVar__2_94;
#line 1106 "pd_util.m"
            transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1105 "pd_util.m"
          }
#line 1105 "pd_util.m"
      }
#line 1107 "pd_util.m"
    else
#line 1108 "pd_util.m"
      {
#line 1108 "pd_util.m"
        MR_Word transform_hlds__pd_util__TypeInfo_116_116 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];

#line 1108 "pd_util.m"
        {
#line 1108 "pd_util.m"
          mercury__map__det_insert_4_p_0(transform_hlds__pd_util__TypeInfo_116_116, transform_hlds__pd_util__TypeInfo_116_116, ((MR_Box) (transform_hlds__pd_util__Key_74)), ((MR_Box) (transform_hlds__pd_util__Value_75)), transform_hlds__pd_util__HeadVar__2_94, transform_hlds__pd_util__HeadVar__3_95);
        }
#line 1108 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1108 "pd_util.m"
      }
#line 1101 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 1101 "pd_util.m"
  }
#line 1101 "pd_util.m"
}

#line 624 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__624__1_7_p_0(
#line 624 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 624 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_4,
#line 624 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_5,
#line 624 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMapDelta_17,
#line 624 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__5_43,
#line 624 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__6_44,
#line 624 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__7_45)
#line 624 "pd_util.m"
{
#line 624 "pd_util.m"
  {
#line 624 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 612 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeCtorInfo_73_73;
#line 612 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarInst_26;
#line 612 "pd_util.m"
    MR_Word transform_hlds__pd_util__DeltaVarInst_27;
#line 612 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_46_46;
#line 612 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_47_47;
#line 612 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_71_71;
#line 612 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_78_78;
#line 612 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_79_79;
#line 612 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_80_80;
#line 615 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_28_28;
#line 616 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeCtorInfo_74_74;
#line 616 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_48_48;
#line 616 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_49_49;
#line 616 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_72_72;
#line 616 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_88_88;
#line 616 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_89_89;
#line 616 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_90_90;
#line 616 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_29_29;

#line 612 "pd_util.m"
    {
#line 612 "pd_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_util__InstMap_4, transform_hlds__pd_util__HeadVar__5_43, &transform_hlds__pd_util__VarInst_26);
    }
#line 613 "pd_util.m"
    {
#line 613 "pd_util.m"
      transform_hlds__pd_util__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__pd_util__InstMapDelta_17, transform_hlds__pd_util__HeadVar__5_43, &transform_hlds__pd_util__DeltaVarInst_27);
    }
#line 612 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 612 "pd_util.m"
      {
#line 615 "pd_util.m"
        transform_hlds__pd_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 615 "pd_util.m"
        {
#line 615 "pd_util.m"
          transform_hlds__pd_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "pd_util.m"
          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_46_46, 0) = NULL;
#line 615 "pd_util.m"
          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_46_46, 1) = ((MR_Box) (transform_hlds__pd_util__V_47_47));
#line 615 "pd_util.m"
        }
#line 615 "pd_util.m"
        {
#line 615 "pd_util.m"
          transform_hlds__pd_util__succeeded = check_hlds__inst_match__inst_is_bound_to_functors_3_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__DeltaVarInst_27, &transform_hlds__pd_util__V_71_71);
        }
#line 612 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 612 "pd_util.m"
          {
#line 2348 "transform_hlds.pd_util.c"
            transform_hlds__pd_util__TypeCtorInfo_73_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 615 "pd_util.m"
            transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 615 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 615 "pd_util.m"
              {
#line 615 "pd_util.m"
                transform_hlds__pd_util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_71_71, (MR_Integer) 0)));
#line 615 "pd_util.m"
                transform_hlds__pd_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_71_71, (MR_Integer) 1)));
#line 615 "pd_util.m"
                (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_46_46, (MR_Integer) 0)) = ((MR_Box) (transform_hlds__pd_util__V_79_79));
#line 615 "pd_util.m"
                transform_hlds__pd_util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_46_46, (MR_Integer) 1)));
#line 615 "pd_util.m"
                {
#line 615 "pd_util.m"
                  transform_hlds__pd_util__succeeded = mercury__list____Unify____list_1_0(transform_hlds__pd_util__TypeCtorInfo_73_73, transform_hlds__pd_util__V_78_78, transform_hlds__pd_util__V_80_80);
                }
#line 612 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 612 "pd_util.m"
                  {
#line 616 "pd_util.m"
                    transform_hlds__pd_util__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "pd_util.m"
                    {
#line 616 "pd_util.m"
                      transform_hlds__pd_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "pd_util.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_48_48, 0) = NULL;
#line 616 "pd_util.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_48_48, 1) = ((MR_Box) (transform_hlds__pd_util__V_49_49));
#line 616 "pd_util.m"
                    }
#line 616 "pd_util.m"
                    {
#line 616 "pd_util.m"
                      transform_hlds__pd_util__succeeded = check_hlds__inst_match__inst_is_bound_to_functors_3_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__VarInst_26, &transform_hlds__pd_util__V_72_72);
                    }
#line 616 "pd_util.m"
                    if (transform_hlds__pd_util__succeeded)
#line 616 "pd_util.m"
                      {
#line 2394 "transform_hlds.pd_util.c"
                        transform_hlds__pd_util__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 615 "pd_util.m"
                        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 615 "pd_util.m"
                        if (transform_hlds__pd_util__succeeded)
#line 615 "pd_util.m"
                          {
#line 615 "pd_util.m"
                            transform_hlds__pd_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_72_72, (MR_Integer) 0)));
#line 615 "pd_util.m"
                            transform_hlds__pd_util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_72_72, (MR_Integer) 1)));
#line 615 "pd_util.m"
                            (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_48_48, (MR_Integer) 0)) = ((MR_Box) (transform_hlds__pd_util__V_89_89));
#line 615 "pd_util.m"
                            transform_hlds__pd_util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_48_48, (MR_Integer) 1)));
#line 615 "pd_util.m"
                            {
#line 615 "pd_util.m"
                              transform_hlds__pd_util__succeeded = mercury__list____Unify____list_1_0(transform_hlds__pd_util__TypeCtorInfo_74_74, transform_hlds__pd_util__V_88_88, transform_hlds__pd_util__V_90_90);
                            }
#line 615 "pd_util.m"
                          }
#line 616 "pd_util.m"
                      }
#line 616 "pd_util.m"
                    transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 612 "pd_util.m"
                  }
#line 615 "pd_util.m"
              }
#line 612 "pd_util.m"
          }
#line 612 "pd_util.m"
      }
#line 624 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 622 "pd_util.m"
      {
#line 622 "pd_util.m"
        MR_Word transform_hlds__pd_util__Set_31;
#line 620 "pd_util.m"
        MR_Word transform_hlds__pd_util__Set0_30;
#line 618 "pd_util.m"
        MR_Box transform_hlds__pd_util__conv0_Set0_30;

#line 618 "pd_util.m"
        {
#line 618 "pd_util.m"
          transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__HeadVar__6_44, ((MR_Box) (transform_hlds__pd_util__HeadVar__5_43)), &transform_hlds__pd_util__conv0_Set0_30);
        }
#line 618 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 618 "pd_util.m"
          {
#line 618 "pd_util.m"
            transform_hlds__pd_util__Set0_30 = ((MR_Word) transform_hlds__pd_util__conv0_Set0_30);
#line 618 "pd_util.m"
            transform_hlds__pd_util__succeeded = MR_TRUE;
#line 618 "pd_util.m"
          }
#line 620 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 619 "pd_util.m"
          {
#line 619 "pd_util.m"
            {
#line 619 "pd_util.m"
              mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_5)), transform_hlds__pd_util__Set0_30, &transform_hlds__pd_util__Set_31);
            }
#line 619 "pd_util.m"
          }
#line 620 "pd_util.m"
        else
#line 621 "pd_util.m"
          {
#line 621 "pd_util.m"
            {
#line 621 "pd_util.m"
              transform_hlds__pd_util__Set_31 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_5)));
            }
#line 621 "pd_util.m"
          }
#line 623 "pd_util.m"
        {
#line 623 "pd_util.m"
          mercury__map__set_4_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_util__HeadVar__5_43)), ((MR_Box) (transform_hlds__pd_util__Set_31)), transform_hlds__pd_util__HeadVar__6_44, transform_hlds__pd_util__HeadVar__7_45);
#line 623 "pd_util.m"
          return;
        }
#line 622 "pd_util.m"
      }
#line 624 "pd_util.m"
    else
#line 625 "pd_util.m"
      *transform_hlds__pd_util__HeadVar__7_45 = transform_hlds__pd_util__HeadVar__6_44;
#line 624 "pd_util.m"
  }
#line 624 "pd_util.m"
}

#line 572 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__572__1_2_p_0(
#line 572 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_37,
#line 572 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__2_38)
#line 572 "pd_util.m"
{
#line 572 "pd_util.m"
  {
#line 572 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 572 "pd_util.m"
    MR_Word transform_hlds__pd_util__CaseInfo_29;
#line 572 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_37, (MR_Integer) 2)));
#line 574 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_37, (MR_Integer) 0)));
#line 574 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_37, (MR_Integer) 1)));
#line 574 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_39_39, (MR_Integer) 0)));

#line 574 "pd_util.m"
    transform_hlds__pd_util__CaseInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_39_39, (MR_Integer) 1)));
#line 575 "pd_util.m"
    {
#line 575 "pd_util.m"
      *transform_hlds__pd_util__HeadVar__2_38 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__CaseInfo_29);
    }
#line 572 "pd_util.m"
  }
#line 572 "pd_util.m"
}

#line 580 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__580__1_2_p_0(
#line 580 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_35,
#line 580 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__2_36)
#line 580 "pd_util.m"
{
#line 580 "pd_util.m"
  {
#line 580 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 580 "pd_util.m"
    MR_Word transform_hlds__pd_util__DisjInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_35, (MR_Integer) 1)));
#line 582 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_35, (MR_Integer) 0)));

#line 583 "pd_util.m"
    {
#line 583 "pd_util.m"
      *transform_hlds__pd_util__HeadVar__2_36 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__DisjInfo_34);
    }
#line 580 "pd_util.m"
  }
#line 580 "pd_util.m"
}

#line 380 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__rerun_det_analysis__380__1_2_p_0(
#line 380 "pd_util.m"
  MR_Word transform_hlds__pd_util__ContainsErrors_29,
#line 380 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_42)
#line 380 "pd_util.m"
{
#line 380 "pd_util.m"
  {
#line 380 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__ContainsErrors_29 == transform_hlds__pd_util__HeadVar__2_42);

#line 380 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 380 "pd_util.m"
  }
#line 380 "pd_util.m"
}

#line 1011 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goals_match__1011__1_3_p_0(
#line 1011 "pd_util.m"
  MR_Word transform_hlds__pd_util__OldNewRenaming_15,
#line 1011 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_30,
#line 1011 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__3_31)
#line 1011 "pd_util.m"
{
#line 1011 "pd_util.m"
  {
#line 1011 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 1011 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeInfo_36_36 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 1012 "pd_util.m"
    MR_Box transform_hlds__pd_util__conv0_HeadVar__3_31;

#line 1012 "pd_util.m"
    {
#line 1012 "pd_util.m"
      transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_util__TypeInfo_36_36, transform_hlds__pd_util__TypeInfo_36_36, transform_hlds__pd_util__OldNewRenaming_15, ((MR_Box) (transform_hlds__pd_util__HeadVar__2_30)), &transform_hlds__pd_util__conv0_HeadVar__3_31);
    }
#line 1012 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 1012 "pd_util.m"
      {
#line 1012 "pd_util.m"
        *transform_hlds__pd_util__HeadVar__3_31 = ((MR_Word) transform_hlds__pd_util__conv0_HeadVar__3_31);
#line 1012 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1012 "pd_util.m"
      }
#line 1011 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 1011 "pd_util.m"
  }
#line 1011 "pd_util.m"
}

#line 395 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__395__1_3_p_0(
#line 395 "pd_util.m"
  MR_Word transform_hlds__pd_util__Args_5,
#line 395 "pd_util.m"
  MR_Integer transform_hlds__pd_util__HeadVar__2_27,
#line 395 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__3_28)
#line 395 "pd_util.m"
{
#line 395 "pd_util.m"
  {
#line 395 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 395 "pd_util.m"
    MR_Box transform_hlds__pd_util__conv0_HeadVar__3_28;

#line 395 "pd_util.m"
    {
#line 395 "pd_util.m"
      mercury__list__det_index1_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], transform_hlds__pd_util__Args_5, transform_hlds__pd_util__HeadVar__2_27, &transform_hlds__pd_util__conv0_HeadVar__3_28);
    }
#line 395 "pd_util.m"
    *transform_hlds__pd_util__HeadVar__3_28 = ((MR_Word) transform_hlds__pd_util__conv0_HeadVar__3_28);
#line 395 "pd_util.m"
  }
#line 395 "pd_util.m"
}

#line 391 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__391__1_3_p_0(
#line 391 "pd_util.m"
  MR_Word transform_hlds__pd_util__Args_5,
#line 391 "pd_util.m"
  MR_Integer transform_hlds__pd_util__HeadVar__2_24,
#line 391 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__3_25)
#line 391 "pd_util.m"
{
#line 391 "pd_util.m"
  {
#line 391 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 391 "pd_util.m"
    MR_Box transform_hlds__pd_util__conv0_HeadVar__3_25;

#line 391 "pd_util.m"
    {
#line 391 "pd_util.m"
      mercury__list__det_index1_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], transform_hlds__pd_util__Args_5, transform_hlds__pd_util__HeadVar__2_24, &transform_hlds__pd_util__conv0_HeadVar__3_25);
    }
#line 391 "pd_util.m"
    *transform_hlds__pd_util__HeadVar__3_25 = ((MR_Word) transform_hlds__pd_util__conv0_HeadVar__3_25);
#line 391 "pd_util.m"
  }
#line 391 "pd_util.m"
}

#line 187 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__187__1_2_p_0(
#line 187 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_16,
#line 187 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__2_17)
#line 187 "pd_util.m"
{
#line 187 "pd_util.m"
  {
#line 187 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 187 "pd_util.m"
    MR_Word transform_hlds__pd_util__PredId_9;
#line 187 "pd_util.m"
    MR_Integer transform_hlds__pd_util__ProcId_10;
#line 187 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_16, (MR_Integer) 0)));
#line 188 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_16, (MR_Integer) 1)));
#line 188 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_11_11;
#line 188 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_12_12;
#line 188 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_13_13;
#line 188 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_14_14;

#line 188 "pd_util.m"
    transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__V_18_18)) == (MR_mktag((MR_Integer) 2)));
#line 188 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 188 "pd_util.m"
      {
#line 188 "pd_util.m"
        transform_hlds__pd_util__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_18_18, (MR_Integer) 0)));
#line 188 "pd_util.m"
        transform_hlds__pd_util__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_18_18, (MR_Integer) 1)));
#line 188 "pd_util.m"
        transform_hlds__pd_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_18_18, (MR_Integer) 2)));
#line 188 "pd_util.m"
        transform_hlds__pd_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_18_18, (MR_Integer) 3)));
#line 188 "pd_util.m"
        transform_hlds__pd_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_18_18, (MR_Integer) 4)));
#line 188 "pd_util.m"
        transform_hlds__pd_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_18_18, (MR_Integer) 5)));
#line 189 "pd_util.m"
        {
#line 189 "pd_util.m"
          MR_Word base;
#line 189 "pd_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 189 "pd_util.m"
          *transform_hlds__pd_util__HeadVar__2_17 = base;
#line 189 "pd_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_util__PredId_9));
#line 189 "pd_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_util__ProcId_10));
#line 189 "pd_util.m"
        }
#line 189 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 188 "pd_util.m"
      }
#line 187 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 187 "pd_util.m"
  }
#line 187 "pd_util.m"
}

#line 411 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util____Compare____pd_var_info_0_0(
#line 411 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__1_1,
#line 411 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 411 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3)
#line 411 "pd_util.m"
{
#line 411 "pd_util.m"
  {
#line 411 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 411 "pd_util.m"
    MR_Word transform_hlds__pd_util__Cast_HeadVar1_4 = transform_hlds__pd_util__HeadVar__2_2;
#line 411 "pd_util.m"
    MR_Word transform_hlds__pd_util__Cast_HeadVar2_5 = transform_hlds__pd_util__HeadVar__3_3;

#line 411 "pd_util.m"
    {
#line 411 "pd_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_2[1], transform_hlds__pd_util__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar2_5)));
#line 411 "pd_util.m"
      return;
    }
#line 411 "pd_util.m"
  }
#line 411 "pd_util.m"
}

#line 411 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____pd_var_info_0_0(
#line 411 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 411 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2)
#line 411 "pd_util.m"
{
#line 411 "pd_util.m"
  {
#line 411 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 411 "pd_util.m"
    MR_Word transform_hlds__pd_util__Cast_HeadVar1_3 = transform_hlds__pd_util__HeadVar__1_1;
#line 411 "pd_util.m"
    MR_Word transform_hlds__pd_util__Cast_HeadVar2_4 = transform_hlds__pd_util__HeadVar__2_2;

#line 411 "pd_util.m"
    {
#line 411 "pd_util.m"
      return transform_hlds__pd_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar2_4)));
    }
#line 411 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 411 "pd_util.m"
  }
#line 411 "pd_util.m"
}

#line 811 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util____Compare____expansions_0_0(
#line 811 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__1_1,
#line 811 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 811 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3)
#line 811 "pd_util.m"
{
#line 811 "pd_util.m"
  {
#line 811 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 811 "pd_util.m"
    MR_Word transform_hlds__pd_util__Cast_HeadVar1_4 = transform_hlds__pd_util__HeadVar__2_2;
#line 811 "pd_util.m"
    MR_Word transform_hlds__pd_util__Cast_HeadVar2_5 = transform_hlds__pd_util__HeadVar__3_3;

#line 811 "pd_util.m"
    {
#line 811 "pd_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[3], transform_hlds__pd_util__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar2_5)));
#line 811 "pd_util.m"
      return;
    }
#line 811 "pd_util.m"
  }
#line 811 "pd_util.m"
}

#line 811 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____expansions_0_0(
#line 811 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 811 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2)
#line 811 "pd_util.m"
{
#line 811 "pd_util.m"
  {
#line 811 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 811 "pd_util.m"
    MR_Word transform_hlds__pd_util__Cast_HeadVar1_3 = transform_hlds__pd_util__HeadVar__1_1;
#line 811 "pd_util.m"
    MR_Word transform_hlds__pd_util__Cast_HeadVar2_4 = transform_hlds__pd_util__HeadVar__2_2;

#line 811 "pd_util.m"
    {
#line 811 "pd_util.m"
      return transform_hlds__pd_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[3], ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar2_4)));
    }
#line 811 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 811 "pd_util.m"
  }
#line 811 "pd_util.m"
}

#line 1131 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__match_generic_call_2_p_0(
#line 1131 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 1131 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2)
#line 1131 "pd_util.m"
{
#line 1133 "pd_util.m"
  {
#line 1133 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;

#line 1133 "pd_util.m"
    if (((MR_tag((MR_Word) transform_hlds__pd_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1135 "pd_util.m"
      {
#line 1135 "pd_util.m"
        MR_Integer transform_hlds__pd_util__MethodNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1135 "pd_util.m"
        MR_Word transform_hlds__pd_util__ClassId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1135 "pd_util.m"
        MR_Word transform_hlds__pd_util__CallId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1135 "pd_util.m"
        MR_Integer transform_hlds__pd_util__V_16_16;
#line 1135 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_17_17;
#line 1135 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_18_18;
#line 1135 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1136 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_12_12;

#line 1136 "pd_util.m"
        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1136 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 1136 "pd_util.m"
          {
#line 1136 "pd_util.m"
            transform_hlds__pd_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1136 "pd_util.m"
            transform_hlds__pd_util__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1136 "pd_util.m"
            transform_hlds__pd_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1136 "pd_util.m"
            transform_hlds__pd_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 3)));
#line 1136 "pd_util.m"
            transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__MethodNum_9 == transform_hlds__pd_util__V_16_16);
#line 1135 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 1135 "pd_util.m"
              {
#line 1136 "pd_util.m"
                {
#line 1136 "pd_util.m"
                  transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____class_id_0_0(transform_hlds__pd_util__ClassId_10, transform_hlds__pd_util__V_17_17);
                }
#line 1135 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 1136 "pd_util.m"
                  {
#line 1136 "pd_util.m"
                    return transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(transform_hlds__pd_util__CallId_11, transform_hlds__pd_util__V_18_18);
                  }
#line 1135 "pd_util.m"
              }
#line 1136 "pd_util.m"
          }
#line 1135 "pd_util.m"
      }
#line 1133 "pd_util.m"
    else
#line 1133 "pd_util.m"
      if (((MR_tag((MR_Word) transform_hlds__pd_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1133 "pd_util.m"
        {
#line 1133 "pd_util.m"
          MR_Word transform_hlds__pd_util__Purity_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1133 "pd_util.m"
          MR_Word transform_hlds__pd_util__PredOrFunc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1133 "pd_util.m"
          MR_Integer transform_hlds__pd_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1133 "pd_util.m"
          MR_Word transform_hlds__pd_util__V_13_13;
#line 1133 "pd_util.m"
          MR_Word transform_hlds__pd_util__V_14_14;
#line 1133 "pd_util.m"
          MR_Integer transform_hlds__pd_util__V_15_15;
#line 1133 "pd_util.m"
          MR_Word transform_hlds__pd_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1134 "pd_util.m"
          MR_Word transform_hlds__pd_util__V_7_7;

#line 1134 "pd_util.m"
          transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1134 "pd_util.m"
          if (transform_hlds__pd_util__succeeded)
#line 1134 "pd_util.m"
            {
#line 1134 "pd_util.m"
              transform_hlds__pd_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1134 "pd_util.m"
              transform_hlds__pd_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1134 "pd_util.m"
              transform_hlds__pd_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1134 "pd_util.m"
              transform_hlds__pd_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 3)));
#line 1134 "pd_util.m"
              transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Purity_4 == transform_hlds__pd_util__V_13_13);
#line 1133 "pd_util.m"
              if (transform_hlds__pd_util__succeeded)
#line 1133 "pd_util.m"
                {
#line 1134 "pd_util.m"
                  transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__PredOrFunc_5 == transform_hlds__pd_util__V_14_14);
#line 1133 "pd_util.m"
                  if (transform_hlds__pd_util__succeeded)
#line 1134 "pd_util.m"
                    transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Arity_6 == transform_hlds__pd_util__V_15_15);
#line 1133 "pd_util.m"
                }
#line 1134 "pd_util.m"
            }
#line 1133 "pd_util.m"
        }
#line 1133 "pd_util.m"
      else
#line 1133 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_FALSE;
#line 1133 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 1133 "pd_util.m"
  }
#line 1131 "pd_util.m"
}

#line 1101 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_2_4_p_0_1(
#line 1101 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 1101 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 1101 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
#line 1101 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_3)
#line 1101 "pd_util.m"
{
#line 1101 "pd_util.m"
  {
#line 1101 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 1101 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
#line 1101 "pd_util.m"
    MR_Word transform_hlds__pd_util__conv0_HeadVar__3_95;

#line 1101 "pd_util.m"
    {
#line 1101 "pd_util.m"
      transform_hlds__pd_util__succeeded = transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1101__1_3_p_0(((MR_Word) transform_hlds__pd_util__wrapper_arg_1), ((MR_Word) transform_hlds__pd_util__wrapper_arg_2), &transform_hlds__pd_util__conv0_HeadVar__3_95);
    }
#line 1101 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 1101 "pd_util.m"
      {
#line 1101 "pd_util.m"
        *transform_hlds__pd_util__wrapper_arg_3 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__3_95));
#line 1101 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1101 "pd_util.m"
      }
#line 1101 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 1101 "pd_util.m"
  }
#line 1101 "pd_util.m"
}

#line 1048 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_2_4_p_0(
#line 1048 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 1048 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 1048 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3,
#line 1048 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_4)
#line 1048 "pd_util.m"
{
#line 1051 "pd_util.m"
  while (MR_TRUE)
#line 1051 "pd_util.m"
    {
#line 1051 "pd_util.m"
      /* tailcall optimized into a loop */
#line 1051 "pd_util.m"
      {
#line 1051 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 1051 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1051 "pd_util.m"
          {
#line 1051 "pd_util.m"
            transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1051 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 1051 "pd_util.m"
              {
#line 1051 "pd_util.m"
                *transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_4 = transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3;
#line 1051 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1051 "pd_util.m"
              }
#line 1051 "pd_util.m"
          }
#line 1051 "pd_util.m"
        else
#line 1052 "pd_util.m"
          {
#line 1052 "pd_util.m"
            MR_Word transform_hlds__pd_util__OldGoal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1052 "pd_util.m"
            MR_Word transform_hlds__pd_util__OldGoals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1052 "pd_util.m"
            MR_Word transform_hlds__pd_util__NewGoal_10;
#line 1052 "pd_util.m"
            MR_Word transform_hlds__pd_util__NewGoals_11;
#line 1052 "pd_util.m"
            MR_Word transform_hlds__pd_util__OldGoalExpr_13;
#line 1052 "pd_util.m"
            MR_Word transform_hlds__pd_util__NewGoalExpr_15;
#line 1052 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_96_96;
#line 1053 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_14_14;
#line 1054 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_16_16;
#line 1112 "pd_util.m"
            MR_Word transform_hlds__pd_util__OldArgs_31;
#line 1112 "pd_util.m"
            MR_Word transform_hlds__pd_util__NewArgs_32;

#line 1052 "pd_util.m"
            transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1052 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 1052 "pd_util.m"
              {
#line 1052 "pd_util.m"
                transform_hlds__pd_util__NewGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1052 "pd_util.m"
                transform_hlds__pd_util__NewGoals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1053 "pd_util.m"
                transform_hlds__pd_util__OldGoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldGoal_8, (MR_Integer) 0)));
#line 1053 "pd_util.m"
                transform_hlds__pd_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldGoal_8, (MR_Integer) 1)));
#line 1054 "pd_util.m"
                transform_hlds__pd_util__NewGoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewGoal_10, (MR_Integer) 0)));
#line 1054 "pd_util.m"
                transform_hlds__pd_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewGoal_10, (MR_Integer) 1)));
#line 1084 "pd_util.m"
                if (((MR_tag((MR_Word) transform_hlds__pd_util__OldGoalExpr_13)) == (MR_mktag((MR_Integer) 2))))
#line 1085 "pd_util.m"
                  {
#line 1085 "pd_util.m"
                    MR_Word transform_hlds__pd_util__PredId_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 0)));
#line 1085 "pd_util.m"
                    MR_Integer transform_hlds__pd_util__ProcId_53 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 1)));
#line 1085 "pd_util.m"
                    MR_Word transform_hlds__pd_util__V_121_121;
#line 1085 "pd_util.m"
                    MR_Integer transform_hlds__pd_util__V_122_122;
#line 1085 "pd_util.m"
                    MR_Word transform_hlds__pd_util__V_54_54;
#line 1085 "pd_util.m"
                    MR_Word transform_hlds__pd_util__V_55_55;
#line 1085 "pd_util.m"
                    MR_Word transform_hlds__pd_util__V_56_56;
#line 1086 "pd_util.m"
                    MR_Word transform_hlds__pd_util__V_57_57;
#line 1086 "pd_util.m"
                    MR_Word transform_hlds__pd_util__V_58_58;
#line 1086 "pd_util.m"
                    MR_Word transform_hlds__pd_util__V_59_59;

#line 1085 "pd_util.m"
                    transform_hlds__pd_util__OldArgs_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 2)));
#line 1085 "pd_util.m"
                    transform_hlds__pd_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 3)));
#line 1085 "pd_util.m"
                    transform_hlds__pd_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 4)));
#line 1085 "pd_util.m"
                    transform_hlds__pd_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 5)));
#line 1086 "pd_util.m"
                    transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewGoalExpr_15)) == (MR_mktag((MR_Integer) 2)));
#line 1086 "pd_util.m"
                    if (transform_hlds__pd_util__succeeded)
#line 1086 "pd_util.m"
                      {
#line 1086 "pd_util.m"
                        transform_hlds__pd_util__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 0)));
#line 1086 "pd_util.m"
                        transform_hlds__pd_util__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 1)));
#line 1086 "pd_util.m"
                        transform_hlds__pd_util__NewArgs_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 2)));
#line 1086 "pd_util.m"
                        transform_hlds__pd_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 3)));
#line 1086 "pd_util.m"
                        transform_hlds__pd_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 4)));
#line 1086 "pd_util.m"
                        transform_hlds__pd_util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 5)));
#line 1086 "pd_util.m"
                        {
#line 1086 "pd_util.m"
                          transform_hlds__pd_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__pd_util__PredId_52, transform_hlds__pd_util__V_121_121);
                        }
#line 1085 "pd_util.m"
                        if (transform_hlds__pd_util__succeeded)
#line 1086 "pd_util.m"
                          transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__ProcId_53 == transform_hlds__pd_util__V_122_122);
#line 1086 "pd_util.m"
                      }
#line 1085 "pd_util.m"
                  }
#line 1084 "pd_util.m"
                else
#line 1084 "pd_util.m"
                  if (((MR_tag((MR_Word) transform_hlds__pd_util__OldGoalExpr_13)) == (MR_mktag((MR_Integer) 1))))
#line 1057 "pd_util.m"
                    {
#line 1057 "pd_util.m"
                      MR_Word transform_hlds__pd_util__OldUnification_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 3)));
#line 1057 "pd_util.m"
                      MR_Word transform_hlds__pd_util__NewUnification_25;
#line 1057 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 0)));
#line 1057 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 1)));
#line 1057 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 2)));
#line 1057 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 4)));
#line 1058 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_22_22;
#line 1058 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_23_23;
#line 1058 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_24_24;
#line 1058 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_26_26;

#line 1058 "pd_util.m"
                      transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewGoalExpr_15)) == (MR_mktag((MR_Integer) 1)));
#line 1058 "pd_util.m"
                      if (transform_hlds__pd_util__succeeded)
#line 1058 "pd_util.m"
                        {
#line 1058 "pd_util.m"
                          transform_hlds__pd_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 0)));
#line 1058 "pd_util.m"
                          transform_hlds__pd_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 1)));
#line 1058 "pd_util.m"
                          transform_hlds__pd_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 2)));
#line 1058 "pd_util.m"
                          transform_hlds__pd_util__NewUnification_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 3)));
#line 1058 "pd_util.m"
                          transform_hlds__pd_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 4)));
#line 1064 "pd_util.m"
                          if (((MR_tag((MR_Word) transform_hlds__pd_util__OldUnification_20)) == (MR_mktag((MR_Integer) 2))))
#line 1065 "pd_util.m"
                            {
#line 1065 "pd_util.m"
                              MR_Word transform_hlds__pd_util__V_85_85;
#line 1065 "pd_util.m"
                              MR_Word transform_hlds__pd_util__V_86_86;
#line 1065 "pd_util.m"
                              MR_Word transform_hlds__pd_util__V_87_87;
#line 1065 "pd_util.m"
                              MR_Word transform_hlds__pd_util__V_88_88;
#line 1065 "pd_util.m"
                              MR_Word transform_hlds__pd_util__OldVar1_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 0)));
#line 1065 "pd_util.m"
                              MR_Word transform_hlds__pd_util__OldVar2_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 1)));
#line 1065 "pd_util.m"
                              MR_Word transform_hlds__pd_util__NewVar1_101;
#line 1065 "pd_util.m"
                              MR_Word transform_hlds__pd_util__NewVar2_102;

#line 1066 "pd_util.m"
                              transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewUnification_25)) == (MR_mktag((MR_Integer) 2)));
#line 1066 "pd_util.m"
                              if (transform_hlds__pd_util__succeeded)
#line 1066 "pd_util.m"
                                {
#line 1066 "pd_util.m"
                                  transform_hlds__pd_util__NewVar1_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 0)));
#line 1066 "pd_util.m"
                                  transform_hlds__pd_util__NewVar2_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 1)));
#line 1067 "pd_util.m"
                                  transform_hlds__pd_util__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1068 "pd_util.m"
                                  transform_hlds__pd_util__V_88_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1067 "pd_util.m"
                                  {
#line 1067 "pd_util.m"
                                    transform_hlds__pd_util__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "pd_util.m"
                                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_85_85, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar2_100));
#line 1067 "pd_util.m"
                                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_85_85, 1) = ((MR_Box) (transform_hlds__pd_util__V_86_86));
#line 1067 "pd_util.m"
                                  }
#line 1067 "pd_util.m"
                                  {
#line 1067 "pd_util.m"
                                    transform_hlds__pd_util__OldArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "pd_util.m"
                                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar1_99));
#line 1067 "pd_util.m"
                                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 1) = ((MR_Box) (transform_hlds__pd_util__V_85_85));
#line 1067 "pd_util.m"
                                  }
#line 1068 "pd_util.m"
                                  {
#line 1068 "pd_util.m"
                                    transform_hlds__pd_util__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "pd_util.m"
                                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_87_87, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar2_102));
#line 1068 "pd_util.m"
                                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_87_87, 1) = ((MR_Box) (transform_hlds__pd_util__V_88_88));
#line 1068 "pd_util.m"
                                  }
#line 1068 "pd_util.m"
                                  {
#line 1068 "pd_util.m"
                                    transform_hlds__pd_util__NewArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "pd_util.m"
                                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar1_101));
#line 1068 "pd_util.m"
                                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 1) = ((MR_Box) (transform_hlds__pd_util__V_87_87));
#line 1068 "pd_util.m"
                                  }
#line 1068 "pd_util.m"
                                  transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1066 "pd_util.m"
                                }
#line 1065 "pd_util.m"
                            }
#line 1064 "pd_util.m"
                          else
#line 1064 "pd_util.m"
                            if (((MR_tag((MR_Word) transform_hlds__pd_util__OldUnification_20)) == (MR_mktag((MR_Integer) 0))))
#line 1071 "pd_util.m"
                              {
#line 1071 "pd_util.m"
                                MR_Word transform_hlds__pd_util__OldVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 0)));
#line 1071 "pd_util.m"
                                MR_Word transform_hlds__pd_util__ConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 1)));
#line 1071 "pd_util.m"
                                MR_Word transform_hlds__pd_util__OldArgs1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 2)));
#line 1071 "pd_util.m"
                                MR_Word transform_hlds__pd_util__NewVar_40;
#line 1071 "pd_util.m"
                                MR_Word transform_hlds__pd_util__NewArgs1_41;
#line 1071 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_119_119;
#line 1070 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 3)));
#line 1070 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 4)));
#line 1070 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 5)));
#line 1070 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 6)));
#line 1072 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_42_42;
#line 1072 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_43_43;
#line 1072 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_44_44;
#line 1072 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_45_45;

#line 1072 "pd_util.m"
                                transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewUnification_25)) == (MR_mktag((MR_Integer) 0)));
#line 1072 "pd_util.m"
                                if (transform_hlds__pd_util__succeeded)
#line 1072 "pd_util.m"
                                  {
#line 1072 "pd_util.m"
                                    transform_hlds__pd_util__NewVar_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 0)));
#line 1072 "pd_util.m"
                                    transform_hlds__pd_util__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 1)));
#line 1072 "pd_util.m"
                                    transform_hlds__pd_util__NewArgs1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 2)));
#line 1072 "pd_util.m"
                                    transform_hlds__pd_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 3)));
#line 1072 "pd_util.m"
                                    transform_hlds__pd_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 4)));
#line 1072 "pd_util.m"
                                    transform_hlds__pd_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 5)));
#line 1072 "pd_util.m"
                                    transform_hlds__pd_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 6)));
#line 1072 "pd_util.m"
                                    {
#line 1072 "pd_util.m"
                                      transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__pd_util__ConsId_34, transform_hlds__pd_util__V_119_119);
                                    }
#line 1071 "pd_util.m"
                                    if (transform_hlds__pd_util__succeeded)
#line 1071 "pd_util.m"
                                      {
#line 1074 "pd_util.m"
                                        {
#line 1074 "pd_util.m"
                                          transform_hlds__pd_util__OldArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar_33));
#line 1074 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 1) = ((MR_Box) (transform_hlds__pd_util__OldArgs1_35));
#line 1074 "pd_util.m"
                                        }
#line 1075 "pd_util.m"
                                        {
#line 1075 "pd_util.m"
                                          transform_hlds__pd_util__NewArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar_40));
#line 1075 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 1) = ((MR_Box) (transform_hlds__pd_util__NewArgs1_41));
#line 1075 "pd_util.m"
                                        }
#line 1075 "pd_util.m"
                                        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1071 "pd_util.m"
                                      }
#line 1072 "pd_util.m"
                                  }
#line 1071 "pd_util.m"
                              }
#line 1064 "pd_util.m"
                            else
#line 1064 "pd_util.m"
                              if (((MR_tag((MR_Word) transform_hlds__pd_util__OldUnification_20)) == (MR_mktag((MR_Integer) 1))))
#line 1078 "pd_util.m"
                                {
#line 1078 "pd_util.m"
                                  MR_Word transform_hlds__pd_util__OldVar_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 0)));
#line 1078 "pd_util.m"
                                  MR_Word transform_hlds__pd_util__ConsId_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 1)));
#line 1078 "pd_util.m"
                                  MR_Word transform_hlds__pd_util__OldArgs1_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 2)));
#line 1078 "pd_util.m"
                                  MR_Word transform_hlds__pd_util__NewVar_106;
#line 1078 "pd_util.m"
                                  MR_Word transform_hlds__pd_util__NewArgs1_107;
#line 1078 "pd_util.m"
                                  MR_Word transform_hlds__pd_util__V_120_120;
#line 1077 "pd_util.m"
                                  MR_Word transform_hlds__pd_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 3)));
#line 1077 "pd_util.m"
                                  MR_Word transform_hlds__pd_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 4)));
#line 1077 "pd_util.m"
                                  MR_Word transform_hlds__pd_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 5)));
#line 1079 "pd_util.m"
                                  MR_Word transform_hlds__pd_util__V_49_49;
#line 1079 "pd_util.m"
                                  MR_Word transform_hlds__pd_util__V_50_50;
#line 1079 "pd_util.m"
                                  MR_Word transform_hlds__pd_util__V_51_51;

#line 1079 "pd_util.m"
                                  transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewUnification_25)) == (MR_mktag((MR_Integer) 1)));
#line 1079 "pd_util.m"
                                  if (transform_hlds__pd_util__succeeded)
#line 1079 "pd_util.m"
                                    {
#line 1079 "pd_util.m"
                                      transform_hlds__pd_util__NewVar_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 0)));
#line 1079 "pd_util.m"
                                      transform_hlds__pd_util__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 1)));
#line 1079 "pd_util.m"
                                      transform_hlds__pd_util__NewArgs1_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 2)));
#line 1079 "pd_util.m"
                                      transform_hlds__pd_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 3)));
#line 1079 "pd_util.m"
                                      transform_hlds__pd_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 4)));
#line 1079 "pd_util.m"
                                      transform_hlds__pd_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 5)));
#line 1079 "pd_util.m"
                                      {
#line 1079 "pd_util.m"
                                        transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__pd_util__ConsId_104, transform_hlds__pd_util__V_120_120);
                                      }
#line 1078 "pd_util.m"
                                      if (transform_hlds__pd_util__succeeded)
#line 1078 "pd_util.m"
                                        {
#line 1081 "pd_util.m"
                                          {
#line 1081 "pd_util.m"
                                            transform_hlds__pd_util__OldArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "pd_util.m"
                                            MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar_103));
#line 1081 "pd_util.m"
                                            MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 1) = ((MR_Box) (transform_hlds__pd_util__OldArgs1_105));
#line 1081 "pd_util.m"
                                          }
#line 1082 "pd_util.m"
                                          {
#line 1082 "pd_util.m"
                                            transform_hlds__pd_util__NewArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "pd_util.m"
                                            MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar_106));
#line 1082 "pd_util.m"
                                            MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 1) = ((MR_Box) (transform_hlds__pd_util__NewArgs1_107));
#line 1082 "pd_util.m"
                                          }
#line 1082 "pd_util.m"
                                          transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1078 "pd_util.m"
                                        }
#line 1079 "pd_util.m"
                                    }
#line 1078 "pd_util.m"
                                }
#line 1064 "pd_util.m"
                              else
#line 1064 "pd_util.m"
                                if (((((MR_tag((MR_Word) transform_hlds__pd_util__OldUnification_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1060 "pd_util.m"
                                  {
#line 1060 "pd_util.m"
                                    MR_Word transform_hlds__pd_util__OldVar1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 1)));
#line 1060 "pd_util.m"
                                    MR_Word transform_hlds__pd_util__OldVar2_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 2)));
#line 1060 "pd_util.m"
                                    MR_Word transform_hlds__pd_util__NewVar1_29;
#line 1060 "pd_util.m"
                                    MR_Word transform_hlds__pd_util__NewVar2_30;
#line 1060 "pd_util.m"
                                    MR_Word transform_hlds__pd_util__V_89_89;
#line 1060 "pd_util.m"
                                    MR_Word transform_hlds__pd_util__V_90_90;
#line 1060 "pd_util.m"
                                    MR_Word transform_hlds__pd_util__V_91_91;
#line 1060 "pd_util.m"
                                    MR_Word transform_hlds__pd_util__V_92_92;

#line 1061 "pd_util.m"
                                    transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__NewUnification_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1061 "pd_util.m"
                                    if (transform_hlds__pd_util__succeeded)
#line 1061 "pd_util.m"
                                      {
#line 1061 "pd_util.m"
                                        transform_hlds__pd_util__NewVar1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 1)));
#line 1061 "pd_util.m"
                                        transform_hlds__pd_util__NewVar2_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 2)));
#line 1062 "pd_util.m"
                                        transform_hlds__pd_util__V_90_90 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1063 "pd_util.m"
                                        transform_hlds__pd_util__V_92_92 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1062 "pd_util.m"
                                        {
#line 1062 "pd_util.m"
                                          transform_hlds__pd_util__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_89_89, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar2_28));
#line 1062 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_89_89, 1) = ((MR_Box) (transform_hlds__pd_util__V_90_90));
#line 1062 "pd_util.m"
                                        }
#line 1062 "pd_util.m"
                                        {
#line 1062 "pd_util.m"
                                          transform_hlds__pd_util__OldArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar1_27));
#line 1062 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 1) = ((MR_Box) (transform_hlds__pd_util__V_89_89));
#line 1062 "pd_util.m"
                                        }
#line 1063 "pd_util.m"
                                        {
#line 1063 "pd_util.m"
                                          transform_hlds__pd_util__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_91_91, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar2_30));
#line 1063 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_91_91, 1) = ((MR_Box) (transform_hlds__pd_util__V_92_92));
#line 1063 "pd_util.m"
                                        }
#line 1063 "pd_util.m"
                                        {
#line 1063 "pd_util.m"
                                          transform_hlds__pd_util__NewArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar1_29));
#line 1063 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 1) = ((MR_Box) (transform_hlds__pd_util__V_91_91));
#line 1063 "pd_util.m"
                                        }
#line 1063 "pd_util.m"
                                        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1061 "pd_util.m"
                                      }
#line 1060 "pd_util.m"
                                  }
#line 1064 "pd_util.m"
                                else
#line 1064 "pd_util.m"
                                  transform_hlds__pd_util__succeeded = MR_FALSE;
#line 1058 "pd_util.m"
                        }
#line 1057 "pd_util.m"
                    }
#line 1084 "pd_util.m"
                  else
#line 1084 "pd_util.m"
                    if (((((MR_tag((MR_Word) transform_hlds__pd_util__OldGoalExpr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1091 "pd_util.m"
                      {
#line 1091 "pd_util.m"
                        MR_Word transform_hlds__pd_util__TypeInfo_113_113;
#line 1091 "pd_util.m"
                        MR_Word transform_hlds__pd_util__OldGenericCall_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 1)));
#line 1091 "pd_util.m"
                        MR_Word transform_hlds__pd_util__Det_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 5)));
#line 1091 "pd_util.m"
                        MR_Word transform_hlds__pd_util__NewGenericCall_64;
#line 1091 "pd_util.m"
                        MR_Word transform_hlds__pd_util__OldArgs0_67;
#line 1091 "pd_util.m"
                        MR_Word transform_hlds__pd_util__NewArgs0_68;
#line 1091 "pd_util.m"
                        MR_Word transform_hlds__pd_util__OldArgs1_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 2)));
#line 1091 "pd_util.m"
                        MR_Word transform_hlds__pd_util__NewArgs1_109;
#line 1091 "pd_util.m"
                        MR_Word transform_hlds__pd_util__V_123_123;
#line 1091 "pd_util.m"
                        MR_Word transform_hlds__pd_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 3)));
#line 1091 "pd_util.m"
                        MR_Word transform_hlds__pd_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 4)));
#line 1092 "pd_util.m"
                        MR_Word transform_hlds__pd_util__V_65_65;
#line 1092 "pd_util.m"
                        MR_Word transform_hlds__pd_util__V_66_66;

#line 1092 "pd_util.m"
                        transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__NewGoalExpr_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1092 "pd_util.m"
                        if (transform_hlds__pd_util__succeeded)
#line 1092 "pd_util.m"
                          {
#line 1092 "pd_util.m"
                            transform_hlds__pd_util__NewGenericCall_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 1)));
#line 1092 "pd_util.m"
                            transform_hlds__pd_util__NewArgs1_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 2)));
#line 1092 "pd_util.m"
                            transform_hlds__pd_util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 3)));
#line 1092 "pd_util.m"
                            transform_hlds__pd_util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 4)));
#line 1092 "pd_util.m"
                            transform_hlds__pd_util__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 5)));
#line 1092 "pd_util.m"
                            transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Det_63 == transform_hlds__pd_util__V_123_123);
#line 1091 "pd_util.m"
                            if (transform_hlds__pd_util__succeeded)
#line 1091 "pd_util.m"
                              {
#line 1093 "pd_util.m"
                                {
#line 1093 "pd_util.m"
                                  transform_hlds__pd_util__succeeded = transform_hlds__pd_util__match_generic_call_2_p_0(transform_hlds__pd_util__OldGenericCall_60, transform_hlds__pd_util__NewGenericCall_64);
                                }
#line 1091 "pd_util.m"
                                if (transform_hlds__pd_util__succeeded)
#line 1091 "pd_util.m"
                                  {
#line 1094 "pd_util.m"
                                    {
#line 1094 "pd_util.m"
                                      hlds__goal_util__generic_call_vars_2_p_0(transform_hlds__pd_util__OldGenericCall_60, &transform_hlds__pd_util__OldArgs0_67);
                                    }
#line 1095 "pd_util.m"
                                    {
#line 1095 "pd_util.m"
                                      hlds__goal_util__generic_call_vars_2_p_0(transform_hlds__pd_util__NewGenericCall_64, &transform_hlds__pd_util__NewArgs0_68);
                                    }
#line 3680 "transform_hlds.pd_util.c"
                                    transform_hlds__pd_util__TypeInfo_113_113 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 1096 "pd_util.m"
                                    {
#line 1096 "pd_util.m"
                                      mercury__list__append_3_p_1(transform_hlds__pd_util__TypeInfo_113_113, transform_hlds__pd_util__OldArgs0_67, transform_hlds__pd_util__OldArgs1_108, &transform_hlds__pd_util__OldArgs_31);
                                    }
#line 1097 "pd_util.m"
                                    {
#line 1097 "pd_util.m"
                                      mercury__list__append_3_p_1(transform_hlds__pd_util__TypeInfo_113_113, transform_hlds__pd_util__NewArgs0_68, transform_hlds__pd_util__NewArgs1_109, &transform_hlds__pd_util__NewArgs_32);
                                    }
#line 1097 "pd_util.m"
                                    transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1091 "pd_util.m"
                                  }
#line 1091 "pd_util.m"
                              }
#line 1092 "pd_util.m"
                          }
#line 1091 "pd_util.m"
                      }
#line 1084 "pd_util.m"
                    else
#line 1084 "pd_util.m"
                      transform_hlds__pd_util__succeeded = MR_FALSE;
#line 1112 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 1100 "pd_util.m"
                  {
#line 1100 "pd_util.m"
                    MR_Word transform_hlds__pd_util__TypeInfo_114_114 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 1100 "pd_util.m"
                    MR_Word transform_hlds__pd_util__ONArgsList_69;
#line 1111 "pd_util.m"
                    MR_Box transform_hlds__pd_util__conv1_STATE_VARIABLE_ONRenaming_96_96;

#line 1100 "pd_util.m"
                    {
#line 1100 "pd_util.m"
                      mercury__assoc_list__from_corresponding_lists_3_p_0(transform_hlds__pd_util__TypeInfo_114_114, transform_hlds__pd_util__TypeInfo_114_114, transform_hlds__pd_util__OldArgs_31, transform_hlds__pd_util__NewArgs_32, &transform_hlds__pd_util__ONArgsList_69);
                    }
#line 1111 "pd_util.m"
                    {
#line 1111 "pd_util.m"
                      transform_hlds__pd_util__succeeded = mercury__list__foldl_4_p_3((MR_Word) &transform_hlds__pd_util_scalar_common_2[2], (MR_Word) &transform_hlds__pd_util_scalar_common_2[3], (MR_Word) &transform_hlds__pd_util_scalar_common_2[5], transform_hlds__pd_util__ONArgsList_69, ((MR_Box) (transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3)), &transform_hlds__pd_util__conv1_STATE_VARIABLE_ONRenaming_96_96);
                    }
#line 1111 "pd_util.m"
                    if (transform_hlds__pd_util__succeeded)
#line 1111 "pd_util.m"
                      {
#line 1111 "pd_util.m"
                        transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_96_96 = ((MR_Word) transform_hlds__pd_util__conv1_STATE_VARIABLE_ONRenaming_96_96);
#line 1111 "pd_util.m"
                        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1111 "pd_util.m"
                      }
#line 1100 "pd_util.m"
                  }
#line 1112 "pd_util.m"
                else
#line 1124 "pd_util.m"
                  {
#line 1124 "pd_util.m"
                    MR_Word transform_hlds__pd_util__OldSubGoal_77;
#line 1124 "pd_util.m"
                    MR_Word transform_hlds__pd_util__NewSubGoal_78;
#line 1124 "pd_util.m"
                    MR_Word transform_hlds__pd_util__OldSubGoalList_81;
#line 1124 "pd_util.m"
                    MR_Word transform_hlds__pd_util__NewSubGoalList_82;

#line 1116 "pd_util.m"
                    if (((MR_tag((MR_Word) transform_hlds__pd_util__OldGoalExpr_13)) == (MR_mktag((MR_Integer) 0))))
#line 1114 "pd_util.m"
                      {
#line 1114 "pd_util.m"
                        transform_hlds__pd_util__OldSubGoal_77 = (MR_Word) MR_body(((MR_Word) transform_hlds__pd_util__OldGoalExpr_13), (MR_Integer) 0);
#line 1115 "pd_util.m"
                        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewGoalExpr_15)) == (MR_mktag((MR_Integer) 0)));
#line 1115 "pd_util.m"
                        if (transform_hlds__pd_util__succeeded)
#line 1115 "pd_util.m"
                          transform_hlds__pd_util__NewSubGoal_78 = (MR_Word) MR_body(((MR_Word) transform_hlds__pd_util__NewGoalExpr_15), (MR_Integer) 0);
#line 1114 "pd_util.m"
                      }
#line 1116 "pd_util.m"
                    else
#line 1116 "pd_util.m"
                      if (((((MR_tag((MR_Word) transform_hlds__pd_util__OldGoalExpr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1117 "pd_util.m"
                        {
#line 1117 "pd_util.m"
                          MR_Word transform_hlds__pd_util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 1)));
#line 1118 "pd_util.m"
                          MR_Word transform_hlds__pd_util__V_80_80;

#line 1117 "pd_util.m"
                          transform_hlds__pd_util__OldSubGoal_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 2)));
#line 1118 "pd_util.m"
                          transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__NewGoalExpr_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1118 "pd_util.m"
                          if (transform_hlds__pd_util__succeeded)
#line 1118 "pd_util.m"
                            {
#line 1118 "pd_util.m"
                              transform_hlds__pd_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 1)));
#line 1118 "pd_util.m"
                              transform_hlds__pd_util__NewSubGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 2)));
#line 1118 "pd_util.m"
                            }
#line 1117 "pd_util.m"
                        }
#line 1116 "pd_util.m"
                      else
#line 1116 "pd_util.m"
                        transform_hlds__pd_util__succeeded = MR_FALSE;
#line 1124 "pd_util.m"
                    if (transform_hlds__pd_util__succeeded)
#line 1124 "pd_util.m"
                      {
#line 1121 "pd_util.m"
                        {
#line 1121 "pd_util.m"
                          hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__OldSubGoal_77, &transform_hlds__pd_util__OldSubGoalList_81);
                        }
#line 1122 "pd_util.m"
                        {
#line 1122 "pd_util.m"
                          hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__NewSubGoal_78, &transform_hlds__pd_util__NewSubGoalList_82);
                        }
#line 1123 "pd_util.m"
                        {
#line 1123 "pd_util.m"
                          transform_hlds__pd_util__succeeded = transform_hlds__pd_util__goals_match_2_4_p_0(transform_hlds__pd_util__OldSubGoalList_81, transform_hlds__pd_util__NewSubGoalList_82, transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3, &transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_96_96);
                        }
#line 1124 "pd_util.m"
                      }
#line 1124 "pd_util.m"
                  }
#line 1052 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 1127 "pd_util.m"
                  {
#line 1127 "pd_util.m"
                    /* direct tailcall eliminated */
#line 1127 "pd_util.m"
                    {
#line 1127 "pd_util.m"
                      MR_Word transform_hlds__pd_util__HeadVar__1__tmp_copy_1 = transform_hlds__pd_util__OldGoals_9;
#line 1127 "pd_util.m"
                      MR_Word transform_hlds__pd_util__HeadVar__2__tmp_copy_2 = transform_hlds__pd_util__NewGoals_11;
#line 1127 "pd_util.m"
                      MR_Word transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0__tmp_copy_3 = transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_96_96;

#line 1127 "pd_util.m"
                      transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3 = transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0__tmp_copy_3;
#line 1127 "pd_util.m"
                      transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__HeadVar__2__tmp_copy_2;
#line 1127 "pd_util.m"
                      transform_hlds__pd_util__HeadVar__1_1 = transform_hlds__pd_util__HeadVar__1__tmp_copy_1;
#line 1127 "pd_util.m"
                    }
#line 1127 "pd_util.m"
                    continue;
#line 1127 "pd_util.m"
                  }
#line 1052 "pd_util.m"
              }
#line 1052 "pd_util.m"
          }
#line 1051 "pd_util.m"
        return transform_hlds__pd_util__succeeded;
#line 1051 "pd_util.m"
      }
#line 1051 "pd_util.m"
      break;
#line 1051 "pd_util.m"
    }
#line 1048 "pd_util.m"
}

#line 1026 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__collect_matching_arg_types_5_p_0(
#line 1026 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 1026 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 1026 "pd_util.m"
  MR_Word transform_hlds__pd_util__Renaming_3,
#line 1026 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4,
#line 1026 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_5)
#line 1026 "pd_util.m"
{
#line 1030 "pd_util.m"
  while (MR_TRUE)
#line 1030 "pd_util.m"
    {
#line 1030 "pd_util.m"
      /* tailcall optimized into a loop */
#line 1030 "pd_util.m"
      {
#line 1030 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 1030 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1030 "pd_util.m"
          if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1030 "pd_util.m"
            {
#line 1031 "pd_util.m"
              {
#line 1031 "pd_util.m"
                mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4, transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_5);
#line 1031 "pd_util.m"
                return;
              }
#line 1030 "pd_util.m"
            }
#line 1030 "pd_util.m"
          else
#line 1034 "pd_util.m"
            {
#line 1035 "pd_util.m"
              {
#line 1035 "pd_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_util", (MR_String) "predicate \140transform_hlds.pd_util.collect_matching_arg_types\'/5", (MR_String) "list length mismatch");
#line 1035 "pd_util.m"
                return;
              }
#line 1034 "pd_util.m"
            }
#line 1030 "pd_util.m"
        else
#line 1030 "pd_util.m"
          {
#line 1030 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1030 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1030 "pd_util.m"
            if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "pd_util.m"
              {
#line 1033 "pd_util.m"
                {
#line 1033 "pd_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_util", (MR_String) "predicate \140transform_hlds.pd_util.collect_matching_arg_types\'/5", (MR_String) "list length mismatch");
#line 1033 "pd_util.m"
                  return;
                }
#line 1032 "pd_util.m"
              }
#line 1030 "pd_util.m"
            else
#line 1037 "pd_util.m"
              {
#line 1037 "pd_util.m"
                MR_Word transform_hlds__pd_util__Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1037 "pd_util.m"
                MR_Word transform_hlds__pd_util__Types_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1037 "pd_util.m"
                MR_Word transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37;
#line 1038 "pd_util.m"
                MR_Word transform_hlds__pd_util__TypeInfo_40_40 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];

#line 1038 "pd_util.m"
                {
#line 1038 "pd_util.m"
                  transform_hlds__pd_util__succeeded = mercury__map__contains_2_p_0(transform_hlds__pd_util__TypeInfo_40_40, transform_hlds__pd_util__TypeInfo_40_40, transform_hlds__pd_util__Renaming_3, ((MR_Box) (transform_hlds__pd_util__V_42_42)));
                }
#line 1040 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 1039 "pd_util.m"
                  {
#line 1039 "pd_util.m"
                    transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "pd_util.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37, 0) = ((MR_Box) (transform_hlds__pd_util__Type_31));
#line 1039 "pd_util.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37, 1) = ((MR_Box) (transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4));
#line 1039 "pd_util.m"
                  }
#line 1040 "pd_util.m"
                else
#line 1039 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37 = transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4;
#line 1043 "pd_util.m"
                /* direct tailcall eliminated */
#line 1043 "pd_util.m"
                {
#line 1043 "pd_util.m"
                  MR_Word transform_hlds__pd_util__HeadVar__1__tmp_copy_1 = transform_hlds__pd_util__V_41_41;
#line 1043 "pd_util.m"
                  MR_Word transform_hlds__pd_util__HeadVar__2__tmp_copy_2 = transform_hlds__pd_util__Types_32;
#line 1043 "pd_util.m"
                  MR_Word transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0__tmp_copy_4 = transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37;

#line 1043 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4 = transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0__tmp_copy_4;
#line 1043 "pd_util.m"
                  transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__HeadVar__2__tmp_copy_2;
#line 1043 "pd_util.m"
                  transform_hlds__pd_util__HeadVar__1_1 = transform_hlds__pd_util__HeadVar__1__tmp_copy_1;
#line 1043 "pd_util.m"
                }
#line 1043 "pd_util.m"
                continue;
#line 1037 "pd_util.m"
              }
#line 1030 "pd_util.m"
          }
#line 1030 "pd_util.m"
      }
#line 1030 "pd_util.m"
      break;
#line 1030 "pd_util.m"
    }
#line 1026 "pd_util.m"
}

#line 990 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__inst_list_size_5_p_0(
#line 990 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 990 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 990 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_3,
#line 990 "pd_util.m"
  MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_0_4,
#line 990 "pd_util.m"
  MR_Integer * transform_hlds__pd_util__STATE_VARIABLE_Size_5)
#line 990 "pd_util.m"
{
#line 993 "pd_util.m"
  while (MR_TRUE)
#line 993 "pd_util.m"
    {
#line 993 "pd_util.m"
      /* tailcall optimized into a loop */
#line 993 "pd_util.m"
      {
#line 993 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 993 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_Size_5 = transform_hlds__pd_util__STATE_VARIABLE_Size_0_4;
#line 993 "pd_util.m"
        else
#line 994 "pd_util.m"
          {
#line 994 "pd_util.m"
            MR_Word transform_hlds__pd_util__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 994 "pd_util.m"
            MR_Word transform_hlds__pd_util__Insts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 994 "pd_util.m"
            MR_Integer transform_hlds__pd_util__InstSize_16;
#line 994 "pd_util.m"
            MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_19_19;

#line 995 "pd_util.m"
            {
#line 995 "pd_util.m"
              transform_hlds__pd_util__inst_size_2_4_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__Inst_12, transform_hlds__pd_util__Expansions_3, &transform_hlds__pd_util__InstSize_16);
            }
#line 996 "pd_util.m"
            transform_hlds__pd_util__STATE_VARIABLE_Size_19_19 = (transform_hlds__pd_util__STATE_VARIABLE_Size_0_4 + transform_hlds__pd_util__InstSize_16);
#line 997 "pd_util.m"
            /* direct tailcall eliminated */
#line 997 "pd_util.m"
            {
#line 997 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__2__tmp_copy_2 = transform_hlds__pd_util__Insts_13;
#line 997 "pd_util.m"
              MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_0__tmp_copy_4 = transform_hlds__pd_util__STATE_VARIABLE_Size_19_19;

#line 997 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_Size_0_4 = transform_hlds__pd_util__STATE_VARIABLE_Size_0__tmp_copy_4;
#line 997 "pd_util.m"
              transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__HeadVar__2__tmp_copy_2;
#line 997 "pd_util.m"
            }
#line 997 "pd_util.m"
            continue;
#line 994 "pd_util.m"
          }
#line 993 "pd_util.m"
      }
#line 993 "pd_util.m"
      break;
#line 993 "pd_util.m"
    }
#line 990 "pd_util.m"
}

#line 976 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__bound_inst_size_5_p_0(
#line 976 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 976 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 976 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_3,
#line 976 "pd_util.m"
  MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_0_4,
#line 976 "pd_util.m"
  MR_Integer * transform_hlds__pd_util__STATE_VARIABLE_Size_5)
#line 976 "pd_util.m"
{
#line 979 "pd_util.m"
  while (MR_TRUE)
#line 979 "pd_util.m"
    {
#line 979 "pd_util.m"
      /* tailcall optimized into a loop */
#line 979 "pd_util.m"
      {
#line 979 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 979 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 979 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_Size_5 = transform_hlds__pd_util__STATE_VARIABLE_Size_0_4;
#line 979 "pd_util.m"
        else
#line 980 "pd_util.m"
          {
#line 980 "pd_util.m"
            MR_Word transform_hlds__pd_util__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 980 "pd_util.m"
            MR_Word transform_hlds__pd_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 980 "pd_util.m"
            MR_Word transform_hlds__pd_util__ArgInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BoundInst_12, (MR_Integer) 1)));
#line 980 "pd_util.m"
            MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_20_20;
#line 980 "pd_util.m"
            MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_21_21;
#line 981 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BoundInst_12, (MR_Integer) 0)));

#line 982 "pd_util.m"
            {
#line 982 "pd_util.m"
              transform_hlds__pd_util__inst_list_size_5_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__ArgInsts_17, transform_hlds__pd_util__Expansions_3, transform_hlds__pd_util__STATE_VARIABLE_Size_0_4, &transform_hlds__pd_util__STATE_VARIABLE_Size_20_20);
            }
#line 983 "pd_util.m"
            transform_hlds__pd_util__STATE_VARIABLE_Size_21_21 = (transform_hlds__pd_util__STATE_VARIABLE_Size_20_20 + (MR_Integer) 1);
#line 984 "pd_util.m"
            /* direct tailcall eliminated */
#line 984 "pd_util.m"
            {
#line 984 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__2__tmp_copy_2 = transform_hlds__pd_util__BoundInsts_13;
#line 984 "pd_util.m"
              MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_0__tmp_copy_4 = transform_hlds__pd_util__STATE_VARIABLE_Size_21_21;

#line 984 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_Size_0_4 = transform_hlds__pd_util__STATE_VARIABLE_Size_0__tmp_copy_4;
#line 984 "pd_util.m"
              transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__HeadVar__2__tmp_copy_2;
#line 984 "pd_util.m"
            }
#line 984 "pd_util.m"
            continue;
#line 980 "pd_util.m"
          }
#line 979 "pd_util.m"
      }
#line 979 "pd_util.m"
      break;
#line 979 "pd_util.m"
    }
#line 976 "pd_util.m"
}

#line 945 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__inst_size_2_4_p_0(
#line 945 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_5,
#line 945 "pd_util.m"
  MR_Word transform_hlds__pd_util__Inst_6,
#line 945 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23,
#line 945 "pd_util.m"
  MR_Integer * transform_hlds__pd_util__Size_8)
#line 945 "pd_util.m"
{
#line 957 "pd_util.m"
  while (MR_TRUE)
#line 957 "pd_util.m"
    {
#line 957 "pd_util.m"
      /* tailcall optimized into a loop */
#line 957 "pd_util.m"
      {
#line 957 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 957 "pd_util.m"
        if (((((MR_tag((MR_Word) transform_hlds__pd_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 972 "pd_util.m"
          {
#line 972 "pd_util.m"
            MR_Word transform_hlds__pd_util__BoundInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 3)));
#line 972 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 1)));
#line 972 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 2)));

#line 973 "pd_util.m"
            {
#line 973 "pd_util.m"
              transform_hlds__pd_util__bound_inst_size_5_p_0(transform_hlds__pd_util__ModuleInfo_5, transform_hlds__pd_util__BoundInsts_22, transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23, (MR_Integer) 1, transform_hlds__pd_util__Size_8);
#line 973 "pd_util.m"
              return;
            }
#line 972 "pd_util.m"
          }
#line 957 "pd_util.m"
        else
#line 957 "pd_util.m"
          if (((((MR_tag((MR_Word) transform_hlds__pd_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 960 "pd_util.m"
            {
#line 960 "pd_util.m"
              MR_Word transform_hlds__pd_util__SubInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 2)));
#line 960 "pd_util.m"
              MR_Word transform_hlds__pd_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 1)));

#line 961 "pd_util.m"
              /* direct tailcall eliminated */
#line 961 "pd_util.m"
              {
#line 961 "pd_util.m"
                MR_Word transform_hlds__pd_util__Inst__tmp_copy_6 = transform_hlds__pd_util__SubInst_18;

#line 961 "pd_util.m"
                transform_hlds__pd_util__Inst_6 = transform_hlds__pd_util__Inst__tmp_copy_6;
#line 961 "pd_util.m"
              }
#line 961 "pd_util.m"
              continue;
#line 960 "pd_util.m"
            }
#line 957 "pd_util.m"
          else
#line 957 "pd_util.m"
            if (((((MR_tag((MR_Word) transform_hlds__pd_util__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 963 "pd_util.m"
              {
#line 963 "pd_util.m"
                MR_Word transform_hlds__pd_util__InstName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 1)));

#line 964 "pd_util.m"
                {
#line 964 "pd_util.m"
                  transform_hlds__pd_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (transform_hlds__pd_util__InstName_19)), transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23);
                }
#line 966 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 965 "pd_util.m"
                  *transform_hlds__pd_util__Size_8 = (MR_Integer) 1;
#line 966 "pd_util.m"
                else
#line 967 "pd_util.m"
                  {
#line 967 "pd_util.m"
                    MR_Word transform_hlds__pd_util__SubInst_30;
#line 967 "pd_util.m"
                    MR_Word transform_hlds__pd_util__STATE_VARIABLE_Expansions_25_31;

#line 967 "pd_util.m"
                    {
#line 967 "pd_util.m"
                      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (transform_hlds__pd_util__InstName_19)), transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23, &transform_hlds__pd_util__STATE_VARIABLE_Expansions_25_31);
                    }
#line 968 "pd_util.m"
                    {
#line 968 "pd_util.m"
                      check_hlds__mode_util__inst_lookup_3_p_0(transform_hlds__pd_util__ModuleInfo_5, transform_hlds__pd_util__InstName_19, &transform_hlds__pd_util__SubInst_30);
                    }
#line 969 "pd_util.m"
                    /* direct tailcall eliminated */
#line 969 "pd_util.m"
                    {
#line 969 "pd_util.m"
                      MR_Word transform_hlds__pd_util__Inst__tmp_copy_6 = transform_hlds__pd_util__SubInst_30;
#line 969 "pd_util.m"
                      MR_Word transform_hlds__pd_util__STATE_VARIABLE_Expansions_0__tmp_copy_23 = transform_hlds__pd_util__STATE_VARIABLE_Expansions_25_31;

#line 969 "pd_util.m"
                      transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23 = transform_hlds__pd_util__STATE_VARIABLE_Expansions_0__tmp_copy_23;
#line 969 "pd_util.m"
                      transform_hlds__pd_util__Inst_6 = transform_hlds__pd_util__Inst__tmp_copy_6;
#line 969 "pd_util.m"
                    }
#line 969 "pd_util.m"
                    continue;
#line 967 "pd_util.m"
                  }
#line 963 "pd_util.m"
              }
#line 957 "pd_util.m"
            else
#line 958 "pd_util.m"
              *transform_hlds__pd_util__Size_8 = (MR_Integer) 0;
#line 957 "pd_util.m"
      }
#line 957 "pd_util.m"
      break;
#line 957 "pd_util.m"
    }
#line 945 "pd_util.m"
}

#line 897 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(
#line 897 "pd_util.m"
  MR_Word transform_hlds__pd_util__Xs_8,
#line 897 "pd_util.m"
  MR_Word transform_hlds__pd_util__Ys_9,
#line 897 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_10,
#line 897 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_11,
#line 897 "pd_util.m"
  MR_Word transform_hlds__pd_util__Uniq_12,
#line 897 "pd_util.m"
  MR_Word transform_hlds__pd_util__BoundInsts_13,
#line 897 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Inst_14)
#line 897 "pd_util.m"
{
#line 907 "pd_util.m"
  {
#line 907 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Xs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 903 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 904 "pd_util.m"
      transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Ys_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 907 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 906 "pd_util.m"
      {
#line 906 "pd_util.m"
        {
#line 906 "pd_util.m"
          MR_Word base;
#line 906 "pd_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 906 "pd_util.m"
          *transform_hlds__pd_util__Inst_14 = base;
#line 906 "pd_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 906 "pd_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__pd_util__Uniq_12));
#line 906 "pd_util.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 906 "pd_util.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 906 "pd_util.m"
        }
#line 906 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 906 "pd_util.m"
      }
#line 907 "pd_util.m"
    else
#line 922 "pd_util.m"
      {
#line 922 "pd_util.m"
        MR_Word transform_hlds__pd_util__Xs1_16;
#line 922 "pd_util.m"
        MR_Word transform_hlds__pd_util__Ys1_18;
#line 922 "pd_util.m"
        MR_Word transform_hlds__pd_util__ConsId_19;
#line 922 "pd_util.m"
        MR_Word transform_hlds__pd_util__ArgsX_20;
#line 922 "pd_util.m"
        MR_Word transform_hlds__pd_util__ArgsY_21;
#line 908 "pd_util.m"
        MR_Word transform_hlds__pd_util__X_15;
#line 908 "pd_util.m"
        MR_Word transform_hlds__pd_util__Y_17;
#line 908 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_41_41;

#line 908 "pd_util.m"
        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__Xs_8)) == (MR_mktag((MR_Integer) 1)));
#line 908 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 908 "pd_util.m"
          {
#line 908 "pd_util.m"
            transform_hlds__pd_util__X_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Xs_8, (MR_Integer) 0)));
#line 908 "pd_util.m"
            transform_hlds__pd_util__Xs1_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Xs_8, (MR_Integer) 1)));
#line 909 "pd_util.m"
            transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__Ys_9)) == (MR_mktag((MR_Integer) 1)));
#line 909 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 909 "pd_util.m"
              {
#line 909 "pd_util.m"
                transform_hlds__pd_util__Y_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Ys_9, (MR_Integer) 0)));
#line 909 "pd_util.m"
                transform_hlds__pd_util__Ys1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Ys_9, (MR_Integer) 1)));
#line 910 "pd_util.m"
                transform_hlds__pd_util__ConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__X_15, (MR_Integer) 0)));
#line 910 "pd_util.m"
                transform_hlds__pd_util__ArgsX_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__X_15, (MR_Integer) 1)));
#line 911 "pd_util.m"
                transform_hlds__pd_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Y_17, (MR_Integer) 0)));
#line 911 "pd_util.m"
                transform_hlds__pd_util__ArgsY_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Y_17, (MR_Integer) 1)));
#line 911 "pd_util.m"
                {
#line 911 "pd_util.m"
                  transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__pd_util__ConsId_19, transform_hlds__pd_util__V_41_41);
                }
#line 909 "pd_util.m"
              }
#line 908 "pd_util.m"
          }
#line 922 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 913 "pd_util.m"
          {
#line 913 "pd_util.m"
            MR_Word transform_hlds__pd_util__Args_22;
#line 913 "pd_util.m"
            MR_Word transform_hlds__pd_util__Z_23;
#line 913 "pd_util.m"
            MR_Word transform_hlds__pd_util__Inst1_24;
#line 919 "pd_util.m"
            MR_Word transform_hlds__pd_util__Zs_26;
#line 917 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_42_42;
#line 917 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_25_25;

#line 913 "pd_util.m"
            {
#line 913 "pd_util.m"
              transform_hlds__pd_util__succeeded = transform_hlds__pd_util__inst_list_MSG_5_p_0(transform_hlds__pd_util__ArgsX_20, transform_hlds__pd_util__ArgsY_21, transform_hlds__pd_util__Expansions_10, transform_hlds__pd_util__ModuleInfo_11, &transform_hlds__pd_util__Args_22);
            }
#line 913 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 913 "pd_util.m"
              {
#line 914 "pd_util.m"
                {
#line 914 "pd_util.m"
                  transform_hlds__pd_util__Z_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 914 "pd_util.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Z_23, 0) = ((MR_Box) (transform_hlds__pd_util__ConsId_19));
#line 914 "pd_util.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Z_23, 1) = ((MR_Box) (transform_hlds__pd_util__Args_22));
#line 914 "pd_util.m"
                }
#line 915 "pd_util.m"
                {
#line 915 "pd_util.m"
                  transform_hlds__pd_util__succeeded = transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(transform_hlds__pd_util__Xs1_16, transform_hlds__pd_util__Ys1_18, transform_hlds__pd_util__Expansions_10, transform_hlds__pd_util__ModuleInfo_11, transform_hlds__pd_util__Uniq_12, transform_hlds__pd_util__BoundInsts_13, &transform_hlds__pd_util__Inst1_24);
                }
#line 913 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 913 "pd_util.m"
                  {
#line 917 "pd_util.m"
                    transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__Inst1_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst1_24, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 917 "pd_util.m"
                    if (transform_hlds__pd_util__succeeded)
#line 917 "pd_util.m"
                      {
#line 917 "pd_util.m"
                        transform_hlds__pd_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst1_24, (MR_Integer) 1)));
#line 917 "pd_util.m"
                        transform_hlds__pd_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst1_24, (MR_Integer) 2)));
#line 917 "pd_util.m"
                        transform_hlds__pd_util__Zs_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst1_24, (MR_Integer) 3)));
#line 917 "pd_util.m"
                        transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Uniq_12 == transform_hlds__pd_util__V_42_42);
#line 917 "pd_util.m"
                      }
#line 919 "pd_util.m"
                    if (transform_hlds__pd_util__succeeded)
#line 918 "pd_util.m"
                      {
#line 918 "pd_util.m"
                        MR_Word transform_hlds__pd_util__V_31_31;

#line 918 "pd_util.m"
                        {
#line 918 "pd_util.m"
                          transform_hlds__pd_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "pd_util.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_31_31, 0) = ((MR_Box) (transform_hlds__pd_util__Z_23));
#line 918 "pd_util.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_31_31, 1) = ((MR_Box) (transform_hlds__pd_util__Zs_26));
#line 918 "pd_util.m"
                        }
#line 918 "pd_util.m"
                        {
#line 918 "pd_util.m"
                          MR_Word base;
#line 918 "pd_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 918 "pd_util.m"
                          *transform_hlds__pd_util__Inst_14 = base;
#line 918 "pd_util.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 918 "pd_util.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__pd_util__Uniq_12));
#line 918 "pd_util.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 918 "pd_util.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__pd_util__V_31_31));
#line 918 "pd_util.m"
                        }
#line 918 "pd_util.m"
                      }
#line 919 "pd_util.m"
                    else
#line 920 "pd_util.m"
                      *transform_hlds__pd_util__Inst_14 = transform_hlds__pd_util__Inst1_24;
#line 919 "pd_util.m"
                    transform_hlds__pd_util__succeeded = MR_TRUE;
#line 913 "pd_util.m"
                  }
#line 913 "pd_util.m"
              }
#line 913 "pd_util.m"
          }
#line 922 "pd_util.m"
        else
#line 933 "pd_util.m"
          {
#line 933 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_39_39;
#line 934 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_36_36;
#line 934 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_37_37;
#line 934 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_38_38;

#line 929 "pd_util.m"
            if ((transform_hlds__pd_util__Uniq_12 == (MR_Integer) 0))
#line 925 "pd_util.m"
              {
#line 925 "pd_util.m"
                MR_Word transform_hlds__pd_util__NewInst_27;

#line 926 "pd_util.m"
                {
#line 926 "pd_util.m"
                  transform_hlds__pd_util__NewInst_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 926 "pd_util.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 926 "pd_util.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_27, 1) = ((MR_Box) ((MR_Integer) 0));
#line 926 "pd_util.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 926 "pd_util.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_27, 3) = ((MR_Box) (transform_hlds__pd_util__BoundInsts_13));
#line 926 "pd_util.m"
                }
#line 927 "pd_util.m"
                {
#line 927 "pd_util.m"
                  transform_hlds__pd_util__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__pd_util__ModuleInfo_11, transform_hlds__pd_util__NewInst_27);
                }
#line 925 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 928 "pd_util.m"
                  {
#line 928 "pd_util.m"
                    transform_hlds__pd_util__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(transform_hlds__pd_util__ModuleInfo_11, transform_hlds__pd_util__NewInst_27);
                  }
#line 925 "pd_util.m"
              }
#line 929 "pd_util.m"
            else
#line 929 "pd_util.m"
              if ((transform_hlds__pd_util__Uniq_12 == (MR_Integer) 1))
#line 930 "pd_util.m"
                {
#line 930 "pd_util.m"
                  MR_Word transform_hlds__pd_util__NewInst_40;

#line 931 "pd_util.m"
                  {
#line 931 "pd_util.m"
                    transform_hlds__pd_util__NewInst_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 931 "pd_util.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 931 "pd_util.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_40, 1) = ((MR_Box) ((MR_Integer) 1));
#line 931 "pd_util.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 931 "pd_util.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_40, 3) = ((MR_Box) (transform_hlds__pd_util__BoundInsts_13));
#line 931 "pd_util.m"
                  }
#line 932 "pd_util.m"
                  {
#line 932 "pd_util.m"
                    transform_hlds__pd_util__succeeded = check_hlds__inst_match__inst_is_unique_2_p_0(transform_hlds__pd_util__ModuleInfo_11, transform_hlds__pd_util__NewInst_40);
                  }
#line 930 "pd_util.m"
                }
#line 929 "pd_util.m"
              else
#line 929 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_FALSE;
#line 933 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 933 "pd_util.m"
              {
#line 935 "pd_util.m"
                transform_hlds__pd_util__V_37_37 = (MR_Integer) 0;
#line 935 "pd_util.m"
                transform_hlds__pd_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 935 "pd_util.m"
                {
#line 935 "pd_util.m"
                  transform_hlds__pd_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 935 "pd_util.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 935 "pd_util.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_36_36, 1) = ((MR_Box) (transform_hlds__pd_util__V_37_37));
#line 935 "pd_util.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_36_36, 2) = ((MR_Box) (transform_hlds__pd_util__V_38_38));
#line 935 "pd_util.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_36_36, 3) = ((MR_Box) (transform_hlds__pd_util__BoundInsts_13));
#line 935 "pd_util.m"
                }
#line 934 "pd_util.m"
                {
#line 934 "pd_util.m"
                  transform_hlds__pd_util__succeeded = check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_p_0(transform_hlds__pd_util__ModuleInfo_11, transform_hlds__pd_util__V_36_36);
                }
#line 934 "pd_util.m"
                transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 933 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 933 "pd_util.m"
                  {
#line 936 "pd_util.m"
                    transform_hlds__pd_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 936 "pd_util.m"
                    {
#line 936 "pd_util.m"
                      MR_Word base;
#line 936 "pd_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 936 "pd_util.m"
                      *transform_hlds__pd_util__Inst_14 = base;
#line 936 "pd_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 936 "pd_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__pd_util__Uniq_12));
#line 936 "pd_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__pd_util__V_39_39));
#line 936 "pd_util.m"
                    }
#line 936 "pd_util.m"
                    transform_hlds__pd_util__succeeded = MR_TRUE;
#line 933 "pd_util.m"
                  }
#line 933 "pd_util.m"
              }
#line 933 "pd_util.m"
          }
#line 922 "pd_util.m"
      }
#line 907 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 907 "pd_util.m"
  }
#line 897 "pd_util.m"
}

#line 878 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__inst_list_MSG_5_p_0(
#line 878 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 878 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 878 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_3,
#line 878 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
#line 878 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__5_5)
#line 878 "pd_util.m"
{
#line 881 "pd_util.m"
  {
#line 881 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;

#line 881 "pd_util.m"
    if ((transform_hlds__pd_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 881 "pd_util.m"
      {
#line 881 "pd_util.m"
        transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 881 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 881 "pd_util.m"
          {
#line 881 "pd_util.m"
            *transform_hlds__pd_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 881 "pd_util.m"
            transform_hlds__pd_util__succeeded = MR_TRUE;
#line 881 "pd_util.m"
          }
#line 881 "pd_util.m"
      }
#line 881 "pd_util.m"
    else
#line 883 "pd_util.m"
      {
#line 883 "pd_util.m"
        MR_Word transform_hlds__pd_util__ArgA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));
#line 883 "pd_util.m"
        MR_Word transform_hlds__pd_util__ArgsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
#line 883 "pd_util.m"
        MR_Word transform_hlds__pd_util__ArgB_10;
#line 883 "pd_util.m"
        MR_Word transform_hlds__pd_util__ArgsB_11;
#line 883 "pd_util.m"
        MR_Word transform_hlds__pd_util__Arg_14;
#line 883 "pd_util.m"
        MR_Word transform_hlds__pd_util__Args_15;

#line 882 "pd_util.m"
        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 882 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 882 "pd_util.m"
          {
#line 882 "pd_util.m"
            transform_hlds__pd_util__ArgB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 882 "pd_util.m"
            transform_hlds__pd_util__ArgsB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 817 "pd_util.m"
            {
#line 817 "pd_util.m"
              transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__pd_util__ArgA_8, transform_hlds__pd_util__ArgB_10);
            }
#line 819 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 818 "pd_util.m"
              {
#line 818 "pd_util.m"
                transform_hlds__pd_util__Arg_14 = transform_hlds__pd_util__ArgA_8;
#line 818 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_TRUE;
#line 818 "pd_util.m"
              }
#line 819 "pd_util.m"
            else
#line 822 "pd_util.m"
              {
#line 822 "pd_util.m"
                MR_Word transform_hlds__pd_util__TypeInfo_19_29;
#line 822 "pd_util.m"
                MR_Word transform_hlds__pd_util__InstA2_22;
#line 822 "pd_util.m"
                MR_Word transform_hlds__pd_util__InstB2_23;
#line 822 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_25_25;
#line 822 "pd_util.m"
                MR_Word transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_27;
#line 822 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_24_24;

#line 822 "pd_util.m"
                {
#line 822 "pd_util.m"
                  transform_hlds__pd_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 822 "pd_util.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_24_24, 0) = ((MR_Box) (transform_hlds__pd_util__ArgA_8));
#line 822 "pd_util.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_24_24, 1) = ((MR_Box) (transform_hlds__pd_util__ArgB_10));
#line 822 "pd_util.m"
                }
#line 822 "pd_util.m"
                {
#line 822 "pd_util.m"
                  transform_hlds__pd_util__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_2[0], ((MR_Box) (transform_hlds__pd_util__V_24_24)), transform_hlds__pd_util__Expansions_3);
                }
#line 822 "pd_util.m"
                transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 822 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 822 "pd_util.m"
                  {
#line 823 "pd_util.m"
                    {
#line 823 "pd_util.m"
                      check_hlds__inst_match__inst_expand_3_p_0(transform_hlds__pd_util__HeadVar__4_4, transform_hlds__pd_util__ArgA_8, &transform_hlds__pd_util__InstA2_22);
                    }
#line 824 "pd_util.m"
                    {
#line 824 "pd_util.m"
                      check_hlds__inst_match__inst_expand_3_p_0(transform_hlds__pd_util__HeadVar__4_4, transform_hlds__pd_util__ArgB_10, &transform_hlds__pd_util__InstB2_23);
                    }
#line 4807 "transform_hlds.pd_util.c"
                    transform_hlds__pd_util__TypeInfo_19_29 = (MR_Word) &transform_hlds__pd_util_scalar_common_2[0];
#line 825 "pd_util.m"
                    {
#line 825 "pd_util.m"
                      transform_hlds__pd_util__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 825 "pd_util.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_25_25, 0) = ((MR_Box) (transform_hlds__pd_util__ArgA_8));
#line 825 "pd_util.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_25_25, 1) = ((MR_Box) (transform_hlds__pd_util__ArgB_10));
#line 825 "pd_util.m"
                    }
#line 825 "pd_util.m"
                    {
#line 825 "pd_util.m"
                      mercury__set__insert_3_p_0(transform_hlds__pd_util__TypeInfo_19_29, ((MR_Box) (transform_hlds__pd_util__V_25_25)), transform_hlds__pd_util__Expansions_3, &transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_27);
                    }
#line 826 "pd_util.m"
                    transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__InstB2_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 828 "pd_util.m"
                    if (transform_hlds__pd_util__succeeded)
#line 827 "pd_util.m"
                      {
#line 827 "pd_util.m"
                        transform_hlds__pd_util__Arg_14 = transform_hlds__pd_util__InstA2_22;
#line 827 "pd_util.m"
                        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 827 "pd_util.m"
                      }
#line 828 "pd_util.m"
                    else
#line 829 "pd_util.m"
                      {
#line 829 "pd_util.m"
                        transform_hlds__pd_util__succeeded = transform_hlds__pd_util__inst_MSG_2_5_p_0(transform_hlds__pd_util__InstA2_22, transform_hlds__pd_util__InstB2_23, transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_27, transform_hlds__pd_util__HeadVar__4_4, &transform_hlds__pd_util__Arg_14);
                      }
#line 822 "pd_util.m"
                  }
#line 822 "pd_util.m"
              }
#line 883 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 883 "pd_util.m"
              {
#line 885 "pd_util.m"
                {
#line 885 "pd_util.m"
                  transform_hlds__pd_util__succeeded = transform_hlds__pd_util__inst_list_MSG_5_p_0(transform_hlds__pd_util__ArgsA_9, transform_hlds__pd_util__ArgsB_11, transform_hlds__pd_util__Expansions_3, transform_hlds__pd_util__HeadVar__4_4, &transform_hlds__pd_util__Args_15);
                }
#line 883 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 883 "pd_util.m"
                  {
#line 883 "pd_util.m"
                    {
#line 883 "pd_util.m"
                      MR_Word base;
#line 883 "pd_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "pd_util.m"
                      *transform_hlds__pd_util__HeadVar__5_5 = base;
#line 883 "pd_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_util__Arg_14));
#line 883 "pd_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_util__Args_15));
#line 883 "pd_util.m"
                    }
#line 883 "pd_util.m"
                    transform_hlds__pd_util__succeeded = MR_TRUE;
#line 883 "pd_util.m"
                  }
#line 883 "pd_util.m"
              }
#line 882 "pd_util.m"
          }
#line 883 "pd_util.m"
      }
#line 881 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 881 "pd_util.m"
  }
#line 878 "pd_util.m"
}

#line 833 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__inst_MSG_2_5_p_0(
#line 833 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstA_6,
#line 833 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstB_7,
#line 833 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_8,
#line 833 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_9,
#line 833 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Inst_10)
#line 833 "pd_util.m"
{
#line 838 "pd_util.m"
  {
#line 838 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;

#line 838 "pd_util.m"
    if ((transform_hlds__pd_util__InstA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 841 "pd_util.m"
      {
#line 842 "pd_util.m"
        transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 841 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 841 "pd_util.m"
          {
#line 843 "pd_util.m"
            *transform_hlds__pd_util__Inst_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 843 "pd_util.m"
            transform_hlds__pd_util__succeeded = MR_TRUE;
#line 841 "pd_util.m"
          }
#line 841 "pd_util.m"
      }
#line 838 "pd_util.m"
    else
#line 838 "pd_util.m"
      if ((transform_hlds__pd_util__InstA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 838 "pd_util.m"
        {
#line 838 "pd_util.m"
          *transform_hlds__pd_util__Inst_10 = transform_hlds__pd_util__InstB_7;
#line 838 "pd_util.m"
          transform_hlds__pd_util__succeeded = MR_TRUE;
#line 838 "pd_util.m"
        }
#line 838 "pd_util.m"
      else
#line 838 "pd_util.m"
        if (((MR_tag((MR_Word) transform_hlds__pd_util__InstA_6)) == (MR_mktag((MR_Integer) 2))))
#line 868 "pd_util.m"
          {
#line 869 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_33_33;
#line 869 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_34_34;

#line 869 "pd_util.m"
            transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__InstB_7)) == (MR_mktag((MR_Integer) 2)));
#line 869 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 869 "pd_util.m"
              {
#line 869 "pd_util.m"
                transform_hlds__pd_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__InstB_7, (MR_Integer) 0)));
#line 869 "pd_util.m"
                transform_hlds__pd_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__InstB_7, (MR_Integer) 1)));
#line 870 "pd_util.m"
                *transform_hlds__pd_util__Inst_10 = transform_hlds__pd_util__InstB_7;
#line 870 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_TRUE;
#line 869 "pd_util.m"
              }
#line 868 "pd_util.m"
          }
#line 838 "pd_util.m"
        else
#line 838 "pd_util.m"
          if (((((MR_tag((MR_Word) transform_hlds__pd_util__InstA_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 872 "pd_util.m"
            {
#line 872 "pd_util.m"
              MR_Word transform_hlds__pd_util__Name_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA_6, (MR_Integer) 1)));
#line 872 "pd_util.m"
              MR_Word transform_hlds__pd_util__ArgsA_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA_6, (MR_Integer) 2)));
#line 872 "pd_util.m"
              MR_Word transform_hlds__pd_util__ArgsB_37;
#line 872 "pd_util.m"
              MR_Word transform_hlds__pd_util__Args_38;
#line 872 "pd_util.m"
              MR_Word transform_hlds__pd_util__V_40_40;

#line 873 "pd_util.m"
              transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 873 "pd_util.m"
              if (transform_hlds__pd_util__succeeded)
#line 873 "pd_util.m"
                {
#line 873 "pd_util.m"
                  transform_hlds__pd_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 1)));
#line 873 "pd_util.m"
                  transform_hlds__pd_util__ArgsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 2)));
#line 873 "pd_util.m"
                  {
#line 873 "pd_util.m"
                    transform_hlds__pd_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__pd_util__Name_35, transform_hlds__pd_util__V_40_40);
                  }
#line 872 "pd_util.m"
                  if (transform_hlds__pd_util__succeeded)
#line 872 "pd_util.m"
                    {
#line 874 "pd_util.m"
                      {
#line 874 "pd_util.m"
                        transform_hlds__pd_util__succeeded = transform_hlds__pd_util__inst_list_MSG_5_p_0(transform_hlds__pd_util__ArgsA_36, transform_hlds__pd_util__ArgsB_37, transform_hlds__pd_util__Expansions_8, transform_hlds__pd_util__ModuleInfo_9, &transform_hlds__pd_util__Args_38);
                      }
#line 872 "pd_util.m"
                      if (transform_hlds__pd_util__succeeded)
#line 872 "pd_util.m"
                        {
#line 875 "pd_util.m"
                          {
#line 875 "pd_util.m"
                            MR_Word base;
#line 875 "pd_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 875 "pd_util.m"
                            *transform_hlds__pd_util__Inst_10 = base;
#line 875 "pd_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 875 "pd_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__pd_util__Name_35));
#line 875 "pd_util.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__pd_util__Args_38));
#line 875 "pd_util.m"
                          }
#line 875 "pd_util.m"
                          transform_hlds__pd_util__succeeded = MR_TRUE;
#line 872 "pd_util.m"
                        }
#line 872 "pd_util.m"
                    }
#line 873 "pd_util.m"
                }
#line 872 "pd_util.m"
            }
#line 838 "pd_util.m"
          else
#line 838 "pd_util.m"
            if (((((MR_tag((MR_Word) transform_hlds__pd_util__InstA_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 838 "pd_util.m"
              {
#line 838 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA_6, (MR_Integer) 3)));
#line 857 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA_6, (MR_Integer) 2)));
#line 857 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA_6, (MR_Integer) 1)));

#line 838 "pd_util.m"
                if (((((MR_tag((MR_Word) transform_hlds__pd_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 862 "pd_util.m"
                  {
#line 862 "pd_util.m"
                    MR_Word transform_hlds__pd_util__UniqB_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 1)));
#line 862 "pd_util.m"
                    MR_Word transform_hlds__pd_util__BoundInstsB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 3)));
#line 863 "pd_util.m"
                    MR_Word transform_hlds__pd_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 2)));

#line 865 "pd_util.m"
                    {
#line 865 "pd_util.m"
                      return transform_hlds__pd_util__succeeded = transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(transform_hlds__pd_util__V_41_41, transform_hlds__pd_util__BoundInstsB_30, transform_hlds__pd_util__Expansions_8, transform_hlds__pd_util__ModuleInfo_9, transform_hlds__pd_util__UniqB_28, transform_hlds__pd_util__BoundInstsB_30, transform_hlds__pd_util__Inst_10);
                    }
#line 862 "pd_util.m"
                  }
#line 838 "pd_util.m"
                else
#line 838 "pd_util.m"
                  if (((((MR_tag((MR_Word) transform_hlds__pd_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 860 "pd_util.m"
                    {
#line 860 "pd_util.m"
                      *transform_hlds__pd_util__Inst_10 = transform_hlds__pd_util__InstB_7;
#line 860 "pd_util.m"
                      transform_hlds__pd_util__succeeded = MR_TRUE;
#line 860 "pd_util.m"
                    }
#line 838 "pd_util.m"
                  else
#line 838 "pd_util.m"
                    transform_hlds__pd_util__succeeded = MR_FALSE;
#line 838 "pd_util.m"
              }
#line 838 "pd_util.m"
            else
#line 838 "pd_util.m"
              if (((((MR_tag((MR_Word) transform_hlds__pd_util__InstA_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 838 "pd_util.m"
                {
#line 5096 "transform_hlds.pd_util.c"
                  MR_Word transform_hlds__pd_util__V_47_47;
#line 5098 "transform_hlds.pd_util.c"
                  MR_Word transform_hlds__pd_util__V_48_48;

#line 5101 "transform_hlds.pd_util.c"
                  transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 5103 "transform_hlds.pd_util.c"
                  if (transform_hlds__pd_util__succeeded)
#line 5105 "transform_hlds.pd_util.c"
                    {
#line 5107 "transform_hlds.pd_util.c"
                      transform_hlds__pd_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 1)));
#line 5109 "transform_hlds.pd_util.c"
                      transform_hlds__pd_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 2)));
#line 849 "pd_util.m"
                      *transform_hlds__pd_util__Inst_10 = transform_hlds__pd_util__InstB_7;
#line 849 "pd_util.m"
                      transform_hlds__pd_util__succeeded = MR_TRUE;
#line 5115 "transform_hlds.pd_util.c"
                    }
#line 838 "pd_util.m"
                }
#line 838 "pd_util.m"
              else
#line 838 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_FALSE;
#line 838 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 838 "pd_util.m"
  }
#line 833 "pd_util.m"
}

#line 764 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__combine_vars_4_p_0(
#line 764 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_1,
#line 764 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 764 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3,
#line 764 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_4)
#line 764 "pd_util.m"
{
#line 767 "pd_util.m"
  while (MR_TRUE)
#line 767 "pd_util.m"
    {
#line 767 "pd_util.m"
      /* tailcall optimized into a loop */
#line 767 "pd_util.m"
      {
#line 767 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 767 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 767 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_Vars_4 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3;
#line 767 "pd_util.m"
        else
#line 768 "pd_util.m"
          {
#line 768 "pd_util.m"
            MR_Word transform_hlds__pd_util__ExtraVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 768 "pd_util.m"
            MR_Word transform_hlds__pd_util__ExtraVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 768 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_17_17;
#line 772 "pd_util.m"
            MR_Word transform_hlds__pd_util__Branches0_13;
#line 769 "pd_util.m"
            MR_Box transform_hlds__pd_util__conv0_Branches0_13;

#line 769 "pd_util.m"
            {
#line 769 "pd_util.m"
              transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3, ((MR_Box) (transform_hlds__pd_util__ExtraVar_10)), &transform_hlds__pd_util__conv0_Branches0_13);
            }
#line 769 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 769 "pd_util.m"
              {
#line 769 "pd_util.m"
                transform_hlds__pd_util__Branches0_13 = ((MR_Word) transform_hlds__pd_util__conv0_Branches0_13);
#line 769 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_TRUE;
#line 769 "pd_util.m"
              }
#line 772 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 770 "pd_util.m"
              {
#line 770 "pd_util.m"
                MR_Word transform_hlds__pd_util__Branches_14;

#line 770 "pd_util.m"
                {
#line 770 "pd_util.m"
                  mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_1)), transform_hlds__pd_util__Branches0_13, &transform_hlds__pd_util__Branches_14);
                }
#line 771 "pd_util.m"
                {
#line 771 "pd_util.m"
                  mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_util__ExtraVar_10)), ((MR_Box) (transform_hlds__pd_util__Branches_14)), transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3, &transform_hlds__pd_util__STATE_VARIABLE_Vars_17_17);
                }
#line 770 "pd_util.m"
              }
#line 772 "pd_util.m"
            else
#line 773 "pd_util.m"
              {
#line 773 "pd_util.m"
                MR_Word transform_hlds__pd_util__Branches_20;

#line 773 "pd_util.m"
                {
#line 773 "pd_util.m"
                  transform_hlds__pd_util__Branches_20 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_1)));
                }
#line 774 "pd_util.m"
                {
#line 774 "pd_util.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_util__ExtraVar_10)), ((MR_Box) (transform_hlds__pd_util__Branches_20)), transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3, &transform_hlds__pd_util__STATE_VARIABLE_Vars_17_17);
                }
#line 773 "pd_util.m"
              }
#line 776 "pd_util.m"
            /* direct tailcall eliminated */
#line 776 "pd_util.m"
            {
#line 776 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__2__tmp_copy_2 = transform_hlds__pd_util__ExtraVars_11;
#line 776 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_3 = transform_hlds__pd_util__STATE_VARIABLE_Vars_17_17;

#line 776 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_3;
#line 776 "pd_util.m"
              transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__HeadVar__2__tmp_copy_2;
#line 776 "pd_util.m"
            }
#line 776 "pd_util.m"
            continue;
#line 768 "pd_util.m"
          }
#line 767 "pd_util.m"
      }
#line 767 "pd_util.m"
      break;
#line 767 "pd_util.m"
    }
#line 764 "pd_util.m"
}

#line 710 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__examine_case_list_10_p_0(
#line 710 "pd_util.m"
  MR_Word transform_hlds__pd_util__ProcArgInfo_1,
#line 710 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_2,
#line 710 "pd_util.m"
  MR_Word transform_hlds__pd_util__Var_3,
#line 710 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
#line 710 "pd_util.m"
  MR_Word transform_hlds__pd_util__VarTypes_5,
#line 710 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap0_6,
#line 710 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
#line 710 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8,
#line 710 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_9,
#line 710 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_10)
#line 710 "pd_util.m"
{
#line 715 "pd_util.m"
  while (MR_TRUE)
#line 715 "pd_util.m"
    {
#line 715 "pd_util.m"
      /* tailcall optimized into a loop */
#line 715 "pd_util.m"
      {
#line 715 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 715 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 715 "pd_util.m"
          {
#line 715 "pd_util.m"
            *transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_10 = transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_9;
#line 715 "pd_util.m"
            *transform_hlds__pd_util__STATE_VARIABLE_Vars_8 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7;
#line 715 "pd_util.m"
          }
#line 715 "pd_util.m"
        else
#line 717 "pd_util.m"
          {
#line 717 "pd_util.m"
            MR_Word transform_hlds__pd_util__Case_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 0)));
#line 717 "pd_util.m"
            MR_Word transform_hlds__pd_util__Cases_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 1)));
#line 717 "pd_util.m"
            MR_Word transform_hlds__pd_util__Type_31;
#line 717 "pd_util.m"
            MR_Word transform_hlds__pd_util__MainConsId_32;
#line 717 "pd_util.m"
            MR_Word transform_hlds__pd_util__OtherConsIds_33;
#line 717 "pd_util.m"
            MR_Word transform_hlds__pd_util__Goal_34;
#line 717 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMap1_35;
#line 717 "pd_util.m"
            MR_Word transform_hlds__pd_util__GoalList_36;
#line 717 "pd_util.m"
            MR_Integer transform_hlds__pd_util__NextBranch_37;
#line 717 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_42_42;
#line 717 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_43_43;

#line 718 "pd_util.m"
            {
#line 718 "pd_util.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__pd_util__VarTypes_5, transform_hlds__pd_util__Var_3, &transform_hlds__pd_util__Type_31);
            }
#line 719 "pd_util.m"
            transform_hlds__pd_util__MainConsId_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Case_25, (MR_Integer) 0)));
#line 719 "pd_util.m"
            transform_hlds__pd_util__OtherConsIds_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Case_25, (MR_Integer) 1)));
#line 719 "pd_util.m"
            transform_hlds__pd_util__Goal_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Case_25, (MR_Integer) 2)));
#line 720 "pd_util.m"
            {
#line 720 "pd_util.m"
              hlds__instmap__bind_var_to_functors_8_p_0(transform_hlds__pd_util__Var_3, transform_hlds__pd_util__Type_31, transform_hlds__pd_util__MainConsId_32, transform_hlds__pd_util__OtherConsIds_33, transform_hlds__pd_util__InstMap0_6, &transform_hlds__pd_util__InstMap1_35, transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 722 "pd_util.m"
            {
#line 722 "pd_util.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__Goal_34, &transform_hlds__pd_util__GoalList_36);
            }
#line 723 "pd_util.m"
            {
#line 723 "pd_util.m"
              transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_42_42, transform_hlds__pd_util__ProcArgInfo_1, transform_hlds__pd_util__BranchNo_2, transform_hlds__pd_util__GoalList_36, transform_hlds__pd_util__InstMap1_35, transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7, &transform_hlds__pd_util__STATE_VARIABLE_Vars_43_43);
            }
#line 725 "pd_util.m"
            transform_hlds__pd_util__NextBranch_37 = (transform_hlds__pd_util__BranchNo_2 + (MR_Integer) 1);
#line 726 "pd_util.m"
            /* direct tailcall eliminated */
#line 726 "pd_util.m"
            {
#line 726 "pd_util.m"
              MR_Integer transform_hlds__pd_util__BranchNo__tmp_copy_2 = transform_hlds__pd_util__NextBranch_37;
#line 726 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__4__tmp_copy_4 = transform_hlds__pd_util__Cases_26;
#line 726 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_7 = transform_hlds__pd_util__STATE_VARIABLE_Vars_43_43;
#line 726 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_9 = transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_42_42;

#line 726 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_9 = transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_9;
#line 726 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_7;
#line 726 "pd_util.m"
              transform_hlds__pd_util__HeadVar__4_4 = transform_hlds__pd_util__HeadVar__4__tmp_copy_4;
#line 726 "pd_util.m"
              transform_hlds__pd_util__BranchNo_2 = transform_hlds__pd_util__BranchNo__tmp_copy_2;
#line 726 "pd_util.m"
            }
#line 726 "pd_util.m"
            continue;
#line 717 "pd_util.m"
          }
#line 715 "pd_util.m"
      }
#line 715 "pd_util.m"
      break;
#line 715 "pd_util.m"
    }
#line 710 "pd_util.m"
}

#line 650 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_sub_branch_vars_goal_8_p_0(
#line 650 "pd_util.m"
  MR_Word transform_hlds__pd_util__ProcArgInfo_1,
#line 650 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 650 "pd_util.m"
  MR_Word transform_hlds__pd_util__VarTypes_3,
#line 650 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap0_4,
#line 650 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__5_5,
#line 650 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__6_6,
#line 650 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__7_7,
#line 650 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__8_8)
#line 650 "pd_util.m"
{
#line 655 "pd_util.m"
  while (MR_TRUE)
#line 655 "pd_util.m"
    {
#line 655 "pd_util.m"
      /* tailcall optimized into a loop */
#line 655 "pd_util.m"
      {
#line 655 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 655 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 655 "pd_util.m"
          {
#line 655 "pd_util.m"
            *transform_hlds__pd_util__HeadVar__6_6 = transform_hlds__pd_util__HeadVar__5_5;
#line 655 "pd_util.m"
            *transform_hlds__pd_util__HeadVar__8_8 = transform_hlds__pd_util__HeadVar__7_7;
#line 655 "pd_util.m"
          }
#line 655 "pd_util.m"
        else
#line 657 "pd_util.m"
          {
#line 657 "pd_util.m"
            MR_Word transform_hlds__pd_util__Goal_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 657 "pd_util.m"
            MR_Word transform_hlds__pd_util__GoalList_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 657 "pd_util.m"
            MR_Word transform_hlds__pd_util__GoalExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_17, (MR_Integer) 0)));
#line 657 "pd_util.m"
            MR_Word transform_hlds__pd_util__GoalInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_17, (MR_Integer) 1)));
#line 657 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMapDelta_69;
#line 657 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMap_70;
#line 657 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79;
#line 657 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85;

#line 670 "pd_util.m"
            if (((MR_tag((MR_Word) transform_hlds__pd_util__GoalExpr_24)) == (MR_mktag((MR_Integer) 0))))
#line 684 "pd_util.m"
              {
#line 684 "pd_util.m"
                transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
#line 684 "pd_util.m"
                transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 684 "pd_util.m"
              }
#line 670 "pd_util.m"
            else
#line 670 "pd_util.m"
              if (((MR_tag((MR_Word) transform_hlds__pd_util__GoalExpr_24)) == (MR_mktag((MR_Integer) 2))))
#line 680 "pd_util.m"
                {
#line 680 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
#line 680 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 680 "pd_util.m"
                }
#line 670 "pd_util.m"
              else
#line 670 "pd_util.m"
                if (((MR_tag((MR_Word) transform_hlds__pd_util__GoalExpr_24)) == (MR_mktag((MR_Integer) 1))))
#line 679 "pd_util.m"
                  {
#line 679 "pd_util.m"
                    transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
#line 679 "pd_util.m"
                    transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 679 "pd_util.m"
                  }
#line 670 "pd_util.m"
                else
#line 670 "pd_util.m"
                  if (((((MR_tag((MR_Word) transform_hlds__pd_util__GoalExpr_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 682 "pd_util.m"
                    {
#line 682 "pd_util.m"
                      transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
#line 682 "pd_util.m"
                      transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 682 "pd_util.m"
                    }
#line 670 "pd_util.m"
                  else
#line 670 "pd_util.m"
                    if (((((MR_tag((MR_Word) transform_hlds__pd_util__GoalExpr_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 683 "pd_util.m"
                      {
#line 683 "pd_util.m"
                        transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
#line 683 "pd_util.m"
                        transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 683 "pd_util.m"
                      }
#line 670 "pd_util.m"
                    else
#line 670 "pd_util.m"
                      if (((((MR_tag((MR_Word) transform_hlds__pd_util__GoalExpr_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 671 "pd_util.m"
                        {
#line 671 "pd_util.m"
                          MR_Word transform_hlds__pd_util__Goals_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 1)));

#line 672 "pd_util.m"
                          {
#line 672 "pd_util.m"
                            transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_p_0(transform_hlds__pd_util__HeadVar__7_7, transform_hlds__pd_util__ProcArgInfo_1, (MR_Integer) 1, transform_hlds__pd_util__Goals_36, transform_hlds__pd_util__InstMap0_4, transform_hlds__pd_util__HeadVar__5_5, &transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85);
                          }
#line 672 "pd_util.m"
                          transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 671 "pd_util.m"
                        }
#line 670 "pd_util.m"
                      else
#line 670 "pd_util.m"
                        if (((((MR_tag((MR_Word) transform_hlds__pd_util__GoalExpr_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 681 "pd_util.m"
                          {
#line 681 "pd_util.m"
                            transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
#line 681 "pd_util.m"
                            transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 681 "pd_util.m"
                          }
#line 670 "pd_util.m"
                        else
#line 670 "pd_util.m"
                          if (((((MR_tag((MR_Word) transform_hlds__pd_util__GoalExpr_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 660 "pd_util.m"
                            {
#line 660 "pd_util.m"
                              MR_Word transform_hlds__pd_util__Cond_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 2)));
#line 660 "pd_util.m"
                              MR_Word transform_hlds__pd_util__Then_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 3)));
#line 660 "pd_util.m"
                              MR_Word transform_hlds__pd_util__Else_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 4)));
#line 660 "pd_util.m"
                              MR_Word transform_hlds__pd_util__CondInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Cond_27, (MR_Integer) 1)));
#line 660 "pd_util.m"
                              MR_Word transform_hlds__pd_util__CondDelta_32;
#line 660 "pd_util.m"
                              MR_Word transform_hlds__pd_util__InstMap1_33;
#line 660 "pd_util.m"
                              MR_Word transform_hlds__pd_util__ThenList_34;
#line 660 "pd_util.m"
                              MR_Word transform_hlds__pd_util__ElseList_35;
#line 660 "pd_util.m"
                              MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_83_83;
#line 660 "pd_util.m"
                              MR_Word transform_hlds__pd_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 1)));
#line 661 "pd_util.m"
                              MR_Word transform_hlds__pd_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Cond_27, (MR_Integer) 0)));

#line 662 "pd_util.m"
                              {
#line 662 "pd_util.m"
                                transform_hlds__pd_util__CondDelta_32 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__CondInfo_31);
                              }
#line 663 "pd_util.m"
                              {
#line 663 "pd_util.m"
                                hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__pd_util__InstMap0_4, transform_hlds__pd_util__CondDelta_32, &transform_hlds__pd_util__InstMap1_33);
                              }
#line 664 "pd_util.m"
                              {
#line 664 "pd_util.m"
                                hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__Then_28, &transform_hlds__pd_util__ThenList_34);
                              }
#line 665 "pd_util.m"
                              {
#line 665 "pd_util.m"
                                transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(transform_hlds__pd_util__HeadVar__7_7, transform_hlds__pd_util__ProcArgInfo_1, (MR_Integer) 1, transform_hlds__pd_util__ThenList_34, transform_hlds__pd_util__InstMap1_33, transform_hlds__pd_util__HeadVar__5_5, &transform_hlds__pd_util__STATE_VARIABLE_Vars_83_83);
                              }
#line 667 "pd_util.m"
                              {
#line 667 "pd_util.m"
                                hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__Else_29, &transform_hlds__pd_util__ElseList_35);
                              }
#line 668 "pd_util.m"
                              {
#line 668 "pd_util.m"
                                transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(transform_hlds__pd_util__HeadVar__7_7, transform_hlds__pd_util__ProcArgInfo_1, (MR_Integer) 2, transform_hlds__pd_util__ElseList_35, transform_hlds__pd_util__InstMap0_4, transform_hlds__pd_util__STATE_VARIABLE_Vars_83_83, &transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85);
                              }
#line 668 "pd_util.m"
                              transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 660 "pd_util.m"
                            }
#line 670 "pd_util.m"
                          else
#line 670 "pd_util.m"
                            if (((((MR_tag((MR_Word) transform_hlds__pd_util__GoalExpr_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 685 "pd_util.m"
                              {
#line 685 "pd_util.m"
                                transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
#line 685 "pd_util.m"
                                transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 685 "pd_util.m"
                              }
#line 670 "pd_util.m"
                            else
#line 670 "pd_util.m"
                              if (((((MR_tag((MR_Word) transform_hlds__pd_util__GoalExpr_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 688 "pd_util.m"
                                {
#line 689 "pd_util.m"
                                  {
#line 689 "pd_util.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_util", (MR_String) "predicate \140transform_hlds.pd_util.get_sub_branch_vars_goal\'/8", (MR_String) "shorthand");
#line 689 "pd_util.m"
                                    return;
                                  }
#line 688 "pd_util.m"
                                }
#line 670 "pd_util.m"
                              else
#line 675 "pd_util.m"
                                {
#line 675 "pd_util.m"
                                  MR_Word transform_hlds__pd_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 1)));
#line 675 "pd_util.m"
                                  MR_Word transform_hlds__pd_util__Cases_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 3)));
#line 675 "pd_util.m"
                                  MR_Word transform_hlds__pd_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 2)));

#line 676 "pd_util.m"
                                  {
#line 676 "pd_util.m"
                                    transform_hlds__pd_util__examine_case_list_10_p_0(transform_hlds__pd_util__ProcArgInfo_1, (MR_Integer) 1, transform_hlds__pd_util__Var_37, transform_hlds__pd_util__Cases_39, transform_hlds__pd_util__VarTypes_3, transform_hlds__pd_util__InstMap0_4, transform_hlds__pd_util__HeadVar__5_5, &transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85, transform_hlds__pd_util__HeadVar__7_7, &transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79);
                                  }
#line 675 "pd_util.m"
                                }
#line 691 "pd_util.m"
            {
#line 691 "pd_util.m"
              transform_hlds__pd_util__InstMapDelta_69 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo_25);
            }
#line 692 "pd_util.m"
            {
#line 692 "pd_util.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__pd_util__InstMap0_4, transform_hlds__pd_util__InstMapDelta_69, &transform_hlds__pd_util__InstMap_70);
            }
#line 693 "pd_util.m"
            /* direct tailcall eliminated */
#line 693 "pd_util.m"
            {
#line 693 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__2__tmp_copy_2 = transform_hlds__pd_util__GoalList_18;
#line 693 "pd_util.m"
              MR_Word transform_hlds__pd_util__InstMap0__tmp_copy_4 = transform_hlds__pd_util__InstMap_70;
#line 693 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__5__tmp_copy_5 = transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85;
#line 693 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__7__tmp_copy_7 = transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79;

#line 693 "pd_util.m"
              transform_hlds__pd_util__HeadVar__7_7 = transform_hlds__pd_util__HeadVar__7__tmp_copy_7;
#line 693 "pd_util.m"
              transform_hlds__pd_util__HeadVar__5_5 = transform_hlds__pd_util__HeadVar__5__tmp_copy_5;
#line 693 "pd_util.m"
              transform_hlds__pd_util__InstMap0_4 = transform_hlds__pd_util__InstMap0__tmp_copy_4;
#line 693 "pd_util.m"
              transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__HeadVar__2__tmp_copy_2;
#line 693 "pd_util.m"
            }
#line 693 "pd_util.m"
            continue;
#line 657 "pd_util.m"
          }
#line 655 "pd_util.m"
      }
#line 655 "pd_util.m"
      break;
#line 655 "pd_util.m"
    }
#line 650 "pd_util.m"
}

#line 609 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_branch_vars_7_p_0_1(
#line 609 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 609 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 609 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
#line 609 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_3)
#line 609 "pd_util.m"
{
#line 609 "pd_util.m"
  {
#line 609 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
#line 609 "pd_util.m"
    MR_Word transform_hlds__pd_util__conv0_HeadVar__7_45;

#line 609 "pd_util.m"
    {
#line 609 "pd_util.m"
      transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__624__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__pd_util__wrapper_arg_1), ((MR_Word) transform_hlds__pd_util__wrapper_arg_2), &transform_hlds__pd_util__conv0_HeadVar__7_45);
    }
#line 609 "pd_util.m"
    *transform_hlds__pd_util__wrapper_arg_3 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__7_45));
#line 609 "pd_util.m"
  }
#line 609 "pd_util.m"
}

#line 602 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__get_branch_vars_7_p_0(
#line 602 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 602 "pd_util.m"
  MR_Word transform_hlds__pd_util__Goal_2,
#line 602 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
#line 602 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_4,
#line 602 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_5,
#line 602 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0_6,
#line 602 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_7)
#line 602 "pd_util.m"
{
#line 606 "pd_util.m"
  while (MR_TRUE)
#line 606 "pd_util.m"
    {
#line 606 "pd_util.m"
      /* tailcall optimized into a loop */
#line 606 "pd_util.m"
      {
#line 606 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 606 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 606 "pd_util.m"
          {
#line 606 "pd_util.m"
            *transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_7 = transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0_6;
#line 606 "pd_util.m"
            transform_hlds__pd_util__succeeded = MR_TRUE;
#line 606 "pd_util.m"
          }
#line 606 "pd_util.m"
        else
#line 608 "pd_util.m"
          {
#line 608 "pd_util.m"
            MR_Word transform_hlds__pd_util__TypeInfo_65_65;
#line 608 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMapDelta_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__3_3, (MR_Integer) 0)));
#line 608 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMapDeltas_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__3_3, (MR_Integer) 1)));
#line 608 "pd_util.m"
            MR_Word transform_hlds__pd_util__AddExtraInfoVars_22;
#line 608 "pd_util.m"
            MR_Word transform_hlds__pd_util__ChangedVars_32;
#line 608 "pd_util.m"
            MR_Word transform_hlds__pd_util__ChangedVarsList_33;
#line 608 "pd_util.m"
            MR_Integer transform_hlds__pd_util__NextBranch_40;
#line 608 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_50_50;
#line 608 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_52_52;
#line 630 "pd_util.m"
            MR_Box transform_hlds__pd_util__conv1_STATE_VARIABLE_ExtraVars_50_50;
#line 641 "pd_util.m"
            MR_Word transform_hlds__pd_util__SwitchVar_34;
#line 634 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_51_51;
#line 634 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_37_37;
#line 634 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_35_35;
#line 634 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_36_36;

#line 609 "pd_util.m"
            {
#line 609 "pd_util.m"
              transform_hlds__pd_util__AddExtraInfoVars_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 609 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_5[0]));
#line 609 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 1) = ((MR_Box) (transform_hlds__pd_util__get_branch_vars_7_p_0_1));
#line 609 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 609 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 3) = ((MR_Box) (transform_hlds__pd_util__ModuleInfo_1));
#line 609 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 4) = ((MR_Box) (transform_hlds__pd_util__InstMap_4));
#line 609 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 5) = ((MR_Box) (transform_hlds__pd_util__BranchNo_5));
#line 609 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 6) = ((MR_Box) (transform_hlds__pd_util__InstMapDelta_17));
#line 609 "pd_util.m"
            }
#line 628 "pd_util.m"
            {
#line 628 "pd_util.m"
              hlds__instmap__instmap_delta_changed_vars_2_p_0(transform_hlds__pd_util__InstMapDelta_17, &transform_hlds__pd_util__ChangedVars_32);
            }
#line 629 "pd_util.m"
            {
#line 629 "pd_util.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_util__ChangedVars_32, &transform_hlds__pd_util__ChangedVarsList_33);
            }
#line 5833 "transform_hlds.pd_util.c"
            transform_hlds__pd_util__TypeInfo_65_65 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 630 "pd_util.m"
            {
#line 630 "pd_util.m"
              mercury__list__foldl_4_p_0(transform_hlds__pd_util__TypeInfo_65_65, (MR_Word) &transform_hlds__pd_util_scalar_common_2[1], transform_hlds__pd_util__AddExtraInfoVars_22, transform_hlds__pd_util__ChangedVarsList_33, ((MR_Box) (transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0_6)), &transform_hlds__pd_util__conv1_STATE_VARIABLE_ExtraVars_50_50);
            }
#line 630 "pd_util.m"
            transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_50_50 = ((MR_Word) transform_hlds__pd_util__conv1_STATE_VARIABLE_ExtraVars_50_50);
#line 634 "pd_util.m"
            transform_hlds__pd_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_2, (MR_Integer) 0)));
#line 634 "pd_util.m"
            transform_hlds__pd_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_2, (MR_Integer) 1)));
#line 634 "pd_util.m"
            transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__V_51_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_51_51, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 634 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 634 "pd_util.m"
              {
#line 634 "pd_util.m"
                transform_hlds__pd_util__SwitchVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_51_51, (MR_Integer) 1)));
#line 634 "pd_util.m"
                transform_hlds__pd_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_51_51, (MR_Integer) 2)));
#line 634 "pd_util.m"
                transform_hlds__pd_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_51_51, (MR_Integer) 3)));
#line 639 "pd_util.m"
                {
#line 639 "pd_util.m"
                  MR_Word transform_hlds__pd_util__SwitchVarSet_39;
#line 637 "pd_util.m"
                  MR_Word transform_hlds__pd_util__SwitchVarSet0_38;
#line 635 "pd_util.m"
                  MR_Box transform_hlds__pd_util__conv2_SwitchVarSet0_38;

#line 635 "pd_util.m"
                  {
#line 635 "pd_util.m"
                    transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_util__TypeInfo_65_65, (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_50_50, ((MR_Box) (transform_hlds__pd_util__SwitchVar_34)), &transform_hlds__pd_util__conv2_SwitchVarSet0_38);
                  }
#line 635 "pd_util.m"
                  if (transform_hlds__pd_util__succeeded)
#line 635 "pd_util.m"
                    {
#line 635 "pd_util.m"
                      transform_hlds__pd_util__SwitchVarSet0_38 = ((MR_Word) transform_hlds__pd_util__conv2_SwitchVarSet0_38);
#line 635 "pd_util.m"
                      transform_hlds__pd_util__succeeded = MR_TRUE;
#line 635 "pd_util.m"
                    }
#line 637 "pd_util.m"
                  if (transform_hlds__pd_util__succeeded)
#line 636 "pd_util.m"
                    {
#line 636 "pd_util.m"
                      {
#line 636 "pd_util.m"
                        mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_5)), transform_hlds__pd_util__SwitchVarSet0_38, &transform_hlds__pd_util__SwitchVarSet_39);
                      }
#line 636 "pd_util.m"
                    }
#line 637 "pd_util.m"
                  else
#line 638 "pd_util.m"
                    {
#line 638 "pd_util.m"
                      {
#line 638 "pd_util.m"
                        transform_hlds__pd_util__SwitchVarSet_39 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_5)));
                      }
#line 638 "pd_util.m"
                    }
#line 640 "pd_util.m"
                  {
#line 640 "pd_util.m"
                    mercury__map__set_4_p_0(transform_hlds__pd_util__TypeInfo_65_65, (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_util__SwitchVar_34)), ((MR_Box) (transform_hlds__pd_util__SwitchVarSet_39)), transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_50_50, &transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_52_52);
                  }
#line 639 "pd_util.m"
                }
#line 634 "pd_util.m"
              }
#line 634 "pd_util.m"
            else
#line 640 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_52_52 = transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_50_50;
#line 644 "pd_util.m"
            transform_hlds__pd_util__NextBranch_40 = (transform_hlds__pd_util__BranchNo_5 + (MR_Integer) 1);
#line 645 "pd_util.m"
            /* direct tailcall eliminated */
#line 645 "pd_util.m"
            {
#line 645 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__3__tmp_copy_3 = transform_hlds__pd_util__InstMapDeltas_18;
#line 645 "pd_util.m"
              MR_Integer transform_hlds__pd_util__BranchNo__tmp_copy_5 = transform_hlds__pd_util__NextBranch_40;
#line 645 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0__tmp_copy_6 = transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_52_52;

#line 645 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0_6 = transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0__tmp_copy_6;
#line 645 "pd_util.m"
              transform_hlds__pd_util__BranchNo_5 = transform_hlds__pd_util__BranchNo__tmp_copy_5;
#line 645 "pd_util.m"
              transform_hlds__pd_util__HeadVar__3_3 = transform_hlds__pd_util__HeadVar__3__tmp_copy_3;
#line 645 "pd_util.m"
            }
#line 645 "pd_util.m"
            continue;
#line 608 "pd_util.m"
          }
#line 606 "pd_util.m"
        return transform_hlds__pd_util__succeeded;
#line 606 "pd_util.m"
      }
#line 606 "pd_util.m"
      break;
#line 606 "pd_util.m"
    }
#line 602 "pd_util.m"
}

#line 592 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_left_vars_3_p_0(
#line 592 "pd_util.m"
  MR_Word transform_hlds__pd_util__Goal_4,
#line 592 "pd_util.m"
  MR_Word transform_hlds__pd_util__Vars0_5,
#line 592 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Vars_6)
#line 592 "pd_util.m"
{
#line 598 "pd_util.m"
  {
#line 598 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 598 "pd_util.m"
    MR_Word transform_hlds__pd_util__Var_7;
#line 596 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_4, (MR_Integer) 0)));
#line 596 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_4, (MR_Integer) 1)));
#line 596 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_8_8;
#line 596 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_9_9;

#line 596 "pd_util.m"
    transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__V_11_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_11_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 596 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 596 "pd_util.m"
      {
#line 596 "pd_util.m"
        transform_hlds__pd_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_11_11, (MR_Integer) 1)));
#line 596 "pd_util.m"
        transform_hlds__pd_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_11_11, (MR_Integer) 2)));
#line 596 "pd_util.m"
        transform_hlds__pd_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_11_11, (MR_Integer) 3)));
#line 597 "pd_util.m"
        {
#line 597 "pd_util.m"
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_util__Var_7, transform_hlds__pd_util__Vars0_5, transform_hlds__pd_util__Vars_6);
#line 597 "pd_util.m"
          return;
        }
#line 596 "pd_util.m"
      }
#line 596 "pd_util.m"
    else
#line 599 "pd_util.m"
      *transform_hlds__pd_util__Vars_6 = transform_hlds__pd_util__Vars0_5;
#line 598 "pd_util.m"
  }
#line 592 "pd_util.m"
}

#line 480 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_extra_info_headvars_8_p_0(
#line 480 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 480 "pd_util.m"
  MR_Integer transform_hlds__pd_util__ArgNo_2,
#line 480 "pd_util.m"
  MR_Word transform_hlds__pd_util__LeftVars_3,
#line 480 "pd_util.m"
  MR_Word transform_hlds__pd_util__VarInfo_4,
#line 480 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__5_5,
#line 480 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__6_6,
#line 480 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__7_7,
#line 480 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__8_8)
#line 480 "pd_util.m"
{
#line 485 "pd_util.m"
  while (MR_TRUE)
#line 485 "pd_util.m"
    {
#line 485 "pd_util.m"
      /* tailcall optimized into a loop */
#line 485 "pd_util.m"
      {
#line 485 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 485 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 485 "pd_util.m"
          {
#line 485 "pd_util.m"
            *transform_hlds__pd_util__HeadVar__8_8 = transform_hlds__pd_util__HeadVar__7_7;
#line 485 "pd_util.m"
            *transform_hlds__pd_util__HeadVar__6_6 = transform_hlds__pd_util__HeadVar__5_5;
#line 485 "pd_util.m"
          }
#line 485 "pd_util.m"
        else
#line 487 "pd_util.m"
          {
#line 487 "pd_util.m"
            MR_Word transform_hlds__pd_util__HeadVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));
#line 487 "pd_util.m"
            MR_Word transform_hlds__pd_util__HeadVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
#line 487 "pd_util.m"
            MR_Integer transform_hlds__pd_util__NextArgNo_26;
#line 487 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_ThisProcArgs_31_31;
#line 487 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_ThisProcLeftVars_32_32;
#line 490 "pd_util.m"
            MR_Word transform_hlds__pd_util__ThisVarInfo_25;
#line 488 "pd_util.m"
            MR_Box transform_hlds__pd_util__conv0_ThisVarInfo_25;

#line 488 "pd_util.m"
            {
#line 488 "pd_util.m"
              transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__VarInfo_4, ((MR_Box) (transform_hlds__pd_util__HeadVar_18)), &transform_hlds__pd_util__conv0_ThisVarInfo_25);
            }
#line 488 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 488 "pd_util.m"
              {
#line 488 "pd_util.m"
                transform_hlds__pd_util__ThisVarInfo_25 = ((MR_Word) transform_hlds__pd_util__conv0_ThisVarInfo_25);
#line 488 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_TRUE;
#line 488 "pd_util.m"
              }
#line 490 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 489 "pd_util.m"
              {
#line 489 "pd_util.m"
                {
#line 489 "pd_util.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__ArgNo_2, ((MR_Box) (transform_hlds__pd_util__ThisVarInfo_25)), transform_hlds__pd_util__HeadVar__5_5, &transform_hlds__pd_util__STATE_VARIABLE_ThisProcArgs_31_31);
                }
#line 489 "pd_util.m"
              }
#line 490 "pd_util.m"
            else
#line 489 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_ThisProcArgs_31_31 = transform_hlds__pd_util__HeadVar__5_5;
#line 493 "pd_util.m"
            {
#line 493 "pd_util.m"
              transform_hlds__pd_util__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_util__LeftVars_3, transform_hlds__pd_util__HeadVar_18);
            }
#line 495 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 494 "pd_util.m"
              {
#line 494 "pd_util.m"
                {
#line 494 "pd_util.m"
                  mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__ArgNo_2)), transform_hlds__pd_util__HeadVar__7_7, &transform_hlds__pd_util__STATE_VARIABLE_ThisProcLeftVars_32_32);
                }
#line 494 "pd_util.m"
              }
#line 495 "pd_util.m"
            else
#line 494 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_ThisProcLeftVars_32_32 = transform_hlds__pd_util__HeadVar__7_7;
#line 498 "pd_util.m"
            transform_hlds__pd_util__NextArgNo_26 = (transform_hlds__pd_util__ArgNo_2 + (MR_Integer) 1);
#line 499 "pd_util.m"
            /* direct tailcall eliminated */
#line 499 "pd_util.m"
            {
#line 499 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__1__tmp_copy_1 = transform_hlds__pd_util__HeadVars_19;
#line 499 "pd_util.m"
              MR_Integer transform_hlds__pd_util__ArgNo__tmp_copy_2 = transform_hlds__pd_util__NextArgNo_26;
#line 499 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__5__tmp_copy_5 = transform_hlds__pd_util__STATE_VARIABLE_ThisProcArgs_31_31;
#line 499 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__7__tmp_copy_7 = transform_hlds__pd_util__STATE_VARIABLE_ThisProcLeftVars_32_32;

#line 499 "pd_util.m"
              transform_hlds__pd_util__HeadVar__7_7 = transform_hlds__pd_util__HeadVar__7__tmp_copy_7;
#line 499 "pd_util.m"
              transform_hlds__pd_util__HeadVar__5_5 = transform_hlds__pd_util__HeadVar__5__tmp_copy_5;
#line 499 "pd_util.m"
              transform_hlds__pd_util__ArgNo_2 = transform_hlds__pd_util__ArgNo__tmp_copy_2;
#line 499 "pd_util.m"
              transform_hlds__pd_util__HeadVar__1_1 = transform_hlds__pd_util__HeadVar__1__tmp_copy_1;
#line 499 "pd_util.m"
            }
#line 499 "pd_util.m"
            continue;
#line 487 "pd_util.m"
          }
#line 485 "pd_util.m"
      }
#line 485 "pd_util.m"
      break;
#line 485 "pd_util.m"
    }
#line 480 "pd_util.m"
}

#line 458 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_opaque_args_6_p_0(
#line 458 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 458 "pd_util.m"
  MR_Integer transform_hlds__pd_util__ArgNo_2,
#line 458 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
#line 458 "pd_util.m"
  MR_Word transform_hlds__pd_util__ExtraInfoArgs_4,
#line 458 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5,
#line 458 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_6)
#line 458 "pd_util.m"
{
#line 461 "pd_util.m"
  while (MR_TRUE)
#line 461 "pd_util.m"
    {
#line 461 "pd_util.m"
      /* tailcall optimized into a loop */
#line 461 "pd_util.m"
      {
#line 461 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 461 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 461 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_6 = transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5;
#line 461 "pd_util.m"
        else
#line 463 "pd_util.m"
          {
#line 463 "pd_util.m"
            MR_Word transform_hlds__pd_util__ArgMode_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__3_3, (MR_Integer) 0)));
#line 463 "pd_util.m"
            MR_Word transform_hlds__pd_util__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__3_3, (MR_Integer) 1)));
#line 463 "pd_util.m"
            MR_Integer transform_hlds__pd_util__NextArg_19;
#line 463 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_22_22;
#line 466 "pd_util.m"
            MR_Word transform_hlds__pd_util__TypeCtorInfo_25_25;
#line 466 "pd_util.m"
            MR_Word transform_hlds__pd_util__TypeInfo_26_26;

#line 465 "pd_util.m"
            {
#line 465 "pd_util.m"
              transform_hlds__pd_util__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__ArgMode_15);
            }
#line 465 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 465 "pd_util.m"
              {
#line 6216 "transform_hlds.pd_util.c"
                transform_hlds__pd_util__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 6218 "transform_hlds.pd_util.c"
                transform_hlds__pd_util__TypeInfo_26_26 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[1];
#line 466 "pd_util.m"
                {
#line 466 "pd_util.m"
                  transform_hlds__pd_util__succeeded = mercury__map__contains_2_p_0(transform_hlds__pd_util__TypeCtorInfo_25_25, transform_hlds__pd_util__TypeInfo_26_26, transform_hlds__pd_util__ExtraInfoArgs_4, ((MR_Box) (transform_hlds__pd_util__ArgNo_2)));
                }
#line 466 "pd_util.m"
                transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 465 "pd_util.m"
              }
#line 469 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 468 "pd_util.m"
              {
#line 468 "pd_util.m"
                {
#line 468 "pd_util.m"
                  mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__ArgNo_2)), transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5, &transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_22_22);
                }
#line 468 "pd_util.m"
              }
#line 469 "pd_util.m"
            else
#line 468 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_22_22 = transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5;
#line 472 "pd_util.m"
            transform_hlds__pd_util__NextArg_19 = (transform_hlds__pd_util__ArgNo_2 + (MR_Integer) 1);
#line 473 "pd_util.m"
            /* direct tailcall eliminated */
#line 473 "pd_util.m"
            {
#line 473 "pd_util.m"
              MR_Integer transform_hlds__pd_util__ArgNo__tmp_copy_2 = transform_hlds__pd_util__NextArg_19;
#line 473 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__3__tmp_copy_3 = transform_hlds__pd_util__ArgModes_16;
#line 473 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0__tmp_copy_5 = transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_22_22;

#line 473 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5 = transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0__tmp_copy_5;
#line 473 "pd_util.m"
              transform_hlds__pd_util__HeadVar__3_3 = transform_hlds__pd_util__HeadVar__3__tmp_copy_3;
#line 473 "pd_util.m"
              transform_hlds__pd_util__ArgNo_2 = transform_hlds__pd_util__ArgNo__tmp_copy_2;
#line 473 "pd_util.m"
            }
#line 473 "pd_util.m"
            continue;
#line 463 "pd_util.m"
          }
#line 461 "pd_util.m"
      }
#line 461 "pd_util.m"
      break;
#line 461 "pd_util.m"
    }
#line 458 "pd_util.m"
}

#line 400 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_2_4_p_0(
#line 400 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 400 "pd_util.m"
  MR_Word transform_hlds__pd_util__Args_2,
#line 400 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0_3,
#line 400 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_VarInfo_4)
#line 400 "pd_util.m"
{
#line 403 "pd_util.m"
  while (MR_TRUE)
#line 403 "pd_util.m"
    {
#line 403 "pd_util.m"
      /* tailcall optimized into a loop */
#line 403 "pd_util.m"
      {
#line 403 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 403 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_VarInfo_4 = transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0_3;
#line 403 "pd_util.m"
        else
#line 404 "pd_util.m"
          {
#line 404 "pd_util.m"
            MR_Word transform_hlds__pd_util__TypeInfo_20_20;
#line 404 "pd_util.m"
            MR_Integer transform_hlds__pd_util__ArgNo_9;
#line 404 "pd_util.m"
            MR_Word transform_hlds__pd_util__Branches_10;
#line 404 "pd_util.m"
            MR_Word transform_hlds__pd_util__ArgInfos_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
#line 404 "pd_util.m"
            MR_Word transform_hlds__pd_util__Arg_14;
#line 404 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));
#line 404 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_VarInfo_18_18;
#line 405 "pd_util.m"
            MR_Box transform_hlds__pd_util__conv0_Arg_14;

#line 404 "pd_util.m"
            transform_hlds__pd_util__ArgNo_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_17_17, (MR_Integer) 0)));
#line 404 "pd_util.m"
            transform_hlds__pd_util__Branches_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_17_17, (MR_Integer) 1)));
#line 6331 "transform_hlds.pd_util.c"
            transform_hlds__pd_util__TypeInfo_20_20 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 405 "pd_util.m"
            {
#line 405 "pd_util.m"
              mercury__list__det_index1_3_p_0(transform_hlds__pd_util__TypeInfo_20_20, transform_hlds__pd_util__Args_2, transform_hlds__pd_util__ArgNo_9, &transform_hlds__pd_util__conv0_Arg_14);
            }
#line 405 "pd_util.m"
            transform_hlds__pd_util__Arg_14 = ((MR_Word) transform_hlds__pd_util__conv0_Arg_14);
#line 406 "pd_util.m"
            {
#line 406 "pd_util.m"
              mercury__map__set_4_p_0(transform_hlds__pd_util__TypeInfo_20_20, (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_util__Arg_14)), ((MR_Box) (transform_hlds__pd_util__Branches_10)), transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0_3, &transform_hlds__pd_util__STATE_VARIABLE_VarInfo_18_18);
            }
#line 407 "pd_util.m"
            /* direct tailcall eliminated */
#line 407 "pd_util.m"
            {
#line 407 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__1__tmp_copy_1 = transform_hlds__pd_util__ArgInfos_11;
#line 407 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0__tmp_copy_3 = transform_hlds__pd_util__STATE_VARIABLE_VarInfo_18_18;

#line 407 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0_3 = transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0__tmp_copy_3;
#line 407 "pd_util.m"
              transform_hlds__pd_util__HeadVar__1_1 = transform_hlds__pd_util__HeadVar__1__tmp_copy_1;
#line 407 "pd_util.m"
            }
#line 407 "pd_util.m"
            continue;
#line 404 "pd_util.m"
          }
#line 403 "pd_util.m"
      }
#line 403 "pd_util.m"
      break;
#line 403 "pd_util.m"
    }
#line 400 "pd_util.m"
}

#line 327 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_goal_live_vars_2_6_p_0(
#line 327 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 327 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 327 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_3,
#line 327 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMapDelta_4,
#line 327 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5,
#line 327 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_6)
#line 327 "pd_util.m"
{
#line 331 "pd_util.m"
  while (MR_TRUE)
#line 331 "pd_util.m"
    {
#line 331 "pd_util.m"
      /* tailcall optimized into a loop */
#line 331 "pd_util.m"
      {
#line 331 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 331 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_Vars_6 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5;
#line 331 "pd_util.m"
        else
#line 333 "pd_util.m"
          {
#line 333 "pd_util.m"
            MR_Word transform_hlds__pd_util__NonLocal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 333 "pd_util.m"
            MR_Word transform_hlds__pd_util__NonLocals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 333 "pd_util.m"
            MR_Word transform_hlds__pd_util__FinalInst_20;
#line 333 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_23_23;
#line 336 "pd_util.m"
            MR_Word transform_hlds__pd_util__FinalInst0_19;

#line 334 "pd_util.m"
            {
#line 334 "pd_util.m"
              transform_hlds__pd_util__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__pd_util__InstMapDelta_4, transform_hlds__pd_util__NonLocal_14, &transform_hlds__pd_util__FinalInst0_19);
            }
#line 336 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 335 "pd_util.m"
              transform_hlds__pd_util__FinalInst_20 = transform_hlds__pd_util__FinalInst0_19;
#line 336 "pd_util.m"
            else
#line 337 "pd_util.m"
              {
#line 337 "pd_util.m"
                hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_util__InstMap_3, transform_hlds__pd_util__NonLocal_14, &transform_hlds__pd_util__FinalInst_20);
              }
#line 339 "pd_util.m"
            {
#line 339 "pd_util.m"
              transform_hlds__pd_util__succeeded = check_hlds__inst_match__inst_is_clobbered_2_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__FinalInst_20);
            }
#line 341 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 339 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_Vars_23_23 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5;
#line 341 "pd_util.m"
            else
#line 342 "pd_util.m"
              {
#line 342 "pd_util.m"
                {
#line 342 "pd_util.m"
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_util__NonLocal_14, transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5, &transform_hlds__pd_util__STATE_VARIABLE_Vars_23_23);
                }
#line 342 "pd_util.m"
              }
#line 344 "pd_util.m"
            /* direct tailcall eliminated */
#line 344 "pd_util.m"
            {
#line 344 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__2__tmp_copy_2 = transform_hlds__pd_util__NonLocals_15;
#line 344 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_5 = transform_hlds__pd_util__STATE_VARIABLE_Vars_23_23;

#line 344 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_5;
#line 344 "pd_util.m"
              transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__HeadVar__2__tmp_copy_2;
#line 344 "pd_util.m"
            }
#line 344 "pd_util.m"
            continue;
#line 333 "pd_util.m"
          }
#line 331 "pd_util.m"
      }
#line 331 "pd_util.m"
      break;
#line 331 "pd_util.m"
    }
#line 327 "pd_util.m"
}

#line 149 "pd_util.m"
MR_bool MR_CALL 
transform_hlds__pd_util__pd_can_reorder_goals_4_p_0(
#line 149 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_5,
#line 149 "pd_util.m"
  MR_Word transform_hlds__pd_util__FullyStrict_6,
#line 149 "pd_util.m"
  MR_Word transform_hlds__pd_util__EarlierGoal_7,
#line 149 "pd_util.m"
  MR_Word transform_hlds__pd_util__LaterGoal_8)
#line 149 "pd_util.m"
{
#line 1140 "pd_util.m"
  {
#line 1140 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 1140 "pd_util.m"
    MR_Word transform_hlds__pd_util__EarlierGoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 1)));
#line 1140 "pd_util.m"
    MR_Word transform_hlds__pd_util__LaterGoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 1)));
#line 1140 "pd_util.m"
    MR_Word transform_hlds__pd_util__EarlierDetism_13;
#line 1140 "pd_util.m"
    MR_Word transform_hlds__pd_util__LaterDetism_14;
#line 1140 "pd_util.m"
    MR_Word transform_hlds__pd_util__EarlierPurity_17;
#line 1140 "pd_util.m"
    MR_Word transform_hlds__pd_util__EarlierTrace_18;
#line 1140 "pd_util.m"
    MR_Word transform_hlds__pd_util__LaterPurity_19;
#line 1140 "pd_util.m"
    MR_Word transform_hlds__pd_util__LaterTrace_20;
#line 1144 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 0)));
#line 1145 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 0)));
#line 1155 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_22_22;
#line 1155 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_23_23;
#line 1155 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_24_24;
#line 1154 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_15_15;
#line 1156 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_16_16;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeCtorInfo_11_33;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__GoalInfo1_26;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__GoalInfo2_28;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__InstmapDelta1_29;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__ChangedVars1_30;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__NonLocals2_31;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__Intersection_32;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_25_25;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_27_27;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeCtorInfo_11_42;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__GoalInfo1_35;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__GoalInfo2_37;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__InstmapDelta1_38;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__ChangedVars1_39;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__NonLocals2_40;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__Intersection_41;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_34_34;
#line 1182 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_36_36;

#line 1147 "pd_util.m"
    {
#line 1147 "pd_util.m"
      transform_hlds__pd_util__EarlierDetism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__pd_util__EarlierGoalInfo_10);
    }
#line 1148 "pd_util.m"
    {
#line 1148 "pd_util.m"
      transform_hlds__pd_util__LaterDetism_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__pd_util__LaterGoalInfo_12);
    }
#line 1154 "pd_util.m"
    {
#line 1154 "pd_util.m"
      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__pd_util__EarlierDetism_13, &transform_hlds__pd_util__V_23_23, &transform_hlds__pd_util__V_15_15);
    }
#line 1154 "pd_util.m"
    transform_hlds__pd_util__succeeded = ((MR_Integer) 0 == transform_hlds__pd_util__V_23_23);
#line 1155 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 1155 "pd_util.m"
      {
#line 1156 "pd_util.m"
        transform_hlds__pd_util__V_22_22 = (MR_Integer) 2;
#line 1156 "pd_util.m"
        {
#line 1156 "pd_util.m"
          parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__pd_util__LaterDetism_14, &transform_hlds__pd_util__V_16_16, &transform_hlds__pd_util__V_24_24);
        }
#line 1156 "pd_util.m"
        transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__V_22_22 == transform_hlds__pd_util__V_24_24);
#line 1155 "pd_util.m"
      }
#line 1155 "pd_util.m"
    transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 1140 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 1140 "pd_util.m"
      {
#line 1160 "pd_util.m"
        {
#line 1160 "pd_util.m"
          hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(transform_hlds__pd_util__EarlierGoalInfo_10, &transform_hlds__pd_util__EarlierPurity_17, &transform_hlds__pd_util__EarlierTrace_18);
        }
#line 1161 "pd_util.m"
        {
#line 1161 "pd_util.m"
          hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(transform_hlds__pd_util__LaterGoalInfo_12, &transform_hlds__pd_util__LaterPurity_19, &transform_hlds__pd_util__LaterTrace_20);
        }
#line 1163 "pd_util.m"
        transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__LaterPurity_19 == (MR_Integer) 2);
#line 1163 "pd_util.m"
        transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 1140 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 1140 "pd_util.m"
          {
#line 1165 "pd_util.m"
            transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__LaterTrace_20 == (MR_Integer) 1);
#line 1140 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 1140 "pd_util.m"
              {
#line 1162 "pd_util.m"
                transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__EarlierPurity_17 == (MR_Integer) 2);
#line 1162 "pd_util.m"
                transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 1140 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 1140 "pd_util.m"
                  {
#line 1164 "pd_util.m"
                    transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__EarlierTrace_18 == (MR_Integer) 1);
#line 1140 "pd_util.m"
                    if (transform_hlds__pd_util__succeeded)
#line 1140 "pd_util.m"
                      {
#line 1167 "pd_util.m"
                        {
#line 1167 "pd_util.m"
                          transform_hlds__pd_util__succeeded = hlds__goal_util__reordering_maintains_termination_old_4_p_0(transform_hlds__pd_util__ModuleInfo_5, transform_hlds__pd_util__FullyStrict_6, transform_hlds__pd_util__EarlierGoal_7, transform_hlds__pd_util__LaterGoal_8);
                        }
#line 1140 "pd_util.m"
                        if (transform_hlds__pd_util__succeeded)
#line 1140 "pd_util.m"
                          {
#line 1182 "pd_util.m"
                            transform_hlds__pd_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 0)));
#line 1182 "pd_util.m"
                            transform_hlds__pd_util__GoalInfo1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 1)));
#line 1182 "pd_util.m"
                            transform_hlds__pd_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 0)));
#line 1182 "pd_util.m"
                            transform_hlds__pd_util__GoalInfo2_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 1)));
#line 1183 "pd_util.m"
                            {
#line 1183 "pd_util.m"
                              transform_hlds__pd_util__InstmapDelta1_29 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo1_26);
                            }
#line 1184 "pd_util.m"
                            {
#line 1184 "pd_util.m"
                              hlds__instmap__instmap_delta_changed_vars_2_p_0(transform_hlds__pd_util__InstmapDelta1_29, &transform_hlds__pd_util__ChangedVars1_30);
                            }
#line 1185 "pd_util.m"
                            {
#line 1185 "pd_util.m"
                              transform_hlds__pd_util__NonLocals2_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_util__GoalInfo2_28);
                            }
#line 6676 "transform_hlds.pd_util.c"
                            transform_hlds__pd_util__TypeCtorInfo_11_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1186 "pd_util.m"
                            {
#line 1186 "pd_util.m"
                              parse_tree__set_of_var__intersect_3_p_0(transform_hlds__pd_util__TypeCtorInfo_11_33, transform_hlds__pd_util__ChangedVars1_30, transform_hlds__pd_util__NonLocals2_31, &transform_hlds__pd_util__Intersection_32);
                            }
#line 1187 "pd_util.m"
                            {
#line 1187 "pd_util.m"
                              transform_hlds__pd_util__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(transform_hlds__pd_util__TypeCtorInfo_11_33, transform_hlds__pd_util__Intersection_32);
                            }
#line 1172 "pd_util.m"
                            transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 1140 "pd_util.m"
                            if (transform_hlds__pd_util__succeeded)
#line 1140 "pd_util.m"
                              {
#line 1182 "pd_util.m"
                                transform_hlds__pd_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 0)));
#line 1182 "pd_util.m"
                                transform_hlds__pd_util__GoalInfo1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 1)));
#line 1182 "pd_util.m"
                                transform_hlds__pd_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 0)));
#line 1182 "pd_util.m"
                                transform_hlds__pd_util__GoalInfo2_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 1)));
#line 1183 "pd_util.m"
                                {
#line 1183 "pd_util.m"
                                  transform_hlds__pd_util__InstmapDelta1_38 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo1_35);
                                }
#line 1184 "pd_util.m"
                                {
#line 1184 "pd_util.m"
                                  hlds__instmap__instmap_delta_changed_vars_2_p_0(transform_hlds__pd_util__InstmapDelta1_38, &transform_hlds__pd_util__ChangedVars1_39);
                                }
#line 1185 "pd_util.m"
                                {
#line 1185 "pd_util.m"
                                  transform_hlds__pd_util__NonLocals2_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_util__GoalInfo2_37);
                                }
#line 6717 "transform_hlds.pd_util.c"
                                transform_hlds__pd_util__TypeCtorInfo_11_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1186 "pd_util.m"
                                {
#line 1186 "pd_util.m"
                                  parse_tree__set_of_var__intersect_3_p_0(transform_hlds__pd_util__TypeCtorInfo_11_42, transform_hlds__pd_util__ChangedVars1_39, transform_hlds__pd_util__NonLocals2_40, &transform_hlds__pd_util__Intersection_41);
                                }
#line 1187 "pd_util.m"
                                {
#line 1187 "pd_util.m"
                                  transform_hlds__pd_util__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(transform_hlds__pd_util__TypeCtorInfo_11_42, transform_hlds__pd_util__Intersection_41);
                                }
#line 1178 "pd_util.m"
                                transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 1140 "pd_util.m"
                              }
#line 1140 "pd_util.m"
                          }
#line 1140 "pd_util.m"
                      }
#line 1140 "pd_util.m"
                  }
#line 1140 "pd_util.m"
              }
#line 1140 "pd_util.m"
          }
#line 1140 "pd_util.m"
      }
#line 1140 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 1140 "pd_util.m"
  }
#line 149 "pd_util.m"
}

#line 133 "pd_util.m"
MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_8_p_0(
#line 133 "pd_util.m"
  MR_Word transform_hlds__pd_util___ModuleInfo_9,
#line 133 "pd_util.m"
  MR_Word transform_hlds__pd_util__OldGoal_10,
#line 133 "pd_util.m"
  MR_Word transform_hlds__pd_util__OldArgs_11,
#line 133 "pd_util.m"
  MR_Word transform_hlds__pd_util__OldArgTypes_12,
#line 133 "pd_util.m"
  MR_Word transform_hlds__pd_util__NewGoal_13,
#line 133 "pd_util.m"
  MR_Word transform_hlds__pd_util__NewVarTypes_14,
#line 133 "pd_util.m"
  MR_Word * transform_hlds__pd_util__OldNewRenaming_15,
#line 133 "pd_util.m"
  MR_Word * transform_hlds__pd_util__TypeSubn_16)
#line 133 "pd_util.m"
{
#line 1002 "pd_util.m"
  {
#line 1002 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;

#line 1002 "pd_util.m"
    {
#line 1002 "pd_util.m"
      return transform_hlds__pd_util__succeeded = transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0(transform_hlds__pd_util__OldGoal_10, transform_hlds__pd_util__OldArgs_11, transform_hlds__pd_util__OldArgTypes_12, transform_hlds__pd_util__NewGoal_13, transform_hlds__pd_util__NewVarTypes_14, transform_hlds__pd_util__OldNewRenaming_15, transform_hlds__pd_util__TypeSubn_16);
    }
#line 1002 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 1002 "pd_util.m"
  }
#line 133 "pd_util.m"
}

#line 122 "pd_util.m"
void MR_CALL 
transform_hlds__pd_util__inst_list_size_3_p_0(
#line 122 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_4,
#line 122 "pd_util.m"
  MR_Word transform_hlds__pd_util__Insts_5,
#line 122 "pd_util.m"
  MR_Integer * transform_hlds__pd_util__Size_6)
#line 122 "pd_util.m"
{
#line 986 "pd_util.m"
  {
#line 986 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 986 "pd_util.m"
    MR_Word transform_hlds__pd_util__Expansions_7;

#line 987 "pd_util.m"
    {
#line 987 "pd_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &transform_hlds__pd_util__Expansions_7);
    }
#line 988 "pd_util.m"
    {
#line 988 "pd_util.m"
      transform_hlds__pd_util__inst_list_size_5_p_0(transform_hlds__pd_util__ModuleInfo_4, transform_hlds__pd_util__Insts_5, transform_hlds__pd_util__Expansions_7, (MR_Integer) 0, transform_hlds__pd_util__Size_6);
#line 988 "pd_util.m"
      return;
    }
#line 986 "pd_util.m"
  }
#line 122 "pd_util.m"
}

#line 121 "pd_util.m"
void MR_CALL 
transform_hlds__pd_util__inst_size_3_p_0(
#line 121 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_4,
#line 121 "pd_util.m"
  MR_Word transform_hlds__pd_util__Inst_5,
#line 121 "pd_util.m"
  MR_Integer * transform_hlds__pd_util__Size_6)
#line 121 "pd_util.m"
{
#line 941 "pd_util.m"
  {
#line 941 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 941 "pd_util.m"
    MR_Word transform_hlds__pd_util__Expansions_7;

#line 942 "pd_util.m"
    {
#line 942 "pd_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &transform_hlds__pd_util__Expansions_7);
    }
#line 943 "pd_util.m"
    {
#line 943 "pd_util.m"
      transform_hlds__pd_util__inst_size_2_4_p_0(transform_hlds__pd_util__ModuleInfo_4, transform_hlds__pd_util__Inst_5, transform_hlds__pd_util__Expansions_7, transform_hlds__pd_util__Size_6);
#line 943 "pd_util.m"
      return;
    }
#line 941 "pd_util.m"
  }
#line 121 "pd_util.m"
}

#line 114 "pd_util.m"
MR_bool MR_CALL 
transform_hlds__pd_util__inst_MSG_4_p_0(
#line 114 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstA_5,
#line 114 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstB_6,
#line 114 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_7,
#line 114 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Inst_8)
#line 114 "pd_util.m"
{
#line 807 "pd_util.m"
  {
#line 807 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 807 "pd_util.m"
    MR_Word transform_hlds__pd_util__Expansions_9;

#line 808 "pd_util.m"
    {
#line 808 "pd_util.m"
      mercury__set__init_1_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_2[0], &transform_hlds__pd_util__Expansions_9);
    }
#line 817 "pd_util.m"
    {
#line 817 "pd_util.m"
      transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__pd_util__InstA_5, transform_hlds__pd_util__InstB_6);
    }
#line 819 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 818 "pd_util.m"
      {
#line 818 "pd_util.m"
        *transform_hlds__pd_util__Inst_8 = transform_hlds__pd_util__InstA_5;
#line 818 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 818 "pd_util.m"
      }
#line 819 "pd_util.m"
    else
#line 822 "pd_util.m"
      {
#line 822 "pd_util.m"
        MR_Word transform_hlds__pd_util__TypeInfo_19_24;
#line 822 "pd_util.m"
        MR_Word transform_hlds__pd_util__InstA2_17;
#line 822 "pd_util.m"
        MR_Word transform_hlds__pd_util__InstB2_18;
#line 822 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_20_20;
#line 822 "pd_util.m"
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_22;
#line 822 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_19_19;

#line 822 "pd_util.m"
        {
#line 822 "pd_util.m"
          transform_hlds__pd_util__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 822 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_19_19, 0) = ((MR_Box) (transform_hlds__pd_util__InstA_5));
#line 822 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_19_19, 1) = ((MR_Box) (transform_hlds__pd_util__InstB_6));
#line 822 "pd_util.m"
        }
#line 822 "pd_util.m"
        {
#line 822 "pd_util.m"
          transform_hlds__pd_util__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_2[0], ((MR_Box) (transform_hlds__pd_util__V_19_19)), transform_hlds__pd_util__Expansions_9);
        }
#line 822 "pd_util.m"
        transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 822 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 822 "pd_util.m"
          {
#line 823 "pd_util.m"
            {
#line 823 "pd_util.m"
              check_hlds__inst_match__inst_expand_3_p_0(transform_hlds__pd_util__ModuleInfo_7, transform_hlds__pd_util__InstA_5, &transform_hlds__pd_util__InstA2_17);
            }
#line 824 "pd_util.m"
            {
#line 824 "pd_util.m"
              check_hlds__inst_match__inst_expand_3_p_0(transform_hlds__pd_util__ModuleInfo_7, transform_hlds__pd_util__InstB_6, &transform_hlds__pd_util__InstB2_18);
            }
#line 6948 "transform_hlds.pd_util.c"
            transform_hlds__pd_util__TypeInfo_19_24 = (MR_Word) &transform_hlds__pd_util_scalar_common_2[0];
#line 825 "pd_util.m"
            {
#line 825 "pd_util.m"
              transform_hlds__pd_util__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 825 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_20_20, 0) = ((MR_Box) (transform_hlds__pd_util__InstA_5));
#line 825 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_20_20, 1) = ((MR_Box) (transform_hlds__pd_util__InstB_6));
#line 825 "pd_util.m"
            }
#line 825 "pd_util.m"
            {
#line 825 "pd_util.m"
              mercury__set__insert_3_p_0(transform_hlds__pd_util__TypeInfo_19_24, ((MR_Box) (transform_hlds__pd_util__V_20_20)), transform_hlds__pd_util__Expansions_9, &transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_22);
            }
#line 826 "pd_util.m"
            transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__InstB2_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 828 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 827 "pd_util.m"
              {
#line 827 "pd_util.m"
                *transform_hlds__pd_util__Inst_8 = transform_hlds__pd_util__InstA2_17;
#line 827 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_TRUE;
#line 827 "pd_util.m"
              }
#line 828 "pd_util.m"
            else
#line 829 "pd_util.m"
              {
#line 829 "pd_util.m"
                return transform_hlds__pd_util__succeeded = transform_hlds__pd_util__inst_MSG_2_5_p_0(transform_hlds__pd_util__InstA2_17, transform_hlds__pd_util__InstB2_18, transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_22, transform_hlds__pd_util__ModuleInfo_7, transform_hlds__pd_util__Inst_8);
              }
#line 822 "pd_util.m"
          }
#line 822 "pd_util.m"
      }
#line 807 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 807 "pd_util.m"
  }
#line 114 "pd_util.m"
}

#line 395 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0_2(
#line 395 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 395 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 395 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2)
#line 395 "pd_util.m"
{
#line 395 "pd_util.m"
  {
#line 395 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
#line 395 "pd_util.m"
    MR_Word transform_hlds__pd_util__conv1_HeadVar__3_28;

#line 395 "pd_util.m"
    {
#line 395 "pd_util.m"
      transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__395__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__pd_util__wrapper_arg_1), &transform_hlds__pd_util__conv1_HeadVar__3_28);
    }
#line 395 "pd_util.m"
    *transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv1_HeadVar__3_28));
#line 395 "pd_util.m"
  }
#line 395 "pd_util.m"
}

#line 391 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0_1(
#line 391 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 391 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 391 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2)
#line 391 "pd_util.m"
{
#line 391 "pd_util.m"
  {
#line 391 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
#line 391 "pd_util.m"
    MR_Word transform_hlds__pd_util__conv0_HeadVar__3_25;

#line 391 "pd_util.m"
    {
#line 391 "pd_util.m"
      transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__391__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__pd_util__wrapper_arg_1), &transform_hlds__pd_util__conv0_HeadVar__3_25);
    }
#line 391 "pd_util.m"
    *transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__3_25));
#line 391 "pd_util.m"
  }
#line 391 "pd_util.m"
}

#line 89 "pd_util.m"
void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0(
#line 89 "pd_util.m"
  MR_Word transform_hlds__pd_util__ArgInfo_4,
#line 89 "pd_util.m"
  MR_Word transform_hlds__pd_util__Args_5,
#line 89 "pd_util.m"
  MR_Word * transform_hlds__pd_util__VarInfo_6)
#line 89 "pd_util.m"
{
#line 384 "pd_util.m"
  {
#line 384 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 384 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 384 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeInfo_22_22 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[1];
#line 384 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeInfo_23_23;
#line 384 "pd_util.m"
    MR_Word transform_hlds__pd_util__ArgMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__ArgInfo_4, (MR_Integer) 0)));
#line 384 "pd_util.m"
    MR_Word transform_hlds__pd_util__LeftArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__ArgInfo_4, (MR_Integer) 1)));
#line 384 "pd_util.m"
    MR_Word transform_hlds__pd_util__OpaqueArgs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__ArgInfo_4, (MR_Integer) 2)));
#line 384 "pd_util.m"
    MR_Word transform_hlds__pd_util__ArgList_10;
#line 384 "pd_util.m"
    MR_Word transform_hlds__pd_util__BranchVarMap0_11;
#line 384 "pd_util.m"
    MR_Word transform_hlds__pd_util__BranchVarMap_12;
#line 384 "pd_util.m"
    MR_Word transform_hlds__pd_util__LeftArgNos_13;
#line 384 "pd_util.m"
    MR_Word transform_hlds__pd_util__LeftVars0_14;
#line 384 "pd_util.m"
    MR_Word transform_hlds__pd_util__LeftVars_15;
#line 384 "pd_util.m"
    MR_Word transform_hlds__pd_util__OpaqueArgNos_16;
#line 384 "pd_util.m"
    MR_Word transform_hlds__pd_util__OpaqueVars0_17;
#line 384 "pd_util.m"
    MR_Word transform_hlds__pd_util__OpaqueVars_18;
#line 384 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_19_19;
#line 384 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_20_20;

#line 386 "pd_util.m"
    {
#line 386 "pd_util.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__pd_util__TypeCtorInfo_21_21, transform_hlds__pd_util__TypeInfo_22_22, transform_hlds__pd_util__ArgMap_7, &transform_hlds__pd_util__ArgList_10);
    }
#line 7110 "transform_hlds.pd_util.c"
    transform_hlds__pd_util__TypeInfo_23_23 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 387 "pd_util.m"
    {
#line 387 "pd_util.m"
      mercury__map__init_1_p_0(transform_hlds__pd_util__TypeInfo_23_23, transform_hlds__pd_util__TypeInfo_22_22, &transform_hlds__pd_util__BranchVarMap0_11);
    }
#line 388 "pd_util.m"
    {
#line 388 "pd_util.m"
      transform_hlds__pd_util__convert_branch_info_2_4_p_0(transform_hlds__pd_util__ArgList_10, transform_hlds__pd_util__Args_5, transform_hlds__pd_util__BranchVarMap0_11, &transform_hlds__pd_util__BranchVarMap_12);
    }
#line 390 "pd_util.m"
    {
#line 390 "pd_util.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__pd_util__TypeCtorInfo_21_21, transform_hlds__pd_util__LeftArgs_8, &transform_hlds__pd_util__LeftArgNos_13);
    }
#line 391 "pd_util.m"
    {
#line 391 "pd_util.m"
      transform_hlds__pd_util__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 391 "pd_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_19_19, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[1]));
#line 391 "pd_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_19_19, 1) = ((MR_Box) (transform_hlds__pd_util__convert_branch_info_3_p_0_1));
#line 391 "pd_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 391 "pd_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_19_19, 3) = ((MR_Box) (transform_hlds__pd_util__Args_5));
#line 391 "pd_util.m"
    }
#line 391 "pd_util.m"
    {
#line 391 "pd_util.m"
      mercury__list__map_3_p_0(transform_hlds__pd_util__TypeCtorInfo_21_21, transform_hlds__pd_util__TypeInfo_23_23, transform_hlds__pd_util__V_19_19, transform_hlds__pd_util__LeftArgNos_13, &transform_hlds__pd_util__LeftVars0_14);
    }
#line 392 "pd_util.m"
    {
#line 392 "pd_util.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__pd_util__TypeInfo_23_23, transform_hlds__pd_util__LeftVars0_14, &transform_hlds__pd_util__LeftVars_15);
    }
#line 394 "pd_util.m"
    {
#line 394 "pd_util.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__pd_util__TypeCtorInfo_21_21, transform_hlds__pd_util__OpaqueArgs_9, &transform_hlds__pd_util__OpaqueArgNos_16);
    }
#line 395 "pd_util.m"
    {
#line 395 "pd_util.m"
      transform_hlds__pd_util__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 395 "pd_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_20_20, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[1]));
#line 395 "pd_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_20_20, 1) = ((MR_Box) (transform_hlds__pd_util__convert_branch_info_3_p_0_2));
#line 395 "pd_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 395 "pd_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_20_20, 3) = ((MR_Box) (transform_hlds__pd_util__Args_5));
#line 395 "pd_util.m"
    }
#line 395 "pd_util.m"
    {
#line 395 "pd_util.m"
      mercury__list__map_3_p_0(transform_hlds__pd_util__TypeCtorInfo_21_21, transform_hlds__pd_util__TypeInfo_23_23, transform_hlds__pd_util__V_20_20, transform_hlds__pd_util__OpaqueArgNos_16, &transform_hlds__pd_util__OpaqueVars0_17);
    }
#line 396 "pd_util.m"
    {
#line 396 "pd_util.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__pd_util__TypeInfo_23_23, transform_hlds__pd_util__OpaqueVars0_17, &transform_hlds__pd_util__OpaqueVars_18);
    }
#line 398 "pd_util.m"
    {
#line 398 "pd_util.m"
      MR_Word base;
#line 398 "pd_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 398 "pd_util.m"
      *transform_hlds__pd_util__VarInfo_6 = base;
#line 398 "pd_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_util__BranchVarMap_12));
#line 398 "pd_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_util__LeftVars_15));
#line 398 "pd_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_util__OpaqueVars_18));
#line 398 "pd_util.m"
    }
#line 384 "pd_util.m"
  }
#line 89 "pd_util.m"
}

#line 83 "pd_util.m"
void MR_CALL 
transform_hlds__pd_util__pd_recompute_instmap_delta_4_p_0(
#line 83 "pd_util.m"
  MR_Word transform_hlds__pd_util__Goal0_5,
#line 83 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Goal_6,
#line 83 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_14,
#line 83 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_PDInfo_15)
#line 83 "pd_util.m"
{
#line 795 "pd_util.m"
  {
#line 795 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 795 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModuleInfo0_8;
#line 795 "pd_util.m"
    MR_Word transform_hlds__pd_util__InstMap_9;
#line 795 "pd_util.m"
    MR_Word transform_hlds__pd_util__ProcInfo_10;
#line 795 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarTypes_11;
#line 795 "pd_util.m"
    MR_Word transform_hlds__pd_util__InstVarSet_12;
#line 795 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModuleInfo_13;

#line 796 "pd_util.m"
    {
#line 796 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_14, &transform_hlds__pd_util__ModuleInfo0_8);
    }
#line 797 "pd_util.m"
    {
#line 797 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_14, &transform_hlds__pd_util__InstMap_9);
    }
#line 798 "pd_util.m"
    {
#line 798 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_14, &transform_hlds__pd_util__ProcInfo_10);
    }
#line 799 "pd_util.m"
    {
#line 799 "pd_util.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_util__ProcInfo_10, &transform_hlds__pd_util__VarTypes_11);
    }
#line 800 "pd_util.m"
    {
#line 800 "pd_util.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__pd_util__ProcInfo_10, &transform_hlds__pd_util__InstVarSet_12);
    }
#line 801 "pd_util.m"
    {
#line 801 "pd_util.m"
      check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, transform_hlds__pd_util__Goal0_5, transform_hlds__pd_util__Goal_6, transform_hlds__pd_util__VarTypes_11, transform_hlds__pd_util__InstVarSet_12, transform_hlds__pd_util__InstMap_9, transform_hlds__pd_util__ModuleInfo0_8, &transform_hlds__pd_util__ModuleInfo_13);
    }
#line 803 "pd_util.m"
    {
#line 803 "pd_util.m"
      transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_util__ModuleInfo_13, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_14, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_15);
#line 803 "pd_util.m"
      return;
    }
#line 795 "pd_util.m"
  }
#line 83 "pd_util.m"
}

#line 78 "pd_util.m"
void MR_CALL 
transform_hlds__pd_util__pd_requantify_goal_5_p_0(
#line 78 "pd_util.m"
  MR_Word transform_hlds__pd_util__NonLocals_6,
#line 78 "pd_util.m"
  MR_Word transform_hlds__pd_util__Goal0_7,
#line 78 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Goal_8,
#line 78 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_18,
#line 78 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_PDInfo_19)
#line 78 "pd_util.m"
{
#line 782 "pd_util.m"
  {
#line 782 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 782 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarSet0_11;
#line 782 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarTypes0_12;
#line 782 "pd_util.m"
    MR_Word transform_hlds__pd_util__RttiVarMaps0_13;
#line 782 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarSet_15;
#line 782 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarTypes_16;
#line 782 "pd_util.m"
    MR_Word transform_hlds__pd_util__RttiVarMaps_17;
#line 782 "pd_util.m"
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20;
#line 782 "pd_util.m"
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_22_22;
#line 782 "pd_util.m"
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_23_23;
#line 782 "pd_util.m"
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_24_24;
#line 786 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_14_14;

#line 782 "pd_util.m"
    {
#line 782 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_18, &transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20);
    }
#line 783 "pd_util.m"
    {
#line 783 "pd_util.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__pd_util__VarSet0_11);
    }
#line 784 "pd_util.m"
    {
#line 784 "pd_util.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__pd_util__VarTypes0_12);
    }
#line 785 "pd_util.m"
    {
#line 785 "pd_util.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__pd_util__RttiVarMaps0_13);
    }
#line 786 "pd_util.m"
    {
#line 786 "pd_util.m"
      hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, transform_hlds__pd_util__NonLocals_6, &transform_hlds__pd_util__V_14_14, transform_hlds__pd_util__Goal0_7, transform_hlds__pd_util__Goal_8, transform_hlds__pd_util__VarSet0_11, &transform_hlds__pd_util__VarSet_15, transform_hlds__pd_util__VarTypes0_12, &transform_hlds__pd_util__VarTypes_16, transform_hlds__pd_util__RttiVarMaps0_13, &transform_hlds__pd_util__RttiVarMaps_17);
    }
#line 789 "pd_util.m"
    {
#line 789 "pd_util.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__pd_util__VarSet_15, transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_22_22);
    }
#line 790 "pd_util.m"
    {
#line 790 "pd_util.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__pd_util__VarTypes_16, transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_22_22, &transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_23_23);
    }
#line 791 "pd_util.m"
    {
#line 791 "pd_util.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__pd_util__RttiVarMaps_17, transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_23_23, &transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_24_24);
    }
#line 792 "pd_util.m"
    {
#line 792 "pd_util.m"
      transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_24_24, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_18, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_19);
#line 792 "pd_util.m"
      return;
    }
#line 782 "pd_util.m"
  }
#line 78 "pd_util.m"
}

#line 72 "pd_util.m"
void MR_CALL 
transform_hlds__pd_util__get_branch_vars_goal_4_p_0(
#line 72 "pd_util.m"
  MR_Word transform_hlds__pd_util__Goal_5,
#line 72 "pd_util.m"
  MR_Word * transform_hlds__pd_util__MaybeBranchInfo_6,
#line 72 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20,
#line 72 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_PDInfo_21)
#line 72 "pd_util.m"
{
#line 504 "pd_util.m"
  {
#line 504 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 504 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeCtorInfo_30_30;
#line 504 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeInfo_31_31;
#line 504 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModuleInfo0_8;
#line 504 "pd_util.m"
    MR_Word transform_hlds__pd_util__InstMap0_9;
#line 504 "pd_util.m"
    MR_Word transform_hlds__pd_util__ProcArgInfo_10;
#line 504 "pd_util.m"
    MR_Word transform_hlds__pd_util__ProcInfo_11;
#line 504 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarTypes_12;
#line 504 "pd_util.m"
    MR_Word transform_hlds__pd_util__LeftVars0_13;
#line 504 "pd_util.m"
    MR_Word transform_hlds__pd_util__Vars0_14;
#line 525 "pd_util.m"
    MR_Word transform_hlds__pd_util__LeftVars_15;
#line 525 "pd_util.m"
    MR_Word transform_hlds__pd_util__Vars1_16;
#line 525 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_22_22;

#line 505 "pd_util.m"
    {
#line 505 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20, &transform_hlds__pd_util__ModuleInfo0_8);
    }
#line 506 "pd_util.m"
    {
#line 506 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20, &transform_hlds__pd_util__InstMap0_9);
    }
#line 507 "pd_util.m"
    {
#line 507 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20, &transform_hlds__pd_util__ProcArgInfo_10);
    }
#line 508 "pd_util.m"
    {
#line 508 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20, &transform_hlds__pd_util__ProcInfo_11);
    }
#line 509 "pd_util.m"
    {
#line 509 "pd_util.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_util__ProcInfo_11, &transform_hlds__pd_util__VarTypes_12);
    }
#line 7434 "transform_hlds.pd_util.c"
    transform_hlds__pd_util__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 510 "pd_util.m"
    {
#line 510 "pd_util.m"
      parse_tree__set_of_var__init_1_p_0(transform_hlds__pd_util__TypeCtorInfo_30_30, &transform_hlds__pd_util__LeftVars0_13);
    }
#line 7441 "transform_hlds.pd_util.c"
    transform_hlds__pd_util__TypeInfo_31_31 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 511 "pd_util.m"
    {
#line 511 "pd_util.m"
      mercury__map__init_1_p_0(transform_hlds__pd_util__TypeInfo_31_31, (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], &transform_hlds__pd_util__Vars0_14);
    }
#line 513 "pd_util.m"
    {
#line 513 "pd_util.m"
      transform_hlds__pd_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "pd_util.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_22_22, 0) = ((MR_Box) (transform_hlds__pd_util__Goal_5));
#line 513 "pd_util.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 513 "pd_util.m"
    }
#line 513 "pd_util.m"
    {
#line 513 "pd_util.m"
      transform_hlds__pd_util__succeeded = transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0(transform_hlds__pd_util__ModuleInfo0_8, transform_hlds__pd_util__V_22_22, (MR_Integer) 0, transform_hlds__pd_util__InstMap0_9, transform_hlds__pd_util__LeftVars0_13, &transform_hlds__pd_util__LeftVars_15, transform_hlds__pd_util__Vars0_14, &transform_hlds__pd_util__Vars1_16);
    }
#line 525 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 518 "pd_util.m"
      {
#line 518 "pd_util.m"
        MR_Word transform_hlds__pd_util__Vars_17;
#line 518 "pd_util.m"
        MR_Word transform_hlds__pd_util__ModuleInfo_18;
#line 518 "pd_util.m"
        MR_Word transform_hlds__pd_util__OpaqueVars_19;
#line 518 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_28_28;
#line 518 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_29_29;

#line 516 "pd_util.m"
        {
#line 516 "pd_util.m"
          transform_hlds__pd_util__get_sub_branch_vars_goal_8_p_0(transform_hlds__pd_util__ProcArgInfo_10, transform_hlds__pd_util__V_22_22, transform_hlds__pd_util__VarTypes_12, transform_hlds__pd_util__InstMap0_9, transform_hlds__pd_util__Vars1_16, &transform_hlds__pd_util__Vars_17, transform_hlds__pd_util__ModuleInfo0_8, &transform_hlds__pd_util__ModuleInfo_18);
        }
#line 519 "pd_util.m"
        {
#line 519 "pd_util.m"
          transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_util__ModuleInfo_18, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_21);
        }
#line 522 "pd_util.m"
        {
#line 522 "pd_util.m"
          mercury__set__init_1_p_0(transform_hlds__pd_util__TypeInfo_31_31, &transform_hlds__pd_util__OpaqueVars_19);
        }
#line 524 "pd_util.m"
        {
#line 524 "pd_util.m"
          transform_hlds__pd_util__V_29_29 = parse_tree__set_of_var__bitset_to_set_1_f_0(transform_hlds__pd_util__TypeCtorInfo_30_30, transform_hlds__pd_util__LeftVars_15);
        }
#line 523 "pd_util.m"
        {
#line 523 "pd_util.m"
          transform_hlds__pd_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 523 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_28_28, 0) = ((MR_Box) (transform_hlds__pd_util__Vars_17));
#line 523 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_28_28, 1) = ((MR_Box) (transform_hlds__pd_util__V_29_29));
#line 523 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_28_28, 2) = ((MR_Box) (transform_hlds__pd_util__OpaqueVars_19));
#line 523 "pd_util.m"
        }
#line 523 "pd_util.m"
        {
#line 523 "pd_util.m"
          MR_Word base;
#line 523 "pd_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 523 "pd_util.m"
          *transform_hlds__pd_util__MaybeBranchInfo_6 = base;
#line 523 "pd_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_util__V_28_28));
#line 523 "pd_util.m"
        }
#line 518 "pd_util.m"
      }
#line 525 "pd_util.m"
    else
#line 526 "pd_util.m"
      {
#line 526 "pd_util.m"
        *transform_hlds__pd_util__MaybeBranchInfo_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "pd_util.m"
        *transform_hlds__pd_util__STATE_VARIABLE_PDInfo_21 = transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20;
#line 526 "pd_util.m"
      }
#line 504 "pd_util.m"
  }
#line 72 "pd_util.m"
}

#line 65 "pd_util.m"
void MR_CALL 
transform_hlds__pd_util__get_branch_vars_proc_6_p_0(
#line 65 "pd_util.m"
  MR_Word transform_hlds__pd_util__PredProcId_7,
#line 65 "pd_util.m"
  MR_Word transform_hlds__pd_util__ProcInfo_8,
#line 65 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_32,
#line 65 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_33,
#line 65 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_0_34,
#line 65 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_35)
#line 65 "pd_util.m"
{
#line 413 "pd_util.m"
  {
#line 413 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 413 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeInfo_44_44;
#line 413 "pd_util.m"
    MR_Word transform_hlds__pd_util__Goal_11;
#line 413 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarTypes_12;
#line 413 "pd_util.m"
    MR_Word transform_hlds__pd_util__InstMap0_13;
#line 413 "pd_util.m"
    MR_Word transform_hlds__pd_util__Vars0_14;
#line 413 "pd_util.m"
    MR_Word transform_hlds__pd_util__LeftVars0_15;
#line 413 "pd_util.m"
    MR_Word transform_hlds__pd_util__GoalList_16;
#line 449 "pd_util.m"
    MR_Word transform_hlds__pd_util__LeftVars_17;
#line 449 "pd_util.m"
    MR_Word transform_hlds__pd_util__Vars_18;

#line 414 "pd_util.m"
    {
#line 414 "pd_util.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__pd_util__ProcInfo_8, &transform_hlds__pd_util__Goal_11);
    }
#line 415 "pd_util.m"
    {
#line 415 "pd_util.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_util__ProcInfo_8, &transform_hlds__pd_util__VarTypes_12);
    }
#line 416 "pd_util.m"
    {
#line 416 "pd_util.m"
      hlds__instmap__init_reachable_1_p_0(&transform_hlds__pd_util__InstMap0_13);
    }
#line 7594 "transform_hlds.pd_util.c"
    transform_hlds__pd_util__TypeInfo_44_44 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[1];
#line 417 "pd_util.m"
    {
#line 417 "pd_util.m"
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], transform_hlds__pd_util__TypeInfo_44_44, &transform_hlds__pd_util__Vars0_14);
    }
#line 418 "pd_util.m"
    {
#line 418 "pd_util.m"
      parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__pd_util__LeftVars0_15);
    }
#line 419 "pd_util.m"
    {
#line 419 "pd_util.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__Goal_11, &transform_hlds__pd_util__GoalList_16);
    }
#line 421 "pd_util.m"
    {
#line 421 "pd_util.m"
      transform_hlds__pd_util__succeeded = transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0(transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__pd_util__GoalList_16, (MR_Integer) 0, transform_hlds__pd_util__InstMap0_13, transform_hlds__pd_util__LeftVars0_15, &transform_hlds__pd_util__LeftVars_17, transform_hlds__pd_util__Vars0_14, &transform_hlds__pd_util__Vars_18);
    }
#line 449 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 424 "pd_util.m"
      {
#line 424 "pd_util.m"
        MR_Word transform_hlds__pd_util__TypeCtorInfo_46_46;
#line 424 "pd_util.m"
        MR_Word transform_hlds__pd_util__TypeCtorInfo_47_47;
#line 424 "pd_util.m"
        MR_Word transform_hlds__pd_util__TypeInfo_48_48;
#line 424 "pd_util.m"
        MR_Word transform_hlds__pd_util__HeadVars_19;
#line 424 "pd_util.m"
        MR_Word transform_hlds__pd_util__ThisProcArgMap0_20;
#line 424 "pd_util.m"
        MR_Word transform_hlds__pd_util__ThisProcLeftArgs0_21;
#line 424 "pd_util.m"
        MR_Word transform_hlds__pd_util__ThisProcArgMap1_22;
#line 424 "pd_util.m"
        MR_Word transform_hlds__pd_util__ThisProcLeftArgs_23;
#line 424 "pd_util.m"
        MR_Word transform_hlds__pd_util__OpaqueArgs0_24;
#line 424 "pd_util.m"
        MR_Word transform_hlds__pd_util__BranchInfo0_25;
#line 424 "pd_util.m"
        MR_Word transform_hlds__pd_util__AllVars_26;
#line 424 "pd_util.m"
        MR_Word transform_hlds__pd_util__ThisProcArgMap_27;
#line 424 "pd_util.m"
        MR_Word transform_hlds__pd_util__ArgModes_29;
#line 424 "pd_util.m"
        MR_Word transform_hlds__pd_util__OpaqueArgs_30;
#line 424 "pd_util.m"
        MR_Word transform_hlds__pd_util__BranchInfo_31;
#line 424 "pd_util.m"
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_38_38;
#line 439 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_28_28;

#line 424 "pd_util.m"
        {
#line 424 "pd_util.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__pd_util__ProcInfo_8, &transform_hlds__pd_util__HeadVars_19);
        }
#line 7660 "transform_hlds.pd_util.c"
        transform_hlds__pd_util__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 425 "pd_util.m"
        {
#line 425 "pd_util.m"
          mercury__map__init_1_p_0(transform_hlds__pd_util__TypeCtorInfo_46_46, transform_hlds__pd_util__TypeInfo_44_44, &transform_hlds__pd_util__ThisProcArgMap0_20);
        }
#line 426 "pd_util.m"
        {
#line 426 "pd_util.m"
          mercury__set__init_1_p_0(transform_hlds__pd_util__TypeCtorInfo_46_46, &transform_hlds__pd_util__ThisProcLeftArgs0_21);
        }
#line 427 "pd_util.m"
        {
#line 427 "pd_util.m"
          transform_hlds__pd_util__get_extra_info_headvars_8_p_0(transform_hlds__pd_util__HeadVars_19, (MR_Integer) 1, transform_hlds__pd_util__LeftVars_17, transform_hlds__pd_util__Vars_18, transform_hlds__pd_util__ThisProcArgMap0_20, &transform_hlds__pd_util__ThisProcArgMap1_22, transform_hlds__pd_util__ThisProcLeftArgs0_21, &transform_hlds__pd_util__ThisProcLeftArgs_23);
        }
#line 430 "pd_util.m"
        {
#line 430 "pd_util.m"
          mercury__set__init_1_p_0(transform_hlds__pd_util__TypeCtorInfo_46_46, &transform_hlds__pd_util__OpaqueArgs0_24);
        }
#line 431 "pd_util.m"
        {
#line 431 "pd_util.m"
          transform_hlds__pd_util__BranchInfo0_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 431 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo0_25, 0) = ((MR_Box) (transform_hlds__pd_util__ThisProcArgMap1_22));
#line 431 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo0_25, 1) = ((MR_Box) (transform_hlds__pd_util__ThisProcLeftArgs_23));
#line 431 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo0_25, 2) = ((MR_Box) (transform_hlds__pd_util__OpaqueArgs0_24));
#line 431 "pd_util.m"
        }
#line 7694 "transform_hlds.pd_util.c"
        transform_hlds__pd_util__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 7696 "transform_hlds.pd_util.c"
        transform_hlds__pd_util__TypeInfo_48_48 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[2];
#line 433 "pd_util.m"
        {
#line 433 "pd_util.m"
          mercury__map__set_4_p_0(transform_hlds__pd_util__TypeCtorInfo_47_47, transform_hlds__pd_util__TypeInfo_48_48, ((MR_Box) (transform_hlds__pd_util__PredProcId_7)), ((MR_Box) (transform_hlds__pd_util__BranchInfo0_25)), transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_0_34, &transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_38_38);
        }
#line 437 "pd_util.m"
        {
#line 437 "pd_util.m"
          transform_hlds__pd_util__get_sub_branch_vars_goal_8_p_0(transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_38_38, transform_hlds__pd_util__GoalList_16, transform_hlds__pd_util__VarTypes_12, transform_hlds__pd_util__InstMap0_13, transform_hlds__pd_util__Vars_18, &transform_hlds__pd_util__AllVars_26, transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_33);
        }
#line 439 "pd_util.m"
        {
#line 439 "pd_util.m"
          transform_hlds__pd_util__get_extra_info_headvars_8_p_0(transform_hlds__pd_util__HeadVars_19, (MR_Integer) 1, transform_hlds__pd_util__LeftVars0_15, transform_hlds__pd_util__AllVars_26, transform_hlds__pd_util__ThisProcArgMap0_20, &transform_hlds__pd_util__ThisProcArgMap_27, transform_hlds__pd_util__ThisProcLeftArgs0_21, &transform_hlds__pd_util__V_28_28);
        }
#line 442 "pd_util.m"
        {
#line 442 "pd_util.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__pd_util__ProcInfo_8, &transform_hlds__pd_util__ArgModes_29);
        }
#line 443 "pd_util.m"
        {
#line 443 "pd_util.m"
          transform_hlds__pd_util__get_opaque_args_6_p_0(*transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_33, (MR_Integer) 1, transform_hlds__pd_util__ArgModes_29, transform_hlds__pd_util__ThisProcArgMap_27, transform_hlds__pd_util__OpaqueArgs0_24, &transform_hlds__pd_util__OpaqueArgs_30);
        }
#line 446 "pd_util.m"
        {
#line 446 "pd_util.m"
          transform_hlds__pd_util__BranchInfo_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 446 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_31, 0) = ((MR_Box) (transform_hlds__pd_util__ThisProcArgMap_27));
#line 446 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_31, 1) = ((MR_Box) (transform_hlds__pd_util__ThisProcLeftArgs_23));
#line 446 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_31, 2) = ((MR_Box) (transform_hlds__pd_util__OpaqueArgs_30));
#line 446 "pd_util.m"
        }
#line 448 "pd_util.m"
        {
#line 448 "pd_util.m"
          mercury__map__set_4_p_0(transform_hlds__pd_util__TypeCtorInfo_47_47, transform_hlds__pd_util__TypeInfo_48_48, ((MR_Box) (transform_hlds__pd_util__PredProcId_7)), ((MR_Box) (transform_hlds__pd_util__BranchInfo_31)), transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_38_38, transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_35);
#line 448 "pd_util.m"
          return;
        }
#line 424 "pd_util.m"
      }
#line 449 "pd_util.m"
    else
#line 450 "pd_util.m"
      {
#line 450 "pd_util.m"
        *transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_35 = transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_0_34;
#line 450 "pd_util.m"
        *transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_33 = transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_32;
#line 450 "pd_util.m"
      }
#line 413 "pd_util.m"
  }
#line 65 "pd_util.m"
}

#line 292 "pd_util.m"
static MR_Box MR_CALL 
transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0_1(
#line 292 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 292 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1)
#line 292 "pd_util.m"
{
#line 292 "pd_util.m"
  {
#line 292 "pd_util.m"
    MR_Box transform_hlds__pd_util__wrapper_arg_2;
#line 292 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
#line 292 "pd_util.m"
    MR_Word transform_hlds__pd_util__conv0_HeadVar__3_3;

#line 292 "pd_util.m"
    {
#line 292 "pd_util.m"
      transform_hlds__pd_util__conv0_HeadVar__3_3 = check_hlds__mode_errors__mode_error_info_to_spec_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__pd_util__wrapper_arg_1));
    }
#line 292 "pd_util.m"
    transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__3_3));
#line 292 "pd_util.m"
    return transform_hlds__pd_util__wrapper_arg_2;
#line 292 "pd_util.m"
  }
#line 292 "pd_util.m"
}

#line 58 "pd_util.m"
void MR_CALL 
transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0(
#line 58 "pd_util.m"
  MR_Word transform_hlds__pd_util__LiveVars_7,
#line 58 "pd_util.m"
  MR_Word transform_hlds__pd_util__Goal0_8,
#line 58 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Goal_9,
#line 58 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Errors_10,
#line 58 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_37,
#line 58 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_PDInfo_38)
#line 58 "pd_util.m"
{
#line 266 "pd_util.m"
  {
#line 266 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__PredProcId_12;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__PredId_13;
#line 266 "pd_util.m"
    MR_Integer transform_hlds__pd_util__ProcId_14;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModuleInfo0_15;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__InstMap0_16;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__Context_17;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__PredInfo0_18;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__ProcInfo0_19;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModuleInfo1_20;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModeInfo0_22;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModeInfo_23;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModuleInfo_24;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__Globals_25;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__Debug_26;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarSet_31;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarTypes_32;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__PredInfo_33;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__ProcInfo1_34;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__ProcInfo2_35;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__ProcInfo_36;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_46_46;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_47_47;

#line 268 "pd_util.m"
    {
#line 268 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_37, &transform_hlds__pd_util__PredProcId_12);
    }
#line 269 "pd_util.m"
    transform_hlds__pd_util__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__PredProcId_12, (MR_Integer) 0)));
#line 269 "pd_util.m"
    transform_hlds__pd_util__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__PredProcId_12, (MR_Integer) 1)));
#line 270 "pd_util.m"
    {
#line 270 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_37, &transform_hlds__pd_util__ModuleInfo0_15);
    }
#line 271 "pd_util.m"
    {
#line 271 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_37, &transform_hlds__pd_util__InstMap0_16);
    }
#line 272 "pd_util.m"
    {
#line 272 "pd_util.m"
      mercury__term__context_init_1_p_0(&transform_hlds__pd_util__Context_17);
    }
#line 273 "pd_util.m"
    {
#line 273 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_37, &transform_hlds__pd_util__PredInfo0_18);
    }
#line 274 "pd_util.m"
    {
#line 274 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_37, &transform_hlds__pd_util__ProcInfo0_19);
    }
#line 275 "pd_util.m"
    {
#line 275 "pd_util.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__pd_util__PredId_13, transform_hlds__pd_util__ProcId_14, transform_hlds__pd_util__PredInfo0_18, transform_hlds__pd_util__ProcInfo0_19, transform_hlds__pd_util__ModuleInfo0_15, &transform_hlds__pd_util__ModuleInfo1_20);
    }
#line 281 "pd_util.m"
    {
#line 281 "pd_util.m"
      check_hlds__mode_info__mode_info_init_9_p_0(transform_hlds__pd_util__ModuleInfo1_20, transform_hlds__pd_util__PredId_13, transform_hlds__pd_util__ProcId_14, transform_hlds__pd_util__Context_17, transform_hlds__pd_util__LiveVars_7, transform_hlds__pd_util__InstMap0_16, (MR_Integer) 1, (MR_Integer) 1, &transform_hlds__pd_util__ModeInfo0_22);
    }
#line 284 "pd_util.m"
    {
#line 284 "pd_util.m"
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(transform_hlds__pd_util__Goal0_8, transform_hlds__pd_util__Goal_9, transform_hlds__pd_util__ModeInfo0_22, &transform_hlds__pd_util__ModeInfo_23);
    }
#line 285 "pd_util.m"
    {
#line 285 "pd_util.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(transform_hlds__pd_util__ModeInfo_23, &transform_hlds__pd_util__ModuleInfo_24);
    }
#line 286 "pd_util.m"
    {
#line 286 "pd_util.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_util__ModuleInfo_24, &transform_hlds__pd_util__Globals_25);
    }
#line 287 "pd_util.m"
    {
#line 287 "pd_util.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_util__Globals_25, (MR_Integer) 70, &transform_hlds__pd_util__Debug_26);
    }
#line 288 "pd_util.m"
    {
#line 288 "pd_util.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(transform_hlds__pd_util__ModeInfo_23, transform_hlds__pd_util__Errors_10);
    }
#line 296 "pd_util.m"
    if ((transform_hlds__pd_util__Debug_26 == (MR_Integer) 0))
#line 297 "pd_util.m"
      {
#line 297 "pd_util.m"
      }
#line 296 "pd_util.m"
    else
#line 291 "pd_util.m"
      {
#line 291 "pd_util.m"
        MR_Word transform_hlds__pd_util__ErrorSpecs_28;
#line 291 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_42_42;
#line 293 "pd_util.m"
        MR_Integer transform_hlds__pd_util___NumWarnings_29;
#line 293 "pd_util.m"
        MR_Integer transform_hlds__pd_util___NumErrors_30;

#line 292 "pd_util.m"
        {
#line 292 "pd_util.m"
          transform_hlds__pd_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 292 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_42_42, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[0]));
#line 292 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_42_42, 1) = ((MR_Box) (transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0_1));
#line 292 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 292 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_42_42, 3) = ((MR_Box) (transform_hlds__pd_util__ModeInfo_23));
#line 292 "pd_util.m"
        }
#line 292 "pd_util.m"
        {
#line 292 "pd_util.m"
          transform_hlds__pd_util__ErrorSpecs_28 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, transform_hlds__pd_util__V_42_42, *transform_hlds__pd_util__Errors_10);
        }
#line 293 "pd_util.m"
        {
#line 293 "pd_util.m"
          parse_tree__error_util__write_error_specs_8_p_0(transform_hlds__pd_util__ErrorSpecs_28, transform_hlds__pd_util__Globals_25, (MR_Integer) 0, &transform_hlds__pd_util___NumWarnings_29, (MR_Integer) 0, &transform_hlds__pd_util___NumErrors_30);
        }
#line 291 "pd_util.m"
      }
#line 301 "pd_util.m"
    {
#line 301 "pd_util.m"
      check_hlds__mode_info__mode_info_get_varset_2_p_0(transform_hlds__pd_util__ModeInfo_23, &transform_hlds__pd_util__VarSet_31);
    }
#line 302 "pd_util.m"
    {
#line 302 "pd_util.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(transform_hlds__pd_util__ModeInfo_23, &transform_hlds__pd_util__VarTypes_32);
    }
#line 303 "pd_util.m"
    {
#line 303 "pd_util.m"
      transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_util__ModuleInfo_24, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_37, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_46_46);
    }
#line 304 "pd_util.m"
    {
#line 304 "pd_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__pd_util__ModuleInfo_24, transform_hlds__pd_util__PredId_13, transform_hlds__pd_util__ProcId_14, &transform_hlds__pd_util__PredInfo_33, &transform_hlds__pd_util__ProcInfo1_34);
    }
#line 306 "pd_util.m"
    {
#line 306 "pd_util.m"
      transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(transform_hlds__pd_util__PredInfo_33, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_46_46, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_47_47);
    }
#line 307 "pd_util.m"
    {
#line 307 "pd_util.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__pd_util__VarSet_31, transform_hlds__pd_util__ProcInfo1_34, &transform_hlds__pd_util__ProcInfo2_35);
    }
#line 308 "pd_util.m"
    {
#line 308 "pd_util.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__pd_util__VarTypes_32, transform_hlds__pd_util__ProcInfo2_35, &transform_hlds__pd_util__ProcInfo_36);
    }
#line 309 "pd_util.m"
    {
#line 309 "pd_util.m"
      transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__pd_util__ProcInfo_36, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_47_47, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_38);
#line 309 "pd_util.m"
      return;
    }
#line 266 "pd_util.m"
  }
#line 58 "pd_util.m"
}

#line 53 "pd_util.m"
void MR_CALL 
transform_hlds__pd_util__unique_modecheck_goal_5_p_0(
#line 53 "pd_util.m"
  MR_Word transform_hlds__pd_util__Goal0_6,
#line 53 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Goal_7,
#line 53 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Errors_8,
#line 53 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_11,
#line 53 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_PDInfo_12)
#line 53 "pd_util.m"
{
#line 262 "pd_util.m"
  {
#line 262 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 262 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeCtorInfo_16_26;
#line 262 "pd_util.m"
    MR_Word transform_hlds__pd_util__LiveVars_10;
#line 262 "pd_util.m"
    MR_Word transform_hlds__pd_util__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal0_6, (MR_Integer) 1)));
#line 262 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModuleInfo_19;
#line 262 "pd_util.m"
    MR_Word transform_hlds__pd_util__InstMapDelta_20;
#line 262 "pd_util.m"
    MR_Word transform_hlds__pd_util__InstMap_21;
#line 262 "pd_util.m"
    MR_Word transform_hlds__pd_util__NonLocals_22;
#line 262 "pd_util.m"
    MR_Word transform_hlds__pd_util__NonLocalsList_23;
#line 262 "pd_util.m"
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_14_24;
#line 317 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal0_6, (MR_Integer) 0)));

#line 318 "pd_util.m"
    {
#line 318 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_11, &transform_hlds__pd_util__ModuleInfo_19);
    }
#line 319 "pd_util.m"
    {
#line 319 "pd_util.m"
      transform_hlds__pd_util__InstMapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo_17);
    }
#line 320 "pd_util.m"
    {
#line 320 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_11, &transform_hlds__pd_util__InstMap_21);
    }
#line 321 "pd_util.m"
    {
#line 321 "pd_util.m"
      transform_hlds__pd_util__NonLocals_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_util__GoalInfo_17);
    }
#line 8078 "transform_hlds.pd_util.c"
    transform_hlds__pd_util__TypeCtorInfo_16_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 322 "pd_util.m"
    {
#line 322 "pd_util.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(transform_hlds__pd_util__TypeCtorInfo_16_26, transform_hlds__pd_util__NonLocals_22, &transform_hlds__pd_util__NonLocalsList_23);
    }
#line 323 "pd_util.m"
    {
#line 323 "pd_util.m"
      parse_tree__set_of_var__init_1_p_0(transform_hlds__pd_util__TypeCtorInfo_16_26, &transform_hlds__pd_util__STATE_VARIABLE_Vars_14_24);
    }
#line 324 "pd_util.m"
    {
#line 324 "pd_util.m"
      transform_hlds__pd_util__get_goal_live_vars_2_6_p_0(transform_hlds__pd_util__ModuleInfo_19, transform_hlds__pd_util__NonLocalsList_23, transform_hlds__pd_util__InstMap_21, transform_hlds__pd_util__InstMapDelta_20, transform_hlds__pd_util__STATE_VARIABLE_Vars_14_24, &transform_hlds__pd_util__LiveVars_10);
    }
#line 264 "pd_util.m"
    {
#line 264 "pd_util.m"
      transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0(transform_hlds__pd_util__LiveVars_10, transform_hlds__pd_util__Goal0_6, transform_hlds__pd_util__Goal_7, transform_hlds__pd_util__Errors_8, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_11, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_12);
#line 264 "pd_util.m"
      return;
    }
#line 262 "pd_util.m"
  }
#line 53 "pd_util.m"
}

#line 48 "pd_util.m"
void MR_CALL 
transform_hlds__pd_util__pd_simplify_goal_5_p_0(
#line 48 "pd_util.m"
  MR_Word transform_hlds__pd_util__SimplifyTasks_6,
#line 48 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Goal_0_17,
#line 48 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Goal_18,
#line 48 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_19,
#line 48 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_PDInfo_20)
#line 48 "pd_util.m"
{
#line 247 "pd_util.m"
  {
#line 247 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 247 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModuleInfo0_9;
#line 247 "pd_util.m"
    MR_Word transform_hlds__pd_util__PredId_10;
#line 247 "pd_util.m"
    MR_Integer transform_hlds__pd_util__ProcId_11;
#line 247 "pd_util.m"
    MR_Word transform_hlds__pd_util__ProcInfo0_12;
#line 247 "pd_util.m"
    MR_Word transform_hlds__pd_util__InstMap0_13;
#line 247 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModuleInfo_14;
#line 247 "pd_util.m"
    MR_Word transform_hlds__pd_util__ProcInfo_15;
#line 247 "pd_util.m"
    MR_Integer transform_hlds__pd_util__CostDelta_16;
#line 247 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_21_21;
#line 247 "pd_util.m"
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_23_23;
#line 247 "pd_util.m"
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_24_24;

#line 248 "pd_util.m"
    {
#line 248 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_19, &transform_hlds__pd_util__ModuleInfo0_9);
    }
#line 249 "pd_util.m"
    {
#line 249 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_19, &transform_hlds__pd_util__V_21_21);
    }
#line 249 "pd_util.m"
    transform_hlds__pd_util__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_21_21, (MR_Integer) 0)));
#line 249 "pd_util.m"
    transform_hlds__pd_util__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_21_21, (MR_Integer) 1)));
#line 250 "pd_util.m"
    {
#line 250 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_19, &transform_hlds__pd_util__ProcInfo0_12);
    }
#line 251 "pd_util.m"
    {
#line 251 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_19, &transform_hlds__pd_util__InstMap0_13);
    }
#line 253 "pd_util.m"
    {
#line 253 "pd_util.m"
      check_hlds__simplify__simplify_proc__simplify_goal_update_vars_in_proc_11_p_0(transform_hlds__pd_util__SimplifyTasks_6, transform_hlds__pd_util__ModuleInfo0_9, &transform_hlds__pd_util__ModuleInfo_14, transform_hlds__pd_util__PredId_10, transform_hlds__pd_util__ProcId_11, transform_hlds__pd_util__ProcInfo0_12, &transform_hlds__pd_util__ProcInfo_15, transform_hlds__pd_util__InstMap0_13, transform_hlds__pd_util__STATE_VARIABLE_Goal_0_17, transform_hlds__pd_util__STATE_VARIABLE_Goal_18, &transform_hlds__pd_util__CostDelta_16);
    }
#line 256 "pd_util.m"
    {
#line 256 "pd_util.m"
      transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_util__ModuleInfo_14, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_19, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_23_23);
    }
#line 257 "pd_util.m"
    {
#line 257 "pd_util.m"
      transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__pd_util__ProcInfo_15, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_23_23, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_24_24);
    }
#line 258 "pd_util.m"
    {
#line 258 "pd_util.m"
      transform_hlds__pd_info__pd_info_incr_cost_delta_3_p_0(transform_hlds__pd_util__CostDelta_16, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_24_24, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_20);
#line 258 "pd_util.m"
      return;
    }
#line 247 "pd_util.m"
  }
#line 48 "pd_util.m"
}

#line 380 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__propagate_constraints_4_p_0_1(
#line 380 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg)
#line 380 "pd_util.m"
{
#line 380 "pd_util.m"
  {
#line 380 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 380 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;

#line 380 "pd_util.m"
    {
#line 380 "pd_util.m"
      return transform_hlds__pd_util__succeeded = transform_hlds__pd_util__IntroducedFrom__pred__rerun_det_analysis__380__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 4))));
    }
#line 380 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 380 "pd_util.m"
  }
#line 380 "pd_util.m"
}

#line 43 "pd_util.m"
void MR_CALL 
transform_hlds__pd_util__propagate_constraints_4_p_0(
#line 43 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Goal_0_29,
#line 43 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Goal_30,
#line 43 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_31,
#line 43 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_PDInfo_32)
#line 43 "pd_util.m"
{
#line 195 "pd_util.m"
  {
#line 195 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 195 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModuleInfo0_7;
#line 195 "pd_util.m"
    MR_Word transform_hlds__pd_util__Globals_8;
#line 195 "pd_util.m"
    MR_Word transform_hlds__pd_util__ConstraintProp_9;
#line 195 "pd_util.m"
    MR_Word transform_hlds__pd_util__DebugPD_10;

#line 196 "pd_util.m"
    {
#line 196 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_31, &transform_hlds__pd_util__ModuleInfo0_7);
    }
#line 197 "pd_util.m"
    {
#line 197 "pd_util.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_util__ModuleInfo0_7, &transform_hlds__pd_util__Globals_8);
    }
#line 198 "pd_util.m"
    {
#line 198 "pd_util.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_util__Globals_8, (MR_Integer) 346, &transform_hlds__pd_util__ConstraintProp_9);
    }
#line 200 "pd_util.m"
    {
#line 200 "pd_util.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_util__Globals_8, (MR_Integer) 70, &transform_hlds__pd_util__DebugPD_10);
    }
#line 241 "pd_util.m"
    if ((transform_hlds__pd_util__ConstraintProp_9 == (MR_Integer) 0))
#line 242 "pd_util.m"
      {
#line 242 "pd_util.m"
        *transform_hlds__pd_util__STATE_VARIABLE_Goal_30 = transform_hlds__pd_util__STATE_VARIABLE_Goal_0_29;
#line 242 "pd_util.m"
        *transform_hlds__pd_util__STATE_VARIABLE_PDInfo_32 = transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_31;
#line 242 "pd_util.m"
      }
#line 241 "pd_util.m"
    else
#line 202 "pd_util.m"
      {
#line 202 "pd_util.m"
        MR_Word transform_hlds__pd_util__ProcInfo0_13;
#line 202 "pd_util.m"
        MR_Word transform_hlds__pd_util__InstMap_14;
#line 202 "pd_util.m"
        MR_Word transform_hlds__pd_util__VarTypes0_15;
#line 202 "pd_util.m"
        MR_Word transform_hlds__pd_util__VarSet0_16;
#line 202 "pd_util.m"
        MR_Word transform_hlds__pd_util__CInfo0_17;
#line 202 "pd_util.m"
        MR_Word transform_hlds__pd_util__GoalInfo0_19;
#line 202 "pd_util.m"
        MR_Word transform_hlds__pd_util__NonLocals_20;
#line 202 "pd_util.m"
        MR_Word transform_hlds__pd_util__CInfo_21;
#line 202 "pd_util.m"
        MR_Word transform_hlds__pd_util__ModuleInfo_22;
#line 202 "pd_util.m"
        MR_Word transform_hlds__pd_util__VarTypes_23;
#line 202 "pd_util.m"
        MR_Word transform_hlds__pd_util__VarSet_24;
#line 202 "pd_util.m"
        MR_Word transform_hlds__pd_util__Changed_25;
#line 202 "pd_util.m"
        MR_Word transform_hlds__pd_util__ProcInfo1_26;
#line 202 "pd_util.m"
        MR_Word transform_hlds__pd_util__ProcInfo_27;
#line 202 "pd_util.m"
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_Goal_41_41;
#line 202 "pd_util.m"
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_42_42;
#line 202 "pd_util.m"
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_43_43;
#line 213 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_18_18;

#line 205 "pd_util.m"
        {
#line 205 "pd_util.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__pd_util__DebugPD_10, (MR_String) "%% Propagating constraints\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 206 "pd_util.m"
        {
#line 206 "pd_util.m"
          transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_31, (MR_String) "before constraints\n", transform_hlds__pd_util__STATE_VARIABLE_Goal_0_29);
        }
#line 208 "pd_util.m"
        {
#line 208 "pd_util.m"
          transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_31, &transform_hlds__pd_util__ProcInfo0_13);
        }
#line 209 "pd_util.m"
        {
#line 209 "pd_util.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_31, &transform_hlds__pd_util__InstMap_14);
        }
#line 210 "pd_util.m"
        {
#line 210 "pd_util.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_util__ProcInfo0_13, &transform_hlds__pd_util__VarTypes0_15);
        }
#line 211 "pd_util.m"
        {
#line 211 "pd_util.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__pd_util__ProcInfo0_13, &transform_hlds__pd_util__VarSet0_16);
        }
#line 212 "pd_util.m"
        {
#line 212 "pd_util.m"
          transform_hlds__constraint__constraint_info_init_5_p_0(transform_hlds__pd_util__ModuleInfo0_7, transform_hlds__pd_util__VarTypes0_15, transform_hlds__pd_util__VarSet0_16, transform_hlds__pd_util__InstMap_14, &transform_hlds__pd_util__CInfo0_17);
        }
#line 213 "pd_util.m"
        transform_hlds__pd_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__STATE_VARIABLE_Goal_0_29, (MR_Integer) 0)));
#line 213 "pd_util.m"
        transform_hlds__pd_util__GoalInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__STATE_VARIABLE_Goal_0_29, (MR_Integer) 1)));
#line 214 "pd_util.m"
        {
#line 214 "pd_util.m"
          transform_hlds__pd_util__NonLocals_20 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_util__GoalInfo0_19);
        }
#line 215 "pd_util.m"
        {
#line 215 "pd_util.m"
          transform_hlds__constraint__propagate_constraints_in_goal_4_p_0(transform_hlds__pd_util__STATE_VARIABLE_Goal_0_29, &transform_hlds__pd_util__STATE_VARIABLE_Goal_41_41, transform_hlds__pd_util__CInfo0_17, &transform_hlds__pd_util__CInfo_21);
        }
#line 216 "pd_util.m"
        {
#line 216 "pd_util.m"
          transform_hlds__constraint__constraint_info_deconstruct_5_p_0(transform_hlds__pd_util__CInfo_21, &transform_hlds__pd_util__ModuleInfo_22, &transform_hlds__pd_util__VarTypes_23, &transform_hlds__pd_util__VarSet_24, &transform_hlds__pd_util__Changed_25);
        }
#line 218 "pd_util.m"
        {
#line 218 "pd_util.m"
          transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_util__ModuleInfo_22, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_31, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_42_42);
        }
#line 219 "pd_util.m"
        {
#line 219 "pd_util.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__pd_util__VarTypes_23, transform_hlds__pd_util__ProcInfo0_13, &transform_hlds__pd_util__ProcInfo1_26);
        }
#line 220 "pd_util.m"
        {
#line 220 "pd_util.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__pd_util__VarSet_24, transform_hlds__pd_util__ProcInfo1_26, &transform_hlds__pd_util__ProcInfo_27);
        }
#line 221 "pd_util.m"
        {
#line 221 "pd_util.m"
          transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__pd_util__ProcInfo_27, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_42_42, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_43_43);
        }
#line 233 "pd_util.m"
        if ((transform_hlds__pd_util__Changed_25 == (MR_Integer) 0))
#line 238 "pd_util.m"
          {
#line 239 "pd_util.m"
            *transform_hlds__pd_util__STATE_VARIABLE_Goal_30 = transform_hlds__pd_util__STATE_VARIABLE_Goal_0_29;
#line 239 "pd_util.m"
            *transform_hlds__pd_util__STATE_VARIABLE_PDInfo_32 = transform_hlds__pd_util__STATE_VARIABLE_PDInfo_43_43;
#line 238 "pd_util.m"
          }
#line 233 "pd_util.m"
        else
#line 223 "pd_util.m"
          {
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__SimplifyTasks_28;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_Goal_48_48;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_49_49;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_Goal_50_50;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_Goal_52_52;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_53_53;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__GoalInfo0_63;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__Detism_64;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__SolnContext_65;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__PredId_66;
#line 223 "pd_util.m"
            MR_Integer transform_hlds__pd_util__ProcId_67;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__PredInfo_68;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__ProcInfo_69;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__ModuleInfo0_70;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__ModuleInfo1_71;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__VarTypes_72;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__DetInfo0_73;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMap_74;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__DetInfo_77;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__ModuleInfo_78;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__Specs_79;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__Globals_80;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__GlobalsToUse_82;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__ContainsErrors_83;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_84_84;
#line 223 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_90_90;
#line 352 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_62_62;
#line 370 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_75_75;
#line 370 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_76_76;
#line 378 "pd_util.m"
            MR_Word transform_hlds__pd_util___OptionsToRestore_81;

#line 225 "pd_util.m"
            {
#line 225 "pd_util.m"
              transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_43_43, (MR_String) "after constraints, before recompute\n", transform_hlds__pd_util__STATE_VARIABLE_Goal_41_41);
            }
#line 228 "pd_util.m"
            {
#line 228 "pd_util.m"
              transform_hlds__pd_util__pd_requantify_goal_5_p_0(transform_hlds__pd_util__NonLocals_20, transform_hlds__pd_util__STATE_VARIABLE_Goal_41_41, &transform_hlds__pd_util__STATE_VARIABLE_Goal_48_48, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_43_43, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_49_49);
            }
#line 229 "pd_util.m"
            {
#line 229 "pd_util.m"
              transform_hlds__pd_util__pd_recompute_instmap_delta_4_p_0(transform_hlds__pd_util__STATE_VARIABLE_Goal_48_48, &transform_hlds__pd_util__STATE_VARIABLE_Goal_50_50, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_49_49, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51);
            }
#line 352 "pd_util.m"
            transform_hlds__pd_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__STATE_VARIABLE_Goal_50_50, (MR_Integer) 0)));
#line 352 "pd_util.m"
            transform_hlds__pd_util__GoalInfo0_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__STATE_VARIABLE_Goal_50_50, (MR_Integer) 1)));
#line 354 "pd_util.m"
            {
#line 354 "pd_util.m"
              transform_hlds__pd_util__Detism_64 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__pd_util__GoalInfo0_63);
            }
#line 355 "pd_util.m"
            {
#line 355 "pd_util.m"
              check_hlds__det_analysis__det_get_soln_context_2_p_0(transform_hlds__pd_util__Detism_64, &transform_hlds__pd_util__SolnContext_65);
            }
#line 359 "pd_util.m"
            {
#line 359 "pd_util.m"
              transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__V_84_84);
            }
#line 359 "pd_util.m"
            transform_hlds__pd_util__PredId_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_84_84, (MR_Integer) 0)));
#line 359 "pd_util.m"
            transform_hlds__pd_util__ProcId_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_84_84, (MR_Integer) 1)));
#line 360 "pd_util.m"
            {
#line 360 "pd_util.m"
              transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__PredInfo_68);
            }
#line 361 "pd_util.m"
            {
#line 361 "pd_util.m"
              transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__ProcInfo_69);
            }
#line 362 "pd_util.m"
            {
#line 362 "pd_util.m"
              transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__ModuleInfo0_70);
            }
#line 363 "pd_util.m"
            {
#line 363 "pd_util.m"
              hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__pd_util__PredId_66, transform_hlds__pd_util__ProcId_67, transform_hlds__pd_util__PredInfo_68, transform_hlds__pd_util__ProcInfo_69, transform_hlds__pd_util__ModuleInfo0_70, &transform_hlds__pd_util__ModuleInfo1_71);
            }
#line 366 "pd_util.m"
            {
#line 366 "pd_util.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_util__ProcInfo_69, &transform_hlds__pd_util__VarTypes_72);
            }
#line 367 "pd_util.m"
            {
#line 367 "pd_util.m"
              check_hlds__det_util__det_info_init_7_p_0(transform_hlds__pd_util__ModuleInfo1_71, transform_hlds__pd_util__VarTypes_72, transform_hlds__pd_util__PredId_66, transform_hlds__pd_util__ProcId_67, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__pd_util__DetInfo0_73);
            }
#line 369 "pd_util.m"
            {
#line 369 "pd_util.m"
              transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__InstMap_74);
            }
#line 370 "pd_util.m"
            {
#line 370 "pd_util.m"
              check_hlds__det_analysis__det_infer_goal_10_p_0(transform_hlds__pd_util__STATE_VARIABLE_Goal_50_50, &transform_hlds__pd_util__STATE_VARIABLE_Goal_52_52, transform_hlds__pd_util__InstMap_74, transform_hlds__pd_util__SolnContext_65, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__pd_util__V_75_75, &transform_hlds__pd_util__V_76_76, transform_hlds__pd_util__DetInfo0_73, &transform_hlds__pd_util__DetInfo_77);
            }
#line 372 "pd_util.m"
            {
#line 372 "pd_util.m"
              check_hlds__det_util__det_info_get_module_info_2_p_0(transform_hlds__pd_util__DetInfo_77, &transform_hlds__pd_util__ModuleInfo_78);
            }
#line 373 "pd_util.m"
            {
#line 373 "pd_util.m"
              transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_util__ModuleInfo_78, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_53_53);
            }
#line 374 "pd_util.m"
            {
#line 374 "pd_util.m"
              check_hlds__det_util__det_info_get_error_specs_2_p_0(transform_hlds__pd_util__DetInfo_77, &transform_hlds__pd_util__Specs_79);
            }
#line 377 "pd_util.m"
            {
#line 377 "pd_util.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_util__ModuleInfo_78, &transform_hlds__pd_util__Globals_80);
            }
#line 378 "pd_util.m"
            {
#line 378 "pd_util.m"
              check_hlds__det_report__disable_det_warnings_3_p_0(&transform_hlds__pd_util___OptionsToRestore_81, transform_hlds__pd_util__Globals_80, &transform_hlds__pd_util__GlobalsToUse_82);
            }
#line 379 "pd_util.m"
            {
#line 379 "pd_util.m"
              transform_hlds__pd_util__ContainsErrors_83 = parse_tree__error_util__contains_errors_2_f_0(transform_hlds__pd_util__GlobalsToUse_82, transform_hlds__pd_util__Specs_79);
            }
#line 380 "pd_util.m"
            {
#line 380 "pd_util.m"
              transform_hlds__pd_util__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 380 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_90_90, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_3[1]));
#line 380 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_90_90, 1) = ((MR_Box) (transform_hlds__pd_util__propagate_constraints_4_p_0_1));
#line 380 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 380 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_90_90, 3) = ((MR_Box) (transform_hlds__pd_util__ContainsErrors_83));
#line 380 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_90_90, 4) = ((MR_Box) ((MR_Integer) 0));
#line 380 "pd_util.m"
            }
#line 380 "pd_util.m"
            {
#line 380 "pd_util.m"
              mercury__require__expect_4_p_0(transform_hlds__pd_util__V_90_90, (MR_String) "transform_hlds.pd_util", (MR_String) "predicate \140transform_hlds.pd_util.rerun_det_analysis\'/4", (MR_String) "determinism errors");
            }
#line 231 "pd_util.m"
            {
#line 231 "pd_util.m"
              check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, transform_hlds__pd_util__Globals_8, &transform_hlds__pd_util__SimplifyTasks_28);
            }
#line 232 "pd_util.m"
            {
#line 232 "pd_util.m"
              transform_hlds__pd_util__pd_simplify_goal_5_p_0(transform_hlds__pd_util__SimplifyTasks_28, transform_hlds__pd_util__STATE_VARIABLE_Goal_52_52, transform_hlds__pd_util__STATE_VARIABLE_Goal_30, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_53_53, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_32);
#line 232 "pd_util.m"
              return;
            }
#line 223 "pd_util.m"
          }
#line 202 "pd_util.m"
      }
#line 195 "pd_util.m"
  }
#line 43 "pd_util.m"
}

#line 187 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__goal_get_calls_2_p_0_1(
#line 187 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 187 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 187 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2)
#line 187 "pd_util.m"
{
#line 187 "pd_util.m"
  {
#line 187 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 187 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
#line 187 "pd_util.m"
    MR_Word transform_hlds__pd_util__conv0_HeadVar__2_17;

#line 187 "pd_util.m"
    {
#line 187 "pd_util.m"
      transform_hlds__pd_util__succeeded = transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__187__1_2_p_0(((MR_Word) transform_hlds__pd_util__wrapper_arg_1), &transform_hlds__pd_util__conv0_HeadVar__2_17);
    }
#line 187 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 187 "pd_util.m"
      {
#line 187 "pd_util.m"
        *transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__2_17));
#line 187 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 187 "pd_util.m"
      }
#line 187 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 187 "pd_util.m"
  }
#line 187 "pd_util.m"
}

#line 38 "pd_util.m"
void MR_CALL 
transform_hlds__pd_util__goal_get_calls_2_p_0(
#line 38 "pd_util.m"
  MR_Word transform_hlds__pd_util__Goal0_3,
#line 38 "pd_util.m"
  MR_Word * transform_hlds__pd_util__CalledPreds_4)
#line 38 "pd_util.m"
{
#line 185 "pd_util.m"
  {
#line 185 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 185 "pd_util.m"
    MR_Word transform_hlds__pd_util__GoalList_5;

#line 186 "pd_util.m"
    {
#line 186 "pd_util.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__Goal0_3, &transform_hlds__pd_util__GoalList_5);
    }
#line 191 "pd_util.m"
    {
#line 191 "pd_util.m"
      mercury__list__filter_map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_util_scalar_common_2[4], transform_hlds__pd_util__GoalList_5, transform_hlds__pd_util__CalledPreds_4);
#line 191 "pd_util.m"
      return;
    }
#line 185 "pd_util.m"
  }
#line 38 "pd_util.m"
}

void mercury__transform_hlds__pd_util__init(void)
{
}

void mercury__transform_hlds__pd_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__pd_util__transform_hlds__pd_util__type_ctor_info_expansions_0);
	MR_register_type_ctor_info(&transform_hlds__pd_util__transform_hlds__pd_util__type_ctor_info_pd_var_info_0);
}

void mercury__transform_hlds__pd_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.pd_util. */
