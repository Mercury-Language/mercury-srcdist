/*
** Automatically generated from `pd_util.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
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
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
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
#include "mdbcomp.sym_name.mih"
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




#line 154 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_util__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 166 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 169 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_util__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 178 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 181 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 184 "transform_hlds.pd_util.c"
static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____expansions_0_0_10001(
#line 187 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 189 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_2);

#line 192 "transform_hlds.pd_util.c"
static void MR_CALL 
transform_hlds__pd_util____Compare____expansions_0_0_10001(
#line 195 "transform_hlds.pd_util.c"
  MR_Box * transform_hlds__pd_util__wrapper_arg_1,
#line 197 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
#line 199 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_3);

#line 202 "transform_hlds.pd_util.c"
static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____pd_var_info_0_0_10001(
#line 205 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 207 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_2);

#line 210 "transform_hlds.pd_util.c"
static void MR_CALL 
transform_hlds__pd_util____Compare____pd_var_info_0_0_10001(
#line 213 "transform_hlds.pd_util.c"
  MR_Box * transform_hlds__pd_util__wrapper_arg_1,
#line 215 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
#line 217 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_3);

#line 731 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(
#line 731 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 731 "pd_util.m"
  MR_Word transform_hlds__pd_util__ProcArgInfo_2,
#line 731 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_3,
#line 731 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
#line 731 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_6,
#line 731 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
#line 731 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8);

#line 698 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_p_0(
#line 698 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 698 "pd_util.m"
  MR_Word transform_hlds__pd_util__ProcArgInfo_2,
#line 698 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_3,
#line 698 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
#line 698 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_6,
#line 698 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
#line 698 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8);

#line 574 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0_2(
#line 574 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 574 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 574 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2);

#line 582 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0_1(
#line 582 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 582 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 582 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2);

#line 531 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0(
#line 531 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 531 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 531 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
#line 531 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap0_5,
#line 531 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6,
#line 531 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_LeftVars_7,
#line 531 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8,
#line 531 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_9);

#line 1013 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0_1(
#line 1013 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 1013 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 1013 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2);

#line 1103 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1103__1_3_p_0(
#line 1103 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_93,
#line 1103 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_94,
#line 1103 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__3_95);

#line 626 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__626__1_7_p_0(
#line 626 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 626 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_4,
#line 626 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_5,
#line 626 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMapDelta_17,
#line 626 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__5_43,
#line 626 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__6_44,
#line 626 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__7_45);

#line 574 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__574__1_2_p_0(
#line 574 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_37,
#line 574 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__2_38);

#line 582 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__582__1_2_p_0(
#line 582 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_35,
#line 582 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__2_36);

#line 382 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__rerun_det_analysis__382__1_2_p_0(
#line 382 "pd_util.m"
  MR_Word transform_hlds__pd_util__ContainsErrors_29,
#line 382 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_42);

#line 1013 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goals_match__1013__1_3_p_0(
#line 1013 "pd_util.m"
  MR_Word transform_hlds__pd_util__OldNewRenaming_15,
#line 1013 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_30,
#line 1013 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__3_31);

#line 397 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__397__1_3_p_0(
#line 397 "pd_util.m"
  MR_Word transform_hlds__pd_util__Args_5,
#line 397 "pd_util.m"
  MR_Integer transform_hlds__pd_util__HeadVar__2_27,
#line 397 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__3_28);

#line 393 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__393__1_3_p_0(
#line 393 "pd_util.m"
  MR_Word transform_hlds__pd_util__Args_5,
#line 393 "pd_util.m"
  MR_Integer transform_hlds__pd_util__HeadVar__2_24,
#line 393 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__3_25);

#line 187 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__187__1_2_p_0(
#line 187 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_16,
#line 187 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__2_17);

#line 413 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util____Compare____pd_var_info_0_0(
#line 413 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__1_1,
#line 413 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 413 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3);

#line 413 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____pd_var_info_0_0(
#line 413 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 413 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2);

#line 813 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util____Compare____expansions_0_0(
#line 813 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__1_1,
#line 813 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 813 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3);

#line 813 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____expansions_0_0(
#line 813 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 813 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2);

#line 1133 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__match_generic_call_2_p_0(
#line 1133 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 1133 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2);

#line 1103 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_2_4_p_0_1(
#line 1103 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 1103 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 1103 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
#line 1103 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_3);

#line 1050 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_2_4_p_0(
#line 1050 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 1050 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 1050 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3,
#line 1050 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_4);

#line 1028 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__collect_matching_arg_types_5_p_0(
#line 1028 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 1028 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 1028 "pd_util.m"
  MR_Word transform_hlds__pd_util__Renaming_3,
#line 1028 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4,
#line 1028 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_5);

#line 992 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__inst_list_size_5_p_0(
#line 992 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 992 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 992 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_3,
#line 992 "pd_util.m"
  MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_0_4,
#line 992 "pd_util.m"
  MR_Integer * transform_hlds__pd_util__STATE_VARIABLE_Size_5);

#line 978 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__bound_inst_size_5_p_0(
#line 978 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 978 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 978 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_3,
#line 978 "pd_util.m"
  MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_0_4,
#line 978 "pd_util.m"
  MR_Integer * transform_hlds__pd_util__STATE_VARIABLE_Size_5);

#line 947 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__inst_size_2_4_p_0(
#line 947 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_5,
#line 947 "pd_util.m"
  MR_Word transform_hlds__pd_util__Inst_6,
#line 947 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23,
#line 947 "pd_util.m"
  MR_Integer * transform_hlds__pd_util__Size_8);

#line 899 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(
#line 899 "pd_util.m"
  MR_Word transform_hlds__pd_util__Xs_8,
#line 899 "pd_util.m"
  MR_Word transform_hlds__pd_util__Ys_9,
#line 899 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_10,
#line 899 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_11,
#line 899 "pd_util.m"
  MR_Word transform_hlds__pd_util__Uniq_12,
#line 899 "pd_util.m"
  MR_Word transform_hlds__pd_util__BoundInsts_13,
#line 899 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Inst_14);

#line 880 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__inst_list_MSG_5_p_0(
#line 880 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 880 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 880 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_3,
#line 880 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
#line 880 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__5_5);

#line 835 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__inst_MSG_2_5_p_0(
#line 835 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstA_6,
#line 835 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstB_7,
#line 835 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_8,
#line 835 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_9,
#line 835 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Inst_10);

#line 766 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__combine_vars_4_p_0(
#line 766 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_1,
#line 766 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 766 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3,
#line 766 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_4);

#line 712 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__examine_case_list_10_p_0(
#line 712 "pd_util.m"
  MR_Word transform_hlds__pd_util__ProcArgInfo_1,
#line 712 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_2,
#line 712 "pd_util.m"
  MR_Word transform_hlds__pd_util__Var_3,
#line 712 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
#line 712 "pd_util.m"
  MR_Word transform_hlds__pd_util__VarTypes_5,
#line 712 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap0_6,
#line 712 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
#line 712 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8,
#line 712 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_9,
#line 712 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_10);

#line 652 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_sub_branch_vars_goal_8_p_0(
#line 652 "pd_util.m"
  MR_Word transform_hlds__pd_util__ProcArgInfo_1,
#line 652 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 652 "pd_util.m"
  MR_Word transform_hlds__pd_util__VarTypes_3,
#line 652 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap0_4,
#line 652 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__5_5,
#line 652 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__6_6,
#line 652 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__7_7,
#line 652 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__8_8);

#line 611 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_branch_vars_7_p_0_1(
#line 611 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 611 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 611 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
#line 611 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_3);

#line 604 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__get_branch_vars_7_p_0(
#line 604 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 604 "pd_util.m"
  MR_Word transform_hlds__pd_util__Goal_2,
#line 604 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
#line 604 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_4,
#line 604 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_5,
#line 604 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0_6,
#line 604 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_7);

#line 594 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_left_vars_3_p_0(
#line 594 "pd_util.m"
  MR_Word transform_hlds__pd_util__Goal_4,
#line 594 "pd_util.m"
  MR_Word transform_hlds__pd_util__Vars0_5,
#line 594 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Vars_6);

#line 482 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_extra_info_headvars_8_p_0(
#line 482 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 482 "pd_util.m"
  MR_Integer transform_hlds__pd_util__ArgNo_2,
#line 482 "pd_util.m"
  MR_Word transform_hlds__pd_util__LeftVars_3,
#line 482 "pd_util.m"
  MR_Word transform_hlds__pd_util__VarInfo_4,
#line 482 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__5_5,
#line 482 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__6_6,
#line 482 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__7_7,
#line 482 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__8_8);

#line 460 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_opaque_args_6_p_0(
#line 460 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 460 "pd_util.m"
  MR_Integer transform_hlds__pd_util__ArgNo_2,
#line 460 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
#line 460 "pd_util.m"
  MR_Word transform_hlds__pd_util__ExtraInfoArgs_4,
#line 460 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5,
#line 460 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_6);

#line 402 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_2_4_p_0(
#line 402 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 402 "pd_util.m"
  MR_Word transform_hlds__pd_util__Args_2,
#line 402 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0_3,
#line 402 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_VarInfo_4);

#line 329 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_goal_live_vars_2_6_p_0(
#line 329 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 329 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 329 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_3,
#line 329 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMapDelta_4,
#line 329 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5,
#line 329 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_6);

#line 397 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0_2(
#line 397 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 397 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 397 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2);

#line 393 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0_1(
#line 393 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 393 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 393 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2);

#line 294 "pd_util.m"
static MR_Box MR_CALL 
transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0_1(
#line 294 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 294 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1);

#line 382 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__propagate_constraints_4_p_0_1(
#line 382 "pd_util.m"
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 963 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 971 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_util__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 979 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 987 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 995 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1004 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1013 "transform_hlds.pd_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1022 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_util__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1031 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_util__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1039 "transform_hlds.pd_util.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_util__transform_hlds__pd_util__type_ctor_info_expansions_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_util____Unify____expansions_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_util____Compare____expansions_0_0_10001)),
  (MR_String) "transform_hlds.pd_util",
  (MR_String) "expansions",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1056 "transform_hlds.pd_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1065 "transform_hlds.pd_util.c"
const MR_TypeCtorInfo_Struct transform_hlds__pd_util__transform_hlds__pd_util__type_ctor_info_pd_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_util____Unify____pd_var_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_util____Compare____pd_var_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_util",
  (MR_String) "pd_var_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1082 "transform_hlds.pd_util.c"
static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____expansions_0_0_10001(
#line 1085 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 1087 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_2)
#line 1089 "transform_hlds.pd_util.c"
{
#line 1091 "transform_hlds.pd_util.c"
  {
#line 1093 "transform_hlds.pd_util.c"
    MR_bool transform_hlds__pd_util__succeeded;

#line 1096 "transform_hlds.pd_util.c"
    {
#line 1098 "transform_hlds.pd_util.c"
      transform_hlds__pd_util__succeeded = transform_hlds__pd_util____Unify____expansions_0_0(((MR_Word) transform_hlds__pd_util__wrapper_arg_1), ((MR_Word) transform_hlds__pd_util__wrapper_arg_2));
    }
#line 1101 "transform_hlds.pd_util.c"
    return transform_hlds__pd_util__succeeded;
#line 1103 "transform_hlds.pd_util.c"
  }
#line 1105 "transform_hlds.pd_util.c"
}

#line 1108 "transform_hlds.pd_util.c"
static void MR_CALL 
transform_hlds__pd_util____Compare____expansions_0_0_10001(
#line 1111 "transform_hlds.pd_util.c"
  MR_Box * transform_hlds__pd_util__wrapper_arg_1,
#line 1113 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
#line 1115 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_3)
#line 1117 "transform_hlds.pd_util.c"
{
#line 1119 "transform_hlds.pd_util.c"
  {
#line 1121 "transform_hlds.pd_util.c"
    MR_Word transform_hlds__pd_util__conv0_HeadVar__1_1;

#line 1124 "transform_hlds.pd_util.c"
    {
#line 1126 "transform_hlds.pd_util.c"
      transform_hlds__pd_util____Compare____expansions_0_0(&transform_hlds__pd_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_util__wrapper_arg_2), ((MR_Word) transform_hlds__pd_util__wrapper_arg_3));
    }
#line 1129 "transform_hlds.pd_util.c"
    *transform_hlds__pd_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__1_1));
#line 1131 "transform_hlds.pd_util.c"
  }
#line 1133 "transform_hlds.pd_util.c"
}

#line 1136 "transform_hlds.pd_util.c"
static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____pd_var_info_0_0_10001(
#line 1139 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 1141 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_2)
#line 1143 "transform_hlds.pd_util.c"
{
#line 1145 "transform_hlds.pd_util.c"
  {
#line 1147 "transform_hlds.pd_util.c"
    MR_bool transform_hlds__pd_util__succeeded;

#line 1150 "transform_hlds.pd_util.c"
    {
#line 1152 "transform_hlds.pd_util.c"
      transform_hlds__pd_util__succeeded = transform_hlds__pd_util____Unify____pd_var_info_0_0(((MR_Word) transform_hlds__pd_util__wrapper_arg_1), ((MR_Word) transform_hlds__pd_util__wrapper_arg_2));
    }
#line 1155 "transform_hlds.pd_util.c"
    return transform_hlds__pd_util__succeeded;
#line 1157 "transform_hlds.pd_util.c"
  }
#line 1159 "transform_hlds.pd_util.c"
}

#line 1162 "transform_hlds.pd_util.c"
static void MR_CALL 
transform_hlds__pd_util____Compare____pd_var_info_0_0_10001(
#line 1165 "transform_hlds.pd_util.c"
  MR_Box * transform_hlds__pd_util__wrapper_arg_1,
#line 1167 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
#line 1169 "transform_hlds.pd_util.c"
  MR_Box transform_hlds__pd_util__wrapper_arg_3)
#line 1171 "transform_hlds.pd_util.c"
{
#line 1173 "transform_hlds.pd_util.c"
  {
#line 1175 "transform_hlds.pd_util.c"
    MR_Word transform_hlds__pd_util__conv0_HeadVar__1_1;

#line 1178 "transform_hlds.pd_util.c"
    {
#line 1180 "transform_hlds.pd_util.c"
      transform_hlds__pd_util____Compare____pd_var_info_0_0(&transform_hlds__pd_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_util__wrapper_arg_2), ((MR_Word) transform_hlds__pd_util__wrapper_arg_3));
    }
#line 1183 "transform_hlds.pd_util.c"
    *transform_hlds__pd_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__1_1));
#line 1185 "transform_hlds.pd_util.c"
  }
#line 1187 "transform_hlds.pd_util.c"
}

#line 731 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(
#line 731 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 731 "pd_util.m"
  MR_Word transform_hlds__pd_util__ProcArgInfo_2,
#line 731 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_3,
#line 731 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
#line 731 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_6,
#line 731 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
#line 731 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8)
#line 731 "pd_util.m"
{
#line 735 "pd_util.m"
  while (MR_TRUE)
#line 735 "pd_util.m"
    {
#line 735 "pd_util.m"
      /* tailcall optimized into a loop */
#line 735 "pd_util.m"
      {
#line 735 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 735 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 735 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_Vars_8 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7;
#line 735 "pd_util.m"
        else
#line 737 "pd_util.m"
          {
#line 737 "pd_util.m"
            MR_Word transform_hlds__pd_util__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 0)));
#line 737 "pd_util.m"
            MR_Word transform_hlds__pd_util__Goals_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 1)));
#line 737 "pd_util.m"
            MR_Word transform_hlds__pd_util__GoalInfo_41;
#line 737 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMapDelta_42;
#line 737 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMap1_43;
#line 737 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49;
#line 749 "pd_util.m"
            MR_Word transform_hlds__pd_util__PredId_25;
#line 749 "pd_util.m"
            MR_Integer transform_hlds__pd_util__ProcId_26;
#line 749 "pd_util.m"
            MR_Word transform_hlds__pd_util__Args_27;
#line 739 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 0)));
#line 739 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 1)));
#line 739 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_28_28;
#line 739 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_29_29;
#line 739 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_30_30;
#line 760 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_40_40;

#line 739 "pd_util.m"
            transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__V_46_46)) == (MR_mktag((MR_Integer) 2)));
#line 739 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 739 "pd_util.m"
              {
#line 739 "pd_util.m"
                transform_hlds__pd_util__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_46_46, (MR_Integer) 0)));
#line 739 "pd_util.m"
                transform_hlds__pd_util__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_46_46, (MR_Integer) 1)));
#line 739 "pd_util.m"
                transform_hlds__pd_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_46_46, (MR_Integer) 2)));
#line 739 "pd_util.m"
                transform_hlds__pd_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_46_46, (MR_Integer) 3)));
#line 739 "pd_util.m"
                transform_hlds__pd_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_46_46, (MR_Integer) 4)));
#line 739 "pd_util.m"
                transform_hlds__pd_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__V_46_46, (MR_Integer) 5)));
#line 746 "pd_util.m"
                {
#line 746 "pd_util.m"
                  MR_Word transform_hlds__pd_util__ThisProcArgInfo_32;
#line 741 "pd_util.m"
                  MR_Word transform_hlds__pd_util__V_47_47;
#line 741 "pd_util.m"
                  MR_Box transform_hlds__pd_util__conv0_ThisProcArgInfo_32;

#line 741 "pd_util.m"
                  {
#line 741 "pd_util.m"
                    transform_hlds__pd_util__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 741 "pd_util.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_47_47, 0) = ((MR_Box) (transform_hlds__pd_util__PredId_25));
#line 741 "pd_util.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_47_47, 1) = ((MR_Box) (transform_hlds__pd_util__ProcId_26));
#line 741 "pd_util.m"
                  }
#line 741 "pd_util.m"
                  {
#line 741 "pd_util.m"
                    transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_util_scalar_common_1[2], transform_hlds__pd_util__ProcArgInfo_2, ((MR_Box) (transform_hlds__pd_util__V_47_47)), &transform_hlds__pd_util__conv0_ThisProcArgInfo_32);
                  }
#line 741 "pd_util.m"
                  if (transform_hlds__pd_util__succeeded)
#line 741 "pd_util.m"
                    {
#line 741 "pd_util.m"
                      transform_hlds__pd_util__ThisProcArgInfo_32 = ((MR_Word) transform_hlds__pd_util__conv0_ThisProcArgInfo_32);
#line 741 "pd_util.m"
                      transform_hlds__pd_util__succeeded = MR_TRUE;
#line 741 "pd_util.m"
                    }
#line 746 "pd_util.m"
                  if (transform_hlds__pd_util__succeeded)
#line 742 "pd_util.m"
                    {
#line 742 "pd_util.m"
                      MR_Word transform_hlds__pd_util__BranchInfo_33;
#line 742 "pd_util.m"
                      MR_Word transform_hlds__pd_util__ExtraVars1_36;
#line 742 "pd_util.m"
                      MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_48_48;
#line 743 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_34_34;
#line 743 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_35_35;

#line 742 "pd_util.m"
                      {
#line 742 "pd_util.m"
                        transform_hlds__pd_util__convert_branch_info_3_p_0(transform_hlds__pd_util__ThisProcArgInfo_32, transform_hlds__pd_util__Args_27, &transform_hlds__pd_util__BranchInfo_33);
                      }
#line 743 "pd_util.m"
                      transform_hlds__pd_util__STATE_VARIABLE_Vars_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_33, (MR_Integer) 0)));
#line 743 "pd_util.m"
                      transform_hlds__pd_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_33, (MR_Integer) 1)));
#line 743 "pd_util.m"
                      transform_hlds__pd_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_33, (MR_Integer) 2)));
#line 744 "pd_util.m"
                      {
#line 744 "pd_util.m"
                        mercury__map__keys_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__STATE_VARIABLE_Vars_48_48, &transform_hlds__pd_util__ExtraVars1_36);
                      }
#line 745 "pd_util.m"
                      {
#line 745 "pd_util.m"
                        transform_hlds__pd_util__combine_vars_4_p_0(transform_hlds__pd_util__BranchNo_3, transform_hlds__pd_util__ExtraVars1_36, transform_hlds__pd_util__STATE_VARIABLE_Vars_48_48, &transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49);
                      }
#line 742 "pd_util.m"
                    }
#line 746 "pd_util.m"
                  else
#line 746 "pd_util.m"
                    transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7;
#line 746 "pd_util.m"
                }
#line 739 "pd_util.m"
              }
#line 739 "pd_util.m"
            else
#line 757 "pd_util.m"
              {
#line 757 "pd_util.m"
                MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_53_53;
#line 750 "pd_util.m"
                MR_Word transform_hlds__pd_util__LeftVars0_37;
#line 750 "pd_util.m"
                MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_50_50;
#line 750 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_51_51;
#line 752 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_38_38;

#line 750 "pd_util.m"
                {
#line 750 "pd_util.m"
                  parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__pd_util__LeftVars0_37);
                }
#line 751 "pd_util.m"
                {
#line 751 "pd_util.m"
                  mercury__map__init_1_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], &transform_hlds__pd_util__STATE_VARIABLE_Vars_50_50);
                }
#line 752 "pd_util.m"
                {
#line 752 "pd_util.m"
                  transform_hlds__pd_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "pd_util.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_51_51, 0) = ((MR_Box) (transform_hlds__pd_util__Goal_20));
#line 752 "pd_util.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 752 "pd_util.m"
                }
#line 752 "pd_util.m"
                {
#line 752 "pd_util.m"
                  transform_hlds__pd_util__succeeded = transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__V_51_51, (MR_Integer) 0, transform_hlds__pd_util__InstMap_6, transform_hlds__pd_util__LeftVars0_37, &transform_hlds__pd_util__V_38_38, transform_hlds__pd_util__STATE_VARIABLE_Vars_50_50, &transform_hlds__pd_util__STATE_VARIABLE_Vars_53_53);
                }
#line 757 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 755 "pd_util.m"
                  {
#line 755 "pd_util.m"
                    MR_Word transform_hlds__pd_util__ExtraVars2_39;

#line 755 "pd_util.m"
                    {
#line 755 "pd_util.m"
                      mercury__map__keys_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__STATE_VARIABLE_Vars_53_53, &transform_hlds__pd_util__ExtraVars2_39);
                    }
#line 756 "pd_util.m"
                    {
#line 756 "pd_util.m"
                      transform_hlds__pd_util__combine_vars_4_p_0(transform_hlds__pd_util__BranchNo_3, transform_hlds__pd_util__ExtraVars2_39, transform_hlds__pd_util__STATE_VARIABLE_Vars_53_53, &transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49);
                    }
#line 755 "pd_util.m"
                  }
#line 757 "pd_util.m"
                else
#line 757 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7;
#line 757 "pd_util.m"
              }
#line 760 "pd_util.m"
            transform_hlds__pd_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 0)));
#line 760 "pd_util.m"
            transform_hlds__pd_util__GoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 1)));
#line 761 "pd_util.m"
            {
#line 761 "pd_util.m"
              transform_hlds__pd_util__InstMapDelta_42 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo_41);
            }
#line 762 "pd_util.m"
            {
#line 762 "pd_util.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__pd_util__InstMap_6, transform_hlds__pd_util__InstMapDelta_42, &transform_hlds__pd_util__InstMap1_43);
            }
#line 763 "pd_util.m"
            /* direct tailcall eliminated */
#line 763 "pd_util.m"
            {
#line 763 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__4__tmp_copy_4 = transform_hlds__pd_util__Goals_21;
#line 763 "pd_util.m"
              MR_Word transform_hlds__pd_util__InstMap__tmp_copy_6 = transform_hlds__pd_util__InstMap1_43;
#line 763 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_7 = transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49;

#line 763 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_7;
#line 763 "pd_util.m"
              transform_hlds__pd_util__InstMap_6 = transform_hlds__pd_util__InstMap__tmp_copy_6;
#line 763 "pd_util.m"
              transform_hlds__pd_util__HeadVar__4_4 = transform_hlds__pd_util__HeadVar__4__tmp_copy_4;
#line 763 "pd_util.m"
            }
#line 763 "pd_util.m"
            continue;
#line 737 "pd_util.m"
          }
#line 735 "pd_util.m"
      }
#line 735 "pd_util.m"
      break;
#line 735 "pd_util.m"
    }
#line 731 "pd_util.m"
}

#line 698 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_p_0(
#line 698 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 698 "pd_util.m"
  MR_Word transform_hlds__pd_util__ProcArgInfo_2,
#line 698 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_3,
#line 698 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
#line 698 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_6,
#line 698 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
#line 698 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8)
#line 698 "pd_util.m"
{
#line 702 "pd_util.m"
  while (MR_TRUE)
#line 702 "pd_util.m"
    {
#line 702 "pd_util.m"
      /* tailcall optimized into a loop */
#line 702 "pd_util.m"
      {
#line 702 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 702 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 702 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_Vars_8 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7;
#line 702 "pd_util.m"
        else
#line 704 "pd_util.m"
          {
#line 704 "pd_util.m"
            MR_Word transform_hlds__pd_util__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 0)));
#line 704 "pd_util.m"
            MR_Word transform_hlds__pd_util__Goals_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 1)));
#line 704 "pd_util.m"
            MR_Word transform_hlds__pd_util__GoalList_25;
#line 704 "pd_util.m"
            MR_Integer transform_hlds__pd_util__NextBranch_26;
#line 704 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_29_29;

#line 705 "pd_util.m"
            {
#line 705 "pd_util.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__Goal_20, &transform_hlds__pd_util__GoalList_25);
            }
#line 706 "pd_util.m"
            {
#line 706 "pd_util.m"
              transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__ProcArgInfo_2, transform_hlds__pd_util__BranchNo_3, transform_hlds__pd_util__GoalList_25, transform_hlds__pd_util__InstMap_6, transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7, &transform_hlds__pd_util__STATE_VARIABLE_Vars_29_29);
            }
#line 708 "pd_util.m"
            transform_hlds__pd_util__NextBranch_26 = (transform_hlds__pd_util__BranchNo_3 + (MR_Integer) 1);
#line 709 "pd_util.m"
            /* direct tailcall eliminated */
#line 709 "pd_util.m"
            {
#line 709 "pd_util.m"
              MR_Integer transform_hlds__pd_util__BranchNo__tmp_copy_3 = transform_hlds__pd_util__NextBranch_26;
#line 709 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__4__tmp_copy_4 = transform_hlds__pd_util__Goals_21;
#line 709 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_7 = transform_hlds__pd_util__STATE_VARIABLE_Vars_29_29;

#line 709 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_7;
#line 709 "pd_util.m"
              transform_hlds__pd_util__HeadVar__4_4 = transform_hlds__pd_util__HeadVar__4__tmp_copy_4;
#line 709 "pd_util.m"
              transform_hlds__pd_util__BranchNo_3 = transform_hlds__pd_util__BranchNo__tmp_copy_3;
#line 709 "pd_util.m"
            }
#line 709 "pd_util.m"
            continue;
#line 704 "pd_util.m"
          }
#line 702 "pd_util.m"
      }
#line 702 "pd_util.m"
      break;
#line 702 "pd_util.m"
    }
#line 698 "pd_util.m"
}

#line 574 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0_2(
#line 574 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 574 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 574 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2)
#line 574 "pd_util.m"
{
#line 574 "pd_util.m"
  {
#line 574 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
#line 574 "pd_util.m"
    MR_Word transform_hlds__pd_util__conv1_HeadVar__2_38;

#line 574 "pd_util.m"
    {
#line 574 "pd_util.m"
      transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__574__1_2_p_0(((MR_Word) transform_hlds__pd_util__wrapper_arg_1), &transform_hlds__pd_util__conv1_HeadVar__2_38);
    }
#line 574 "pd_util.m"
    *transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv1_HeadVar__2_38));
#line 574 "pd_util.m"
  }
#line 574 "pd_util.m"
}

#line 582 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0_1(
#line 582 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 582 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 582 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2)
#line 582 "pd_util.m"
{
#line 582 "pd_util.m"
  {
#line 582 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
#line 582 "pd_util.m"
    MR_Word transform_hlds__pd_util__conv0_HeadVar__2_36;

#line 582 "pd_util.m"
    {
#line 582 "pd_util.m"
      transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__582__1_2_p_0(((MR_Word) transform_hlds__pd_util__wrapper_arg_1), &transform_hlds__pd_util__conv0_HeadVar__2_36);
    }
#line 582 "pd_util.m"
    *transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__2_36));
#line 582 "pd_util.m"
  }
#line 582 "pd_util.m"
}

#line 531 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0(
#line 531 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 531 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 531 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
#line 531 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap0_5,
#line 531 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6,
#line 531 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_LeftVars_7,
#line 531 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8,
#line 531 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_9)
#line 531 "pd_util.m"
{
#line 536 "pd_util.m"
  while (MR_TRUE)
#line 536 "pd_util.m"
    {
#line 536 "pd_util.m"
      /* tailcall optimized into a loop */
#line 536 "pd_util.m"
      {
#line 536 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 536 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 536 "pd_util.m"
          {
#line 536 "pd_util.m"
            transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__HeadVar__3_3 == (MR_Integer) 1);
#line 536 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 536 "pd_util.m"
              {
#line 536 "pd_util.m"
                *transform_hlds__pd_util__STATE_VARIABLE_Vars_9 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8;
#line 536 "pd_util.m"
                *transform_hlds__pd_util__STATE_VARIABLE_LeftVars_7 = transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6;
#line 536 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_TRUE;
#line 536 "pd_util.m"
              }
#line 536 "pd_util.m"
          }
#line 536 "pd_util.m"
        else
#line 538 "pd_util.m"
          {
#line 538 "pd_util.m"
            MR_Word transform_hlds__pd_util__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 538 "pd_util.m"
            MR_Word transform_hlds__pd_util__Goals_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 538 "pd_util.m"
            MR_Word transform_hlds__pd_util__GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 1)));
#line 538 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMapDelta_29;
#line 538 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMap_30;
#line 538 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_40_40;
#line 538 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_LeftVars_41_41;
#line 538 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_FoundBranch_42_42;
#line 539 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 0)));
#line 551 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMapDeltas_31;
#line 561 "pd_util.m"
            MR_Word transform_hlds__pd_util__GoalExpr_48;
#line 562 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_49_49;

#line 540 "pd_util.m"
            {
#line 540 "pd_util.m"
              transform_hlds__pd_util__InstMapDelta_29 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo_28);
            }
#line 541 "pd_util.m"
            {
#line 541 "pd_util.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__pd_util__InstMap0_5, transform_hlds__pd_util__InstMapDelta_29, &transform_hlds__pd_util__InstMap_30);
            }
#line 562 "pd_util.m"
            transform_hlds__pd_util__GoalExpr_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 0)));
#line 562 "pd_util.m"
            transform_hlds__pd_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 1)));
#line 572 "pd_util.m"
#line 572 "pd_util.m"
            switch (MR_tag((MR_Word) transform_hlds__pd_util__GoalExpr_48)) {
#line 572 "pd_util.m"
              default:
#line 572 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_FALSE;
#line 572 "pd_util.m"
                break;
#line 572 "pd_util.m"
              case (MR_Integer) 3:
#line 572 "pd_util.m"
#line 572 "pd_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 0)))) {
#line 572 "pd_util.m"
                  default:
#line 572 "pd_util.m"
                    transform_hlds__pd_util__succeeded = MR_FALSE;
#line 572 "pd_util.m"
                    break;
#line 572 "pd_util.m"
                  case (MR_Integer) 3:
#line 581 "pd_util.m"
                    {
#line 581 "pd_util.m"
                      MR_Word transform_hlds__pd_util__Disjuncts_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 1)));

#line 587 "pd_util.m"
                      {
#line 587 "pd_util.m"
                        mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0, (MR_Word) &transform_hlds__pd_util_scalar_common_2[6], transform_hlds__pd_util__Disjuncts_73, &transform_hlds__pd_util__InstMapDeltas_31);
                      }
#line 581 "pd_util.m"
                      transform_hlds__pd_util__succeeded = MR_TRUE;
#line 581 "pd_util.m"
                    }
#line 572 "pd_util.m"
                    break;
#line 572 "pd_util.m"
                  case (MR_Integer) 4:
#line 573 "pd_util.m"
                    {
#line 573 "pd_util.m"
                      MR_Word transform_hlds__pd_util__Cases_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 3)));
#line 573 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 1)));
#line 573 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 2)));

#line 579 "pd_util.m"
                      {
#line 579 "pd_util.m"
                        mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0, (MR_Word) &transform_hlds__pd_util_scalar_common_2[7], transform_hlds__pd_util__Cases_65, &transform_hlds__pd_util__InstMapDeltas_31);
                      }
#line 573 "pd_util.m"
                      transform_hlds__pd_util__succeeded = MR_TRUE;
#line 573 "pd_util.m"
                    }
#line 572 "pd_util.m"
                    break;
#line 572 "pd_util.m"
                  case (MR_Integer) 6:
#line 564 "pd_util.m"
                    {
#line 564 "pd_util.m"
                      MR_Word transform_hlds__pd_util__Cond_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 2)));
#line 564 "pd_util.m"
                      MR_Word transform_hlds__pd_util__Then_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 3)));
#line 564 "pd_util.m"
                      MR_Word transform_hlds__pd_util__Else_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 4)));
#line 564 "pd_util.m"
                      MR_Word transform_hlds__pd_util__CondInfo_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Cond_51, (MR_Integer) 1)));
#line 564 "pd_util.m"
                      MR_Word transform_hlds__pd_util__ThenInfo_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Then_52, (MR_Integer) 1)));
#line 564 "pd_util.m"
                      MR_Word transform_hlds__pd_util__ElseInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Else_53, (MR_Integer) 1)));
#line 564 "pd_util.m"
                      MR_Word transform_hlds__pd_util__CondDelta_60;
#line 564 "pd_util.m"
                      MR_Word transform_hlds__pd_util__ThenDelta_61;
#line 564 "pd_util.m"
                      MR_Word transform_hlds__pd_util__ElseDelta_62;
#line 564 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_83_83;
#line 564 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_84_84;
#line 564 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 1)));
#line 565 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Cond_51, (MR_Integer) 0)));
#line 566 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Then_52, (MR_Integer) 0)));
#line 567 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Else_53, (MR_Integer) 0)));

#line 568 "pd_util.m"
                      {
#line 568 "pd_util.m"
                        transform_hlds__pd_util__CondDelta_60 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__CondInfo_55);
                      }
#line 569 "pd_util.m"
                      {
#line 569 "pd_util.m"
                        transform_hlds__pd_util__ThenDelta_61 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__ThenInfo_57);
                      }
#line 570 "pd_util.m"
                      {
#line 570 "pd_util.m"
                        transform_hlds__pd_util__ElseDelta_62 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__ElseInfo_59);
                      }
#line 571 "pd_util.m"
                      {
#line 571 "pd_util.m"
                        transform_hlds__pd_util__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "pd_util.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_84_84, 0) = ((MR_Box) (transform_hlds__pd_util__ElseDelta_62));
#line 571 "pd_util.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 571 "pd_util.m"
                      }
#line 571 "pd_util.m"
                      {
#line 571 "pd_util.m"
                        transform_hlds__pd_util__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "pd_util.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_83_83, 0) = ((MR_Box) (transform_hlds__pd_util__ThenDelta_61));
#line 571 "pd_util.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_83_83, 1) = ((MR_Box) (transform_hlds__pd_util__V_84_84));
#line 571 "pd_util.m"
                      }
#line 571 "pd_util.m"
                      {
#line 571 "pd_util.m"
                        transform_hlds__pd_util__InstMapDeltas_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "pd_util.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__pd_util__InstMapDeltas_31, 0) = ((MR_Box) (transform_hlds__pd_util__CondDelta_60));
#line 571 "pd_util.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__pd_util__InstMapDeltas_31, 1) = ((MR_Box) (transform_hlds__pd_util__V_83_83));
#line 571 "pd_util.m"
                      }
#line 564 "pd_util.m"
                      transform_hlds__pd_util__succeeded = MR_TRUE;
#line 564 "pd_util.m"
                    }
#line 572 "pd_util.m"
                    break;
#line 572 "pd_util.m"
                }
#line 572 "pd_util.m"
                break;
#line 572 "pd_util.m"
            }
#line 551 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 546 "pd_util.m"
              {
#line 546 "pd_util.m"
                MR_Integer transform_hlds__pd_util__V_39_39;

#line 546 "pd_util.m"
                transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__HeadVar__3_3 == (MR_Integer) 0);
#line 546 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 546 "pd_util.m"
                  {
#line 548 "pd_util.m"
                    transform_hlds__pd_util__V_39_39 = (MR_Integer) 1;
#line 547 "pd_util.m"
                    {
#line 547 "pd_util.m"
                      transform_hlds__pd_util__succeeded = transform_hlds__pd_util__get_branch_vars_7_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__Goal_20, transform_hlds__pd_util__InstMapDeltas_31, transform_hlds__pd_util__InstMap_30, transform_hlds__pd_util__V_39_39, transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8, &transform_hlds__pd_util__STATE_VARIABLE_Vars_40_40);
                    }
#line 546 "pd_util.m"
                    if (transform_hlds__pd_util__succeeded)
#line 546 "pd_util.m"
                      {
#line 549 "pd_util.m"
                        {
#line 549 "pd_util.m"
                          transform_hlds__pd_util__get_left_vars_3_p_0(transform_hlds__pd_util__Goal_20, transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6, &transform_hlds__pd_util__STATE_VARIABLE_LeftVars_41_41);
                        }
#line 550 "pd_util.m"
                        transform_hlds__pd_util__STATE_VARIABLE_FoundBranch_42_42 = (MR_Integer) 1;
#line 550 "pd_util.m"
                        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 546 "pd_util.m"
                      }
#line 546 "pd_util.m"
                  }
#line 546 "pd_util.m"
              }
#line 551 "pd_util.m"
            else
#line 552 "pd_util.m"
              {
#line 552 "pd_util.m"
                MR_Word transform_hlds__pd_util__GoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 0)));
#line 552 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_43_43;
#line 552 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 1)));

#line 553 "pd_util.m"
                {
#line 553 "pd_util.m"
                  transform_hlds__pd_util__V_43_43 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__pd_util__GoalExpr_32);
                }
#line 553 "pd_util.m"
                transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__V_43_43 == (MR_Integer) 1);
#line 552 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 552 "pd_util.m"
                  {
#line 552 "pd_util.m"
                    transform_hlds__pd_util__STATE_VARIABLE_Vars_40_40 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8;
#line 552 "pd_util.m"
                    transform_hlds__pd_util__STATE_VARIABLE_LeftVars_41_41 = transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6;
#line 552 "pd_util.m"
                    transform_hlds__pd_util__STATE_VARIABLE_FoundBranch_42_42 = transform_hlds__pd_util__HeadVar__3_3;
#line 552 "pd_util.m"
                    transform_hlds__pd_util__succeeded = MR_TRUE;
#line 552 "pd_util.m"
                  }
#line 552 "pd_util.m"
              }
#line 538 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 555 "pd_util.m"
              {
#line 555 "pd_util.m"
                /* direct tailcall eliminated */
#line 555 "pd_util.m"
                {
#line 555 "pd_util.m"
                  MR_Word transform_hlds__pd_util__HeadVar__2__tmp_copy_2 = transform_hlds__pd_util__Goals_21;
#line 555 "pd_util.m"
                  MR_Word transform_hlds__pd_util__HeadVar__3__tmp_copy_3 = transform_hlds__pd_util__STATE_VARIABLE_FoundBranch_42_42;
#line 555 "pd_util.m"
                  MR_Word transform_hlds__pd_util__InstMap0__tmp_copy_5 = transform_hlds__pd_util__InstMap_30;
#line 555 "pd_util.m"
                  MR_Word transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0__tmp_copy_6 = transform_hlds__pd_util__STATE_VARIABLE_LeftVars_41_41;
#line 555 "pd_util.m"
                  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_8 = transform_hlds__pd_util__STATE_VARIABLE_Vars_40_40;

#line 555 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_8;
#line 555 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6 = transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0__tmp_copy_6;
#line 555 "pd_util.m"
                  transform_hlds__pd_util__InstMap0_5 = transform_hlds__pd_util__InstMap0__tmp_copy_5;
#line 555 "pd_util.m"
                  transform_hlds__pd_util__HeadVar__3_3 = transform_hlds__pd_util__HeadVar__3__tmp_copy_3;
#line 555 "pd_util.m"
                  transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__HeadVar__2__tmp_copy_2;
#line 555 "pd_util.m"
                }
#line 555 "pd_util.m"
                continue;
#line 555 "pd_util.m"
              }
#line 538 "pd_util.m"
          }
#line 536 "pd_util.m"
        return transform_hlds__pd_util__succeeded;
#line 536 "pd_util.m"
      }
#line 536 "pd_util.m"
      break;
#line 536 "pd_util.m"
    }
#line 531 "pd_util.m"
}

#line 1013 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0_1(
#line 1013 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 1013 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 1013 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2)
#line 1013 "pd_util.m"
{
#line 1013 "pd_util.m"
  {
#line 1013 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 1013 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
#line 1013 "pd_util.m"
    MR_Word transform_hlds__pd_util__conv0_HeadVar__3_31;

#line 1013 "pd_util.m"
    {
#line 1013 "pd_util.m"
      transform_hlds__pd_util__succeeded = transform_hlds__pd_util__IntroducedFrom__pred__goals_match__1013__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__pd_util__wrapper_arg_1), &transform_hlds__pd_util__conv0_HeadVar__3_31);
    }
#line 1013 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 1013 "pd_util.m"
      {
#line 1013 "pd_util.m"
        *transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__3_31));
#line 1013 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1013 "pd_util.m"
      }
#line 1013 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 1013 "pd_util.m"
  }
#line 1013 "pd_util.m"
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
#line 1004 "pd_util.m"
  {
#line 1004 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 1004 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeInfo_35_35;
#line 1004 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeCtorInfo_37_37;
#line 1004 "pd_util.m"
    MR_Word transform_hlds__pd_util__OldGoalList_17;
#line 1004 "pd_util.m"
    MR_Word transform_hlds__pd_util__NewGoalList_18;
#line 1004 "pd_util.m"
    MR_Word transform_hlds__pd_util__OldNewRenaming0_19;
#line 1004 "pd_util.m"
    MR_Word transform_hlds__pd_util__Search_20;
#line 1004 "pd_util.m"
    MR_Word transform_hlds__pd_util__NewArgs_23;
#line 1004 "pd_util.m"
    MR_Word transform_hlds__pd_util__NewGoalInfo_25;
#line 1004 "pd_util.m"
    MR_Word transform_hlds__pd_util__NewNonLocals_26;
#line 1004 "pd_util.m"
    MR_Word transform_hlds__pd_util__UnmatchedNonLocals_27;
#line 1004 "pd_util.m"
    MR_Word transform_hlds__pd_util__MatchingArgTypes_28;
#line 1004 "pd_util.m"
    MR_Word transform_hlds__pd_util__NewArgTypes_29;
#line 1004 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_32_32;
#line 1017 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_24_24;

#line 1005 "pd_util.m"
    {
#line 1005 "pd_util.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__OldGoal_10, &transform_hlds__pd_util__OldGoalList_17);
    }
#line 1006 "pd_util.m"
    {
#line 1006 "pd_util.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__NewGoal_13, &transform_hlds__pd_util__NewGoalList_18);
    }
#line 2093 "transform_hlds.pd_util.c"
    transform_hlds__pd_util__TypeInfo_35_35 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 1007 "pd_util.m"
    {
#line 1007 "pd_util.m"
      mercury__map__init_1_p_0(transform_hlds__pd_util__TypeInfo_35_35, transform_hlds__pd_util__TypeInfo_35_35, &transform_hlds__pd_util__OldNewRenaming0_19);
    }
#line 1008 "pd_util.m"
    {
#line 1008 "pd_util.m"
      transform_hlds__pd_util__succeeded = transform_hlds__pd_util__goals_match_2_4_p_0(transform_hlds__pd_util__OldGoalList_17, transform_hlds__pd_util__NewGoalList_18, transform_hlds__pd_util__OldNewRenaming0_19, transform_hlds__pd_util__OldNewRenaming_15);
    }
#line 1004 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 1004 "pd_util.m"
      {
#line 1013 "pd_util.m"
        {
#line 1013 "pd_util.m"
          transform_hlds__pd_util__Search_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1013 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Search_20, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[3]));
#line 1013 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Search_20, 1) = ((MR_Box) (transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0_1));
#line 1013 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Search_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1013 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Search_20, 3) = ((MR_Box) (*transform_hlds__pd_util__OldNewRenaming_15));
#line 1013 "pd_util.m"
        }
#line 1016 "pd_util.m"
        {
#line 1016 "pd_util.m"
          transform_hlds__pd_util__succeeded = mercury__list__map_3_p_2(transform_hlds__pd_util__TypeInfo_35_35, transform_hlds__pd_util__TypeInfo_35_35, transform_hlds__pd_util__Search_20, transform_hlds__pd_util__OldArgs_11, &transform_hlds__pd_util__NewArgs_23);
        }
#line 1004 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 1004 "pd_util.m"
          {
#line 1017 "pd_util.m"
            transform_hlds__pd_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewGoal_13, (MR_Integer) 0)));
#line 1017 "pd_util.m"
            transform_hlds__pd_util__NewGoalInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewGoal_13, (MR_Integer) 1)));
#line 1018 "pd_util.m"
            {
#line 1018 "pd_util.m"
              transform_hlds__pd_util__NewNonLocals_26 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_util__NewGoalInfo_25);
            }
#line 2141 "transform_hlds.pd_util.c"
            transform_hlds__pd_util__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1019 "pd_util.m"
            {
#line 1019 "pd_util.m"
              parse_tree__set_of_var__delete_list_3_p_0(transform_hlds__pd_util__TypeCtorInfo_37_37, transform_hlds__pd_util__NewArgs_23, transform_hlds__pd_util__NewNonLocals_26, &transform_hlds__pd_util__UnmatchedNonLocals_27);
            }
#line 1020 "pd_util.m"
            {
#line 1020 "pd_util.m"
              transform_hlds__pd_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__pd_util__TypeCtorInfo_37_37, transform_hlds__pd_util__UnmatchedNonLocals_27);
            }
#line 1004 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 1004 "pd_util.m"
              {
#line 1024 "pd_util.m"
                transform_hlds__pd_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1023 "pd_util.m"
                {
#line 1023 "pd_util.m"
                  transform_hlds__pd_util__collect_matching_arg_types_5_p_0(transform_hlds__pd_util__OldArgs_11, transform_hlds__pd_util__OldArgTypes_12, *transform_hlds__pd_util__OldNewRenaming_15, transform_hlds__pd_util__V_32_32, &transform_hlds__pd_util__MatchingArgTypes_28);
                }
#line 1025 "pd_util.m"
                {
#line 1025 "pd_util.m"
                  parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__pd_util__NewVarTypes_14, transform_hlds__pd_util__NewArgs_23, &transform_hlds__pd_util__NewArgTypes_29);
                }
#line 1026 "pd_util.m"
                {
#line 1026 "pd_util.m"
                  return transform_hlds__pd_util__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(transform_hlds__pd_util__MatchingArgTypes_28, transform_hlds__pd_util__NewArgTypes_29, transform_hlds__pd_util__TypeSubn_16);
                }
#line 1004 "pd_util.m"
              }
#line 1004 "pd_util.m"
          }
#line 1004 "pd_util.m"
      }
#line 1004 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 1004 "pd_util.m"
  }
#line 133 "pd_util.m"
}

#line 1103 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1103__1_3_p_0(
#line 1103 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_93,
#line 1103 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_94,
#line 1103 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__3_95)
#line 1103 "pd_util.m"
{
#line 1103 "pd_util.m"
  {
#line 1103 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 1103 "pd_util.m"
    MR_Word transform_hlds__pd_util__Key_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_93, (MR_Integer) 0)));
#line 1103 "pd_util.m"
    MR_Word transform_hlds__pd_util__Value_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_93, (MR_Integer) 1)));
#line 1109 "pd_util.m"
    MR_Word transform_hlds__pd_util__Value0_76;
#line 1106 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeInfo_115_115 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 1106 "pd_util.m"
    MR_Box transform_hlds__pd_util__conv0_Value0_76;

#line 1106 "pd_util.m"
    {
#line 1106 "pd_util.m"
      transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_util__TypeInfo_115_115, transform_hlds__pd_util__TypeInfo_115_115, transform_hlds__pd_util__HeadVar__2_94, ((MR_Box) (transform_hlds__pd_util__Key_74)), &transform_hlds__pd_util__conv0_Value0_76);
    }
#line 1106 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 1106 "pd_util.m"
      {
#line 1106 "pd_util.m"
        transform_hlds__pd_util__Value0_76 = ((MR_Word) transform_hlds__pd_util__conv0_Value0_76);
#line 1106 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1106 "pd_util.m"
      }
#line 1109 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 1107 "pd_util.m"
      {
#line 1107 "pd_util.m"
        {
#line 1107 "pd_util.m"
          transform_hlds__pd_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], ((MR_Box) (transform_hlds__pd_util__Value_75)), ((MR_Box) (transform_hlds__pd_util__Value0_76)));
        }
#line 1107 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 1107 "pd_util.m"
          {
#line 1108 "pd_util.m"
            *transform_hlds__pd_util__HeadVar__3_95 = transform_hlds__pd_util__HeadVar__2_94;
#line 1108 "pd_util.m"
            transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1107 "pd_util.m"
          }
#line 1107 "pd_util.m"
      }
#line 1109 "pd_util.m"
    else
#line 1110 "pd_util.m"
      {
#line 1110 "pd_util.m"
        MR_Word transform_hlds__pd_util__TypeInfo_116_116 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];

#line 1110 "pd_util.m"
        {
#line 1110 "pd_util.m"
          mercury__map__det_insert_4_p_0(transform_hlds__pd_util__TypeInfo_116_116, transform_hlds__pd_util__TypeInfo_116_116, ((MR_Box) (transform_hlds__pd_util__Key_74)), ((MR_Box) (transform_hlds__pd_util__Value_75)), transform_hlds__pd_util__HeadVar__2_94, transform_hlds__pd_util__HeadVar__3_95);
        }
#line 1110 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1110 "pd_util.m"
      }
#line 1103 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 1103 "pd_util.m"
  }
#line 1103 "pd_util.m"
}

#line 626 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__626__1_7_p_0(
#line 626 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 626 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_4,
#line 626 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_5,
#line 626 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMapDelta_17,
#line 626 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__5_43,
#line 626 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__6_44,
#line 626 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__7_45)
#line 626 "pd_util.m"
{
#line 626 "pd_util.m"
  {
#line 626 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 614 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeCtorInfo_73_73;
#line 614 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarInst_26;
#line 614 "pd_util.m"
    MR_Word transform_hlds__pd_util__DeltaVarInst_27;
#line 614 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_46_46;
#line 614 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_47_47;
#line 614 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_71_71;
#line 614 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_78_78;
#line 614 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_79_79;
#line 614 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_80_80;
#line 617 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_28_28;
#line 618 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeCtorInfo_74_74;
#line 618 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_48_48;
#line 618 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_49_49;
#line 618 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_72_72;
#line 618 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_88_88;
#line 618 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_89_89;
#line 618 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_90_90;
#line 618 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_29_29;

#line 614 "pd_util.m"
    {
#line 614 "pd_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_util__InstMap_4, transform_hlds__pd_util__HeadVar__5_43, &transform_hlds__pd_util__VarInst_26);
    }
#line 615 "pd_util.m"
    {
#line 615 "pd_util.m"
      transform_hlds__pd_util__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__pd_util__InstMapDelta_17, transform_hlds__pd_util__HeadVar__5_43, &transform_hlds__pd_util__DeltaVarInst_27);
    }
#line 614 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 614 "pd_util.m"
      {
#line 617 "pd_util.m"
        transform_hlds__pd_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 617 "pd_util.m"
        {
#line 617 "pd_util.m"
          transform_hlds__pd_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "pd_util.m"
          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_46_46, 0) = NULL;
#line 617 "pd_util.m"
          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_46_46, 1) = ((MR_Box) (transform_hlds__pd_util__V_47_47));
#line 617 "pd_util.m"
        }
#line 617 "pd_util.m"
        {
#line 617 "pd_util.m"
          transform_hlds__pd_util__succeeded = check_hlds__inst_match__inst_is_bound_to_functors_3_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__DeltaVarInst_27, &transform_hlds__pd_util__V_71_71);
        }
#line 614 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 614 "pd_util.m"
          {
#line 2367 "transform_hlds.pd_util.c"
            transform_hlds__pd_util__TypeCtorInfo_73_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 617 "pd_util.m"
            transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 617 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 617 "pd_util.m"
              {
#line 617 "pd_util.m"
                transform_hlds__pd_util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_71_71, (MR_Integer) 0)));
#line 617 "pd_util.m"
                transform_hlds__pd_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_71_71, (MR_Integer) 1)));
#line 617 "pd_util.m"
                (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_46_46, (MR_Integer) 0)) = ((MR_Box) (transform_hlds__pd_util__V_79_79));
#line 617 "pd_util.m"
                transform_hlds__pd_util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_46_46, (MR_Integer) 1)));
#line 617 "pd_util.m"
                {
#line 617 "pd_util.m"
                  transform_hlds__pd_util__succeeded = mercury__list____Unify____list_1_0(transform_hlds__pd_util__TypeCtorInfo_73_73, transform_hlds__pd_util__V_78_78, transform_hlds__pd_util__V_80_80);
                }
#line 614 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 614 "pd_util.m"
                  {
#line 618 "pd_util.m"
                    transform_hlds__pd_util__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "pd_util.m"
                    {
#line 618 "pd_util.m"
                      transform_hlds__pd_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "pd_util.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_48_48, 0) = NULL;
#line 618 "pd_util.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_48_48, 1) = ((MR_Box) (transform_hlds__pd_util__V_49_49));
#line 618 "pd_util.m"
                    }
#line 618 "pd_util.m"
                    {
#line 618 "pd_util.m"
                      transform_hlds__pd_util__succeeded = check_hlds__inst_match__inst_is_bound_to_functors_3_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__VarInst_26, &transform_hlds__pd_util__V_72_72);
                    }
#line 618 "pd_util.m"
                    if (transform_hlds__pd_util__succeeded)
#line 618 "pd_util.m"
                      {
#line 2413 "transform_hlds.pd_util.c"
                        transform_hlds__pd_util__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 617 "pd_util.m"
                        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 617 "pd_util.m"
                        if (transform_hlds__pd_util__succeeded)
#line 617 "pd_util.m"
                          {
#line 617 "pd_util.m"
                            transform_hlds__pd_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_72_72, (MR_Integer) 0)));
#line 617 "pd_util.m"
                            transform_hlds__pd_util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_72_72, (MR_Integer) 1)));
#line 617 "pd_util.m"
                            (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_48_48, (MR_Integer) 0)) = ((MR_Box) (transform_hlds__pd_util__V_89_89));
#line 617 "pd_util.m"
                            transform_hlds__pd_util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_48_48, (MR_Integer) 1)));
#line 617 "pd_util.m"
                            {
#line 617 "pd_util.m"
                              transform_hlds__pd_util__succeeded = mercury__list____Unify____list_1_0(transform_hlds__pd_util__TypeCtorInfo_74_74, transform_hlds__pd_util__V_88_88, transform_hlds__pd_util__V_90_90);
                            }
#line 617 "pd_util.m"
                          }
#line 618 "pd_util.m"
                      }
#line 618 "pd_util.m"
                    transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 614 "pd_util.m"
                  }
#line 617 "pd_util.m"
              }
#line 614 "pd_util.m"
          }
#line 614 "pd_util.m"
      }
#line 626 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 624 "pd_util.m"
      {
#line 624 "pd_util.m"
        MR_Word transform_hlds__pd_util__Set_31;
#line 622 "pd_util.m"
        MR_Word transform_hlds__pd_util__Set0_30;
#line 620 "pd_util.m"
        MR_Box transform_hlds__pd_util__conv0_Set0_30;

#line 620 "pd_util.m"
        {
#line 620 "pd_util.m"
          transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__HeadVar__6_44, ((MR_Box) (transform_hlds__pd_util__HeadVar__5_43)), &transform_hlds__pd_util__conv0_Set0_30);
        }
#line 620 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 620 "pd_util.m"
          {
#line 620 "pd_util.m"
            transform_hlds__pd_util__Set0_30 = ((MR_Word) transform_hlds__pd_util__conv0_Set0_30);
#line 620 "pd_util.m"
            transform_hlds__pd_util__succeeded = MR_TRUE;
#line 620 "pd_util.m"
          }
#line 622 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 621 "pd_util.m"
          {
#line 621 "pd_util.m"
            {
#line 621 "pd_util.m"
              mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_5)), transform_hlds__pd_util__Set0_30, &transform_hlds__pd_util__Set_31);
            }
#line 621 "pd_util.m"
          }
#line 622 "pd_util.m"
        else
#line 623 "pd_util.m"
          {
#line 623 "pd_util.m"
            {
#line 623 "pd_util.m"
              transform_hlds__pd_util__Set_31 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_5)));
            }
#line 623 "pd_util.m"
          }
#line 625 "pd_util.m"
        {
#line 625 "pd_util.m"
          mercury__map__set_4_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_util__HeadVar__5_43)), ((MR_Box) (transform_hlds__pd_util__Set_31)), transform_hlds__pd_util__HeadVar__6_44, transform_hlds__pd_util__HeadVar__7_45);
#line 625 "pd_util.m"
          return;
        }
#line 624 "pd_util.m"
      }
#line 626 "pd_util.m"
    else
#line 627 "pd_util.m"
      *transform_hlds__pd_util__HeadVar__7_45 = transform_hlds__pd_util__HeadVar__6_44;
#line 626 "pd_util.m"
  }
#line 626 "pd_util.m"
}

#line 574 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__574__1_2_p_0(
#line 574 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_37,
#line 574 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__2_38)
#line 574 "pd_util.m"
{
#line 574 "pd_util.m"
  {
#line 574 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 574 "pd_util.m"
    MR_Word transform_hlds__pd_util__CaseInfo_29;
#line 574 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_37, (MR_Integer) 2)));
#line 576 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_37, (MR_Integer) 0)));
#line 576 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_37, (MR_Integer) 1)));
#line 576 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_39_39, (MR_Integer) 0)));

#line 576 "pd_util.m"
    transform_hlds__pd_util__CaseInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_39_39, (MR_Integer) 1)));
#line 577 "pd_util.m"
    {
#line 577 "pd_util.m"
      *transform_hlds__pd_util__HeadVar__2_38 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__CaseInfo_29);
    }
#line 574 "pd_util.m"
  }
#line 574 "pd_util.m"
}

#line 582 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__582__1_2_p_0(
#line 582 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_35,
#line 582 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__2_36)
#line 582 "pd_util.m"
{
#line 582 "pd_util.m"
  {
#line 582 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 582 "pd_util.m"
    MR_Word transform_hlds__pd_util__DisjInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_35, (MR_Integer) 1)));
#line 584 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_35, (MR_Integer) 0)));

#line 585 "pd_util.m"
    {
#line 585 "pd_util.m"
      *transform_hlds__pd_util__HeadVar__2_36 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__DisjInfo_34);
    }
#line 582 "pd_util.m"
  }
#line 582 "pd_util.m"
}

#line 382 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__rerun_det_analysis__382__1_2_p_0(
#line 382 "pd_util.m"
  MR_Word transform_hlds__pd_util__ContainsErrors_29,
#line 382 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_42)
#line 382 "pd_util.m"
{
#line 382 "pd_util.m"
  {
#line 382 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__ContainsErrors_29 == transform_hlds__pd_util__HeadVar__2_42);

#line 382 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 382 "pd_util.m"
  }
#line 382 "pd_util.m"
}

#line 1013 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goals_match__1013__1_3_p_0(
#line 1013 "pd_util.m"
  MR_Word transform_hlds__pd_util__OldNewRenaming_15,
#line 1013 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_30,
#line 1013 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__3_31)
#line 1013 "pd_util.m"
{
#line 1013 "pd_util.m"
  {
#line 1013 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 1013 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeInfo_36_36 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 1014 "pd_util.m"
    MR_Box transform_hlds__pd_util__conv0_HeadVar__3_31;

#line 1014 "pd_util.m"
    {
#line 1014 "pd_util.m"
      transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_util__TypeInfo_36_36, transform_hlds__pd_util__TypeInfo_36_36, transform_hlds__pd_util__OldNewRenaming_15, ((MR_Box) (transform_hlds__pd_util__HeadVar__2_30)), &transform_hlds__pd_util__conv0_HeadVar__3_31);
    }
#line 1014 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 1014 "pd_util.m"
      {
#line 1014 "pd_util.m"
        *transform_hlds__pd_util__HeadVar__3_31 = ((MR_Word) transform_hlds__pd_util__conv0_HeadVar__3_31);
#line 1014 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1014 "pd_util.m"
      }
#line 1013 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 1013 "pd_util.m"
  }
#line 1013 "pd_util.m"
}

#line 397 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__397__1_3_p_0(
#line 397 "pd_util.m"
  MR_Word transform_hlds__pd_util__Args_5,
#line 397 "pd_util.m"
  MR_Integer transform_hlds__pd_util__HeadVar__2_27,
#line 397 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__3_28)
#line 397 "pd_util.m"
{
#line 397 "pd_util.m"
  {
#line 397 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 397 "pd_util.m"
    MR_Box transform_hlds__pd_util__conv0_HeadVar__3_28;

#line 397 "pd_util.m"
    {
#line 397 "pd_util.m"
      mercury__list__det_index1_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], transform_hlds__pd_util__Args_5, transform_hlds__pd_util__HeadVar__2_27, &transform_hlds__pd_util__conv0_HeadVar__3_28);
    }
#line 397 "pd_util.m"
    *transform_hlds__pd_util__HeadVar__3_28 = ((MR_Word) transform_hlds__pd_util__conv0_HeadVar__3_28);
#line 397 "pd_util.m"
  }
#line 397 "pd_util.m"
}

#line 393 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__393__1_3_p_0(
#line 393 "pd_util.m"
  MR_Word transform_hlds__pd_util__Args_5,
#line 393 "pd_util.m"
  MR_Integer transform_hlds__pd_util__HeadVar__2_24,
#line 393 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__3_25)
#line 393 "pd_util.m"
{
#line 393 "pd_util.m"
  {
#line 393 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 393 "pd_util.m"
    MR_Box transform_hlds__pd_util__conv0_HeadVar__3_25;

#line 393 "pd_util.m"
    {
#line 393 "pd_util.m"
      mercury__list__det_index1_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], transform_hlds__pd_util__Args_5, transform_hlds__pd_util__HeadVar__2_24, &transform_hlds__pd_util__conv0_HeadVar__3_25);
    }
#line 393 "pd_util.m"
    *transform_hlds__pd_util__HeadVar__3_25 = ((MR_Word) transform_hlds__pd_util__conv0_HeadVar__3_25);
#line 393 "pd_util.m"
  }
#line 393 "pd_util.m"
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

#line 413 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util____Compare____pd_var_info_0_0(
#line 413 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__1_1,
#line 413 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 413 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3)
#line 413 "pd_util.m"
{
#line 413 "pd_util.m"
  {
#line 413 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 413 "pd_util.m"
    MR_Word transform_hlds__pd_util__Cast_HeadVar1_4 = transform_hlds__pd_util__HeadVar__2_2;
#line 413 "pd_util.m"
    MR_Word transform_hlds__pd_util__Cast_HeadVar2_5 = transform_hlds__pd_util__HeadVar__3_3;

#line 413 "pd_util.m"
    {
#line 413 "pd_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_2[1], transform_hlds__pd_util__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar2_5)));
#line 413 "pd_util.m"
      return;
    }
#line 413 "pd_util.m"
  }
#line 413 "pd_util.m"
}

#line 413 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____pd_var_info_0_0(
#line 413 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 413 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2)
#line 413 "pd_util.m"
{
#line 413 "pd_util.m"
  {
#line 413 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 413 "pd_util.m"
    MR_Word transform_hlds__pd_util__Cast_HeadVar1_3 = transform_hlds__pd_util__HeadVar__1_1;
#line 413 "pd_util.m"
    MR_Word transform_hlds__pd_util__Cast_HeadVar2_4 = transform_hlds__pd_util__HeadVar__2_2;

#line 413 "pd_util.m"
    {
#line 413 "pd_util.m"
      return transform_hlds__pd_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar2_4)));
    }
#line 413 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 413 "pd_util.m"
  }
#line 413 "pd_util.m"
}

#line 813 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util____Compare____expansions_0_0(
#line 813 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__1_1,
#line 813 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 813 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3)
#line 813 "pd_util.m"
{
#line 813 "pd_util.m"
  {
#line 813 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 813 "pd_util.m"
    MR_Word transform_hlds__pd_util__Cast_HeadVar1_4 = transform_hlds__pd_util__HeadVar__2_2;
#line 813 "pd_util.m"
    MR_Word transform_hlds__pd_util__Cast_HeadVar2_5 = transform_hlds__pd_util__HeadVar__3_3;

#line 813 "pd_util.m"
    {
#line 813 "pd_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[3], transform_hlds__pd_util__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar2_5)));
#line 813 "pd_util.m"
      return;
    }
#line 813 "pd_util.m"
  }
#line 813 "pd_util.m"
}

#line 813 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____expansions_0_0(
#line 813 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 813 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2)
#line 813 "pd_util.m"
{
#line 813 "pd_util.m"
  {
#line 813 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 813 "pd_util.m"
    MR_Word transform_hlds__pd_util__Cast_HeadVar1_3 = transform_hlds__pd_util__HeadVar__1_1;
#line 813 "pd_util.m"
    MR_Word transform_hlds__pd_util__Cast_HeadVar2_4 = transform_hlds__pd_util__HeadVar__2_2;

#line 813 "pd_util.m"
    {
#line 813 "pd_util.m"
      return transform_hlds__pd_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[3], ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar2_4)));
    }
#line 813 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 813 "pd_util.m"
  }
#line 813 "pd_util.m"
}

#line 1133 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__match_generic_call_2_p_0(
#line 1133 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 1133 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2)
#line 1133 "pd_util.m"
{
#line 1135 "pd_util.m"
  {
#line 1135 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;

#line 1135 "pd_util.m"
    if (((MR_tag((MR_Word) transform_hlds__pd_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1137 "pd_util.m"
      {
#line 1137 "pd_util.m"
        MR_Integer transform_hlds__pd_util__MethodNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1137 "pd_util.m"
        MR_Word transform_hlds__pd_util__ClassId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1137 "pd_util.m"
        MR_Word transform_hlds__pd_util__CallId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1137 "pd_util.m"
        MR_Integer transform_hlds__pd_util__V_16_16;
#line 1137 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_17_17;
#line 1137 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_18_18;
#line 1137 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1138 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_12_12;

#line 1138 "pd_util.m"
        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1138 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 1138 "pd_util.m"
          {
#line 1138 "pd_util.m"
            transform_hlds__pd_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1138 "pd_util.m"
            transform_hlds__pd_util__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1138 "pd_util.m"
            transform_hlds__pd_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1138 "pd_util.m"
            transform_hlds__pd_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 3)));
#line 1138 "pd_util.m"
            transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__MethodNum_9 == transform_hlds__pd_util__V_16_16);
#line 1137 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 1137 "pd_util.m"
              {
#line 1138 "pd_util.m"
                {
#line 1138 "pd_util.m"
                  transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____class_id_0_0(transform_hlds__pd_util__ClassId_10, transform_hlds__pd_util__V_17_17);
                }
#line 1137 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 1138 "pd_util.m"
                  {
#line 1138 "pd_util.m"
                    return transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(transform_hlds__pd_util__CallId_11, transform_hlds__pd_util__V_18_18);
                  }
#line 1137 "pd_util.m"
              }
#line 1138 "pd_util.m"
          }
#line 1137 "pd_util.m"
      }
#line 1135 "pd_util.m"
    else
#line 1135 "pd_util.m"
    if (((MR_tag((MR_Word) transform_hlds__pd_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1135 "pd_util.m"
      {
#line 1135 "pd_util.m"
        MR_Word transform_hlds__pd_util__Purity_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1135 "pd_util.m"
        MR_Word transform_hlds__pd_util__PredOrFunc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1135 "pd_util.m"
        MR_Integer transform_hlds__pd_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1135 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_13_13;
#line 1135 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_14_14;
#line 1135 "pd_util.m"
        MR_Integer transform_hlds__pd_util__V_15_15;
#line 1135 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1136 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_7_7;

#line 1136 "pd_util.m"
        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1136 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 1136 "pd_util.m"
          {
#line 1136 "pd_util.m"
            transform_hlds__pd_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1136 "pd_util.m"
            transform_hlds__pd_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1136 "pd_util.m"
            transform_hlds__pd_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1136 "pd_util.m"
            transform_hlds__pd_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 3)));
#line 1136 "pd_util.m"
            transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Purity_4 == transform_hlds__pd_util__V_13_13);
#line 1135 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 1135 "pd_util.m"
              {
#line 1136 "pd_util.m"
                transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__PredOrFunc_5 == transform_hlds__pd_util__V_14_14);
#line 1135 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 1136 "pd_util.m"
                  transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Arity_6 == transform_hlds__pd_util__V_15_15);
#line 1135 "pd_util.m"
              }
#line 1136 "pd_util.m"
          }
#line 1135 "pd_util.m"
      }
#line 1135 "pd_util.m"
    else
#line 1135 "pd_util.m"
      transform_hlds__pd_util__succeeded = MR_FALSE;
#line 1135 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 1135 "pd_util.m"
  }
#line 1133 "pd_util.m"
}

#line 1103 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_2_4_p_0_1(
#line 1103 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 1103 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 1103 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
#line 1103 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_3)
#line 1103 "pd_util.m"
{
#line 1103 "pd_util.m"
  {
#line 1103 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 1103 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
#line 1103 "pd_util.m"
    MR_Word transform_hlds__pd_util__conv0_HeadVar__3_95;

#line 1103 "pd_util.m"
    {
#line 1103 "pd_util.m"
      transform_hlds__pd_util__succeeded = transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1103__1_3_p_0(((MR_Word) transform_hlds__pd_util__wrapper_arg_1), ((MR_Word) transform_hlds__pd_util__wrapper_arg_2), &transform_hlds__pd_util__conv0_HeadVar__3_95);
    }
#line 1103 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 1103 "pd_util.m"
      {
#line 1103 "pd_util.m"
        *transform_hlds__pd_util__wrapper_arg_3 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__3_95));
#line 1103 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1103 "pd_util.m"
      }
#line 1103 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 1103 "pd_util.m"
  }
#line 1103 "pd_util.m"
}

#line 1050 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_2_4_p_0(
#line 1050 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 1050 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 1050 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3,
#line 1050 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_4)
#line 1050 "pd_util.m"
{
#line 1053 "pd_util.m"
  while (MR_TRUE)
#line 1053 "pd_util.m"
    {
#line 1053 "pd_util.m"
      /* tailcall optimized into a loop */
#line 1053 "pd_util.m"
      {
#line 1053 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 1053 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1053 "pd_util.m"
          {
#line 1053 "pd_util.m"
            transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1053 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 1053 "pd_util.m"
              {
#line 1053 "pd_util.m"
                *transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_4 = transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3;
#line 1053 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1053 "pd_util.m"
              }
#line 1053 "pd_util.m"
          }
#line 1053 "pd_util.m"
        else
#line 1054 "pd_util.m"
          {
#line 1054 "pd_util.m"
            MR_Word transform_hlds__pd_util__OldGoal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1054 "pd_util.m"
            MR_Word transform_hlds__pd_util__OldGoals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1054 "pd_util.m"
            MR_Word transform_hlds__pd_util__NewGoal_10;
#line 1054 "pd_util.m"
            MR_Word transform_hlds__pd_util__NewGoals_11;
#line 1054 "pd_util.m"
            MR_Word transform_hlds__pd_util__OldGoalExpr_13;
#line 1054 "pd_util.m"
            MR_Word transform_hlds__pd_util__NewGoalExpr_15;
#line 1054 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_96_96;
#line 1055 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_14_14;
#line 1056 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_16_16;
#line 1114 "pd_util.m"
            MR_Word transform_hlds__pd_util__OldArgs_31;
#line 1114 "pd_util.m"
            MR_Word transform_hlds__pd_util__NewArgs_32;

#line 1054 "pd_util.m"
            transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1054 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 1054 "pd_util.m"
              {
#line 1054 "pd_util.m"
                transform_hlds__pd_util__NewGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1054 "pd_util.m"
                transform_hlds__pd_util__NewGoals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1055 "pd_util.m"
                transform_hlds__pd_util__OldGoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldGoal_8, (MR_Integer) 0)));
#line 1055 "pd_util.m"
                transform_hlds__pd_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldGoal_8, (MR_Integer) 1)));
#line 1056 "pd_util.m"
                transform_hlds__pd_util__NewGoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewGoal_10, (MR_Integer) 0)));
#line 1056 "pd_util.m"
                transform_hlds__pd_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewGoal_10, (MR_Integer) 1)));
#line 1086 "pd_util.m"
#line 1086 "pd_util.m"
                switch (MR_tag((MR_Word) transform_hlds__pd_util__OldGoalExpr_13)) {
#line 1086 "pd_util.m"
                  default:
#line 1086 "pd_util.m"
                    transform_hlds__pd_util__succeeded = MR_FALSE;
#line 1086 "pd_util.m"
                    break;
#line 1086 "pd_util.m"
                  case (MR_Integer) 1:
#line 1059 "pd_util.m"
                    {
#line 1059 "pd_util.m"
                      MR_Word transform_hlds__pd_util__OldUnification_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 3)));
#line 1059 "pd_util.m"
                      MR_Word transform_hlds__pd_util__NewUnification_25;
#line 1059 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 0)));
#line 1059 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 1)));
#line 1059 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 2)));
#line 1059 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 4)));
#line 1060 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_22_22;
#line 1060 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_23_23;
#line 1060 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_24_24;
#line 1060 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_26_26;

#line 1060 "pd_util.m"
                      transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewGoalExpr_15)) == (MR_mktag((MR_Integer) 1)));
#line 1060 "pd_util.m"
                      if (transform_hlds__pd_util__succeeded)
#line 1060 "pd_util.m"
                        {
#line 1060 "pd_util.m"
                          transform_hlds__pd_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 0)));
#line 1060 "pd_util.m"
                          transform_hlds__pd_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 1)));
#line 1060 "pd_util.m"
                          transform_hlds__pd_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 2)));
#line 1060 "pd_util.m"
                          transform_hlds__pd_util__NewUnification_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 3)));
#line 1060 "pd_util.m"
                          transform_hlds__pd_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 4)));
#line 1066 "pd_util.m"
#line 1066 "pd_util.m"
                          switch (MR_tag((MR_Word) transform_hlds__pd_util__OldUnification_20)) {
#line 1066 "pd_util.m"
                            default:
#line 1066 "pd_util.m"
                              transform_hlds__pd_util__succeeded = MR_FALSE;
#line 1066 "pd_util.m"
                              break;
#line 1066 "pd_util.m"
                            case (MR_Integer) 0:
#line 1073 "pd_util.m"
                              {
#line 1073 "pd_util.m"
                                MR_Word transform_hlds__pd_util__OldVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 0)));
#line 1073 "pd_util.m"
                                MR_Word transform_hlds__pd_util__ConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 1)));
#line 1073 "pd_util.m"
                                MR_Word transform_hlds__pd_util__OldArgs1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 2)));
#line 1073 "pd_util.m"
                                MR_Word transform_hlds__pd_util__NewVar_40;
#line 1073 "pd_util.m"
                                MR_Word transform_hlds__pd_util__NewArgs1_41;
#line 1073 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_119_119;
#line 1072 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 3)));
#line 1072 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 4)));
#line 1072 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 5)));
#line 1072 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 6)));
#line 1074 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_42_42;
#line 1074 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_43_43;
#line 1074 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_44_44;
#line 1074 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_45_45;

#line 1074 "pd_util.m"
                                transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewUnification_25)) == (MR_mktag((MR_Integer) 0)));
#line 1074 "pd_util.m"
                                if (transform_hlds__pd_util__succeeded)
#line 1074 "pd_util.m"
                                  {
#line 1074 "pd_util.m"
                                    transform_hlds__pd_util__NewVar_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 0)));
#line 1074 "pd_util.m"
                                    transform_hlds__pd_util__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 1)));
#line 1074 "pd_util.m"
                                    transform_hlds__pd_util__NewArgs1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 2)));
#line 1074 "pd_util.m"
                                    transform_hlds__pd_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 3)));
#line 1074 "pd_util.m"
                                    transform_hlds__pd_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 4)));
#line 1074 "pd_util.m"
                                    transform_hlds__pd_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 5)));
#line 1074 "pd_util.m"
                                    transform_hlds__pd_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 6)));
#line 1074 "pd_util.m"
                                    {
#line 1074 "pd_util.m"
                                      transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__pd_util__ConsId_34, transform_hlds__pd_util__V_119_119);
                                    }
#line 1073 "pd_util.m"
                                    if (transform_hlds__pd_util__succeeded)
#line 1073 "pd_util.m"
                                      {
#line 1076 "pd_util.m"
                                        {
#line 1076 "pd_util.m"
                                          transform_hlds__pd_util__OldArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1076 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar_33));
#line 1076 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 1) = ((MR_Box) (transform_hlds__pd_util__OldArgs1_35));
#line 1076 "pd_util.m"
                                        }
#line 1077 "pd_util.m"
                                        {
#line 1077 "pd_util.m"
                                          transform_hlds__pd_util__NewArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar_40));
#line 1077 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 1) = ((MR_Box) (transform_hlds__pd_util__NewArgs1_41));
#line 1077 "pd_util.m"
                                        }
#line 1077 "pd_util.m"
                                        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1073 "pd_util.m"
                                      }
#line 1074 "pd_util.m"
                                  }
#line 1073 "pd_util.m"
                              }
#line 1066 "pd_util.m"
                              break;
#line 1066 "pd_util.m"
                            case (MR_Integer) 1:
#line 1080 "pd_util.m"
                              {
#line 1080 "pd_util.m"
                                MR_Word transform_hlds__pd_util__OldVar_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 0)));
#line 1080 "pd_util.m"
                                MR_Word transform_hlds__pd_util__ConsId_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 1)));
#line 1080 "pd_util.m"
                                MR_Word transform_hlds__pd_util__OldArgs1_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 2)));
#line 1080 "pd_util.m"
                                MR_Word transform_hlds__pd_util__NewVar_106;
#line 1080 "pd_util.m"
                                MR_Word transform_hlds__pd_util__NewArgs1_107;
#line 1080 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_120_120;
#line 1079 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 3)));
#line 1079 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 4)));
#line 1079 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 5)));
#line 1081 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_49_49;
#line 1081 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_50_50;
#line 1081 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_51_51;

#line 1081 "pd_util.m"
                                transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewUnification_25)) == (MR_mktag((MR_Integer) 1)));
#line 1081 "pd_util.m"
                                if (transform_hlds__pd_util__succeeded)
#line 1081 "pd_util.m"
                                  {
#line 1081 "pd_util.m"
                                    transform_hlds__pd_util__NewVar_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 0)));
#line 1081 "pd_util.m"
                                    transform_hlds__pd_util__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 1)));
#line 1081 "pd_util.m"
                                    transform_hlds__pd_util__NewArgs1_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 2)));
#line 1081 "pd_util.m"
                                    transform_hlds__pd_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 3)));
#line 1081 "pd_util.m"
                                    transform_hlds__pd_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 4)));
#line 1081 "pd_util.m"
                                    transform_hlds__pd_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 5)));
#line 1081 "pd_util.m"
                                    {
#line 1081 "pd_util.m"
                                      transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__pd_util__ConsId_104, transform_hlds__pd_util__V_120_120);
                                    }
#line 1080 "pd_util.m"
                                    if (transform_hlds__pd_util__succeeded)
#line 1080 "pd_util.m"
                                      {
#line 1083 "pd_util.m"
                                        {
#line 1083 "pd_util.m"
                                          transform_hlds__pd_util__OldArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1083 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar_103));
#line 1083 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 1) = ((MR_Box) (transform_hlds__pd_util__OldArgs1_105));
#line 1083 "pd_util.m"
                                        }
#line 1084 "pd_util.m"
                                        {
#line 1084 "pd_util.m"
                                          transform_hlds__pd_util__NewArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar_106));
#line 1084 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 1) = ((MR_Box) (transform_hlds__pd_util__NewArgs1_107));
#line 1084 "pd_util.m"
                                        }
#line 1084 "pd_util.m"
                                        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1080 "pd_util.m"
                                      }
#line 1081 "pd_util.m"
                                  }
#line 1080 "pd_util.m"
                              }
#line 1066 "pd_util.m"
                              break;
#line 1066 "pd_util.m"
                            case (MR_Integer) 2:
#line 1067 "pd_util.m"
                              {
#line 1067 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_85_85;
#line 1067 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_86_86;
#line 1067 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_87_87;
#line 1067 "pd_util.m"
                                MR_Word transform_hlds__pd_util__V_88_88;
#line 1067 "pd_util.m"
                                MR_Word transform_hlds__pd_util__OldVar1_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 0)));
#line 1067 "pd_util.m"
                                MR_Word transform_hlds__pd_util__OldVar2_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 1)));
#line 1067 "pd_util.m"
                                MR_Word transform_hlds__pd_util__NewVar1_101;
#line 1067 "pd_util.m"
                                MR_Word transform_hlds__pd_util__NewVar2_102;

#line 1068 "pd_util.m"
                                transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewUnification_25)) == (MR_mktag((MR_Integer) 2)));
#line 1068 "pd_util.m"
                                if (transform_hlds__pd_util__succeeded)
#line 1068 "pd_util.m"
                                  {
#line 1068 "pd_util.m"
                                    transform_hlds__pd_util__NewVar1_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 0)));
#line 1068 "pd_util.m"
                                    transform_hlds__pd_util__NewVar2_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 1)));
#line 1069 "pd_util.m"
                                    transform_hlds__pd_util__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1070 "pd_util.m"
                                    transform_hlds__pd_util__V_88_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1069 "pd_util.m"
                                    {
#line 1069 "pd_util.m"
                                      transform_hlds__pd_util__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "pd_util.m"
                                      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_85_85, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar2_100));
#line 1069 "pd_util.m"
                                      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_85_85, 1) = ((MR_Box) (transform_hlds__pd_util__V_86_86));
#line 1069 "pd_util.m"
                                    }
#line 1069 "pd_util.m"
                                    {
#line 1069 "pd_util.m"
                                      transform_hlds__pd_util__OldArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "pd_util.m"
                                      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar1_99));
#line 1069 "pd_util.m"
                                      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 1) = ((MR_Box) (transform_hlds__pd_util__V_85_85));
#line 1069 "pd_util.m"
                                    }
#line 1070 "pd_util.m"
                                    {
#line 1070 "pd_util.m"
                                      transform_hlds__pd_util__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "pd_util.m"
                                      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_87_87, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar2_102));
#line 1070 "pd_util.m"
                                      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_87_87, 1) = ((MR_Box) (transform_hlds__pd_util__V_88_88));
#line 1070 "pd_util.m"
                                    }
#line 1070 "pd_util.m"
                                    {
#line 1070 "pd_util.m"
                                      transform_hlds__pd_util__NewArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "pd_util.m"
                                      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar1_101));
#line 1070 "pd_util.m"
                                      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 1) = ((MR_Box) (transform_hlds__pd_util__V_87_87));
#line 1070 "pd_util.m"
                                    }
#line 1070 "pd_util.m"
                                    transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1068 "pd_util.m"
                                  }
#line 1067 "pd_util.m"
                              }
#line 1066 "pd_util.m"
                              break;
#line 1066 "pd_util.m"
                            case (MR_Integer) 3:
#line 1066 "pd_util.m"
#line 1066 "pd_util.m"
                              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 0)))) {
#line 1066 "pd_util.m"
                                default:
#line 1066 "pd_util.m"
                                  transform_hlds__pd_util__succeeded = MR_FALSE;
#line 1066 "pd_util.m"
                                  break;
#line 1066 "pd_util.m"
                                case (MR_Integer) 0:
#line 1062 "pd_util.m"
                                  {
#line 1062 "pd_util.m"
                                    MR_Word transform_hlds__pd_util__OldVar1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 1)));
#line 1062 "pd_util.m"
                                    MR_Word transform_hlds__pd_util__OldVar2_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 2)));
#line 1062 "pd_util.m"
                                    MR_Word transform_hlds__pd_util__NewVar1_29;
#line 1062 "pd_util.m"
                                    MR_Word transform_hlds__pd_util__NewVar2_30;
#line 1062 "pd_util.m"
                                    MR_Word transform_hlds__pd_util__V_89_89;
#line 1062 "pd_util.m"
                                    MR_Word transform_hlds__pd_util__V_90_90;
#line 1062 "pd_util.m"
                                    MR_Word transform_hlds__pd_util__V_91_91;
#line 1062 "pd_util.m"
                                    MR_Word transform_hlds__pd_util__V_92_92;

#line 1063 "pd_util.m"
                                    transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__NewUnification_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1063 "pd_util.m"
                                    if (transform_hlds__pd_util__succeeded)
#line 1063 "pd_util.m"
                                      {
#line 1063 "pd_util.m"
                                        transform_hlds__pd_util__NewVar1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 1)));
#line 1063 "pd_util.m"
                                        transform_hlds__pd_util__NewVar2_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 2)));
#line 1064 "pd_util.m"
                                        transform_hlds__pd_util__V_90_90 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1065 "pd_util.m"
                                        transform_hlds__pd_util__V_92_92 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1064 "pd_util.m"
                                        {
#line 1064 "pd_util.m"
                                          transform_hlds__pd_util__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_89_89, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar2_28));
#line 1064 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_89_89, 1) = ((MR_Box) (transform_hlds__pd_util__V_90_90));
#line 1064 "pd_util.m"
                                        }
#line 1064 "pd_util.m"
                                        {
#line 1064 "pd_util.m"
                                          transform_hlds__pd_util__OldArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar1_27));
#line 1064 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 1) = ((MR_Box) (transform_hlds__pd_util__V_89_89));
#line 1064 "pd_util.m"
                                        }
#line 1065 "pd_util.m"
                                        {
#line 1065 "pd_util.m"
                                          transform_hlds__pd_util__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_91_91, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar2_30));
#line 1065 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_91_91, 1) = ((MR_Box) (transform_hlds__pd_util__V_92_92));
#line 1065 "pd_util.m"
                                        }
#line 1065 "pd_util.m"
                                        {
#line 1065 "pd_util.m"
                                          transform_hlds__pd_util__NewArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar1_29));
#line 1065 "pd_util.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 1) = ((MR_Box) (transform_hlds__pd_util__V_91_91));
#line 1065 "pd_util.m"
                                        }
#line 1065 "pd_util.m"
                                        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1063 "pd_util.m"
                                      }
#line 1062 "pd_util.m"
                                  }
#line 1066 "pd_util.m"
                                  break;
#line 1066 "pd_util.m"
                              }
#line 1066 "pd_util.m"
                              break;
#line 1066 "pd_util.m"
                          }
#line 1060 "pd_util.m"
                        }
#line 1059 "pd_util.m"
                    }
#line 1086 "pd_util.m"
                    break;
#line 1086 "pd_util.m"
                  case (MR_Integer) 2:
#line 1087 "pd_util.m"
                    {
#line 1087 "pd_util.m"
                      MR_Word transform_hlds__pd_util__PredId_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 0)));
#line 1087 "pd_util.m"
                      MR_Integer transform_hlds__pd_util__ProcId_53 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 1)));
#line 1087 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_121_121;
#line 1087 "pd_util.m"
                      MR_Integer transform_hlds__pd_util__V_122_122;
#line 1087 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_54_54;
#line 1087 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_55_55;
#line 1087 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_56_56;
#line 1088 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_57_57;
#line 1088 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_58_58;
#line 1088 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_59_59;

#line 1087 "pd_util.m"
                      transform_hlds__pd_util__OldArgs_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 2)));
#line 1087 "pd_util.m"
                      transform_hlds__pd_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 3)));
#line 1087 "pd_util.m"
                      transform_hlds__pd_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 4)));
#line 1087 "pd_util.m"
                      transform_hlds__pd_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 5)));
#line 1088 "pd_util.m"
                      transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewGoalExpr_15)) == (MR_mktag((MR_Integer) 2)));
#line 1088 "pd_util.m"
                      if (transform_hlds__pd_util__succeeded)
#line 1088 "pd_util.m"
                        {
#line 1088 "pd_util.m"
                          transform_hlds__pd_util__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 0)));
#line 1088 "pd_util.m"
                          transform_hlds__pd_util__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 1)));
#line 1088 "pd_util.m"
                          transform_hlds__pd_util__NewArgs_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 2)));
#line 1088 "pd_util.m"
                          transform_hlds__pd_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 3)));
#line 1088 "pd_util.m"
                          transform_hlds__pd_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 4)));
#line 1088 "pd_util.m"
                          transform_hlds__pd_util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 5)));
#line 1088 "pd_util.m"
                          {
#line 1088 "pd_util.m"
                            transform_hlds__pd_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__pd_util__PredId_52, transform_hlds__pd_util__V_121_121);
                          }
#line 1087 "pd_util.m"
                          if (transform_hlds__pd_util__succeeded)
#line 1088 "pd_util.m"
                            transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__ProcId_53 == transform_hlds__pd_util__V_122_122);
#line 1088 "pd_util.m"
                        }
#line 1087 "pd_util.m"
                    }
#line 1086 "pd_util.m"
                    break;
#line 1086 "pd_util.m"
                  case (MR_Integer) 3:
#line 1086 "pd_util.m"
#line 1086 "pd_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 0)))) {
#line 1086 "pd_util.m"
                      default:
#line 1086 "pd_util.m"
                        transform_hlds__pd_util__succeeded = MR_FALSE;
#line 1086 "pd_util.m"
                        break;
#line 1086 "pd_util.m"
                      case (MR_Integer) 0:
#line 1093 "pd_util.m"
                        {
#line 1093 "pd_util.m"
                          MR_Word transform_hlds__pd_util__TypeInfo_113_113;
#line 1093 "pd_util.m"
                          MR_Word transform_hlds__pd_util__OldGenericCall_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 1)));
#line 1093 "pd_util.m"
                          MR_Word transform_hlds__pd_util__Det_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 5)));
#line 1093 "pd_util.m"
                          MR_Word transform_hlds__pd_util__NewGenericCall_64;
#line 1093 "pd_util.m"
                          MR_Word transform_hlds__pd_util__OldArgs0_67;
#line 1093 "pd_util.m"
                          MR_Word transform_hlds__pd_util__NewArgs0_68;
#line 1093 "pd_util.m"
                          MR_Word transform_hlds__pd_util__OldArgs1_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 2)));
#line 1093 "pd_util.m"
                          MR_Word transform_hlds__pd_util__NewArgs1_109;
#line 1093 "pd_util.m"
                          MR_Word transform_hlds__pd_util__V_123_123;
#line 1093 "pd_util.m"
                          MR_Word transform_hlds__pd_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 3)));
#line 1093 "pd_util.m"
                          MR_Word transform_hlds__pd_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 4)));
#line 1094 "pd_util.m"
                          MR_Word transform_hlds__pd_util__V_65_65;
#line 1094 "pd_util.m"
                          MR_Word transform_hlds__pd_util__V_66_66;

#line 1094 "pd_util.m"
                          transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__NewGoalExpr_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1094 "pd_util.m"
                          if (transform_hlds__pd_util__succeeded)
#line 1094 "pd_util.m"
                            {
#line 1094 "pd_util.m"
                              transform_hlds__pd_util__NewGenericCall_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 1)));
#line 1094 "pd_util.m"
                              transform_hlds__pd_util__NewArgs1_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 2)));
#line 1094 "pd_util.m"
                              transform_hlds__pd_util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 3)));
#line 1094 "pd_util.m"
                              transform_hlds__pd_util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 4)));
#line 1094 "pd_util.m"
                              transform_hlds__pd_util__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 5)));
#line 1094 "pd_util.m"
                              transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Det_63 == transform_hlds__pd_util__V_123_123);
#line 1093 "pd_util.m"
                              if (transform_hlds__pd_util__succeeded)
#line 1093 "pd_util.m"
                                {
#line 1095 "pd_util.m"
                                  {
#line 1095 "pd_util.m"
                                    transform_hlds__pd_util__succeeded = transform_hlds__pd_util__match_generic_call_2_p_0(transform_hlds__pd_util__OldGenericCall_60, transform_hlds__pd_util__NewGenericCall_64);
                                  }
#line 1093 "pd_util.m"
                                  if (transform_hlds__pd_util__succeeded)
#line 1093 "pd_util.m"
                                    {
#line 1096 "pd_util.m"
                                      {
#line 1096 "pd_util.m"
                                        hlds__goal_util__generic_call_vars_2_p_0(transform_hlds__pd_util__OldGenericCall_60, &transform_hlds__pd_util__OldArgs0_67);
                                      }
#line 1097 "pd_util.m"
                                      {
#line 1097 "pd_util.m"
                                        hlds__goal_util__generic_call_vars_2_p_0(transform_hlds__pd_util__NewGenericCall_64, &transform_hlds__pd_util__NewArgs0_68);
                                      }
#line 3743 "transform_hlds.pd_util.c"
                                      transform_hlds__pd_util__TypeInfo_113_113 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 1098 "pd_util.m"
                                      {
#line 1098 "pd_util.m"
                                        mercury__list__append_3_p_1(transform_hlds__pd_util__TypeInfo_113_113, transform_hlds__pd_util__OldArgs0_67, transform_hlds__pd_util__OldArgs1_108, &transform_hlds__pd_util__OldArgs_31);
                                      }
#line 1099 "pd_util.m"
                                      {
#line 1099 "pd_util.m"
                                        mercury__list__append_3_p_1(transform_hlds__pd_util__TypeInfo_113_113, transform_hlds__pd_util__NewArgs0_68, transform_hlds__pd_util__NewArgs1_109, &transform_hlds__pd_util__NewArgs_32);
                                      }
#line 1099 "pd_util.m"
                                      transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1093 "pd_util.m"
                                    }
#line 1093 "pd_util.m"
                                }
#line 1094 "pd_util.m"
                            }
#line 1093 "pd_util.m"
                        }
#line 1086 "pd_util.m"
                        break;
#line 1086 "pd_util.m"
                    }
#line 1086 "pd_util.m"
                    break;
#line 1086 "pd_util.m"
                }
#line 1114 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 1102 "pd_util.m"
                  {
#line 1102 "pd_util.m"
                    MR_Word transform_hlds__pd_util__TypeInfo_114_114 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 1102 "pd_util.m"
                    MR_Word transform_hlds__pd_util__ONArgsList_69;
#line 1113 "pd_util.m"
                    MR_Box transform_hlds__pd_util__conv1_STATE_VARIABLE_ONRenaming_96_96;

#line 1102 "pd_util.m"
                    {
#line 1102 "pd_util.m"
                      mercury__assoc_list__from_corresponding_lists_3_p_0(transform_hlds__pd_util__TypeInfo_114_114, transform_hlds__pd_util__TypeInfo_114_114, transform_hlds__pd_util__OldArgs_31, transform_hlds__pd_util__NewArgs_32, &transform_hlds__pd_util__ONArgsList_69);
                    }
#line 1113 "pd_util.m"
                    {
#line 1113 "pd_util.m"
                      transform_hlds__pd_util__succeeded = mercury__list__foldl_4_p_3((MR_Word) &transform_hlds__pd_util_scalar_common_2[2], (MR_Word) &transform_hlds__pd_util_scalar_common_2[3], (MR_Word) &transform_hlds__pd_util_scalar_common_2[5], transform_hlds__pd_util__ONArgsList_69, ((MR_Box) (transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3)), &transform_hlds__pd_util__conv1_STATE_VARIABLE_ONRenaming_96_96);
                    }
#line 1113 "pd_util.m"
                    if (transform_hlds__pd_util__succeeded)
#line 1113 "pd_util.m"
                      {
#line 1113 "pd_util.m"
                        transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_96_96 = ((MR_Word) transform_hlds__pd_util__conv1_STATE_VARIABLE_ONRenaming_96_96);
#line 1113 "pd_util.m"
                        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 1113 "pd_util.m"
                      }
#line 1102 "pd_util.m"
                  }
#line 1114 "pd_util.m"
                else
#line 1126 "pd_util.m"
                  {
#line 1126 "pd_util.m"
                    MR_Word transform_hlds__pd_util__OldSubGoal_77;
#line 1126 "pd_util.m"
                    MR_Word transform_hlds__pd_util__NewSubGoal_78;
#line 1126 "pd_util.m"
                    MR_Word transform_hlds__pd_util__OldSubGoalList_81;
#line 1126 "pd_util.m"
                    MR_Word transform_hlds__pd_util__NewSubGoalList_82;

#line 1118 "pd_util.m"
                    if (((MR_tag((MR_Word) transform_hlds__pd_util__OldGoalExpr_13)) == (MR_mktag((MR_Integer) 0))))
#line 1116 "pd_util.m"
                      {
#line 1116 "pd_util.m"
                        transform_hlds__pd_util__OldSubGoal_77 = (MR_Word) MR_body(((MR_Word) transform_hlds__pd_util__OldGoalExpr_13), (MR_Integer) 0);
#line 1117 "pd_util.m"
                        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewGoalExpr_15)) == (MR_mktag((MR_Integer) 0)));
#line 1117 "pd_util.m"
                        if (transform_hlds__pd_util__succeeded)
#line 1117 "pd_util.m"
                          transform_hlds__pd_util__NewSubGoal_78 = (MR_Word) MR_body(((MR_Word) transform_hlds__pd_util__NewGoalExpr_15), (MR_Integer) 0);
#line 1116 "pd_util.m"
                      }
#line 1118 "pd_util.m"
                    else
#line 1118 "pd_util.m"
                    if (((((MR_tag((MR_Word) transform_hlds__pd_util__OldGoalExpr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1119 "pd_util.m"
                      {
#line 1119 "pd_util.m"
                        MR_Word transform_hlds__pd_util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 1)));
#line 1120 "pd_util.m"
                        MR_Word transform_hlds__pd_util__V_80_80;

#line 1119 "pd_util.m"
                        transform_hlds__pd_util__OldSubGoal_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 2)));
#line 1120 "pd_util.m"
                        transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__NewGoalExpr_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1120 "pd_util.m"
                        if (transform_hlds__pd_util__succeeded)
#line 1120 "pd_util.m"
                          {
#line 1120 "pd_util.m"
                            transform_hlds__pd_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 1)));
#line 1120 "pd_util.m"
                            transform_hlds__pd_util__NewSubGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 2)));
#line 1120 "pd_util.m"
                          }
#line 1119 "pd_util.m"
                      }
#line 1118 "pd_util.m"
                    else
#line 1118 "pd_util.m"
                      transform_hlds__pd_util__succeeded = MR_FALSE;
#line 1126 "pd_util.m"
                    if (transform_hlds__pd_util__succeeded)
#line 1126 "pd_util.m"
                      {
#line 1123 "pd_util.m"
                        {
#line 1123 "pd_util.m"
                          hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__OldSubGoal_77, &transform_hlds__pd_util__OldSubGoalList_81);
                        }
#line 1124 "pd_util.m"
                        {
#line 1124 "pd_util.m"
                          hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__NewSubGoal_78, &transform_hlds__pd_util__NewSubGoalList_82);
                        }
#line 1125 "pd_util.m"
                        {
#line 1125 "pd_util.m"
                          transform_hlds__pd_util__succeeded = transform_hlds__pd_util__goals_match_2_4_p_0(transform_hlds__pd_util__OldSubGoalList_81, transform_hlds__pd_util__NewSubGoalList_82, transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3, &transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_96_96);
                        }
#line 1126 "pd_util.m"
                      }
#line 1126 "pd_util.m"
                  }
#line 1054 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 1129 "pd_util.m"
                  {
#line 1129 "pd_util.m"
                    /* direct tailcall eliminated */
#line 1129 "pd_util.m"
                    {
#line 1129 "pd_util.m"
                      MR_Word transform_hlds__pd_util__HeadVar__1__tmp_copy_1 = transform_hlds__pd_util__OldGoals_9;
#line 1129 "pd_util.m"
                      MR_Word transform_hlds__pd_util__HeadVar__2__tmp_copy_2 = transform_hlds__pd_util__NewGoals_11;
#line 1129 "pd_util.m"
                      MR_Word transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0__tmp_copy_3 = transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_96_96;

#line 1129 "pd_util.m"
                      transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3 = transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0__tmp_copy_3;
#line 1129 "pd_util.m"
                      transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__HeadVar__2__tmp_copy_2;
#line 1129 "pd_util.m"
                      transform_hlds__pd_util__HeadVar__1_1 = transform_hlds__pd_util__HeadVar__1__tmp_copy_1;
#line 1129 "pd_util.m"
                    }
#line 1129 "pd_util.m"
                    continue;
#line 1129 "pd_util.m"
                  }
#line 1054 "pd_util.m"
              }
#line 1054 "pd_util.m"
          }
#line 1053 "pd_util.m"
        return transform_hlds__pd_util__succeeded;
#line 1053 "pd_util.m"
      }
#line 1053 "pd_util.m"
      break;
#line 1053 "pd_util.m"
    }
#line 1050 "pd_util.m"
}

#line 1028 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__collect_matching_arg_types_5_p_0(
#line 1028 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 1028 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 1028 "pd_util.m"
  MR_Word transform_hlds__pd_util__Renaming_3,
#line 1028 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4,
#line 1028 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_5)
#line 1028 "pd_util.m"
{
#line 1032 "pd_util.m"
  while (MR_TRUE)
#line 1032 "pd_util.m"
    {
#line 1032 "pd_util.m"
      /* tailcall optimized into a loop */
#line 1032 "pd_util.m"
      {
#line 1032 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 1032 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "pd_util.m"
          if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "pd_util.m"
            {
#line 1033 "pd_util.m"
              {
#line 1033 "pd_util.m"
                mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4, transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_5);
#line 1033 "pd_util.m"
                return;
              }
#line 1032 "pd_util.m"
            }
#line 1032 "pd_util.m"
          else
#line 1036 "pd_util.m"
            {
#line 1037 "pd_util.m"
              {
#line 1037 "pd_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_util", (MR_String) "predicate \140transform_hlds.pd_util.collect_matching_arg_types\'/5", (MR_String) "list length mismatch");
#line 1037 "pd_util.m"
                return;
              }
#line 1036 "pd_util.m"
            }
#line 1032 "pd_util.m"
        else
#line 1032 "pd_util.m"
          {
#line 1032 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1032 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1032 "pd_util.m"
            if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 1032 "pd_util.m"
            else
#line 1039 "pd_util.m"
              {
#line 1039 "pd_util.m"
                MR_Word transform_hlds__pd_util__Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1039 "pd_util.m"
                MR_Word transform_hlds__pd_util__Types_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1039 "pd_util.m"
                MR_Word transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37;
#line 1040 "pd_util.m"
                MR_Word transform_hlds__pd_util__TypeInfo_40_40 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];

#line 1040 "pd_util.m"
                {
#line 1040 "pd_util.m"
                  transform_hlds__pd_util__succeeded = mercury__map__contains_2_p_0(transform_hlds__pd_util__TypeInfo_40_40, transform_hlds__pd_util__TypeInfo_40_40, transform_hlds__pd_util__Renaming_3, ((MR_Box) (transform_hlds__pd_util__V_42_42)));
                }
#line 1042 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 1041 "pd_util.m"
                  {
#line 1041 "pd_util.m"
                    transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1041 "pd_util.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37, 0) = ((MR_Box) (transform_hlds__pd_util__Type_31));
#line 1041 "pd_util.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37, 1) = ((MR_Box) (transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4));
#line 1041 "pd_util.m"
                  }
#line 1042 "pd_util.m"
                else
#line 1042 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37 = transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4;
#line 1045 "pd_util.m"
                /* direct tailcall eliminated */
#line 1045 "pd_util.m"
                {
#line 1045 "pd_util.m"
                  MR_Word transform_hlds__pd_util__HeadVar__1__tmp_copy_1 = transform_hlds__pd_util__V_41_41;
#line 1045 "pd_util.m"
                  MR_Word transform_hlds__pd_util__HeadVar__2__tmp_copy_2 = transform_hlds__pd_util__Types_32;
#line 1045 "pd_util.m"
                  MR_Word transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0__tmp_copy_4 = transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37;

#line 1045 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4 = transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0__tmp_copy_4;
#line 1045 "pd_util.m"
                  transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__HeadVar__2__tmp_copy_2;
#line 1045 "pd_util.m"
                  transform_hlds__pd_util__HeadVar__1_1 = transform_hlds__pd_util__HeadVar__1__tmp_copy_1;
#line 1045 "pd_util.m"
                }
#line 1045 "pd_util.m"
                continue;
#line 1039 "pd_util.m"
              }
#line 1032 "pd_util.m"
          }
#line 1032 "pd_util.m"
      }
#line 1032 "pd_util.m"
      break;
#line 1032 "pd_util.m"
    }
#line 1028 "pd_util.m"
}

#line 992 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__inst_list_size_5_p_0(
#line 992 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 992 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 992 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_3,
#line 992 "pd_util.m"
  MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_0_4,
#line 992 "pd_util.m"
  MR_Integer * transform_hlds__pd_util__STATE_VARIABLE_Size_5)
#line 992 "pd_util.m"
{
#line 995 "pd_util.m"
  while (MR_TRUE)
#line 995 "pd_util.m"
    {
#line 995 "pd_util.m"
      /* tailcall optimized into a loop */
#line 995 "pd_util.m"
      {
#line 995 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 995 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 995 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_Size_5 = transform_hlds__pd_util__STATE_VARIABLE_Size_0_4;
#line 995 "pd_util.m"
        else
#line 996 "pd_util.m"
          {
#line 996 "pd_util.m"
            MR_Word transform_hlds__pd_util__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 996 "pd_util.m"
            MR_Word transform_hlds__pd_util__Insts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 996 "pd_util.m"
            MR_Integer transform_hlds__pd_util__InstSize_16;
#line 996 "pd_util.m"
            MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_19_19;

#line 997 "pd_util.m"
            {
#line 997 "pd_util.m"
              transform_hlds__pd_util__inst_size_2_4_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__Inst_12, transform_hlds__pd_util__Expansions_3, &transform_hlds__pd_util__InstSize_16);
            }
#line 998 "pd_util.m"
            transform_hlds__pd_util__STATE_VARIABLE_Size_19_19 = (transform_hlds__pd_util__STATE_VARIABLE_Size_0_4 + transform_hlds__pd_util__InstSize_16);
#line 999 "pd_util.m"
            /* direct tailcall eliminated */
#line 999 "pd_util.m"
            {
#line 999 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__2__tmp_copy_2 = transform_hlds__pd_util__Insts_13;
#line 999 "pd_util.m"
              MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_0__tmp_copy_4 = transform_hlds__pd_util__STATE_VARIABLE_Size_19_19;

#line 999 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_Size_0_4 = transform_hlds__pd_util__STATE_VARIABLE_Size_0__tmp_copy_4;
#line 999 "pd_util.m"
              transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__HeadVar__2__tmp_copy_2;
#line 999 "pd_util.m"
            }
#line 999 "pd_util.m"
            continue;
#line 996 "pd_util.m"
          }
#line 995 "pd_util.m"
      }
#line 995 "pd_util.m"
      break;
#line 995 "pd_util.m"
    }
#line 992 "pd_util.m"
}

#line 978 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__bound_inst_size_5_p_0(
#line 978 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 978 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 978 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_3,
#line 978 "pd_util.m"
  MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_0_4,
#line 978 "pd_util.m"
  MR_Integer * transform_hlds__pd_util__STATE_VARIABLE_Size_5)
#line 978 "pd_util.m"
{
#line 981 "pd_util.m"
  while (MR_TRUE)
#line 981 "pd_util.m"
    {
#line 981 "pd_util.m"
      /* tailcall optimized into a loop */
#line 981 "pd_util.m"
      {
#line 981 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 981 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 981 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_Size_5 = transform_hlds__pd_util__STATE_VARIABLE_Size_0_4;
#line 981 "pd_util.m"
        else
#line 982 "pd_util.m"
          {
#line 982 "pd_util.m"
            MR_Word transform_hlds__pd_util__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 982 "pd_util.m"
            MR_Word transform_hlds__pd_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 982 "pd_util.m"
            MR_Word transform_hlds__pd_util__ArgInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BoundInst_12, (MR_Integer) 1)));
#line 982 "pd_util.m"
            MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_20_20;
#line 982 "pd_util.m"
            MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_21_21;
#line 983 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BoundInst_12, (MR_Integer) 0)));

#line 984 "pd_util.m"
            {
#line 984 "pd_util.m"
              transform_hlds__pd_util__inst_list_size_5_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__ArgInsts_17, transform_hlds__pd_util__Expansions_3, transform_hlds__pd_util__STATE_VARIABLE_Size_0_4, &transform_hlds__pd_util__STATE_VARIABLE_Size_20_20);
            }
#line 985 "pd_util.m"
            transform_hlds__pd_util__STATE_VARIABLE_Size_21_21 = (transform_hlds__pd_util__STATE_VARIABLE_Size_20_20 + (MR_Integer) 1);
#line 986 "pd_util.m"
            /* direct tailcall eliminated */
#line 986 "pd_util.m"
            {
#line 986 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__2__tmp_copy_2 = transform_hlds__pd_util__BoundInsts_13;
#line 986 "pd_util.m"
              MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_0__tmp_copy_4 = transform_hlds__pd_util__STATE_VARIABLE_Size_21_21;

#line 986 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_Size_0_4 = transform_hlds__pd_util__STATE_VARIABLE_Size_0__tmp_copy_4;
#line 986 "pd_util.m"
              transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__HeadVar__2__tmp_copy_2;
#line 986 "pd_util.m"
            }
#line 986 "pd_util.m"
            continue;
#line 982 "pd_util.m"
          }
#line 981 "pd_util.m"
      }
#line 981 "pd_util.m"
      break;
#line 981 "pd_util.m"
    }
#line 978 "pd_util.m"
}

#line 947 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__inst_size_2_4_p_0(
#line 947 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_5,
#line 947 "pd_util.m"
  MR_Word transform_hlds__pd_util__Inst_6,
#line 947 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23,
#line 947 "pd_util.m"
  MR_Integer * transform_hlds__pd_util__Size_8)
#line 947 "pd_util.m"
{
#line 959 "pd_util.m"
  while (MR_TRUE)
#line 959 "pd_util.m"
    {
#line 959 "pd_util.m"
      /* tailcall optimized into a loop */
#line 959 "pd_util.m"
      {
#line 959 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 959 "pd_util.m"
#line 959 "pd_util.m"
        switch (MR_tag((MR_Word) transform_hlds__pd_util__Inst_6)) {
#line 959 "pd_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 959 "pd_util.m"
          case (MR_Integer) 0:
#line 960 "pd_util.m"
            *transform_hlds__pd_util__Size_8 = (MR_Integer) 0;
#line 959 "pd_util.m"
            break;
#line 959 "pd_util.m"
          case (MR_Integer) 1:
#line 959 "pd_util.m"
          case (MR_Integer) 2:
#line 960 "pd_util.m"
            *transform_hlds__pd_util__Size_8 = (MR_Integer) 0;
#line 959 "pd_util.m"
            break;
#line 959 "pd_util.m"
          case (MR_Integer) 3:
#line 959 "pd_util.m"
#line 959 "pd_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 0)))) {
#line 959 "pd_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 959 "pd_util.m"
              case (MR_Integer) 0:
#line 974 "pd_util.m"
                {
#line 974 "pd_util.m"
                  MR_Word transform_hlds__pd_util__BoundInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 3)));
#line 974 "pd_util.m"
                  MR_Word transform_hlds__pd_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 1)));
#line 974 "pd_util.m"
                  MR_Word transform_hlds__pd_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 2)));

#line 975 "pd_util.m"
                  {
#line 975 "pd_util.m"
                    transform_hlds__pd_util__bound_inst_size_5_p_0(transform_hlds__pd_util__ModuleInfo_5, transform_hlds__pd_util__BoundInsts_22, transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23, (MR_Integer) 1, transform_hlds__pd_util__Size_8);
#line 975 "pd_util.m"
                    return;
                  }
#line 974 "pd_util.m"
                }
#line 959 "pd_util.m"
                break;
#line 959 "pd_util.m"
              case (MR_Integer) 1:
#line 959 "pd_util.m"
              case (MR_Integer) 2:
#line 959 "pd_util.m"
              case (MR_Integer) 5:
#line 960 "pd_util.m"
                *transform_hlds__pd_util__Size_8 = (MR_Integer) 0;
#line 959 "pd_util.m"
                break;
#line 959 "pd_util.m"
              case (MR_Integer) 3:
#line 962 "pd_util.m"
                {
#line 962 "pd_util.m"
                  MR_Word transform_hlds__pd_util__SubInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 2)));
#line 962 "pd_util.m"
                  MR_Word transform_hlds__pd_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 1)));

#line 963 "pd_util.m"
                  /* direct tailcall eliminated */
#line 963 "pd_util.m"
                  {
#line 963 "pd_util.m"
                    MR_Word transform_hlds__pd_util__Inst__tmp_copy_6 = transform_hlds__pd_util__SubInst_18;

#line 963 "pd_util.m"
                    transform_hlds__pd_util__Inst_6 = transform_hlds__pd_util__Inst__tmp_copy_6;
#line 963 "pd_util.m"
                  }
#line 963 "pd_util.m"
                  continue;
#line 962 "pd_util.m"
                }
#line 959 "pd_util.m"
                break;
#line 959 "pd_util.m"
              case (MR_Integer) 4:
#line 965 "pd_util.m"
                {
#line 965 "pd_util.m"
                  MR_Word transform_hlds__pd_util__InstName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 1)));

#line 966 "pd_util.m"
                  {
#line 966 "pd_util.m"
                    transform_hlds__pd_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (transform_hlds__pd_util__InstName_19)), transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23);
                  }
#line 968 "pd_util.m"
                  if (transform_hlds__pd_util__succeeded)
#line 967 "pd_util.m"
                    *transform_hlds__pd_util__Size_8 = (MR_Integer) 1;
#line 968 "pd_util.m"
                  else
#line 969 "pd_util.m"
                    {
#line 969 "pd_util.m"
                      MR_Word transform_hlds__pd_util__SubInst_30;
#line 969 "pd_util.m"
                      MR_Word transform_hlds__pd_util__STATE_VARIABLE_Expansions_25_31;

#line 969 "pd_util.m"
                      {
#line 969 "pd_util.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (transform_hlds__pd_util__InstName_19)), transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23, &transform_hlds__pd_util__STATE_VARIABLE_Expansions_25_31);
                      }
#line 970 "pd_util.m"
                      {
#line 970 "pd_util.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(transform_hlds__pd_util__ModuleInfo_5, transform_hlds__pd_util__InstName_19, &transform_hlds__pd_util__SubInst_30);
                      }
#line 971 "pd_util.m"
                      /* direct tailcall eliminated */
#line 971 "pd_util.m"
                      {
#line 971 "pd_util.m"
                        MR_Word transform_hlds__pd_util__Inst__tmp_copy_6 = transform_hlds__pd_util__SubInst_30;
#line 971 "pd_util.m"
                        MR_Word transform_hlds__pd_util__STATE_VARIABLE_Expansions_0__tmp_copy_23 = transform_hlds__pd_util__STATE_VARIABLE_Expansions_25_31;

#line 971 "pd_util.m"
                        transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23 = transform_hlds__pd_util__STATE_VARIABLE_Expansions_0__tmp_copy_23;
#line 971 "pd_util.m"
                        transform_hlds__pd_util__Inst_6 = transform_hlds__pd_util__Inst__tmp_copy_6;
#line 971 "pd_util.m"
                      }
#line 971 "pd_util.m"
                      continue;
#line 969 "pd_util.m"
                    }
#line 965 "pd_util.m"
                }
#line 959 "pd_util.m"
                break;
#line 959 "pd_util.m"
            }
#line 959 "pd_util.m"
            break;
#line 959 "pd_util.m"
        }
#line 959 "pd_util.m"
      }
#line 959 "pd_util.m"
      break;
#line 959 "pd_util.m"
    }
#line 947 "pd_util.m"
}

#line 899 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(
#line 899 "pd_util.m"
  MR_Word transform_hlds__pd_util__Xs_8,
#line 899 "pd_util.m"
  MR_Word transform_hlds__pd_util__Ys_9,
#line 899 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_10,
#line 899 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_11,
#line 899 "pd_util.m"
  MR_Word transform_hlds__pd_util__Uniq_12,
#line 899 "pd_util.m"
  MR_Word transform_hlds__pd_util__BoundInsts_13,
#line 899 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Inst_14)
#line 899 "pd_util.m"
{
#line 909 "pd_util.m"
  {
#line 909 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Xs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 905 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 906 "pd_util.m"
      transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Ys_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 909 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 908 "pd_util.m"
      {
#line 908 "pd_util.m"
        {
#line 908 "pd_util.m"
          MR_Word base;
#line 908 "pd_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 908 "pd_util.m"
          *transform_hlds__pd_util__Inst_14 = base;
#line 908 "pd_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 908 "pd_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__pd_util__Uniq_12));
#line 908 "pd_util.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 908 "pd_util.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 908 "pd_util.m"
        }
#line 908 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 908 "pd_util.m"
      }
#line 909 "pd_util.m"
    else
#line 924 "pd_util.m"
      {
#line 924 "pd_util.m"
        MR_Word transform_hlds__pd_util__Xs1_16;
#line 924 "pd_util.m"
        MR_Word transform_hlds__pd_util__Ys1_18;
#line 924 "pd_util.m"
        MR_Word transform_hlds__pd_util__ConsId_19;
#line 924 "pd_util.m"
        MR_Word transform_hlds__pd_util__ArgsX_20;
#line 924 "pd_util.m"
        MR_Word transform_hlds__pd_util__ArgsY_21;
#line 910 "pd_util.m"
        MR_Word transform_hlds__pd_util__X_15;
#line 910 "pd_util.m"
        MR_Word transform_hlds__pd_util__Y_17;
#line 910 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_41_41;

#line 910 "pd_util.m"
        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__Xs_8)) == (MR_mktag((MR_Integer) 1)));
#line 910 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 910 "pd_util.m"
          {
#line 910 "pd_util.m"
            transform_hlds__pd_util__X_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Xs_8, (MR_Integer) 0)));
#line 910 "pd_util.m"
            transform_hlds__pd_util__Xs1_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Xs_8, (MR_Integer) 1)));
#line 911 "pd_util.m"
            transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__Ys_9)) == (MR_mktag((MR_Integer) 1)));
#line 911 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 911 "pd_util.m"
              {
#line 911 "pd_util.m"
                transform_hlds__pd_util__Y_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Ys_9, (MR_Integer) 0)));
#line 911 "pd_util.m"
                transform_hlds__pd_util__Ys1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Ys_9, (MR_Integer) 1)));
#line 912 "pd_util.m"
                transform_hlds__pd_util__ConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__X_15, (MR_Integer) 0)));
#line 912 "pd_util.m"
                transform_hlds__pd_util__ArgsX_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__X_15, (MR_Integer) 1)));
#line 913 "pd_util.m"
                transform_hlds__pd_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Y_17, (MR_Integer) 0)));
#line 913 "pd_util.m"
                transform_hlds__pd_util__ArgsY_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Y_17, (MR_Integer) 1)));
#line 913 "pd_util.m"
                {
#line 913 "pd_util.m"
                  transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__pd_util__ConsId_19, transform_hlds__pd_util__V_41_41);
                }
#line 911 "pd_util.m"
              }
#line 910 "pd_util.m"
          }
#line 924 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 915 "pd_util.m"
          {
#line 915 "pd_util.m"
            MR_Word transform_hlds__pd_util__Args_22;
#line 915 "pd_util.m"
            MR_Word transform_hlds__pd_util__Z_23;
#line 915 "pd_util.m"
            MR_Word transform_hlds__pd_util__Inst1_24;
#line 921 "pd_util.m"
            MR_Word transform_hlds__pd_util__Zs_26;
#line 919 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_42_42;
#line 919 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_25_25;

#line 915 "pd_util.m"
            {
#line 915 "pd_util.m"
              transform_hlds__pd_util__succeeded = transform_hlds__pd_util__inst_list_MSG_5_p_0(transform_hlds__pd_util__ArgsX_20, transform_hlds__pd_util__ArgsY_21, transform_hlds__pd_util__Expansions_10, transform_hlds__pd_util__ModuleInfo_11, &transform_hlds__pd_util__Args_22);
            }
#line 915 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 915 "pd_util.m"
              {
#line 916 "pd_util.m"
                {
#line 916 "pd_util.m"
                  transform_hlds__pd_util__Z_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 916 "pd_util.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Z_23, 0) = ((MR_Box) (transform_hlds__pd_util__ConsId_19));
#line 916 "pd_util.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Z_23, 1) = ((MR_Box) (transform_hlds__pd_util__Args_22));
#line 916 "pd_util.m"
                }
#line 917 "pd_util.m"
                {
#line 917 "pd_util.m"
                  transform_hlds__pd_util__succeeded = transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(transform_hlds__pd_util__Xs1_16, transform_hlds__pd_util__Ys1_18, transform_hlds__pd_util__Expansions_10, transform_hlds__pd_util__ModuleInfo_11, transform_hlds__pd_util__Uniq_12, transform_hlds__pd_util__BoundInsts_13, &transform_hlds__pd_util__Inst1_24);
                }
#line 915 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 915 "pd_util.m"
                  {
#line 919 "pd_util.m"
                    transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__Inst1_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst1_24, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 919 "pd_util.m"
                    if (transform_hlds__pd_util__succeeded)
#line 919 "pd_util.m"
                      {
#line 919 "pd_util.m"
                        transform_hlds__pd_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst1_24, (MR_Integer) 1)));
#line 919 "pd_util.m"
                        transform_hlds__pd_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst1_24, (MR_Integer) 2)));
#line 919 "pd_util.m"
                        transform_hlds__pd_util__Zs_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst1_24, (MR_Integer) 3)));
#line 919 "pd_util.m"
                        transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Uniq_12 == transform_hlds__pd_util__V_42_42);
#line 919 "pd_util.m"
                      }
#line 921 "pd_util.m"
                    if (transform_hlds__pd_util__succeeded)
#line 920 "pd_util.m"
                      {
#line 920 "pd_util.m"
                        MR_Word transform_hlds__pd_util__V_31_31;

#line 920 "pd_util.m"
                        {
#line 920 "pd_util.m"
                          transform_hlds__pd_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 920 "pd_util.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_31_31, 0) = ((MR_Box) (transform_hlds__pd_util__Z_23));
#line 920 "pd_util.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_31_31, 1) = ((MR_Box) (transform_hlds__pd_util__Zs_26));
#line 920 "pd_util.m"
                        }
#line 920 "pd_util.m"
                        {
#line 920 "pd_util.m"
                          MR_Word base;
#line 920 "pd_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 920 "pd_util.m"
                          *transform_hlds__pd_util__Inst_14 = base;
#line 920 "pd_util.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 920 "pd_util.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__pd_util__Uniq_12));
#line 920 "pd_util.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 920 "pd_util.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__pd_util__V_31_31));
#line 920 "pd_util.m"
                        }
#line 920 "pd_util.m"
                      }
#line 921 "pd_util.m"
                    else
#line 922 "pd_util.m"
                      *transform_hlds__pd_util__Inst_14 = transform_hlds__pd_util__Inst1_24;
#line 921 "pd_util.m"
                    transform_hlds__pd_util__succeeded = MR_TRUE;
#line 915 "pd_util.m"
                  }
#line 915 "pd_util.m"
              }
#line 915 "pd_util.m"
          }
#line 924 "pd_util.m"
        else
#line 935 "pd_util.m"
          {
#line 935 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_39_39;
#line 936 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_36_36;
#line 936 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_37_37;
#line 936 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_38_38;

#line 931 "pd_util.m"
#line 931 "pd_util.m"
            switch (transform_hlds__pd_util__Uniq_12) {
#line 931 "pd_util.m"
              default:
#line 931 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_FALSE;
#line 931 "pd_util.m"
                break;
#line 931 "pd_util.m"
              case (MR_Integer) 0:
#line 927 "pd_util.m"
                {
#line 927 "pd_util.m"
                  MR_Word transform_hlds__pd_util__NewInst_27;

#line 928 "pd_util.m"
                  {
#line 928 "pd_util.m"
                    transform_hlds__pd_util__NewInst_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 928 "pd_util.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 928 "pd_util.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_27, 1) = ((MR_Box) ((MR_Integer) 0));
#line 928 "pd_util.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 928 "pd_util.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_27, 3) = ((MR_Box) (transform_hlds__pd_util__BoundInsts_13));
#line 928 "pd_util.m"
                  }
#line 929 "pd_util.m"
                  {
#line 929 "pd_util.m"
                    transform_hlds__pd_util__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__pd_util__ModuleInfo_11, transform_hlds__pd_util__NewInst_27);
                  }
#line 927 "pd_util.m"
                  if (transform_hlds__pd_util__succeeded)
#line 930 "pd_util.m"
                    {
#line 930 "pd_util.m"
                      transform_hlds__pd_util__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(transform_hlds__pd_util__ModuleInfo_11, transform_hlds__pd_util__NewInst_27);
                    }
#line 927 "pd_util.m"
                }
#line 931 "pd_util.m"
                break;
#line 931 "pd_util.m"
              case (MR_Integer) 1:
#line 932 "pd_util.m"
                {
#line 932 "pd_util.m"
                  MR_Word transform_hlds__pd_util__NewInst_40;

#line 933 "pd_util.m"
                  {
#line 933 "pd_util.m"
                    transform_hlds__pd_util__NewInst_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 933 "pd_util.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 933 "pd_util.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_40, 1) = ((MR_Box) ((MR_Integer) 1));
#line 933 "pd_util.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "pd_util.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_40, 3) = ((MR_Box) (transform_hlds__pd_util__BoundInsts_13));
#line 933 "pd_util.m"
                  }
#line 934 "pd_util.m"
                  {
#line 934 "pd_util.m"
                    transform_hlds__pd_util__succeeded = check_hlds__inst_match__inst_is_unique_2_p_0(transform_hlds__pd_util__ModuleInfo_11, transform_hlds__pd_util__NewInst_40);
                  }
#line 932 "pd_util.m"
                }
#line 931 "pd_util.m"
                break;
#line 931 "pd_util.m"
            }
#line 935 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 935 "pd_util.m"
              {
#line 937 "pd_util.m"
                transform_hlds__pd_util__V_37_37 = (MR_Integer) 0;
#line 937 "pd_util.m"
                transform_hlds__pd_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 937 "pd_util.m"
                {
#line 937 "pd_util.m"
                  transform_hlds__pd_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 937 "pd_util.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 937 "pd_util.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_36_36, 1) = ((MR_Box) (transform_hlds__pd_util__V_37_37));
#line 937 "pd_util.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_36_36, 2) = ((MR_Box) (transform_hlds__pd_util__V_38_38));
#line 937 "pd_util.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_36_36, 3) = ((MR_Box) (transform_hlds__pd_util__BoundInsts_13));
#line 937 "pd_util.m"
                }
#line 936 "pd_util.m"
                {
#line 936 "pd_util.m"
                  transform_hlds__pd_util__succeeded = check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_p_0(transform_hlds__pd_util__ModuleInfo_11, transform_hlds__pd_util__V_36_36);
                }
#line 936 "pd_util.m"
                transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 935 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 935 "pd_util.m"
                  {
#line 938 "pd_util.m"
                    transform_hlds__pd_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 938 "pd_util.m"
                    {
#line 938 "pd_util.m"
                      MR_Word base;
#line 938 "pd_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 938 "pd_util.m"
                      *transform_hlds__pd_util__Inst_14 = base;
#line 938 "pd_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 938 "pd_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__pd_util__Uniq_12));
#line 938 "pd_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__pd_util__V_39_39));
#line 938 "pd_util.m"
                    }
#line 938 "pd_util.m"
                    transform_hlds__pd_util__succeeded = MR_TRUE;
#line 935 "pd_util.m"
                  }
#line 935 "pd_util.m"
              }
#line 935 "pd_util.m"
          }
#line 924 "pd_util.m"
      }
#line 909 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 909 "pd_util.m"
  }
#line 899 "pd_util.m"
}

#line 880 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__inst_list_MSG_5_p_0(
#line 880 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 880 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 880 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_3,
#line 880 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
#line 880 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__5_5)
#line 880 "pd_util.m"
{
#line 883 "pd_util.m"
  {
#line 883 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;

#line 883 "pd_util.m"
    if ((transform_hlds__pd_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 883 "pd_util.m"
      {
#line 883 "pd_util.m"
        transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 883 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 883 "pd_util.m"
          {
#line 883 "pd_util.m"
            *transform_hlds__pd_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 883 "pd_util.m"
            transform_hlds__pd_util__succeeded = MR_TRUE;
#line 883 "pd_util.m"
          }
#line 883 "pd_util.m"
      }
#line 883 "pd_util.m"
    else
#line 885 "pd_util.m"
      {
#line 885 "pd_util.m"
        MR_Word transform_hlds__pd_util__ArgA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));
#line 885 "pd_util.m"
        MR_Word transform_hlds__pd_util__ArgsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
#line 885 "pd_util.m"
        MR_Word transform_hlds__pd_util__ArgB_10;
#line 885 "pd_util.m"
        MR_Word transform_hlds__pd_util__ArgsB_11;
#line 885 "pd_util.m"
        MR_Word transform_hlds__pd_util__Arg_14;
#line 885 "pd_util.m"
        MR_Word transform_hlds__pd_util__Args_15;

#line 884 "pd_util.m"
        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 884 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 884 "pd_util.m"
          {
#line 884 "pd_util.m"
            transform_hlds__pd_util__ArgB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 884 "pd_util.m"
            transform_hlds__pd_util__ArgsB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 819 "pd_util.m"
            {
#line 819 "pd_util.m"
              transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__pd_util__ArgA_8, transform_hlds__pd_util__ArgB_10);
            }
#line 821 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 820 "pd_util.m"
              {
#line 820 "pd_util.m"
                transform_hlds__pd_util__Arg_14 = transform_hlds__pd_util__ArgA_8;
#line 820 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_TRUE;
#line 820 "pd_util.m"
              }
#line 821 "pd_util.m"
            else
#line 824 "pd_util.m"
              {
#line 824 "pd_util.m"
                MR_Word transform_hlds__pd_util__TypeInfo_19_29;
#line 824 "pd_util.m"
                MR_Word transform_hlds__pd_util__InstA2_22;
#line 824 "pd_util.m"
                MR_Word transform_hlds__pd_util__InstB2_23;
#line 824 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_25_25;
#line 824 "pd_util.m"
                MR_Word transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_27;
#line 824 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_24_24;

#line 824 "pd_util.m"
                {
#line 824 "pd_util.m"
                  transform_hlds__pd_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 824 "pd_util.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_24_24, 0) = ((MR_Box) (transform_hlds__pd_util__ArgA_8));
#line 824 "pd_util.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_24_24, 1) = ((MR_Box) (transform_hlds__pd_util__ArgB_10));
#line 824 "pd_util.m"
                }
#line 824 "pd_util.m"
                {
#line 824 "pd_util.m"
                  transform_hlds__pd_util__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_2[0], ((MR_Box) (transform_hlds__pd_util__V_24_24)), transform_hlds__pd_util__Expansions_3);
                }
#line 824 "pd_util.m"
                transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 824 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 824 "pd_util.m"
                  {
#line 825 "pd_util.m"
                    {
#line 825 "pd_util.m"
                      check_hlds__inst_match__inst_expand_3_p_0(transform_hlds__pd_util__HeadVar__4_4, transform_hlds__pd_util__ArgA_8, &transform_hlds__pd_util__InstA2_22);
                    }
#line 826 "pd_util.m"
                    {
#line 826 "pd_util.m"
                      check_hlds__inst_match__inst_expand_3_p_0(transform_hlds__pd_util__HeadVar__4_4, transform_hlds__pd_util__ArgB_10, &transform_hlds__pd_util__InstB2_23);
                    }
#line 4923 "transform_hlds.pd_util.c"
                    transform_hlds__pd_util__TypeInfo_19_29 = (MR_Word) &transform_hlds__pd_util_scalar_common_2[0];
#line 827 "pd_util.m"
                    {
#line 827 "pd_util.m"
                      transform_hlds__pd_util__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 827 "pd_util.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_25_25, 0) = ((MR_Box) (transform_hlds__pd_util__ArgA_8));
#line 827 "pd_util.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_25_25, 1) = ((MR_Box) (transform_hlds__pd_util__ArgB_10));
#line 827 "pd_util.m"
                    }
#line 827 "pd_util.m"
                    {
#line 827 "pd_util.m"
                      mercury__set__insert_3_p_0(transform_hlds__pd_util__TypeInfo_19_29, ((MR_Box) (transform_hlds__pd_util__V_25_25)), transform_hlds__pd_util__Expansions_3, &transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_27);
                    }
#line 828 "pd_util.m"
                    transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__InstB2_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 830 "pd_util.m"
                    if (transform_hlds__pd_util__succeeded)
#line 829 "pd_util.m"
                      {
#line 829 "pd_util.m"
                        transform_hlds__pd_util__Arg_14 = transform_hlds__pd_util__InstA2_22;
#line 829 "pd_util.m"
                        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 829 "pd_util.m"
                      }
#line 830 "pd_util.m"
                    else
#line 831 "pd_util.m"
                      {
#line 831 "pd_util.m"
                        transform_hlds__pd_util__succeeded = transform_hlds__pd_util__inst_MSG_2_5_p_0(transform_hlds__pd_util__InstA2_22, transform_hlds__pd_util__InstB2_23, transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_27, transform_hlds__pd_util__HeadVar__4_4, &transform_hlds__pd_util__Arg_14);
                      }
#line 824 "pd_util.m"
                  }
#line 824 "pd_util.m"
              }
#line 885 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 885 "pd_util.m"
              {
#line 887 "pd_util.m"
                {
#line 887 "pd_util.m"
                  transform_hlds__pd_util__succeeded = transform_hlds__pd_util__inst_list_MSG_5_p_0(transform_hlds__pd_util__ArgsA_9, transform_hlds__pd_util__ArgsB_11, transform_hlds__pd_util__Expansions_3, transform_hlds__pd_util__HeadVar__4_4, &transform_hlds__pd_util__Args_15);
                }
#line 885 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 885 "pd_util.m"
                  {
#line 885 "pd_util.m"
                    {
#line 885 "pd_util.m"
                      MR_Word base;
#line 885 "pd_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 885 "pd_util.m"
                      *transform_hlds__pd_util__HeadVar__5_5 = base;
#line 885 "pd_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_util__Arg_14));
#line 885 "pd_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_util__Args_15));
#line 885 "pd_util.m"
                    }
#line 885 "pd_util.m"
                    transform_hlds__pd_util__succeeded = MR_TRUE;
#line 885 "pd_util.m"
                  }
#line 885 "pd_util.m"
              }
#line 884 "pd_util.m"
          }
#line 885 "pd_util.m"
      }
#line 883 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 883 "pd_util.m"
  }
#line 880 "pd_util.m"
}

#line 835 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__inst_MSG_2_5_p_0(
#line 835 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstA_6,
#line 835 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstB_7,
#line 835 "pd_util.m"
  MR_Word transform_hlds__pd_util__Expansions_8,
#line 835 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_9,
#line 835 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Inst_10)
#line 835 "pd_util.m"
{
#line 840 "pd_util.m"
  {
#line 840 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;

#line 840 "pd_util.m"
#line 840 "pd_util.m"
    switch (MR_tag((MR_Word) transform_hlds__pd_util__InstA_6)) {
#line 840 "pd_util.m"
      default:
#line 840 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_FALSE;
#line 840 "pd_util.m"
        break;
#line 840 "pd_util.m"
      case (MR_Integer) 0:
#line 840 "pd_util.m"
#line 840 "pd_util.m"
        switch (MR_unmkbody(transform_hlds__pd_util__InstA_6)) {
#line 840 "pd_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 840 "pd_util.m"
          case (MR_Integer) 0:
#line 843 "pd_util.m"
            {
#line 844 "pd_util.m"
              transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 843 "pd_util.m"
              if (transform_hlds__pd_util__succeeded)
#line 843 "pd_util.m"
                {
#line 845 "pd_util.m"
                  *transform_hlds__pd_util__Inst_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 845 "pd_util.m"
                  transform_hlds__pd_util__succeeded = MR_TRUE;
#line 843 "pd_util.m"
                }
#line 843 "pd_util.m"
            }
#line 840 "pd_util.m"
            break;
#line 840 "pd_util.m"
          case (MR_Integer) 1:
#line 840 "pd_util.m"
            {
#line 840 "pd_util.m"
              *transform_hlds__pd_util__Inst_10 = transform_hlds__pd_util__InstB_7;
#line 840 "pd_util.m"
              transform_hlds__pd_util__succeeded = MR_TRUE;
#line 840 "pd_util.m"
            }
#line 840 "pd_util.m"
            break;
#line 840 "pd_util.m"
        }
#line 840 "pd_util.m"
        break;
#line 840 "pd_util.m"
      case (MR_Integer) 2:
#line 870 "pd_util.m"
        {
#line 871 "pd_util.m"
          MR_Word transform_hlds__pd_util__V_33_33;
#line 871 "pd_util.m"
          MR_Word transform_hlds__pd_util__V_34_34;

#line 871 "pd_util.m"
          transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__InstB_7)) == (MR_mktag((MR_Integer) 2)));
#line 871 "pd_util.m"
          if (transform_hlds__pd_util__succeeded)
#line 871 "pd_util.m"
            {
#line 871 "pd_util.m"
              transform_hlds__pd_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__InstB_7, (MR_Integer) 0)));
#line 871 "pd_util.m"
              transform_hlds__pd_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__InstB_7, (MR_Integer) 1)));
#line 872 "pd_util.m"
              *transform_hlds__pd_util__Inst_10 = transform_hlds__pd_util__InstB_7;
#line 872 "pd_util.m"
              transform_hlds__pd_util__succeeded = MR_TRUE;
#line 871 "pd_util.m"
            }
#line 870 "pd_util.m"
        }
#line 840 "pd_util.m"
        break;
#line 840 "pd_util.m"
      case (MR_Integer) 3:
#line 840 "pd_util.m"
#line 840 "pd_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA_6, (MR_Integer) 0)))) {
#line 840 "pd_util.m"
          default:
#line 840 "pd_util.m"
            transform_hlds__pd_util__succeeded = MR_FALSE;
#line 840 "pd_util.m"
            break;
#line 840 "pd_util.m"
          case (MR_Integer) 0:
#line 840 "pd_util.m"
            {
#line 840 "pd_util.m"
              MR_Word transform_hlds__pd_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA_6, (MR_Integer) 3)));
#line 859 "pd_util.m"
              MR_Word transform_hlds__pd_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA_6, (MR_Integer) 2)));
#line 859 "pd_util.m"
              MR_Word transform_hlds__pd_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA_6, (MR_Integer) 1)));

#line 840 "pd_util.m"
              if (((((MR_tag((MR_Word) transform_hlds__pd_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 864 "pd_util.m"
                {
#line 864 "pd_util.m"
                  MR_Word transform_hlds__pd_util__UniqB_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 1)));
#line 864 "pd_util.m"
                  MR_Word transform_hlds__pd_util__BoundInstsB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 3)));
#line 865 "pd_util.m"
                  MR_Word transform_hlds__pd_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 2)));

#line 867 "pd_util.m"
                  {
#line 867 "pd_util.m"
                    return transform_hlds__pd_util__succeeded = transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(transform_hlds__pd_util__V_41_41, transform_hlds__pd_util__BoundInstsB_30, transform_hlds__pd_util__Expansions_8, transform_hlds__pd_util__ModuleInfo_9, transform_hlds__pd_util__UniqB_28, transform_hlds__pd_util__BoundInstsB_30, transform_hlds__pd_util__Inst_10);
                  }
#line 864 "pd_util.m"
                }
#line 840 "pd_util.m"
              else
#line 840 "pd_util.m"
              if (((((MR_tag((MR_Word) transform_hlds__pd_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 862 "pd_util.m"
                {
#line 862 "pd_util.m"
                  *transform_hlds__pd_util__Inst_10 = transform_hlds__pd_util__InstB_7;
#line 862 "pd_util.m"
                  transform_hlds__pd_util__succeeded = MR_TRUE;
#line 862 "pd_util.m"
                }
#line 840 "pd_util.m"
              else
#line 840 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_FALSE;
#line 840 "pd_util.m"
            }
#line 840 "pd_util.m"
            break;
#line 840 "pd_util.m"
          case (MR_Integer) 1:
#line 840 "pd_util.m"
            {
#line 5172 "transform_hlds.pd_util.c"
              MR_Word transform_hlds__pd_util__V_47_47;
#line 5174 "transform_hlds.pd_util.c"
              MR_Word transform_hlds__pd_util__V_48_48;

#line 5177 "transform_hlds.pd_util.c"
              transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 5179 "transform_hlds.pd_util.c"
              if (transform_hlds__pd_util__succeeded)
#line 5181 "transform_hlds.pd_util.c"
                {
#line 5183 "transform_hlds.pd_util.c"
                  transform_hlds__pd_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 1)));
#line 5185 "transform_hlds.pd_util.c"
                  transform_hlds__pd_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 2)));
#line 851 "pd_util.m"
                  *transform_hlds__pd_util__Inst_10 = transform_hlds__pd_util__InstB_7;
#line 851 "pd_util.m"
                  transform_hlds__pd_util__succeeded = MR_TRUE;
#line 5191 "transform_hlds.pd_util.c"
                }
#line 840 "pd_util.m"
            }
#line 840 "pd_util.m"
            break;
#line 840 "pd_util.m"
          case (MR_Integer) 5:
#line 874 "pd_util.m"
            {
#line 874 "pd_util.m"
              MR_Word transform_hlds__pd_util__Name_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA_6, (MR_Integer) 1)));
#line 874 "pd_util.m"
              MR_Word transform_hlds__pd_util__ArgsA_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA_6, (MR_Integer) 2)));
#line 874 "pd_util.m"
              MR_Word transform_hlds__pd_util__ArgsB_37;
#line 874 "pd_util.m"
              MR_Word transform_hlds__pd_util__Args_38;
#line 874 "pd_util.m"
              MR_Word transform_hlds__pd_util__V_40_40;

#line 875 "pd_util.m"
              transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 875 "pd_util.m"
              if (transform_hlds__pd_util__succeeded)
#line 875 "pd_util.m"
                {
#line 875 "pd_util.m"
                  transform_hlds__pd_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 1)));
#line 875 "pd_util.m"
                  transform_hlds__pd_util__ArgsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB_7, (MR_Integer) 2)));
#line 875 "pd_util.m"
                  {
#line 875 "pd_util.m"
                    transform_hlds__pd_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__pd_util__Name_35, transform_hlds__pd_util__V_40_40);
                  }
#line 874 "pd_util.m"
                  if (transform_hlds__pd_util__succeeded)
#line 874 "pd_util.m"
                    {
#line 876 "pd_util.m"
                      {
#line 876 "pd_util.m"
                        transform_hlds__pd_util__succeeded = transform_hlds__pd_util__inst_list_MSG_5_p_0(transform_hlds__pd_util__ArgsA_36, transform_hlds__pd_util__ArgsB_37, transform_hlds__pd_util__Expansions_8, transform_hlds__pd_util__ModuleInfo_9, &transform_hlds__pd_util__Args_38);
                      }
#line 874 "pd_util.m"
                      if (transform_hlds__pd_util__succeeded)
#line 874 "pd_util.m"
                        {
#line 877 "pd_util.m"
                          {
#line 877 "pd_util.m"
                            MR_Word base;
#line 877 "pd_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 877 "pd_util.m"
                            *transform_hlds__pd_util__Inst_10 = base;
#line 877 "pd_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 877 "pd_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__pd_util__Name_35));
#line 877 "pd_util.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__pd_util__Args_38));
#line 877 "pd_util.m"
                          }
#line 877 "pd_util.m"
                          transform_hlds__pd_util__succeeded = MR_TRUE;
#line 874 "pd_util.m"
                        }
#line 874 "pd_util.m"
                    }
#line 875 "pd_util.m"
                }
#line 874 "pd_util.m"
            }
#line 840 "pd_util.m"
            break;
#line 840 "pd_util.m"
        }
#line 840 "pd_util.m"
        break;
#line 840 "pd_util.m"
    }
#line 840 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 840 "pd_util.m"
  }
#line 835 "pd_util.m"
}

#line 766 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__combine_vars_4_p_0(
#line 766 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_1,
#line 766 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 766 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3,
#line 766 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_4)
#line 766 "pd_util.m"
{
#line 769 "pd_util.m"
  while (MR_TRUE)
#line 769 "pd_util.m"
    {
#line 769 "pd_util.m"
      /* tailcall optimized into a loop */
#line 769 "pd_util.m"
      {
#line 769 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 769 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 769 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_Vars_4 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3;
#line 769 "pd_util.m"
        else
#line 770 "pd_util.m"
          {
#line 770 "pd_util.m"
            MR_Word transform_hlds__pd_util__ExtraVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 770 "pd_util.m"
            MR_Word transform_hlds__pd_util__ExtraVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 770 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_17_17;
#line 774 "pd_util.m"
            MR_Word transform_hlds__pd_util__Branches0_13;
#line 771 "pd_util.m"
            MR_Box transform_hlds__pd_util__conv0_Branches0_13;

#line 771 "pd_util.m"
            {
#line 771 "pd_util.m"
              transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3, ((MR_Box) (transform_hlds__pd_util__ExtraVar_10)), &transform_hlds__pd_util__conv0_Branches0_13);
            }
#line 771 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 771 "pd_util.m"
              {
#line 771 "pd_util.m"
                transform_hlds__pd_util__Branches0_13 = ((MR_Word) transform_hlds__pd_util__conv0_Branches0_13);
#line 771 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_TRUE;
#line 771 "pd_util.m"
              }
#line 774 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 772 "pd_util.m"
              {
#line 772 "pd_util.m"
                MR_Word transform_hlds__pd_util__Branches_14;

#line 772 "pd_util.m"
                {
#line 772 "pd_util.m"
                  mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_1)), transform_hlds__pd_util__Branches0_13, &transform_hlds__pd_util__Branches_14);
                }
#line 773 "pd_util.m"
                {
#line 773 "pd_util.m"
                  mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_util__ExtraVar_10)), ((MR_Box) (transform_hlds__pd_util__Branches_14)), transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3, &transform_hlds__pd_util__STATE_VARIABLE_Vars_17_17);
                }
#line 772 "pd_util.m"
              }
#line 774 "pd_util.m"
            else
#line 775 "pd_util.m"
              {
#line 775 "pd_util.m"
                MR_Word transform_hlds__pd_util__Branches_20;

#line 775 "pd_util.m"
                {
#line 775 "pd_util.m"
                  transform_hlds__pd_util__Branches_20 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_1)));
                }
#line 776 "pd_util.m"
                {
#line 776 "pd_util.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_util__ExtraVar_10)), ((MR_Box) (transform_hlds__pd_util__Branches_20)), transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3, &transform_hlds__pd_util__STATE_VARIABLE_Vars_17_17);
                }
#line 775 "pd_util.m"
              }
#line 778 "pd_util.m"
            /* direct tailcall eliminated */
#line 778 "pd_util.m"
            {
#line 778 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__2__tmp_copy_2 = transform_hlds__pd_util__ExtraVars_11;
#line 778 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_3 = transform_hlds__pd_util__STATE_VARIABLE_Vars_17_17;

#line 778 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_3;
#line 778 "pd_util.m"
              transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__HeadVar__2__tmp_copy_2;
#line 778 "pd_util.m"
            }
#line 778 "pd_util.m"
            continue;
#line 770 "pd_util.m"
          }
#line 769 "pd_util.m"
      }
#line 769 "pd_util.m"
      break;
#line 769 "pd_util.m"
    }
#line 766 "pd_util.m"
}

#line 712 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__examine_case_list_10_p_0(
#line 712 "pd_util.m"
  MR_Word transform_hlds__pd_util__ProcArgInfo_1,
#line 712 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_2,
#line 712 "pd_util.m"
  MR_Word transform_hlds__pd_util__Var_3,
#line 712 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
#line 712 "pd_util.m"
  MR_Word transform_hlds__pd_util__VarTypes_5,
#line 712 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap0_6,
#line 712 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
#line 712 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8,
#line 712 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_9,
#line 712 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_10)
#line 712 "pd_util.m"
{
#line 717 "pd_util.m"
  while (MR_TRUE)
#line 717 "pd_util.m"
    {
#line 717 "pd_util.m"
      /* tailcall optimized into a loop */
#line 717 "pd_util.m"
      {
#line 717 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 717 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 717 "pd_util.m"
          {
#line 717 "pd_util.m"
            *transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_10 = transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_9;
#line 717 "pd_util.m"
            *transform_hlds__pd_util__STATE_VARIABLE_Vars_8 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7;
#line 717 "pd_util.m"
          }
#line 717 "pd_util.m"
        else
#line 719 "pd_util.m"
          {
#line 719 "pd_util.m"
            MR_Word transform_hlds__pd_util__Case_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 0)));
#line 719 "pd_util.m"
            MR_Word transform_hlds__pd_util__Cases_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 1)));
#line 719 "pd_util.m"
            MR_Word transform_hlds__pd_util__Type_31;
#line 719 "pd_util.m"
            MR_Word transform_hlds__pd_util__MainConsId_32;
#line 719 "pd_util.m"
            MR_Word transform_hlds__pd_util__OtherConsIds_33;
#line 719 "pd_util.m"
            MR_Word transform_hlds__pd_util__Goal_34;
#line 719 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMap1_35;
#line 719 "pd_util.m"
            MR_Word transform_hlds__pd_util__GoalList_36;
#line 719 "pd_util.m"
            MR_Integer transform_hlds__pd_util__NextBranch_37;
#line 719 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_42_42;
#line 719 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_43_43;

#line 720 "pd_util.m"
            {
#line 720 "pd_util.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__pd_util__VarTypes_5, transform_hlds__pd_util__Var_3, &transform_hlds__pd_util__Type_31);
            }
#line 721 "pd_util.m"
            transform_hlds__pd_util__MainConsId_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Case_25, (MR_Integer) 0)));
#line 721 "pd_util.m"
            transform_hlds__pd_util__OtherConsIds_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Case_25, (MR_Integer) 1)));
#line 721 "pd_util.m"
            transform_hlds__pd_util__Goal_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Case_25, (MR_Integer) 2)));
#line 722 "pd_util.m"
            {
#line 722 "pd_util.m"
              hlds__instmap__bind_var_to_functors_8_p_0(transform_hlds__pd_util__Var_3, transform_hlds__pd_util__Type_31, transform_hlds__pd_util__MainConsId_32, transform_hlds__pd_util__OtherConsIds_33, transform_hlds__pd_util__InstMap0_6, &transform_hlds__pd_util__InstMap1_35, transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 724 "pd_util.m"
            {
#line 724 "pd_util.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__Goal_34, &transform_hlds__pd_util__GoalList_36);
            }
#line 725 "pd_util.m"
            {
#line 725 "pd_util.m"
              transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_42_42, transform_hlds__pd_util__ProcArgInfo_1, transform_hlds__pd_util__BranchNo_2, transform_hlds__pd_util__GoalList_36, transform_hlds__pd_util__InstMap1_35, transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7, &transform_hlds__pd_util__STATE_VARIABLE_Vars_43_43);
            }
#line 727 "pd_util.m"
            transform_hlds__pd_util__NextBranch_37 = (transform_hlds__pd_util__BranchNo_2 + (MR_Integer) 1);
#line 728 "pd_util.m"
            /* direct tailcall eliminated */
#line 728 "pd_util.m"
            {
#line 728 "pd_util.m"
              MR_Integer transform_hlds__pd_util__BranchNo__tmp_copy_2 = transform_hlds__pd_util__NextBranch_37;
#line 728 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__4__tmp_copy_4 = transform_hlds__pd_util__Cases_26;
#line 728 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_7 = transform_hlds__pd_util__STATE_VARIABLE_Vars_43_43;
#line 728 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_9 = transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_42_42;

#line 728 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_9 = transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_9;
#line 728 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_7;
#line 728 "pd_util.m"
              transform_hlds__pd_util__HeadVar__4_4 = transform_hlds__pd_util__HeadVar__4__tmp_copy_4;
#line 728 "pd_util.m"
              transform_hlds__pd_util__BranchNo_2 = transform_hlds__pd_util__BranchNo__tmp_copy_2;
#line 728 "pd_util.m"
            }
#line 728 "pd_util.m"
            continue;
#line 719 "pd_util.m"
          }
#line 717 "pd_util.m"
      }
#line 717 "pd_util.m"
      break;
#line 717 "pd_util.m"
    }
#line 712 "pd_util.m"
}

#line 652 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_sub_branch_vars_goal_8_p_0(
#line 652 "pd_util.m"
  MR_Word transform_hlds__pd_util__ProcArgInfo_1,
#line 652 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 652 "pd_util.m"
  MR_Word transform_hlds__pd_util__VarTypes_3,
#line 652 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap0_4,
#line 652 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__5_5,
#line 652 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__6_6,
#line 652 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__7_7,
#line 652 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__8_8)
#line 652 "pd_util.m"
{
#line 657 "pd_util.m"
  while (MR_TRUE)
#line 657 "pd_util.m"
    {
#line 657 "pd_util.m"
      /* tailcall optimized into a loop */
#line 657 "pd_util.m"
      {
#line 657 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 657 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 657 "pd_util.m"
          {
#line 657 "pd_util.m"
            *transform_hlds__pd_util__HeadVar__6_6 = transform_hlds__pd_util__HeadVar__5_5;
#line 657 "pd_util.m"
            *transform_hlds__pd_util__HeadVar__8_8 = transform_hlds__pd_util__HeadVar__7_7;
#line 657 "pd_util.m"
          }
#line 657 "pd_util.m"
        else
#line 659 "pd_util.m"
          {
#line 659 "pd_util.m"
            MR_Word transform_hlds__pd_util__Goal_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 659 "pd_util.m"
            MR_Word transform_hlds__pd_util__GoalList_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 659 "pd_util.m"
            MR_Word transform_hlds__pd_util__GoalExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_17, (MR_Integer) 0)));
#line 659 "pd_util.m"
            MR_Word transform_hlds__pd_util__GoalInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_17, (MR_Integer) 1)));
#line 659 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMapDelta_69;
#line 659 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMap_70;
#line 659 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79;
#line 659 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85;

#line 672 "pd_util.m"
#line 672 "pd_util.m"
            switch (MR_tag((MR_Word) transform_hlds__pd_util__GoalExpr_24)) {
#line 672 "pd_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 672 "pd_util.m"
              case (MR_Integer) 0:
#line 686 "pd_util.m"
                {
#line 686 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
#line 686 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 686 "pd_util.m"
                }
#line 672 "pd_util.m"
                break;
#line 672 "pd_util.m"
              case (MR_Integer) 1:
#line 681 "pd_util.m"
                {
#line 681 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
#line 681 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 681 "pd_util.m"
                }
#line 672 "pd_util.m"
                break;
#line 672 "pd_util.m"
              case (MR_Integer) 2:
#line 682 "pd_util.m"
                {
#line 682 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
#line 682 "pd_util.m"
                  transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 682 "pd_util.m"
                }
#line 672 "pd_util.m"
                break;
#line 672 "pd_util.m"
              case (MR_Integer) 3:
#line 672 "pd_util.m"
#line 672 "pd_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 0)))) {
#line 672 "pd_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 672 "pd_util.m"
                  case (MR_Integer) 0:
#line 683 "pd_util.m"
                    {
#line 683 "pd_util.m"
                      transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
#line 683 "pd_util.m"
                      transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 683 "pd_util.m"
                    }
#line 672 "pd_util.m"
                    break;
#line 672 "pd_util.m"
                  case (MR_Integer) 1:
#line 684 "pd_util.m"
                    {
#line 684 "pd_util.m"
                      transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
#line 684 "pd_util.m"
                      transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 684 "pd_util.m"
                    }
#line 672 "pd_util.m"
                    break;
#line 672 "pd_util.m"
                  case (MR_Integer) 2:
#line 685 "pd_util.m"
                    {
#line 685 "pd_util.m"
                      transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
#line 685 "pd_util.m"
                      transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 685 "pd_util.m"
                    }
#line 672 "pd_util.m"
                    break;
#line 672 "pd_util.m"
                  case (MR_Integer) 3:
#line 673 "pd_util.m"
                    {
#line 673 "pd_util.m"
                      MR_Word transform_hlds__pd_util__Goals_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 1)));

#line 674 "pd_util.m"
                      {
#line 674 "pd_util.m"
                        transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_p_0(transform_hlds__pd_util__HeadVar__7_7, transform_hlds__pd_util__ProcArgInfo_1, (MR_Integer) 1, transform_hlds__pd_util__Goals_36, transform_hlds__pd_util__InstMap0_4, transform_hlds__pd_util__HeadVar__5_5, &transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85);
                      }
#line 673 "pd_util.m"
                      transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 673 "pd_util.m"
                    }
#line 672 "pd_util.m"
                    break;
#line 672 "pd_util.m"
                  case (MR_Integer) 4:
#line 677 "pd_util.m"
                    {
#line 677 "pd_util.m"
                      MR_Word transform_hlds__pd_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 1)));
#line 677 "pd_util.m"
                      MR_Word transform_hlds__pd_util__Cases_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 3)));
#line 677 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 2)));

#line 678 "pd_util.m"
                      {
#line 678 "pd_util.m"
                        transform_hlds__pd_util__examine_case_list_10_p_0(transform_hlds__pd_util__ProcArgInfo_1, (MR_Integer) 1, transform_hlds__pd_util__Var_37, transform_hlds__pd_util__Cases_39, transform_hlds__pd_util__VarTypes_3, transform_hlds__pd_util__InstMap0_4, transform_hlds__pd_util__HeadVar__5_5, &transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85, transform_hlds__pd_util__HeadVar__7_7, &transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79);
                      }
#line 677 "pd_util.m"
                    }
#line 672 "pd_util.m"
                    break;
#line 672 "pd_util.m"
                  case (MR_Integer) 5:
#line 687 "pd_util.m"
                    {
#line 687 "pd_util.m"
                      transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
#line 687 "pd_util.m"
                      transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 687 "pd_util.m"
                    }
#line 672 "pd_util.m"
                    break;
#line 672 "pd_util.m"
                  case (MR_Integer) 6:
#line 662 "pd_util.m"
                    {
#line 662 "pd_util.m"
                      MR_Word transform_hlds__pd_util__Cond_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 2)));
#line 662 "pd_util.m"
                      MR_Word transform_hlds__pd_util__Then_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 3)));
#line 662 "pd_util.m"
                      MR_Word transform_hlds__pd_util__Else_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 4)));
#line 662 "pd_util.m"
                      MR_Word transform_hlds__pd_util__CondInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Cond_27, (MR_Integer) 1)));
#line 662 "pd_util.m"
                      MR_Word transform_hlds__pd_util__CondDelta_32;
#line 662 "pd_util.m"
                      MR_Word transform_hlds__pd_util__InstMap1_33;
#line 662 "pd_util.m"
                      MR_Word transform_hlds__pd_util__ThenList_34;
#line 662 "pd_util.m"
                      MR_Word transform_hlds__pd_util__ElseList_35;
#line 662 "pd_util.m"
                      MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_83_83;
#line 662 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 1)));
#line 663 "pd_util.m"
                      MR_Word transform_hlds__pd_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Cond_27, (MR_Integer) 0)));

#line 664 "pd_util.m"
                      {
#line 664 "pd_util.m"
                        transform_hlds__pd_util__CondDelta_32 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__CondInfo_31);
                      }
#line 665 "pd_util.m"
                      {
#line 665 "pd_util.m"
                        hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__pd_util__InstMap0_4, transform_hlds__pd_util__CondDelta_32, &transform_hlds__pd_util__InstMap1_33);
                      }
#line 666 "pd_util.m"
                      {
#line 666 "pd_util.m"
                        hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__Then_28, &transform_hlds__pd_util__ThenList_34);
                      }
#line 667 "pd_util.m"
                      {
#line 667 "pd_util.m"
                        transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(transform_hlds__pd_util__HeadVar__7_7, transform_hlds__pd_util__ProcArgInfo_1, (MR_Integer) 1, transform_hlds__pd_util__ThenList_34, transform_hlds__pd_util__InstMap1_33, transform_hlds__pd_util__HeadVar__5_5, &transform_hlds__pd_util__STATE_VARIABLE_Vars_83_83);
                      }
#line 669 "pd_util.m"
                      {
#line 669 "pd_util.m"
                        hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__Else_29, &transform_hlds__pd_util__ElseList_35);
                      }
#line 670 "pd_util.m"
                      {
#line 670 "pd_util.m"
                        transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(transform_hlds__pd_util__HeadVar__7_7, transform_hlds__pd_util__ProcArgInfo_1, (MR_Integer) 2, transform_hlds__pd_util__ElseList_35, transform_hlds__pd_util__InstMap0_4, transform_hlds__pd_util__STATE_VARIABLE_Vars_83_83, &transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85);
                      }
#line 662 "pd_util.m"
                      transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
#line 662 "pd_util.m"
                    }
#line 672 "pd_util.m"
                    break;
#line 672 "pd_util.m"
                  case (MR_Integer) 7:
#line 690 "pd_util.m"
                    {
#line 691 "pd_util.m"
                      {
#line 691 "pd_util.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_util", (MR_String) "predicate \140transform_hlds.pd_util.get_sub_branch_vars_goal\'/8", (MR_String) "shorthand");
#line 691 "pd_util.m"
                        return;
                      }
#line 690 "pd_util.m"
                    }
#line 672 "pd_util.m"
                    break;
#line 672 "pd_util.m"
                }
#line 672 "pd_util.m"
                break;
#line 672 "pd_util.m"
            }
#line 693 "pd_util.m"
            {
#line 693 "pd_util.m"
              transform_hlds__pd_util__InstMapDelta_69 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo_25);
            }
#line 694 "pd_util.m"
            {
#line 694 "pd_util.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__pd_util__InstMap0_4, transform_hlds__pd_util__InstMapDelta_69, &transform_hlds__pd_util__InstMap_70);
            }
#line 695 "pd_util.m"
            /* direct tailcall eliminated */
#line 695 "pd_util.m"
            {
#line 695 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__2__tmp_copy_2 = transform_hlds__pd_util__GoalList_18;
#line 695 "pd_util.m"
              MR_Word transform_hlds__pd_util__InstMap0__tmp_copy_4 = transform_hlds__pd_util__InstMap_70;
#line 695 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__5__tmp_copy_5 = transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85;
#line 695 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__7__tmp_copy_7 = transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79;

#line 695 "pd_util.m"
              transform_hlds__pd_util__HeadVar__7_7 = transform_hlds__pd_util__HeadVar__7__tmp_copy_7;
#line 695 "pd_util.m"
              transform_hlds__pd_util__HeadVar__5_5 = transform_hlds__pd_util__HeadVar__5__tmp_copy_5;
#line 695 "pd_util.m"
              transform_hlds__pd_util__InstMap0_4 = transform_hlds__pd_util__InstMap0__tmp_copy_4;
#line 695 "pd_util.m"
              transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__HeadVar__2__tmp_copy_2;
#line 695 "pd_util.m"
            }
#line 695 "pd_util.m"
            continue;
#line 659 "pd_util.m"
          }
#line 657 "pd_util.m"
      }
#line 657 "pd_util.m"
      break;
#line 657 "pd_util.m"
    }
#line 652 "pd_util.m"
}

#line 611 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_branch_vars_7_p_0_1(
#line 611 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 611 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 611 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
#line 611 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_3)
#line 611 "pd_util.m"
{
#line 611 "pd_util.m"
  {
#line 611 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
#line 611 "pd_util.m"
    MR_Word transform_hlds__pd_util__conv0_HeadVar__7_45;

#line 611 "pd_util.m"
    {
#line 611 "pd_util.m"
      transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__626__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__pd_util__wrapper_arg_1), ((MR_Word) transform_hlds__pd_util__wrapper_arg_2), &transform_hlds__pd_util__conv0_HeadVar__7_45);
    }
#line 611 "pd_util.m"
    *transform_hlds__pd_util__wrapper_arg_3 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__7_45));
#line 611 "pd_util.m"
  }
#line 611 "pd_util.m"
}

#line 604 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__get_branch_vars_7_p_0(
#line 604 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 604 "pd_util.m"
  MR_Word transform_hlds__pd_util__Goal_2,
#line 604 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
#line 604 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_4,
#line 604 "pd_util.m"
  MR_Integer transform_hlds__pd_util__BranchNo_5,
#line 604 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0_6,
#line 604 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_7)
#line 604 "pd_util.m"
{
#line 608 "pd_util.m"
  while (MR_TRUE)
#line 608 "pd_util.m"
    {
#line 608 "pd_util.m"
      /* tailcall optimized into a loop */
#line 608 "pd_util.m"
      {
#line 608 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 608 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 608 "pd_util.m"
          {
#line 608 "pd_util.m"
            *transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_7 = transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0_6;
#line 608 "pd_util.m"
            transform_hlds__pd_util__succeeded = MR_TRUE;
#line 608 "pd_util.m"
          }
#line 608 "pd_util.m"
        else
#line 610 "pd_util.m"
          {
#line 610 "pd_util.m"
            MR_Word transform_hlds__pd_util__TypeInfo_65_65;
#line 610 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMapDelta_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__3_3, (MR_Integer) 0)));
#line 610 "pd_util.m"
            MR_Word transform_hlds__pd_util__InstMapDeltas_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__3_3, (MR_Integer) 1)));
#line 610 "pd_util.m"
            MR_Word transform_hlds__pd_util__AddExtraInfoVars_22;
#line 610 "pd_util.m"
            MR_Word transform_hlds__pd_util__ChangedVars_32;
#line 610 "pd_util.m"
            MR_Word transform_hlds__pd_util__ChangedVarsList_33;
#line 610 "pd_util.m"
            MR_Integer transform_hlds__pd_util__NextBranch_40;
#line 610 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_50_50;
#line 610 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_52_52;
#line 632 "pd_util.m"
            MR_Box transform_hlds__pd_util__conv1_STATE_VARIABLE_ExtraVars_50_50;
#line 643 "pd_util.m"
            MR_Word transform_hlds__pd_util__SwitchVar_34;
#line 636 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_51_51;
#line 636 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_37_37;
#line 636 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_35_35;
#line 636 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_36_36;

#line 611 "pd_util.m"
            {
#line 611 "pd_util.m"
              transform_hlds__pd_util__AddExtraInfoVars_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 611 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_5[0]));
#line 611 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 1) = ((MR_Box) (transform_hlds__pd_util__get_branch_vars_7_p_0_1));
#line 611 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 611 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 3) = ((MR_Box) (transform_hlds__pd_util__ModuleInfo_1));
#line 611 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 4) = ((MR_Box) (transform_hlds__pd_util__InstMap_4));
#line 611 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 5) = ((MR_Box) (transform_hlds__pd_util__BranchNo_5));
#line 611 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 6) = ((MR_Box) (transform_hlds__pd_util__InstMapDelta_17));
#line 611 "pd_util.m"
            }
#line 630 "pd_util.m"
            {
#line 630 "pd_util.m"
              hlds__instmap__instmap_delta_changed_vars_2_p_0(transform_hlds__pd_util__InstMapDelta_17, &transform_hlds__pd_util__ChangedVars_32);
            }
#line 631 "pd_util.m"
            {
#line 631 "pd_util.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_util__ChangedVars_32, &transform_hlds__pd_util__ChangedVarsList_33);
            }
#line 6006 "transform_hlds.pd_util.c"
            transform_hlds__pd_util__TypeInfo_65_65 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 632 "pd_util.m"
            {
#line 632 "pd_util.m"
              mercury__list__foldl_4_p_0(transform_hlds__pd_util__TypeInfo_65_65, (MR_Word) &transform_hlds__pd_util_scalar_common_2[1], transform_hlds__pd_util__AddExtraInfoVars_22, transform_hlds__pd_util__ChangedVarsList_33, ((MR_Box) (transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0_6)), &transform_hlds__pd_util__conv1_STATE_VARIABLE_ExtraVars_50_50);
            }
#line 632 "pd_util.m"
            transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_50_50 = ((MR_Word) transform_hlds__pd_util__conv1_STATE_VARIABLE_ExtraVars_50_50);
#line 636 "pd_util.m"
            transform_hlds__pd_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_2, (MR_Integer) 0)));
#line 636 "pd_util.m"
            transform_hlds__pd_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_2, (MR_Integer) 1)));
#line 636 "pd_util.m"
            transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__V_51_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_51_51, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 636 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 636 "pd_util.m"
              {
#line 636 "pd_util.m"
                transform_hlds__pd_util__SwitchVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_51_51, (MR_Integer) 1)));
#line 636 "pd_util.m"
                transform_hlds__pd_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_51_51, (MR_Integer) 2)));
#line 636 "pd_util.m"
                transform_hlds__pd_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_51_51, (MR_Integer) 3)));
#line 641 "pd_util.m"
                {
#line 641 "pd_util.m"
                  MR_Word transform_hlds__pd_util__SwitchVarSet_39;
#line 639 "pd_util.m"
                  MR_Word transform_hlds__pd_util__SwitchVarSet0_38;
#line 637 "pd_util.m"
                  MR_Box transform_hlds__pd_util__conv2_SwitchVarSet0_38;

#line 637 "pd_util.m"
                  {
#line 637 "pd_util.m"
                    transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_util__TypeInfo_65_65, (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_50_50, ((MR_Box) (transform_hlds__pd_util__SwitchVar_34)), &transform_hlds__pd_util__conv2_SwitchVarSet0_38);
                  }
#line 637 "pd_util.m"
                  if (transform_hlds__pd_util__succeeded)
#line 637 "pd_util.m"
                    {
#line 637 "pd_util.m"
                      transform_hlds__pd_util__SwitchVarSet0_38 = ((MR_Word) transform_hlds__pd_util__conv2_SwitchVarSet0_38);
#line 637 "pd_util.m"
                      transform_hlds__pd_util__succeeded = MR_TRUE;
#line 637 "pd_util.m"
                    }
#line 639 "pd_util.m"
                  if (transform_hlds__pd_util__succeeded)
#line 638 "pd_util.m"
                    {
#line 638 "pd_util.m"
                      {
#line 638 "pd_util.m"
                        mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_5)), transform_hlds__pd_util__SwitchVarSet0_38, &transform_hlds__pd_util__SwitchVarSet_39);
                      }
#line 638 "pd_util.m"
                    }
#line 639 "pd_util.m"
                  else
#line 640 "pd_util.m"
                    {
#line 640 "pd_util.m"
                      {
#line 640 "pd_util.m"
                        transform_hlds__pd_util__SwitchVarSet_39 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_5)));
                      }
#line 640 "pd_util.m"
                    }
#line 642 "pd_util.m"
                  {
#line 642 "pd_util.m"
                    mercury__map__set_4_p_0(transform_hlds__pd_util__TypeInfo_65_65, (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_util__SwitchVar_34)), ((MR_Box) (transform_hlds__pd_util__SwitchVarSet_39)), transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_50_50, &transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_52_52);
                  }
#line 641 "pd_util.m"
                }
#line 636 "pd_util.m"
              }
#line 636 "pd_util.m"
            else
#line 643 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_52_52 = transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_50_50;
#line 646 "pd_util.m"
            transform_hlds__pd_util__NextBranch_40 = (transform_hlds__pd_util__BranchNo_5 + (MR_Integer) 1);
#line 647 "pd_util.m"
            /* direct tailcall eliminated */
#line 647 "pd_util.m"
            {
#line 647 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__3__tmp_copy_3 = transform_hlds__pd_util__InstMapDeltas_18;
#line 647 "pd_util.m"
              MR_Integer transform_hlds__pd_util__BranchNo__tmp_copy_5 = transform_hlds__pd_util__NextBranch_40;
#line 647 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0__tmp_copy_6 = transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_52_52;

#line 647 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0_6 = transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0__tmp_copy_6;
#line 647 "pd_util.m"
              transform_hlds__pd_util__BranchNo_5 = transform_hlds__pd_util__BranchNo__tmp_copy_5;
#line 647 "pd_util.m"
              transform_hlds__pd_util__HeadVar__3_3 = transform_hlds__pd_util__HeadVar__3__tmp_copy_3;
#line 647 "pd_util.m"
            }
#line 647 "pd_util.m"
            continue;
#line 610 "pd_util.m"
          }
#line 608 "pd_util.m"
        return transform_hlds__pd_util__succeeded;
#line 608 "pd_util.m"
      }
#line 608 "pd_util.m"
      break;
#line 608 "pd_util.m"
    }
#line 604 "pd_util.m"
}

#line 594 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_left_vars_3_p_0(
#line 594 "pd_util.m"
  MR_Word transform_hlds__pd_util__Goal_4,
#line 594 "pd_util.m"
  MR_Word transform_hlds__pd_util__Vars0_5,
#line 594 "pd_util.m"
  MR_Word * transform_hlds__pd_util__Vars_6)
#line 594 "pd_util.m"
{
#line 600 "pd_util.m"
  {
#line 600 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 600 "pd_util.m"
    MR_Word transform_hlds__pd_util__Var_7;
#line 598 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_4, (MR_Integer) 0)));
#line 598 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_4, (MR_Integer) 1)));
#line 598 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_8_8;
#line 598 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_9_9;

#line 598 "pd_util.m"
    transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__V_11_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_11_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 598 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 598 "pd_util.m"
      {
#line 598 "pd_util.m"
        transform_hlds__pd_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_11_11, (MR_Integer) 1)));
#line 598 "pd_util.m"
        transform_hlds__pd_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_11_11, (MR_Integer) 2)));
#line 598 "pd_util.m"
        transform_hlds__pd_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__V_11_11, (MR_Integer) 3)));
#line 599 "pd_util.m"
        {
#line 599 "pd_util.m"
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_util__Var_7, transform_hlds__pd_util__Vars0_5, transform_hlds__pd_util__Vars_6);
#line 599 "pd_util.m"
          return;
        }
#line 598 "pd_util.m"
      }
#line 598 "pd_util.m"
    else
#line 601 "pd_util.m"
      *transform_hlds__pd_util__Vars_6 = transform_hlds__pd_util__Vars0_5;
#line 600 "pd_util.m"
  }
#line 594 "pd_util.m"
}

#line 482 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_extra_info_headvars_8_p_0(
#line 482 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 482 "pd_util.m"
  MR_Integer transform_hlds__pd_util__ArgNo_2,
#line 482 "pd_util.m"
  MR_Word transform_hlds__pd_util__LeftVars_3,
#line 482 "pd_util.m"
  MR_Word transform_hlds__pd_util__VarInfo_4,
#line 482 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__5_5,
#line 482 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__6_6,
#line 482 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__7_7,
#line 482 "pd_util.m"
  MR_Word * transform_hlds__pd_util__HeadVar__8_8)
#line 482 "pd_util.m"
{
#line 487 "pd_util.m"
  while (MR_TRUE)
#line 487 "pd_util.m"
    {
#line 487 "pd_util.m"
      /* tailcall optimized into a loop */
#line 487 "pd_util.m"
      {
#line 487 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 487 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "pd_util.m"
          {
#line 487 "pd_util.m"
            *transform_hlds__pd_util__HeadVar__8_8 = transform_hlds__pd_util__HeadVar__7_7;
#line 487 "pd_util.m"
            *transform_hlds__pd_util__HeadVar__6_6 = transform_hlds__pd_util__HeadVar__5_5;
#line 487 "pd_util.m"
          }
#line 487 "pd_util.m"
        else
#line 489 "pd_util.m"
          {
#line 489 "pd_util.m"
            MR_Word transform_hlds__pd_util__HeadVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));
#line 489 "pd_util.m"
            MR_Word transform_hlds__pd_util__HeadVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
#line 489 "pd_util.m"
            MR_Integer transform_hlds__pd_util__NextArgNo_26;
#line 489 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_ThisProcArgs_31_31;
#line 489 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_ThisProcLeftVars_32_32;
#line 492 "pd_util.m"
            MR_Word transform_hlds__pd_util__ThisVarInfo_25;
#line 490 "pd_util.m"
            MR_Box transform_hlds__pd_util__conv0_ThisVarInfo_25;

#line 490 "pd_util.m"
            {
#line 490 "pd_util.m"
              transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__VarInfo_4, ((MR_Box) (transform_hlds__pd_util__HeadVar_18)), &transform_hlds__pd_util__conv0_ThisVarInfo_25);
            }
#line 490 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 490 "pd_util.m"
              {
#line 490 "pd_util.m"
                transform_hlds__pd_util__ThisVarInfo_25 = ((MR_Word) transform_hlds__pd_util__conv0_ThisVarInfo_25);
#line 490 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_TRUE;
#line 490 "pd_util.m"
              }
#line 492 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 491 "pd_util.m"
              {
#line 491 "pd_util.m"
                {
#line 491 "pd_util.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__ArgNo_2, ((MR_Box) (transform_hlds__pd_util__ThisVarInfo_25)), transform_hlds__pd_util__HeadVar__5_5, &transform_hlds__pd_util__STATE_VARIABLE_ThisProcArgs_31_31);
                }
#line 491 "pd_util.m"
              }
#line 492 "pd_util.m"
            else
#line 492 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_ThisProcArgs_31_31 = transform_hlds__pd_util__HeadVar__5_5;
#line 495 "pd_util.m"
            {
#line 495 "pd_util.m"
              transform_hlds__pd_util__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_util__LeftVars_3, transform_hlds__pd_util__HeadVar_18);
            }
#line 497 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 496 "pd_util.m"
              {
#line 496 "pd_util.m"
                {
#line 496 "pd_util.m"
                  mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__ArgNo_2)), transform_hlds__pd_util__HeadVar__7_7, &transform_hlds__pd_util__STATE_VARIABLE_ThisProcLeftVars_32_32);
                }
#line 496 "pd_util.m"
              }
#line 497 "pd_util.m"
            else
#line 497 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_ThisProcLeftVars_32_32 = transform_hlds__pd_util__HeadVar__7_7;
#line 500 "pd_util.m"
            transform_hlds__pd_util__NextArgNo_26 = (transform_hlds__pd_util__ArgNo_2 + (MR_Integer) 1);
#line 501 "pd_util.m"
            /* direct tailcall eliminated */
#line 501 "pd_util.m"
            {
#line 501 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__1__tmp_copy_1 = transform_hlds__pd_util__HeadVars_19;
#line 501 "pd_util.m"
              MR_Integer transform_hlds__pd_util__ArgNo__tmp_copy_2 = transform_hlds__pd_util__NextArgNo_26;
#line 501 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__5__tmp_copy_5 = transform_hlds__pd_util__STATE_VARIABLE_ThisProcArgs_31_31;
#line 501 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__7__tmp_copy_7 = transform_hlds__pd_util__STATE_VARIABLE_ThisProcLeftVars_32_32;

#line 501 "pd_util.m"
              transform_hlds__pd_util__HeadVar__7_7 = transform_hlds__pd_util__HeadVar__7__tmp_copy_7;
#line 501 "pd_util.m"
              transform_hlds__pd_util__HeadVar__5_5 = transform_hlds__pd_util__HeadVar__5__tmp_copy_5;
#line 501 "pd_util.m"
              transform_hlds__pd_util__ArgNo_2 = transform_hlds__pd_util__ArgNo__tmp_copy_2;
#line 501 "pd_util.m"
              transform_hlds__pd_util__HeadVar__1_1 = transform_hlds__pd_util__HeadVar__1__tmp_copy_1;
#line 501 "pd_util.m"
            }
#line 501 "pd_util.m"
            continue;
#line 489 "pd_util.m"
          }
#line 487 "pd_util.m"
      }
#line 487 "pd_util.m"
      break;
#line 487 "pd_util.m"
    }
#line 482 "pd_util.m"
}

#line 460 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_opaque_args_6_p_0(
#line 460 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 460 "pd_util.m"
  MR_Integer transform_hlds__pd_util__ArgNo_2,
#line 460 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
#line 460 "pd_util.m"
  MR_Word transform_hlds__pd_util__ExtraInfoArgs_4,
#line 460 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5,
#line 460 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_6)
#line 460 "pd_util.m"
{
#line 463 "pd_util.m"
  while (MR_TRUE)
#line 463 "pd_util.m"
    {
#line 463 "pd_util.m"
      /* tailcall optimized into a loop */
#line 463 "pd_util.m"
      {
#line 463 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 463 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 463 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_6 = transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5;
#line 463 "pd_util.m"
        else
#line 465 "pd_util.m"
          {
#line 465 "pd_util.m"
            MR_Word transform_hlds__pd_util__ArgMode_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__3_3, (MR_Integer) 0)));
#line 465 "pd_util.m"
            MR_Word transform_hlds__pd_util__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__3_3, (MR_Integer) 1)));
#line 465 "pd_util.m"
            MR_Integer transform_hlds__pd_util__NextArg_19;
#line 465 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_22_22;
#line 468 "pd_util.m"
            MR_Word transform_hlds__pd_util__TypeCtorInfo_25_25;
#line 468 "pd_util.m"
            MR_Word transform_hlds__pd_util__TypeInfo_26_26;

#line 467 "pd_util.m"
            {
#line 467 "pd_util.m"
              transform_hlds__pd_util__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__ArgMode_15);
            }
#line 467 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 467 "pd_util.m"
              {
#line 6389 "transform_hlds.pd_util.c"
                transform_hlds__pd_util__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 6391 "transform_hlds.pd_util.c"
                transform_hlds__pd_util__TypeInfo_26_26 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[1];
#line 468 "pd_util.m"
                {
#line 468 "pd_util.m"
                  transform_hlds__pd_util__succeeded = mercury__map__contains_2_p_0(transform_hlds__pd_util__TypeCtorInfo_25_25, transform_hlds__pd_util__TypeInfo_26_26, transform_hlds__pd_util__ExtraInfoArgs_4, ((MR_Box) (transform_hlds__pd_util__ArgNo_2)));
                }
#line 468 "pd_util.m"
                transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 467 "pd_util.m"
              }
#line 471 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 470 "pd_util.m"
              {
#line 470 "pd_util.m"
                {
#line 470 "pd_util.m"
                  mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__ArgNo_2)), transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5, &transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_22_22);
                }
#line 470 "pd_util.m"
              }
#line 471 "pd_util.m"
            else
#line 471 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_22_22 = transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5;
#line 474 "pd_util.m"
            transform_hlds__pd_util__NextArg_19 = (transform_hlds__pd_util__ArgNo_2 + (MR_Integer) 1);
#line 475 "pd_util.m"
            /* direct tailcall eliminated */
#line 475 "pd_util.m"
            {
#line 475 "pd_util.m"
              MR_Integer transform_hlds__pd_util__ArgNo__tmp_copy_2 = transform_hlds__pd_util__NextArg_19;
#line 475 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__3__tmp_copy_3 = transform_hlds__pd_util__ArgModes_16;
#line 475 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0__tmp_copy_5 = transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_22_22;

#line 475 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5 = transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0__tmp_copy_5;
#line 475 "pd_util.m"
              transform_hlds__pd_util__HeadVar__3_3 = transform_hlds__pd_util__HeadVar__3__tmp_copy_3;
#line 475 "pd_util.m"
              transform_hlds__pd_util__ArgNo_2 = transform_hlds__pd_util__ArgNo__tmp_copy_2;
#line 475 "pd_util.m"
            }
#line 475 "pd_util.m"
            continue;
#line 465 "pd_util.m"
          }
#line 463 "pd_util.m"
      }
#line 463 "pd_util.m"
      break;
#line 463 "pd_util.m"
    }
#line 460 "pd_util.m"
}

#line 402 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_2_4_p_0(
#line 402 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
#line 402 "pd_util.m"
  MR_Word transform_hlds__pd_util__Args_2,
#line 402 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0_3,
#line 402 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_VarInfo_4)
#line 402 "pd_util.m"
{
#line 405 "pd_util.m"
  while (MR_TRUE)
#line 405 "pd_util.m"
    {
#line 405 "pd_util.m"
      /* tailcall optimized into a loop */
#line 405 "pd_util.m"
      {
#line 405 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 405 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 405 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_VarInfo_4 = transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0_3;
#line 405 "pd_util.m"
        else
#line 406 "pd_util.m"
          {
#line 406 "pd_util.m"
            MR_Word transform_hlds__pd_util__TypeInfo_20_20;
#line 406 "pd_util.m"
            MR_Integer transform_hlds__pd_util__ArgNo_9;
#line 406 "pd_util.m"
            MR_Word transform_hlds__pd_util__Branches_10;
#line 406 "pd_util.m"
            MR_Word transform_hlds__pd_util__ArgInfos_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
#line 406 "pd_util.m"
            MR_Word transform_hlds__pd_util__Arg_14;
#line 406 "pd_util.m"
            MR_Word transform_hlds__pd_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));
#line 406 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_VarInfo_18_18;
#line 407 "pd_util.m"
            MR_Box transform_hlds__pd_util__conv0_Arg_14;

#line 406 "pd_util.m"
            transform_hlds__pd_util__ArgNo_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_17_17, (MR_Integer) 0)));
#line 406 "pd_util.m"
            transform_hlds__pd_util__Branches_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_17_17, (MR_Integer) 1)));
#line 6504 "transform_hlds.pd_util.c"
            transform_hlds__pd_util__TypeInfo_20_20 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 407 "pd_util.m"
            {
#line 407 "pd_util.m"
              mercury__list__det_index1_3_p_0(transform_hlds__pd_util__TypeInfo_20_20, transform_hlds__pd_util__Args_2, transform_hlds__pd_util__ArgNo_9, &transform_hlds__pd_util__conv0_Arg_14);
            }
#line 407 "pd_util.m"
            transform_hlds__pd_util__Arg_14 = ((MR_Word) transform_hlds__pd_util__conv0_Arg_14);
#line 408 "pd_util.m"
            {
#line 408 "pd_util.m"
              mercury__map__set_4_p_0(transform_hlds__pd_util__TypeInfo_20_20, (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_util__Arg_14)), ((MR_Box) (transform_hlds__pd_util__Branches_10)), transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0_3, &transform_hlds__pd_util__STATE_VARIABLE_VarInfo_18_18);
            }
#line 409 "pd_util.m"
            /* direct tailcall eliminated */
#line 409 "pd_util.m"
            {
#line 409 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__1__tmp_copy_1 = transform_hlds__pd_util__ArgInfos_11;
#line 409 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0__tmp_copy_3 = transform_hlds__pd_util__STATE_VARIABLE_VarInfo_18_18;

#line 409 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0_3 = transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0__tmp_copy_3;
#line 409 "pd_util.m"
              transform_hlds__pd_util__HeadVar__1_1 = transform_hlds__pd_util__HeadVar__1__tmp_copy_1;
#line 409 "pd_util.m"
            }
#line 409 "pd_util.m"
            continue;
#line 406 "pd_util.m"
          }
#line 405 "pd_util.m"
      }
#line 405 "pd_util.m"
      break;
#line 405 "pd_util.m"
    }
#line 402 "pd_util.m"
}

#line 329 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__get_goal_live_vars_2_6_p_0(
#line 329 "pd_util.m"
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
#line 329 "pd_util.m"
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
#line 329 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMap_3,
#line 329 "pd_util.m"
  MR_Word transform_hlds__pd_util__InstMapDelta_4,
#line 329 "pd_util.m"
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5,
#line 329 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_6)
#line 329 "pd_util.m"
{
#line 333 "pd_util.m"
  while (MR_TRUE)
#line 333 "pd_util.m"
    {
#line 333 "pd_util.m"
      /* tailcall optimized into a loop */
#line 333 "pd_util.m"
      {
#line 333 "pd_util.m"
        MR_bool transform_hlds__pd_util__succeeded;

#line 333 "pd_util.m"
        if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_Vars_6 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5;
#line 333 "pd_util.m"
        else
#line 335 "pd_util.m"
          {
#line 335 "pd_util.m"
            MR_Word transform_hlds__pd_util__NonLocal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
#line 335 "pd_util.m"
            MR_Word transform_hlds__pd_util__NonLocals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
#line 335 "pd_util.m"
            MR_Word transform_hlds__pd_util__FinalInst_20;
#line 335 "pd_util.m"
            MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_23_23;
#line 338 "pd_util.m"
            MR_Word transform_hlds__pd_util__FinalInst0_19;

#line 336 "pd_util.m"
            {
#line 336 "pd_util.m"
              transform_hlds__pd_util__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__pd_util__InstMapDelta_4, transform_hlds__pd_util__NonLocal_14, &transform_hlds__pd_util__FinalInst0_19);
            }
#line 338 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 337 "pd_util.m"
              transform_hlds__pd_util__FinalInst_20 = transform_hlds__pd_util__FinalInst0_19;
#line 338 "pd_util.m"
            else
#line 339 "pd_util.m"
              {
#line 339 "pd_util.m"
                hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_util__InstMap_3, transform_hlds__pd_util__NonLocal_14, &transform_hlds__pd_util__FinalInst_20);
              }
#line 341 "pd_util.m"
            {
#line 341 "pd_util.m"
              transform_hlds__pd_util__succeeded = check_hlds__inst_match__inst_is_clobbered_2_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__FinalInst_20);
            }
#line 343 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 343 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_Vars_23_23 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5;
#line 343 "pd_util.m"
            else
#line 344 "pd_util.m"
              {
#line 344 "pd_util.m"
                {
#line 344 "pd_util.m"
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_util__NonLocal_14, transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5, &transform_hlds__pd_util__STATE_VARIABLE_Vars_23_23);
                }
#line 344 "pd_util.m"
              }
#line 346 "pd_util.m"
            /* direct tailcall eliminated */
#line 346 "pd_util.m"
            {
#line 346 "pd_util.m"
              MR_Word transform_hlds__pd_util__HeadVar__2__tmp_copy_2 = transform_hlds__pd_util__NonLocals_15;
#line 346 "pd_util.m"
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_5 = transform_hlds__pd_util__STATE_VARIABLE_Vars_23_23;

#line 346 "pd_util.m"
              transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0__tmp_copy_5;
#line 346 "pd_util.m"
              transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__HeadVar__2__tmp_copy_2;
#line 346 "pd_util.m"
            }
#line 346 "pd_util.m"
            continue;
#line 335 "pd_util.m"
          }
#line 333 "pd_util.m"
      }
#line 333 "pd_util.m"
      break;
#line 333 "pd_util.m"
    }
#line 329 "pd_util.m"
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
#line 1142 "pd_util.m"
  {
#line 1142 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 1142 "pd_util.m"
    MR_Word transform_hlds__pd_util__EarlierGoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 1)));
#line 1142 "pd_util.m"
    MR_Word transform_hlds__pd_util__LaterGoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 1)));
#line 1142 "pd_util.m"
    MR_Word transform_hlds__pd_util__EarlierDetism_13;
#line 1142 "pd_util.m"
    MR_Word transform_hlds__pd_util__LaterDetism_14;
#line 1142 "pd_util.m"
    MR_Word transform_hlds__pd_util__EarlierPurity_17;
#line 1142 "pd_util.m"
    MR_Word transform_hlds__pd_util__EarlierTrace_18;
#line 1142 "pd_util.m"
    MR_Word transform_hlds__pd_util__LaterPurity_19;
#line 1142 "pd_util.m"
    MR_Word transform_hlds__pd_util__LaterTrace_20;
#line 1146 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 0)));
#line 1147 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 0)));
#line 1157 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_22_22;
#line 1157 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_23_23;
#line 1157 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_24_24;
#line 1156 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_15_15;
#line 1158 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_16_16;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeCtorInfo_11_33;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__GoalInfo1_26;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__GoalInfo2_28;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__InstmapDelta1_29;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__ChangedVars1_30;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__NonLocals2_31;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__Intersection_32;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_25_25;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_27_27;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeCtorInfo_11_42;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__GoalInfo1_35;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__GoalInfo2_37;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__InstmapDelta1_38;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__ChangedVars1_39;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__NonLocals2_40;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__Intersection_41;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_34_34;
#line 1184 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_36_36;

#line 1149 "pd_util.m"
    {
#line 1149 "pd_util.m"
      transform_hlds__pd_util__EarlierDetism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__pd_util__EarlierGoalInfo_10);
    }
#line 1150 "pd_util.m"
    {
#line 1150 "pd_util.m"
      transform_hlds__pd_util__LaterDetism_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__pd_util__LaterGoalInfo_12);
    }
#line 1156 "pd_util.m"
    {
#line 1156 "pd_util.m"
      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__pd_util__EarlierDetism_13, &transform_hlds__pd_util__V_23_23, &transform_hlds__pd_util__V_15_15);
    }
#line 1156 "pd_util.m"
    transform_hlds__pd_util__succeeded = ((MR_Integer) 0 == transform_hlds__pd_util__V_23_23);
#line 1157 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 1157 "pd_util.m"
      {
#line 1158 "pd_util.m"
        transform_hlds__pd_util__V_22_22 = (MR_Integer) 2;
#line 1158 "pd_util.m"
        {
#line 1158 "pd_util.m"
          parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__pd_util__LaterDetism_14, &transform_hlds__pd_util__V_16_16, &transform_hlds__pd_util__V_24_24);
        }
#line 1158 "pd_util.m"
        transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__V_22_22 == transform_hlds__pd_util__V_24_24);
#line 1157 "pd_util.m"
      }
#line 1157 "pd_util.m"
    transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 1142 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 1142 "pd_util.m"
      {
#line 1162 "pd_util.m"
        {
#line 1162 "pd_util.m"
          hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(transform_hlds__pd_util__EarlierGoalInfo_10, &transform_hlds__pd_util__EarlierPurity_17, &transform_hlds__pd_util__EarlierTrace_18);
        }
#line 1163 "pd_util.m"
        {
#line 1163 "pd_util.m"
          hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(transform_hlds__pd_util__LaterGoalInfo_12, &transform_hlds__pd_util__LaterPurity_19, &transform_hlds__pd_util__LaterTrace_20);
        }
#line 1165 "pd_util.m"
        transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__LaterPurity_19 == (MR_Integer) 2);
#line 1165 "pd_util.m"
        transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 1142 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 1142 "pd_util.m"
          {
#line 1167 "pd_util.m"
            transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__LaterTrace_20 == (MR_Integer) 1);
#line 1142 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 1142 "pd_util.m"
              {
#line 1164 "pd_util.m"
                transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__EarlierPurity_17 == (MR_Integer) 2);
#line 1164 "pd_util.m"
                transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 1142 "pd_util.m"
                if (transform_hlds__pd_util__succeeded)
#line 1142 "pd_util.m"
                  {
#line 1166 "pd_util.m"
                    transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__EarlierTrace_18 == (MR_Integer) 1);
#line 1142 "pd_util.m"
                    if (transform_hlds__pd_util__succeeded)
#line 1142 "pd_util.m"
                      {
#line 1169 "pd_util.m"
                        {
#line 1169 "pd_util.m"
                          transform_hlds__pd_util__succeeded = hlds__goal_util__reordering_maintains_termination_old_4_p_0(transform_hlds__pd_util__ModuleInfo_5, transform_hlds__pd_util__FullyStrict_6, transform_hlds__pd_util__EarlierGoal_7, transform_hlds__pd_util__LaterGoal_8);
                        }
#line 1142 "pd_util.m"
                        if (transform_hlds__pd_util__succeeded)
#line 1142 "pd_util.m"
                          {
#line 1184 "pd_util.m"
                            transform_hlds__pd_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 0)));
#line 1184 "pd_util.m"
                            transform_hlds__pd_util__GoalInfo1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 1)));
#line 1184 "pd_util.m"
                            transform_hlds__pd_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 0)));
#line 1184 "pd_util.m"
                            transform_hlds__pd_util__GoalInfo2_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 1)));
#line 1185 "pd_util.m"
                            {
#line 1185 "pd_util.m"
                              transform_hlds__pd_util__InstmapDelta1_29 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo1_26);
                            }
#line 1186 "pd_util.m"
                            {
#line 1186 "pd_util.m"
                              hlds__instmap__instmap_delta_changed_vars_2_p_0(transform_hlds__pd_util__InstmapDelta1_29, &transform_hlds__pd_util__ChangedVars1_30);
                            }
#line 1187 "pd_util.m"
                            {
#line 1187 "pd_util.m"
                              transform_hlds__pd_util__NonLocals2_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_util__GoalInfo2_28);
                            }
#line 6849 "transform_hlds.pd_util.c"
                            transform_hlds__pd_util__TypeCtorInfo_11_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1188 "pd_util.m"
                            {
#line 1188 "pd_util.m"
                              parse_tree__set_of_var__intersect_3_p_0(transform_hlds__pd_util__TypeCtorInfo_11_33, transform_hlds__pd_util__ChangedVars1_30, transform_hlds__pd_util__NonLocals2_31, &transform_hlds__pd_util__Intersection_32);
                            }
#line 1189 "pd_util.m"
                            {
#line 1189 "pd_util.m"
                              transform_hlds__pd_util__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(transform_hlds__pd_util__TypeCtorInfo_11_33, transform_hlds__pd_util__Intersection_32);
                            }
#line 1174 "pd_util.m"
                            transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 1142 "pd_util.m"
                            if (transform_hlds__pd_util__succeeded)
#line 1142 "pd_util.m"
                              {
#line 1184 "pd_util.m"
                                transform_hlds__pd_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 0)));
#line 1184 "pd_util.m"
                                transform_hlds__pd_util__GoalInfo1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 1)));
#line 1184 "pd_util.m"
                                transform_hlds__pd_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 0)));
#line 1184 "pd_util.m"
                                transform_hlds__pd_util__GoalInfo2_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 1)));
#line 1185 "pd_util.m"
                                {
#line 1185 "pd_util.m"
                                  transform_hlds__pd_util__InstmapDelta1_38 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo1_35);
                                }
#line 1186 "pd_util.m"
                                {
#line 1186 "pd_util.m"
                                  hlds__instmap__instmap_delta_changed_vars_2_p_0(transform_hlds__pd_util__InstmapDelta1_38, &transform_hlds__pd_util__ChangedVars1_39);
                                }
#line 1187 "pd_util.m"
                                {
#line 1187 "pd_util.m"
                                  transform_hlds__pd_util__NonLocals2_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_util__GoalInfo2_37);
                                }
#line 6890 "transform_hlds.pd_util.c"
                                transform_hlds__pd_util__TypeCtorInfo_11_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1188 "pd_util.m"
                                {
#line 1188 "pd_util.m"
                                  parse_tree__set_of_var__intersect_3_p_0(transform_hlds__pd_util__TypeCtorInfo_11_42, transform_hlds__pd_util__ChangedVars1_39, transform_hlds__pd_util__NonLocals2_40, &transform_hlds__pd_util__Intersection_41);
                                }
#line 1189 "pd_util.m"
                                {
#line 1189 "pd_util.m"
                                  transform_hlds__pd_util__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(transform_hlds__pd_util__TypeCtorInfo_11_42, transform_hlds__pd_util__Intersection_41);
                                }
#line 1180 "pd_util.m"
                                transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 1142 "pd_util.m"
                              }
#line 1142 "pd_util.m"
                          }
#line 1142 "pd_util.m"
                      }
#line 1142 "pd_util.m"
                  }
#line 1142 "pd_util.m"
              }
#line 1142 "pd_util.m"
          }
#line 1142 "pd_util.m"
      }
#line 1142 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 1142 "pd_util.m"
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
#line 1004 "pd_util.m"
  {
#line 1004 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;

#line 1004 "pd_util.m"
    {
#line 1004 "pd_util.m"
      return transform_hlds__pd_util__succeeded = transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0(transform_hlds__pd_util__OldGoal_10, transform_hlds__pd_util__OldArgs_11, transform_hlds__pd_util__OldArgTypes_12, transform_hlds__pd_util__NewGoal_13, transform_hlds__pd_util__NewVarTypes_14, transform_hlds__pd_util__OldNewRenaming_15, transform_hlds__pd_util__TypeSubn_16);
    }
#line 1004 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 1004 "pd_util.m"
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
#line 988 "pd_util.m"
  {
#line 988 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 988 "pd_util.m"
    MR_Word transform_hlds__pd_util__Expansions_7;

#line 989 "pd_util.m"
    {
#line 989 "pd_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &transform_hlds__pd_util__Expansions_7);
    }
#line 990 "pd_util.m"
    {
#line 990 "pd_util.m"
      transform_hlds__pd_util__inst_list_size_5_p_0(transform_hlds__pd_util__ModuleInfo_4, transform_hlds__pd_util__Insts_5, transform_hlds__pd_util__Expansions_7, (MR_Integer) 0, transform_hlds__pd_util__Size_6);
#line 990 "pd_util.m"
      return;
    }
#line 988 "pd_util.m"
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
#line 943 "pd_util.m"
  {
#line 943 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 943 "pd_util.m"
    MR_Word transform_hlds__pd_util__Expansions_7;

#line 944 "pd_util.m"
    {
#line 944 "pd_util.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &transform_hlds__pd_util__Expansions_7);
    }
#line 945 "pd_util.m"
    {
#line 945 "pd_util.m"
      transform_hlds__pd_util__inst_size_2_4_p_0(transform_hlds__pd_util__ModuleInfo_4, transform_hlds__pd_util__Inst_5, transform_hlds__pd_util__Expansions_7, transform_hlds__pd_util__Size_6);
#line 945 "pd_util.m"
      return;
    }
#line 943 "pd_util.m"
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
#line 809 "pd_util.m"
  {
#line 809 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 809 "pd_util.m"
    MR_Word transform_hlds__pd_util__Expansions_9;

#line 810 "pd_util.m"
    {
#line 810 "pd_util.m"
      mercury__set__init_1_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_2[0], &transform_hlds__pd_util__Expansions_9);
    }
#line 819 "pd_util.m"
    {
#line 819 "pd_util.m"
      transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__pd_util__InstA_5, transform_hlds__pd_util__InstB_6);
    }
#line 821 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 820 "pd_util.m"
      {
#line 820 "pd_util.m"
        *transform_hlds__pd_util__Inst_8 = transform_hlds__pd_util__InstA_5;
#line 820 "pd_util.m"
        transform_hlds__pd_util__succeeded = MR_TRUE;
#line 820 "pd_util.m"
      }
#line 821 "pd_util.m"
    else
#line 824 "pd_util.m"
      {
#line 824 "pd_util.m"
        MR_Word transform_hlds__pd_util__TypeInfo_19_24;
#line 824 "pd_util.m"
        MR_Word transform_hlds__pd_util__InstA2_17;
#line 824 "pd_util.m"
        MR_Word transform_hlds__pd_util__InstB2_18;
#line 824 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_20_20;
#line 824 "pd_util.m"
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_22;
#line 824 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_19_19;

#line 824 "pd_util.m"
        {
#line 824 "pd_util.m"
          transform_hlds__pd_util__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 824 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_19_19, 0) = ((MR_Box) (transform_hlds__pd_util__InstA_5));
#line 824 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_19_19, 1) = ((MR_Box) (transform_hlds__pd_util__InstB_6));
#line 824 "pd_util.m"
        }
#line 824 "pd_util.m"
        {
#line 824 "pd_util.m"
          transform_hlds__pd_util__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_2[0], ((MR_Box) (transform_hlds__pd_util__V_19_19)), transform_hlds__pd_util__Expansions_9);
        }
#line 824 "pd_util.m"
        transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
#line 824 "pd_util.m"
        if (transform_hlds__pd_util__succeeded)
#line 824 "pd_util.m"
          {
#line 825 "pd_util.m"
            {
#line 825 "pd_util.m"
              check_hlds__inst_match__inst_expand_3_p_0(transform_hlds__pd_util__ModuleInfo_7, transform_hlds__pd_util__InstA_5, &transform_hlds__pd_util__InstA2_17);
            }
#line 826 "pd_util.m"
            {
#line 826 "pd_util.m"
              check_hlds__inst_match__inst_expand_3_p_0(transform_hlds__pd_util__ModuleInfo_7, transform_hlds__pd_util__InstB_6, &transform_hlds__pd_util__InstB2_18);
            }
#line 7121 "transform_hlds.pd_util.c"
            transform_hlds__pd_util__TypeInfo_19_24 = (MR_Word) &transform_hlds__pd_util_scalar_common_2[0];
#line 827 "pd_util.m"
            {
#line 827 "pd_util.m"
              transform_hlds__pd_util__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 827 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_20_20, 0) = ((MR_Box) (transform_hlds__pd_util__InstA_5));
#line 827 "pd_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_20_20, 1) = ((MR_Box) (transform_hlds__pd_util__InstB_6));
#line 827 "pd_util.m"
            }
#line 827 "pd_util.m"
            {
#line 827 "pd_util.m"
              mercury__set__insert_3_p_0(transform_hlds__pd_util__TypeInfo_19_24, ((MR_Box) (transform_hlds__pd_util__V_20_20)), transform_hlds__pd_util__Expansions_9, &transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_22);
            }
#line 828 "pd_util.m"
            transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__InstB2_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 830 "pd_util.m"
            if (transform_hlds__pd_util__succeeded)
#line 829 "pd_util.m"
              {
#line 829 "pd_util.m"
                *transform_hlds__pd_util__Inst_8 = transform_hlds__pd_util__InstA2_17;
#line 829 "pd_util.m"
                transform_hlds__pd_util__succeeded = MR_TRUE;
#line 829 "pd_util.m"
              }
#line 830 "pd_util.m"
            else
#line 831 "pd_util.m"
              {
#line 831 "pd_util.m"
                return transform_hlds__pd_util__succeeded = transform_hlds__pd_util__inst_MSG_2_5_p_0(transform_hlds__pd_util__InstA2_17, transform_hlds__pd_util__InstB2_18, transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_22, transform_hlds__pd_util__ModuleInfo_7, transform_hlds__pd_util__Inst_8);
              }
#line 824 "pd_util.m"
          }
#line 824 "pd_util.m"
      }
#line 809 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 809 "pd_util.m"
  }
#line 114 "pd_util.m"
}

#line 397 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0_2(
#line 397 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 397 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 397 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2)
#line 397 "pd_util.m"
{
#line 397 "pd_util.m"
  {
#line 397 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
#line 397 "pd_util.m"
    MR_Word transform_hlds__pd_util__conv1_HeadVar__3_28;

#line 397 "pd_util.m"
    {
#line 397 "pd_util.m"
      transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__397__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__pd_util__wrapper_arg_1), &transform_hlds__pd_util__conv1_HeadVar__3_28);
    }
#line 397 "pd_util.m"
    *transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv1_HeadVar__3_28));
#line 397 "pd_util.m"
  }
#line 397 "pd_util.m"
}

#line 393 "pd_util.m"
static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0_1(
#line 393 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 393 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
#line 393 "pd_util.m"
  MR_Box * transform_hlds__pd_util__wrapper_arg_2)
#line 393 "pd_util.m"
{
#line 393 "pd_util.m"
  {
#line 393 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
#line 393 "pd_util.m"
    MR_Word transform_hlds__pd_util__conv0_HeadVar__3_25;

#line 393 "pd_util.m"
    {
#line 393 "pd_util.m"
      transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__393__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__pd_util__wrapper_arg_1), &transform_hlds__pd_util__conv0_HeadVar__3_25);
    }
#line 393 "pd_util.m"
    *transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__3_25));
#line 393 "pd_util.m"
  }
#line 393 "pd_util.m"
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
#line 386 "pd_util.m"
  {
#line 386 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 386 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 386 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeInfo_22_22 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[1];
#line 386 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeInfo_23_23;
#line 386 "pd_util.m"
    MR_Word transform_hlds__pd_util__ArgMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__ArgInfo_4, (MR_Integer) 0)));
#line 386 "pd_util.m"
    MR_Word transform_hlds__pd_util__LeftArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__ArgInfo_4, (MR_Integer) 1)));
#line 386 "pd_util.m"
    MR_Word transform_hlds__pd_util__OpaqueArgs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__ArgInfo_4, (MR_Integer) 2)));
#line 386 "pd_util.m"
    MR_Word transform_hlds__pd_util__ArgList_10;
#line 386 "pd_util.m"
    MR_Word transform_hlds__pd_util__BranchVarMap0_11;
#line 386 "pd_util.m"
    MR_Word transform_hlds__pd_util__BranchVarMap_12;
#line 386 "pd_util.m"
    MR_Word transform_hlds__pd_util__LeftArgNos_13;
#line 386 "pd_util.m"
    MR_Word transform_hlds__pd_util__LeftVars0_14;
#line 386 "pd_util.m"
    MR_Word transform_hlds__pd_util__LeftVars_15;
#line 386 "pd_util.m"
    MR_Word transform_hlds__pd_util__OpaqueArgNos_16;
#line 386 "pd_util.m"
    MR_Word transform_hlds__pd_util__OpaqueVars0_17;
#line 386 "pd_util.m"
    MR_Word transform_hlds__pd_util__OpaqueVars_18;
#line 386 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_19_19;
#line 386 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_20_20;

#line 388 "pd_util.m"
    {
#line 388 "pd_util.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__pd_util__TypeCtorInfo_21_21, transform_hlds__pd_util__TypeInfo_22_22, transform_hlds__pd_util__ArgMap_7, &transform_hlds__pd_util__ArgList_10);
    }
#line 7283 "transform_hlds.pd_util.c"
    transform_hlds__pd_util__TypeInfo_23_23 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 389 "pd_util.m"
    {
#line 389 "pd_util.m"
      mercury__map__init_1_p_0(transform_hlds__pd_util__TypeInfo_23_23, transform_hlds__pd_util__TypeInfo_22_22, &transform_hlds__pd_util__BranchVarMap0_11);
    }
#line 390 "pd_util.m"
    {
#line 390 "pd_util.m"
      transform_hlds__pd_util__convert_branch_info_2_4_p_0(transform_hlds__pd_util__ArgList_10, transform_hlds__pd_util__Args_5, transform_hlds__pd_util__BranchVarMap0_11, &transform_hlds__pd_util__BranchVarMap_12);
    }
#line 392 "pd_util.m"
    {
#line 392 "pd_util.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__pd_util__TypeCtorInfo_21_21, transform_hlds__pd_util__LeftArgs_8, &transform_hlds__pd_util__LeftArgNos_13);
    }
#line 393 "pd_util.m"
    {
#line 393 "pd_util.m"
      transform_hlds__pd_util__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 393 "pd_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_19_19, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[1]));
#line 393 "pd_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_19_19, 1) = ((MR_Box) (transform_hlds__pd_util__convert_branch_info_3_p_0_1));
#line 393 "pd_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 393 "pd_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_19_19, 3) = ((MR_Box) (transform_hlds__pd_util__Args_5));
#line 393 "pd_util.m"
    }
#line 393 "pd_util.m"
    {
#line 393 "pd_util.m"
      mercury__list__map_3_p_0(transform_hlds__pd_util__TypeCtorInfo_21_21, transform_hlds__pd_util__TypeInfo_23_23, transform_hlds__pd_util__V_19_19, transform_hlds__pd_util__LeftArgNos_13, &transform_hlds__pd_util__LeftVars0_14);
    }
#line 394 "pd_util.m"
    {
#line 394 "pd_util.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__pd_util__TypeInfo_23_23, transform_hlds__pd_util__LeftVars0_14, &transform_hlds__pd_util__LeftVars_15);
    }
#line 396 "pd_util.m"
    {
#line 396 "pd_util.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__pd_util__TypeCtorInfo_21_21, transform_hlds__pd_util__OpaqueArgs_9, &transform_hlds__pd_util__OpaqueArgNos_16);
    }
#line 397 "pd_util.m"
    {
#line 397 "pd_util.m"
      transform_hlds__pd_util__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 397 "pd_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_20_20, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[1]));
#line 397 "pd_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_20_20, 1) = ((MR_Box) (transform_hlds__pd_util__convert_branch_info_3_p_0_2));
#line 397 "pd_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 397 "pd_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_20_20, 3) = ((MR_Box) (transform_hlds__pd_util__Args_5));
#line 397 "pd_util.m"
    }
#line 397 "pd_util.m"
    {
#line 397 "pd_util.m"
      mercury__list__map_3_p_0(transform_hlds__pd_util__TypeCtorInfo_21_21, transform_hlds__pd_util__TypeInfo_23_23, transform_hlds__pd_util__V_20_20, transform_hlds__pd_util__OpaqueArgNos_16, &transform_hlds__pd_util__OpaqueVars0_17);
    }
#line 398 "pd_util.m"
    {
#line 398 "pd_util.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__pd_util__TypeInfo_23_23, transform_hlds__pd_util__OpaqueVars0_17, &transform_hlds__pd_util__OpaqueVars_18);
    }
#line 400 "pd_util.m"
    {
#line 400 "pd_util.m"
      MR_Word base;
#line 400 "pd_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 400 "pd_util.m"
      *transform_hlds__pd_util__VarInfo_6 = base;
#line 400 "pd_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_util__BranchVarMap_12));
#line 400 "pd_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_util__LeftVars_15));
#line 400 "pd_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_util__OpaqueVars_18));
#line 400 "pd_util.m"
    }
#line 386 "pd_util.m"
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
#line 797 "pd_util.m"
  {
#line 797 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 797 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModuleInfo0_8;
#line 797 "pd_util.m"
    MR_Word transform_hlds__pd_util__InstMap_9;
#line 797 "pd_util.m"
    MR_Word transform_hlds__pd_util__ProcInfo_10;
#line 797 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarTypes_11;
#line 797 "pd_util.m"
    MR_Word transform_hlds__pd_util__InstVarSet_12;
#line 797 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModuleInfo_13;

#line 798 "pd_util.m"
    {
#line 798 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_14, &transform_hlds__pd_util__ModuleInfo0_8);
    }
#line 799 "pd_util.m"
    {
#line 799 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_14, &transform_hlds__pd_util__InstMap_9);
    }
#line 800 "pd_util.m"
    {
#line 800 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_14, &transform_hlds__pd_util__ProcInfo_10);
    }
#line 801 "pd_util.m"
    {
#line 801 "pd_util.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_util__ProcInfo_10, &transform_hlds__pd_util__VarTypes_11);
    }
#line 802 "pd_util.m"
    {
#line 802 "pd_util.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__pd_util__ProcInfo_10, &transform_hlds__pd_util__InstVarSet_12);
    }
#line 803 "pd_util.m"
    {
#line 803 "pd_util.m"
      check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, transform_hlds__pd_util__Goal0_5, transform_hlds__pd_util__Goal_6, transform_hlds__pd_util__VarTypes_11, transform_hlds__pd_util__InstVarSet_12, transform_hlds__pd_util__InstMap_9, transform_hlds__pd_util__ModuleInfo0_8, &transform_hlds__pd_util__ModuleInfo_13);
    }
#line 805 "pd_util.m"
    {
#line 805 "pd_util.m"
      transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_util__ModuleInfo_13, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_14, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_15);
#line 805 "pd_util.m"
      return;
    }
#line 797 "pd_util.m"
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
#line 784 "pd_util.m"
  {
#line 784 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 784 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarSet0_11;
#line 784 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarTypes0_12;
#line 784 "pd_util.m"
    MR_Word transform_hlds__pd_util__RttiVarMaps0_13;
#line 784 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarSet_15;
#line 784 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarTypes_16;
#line 784 "pd_util.m"
    MR_Word transform_hlds__pd_util__RttiVarMaps_17;
#line 784 "pd_util.m"
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20;
#line 784 "pd_util.m"
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_22_22;
#line 784 "pd_util.m"
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_23_23;
#line 784 "pd_util.m"
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_24_24;
#line 788 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_14_14;

#line 784 "pd_util.m"
    {
#line 784 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_18, &transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20);
    }
#line 785 "pd_util.m"
    {
#line 785 "pd_util.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__pd_util__VarSet0_11);
    }
#line 786 "pd_util.m"
    {
#line 786 "pd_util.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__pd_util__VarTypes0_12);
    }
#line 787 "pd_util.m"
    {
#line 787 "pd_util.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__pd_util__RttiVarMaps0_13);
    }
#line 788 "pd_util.m"
    {
#line 788 "pd_util.m"
      hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, transform_hlds__pd_util__NonLocals_6, &transform_hlds__pd_util__V_14_14, transform_hlds__pd_util__Goal0_7, transform_hlds__pd_util__Goal_8, transform_hlds__pd_util__VarSet0_11, &transform_hlds__pd_util__VarSet_15, transform_hlds__pd_util__VarTypes0_12, &transform_hlds__pd_util__VarTypes_16, transform_hlds__pd_util__RttiVarMaps0_13, &transform_hlds__pd_util__RttiVarMaps_17);
    }
#line 791 "pd_util.m"
    {
#line 791 "pd_util.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__pd_util__VarSet_15, transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_22_22);
    }
#line 792 "pd_util.m"
    {
#line 792 "pd_util.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__pd_util__VarTypes_16, transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_22_22, &transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_23_23);
    }
#line 793 "pd_util.m"
    {
#line 793 "pd_util.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__pd_util__RttiVarMaps_17, transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_23_23, &transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_24_24);
    }
#line 794 "pd_util.m"
    {
#line 794 "pd_util.m"
      transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_24_24, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_18, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_19);
#line 794 "pd_util.m"
      return;
    }
#line 784 "pd_util.m"
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
#line 506 "pd_util.m"
  {
#line 506 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 506 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeCtorInfo_30_30;
#line 506 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeInfo_31_31;
#line 506 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModuleInfo0_8;
#line 506 "pd_util.m"
    MR_Word transform_hlds__pd_util__InstMap0_9;
#line 506 "pd_util.m"
    MR_Word transform_hlds__pd_util__ProcArgInfo_10;
#line 506 "pd_util.m"
    MR_Word transform_hlds__pd_util__ProcInfo_11;
#line 506 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarTypes_12;
#line 506 "pd_util.m"
    MR_Word transform_hlds__pd_util__LeftVars0_13;
#line 506 "pd_util.m"
    MR_Word transform_hlds__pd_util__Vars0_14;
#line 527 "pd_util.m"
    MR_Word transform_hlds__pd_util__LeftVars_15;
#line 527 "pd_util.m"
    MR_Word transform_hlds__pd_util__Vars1_16;
#line 527 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_22_22;

#line 507 "pd_util.m"
    {
#line 507 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20, &transform_hlds__pd_util__ModuleInfo0_8);
    }
#line 508 "pd_util.m"
    {
#line 508 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20, &transform_hlds__pd_util__InstMap0_9);
    }
#line 509 "pd_util.m"
    {
#line 509 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20, &transform_hlds__pd_util__ProcArgInfo_10);
    }
#line 510 "pd_util.m"
    {
#line 510 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20, &transform_hlds__pd_util__ProcInfo_11);
    }
#line 511 "pd_util.m"
    {
#line 511 "pd_util.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_util__ProcInfo_11, &transform_hlds__pd_util__VarTypes_12);
    }
#line 7607 "transform_hlds.pd_util.c"
    transform_hlds__pd_util__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 512 "pd_util.m"
    {
#line 512 "pd_util.m"
      parse_tree__set_of_var__init_1_p_0(transform_hlds__pd_util__TypeCtorInfo_30_30, &transform_hlds__pd_util__LeftVars0_13);
    }
#line 7614 "transform_hlds.pd_util.c"
    transform_hlds__pd_util__TypeInfo_31_31 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
#line 513 "pd_util.m"
    {
#line 513 "pd_util.m"
      mercury__map__init_1_p_0(transform_hlds__pd_util__TypeInfo_31_31, (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], &transform_hlds__pd_util__Vars0_14);
    }
#line 515 "pd_util.m"
    {
#line 515 "pd_util.m"
      transform_hlds__pd_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "pd_util.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_22_22, 0) = ((MR_Box) (transform_hlds__pd_util__Goal_5));
#line 515 "pd_util.m"
      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "pd_util.m"
    }
#line 515 "pd_util.m"
    {
#line 515 "pd_util.m"
      transform_hlds__pd_util__succeeded = transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0(transform_hlds__pd_util__ModuleInfo0_8, transform_hlds__pd_util__V_22_22, (MR_Integer) 0, transform_hlds__pd_util__InstMap0_9, transform_hlds__pd_util__LeftVars0_13, &transform_hlds__pd_util__LeftVars_15, transform_hlds__pd_util__Vars0_14, &transform_hlds__pd_util__Vars1_16);
    }
#line 527 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 520 "pd_util.m"
      {
#line 520 "pd_util.m"
        MR_Word transform_hlds__pd_util__Vars_17;
#line 520 "pd_util.m"
        MR_Word transform_hlds__pd_util__ModuleInfo_18;
#line 520 "pd_util.m"
        MR_Word transform_hlds__pd_util__OpaqueVars_19;
#line 520 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_28_28;
#line 520 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_29_29;

#line 518 "pd_util.m"
        {
#line 518 "pd_util.m"
          transform_hlds__pd_util__get_sub_branch_vars_goal_8_p_0(transform_hlds__pd_util__ProcArgInfo_10, transform_hlds__pd_util__V_22_22, transform_hlds__pd_util__VarTypes_12, transform_hlds__pd_util__InstMap0_9, transform_hlds__pd_util__Vars1_16, &transform_hlds__pd_util__Vars_17, transform_hlds__pd_util__ModuleInfo0_8, &transform_hlds__pd_util__ModuleInfo_18);
        }
#line 521 "pd_util.m"
        {
#line 521 "pd_util.m"
          transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_util__ModuleInfo_18, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_21);
        }
#line 524 "pd_util.m"
        {
#line 524 "pd_util.m"
          mercury__set__init_1_p_0(transform_hlds__pd_util__TypeInfo_31_31, &transform_hlds__pd_util__OpaqueVars_19);
        }
#line 526 "pd_util.m"
        {
#line 526 "pd_util.m"
          transform_hlds__pd_util__V_29_29 = parse_tree__set_of_var__bitset_to_set_1_f_0(transform_hlds__pd_util__TypeCtorInfo_30_30, transform_hlds__pd_util__LeftVars_15);
        }
#line 525 "pd_util.m"
        {
#line 525 "pd_util.m"
          transform_hlds__pd_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 525 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_28_28, 0) = ((MR_Box) (transform_hlds__pd_util__Vars_17));
#line 525 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_28_28, 1) = ((MR_Box) (transform_hlds__pd_util__V_29_29));
#line 525 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_28_28, 2) = ((MR_Box) (transform_hlds__pd_util__OpaqueVars_19));
#line 525 "pd_util.m"
        }
#line 525 "pd_util.m"
        {
#line 525 "pd_util.m"
          MR_Word base;
#line 525 "pd_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 525 "pd_util.m"
          *transform_hlds__pd_util__MaybeBranchInfo_6 = base;
#line 525 "pd_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_util__V_28_28));
#line 525 "pd_util.m"
        }
#line 520 "pd_util.m"
      }
#line 527 "pd_util.m"
    else
#line 528 "pd_util.m"
      {
#line 528 "pd_util.m"
        *transform_hlds__pd_util__MaybeBranchInfo_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "pd_util.m"
        *transform_hlds__pd_util__STATE_VARIABLE_PDInfo_21 = transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20;
#line 528 "pd_util.m"
      }
#line 506 "pd_util.m"
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
#line 415 "pd_util.m"
  {
#line 415 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 415 "pd_util.m"
    MR_Word transform_hlds__pd_util__TypeInfo_44_44;
#line 415 "pd_util.m"
    MR_Word transform_hlds__pd_util__Goal_11;
#line 415 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarTypes_12;
#line 415 "pd_util.m"
    MR_Word transform_hlds__pd_util__InstMap0_13;
#line 415 "pd_util.m"
    MR_Word transform_hlds__pd_util__Vars0_14;
#line 415 "pd_util.m"
    MR_Word transform_hlds__pd_util__LeftVars0_15;
#line 415 "pd_util.m"
    MR_Word transform_hlds__pd_util__GoalList_16;
#line 451 "pd_util.m"
    MR_Word transform_hlds__pd_util__LeftVars_17;
#line 451 "pd_util.m"
    MR_Word transform_hlds__pd_util__Vars_18;

#line 416 "pd_util.m"
    {
#line 416 "pd_util.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__pd_util__ProcInfo_8, &transform_hlds__pd_util__Goal_11);
    }
#line 417 "pd_util.m"
    {
#line 417 "pd_util.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_util__ProcInfo_8, &transform_hlds__pd_util__VarTypes_12);
    }
#line 418 "pd_util.m"
    {
#line 418 "pd_util.m"
      hlds__instmap__init_reachable_1_p_0(&transform_hlds__pd_util__InstMap0_13);
    }
#line 7767 "transform_hlds.pd_util.c"
    transform_hlds__pd_util__TypeInfo_44_44 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[1];
#line 419 "pd_util.m"
    {
#line 419 "pd_util.m"
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], transform_hlds__pd_util__TypeInfo_44_44, &transform_hlds__pd_util__Vars0_14);
    }
#line 420 "pd_util.m"
    {
#line 420 "pd_util.m"
      parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__pd_util__LeftVars0_15);
    }
#line 421 "pd_util.m"
    {
#line 421 "pd_util.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__Goal_11, &transform_hlds__pd_util__GoalList_16);
    }
#line 423 "pd_util.m"
    {
#line 423 "pd_util.m"
      transform_hlds__pd_util__succeeded = transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0(transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__pd_util__GoalList_16, (MR_Integer) 0, transform_hlds__pd_util__InstMap0_13, transform_hlds__pd_util__LeftVars0_15, &transform_hlds__pd_util__LeftVars_17, transform_hlds__pd_util__Vars0_14, &transform_hlds__pd_util__Vars_18);
    }
#line 451 "pd_util.m"
    if (transform_hlds__pd_util__succeeded)
#line 426 "pd_util.m"
      {
#line 426 "pd_util.m"
        MR_Word transform_hlds__pd_util__TypeCtorInfo_46_46;
#line 426 "pd_util.m"
        MR_Word transform_hlds__pd_util__TypeCtorInfo_47_47;
#line 426 "pd_util.m"
        MR_Word transform_hlds__pd_util__TypeInfo_48_48;
#line 426 "pd_util.m"
        MR_Word transform_hlds__pd_util__HeadVars_19;
#line 426 "pd_util.m"
        MR_Word transform_hlds__pd_util__ThisProcArgMap0_20;
#line 426 "pd_util.m"
        MR_Word transform_hlds__pd_util__ThisProcLeftArgs0_21;
#line 426 "pd_util.m"
        MR_Word transform_hlds__pd_util__ThisProcArgMap1_22;
#line 426 "pd_util.m"
        MR_Word transform_hlds__pd_util__ThisProcLeftArgs_23;
#line 426 "pd_util.m"
        MR_Word transform_hlds__pd_util__OpaqueArgs0_24;
#line 426 "pd_util.m"
        MR_Word transform_hlds__pd_util__BranchInfo0_25;
#line 426 "pd_util.m"
        MR_Word transform_hlds__pd_util__AllVars_26;
#line 426 "pd_util.m"
        MR_Word transform_hlds__pd_util__ThisProcArgMap_27;
#line 426 "pd_util.m"
        MR_Word transform_hlds__pd_util__ArgModes_29;
#line 426 "pd_util.m"
        MR_Word transform_hlds__pd_util__OpaqueArgs_30;
#line 426 "pd_util.m"
        MR_Word transform_hlds__pd_util__BranchInfo_31;
#line 426 "pd_util.m"
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_38_38;
#line 441 "pd_util.m"
        MR_Word transform_hlds__pd_util__V_28_28;

#line 426 "pd_util.m"
        {
#line 426 "pd_util.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__pd_util__ProcInfo_8, &transform_hlds__pd_util__HeadVars_19);
        }
#line 7833 "transform_hlds.pd_util.c"
        transform_hlds__pd_util__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 427 "pd_util.m"
        {
#line 427 "pd_util.m"
          mercury__map__init_1_p_0(transform_hlds__pd_util__TypeCtorInfo_46_46, transform_hlds__pd_util__TypeInfo_44_44, &transform_hlds__pd_util__ThisProcArgMap0_20);
        }
#line 428 "pd_util.m"
        {
#line 428 "pd_util.m"
          mercury__set__init_1_p_0(transform_hlds__pd_util__TypeCtorInfo_46_46, &transform_hlds__pd_util__ThisProcLeftArgs0_21);
        }
#line 429 "pd_util.m"
        {
#line 429 "pd_util.m"
          transform_hlds__pd_util__get_extra_info_headvars_8_p_0(transform_hlds__pd_util__HeadVars_19, (MR_Integer) 1, transform_hlds__pd_util__LeftVars_17, transform_hlds__pd_util__Vars_18, transform_hlds__pd_util__ThisProcArgMap0_20, &transform_hlds__pd_util__ThisProcArgMap1_22, transform_hlds__pd_util__ThisProcLeftArgs0_21, &transform_hlds__pd_util__ThisProcLeftArgs_23);
        }
#line 432 "pd_util.m"
        {
#line 432 "pd_util.m"
          mercury__set__init_1_p_0(transform_hlds__pd_util__TypeCtorInfo_46_46, &transform_hlds__pd_util__OpaqueArgs0_24);
        }
#line 433 "pd_util.m"
        {
#line 433 "pd_util.m"
          transform_hlds__pd_util__BranchInfo0_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 433 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo0_25, 0) = ((MR_Box) (transform_hlds__pd_util__ThisProcArgMap1_22));
#line 433 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo0_25, 1) = ((MR_Box) (transform_hlds__pd_util__ThisProcLeftArgs_23));
#line 433 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo0_25, 2) = ((MR_Box) (transform_hlds__pd_util__OpaqueArgs0_24));
#line 433 "pd_util.m"
        }
#line 7867 "transform_hlds.pd_util.c"
        transform_hlds__pd_util__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 7869 "transform_hlds.pd_util.c"
        transform_hlds__pd_util__TypeInfo_48_48 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[2];
#line 435 "pd_util.m"
        {
#line 435 "pd_util.m"
          mercury__map__set_4_p_0(transform_hlds__pd_util__TypeCtorInfo_47_47, transform_hlds__pd_util__TypeInfo_48_48, ((MR_Box) (transform_hlds__pd_util__PredProcId_7)), ((MR_Box) (transform_hlds__pd_util__BranchInfo0_25)), transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_0_34, &transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_38_38);
        }
#line 439 "pd_util.m"
        {
#line 439 "pd_util.m"
          transform_hlds__pd_util__get_sub_branch_vars_goal_8_p_0(transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_38_38, transform_hlds__pd_util__GoalList_16, transform_hlds__pd_util__VarTypes_12, transform_hlds__pd_util__InstMap0_13, transform_hlds__pd_util__Vars_18, &transform_hlds__pd_util__AllVars_26, transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_33);
        }
#line 441 "pd_util.m"
        {
#line 441 "pd_util.m"
          transform_hlds__pd_util__get_extra_info_headvars_8_p_0(transform_hlds__pd_util__HeadVars_19, (MR_Integer) 1, transform_hlds__pd_util__LeftVars0_15, transform_hlds__pd_util__AllVars_26, transform_hlds__pd_util__ThisProcArgMap0_20, &transform_hlds__pd_util__ThisProcArgMap_27, transform_hlds__pd_util__ThisProcLeftArgs0_21, &transform_hlds__pd_util__V_28_28);
        }
#line 444 "pd_util.m"
        {
#line 444 "pd_util.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__pd_util__ProcInfo_8, &transform_hlds__pd_util__ArgModes_29);
        }
#line 445 "pd_util.m"
        {
#line 445 "pd_util.m"
          transform_hlds__pd_util__get_opaque_args_6_p_0(*transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_33, (MR_Integer) 1, transform_hlds__pd_util__ArgModes_29, transform_hlds__pd_util__ThisProcArgMap_27, transform_hlds__pd_util__OpaqueArgs0_24, &transform_hlds__pd_util__OpaqueArgs_30);
        }
#line 448 "pd_util.m"
        {
#line 448 "pd_util.m"
          transform_hlds__pd_util__BranchInfo_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 448 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_31, 0) = ((MR_Box) (transform_hlds__pd_util__ThisProcArgMap_27));
#line 448 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_31, 1) = ((MR_Box) (transform_hlds__pd_util__ThisProcLeftArgs_23));
#line 448 "pd_util.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_31, 2) = ((MR_Box) (transform_hlds__pd_util__OpaqueArgs_30));
#line 448 "pd_util.m"
        }
#line 450 "pd_util.m"
        {
#line 450 "pd_util.m"
          mercury__map__set_4_p_0(transform_hlds__pd_util__TypeCtorInfo_47_47, transform_hlds__pd_util__TypeInfo_48_48, ((MR_Box) (transform_hlds__pd_util__PredProcId_7)), ((MR_Box) (transform_hlds__pd_util__BranchInfo_31)), transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_38_38, transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_35);
#line 450 "pd_util.m"
          return;
        }
#line 426 "pd_util.m"
      }
#line 451 "pd_util.m"
    else
#line 452 "pd_util.m"
      {
#line 452 "pd_util.m"
        *transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_35 = transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_0_34;
#line 452 "pd_util.m"
        *transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_33 = transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_32;
#line 452 "pd_util.m"
      }
#line 415 "pd_util.m"
  }
#line 65 "pd_util.m"
}

#line 294 "pd_util.m"
static MR_Box MR_CALL 
transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0_1(
#line 294 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg,
#line 294 "pd_util.m"
  MR_Box transform_hlds__pd_util__wrapper_arg_1)
#line 294 "pd_util.m"
{
#line 294 "pd_util.m"
  {
#line 294 "pd_util.m"
    MR_Box transform_hlds__pd_util__wrapper_arg_2;
#line 294 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
#line 294 "pd_util.m"
    MR_Word transform_hlds__pd_util__conv0_HeadVar__3_3;

#line 294 "pd_util.m"
    {
#line 294 "pd_util.m"
      transform_hlds__pd_util__conv0_HeadVar__3_3 = check_hlds__mode_errors__mode_error_info_to_spec_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__pd_util__wrapper_arg_1));
    }
#line 294 "pd_util.m"
    transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__3_3));
#line 294 "pd_util.m"
    return transform_hlds__pd_util__wrapper_arg_2;
#line 294 "pd_util.m"
  }
#line 294 "pd_util.m"
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
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_38,
#line 58 "pd_util.m"
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_PDInfo_39)
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
    MR_Word transform_hlds__pd_util__HeadInstVars_20;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModuleInfo1_21;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModeInfo0_23;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModeInfo_24;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__ModuleInfo_25;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__Globals_26;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__Debug_27;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarSet_32;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__VarTypes_33;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__PredInfo_34;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__ProcInfo1_35;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__ProcInfo2_36;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__ProcInfo_37;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_47_47;
#line 266 "pd_util.m"
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_48_48;

#line 268 "pd_util.m"
    {
#line 268 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_38, &transform_hlds__pd_util__PredProcId_12);
    }
#line 269 "pd_util.m"
    transform_hlds__pd_util__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__PredProcId_12, (MR_Integer) 0)));
#line 269 "pd_util.m"
    transform_hlds__pd_util__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__PredProcId_12, (MR_Integer) 1)));
#line 270 "pd_util.m"
    {
#line 270 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_38, &transform_hlds__pd_util__ModuleInfo0_15);
    }
#line 271 "pd_util.m"
    {
#line 271 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_38, &transform_hlds__pd_util__InstMap0_16);
    }
#line 272 "pd_util.m"
    {
#line 272 "pd_util.m"
      mercury__term__context_init_1_p_0(&transform_hlds__pd_util__Context_17);
    }
#line 273 "pd_util.m"
    {
#line 273 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_38, &transform_hlds__pd_util__PredInfo0_18);
    }
#line 274 "pd_util.m"
    {
#line 274 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_38, &transform_hlds__pd_util__ProcInfo0_19);
    }
#line 275 "pd_util.m"
    {
#line 275 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_head_inst_vars_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_38, &transform_hlds__pd_util__HeadInstVars_20);
    }
#line 276 "pd_util.m"
    {
#line 276 "pd_util.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__pd_util__PredId_13, transform_hlds__pd_util__ProcId_14, transform_hlds__pd_util__PredInfo0_18, transform_hlds__pd_util__ProcInfo0_19, transform_hlds__pd_util__ModuleInfo0_15, &transform_hlds__pd_util__ModuleInfo1_21);
    }
#line 282 "pd_util.m"
    {
#line 282 "pd_util.m"
      check_hlds__mode_info__mode_info_init_10_p_0(transform_hlds__pd_util__ModuleInfo1_21, transform_hlds__pd_util__PredId_13, transform_hlds__pd_util__ProcId_14, transform_hlds__pd_util__Context_17, transform_hlds__pd_util__LiveVars_7, transform_hlds__pd_util__HeadInstVars_20, transform_hlds__pd_util__InstMap0_16, (MR_Integer) 1, (MR_Integer) 1, &transform_hlds__pd_util__ModeInfo0_23);
    }
#line 286 "pd_util.m"
    {
#line 286 "pd_util.m"
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(transform_hlds__pd_util__Goal0_8, transform_hlds__pd_util__Goal_9, transform_hlds__pd_util__ModeInfo0_23, &transform_hlds__pd_util__ModeInfo_24);
    }
#line 287 "pd_util.m"
    {
#line 287 "pd_util.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(transform_hlds__pd_util__ModeInfo_24, &transform_hlds__pd_util__ModuleInfo_25);
    }
#line 288 "pd_util.m"
    {
#line 288 "pd_util.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_util__ModuleInfo_25, &transform_hlds__pd_util__Globals_26);
    }
#line 289 "pd_util.m"
    {
#line 289 "pd_util.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_util__Globals_26, (MR_Integer) 72, &transform_hlds__pd_util__Debug_27);
    }
#line 290 "pd_util.m"
    {
#line 290 "pd_util.m"
      check_hlds__mode_info__mode_info_get_errors_2_p_0(transform_hlds__pd_util__ModeInfo_24, transform_hlds__pd_util__Errors_10);
    }
#line 298 "pd_util.m"
#line 298 "pd_util.m"
    switch (transform_hlds__pd_util__Debug_27) {
#line 298 "pd_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 298 "pd_util.m"
      case (MR_Integer) 0:
#line 299 "pd_util.m"
        {
#line 299 "pd_util.m"
        }
#line 298 "pd_util.m"
        break;
#line 298 "pd_util.m"
      case (MR_Integer) 1:
#line 293 "pd_util.m"
        {
#line 293 "pd_util.m"
          MR_Word transform_hlds__pd_util__ErrorSpecs_29;
#line 293 "pd_util.m"
          MR_Word transform_hlds__pd_util__V_43_43;
#line 295 "pd_util.m"
          MR_Integer transform_hlds__pd_util___NumWarnings_30;
#line 295 "pd_util.m"
          MR_Integer transform_hlds__pd_util___NumErrors_31;

#line 294 "pd_util.m"
          {
#line 294 "pd_util.m"
            transform_hlds__pd_util__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 294 "pd_util.m"
            MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_43_43, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[0]));
#line 294 "pd_util.m"
            MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_43_43, 1) = ((MR_Box) (transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0_1));
#line 294 "pd_util.m"
            MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 294 "pd_util.m"
            MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_43_43, 3) = ((MR_Box) (transform_hlds__pd_util__ModeInfo_24));
#line 294 "pd_util.m"
          }
#line 294 "pd_util.m"
          {
#line 294 "pd_util.m"
            transform_hlds__pd_util__ErrorSpecs_29 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, transform_hlds__pd_util__V_43_43, *transform_hlds__pd_util__Errors_10);
          }
#line 295 "pd_util.m"
          {
#line 295 "pd_util.m"
            parse_tree__error_util__write_error_specs_8_p_0(transform_hlds__pd_util__ErrorSpecs_29, transform_hlds__pd_util__Globals_26, (MR_Integer) 0, &transform_hlds__pd_util___NumWarnings_30, (MR_Integer) 0, &transform_hlds__pd_util___NumErrors_31);
          }
#line 293 "pd_util.m"
        }
#line 298 "pd_util.m"
        break;
#line 298 "pd_util.m"
    }
#line 303 "pd_util.m"
    {
#line 303 "pd_util.m"
      check_hlds__mode_info__mode_info_get_varset_2_p_0(transform_hlds__pd_util__ModeInfo_24, &transform_hlds__pd_util__VarSet_32);
    }
#line 304 "pd_util.m"
    {
#line 304 "pd_util.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(transform_hlds__pd_util__ModeInfo_24, &transform_hlds__pd_util__VarTypes_33);
    }
#line 305 "pd_util.m"
    {
#line 305 "pd_util.m"
      transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_util__ModuleInfo_25, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_38, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_47_47);
    }
#line 306 "pd_util.m"
    {
#line 306 "pd_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__pd_util__ModuleInfo_25, transform_hlds__pd_util__PredId_13, transform_hlds__pd_util__ProcId_14, &transform_hlds__pd_util__PredInfo_34, &transform_hlds__pd_util__ProcInfo1_35);
    }
#line 308 "pd_util.m"
    {
#line 308 "pd_util.m"
      transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(transform_hlds__pd_util__PredInfo_34, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_47_47, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_48_48);
    }
#line 309 "pd_util.m"
    {
#line 309 "pd_util.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__pd_util__VarSet_32, transform_hlds__pd_util__ProcInfo1_35, &transform_hlds__pd_util__ProcInfo2_36);
    }
#line 310 "pd_util.m"
    {
#line 310 "pd_util.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__pd_util__VarTypes_33, transform_hlds__pd_util__ProcInfo2_36, &transform_hlds__pd_util__ProcInfo_37);
    }
#line 311 "pd_util.m"
    {
#line 311 "pd_util.m"
      transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__pd_util__ProcInfo_37, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_48_48, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_39);
#line 311 "pd_util.m"
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
#line 319 "pd_util.m"
    MR_Word transform_hlds__pd_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal0_6, (MR_Integer) 0)));

#line 320 "pd_util.m"
    {
#line 320 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_11, &transform_hlds__pd_util__ModuleInfo_19);
    }
#line 321 "pd_util.m"
    {
#line 321 "pd_util.m"
      transform_hlds__pd_util__InstMapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo_17);
    }
#line 322 "pd_util.m"
    {
#line 322 "pd_util.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_11, &transform_hlds__pd_util__InstMap_21);
    }
#line 323 "pd_util.m"
    {
#line 323 "pd_util.m"
      transform_hlds__pd_util__NonLocals_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_util__GoalInfo_17);
    }
#line 8269 "transform_hlds.pd_util.c"
    transform_hlds__pd_util__TypeCtorInfo_16_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 324 "pd_util.m"
    {
#line 324 "pd_util.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(transform_hlds__pd_util__TypeCtorInfo_16_26, transform_hlds__pd_util__NonLocals_22, &transform_hlds__pd_util__NonLocalsList_23);
    }
#line 325 "pd_util.m"
    {
#line 325 "pd_util.m"
      parse_tree__set_of_var__init_1_p_0(transform_hlds__pd_util__TypeCtorInfo_16_26, &transform_hlds__pd_util__STATE_VARIABLE_Vars_14_24);
    }
#line 326 "pd_util.m"
    {
#line 326 "pd_util.m"
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

#line 382 "pd_util.m"
static MR_bool MR_CALL 
transform_hlds__pd_util__propagate_constraints_4_p_0_1(
#line 382 "pd_util.m"
  MR_Box transform_hlds__pd_util__closure_arg)
#line 382 "pd_util.m"
{
#line 382 "pd_util.m"
  {
#line 382 "pd_util.m"
    MR_bool transform_hlds__pd_util__succeeded;
#line 382 "pd_util.m"
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;

#line 382 "pd_util.m"
    {
#line 382 "pd_util.m"
      return transform_hlds__pd_util__succeeded = transform_hlds__pd_util__IntroducedFrom__pred__rerun_det_analysis__382__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 4))));
    }
#line 382 "pd_util.m"
    return transform_hlds__pd_util__succeeded;
#line 382 "pd_util.m"
  }
#line 382 "pd_util.m"
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
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_util__Globals_8, (MR_Integer) 352, &transform_hlds__pd_util__ConstraintProp_9);
    }
#line 200 "pd_util.m"
    {
#line 200 "pd_util.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_util__Globals_8, (MR_Integer) 72, &transform_hlds__pd_util__DebugPD_10);
    }
#line 241 "pd_util.m"
#line 241 "pd_util.m"
    switch (transform_hlds__pd_util__ConstraintProp_9) {
#line 241 "pd_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 241 "pd_util.m"
      case (MR_Integer) 0:
#line 242 "pd_util.m"
        {
#line 242 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_Goal_30 = transform_hlds__pd_util__STATE_VARIABLE_Goal_0_29;
#line 242 "pd_util.m"
          *transform_hlds__pd_util__STATE_VARIABLE_PDInfo_32 = transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_31;
#line 242 "pd_util.m"
        }
#line 241 "pd_util.m"
        break;
#line 241 "pd_util.m"
      case (MR_Integer) 1:
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
#line 233 "pd_util.m"
          switch (transform_hlds__pd_util__Changed_25) {
#line 233 "pd_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 233 "pd_util.m"
            case (MR_Integer) 0:
#line 238 "pd_util.m"
              {
#line 239 "pd_util.m"
                *transform_hlds__pd_util__STATE_VARIABLE_Goal_30 = transform_hlds__pd_util__STATE_VARIABLE_Goal_0_29;
#line 238 "pd_util.m"
                *transform_hlds__pd_util__STATE_VARIABLE_PDInfo_32 = transform_hlds__pd_util__STATE_VARIABLE_PDInfo_43_43;
#line 238 "pd_util.m"
              }
#line 233 "pd_util.m"
              break;
#line 233 "pd_util.m"
            case (MR_Integer) 1:
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
#line 354 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_62_62;
#line 372 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_75_75;
#line 372 "pd_util.m"
                MR_Word transform_hlds__pd_util__V_76_76;
#line 380 "pd_util.m"
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
#line 354 "pd_util.m"
                transform_hlds__pd_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__STATE_VARIABLE_Goal_50_50, (MR_Integer) 0)));
#line 354 "pd_util.m"
                transform_hlds__pd_util__GoalInfo0_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__STATE_VARIABLE_Goal_50_50, (MR_Integer) 1)));
#line 356 "pd_util.m"
                {
#line 356 "pd_util.m"
                  transform_hlds__pd_util__Detism_64 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__pd_util__GoalInfo0_63);
                }
#line 357 "pd_util.m"
                {
#line 357 "pd_util.m"
                  check_hlds__det_analysis__det_get_soln_context_2_p_0(transform_hlds__pd_util__Detism_64, &transform_hlds__pd_util__SolnContext_65);
                }
#line 361 "pd_util.m"
                {
#line 361 "pd_util.m"
                  transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__V_84_84);
                }
#line 361 "pd_util.m"
                transform_hlds__pd_util__PredId_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_84_84, (MR_Integer) 0)));
#line 361 "pd_util.m"
                transform_hlds__pd_util__ProcId_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_84_84, (MR_Integer) 1)));
#line 362 "pd_util.m"
                {
#line 362 "pd_util.m"
                  transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__PredInfo_68);
                }
#line 363 "pd_util.m"
                {
#line 363 "pd_util.m"
                  transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__ProcInfo_69);
                }
#line 364 "pd_util.m"
                {
#line 364 "pd_util.m"
                  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__ModuleInfo0_70);
                }
#line 365 "pd_util.m"
                {
#line 365 "pd_util.m"
                  hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__pd_util__PredId_66, transform_hlds__pd_util__ProcId_67, transform_hlds__pd_util__PredInfo_68, transform_hlds__pd_util__ProcInfo_69, transform_hlds__pd_util__ModuleInfo0_70, &transform_hlds__pd_util__ModuleInfo1_71);
                }
#line 368 "pd_util.m"
                {
#line 368 "pd_util.m"
                  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_util__ProcInfo_69, &transform_hlds__pd_util__VarTypes_72);
                }
#line 369 "pd_util.m"
                {
#line 369 "pd_util.m"
                  check_hlds__det_util__det_info_init_7_p_0(transform_hlds__pd_util__ModuleInfo1_71, transform_hlds__pd_util__VarTypes_72, transform_hlds__pd_util__PredId_66, transform_hlds__pd_util__ProcId_67, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__pd_util__DetInfo0_73);
                }
#line 371 "pd_util.m"
                {
#line 371 "pd_util.m"
                  transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__InstMap_74);
                }
#line 372 "pd_util.m"
                {
#line 372 "pd_util.m"
                  check_hlds__det_analysis__det_infer_goal_10_p_0(transform_hlds__pd_util__STATE_VARIABLE_Goal_50_50, &transform_hlds__pd_util__STATE_VARIABLE_Goal_52_52, transform_hlds__pd_util__InstMap_74, transform_hlds__pd_util__SolnContext_65, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__pd_util__V_75_75, &transform_hlds__pd_util__V_76_76, transform_hlds__pd_util__DetInfo0_73, &transform_hlds__pd_util__DetInfo_77);
                }
#line 374 "pd_util.m"
                {
#line 374 "pd_util.m"
                  check_hlds__det_util__det_info_get_module_info_2_p_0(transform_hlds__pd_util__DetInfo_77, &transform_hlds__pd_util__ModuleInfo_78);
                }
#line 375 "pd_util.m"
                {
#line 375 "pd_util.m"
                  transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_util__ModuleInfo_78, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_53_53);
                }
#line 376 "pd_util.m"
                {
#line 376 "pd_util.m"
                  check_hlds__det_util__det_info_get_error_specs_2_p_0(transform_hlds__pd_util__DetInfo_77, &transform_hlds__pd_util__Specs_79);
                }
#line 379 "pd_util.m"
                {
#line 379 "pd_util.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_util__ModuleInfo_78, &transform_hlds__pd_util__Globals_80);
                }
#line 380 "pd_util.m"
                {
#line 380 "pd_util.m"
                  check_hlds__det_report__disable_det_warnings_3_p_0(&transform_hlds__pd_util___OptionsToRestore_81, transform_hlds__pd_util__Globals_80, &transform_hlds__pd_util__GlobalsToUse_82);
                }
#line 381 "pd_util.m"
                {
#line 381 "pd_util.m"
                  transform_hlds__pd_util__ContainsErrors_83 = parse_tree__error_util__contains_errors_2_f_0(transform_hlds__pd_util__GlobalsToUse_82, transform_hlds__pd_util__Specs_79);
                }
#line 382 "pd_util.m"
                {
#line 382 "pd_util.m"
                  transform_hlds__pd_util__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 382 "pd_util.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_90_90, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_3[1]));
#line 382 "pd_util.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_90_90, 1) = ((MR_Box) (transform_hlds__pd_util__propagate_constraints_4_p_0_1));
#line 382 "pd_util.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 382 "pd_util.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_90_90, 3) = ((MR_Box) (transform_hlds__pd_util__ContainsErrors_83));
#line 382 "pd_util.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__V_90_90, 4) = ((MR_Box) ((MR_Integer) 0));
#line 382 "pd_util.m"
                }
#line 382 "pd_util.m"
                {
#line 382 "pd_util.m"
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
#line 233 "pd_util.m"
              break;
#line 233 "pd_util.m"
          }
#line 202 "pd_util.m"
        }
#line 241 "pd_util.m"
        break;
#line 241 "pd_util.m"
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
