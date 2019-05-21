/*
** Automatically generated from `pd_util.m'
** by the Mercury compiler,
** version rotd-2017-08-05
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_analysis.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.unique_modes.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "transform_hlds.constraint.mih"
#include "transform_hlds.pd_debug.mih"
#include "transform_hlds.pd_info.mih"
#include "transform_hlds.pd_term.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_util__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_util__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1122__1_3_p_0(
  MR_Word transform_hlds__pd_util__LambdaHeadVar__1_98,
  MR_Word transform_hlds__pd_util__LambdaHeadVar__2_99,
  MR_Word * transform_hlds__pd_util__LambdaHeadVar__3_100);

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__621__1_7_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Word transform_hlds__pd_util__InstMap_4,
  MR_Integer transform_hlds__pd_util__BranchNo_5,
  MR_Word transform_hlds__pd_util__InstMapDelta_17,
  MR_Word transform_hlds__pd_util__LambdaHeadVar__1_43,
  MR_Word transform_hlds__pd_util__LambdaHeadVar__2_44,
  MR_Word * transform_hlds__pd_util__LambdaHeadVar__3_45);

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__582__1_2_p_0(
  MR_Word transform_hlds__pd_util__LambdaHeadVar__1_37,
  MR_Word * transform_hlds__pd_util__LambdaHeadVar__2_38);

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__590__1_2_p_0(
  MR_Word transform_hlds__pd_util__LambdaHeadVar__1_35,
  MR_Word * transform_hlds__pd_util__LambdaHeadVar__2_36);

static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__rerun_det_analysis__390__1_2_p_0(
  MR_Word transform_hlds__pd_util__ContainsErrors_29,
  MR_Word transform_hlds__pd_util__HeadVar__2_41);

static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goals_match__1025__1_3_p_0(
  MR_Word transform_hlds__pd_util__OldNewRenaming_15,
  MR_Word transform_hlds__pd_util__LambdaHeadVar__1_30,
  MR_Word * transform_hlds__pd_util__LambdaHeadVar__2_31);

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__405__1_3_p_0(
  MR_Word transform_hlds__pd_util__Args_5,
  MR_Integer transform_hlds__pd_util__HeadVar__2_27,
  MR_Word * transform_hlds__pd_util__HeadVar__3_28);

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__401__1_3_p_0(
  MR_Word transform_hlds__pd_util__Args_5,
  MR_Integer transform_hlds__pd_util__HeadVar__2_24,
  MR_Word * transform_hlds__pd_util__HeadVar__3_25);

static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__193__1_2_p_0(
  MR_Word transform_hlds__pd_util__LambdaHeadVar__1_16,
  MR_Word * transform_hlds__pd_util__LambdaHeadVar__2_17);

static void MR_CALL 
transform_hlds__pd_util____Compare____pd_var_info_0_0(
  MR_Word * transform_hlds__pd_util__HeadVar__1_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____pd_var_info_0_0(
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2);

static void MR_CALL 
transform_hlds__pd_util____Compare____expansions_0_0(
  MR_Word * transform_hlds__pd_util__HeadVar__1_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____expansions_0_0(
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0_1(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box * transform_hlds__pd_util__wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_2_4_p_0_1(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
  MR_Box * transform_hlds__pd_util__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_2_4_p_0(
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_4);

static MR_bool MR_CALL 
transform_hlds__pd_util__match_generic_call_2_p_0(
  MR_Word transform_hlds__pd_util__GenericCallA_3,
  MR_Word transform_hlds__pd_util__GenericCallB_4);

static void MR_CALL 
transform_hlds__pd_util__collect_matching_arg_types_5_p_0(
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__Renaming_3,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_5);

static void MR_CALL 
transform_hlds__pd_util__inst_list_size_5_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__Expansions_3,
  MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_0_4,
  MR_Integer * transform_hlds__pd_util__STATE_VARIABLE_Size_5);

static void MR_CALL 
transform_hlds__pd_util__bound_inst_size_5_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__Expansions_3,
  MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_0_4,
  MR_Integer * transform_hlds__pd_util__STATE_VARIABLE_Size_5);

static void MR_CALL 
transform_hlds__pd_util__inst_size_2_4_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_5,
  MR_Word transform_hlds__pd_util__Inst_6,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23,
  MR_Integer * transform_hlds__pd_util__Size_8);

static MR_bool MR_CALL 
transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(
  MR_Word transform_hlds__pd_util__Xs_8,
  MR_Word transform_hlds__pd_util__Ys_9,
  MR_Word transform_hlds__pd_util__Expansions_10,
  MR_Word transform_hlds__pd_util__ModuleInfo_11,
  MR_Word transform_hlds__pd_util__Uniq_12,
  MR_Word transform_hlds__pd_util__BoundInsts_13,
  MR_Word * transform_hlds__pd_util__Inst_14);

static MR_bool MR_CALL 
transform_hlds__pd_util__inst_list_MSG_5_p_0(
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__Expansions_3,
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
  MR_Word * transform_hlds__pd_util__HeadVar__5_5);

static void MR_CALL 
transform_hlds__pd_util__get_sub_branch_vars_goal_8_p_0(
  MR_Word transform_hlds__pd_util__ProcArgInfo_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__VarTypes_3,
  MR_Word transform_hlds__pd_util__InstMap0_4,
  MR_Word transform_hlds__pd_util__HeadVar__5_5,
  MR_Word * transform_hlds__pd_util__HeadVar__6_6,
  MR_Word transform_hlds__pd_util__HeadVar__7_7,
  MR_Word * transform_hlds__pd_util__HeadVar__8_8);

static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Word transform_hlds__pd_util__ProcArgInfo_2,
  MR_Integer transform_hlds__pd_util__BranchNo_3,
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
  MR_Word transform_hlds__pd_util__InstMap_6,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8);

static void MR_CALL 
transform_hlds__pd_util__examine_case_list_10_p_0(
  MR_Word transform_hlds__pd_util__ProcArgInfo_1,
  MR_Integer transform_hlds__pd_util__BranchNo_2,
  MR_Word transform_hlds__pd_util__Var_3,
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
  MR_Word transform_hlds__pd_util__VarTypes_5,
  MR_Word transform_hlds__pd_util__InstMap0_6,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_10);

static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Word transform_hlds__pd_util__ProcArgInfo_2,
  MR_Integer transform_hlds__pd_util__BranchNo_3,
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
  MR_Word transform_hlds__pd_util__InstMap_6,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8);

static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0_2(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box * transform_hlds__pd_util__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0_1(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box * transform_hlds__pd_util__wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
  MR_Word transform_hlds__pd_util__InstMap0_5,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_LeftVars_7,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_9);

static void MR_CALL 
transform_hlds__pd_util__get_branch_vars_7_p_0_1(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
  MR_Box * transform_hlds__pd_util__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_util__get_branch_vars_7_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Word transform_hlds__pd_util__Goal_2,
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
  MR_Word transform_hlds__pd_util__InstMap_4,
  MR_Integer transform_hlds__pd_util__BranchNo_5,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0_6,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_7);

static void MR_CALL 
transform_hlds__pd_util__get_left_vars_3_p_0(
  MR_Word transform_hlds__pd_util__Goal_4,
  MR_Word transform_hlds__pd_util__Vars0_5,
  MR_Word * transform_hlds__pd_util__Vars_6);

static void MR_CALL 
transform_hlds__pd_util__combine_vars_4_p_0(
  MR_Integer transform_hlds__pd_util__BranchNo_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_4);

static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0_2(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box * transform_hlds__pd_util__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0_1(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box * transform_hlds__pd_util__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_2_4_p_0(
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
  MR_Word transform_hlds__pd_util__Args_2,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0_3,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_VarInfo_4);

static void MR_CALL 
transform_hlds__pd_util__get_extra_info_headvars_8_p_0(
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
  MR_Integer transform_hlds__pd_util__ArgNo_2,
  MR_Word transform_hlds__pd_util__LeftVars_3,
  MR_Word transform_hlds__pd_util__VarInfo_4,
  MR_Word transform_hlds__pd_util__HeadVar__5_5,
  MR_Word * transform_hlds__pd_util__HeadVar__6_6,
  MR_Word transform_hlds__pd_util__HeadVar__7_7,
  MR_Word * transform_hlds__pd_util__HeadVar__8_8);

static void MR_CALL 
transform_hlds__pd_util__get_opaque_args_6_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Integer transform_hlds__pd_util__ArgNo_2,
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
  MR_Word transform_hlds__pd_util__ExtraInfoArgs_4,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_6);

static void MR_CALL 
transform_hlds__pd_util__get_goal_live_vars_2_6_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__InstMap_3,
  MR_Word transform_hlds__pd_util__InstMapDelta_4,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_6);

static MR_Box MR_CALL 
transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0_1(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__pd_util__propagate_constraints_4_p_0_1(
  MR_Box transform_hlds__pd_util__closure_arg);

static MR_bool MR_CALL 
transform_hlds__pd_util__goal_get_calls_2_p_0_1(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box * transform_hlds__pd_util__wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____expansions_0_0_10001(
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box transform_hlds__pd_util__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_util____Compare____expansions_0_0_10001(
  MR_Box * transform_hlds__pd_util__wrapper_arg_1,
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
  MR_Box transform_hlds__pd_util__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____pd_var_info_0_0_10001(
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box transform_hlds__pd_util__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_util____Compare____pd_var_info_0_0_10001(
  MR_Box * transform_hlds__pd_util__wrapper_arg_1,
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
  MR_Box transform_hlds__pd_util__wrapper_arg_3);


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
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__pd_util__goals_match_2_4_p_0_1)),
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_util__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_util__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_util__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_util__transform_hlds__pd_util__type_ctor_info_expansions_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__pd_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_util__transform_hlds__pd_util__type_ctor_info_pd_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1122__1_3_p_0(
  MR_Word transform_hlds__pd_util__LambdaHeadVar__1_98,
  MR_Word transform_hlds__pd_util__LambdaHeadVar__2_99,
  MR_Word * transform_hlds__pd_util__LambdaHeadVar__3_100)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Word transform_hlds__pd_util__Key_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LambdaHeadVar__1_98, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_util__Value_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LambdaHeadVar__1_98, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_util__Value0_79;
    MR_Word transform_hlds__pd_util__TypeInfo_120_120 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
    MR_Box transform_hlds__pd_util__conv0_Value0_79;

    transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_util__TypeInfo_120_120, transform_hlds__pd_util__TypeInfo_120_120, transform_hlds__pd_util__LambdaHeadVar__2_99, ((MR_Box) (transform_hlds__pd_util__Key_77)), &transform_hlds__pd_util__conv0_Value0_79);
    if (transform_hlds__pd_util__succeeded)
    {
      transform_hlds__pd_util__Value0_79 = ((MR_Word) transform_hlds__pd_util__conv0_Value0_79);
      transform_hlds__pd_util__succeeded = MR_TRUE;
    }
    if (transform_hlds__pd_util__succeeded)
    {
      transform_hlds__pd_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], ((MR_Box) (transform_hlds__pd_util__Value_78)), ((MR_Box) (transform_hlds__pd_util__Value0_79)));
      if (transform_hlds__pd_util__succeeded)
      {
        *transform_hlds__pd_util__LambdaHeadVar__3_100 = transform_hlds__pd_util__LambdaHeadVar__2_99;
        transform_hlds__pd_util__succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word transform_hlds__pd_util__TypeInfo_121_121 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];

      mercury__map__det_insert_4_p_0(transform_hlds__pd_util__TypeInfo_121_121, transform_hlds__pd_util__TypeInfo_121_121, ((MR_Box) (transform_hlds__pd_util__Key_77)), ((MR_Box) (transform_hlds__pd_util__Value_78)), transform_hlds__pd_util__LambdaHeadVar__2_99, transform_hlds__pd_util__LambdaHeadVar__3_100);
      transform_hlds__pd_util__succeeded = MR_TRUE;
    }
    return transform_hlds__pd_util__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__621__1_7_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Word transform_hlds__pd_util__InstMap_4,
  MR_Integer transform_hlds__pd_util__BranchNo_5,
  MR_Word transform_hlds__pd_util__InstMapDelta_17,
  MR_Word transform_hlds__pd_util__LambdaHeadVar__1_43,
  MR_Word transform_hlds__pd_util__LambdaHeadVar__2_44,
  MR_Word * transform_hlds__pd_util__LambdaHeadVar__3_45)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Word transform_hlds__pd_util__TypeCtorInfo_73_73;
    MR_Word transform_hlds__pd_util__VarInst_26;
    MR_Word transform_hlds__pd_util__DeltaVarInst_27;
    MR_Word transform_hlds__pd_util__Var_46;
    MR_Word transform_hlds__pd_util__Var_47;
    MR_Word transform_hlds__pd_util__Var_71;
    MR_Word transform_hlds__pd_util__ArgX1_77;
    MR_Word transform_hlds__pd_util__ArgX2_79;
    MR_Word transform_hlds__pd_util__ArgY2_80;
    MR_Word transform_hlds__pd_util__Var_28;
    MR_Word transform_hlds__pd_util__TypeCtorInfo_74_74;
    MR_Word transform_hlds__pd_util__Var_48;
    MR_Word transform_hlds__pd_util__Var_49;
    MR_Word transform_hlds__pd_util__Var_72;
    MR_Word transform_hlds__pd_util__ArgX1_87;
    MR_Word transform_hlds__pd_util__ArgX2_89;
    MR_Word transform_hlds__pd_util__ArgY2_90;
    MR_Word transform_hlds__pd_util__Var_29;

    hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_util__InstMap_4, transform_hlds__pd_util__LambdaHeadVar__1_43, &transform_hlds__pd_util__VarInst_26);
    transform_hlds__pd_util__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__pd_util__InstMapDelta_17, transform_hlds__pd_util__LambdaHeadVar__1_43, &transform_hlds__pd_util__DeltaVarInst_27);
    if (transform_hlds__pd_util__succeeded)
    {
      transform_hlds__pd_util__Var_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        transform_hlds__pd_util__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_46, 0) = NULL;
        MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_46, 1) = ((MR_Box) (transform_hlds__pd_util__Var_47));
      }
      transform_hlds__pd_util__succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__DeltaVarInst_27, &transform_hlds__pd_util__Var_71);
      if (transform_hlds__pd_util__succeeded)
      {
        transform_hlds__pd_util__TypeCtorInfo_73_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__Var_71)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__pd_util__succeeded)
        {
          transform_hlds__pd_util__ArgX1_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_71, (MR_Integer) 0)));
          transform_hlds__pd_util__ArgY2_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_71, (MR_Integer) 1)));
          (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_46, (MR_Integer) 0)) = ((MR_Box) (transform_hlds__pd_util__ArgX1_77));
          transform_hlds__pd_util__ArgX2_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_46, (MR_Integer) 1)));
          transform_hlds__pd_util__succeeded = mercury__list____Unify____list_1_0(transform_hlds__pd_util__TypeCtorInfo_73_73, transform_hlds__pd_util__ArgX2_79, transform_hlds__pd_util__ArgY2_80);
          if (transform_hlds__pd_util__succeeded)
          {
            transform_hlds__pd_util__Var_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              transform_hlds__pd_util__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_48, 0) = NULL;
              MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_48, 1) = ((MR_Box) (transform_hlds__pd_util__Var_49));
            }
            transform_hlds__pd_util__succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__VarInst_26, &transform_hlds__pd_util__Var_72);
            if (transform_hlds__pd_util__succeeded)
            {
              transform_hlds__pd_util__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
              transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__Var_72)) == (MR_mktag((MR_Integer) 1)));
              if (transform_hlds__pd_util__succeeded)
              {
                transform_hlds__pd_util__ArgX1_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_72, (MR_Integer) 0)));
                transform_hlds__pd_util__ArgY2_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_72, (MR_Integer) 1)));
                (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_48, (MR_Integer) 0)) = ((MR_Box) (transform_hlds__pd_util__ArgX1_87));
                transform_hlds__pd_util__ArgX2_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_48, (MR_Integer) 1)));
                transform_hlds__pd_util__succeeded = mercury__list____Unify____list_1_0(transform_hlds__pd_util__TypeCtorInfo_74_74, transform_hlds__pd_util__ArgX2_89, transform_hlds__pd_util__ArgY2_90);
              }
            }
            transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
          }
        }
      }
    }
    if (transform_hlds__pd_util__succeeded)
    {
      MR_Word transform_hlds__pd_util__Set_31;
      MR_Word transform_hlds__pd_util__Set0_30;
      MR_Box transform_hlds__pd_util__conv0_Set0_30;

      transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__LambdaHeadVar__2_44, ((MR_Box) (transform_hlds__pd_util__LambdaHeadVar__1_43)), &transform_hlds__pd_util__conv0_Set0_30);
      if (transform_hlds__pd_util__succeeded)
      {
        transform_hlds__pd_util__Set0_30 = ((MR_Word) transform_hlds__pd_util__conv0_Set0_30);
        transform_hlds__pd_util__succeeded = MR_TRUE;
      }
      if (transform_hlds__pd_util__succeeded)
      {
        mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_5)), transform_hlds__pd_util__Set0_30, &transform_hlds__pd_util__Set_31);
      }
      else
      {
        transform_hlds__pd_util__Set_31 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_5)));
      }
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_util__LambdaHeadVar__1_43)), ((MR_Box) (transform_hlds__pd_util__Set_31)), transform_hlds__pd_util__LambdaHeadVar__2_44, transform_hlds__pd_util__LambdaHeadVar__3_45);
    }
    else
      *transform_hlds__pd_util__LambdaHeadVar__3_45 = transform_hlds__pd_util__LambdaHeadVar__2_44;
  }
}

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__582__1_2_p_0(
  MR_Word transform_hlds__pd_util__LambdaHeadVar__1_37,
  MR_Word * transform_hlds__pd_util__LambdaHeadVar__2_38)
{
  {
    MR_Word transform_hlds__pd_util__CaseInfo_29;
    MR_Word transform_hlds__pd_util__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LambdaHeadVar__1_37, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LambdaHeadVar__1_37, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LambdaHeadVar__1_37, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_util__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_39, (MR_Integer) 0)));

    transform_hlds__pd_util__CaseInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_39, (MR_Integer) 1)));
    *transform_hlds__pd_util__LambdaHeadVar__2_38 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__CaseInfo_29);
  }
}

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__590__1_2_p_0(
  MR_Word transform_hlds__pd_util__LambdaHeadVar__1_35,
  MR_Word * transform_hlds__pd_util__LambdaHeadVar__2_36)
{
  {
    MR_Word transform_hlds__pd_util__DisjInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LambdaHeadVar__1_35, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_util__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LambdaHeadVar__1_35, (MR_Integer) 0)));

    *transform_hlds__pd_util__LambdaHeadVar__2_36 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__DisjInfo_34);
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__rerun_det_analysis__390__1_2_p_0(
  MR_Word transform_hlds__pd_util__ContainsErrors_29,
  MR_Word transform_hlds__pd_util__HeadVar__2_41)
{
  {
    MR_bool transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__ContainsErrors_29 == transform_hlds__pd_util__HeadVar__2_41);

    return transform_hlds__pd_util__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goals_match__1025__1_3_p_0(
  MR_Word transform_hlds__pd_util__OldNewRenaming_15,
  MR_Word transform_hlds__pd_util__LambdaHeadVar__1_30,
  MR_Word * transform_hlds__pd_util__LambdaHeadVar__2_31)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Word transform_hlds__pd_util__TypeInfo_36_36 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
    MR_Box transform_hlds__pd_util__conv0_LambdaHeadVar__2_31;

    transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_util__TypeInfo_36_36, transform_hlds__pd_util__TypeInfo_36_36, transform_hlds__pd_util__OldNewRenaming_15, ((MR_Box) (transform_hlds__pd_util__LambdaHeadVar__1_30)), &transform_hlds__pd_util__conv0_LambdaHeadVar__2_31);
    if (transform_hlds__pd_util__succeeded)
    {
      *transform_hlds__pd_util__LambdaHeadVar__2_31 = ((MR_Word) transform_hlds__pd_util__conv0_LambdaHeadVar__2_31);
      transform_hlds__pd_util__succeeded = MR_TRUE;
    }
    return transform_hlds__pd_util__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__405__1_3_p_0(
  MR_Word transform_hlds__pd_util__Args_5,
  MR_Integer transform_hlds__pd_util__HeadVar__2_27,
  MR_Word * transform_hlds__pd_util__HeadVar__3_28)
{
  {
    MR_Box transform_hlds__pd_util__conv0_HeadVar__3_28;

    mercury__list__det_index1_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], transform_hlds__pd_util__Args_5, transform_hlds__pd_util__HeadVar__2_27, &transform_hlds__pd_util__conv0_HeadVar__3_28);
    *transform_hlds__pd_util__HeadVar__3_28 = ((MR_Word) transform_hlds__pd_util__conv0_HeadVar__3_28);
  }
}

static void MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__401__1_3_p_0(
  MR_Word transform_hlds__pd_util__Args_5,
  MR_Integer transform_hlds__pd_util__HeadVar__2_24,
  MR_Word * transform_hlds__pd_util__HeadVar__3_25)
{
  {
    MR_Box transform_hlds__pd_util__conv0_HeadVar__3_25;

    mercury__list__det_index1_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], transform_hlds__pd_util__Args_5, transform_hlds__pd_util__HeadVar__2_24, &transform_hlds__pd_util__conv0_HeadVar__3_25);
    *transform_hlds__pd_util__HeadVar__3_25 = ((MR_Word) transform_hlds__pd_util__conv0_HeadVar__3_25);
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__193__1_2_p_0(
  MR_Word transform_hlds__pd_util__LambdaHeadVar__1_16,
  MR_Word * transform_hlds__pd_util__LambdaHeadVar__2_17)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Word transform_hlds__pd_util__PredId_9;
    MR_Integer transform_hlds__pd_util__ProcId_10;
    MR_Word transform_hlds__pd_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LambdaHeadVar__1_16, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LambdaHeadVar__1_16, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_util__Var_11;
    MR_Word transform_hlds__pd_util__Var_12;
    MR_Word transform_hlds__pd_util__Var_13;
    MR_Word transform_hlds__pd_util__Var_14;

    transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__Var_18)) == (MR_mktag((MR_Integer) 2)));
    if (transform_hlds__pd_util__succeeded)
    {
      transform_hlds__pd_util__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__Var_18, (MR_Integer) 0)));
      transform_hlds__pd_util__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__Var_18, (MR_Integer) 1)));
      transform_hlds__pd_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__Var_18, (MR_Integer) 2)));
      transform_hlds__pd_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__Var_18, (MR_Integer) 3)));
      transform_hlds__pd_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__Var_18, (MR_Integer) 4)));
      transform_hlds__pd_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__Var_18, (MR_Integer) 5)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *transform_hlds__pd_util__LambdaHeadVar__2_17 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_util__PredId_9));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_util__ProcId_10));
      }
      transform_hlds__pd_util__succeeded = MR_TRUE;
    }
    return transform_hlds__pd_util__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_util____Compare____pd_var_info_0_0(
  MR_Word * transform_hlds__pd_util__HeadVar__1_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__HeadVar__3_3)
{
  {
    MR_Word transform_hlds__pd_util__Cast_HeadVar1_4 = transform_hlds__pd_util__HeadVar__2_2;
    MR_Word transform_hlds__pd_util__Cast_HeadVar2_5 = transform_hlds__pd_util__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_2[1], transform_hlds__pd_util__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____pd_var_info_0_0(
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Word transform_hlds__pd_util__Cast_HeadVar1_3 = transform_hlds__pd_util__HeadVar__1_1;
    MR_Word transform_hlds__pd_util__Cast_HeadVar2_4 = transform_hlds__pd_util__HeadVar__2_2;

    transform_hlds__pd_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar2_4)));
    return transform_hlds__pd_util__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_util____Compare____expansions_0_0(
  MR_Word * transform_hlds__pd_util__HeadVar__1_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__HeadVar__3_3)
{
  {
    MR_Word transform_hlds__pd_util__Cast_HeadVar1_4 = transform_hlds__pd_util__HeadVar__2_2;
    MR_Word transform_hlds__pd_util__Cast_HeadVar2_5 = transform_hlds__pd_util__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[3], transform_hlds__pd_util__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____expansions_0_0(
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Word transform_hlds__pd_util__Cast_HeadVar1_3 = transform_hlds__pd_util__HeadVar__1_1;
    MR_Word transform_hlds__pd_util__Cast_HeadVar2_4 = transform_hlds__pd_util__HeadVar__2_2;

    transform_hlds__pd_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[3], ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_util__Cast_HeadVar2_4)));
    return transform_hlds__pd_util__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__pd_util__pd_can_reorder_goals_4_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_5,
  MR_Word transform_hlds__pd_util__FullyStrict_6,
  MR_Word transform_hlds__pd_util__EarlierGoal_7,
  MR_Word transform_hlds__pd_util__LaterGoal_8)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Word transform_hlds__pd_util__EarlierGoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_util__LaterGoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_util__EarlierDetism_13;
    MR_Word transform_hlds__pd_util__LaterDetism_14;
    MR_Word transform_hlds__pd_util__EarlierPurity_17;
    MR_Word transform_hlds__pd_util__EarlierTrace_18;
    MR_Word transform_hlds__pd_util__LaterPurity_19;
    MR_Word transform_hlds__pd_util__LaterTrace_20;
    MR_Word transform_hlds__pd_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_util__Var_22;
    MR_Word transform_hlds__pd_util__Var_23;
    MR_Word transform_hlds__pd_util__Var_24;
    MR_Word transform_hlds__pd_util__Var_15;
    MR_Word transform_hlds__pd_util__Var_16;
    MR_Word transform_hlds__pd_util__TypeCtorInfo_11_33;
    MR_Word transform_hlds__pd_util__GoalInfo1_26;
    MR_Word transform_hlds__pd_util__GoalInfo2_28;
    MR_Word transform_hlds__pd_util__InstmapDelta1_29;
    MR_Word transform_hlds__pd_util__ChangedVars1_30;
    MR_Word transform_hlds__pd_util__NonLocals2_31;
    MR_Word transform_hlds__pd_util__Intersection_32;
    MR_Word transform_hlds__pd_util__Var_25;
    MR_Word transform_hlds__pd_util__Var_27;
    MR_Word transform_hlds__pd_util__TypeCtorInfo_11_42;
    MR_Word transform_hlds__pd_util__GoalInfo1_35;
    MR_Word transform_hlds__pd_util__GoalInfo2_37;
    MR_Word transform_hlds__pd_util__InstmapDelta1_38;
    MR_Word transform_hlds__pd_util__ChangedVars1_39;
    MR_Word transform_hlds__pd_util__NonLocals2_40;
    MR_Word transform_hlds__pd_util__Intersection_41;
    MR_Word transform_hlds__pd_util__Var_34;
    MR_Word transform_hlds__pd_util__Var_36;

    transform_hlds__pd_util__EarlierDetism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__pd_util__EarlierGoalInfo_10);
    transform_hlds__pd_util__LaterDetism_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__pd_util__LaterGoalInfo_12);
    parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__pd_util__EarlierDetism_13, &transform_hlds__pd_util__Var_23, &transform_hlds__pd_util__Var_15);
    transform_hlds__pd_util__succeeded = ((MR_Integer) 0 == transform_hlds__pd_util__Var_23);
    if (transform_hlds__pd_util__succeeded)
    {
      transform_hlds__pd_util__Var_22 = (MR_Integer) 2;
      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__pd_util__LaterDetism_14, &transform_hlds__pd_util__Var_16, &transform_hlds__pd_util__Var_24);
      transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Var_22 == transform_hlds__pd_util__Var_24);
    }
    transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
    if (transform_hlds__pd_util__succeeded)
    {
      hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(transform_hlds__pd_util__EarlierGoalInfo_10, &transform_hlds__pd_util__EarlierPurity_17, &transform_hlds__pd_util__EarlierTrace_18);
      hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(transform_hlds__pd_util__LaterGoalInfo_12, &transform_hlds__pd_util__LaterPurity_19, &transform_hlds__pd_util__LaterTrace_20);
      transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__LaterPurity_19 == (MR_Integer) 2);
      transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
      if (transform_hlds__pd_util__succeeded)
      {
        transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__LaterTrace_20 == (MR_Integer) 1);
        if (transform_hlds__pd_util__succeeded)
        {
          transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__EarlierPurity_17 == (MR_Integer) 2);
          transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
          if (transform_hlds__pd_util__succeeded)
          {
            transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__EarlierTrace_18 == (MR_Integer) 1);
            if (transform_hlds__pd_util__succeeded)
            {
              transform_hlds__pd_util__succeeded = hlds__goal_util__reordering_maintains_termination_old_4_p_0(transform_hlds__pd_util__ModuleInfo_5, transform_hlds__pd_util__FullyStrict_6, transform_hlds__pd_util__EarlierGoal_7, transform_hlds__pd_util__LaterGoal_8);
              if (transform_hlds__pd_util__succeeded)
              {
                transform_hlds__pd_util__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 0)));
                transform_hlds__pd_util__GoalInfo1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 1)));
                transform_hlds__pd_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 0)));
                transform_hlds__pd_util__GoalInfo2_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 1)));
                transform_hlds__pd_util__InstmapDelta1_29 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo1_26);
                hlds__instmap__instmap_delta_changed_vars_2_p_0(transform_hlds__pd_util__InstmapDelta1_29, &transform_hlds__pd_util__ChangedVars1_30);
                transform_hlds__pd_util__NonLocals2_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_util__GoalInfo2_28);
                transform_hlds__pd_util__TypeCtorInfo_11_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                parse_tree__set_of_var__intersect_3_p_0(transform_hlds__pd_util__TypeCtorInfo_11_33, transform_hlds__pd_util__ChangedVars1_30, transform_hlds__pd_util__NonLocals2_31, &transform_hlds__pd_util__Intersection_32);
                transform_hlds__pd_util__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(transform_hlds__pd_util__TypeCtorInfo_11_33, transform_hlds__pd_util__Intersection_32);
                transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
                if (transform_hlds__pd_util__succeeded)
                {
                  transform_hlds__pd_util__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 0)));
                  transform_hlds__pd_util__GoalInfo1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__LaterGoal_8, (MR_Integer) 1)));
                  transform_hlds__pd_util__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 0)));
                  transform_hlds__pd_util__GoalInfo2_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__EarlierGoal_7, (MR_Integer) 1)));
                  transform_hlds__pd_util__InstmapDelta1_38 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo1_35);
                  hlds__instmap__instmap_delta_changed_vars_2_p_0(transform_hlds__pd_util__InstmapDelta1_38, &transform_hlds__pd_util__ChangedVars1_39);
                  transform_hlds__pd_util__NonLocals2_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_util__GoalInfo2_37);
                  transform_hlds__pd_util__TypeCtorInfo_11_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  parse_tree__set_of_var__intersect_3_p_0(transform_hlds__pd_util__TypeCtorInfo_11_42, transform_hlds__pd_util__ChangedVars1_39, transform_hlds__pd_util__NonLocals2_40, &transform_hlds__pd_util__Intersection_41);
                  transform_hlds__pd_util__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(transform_hlds__pd_util__TypeCtorInfo_11_42, transform_hlds__pd_util__Intersection_41);
                  transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
                }
              }
            }
          }
        }
      }
    }
    return transform_hlds__pd_util__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_8_p_0(
  MR_Word transform_hlds__pd_util___ModuleInfo_9,
  MR_Word transform_hlds__pd_util__OldGoal_10,
  MR_Word transform_hlds__pd_util__OldArgs_11,
  MR_Word transform_hlds__pd_util__OldArgTypes_12,
  MR_Word transform_hlds__pd_util__NewGoal_13,
  MR_Word transform_hlds__pd_util__NewVarTypes_14,
  MR_Word * transform_hlds__pd_util__OldNewRenaming_15,
  MR_Word * transform_hlds__pd_util__TypeSubn_16)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;

    transform_hlds__pd_util__succeeded = transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0(transform_hlds__pd_util__OldGoal_10, transform_hlds__pd_util__OldArgs_11, transform_hlds__pd_util__OldArgTypes_12, transform_hlds__pd_util__NewGoal_13, transform_hlds__pd_util__NewVarTypes_14, transform_hlds__pd_util__OldNewRenaming_15, transform_hlds__pd_util__TypeSubn_16);
    return transform_hlds__pd_util__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0_1(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box * transform_hlds__pd_util__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
    MR_Word transform_hlds__pd_util__conv0_LambdaHeadVar__2_31;

    transform_hlds__pd_util__succeeded = transform_hlds__pd_util__IntroducedFrom__pred__goals_match__1025__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__pd_util__wrapper_arg_1), &transform_hlds__pd_util__conv0_LambdaHeadVar__2_31);
    if (transform_hlds__pd_util__succeeded)
    {
      *transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv0_LambdaHeadVar__2_31));
      transform_hlds__pd_util__succeeded = MR_TRUE;
    }
    return transform_hlds__pd_util__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0(
  MR_Word transform_hlds__pd_util__OldGoal_10,
  MR_Word transform_hlds__pd_util__OldArgs_11,
  MR_Word transform_hlds__pd_util__OldArgTypes_12,
  MR_Word transform_hlds__pd_util__NewGoal_13,
  MR_Word transform_hlds__pd_util__NewVarTypes_14,
  MR_Word * transform_hlds__pd_util__OldNewRenaming_15,
  MR_Word * transform_hlds__pd_util__TypeSubn_16)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Word transform_hlds__pd_util__TypeInfo_35_35;
    MR_Word transform_hlds__pd_util__TypeCtorInfo_37_37;
    MR_Word transform_hlds__pd_util__OldGoalList_17;
    MR_Word transform_hlds__pd_util__NewGoalList_18;
    MR_Word transform_hlds__pd_util__OldNewRenaming0_19;
    MR_Word transform_hlds__pd_util__Search_20;
    MR_Word transform_hlds__pd_util__NewArgs_23;
    MR_Word transform_hlds__pd_util__NewGoalInfo_25;
    MR_Word transform_hlds__pd_util__NewNonLocals_26;
    MR_Word transform_hlds__pd_util__UnmatchedNonLocals_27;
    MR_Word transform_hlds__pd_util__MatchingArgTypes_28;
    MR_Word transform_hlds__pd_util__NewArgTypes_29;
    MR_Word transform_hlds__pd_util__Var_32;
    MR_Word transform_hlds__pd_util__Var_24;

    hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__OldGoal_10, &transform_hlds__pd_util__OldGoalList_17);
    hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__NewGoal_13, &transform_hlds__pd_util__NewGoalList_18);
    transform_hlds__pd_util__TypeInfo_35_35 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
    mercury__map__init_1_p_0(transform_hlds__pd_util__TypeInfo_35_35, transform_hlds__pd_util__TypeInfo_35_35, &transform_hlds__pd_util__OldNewRenaming0_19);
    transform_hlds__pd_util__succeeded = transform_hlds__pd_util__goals_match_2_4_p_0(transform_hlds__pd_util__OldGoalList_17, transform_hlds__pd_util__NewGoalList_18, transform_hlds__pd_util__OldNewRenaming0_19, transform_hlds__pd_util__OldNewRenaming_15);
    if (transform_hlds__pd_util__succeeded)
    {
      {
        transform_hlds__pd_util__Search_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Search_20, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Search_20, 1) = ((MR_Box) (transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_115_95_109_97_116_99_104_95_95_91_49_93_95_48_8_p_0_1));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Search_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Search_20, 3) = ((MR_Box) (*transform_hlds__pd_util__OldNewRenaming_15));
      }
      transform_hlds__pd_util__succeeded = mercury__list__map_3_p_2(transform_hlds__pd_util__TypeInfo_35_35, transform_hlds__pd_util__TypeInfo_35_35, transform_hlds__pd_util__Search_20, transform_hlds__pd_util__OldArgs_11, &transform_hlds__pd_util__NewArgs_23);
      if (transform_hlds__pd_util__succeeded)
      {
        transform_hlds__pd_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewGoal_13, (MR_Integer) 0)));
        transform_hlds__pd_util__NewGoalInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewGoal_13, (MR_Integer) 1)));
        transform_hlds__pd_util__NewNonLocals_26 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_util__NewGoalInfo_25);
        transform_hlds__pd_util__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        parse_tree__set_of_var__delete_list_3_p_0(transform_hlds__pd_util__TypeCtorInfo_37_37, transform_hlds__pd_util__NewArgs_23, transform_hlds__pd_util__NewNonLocals_26, &transform_hlds__pd_util__UnmatchedNonLocals_27);
        transform_hlds__pd_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__pd_util__TypeCtorInfo_37_37, transform_hlds__pd_util__UnmatchedNonLocals_27);
        if (transform_hlds__pd_util__succeeded)
        {
          transform_hlds__pd_util__Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          transform_hlds__pd_util__collect_matching_arg_types_5_p_0(transform_hlds__pd_util__OldArgs_11, transform_hlds__pd_util__OldArgTypes_12, *transform_hlds__pd_util__OldNewRenaming_15, transform_hlds__pd_util__Var_32, &transform_hlds__pd_util__MatchingArgTypes_28);
          hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__pd_util__NewVarTypes_14, transform_hlds__pd_util__NewArgs_23, &transform_hlds__pd_util__NewArgTypes_29);
          transform_hlds__pd_util__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(transform_hlds__pd_util__MatchingArgTypes_28, transform_hlds__pd_util__NewArgTypes_29, transform_hlds__pd_util__TypeSubn_16);
        }
      }
    }
    return transform_hlds__pd_util__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_2_4_p_0_1(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
  MR_Box * transform_hlds__pd_util__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
    MR_Word transform_hlds__pd_util__conv0_LambdaHeadVar__3_100;

    transform_hlds__pd_util__succeeded = transform_hlds__pd_util__IntroducedFrom__pred__goals_match_2__1122__1_3_p_0(((MR_Word) transform_hlds__pd_util__wrapper_arg_1), ((MR_Word) transform_hlds__pd_util__wrapper_arg_2), &transform_hlds__pd_util__conv0_LambdaHeadVar__3_100);
    if (transform_hlds__pd_util__succeeded)
    {
      *transform_hlds__pd_util__wrapper_arg_3 = ((MR_Box) (transform_hlds__pd_util__conv0_LambdaHeadVar__3_100));
      transform_hlds__pd_util__succeeded = MR_TRUE;
    }
    return transform_hlds__pd_util__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util__goals_match_2_4_p_0(
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__pd_util__succeeded;

      if ((transform_hlds__pd_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (transform_hlds__pd_util__succeeded)
        {
          *transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_4 = transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3;
          transform_hlds__pd_util__succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word transform_hlds__pd_util__OldGoal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_util__OldGoals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__pd_util__NewGoal_10;
        MR_Word transform_hlds__pd_util__NewGoals_11;
        MR_Word transform_hlds__pd_util__OldGoalExpr_13;
        MR_Word transform_hlds__pd_util__NewGoalExpr_15;
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_101_101;
        MR_Word transform_hlds__pd_util__Var_14;
        MR_Word transform_hlds__pd_util__Var_16;
        MR_Word transform_hlds__pd_util__OldArgs_31;
        MR_Word transform_hlds__pd_util__NewArgs_32;

        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__pd_util__succeeded)
        {
          transform_hlds__pd_util__NewGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
          transform_hlds__pd_util__NewGoals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
          transform_hlds__pd_util__OldGoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldGoal_8, (MR_Integer) 0)));
          transform_hlds__pd_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldGoal_8, (MR_Integer) 1)));
          transform_hlds__pd_util__NewGoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewGoal_10, (MR_Integer) 0)));
          transform_hlds__pd_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewGoal_10, (MR_Integer) 1)));
          switch (MR_tag((MR_Word) transform_hlds__pd_util__OldGoalExpr_13)) {
            default:
              transform_hlds__pd_util__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__pd_util__OldUnification_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 3)));
                MR_Word transform_hlds__pd_util__NewUnification_25;
                MR_Word transform_hlds__pd_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 0)));
                MR_Word transform_hlds__pd_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 1)));
                MR_Word transform_hlds__pd_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 2)));
                MR_Word transform_hlds__pd_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 4)));
                MR_Word transform_hlds__pd_util__Var_22;
                MR_Word transform_hlds__pd_util__Var_23;
                MR_Word transform_hlds__pd_util__Var_24;
                MR_Word transform_hlds__pd_util__Var_26;

                transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewGoalExpr_15)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__pd_util__succeeded)
                {
                  transform_hlds__pd_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 0)));
                  transform_hlds__pd_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 1)));
                  transform_hlds__pd_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 2)));
                  transform_hlds__pd_util__NewUnification_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 3)));
                  transform_hlds__pd_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 4)));
                  switch (MR_tag((MR_Word) transform_hlds__pd_util__OldUnification_20)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word transform_hlds__pd_util__OldVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 0)));
                        MR_Word transform_hlds__pd_util__ConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 1)));
                        MR_Word transform_hlds__pd_util__OldArgs1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 2)));
                        MR_Word transform_hlds__pd_util__NewVar_40;
                        MR_Word transform_hlds__pd_util__NewArgs1_41;
                        MR_Word transform_hlds__pd_util__Var_124;
                        MR_Word transform_hlds__pd_util__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 3)));
                        MR_Word transform_hlds__pd_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 4)));
                        MR_Word transform_hlds__pd_util__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 5)));
                        MR_Word transform_hlds__pd_util__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 6)));
                        MR_Word transform_hlds__pd_util__Var_42;
                        MR_Word transform_hlds__pd_util__Var_43;
                        MR_Word transform_hlds__pd_util__Var_44;
                        MR_Word transform_hlds__pd_util__Var_45;

                        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewUnification_25)) == (MR_mktag((MR_Integer) 0)));
                        if (transform_hlds__pd_util__succeeded)
                        {
                          transform_hlds__pd_util__NewVar_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 0)));
                          transform_hlds__pd_util__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 1)));
                          transform_hlds__pd_util__NewArgs1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 2)));
                          transform_hlds__pd_util__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 3)));
                          transform_hlds__pd_util__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 4)));
                          transform_hlds__pd_util__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 5)));
                          transform_hlds__pd_util__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 6)));
                          transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__pd_util__ConsId_34, transform_hlds__pd_util__Var_124);
                          if (transform_hlds__pd_util__succeeded)
                          {
                            {
                              transform_hlds__pd_util__OldArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar_33));
                              MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 1) = ((MR_Box) (transform_hlds__pd_util__OldArgs1_35));
                            }
                            {
                              transform_hlds__pd_util__NewArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar_40));
                              MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 1) = ((MR_Box) (transform_hlds__pd_util__NewArgs1_41));
                            }
                            transform_hlds__pd_util__succeeded = MR_TRUE;
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word transform_hlds__pd_util__OldVar_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 0)));
                        MR_Word transform_hlds__pd_util__ConsId_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 1)));
                        MR_Word transform_hlds__pd_util__OldArgs1_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 2)));
                        MR_Word transform_hlds__pd_util__NewVar_111;
                        MR_Word transform_hlds__pd_util__NewArgs1_112;
                        MR_Word transform_hlds__pd_util__Var_125;
                        MR_Word transform_hlds__pd_util__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 3)));
                        MR_Word transform_hlds__pd_util__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 4)));
                        MR_Word transform_hlds__pd_util__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 5)));
                        MR_Word transform_hlds__pd_util__Var_49;
                        MR_Word transform_hlds__pd_util__Var_50;
                        MR_Word transform_hlds__pd_util__Var_51;

                        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewUnification_25)) == (MR_mktag((MR_Integer) 1)));
                        if (transform_hlds__pd_util__succeeded)
                        {
                          transform_hlds__pd_util__NewVar_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 0)));
                          transform_hlds__pd_util__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 1)));
                          transform_hlds__pd_util__NewArgs1_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 2)));
                          transform_hlds__pd_util__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 3)));
                          transform_hlds__pd_util__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 4)));
                          transform_hlds__pd_util__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 5)));
                          transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__pd_util__ConsId_109, transform_hlds__pd_util__Var_125);
                          if (transform_hlds__pd_util__succeeded)
                          {
                            {
                              transform_hlds__pd_util__OldArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar_108));
                              MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 1) = ((MR_Box) (transform_hlds__pd_util__OldArgs1_110));
                            }
                            {
                              transform_hlds__pd_util__NewArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar_111));
                              MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 1) = ((MR_Box) (transform_hlds__pd_util__NewArgs1_112));
                            }
                            transform_hlds__pd_util__succeeded = MR_TRUE;
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word transform_hlds__pd_util__Var_90;
                        MR_Word transform_hlds__pd_util__Var_91;
                        MR_Word transform_hlds__pd_util__Var_92;
                        MR_Word transform_hlds__pd_util__Var_93;
                        MR_Word transform_hlds__pd_util__OldVar1_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 0)));
                        MR_Word transform_hlds__pd_util__OldVar2_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 1)));
                        MR_Word transform_hlds__pd_util__NewVar1_106;
                        MR_Word transform_hlds__pd_util__NewVar2_107;

                        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewUnification_25)) == (MR_mktag((MR_Integer) 2)));
                        if (transform_hlds__pd_util__succeeded)
                        {
                          transform_hlds__pd_util__NewVar1_106 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 0)));
                          transform_hlds__pd_util__NewVar2_107 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 1)));
                          transform_hlds__pd_util__Var_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          transform_hlds__pd_util__Var_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          {
                            transform_hlds__pd_util__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_90, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar2_105));
                            MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_90, 1) = ((MR_Box) (transform_hlds__pd_util__Var_91));
                          }
                          {
                            transform_hlds__pd_util__OldArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar1_104));
                            MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 1) = ((MR_Box) (transform_hlds__pd_util__Var_90));
                          }
                          {
                            transform_hlds__pd_util__Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_92, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar2_107));
                            MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_92, 1) = ((MR_Box) (transform_hlds__pd_util__Var_93));
                          }
                          {
                            transform_hlds__pd_util__NewArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar1_106));
                            MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 1) = ((MR_Box) (transform_hlds__pd_util__Var_92));
                          }
                          transform_hlds__pd_util__succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word transform_hlds__pd_util__OldVar1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 1)));
                            MR_Word transform_hlds__pd_util__OldVar2_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldUnification_20, (MR_Integer) 2)));
                            MR_Word transform_hlds__pd_util__NewVar1_29;
                            MR_Word transform_hlds__pd_util__NewVar2_30;
                            MR_Word transform_hlds__pd_util__Var_94;
                            MR_Word transform_hlds__pd_util__Var_95;
                            MR_Word transform_hlds__pd_util__Var_96;
                            MR_Word transform_hlds__pd_util__Var_97;

                            transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__NewUnification_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 0)))) == (MR_Integer) 0)));
                            if (transform_hlds__pd_util__succeeded)
                            {
                              transform_hlds__pd_util__NewVar1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 1)));
                              transform_hlds__pd_util__NewVar2_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewUnification_25, (MR_Integer) 2)));
                              transform_hlds__pd_util__Var_95 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                              transform_hlds__pd_util__Var_97 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                              {
                                transform_hlds__pd_util__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_94, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar2_28));
                                MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_94, 1) = ((MR_Box) (transform_hlds__pd_util__Var_95));
                              }
                              {
                                transform_hlds__pd_util__OldArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 0) = ((MR_Box) (transform_hlds__pd_util__OldVar1_27));
                                MR_hl_field(MR_mktag(1), transform_hlds__pd_util__OldArgs_31, 1) = ((MR_Box) (transform_hlds__pd_util__Var_94));
                              }
                              {
                                transform_hlds__pd_util__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_96, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar2_30));
                                MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_96, 1) = ((MR_Box) (transform_hlds__pd_util__Var_97));
                              }
                              {
                                transform_hlds__pd_util__NewArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 0) = ((MR_Box) (transform_hlds__pd_util__NewVar1_29));
                                MR_hl_field(MR_mktag(1), transform_hlds__pd_util__NewArgs_32, 1) = ((MR_Box) (transform_hlds__pd_util__Var_96));
                              }
                              transform_hlds__pd_util__succeeded = MR_TRUE;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_util.goals_match_2\'/4", (MR_String) "complicated_unify should have been expanded by now");
                            transform_hlds__pd_util__succeeded = MR_TRUE;
                          }
                          break;
                      }
                      break;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word transform_hlds__pd_util__PredId_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 0)));
                MR_Integer transform_hlds__pd_util__ProcId_56 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 1)));
                MR_Word transform_hlds__pd_util__Var_126;
                MR_Integer transform_hlds__pd_util__Var_127;
                MR_Word transform_hlds__pd_util__Var_57;
                MR_Word transform_hlds__pd_util__Var_58;
                MR_Word transform_hlds__pd_util__Var_59;
                MR_Word transform_hlds__pd_util__Var_60;
                MR_Word transform_hlds__pd_util__Var_61;
                MR_Word transform_hlds__pd_util__Var_62;

                transform_hlds__pd_util__OldArgs_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 2)));
                transform_hlds__pd_util__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 3)));
                transform_hlds__pd_util__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 4)));
                transform_hlds__pd_util__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 5)));
                transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewGoalExpr_15)) == (MR_mktag((MR_Integer) 2)));
                if (transform_hlds__pd_util__succeeded)
                {
                  transform_hlds__pd_util__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 0)));
                  transform_hlds__pd_util__Var_127 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 1)));
                  transform_hlds__pd_util__NewArgs_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 2)));
                  transform_hlds__pd_util__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 3)));
                  transform_hlds__pd_util__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 4)));
                  transform_hlds__pd_util__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 5)));
                  transform_hlds__pd_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__pd_util__PredId_55, transform_hlds__pd_util__Var_126);
                  if (transform_hlds__pd_util__succeeded)
                    transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__ProcId_56 == transform_hlds__pd_util__Var_127);
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 0)))) {
                default:
                  transform_hlds__pd_util__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word transform_hlds__pd_util__TypeInfo_118_118;
                    MR_Word transform_hlds__pd_util__OldGenericCall_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 1)));
                    MR_Word transform_hlds__pd_util__Det_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 5)));
                    MR_Word transform_hlds__pd_util__NewGenericCall_67;
                    MR_Word transform_hlds__pd_util__OldArgs0_70;
                    MR_Word transform_hlds__pd_util__NewArgs0_71;
                    MR_Word transform_hlds__pd_util__OldArgs1_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 2)));
                    MR_Word transform_hlds__pd_util__NewArgs1_114;
                    MR_Word transform_hlds__pd_util__Var_128;
                    MR_Word transform_hlds__pd_util__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 3)));
                    MR_Word transform_hlds__pd_util__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 4)));
                    MR_Word transform_hlds__pd_util__Var_68;
                    MR_Word transform_hlds__pd_util__Var_69;

                    transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__NewGoalExpr_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (transform_hlds__pd_util__succeeded)
                    {
                      transform_hlds__pd_util__NewGenericCall_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 1)));
                      transform_hlds__pd_util__NewArgs1_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 2)));
                      transform_hlds__pd_util__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 3)));
                      transform_hlds__pd_util__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 4)));
                      transform_hlds__pd_util__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 5)));
                      transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Det_66 == transform_hlds__pd_util__Var_128);
                      if (transform_hlds__pd_util__succeeded)
                      {
                        transform_hlds__pd_util__succeeded = transform_hlds__pd_util__match_generic_call_2_p_0(transform_hlds__pd_util__OldGenericCall_63, transform_hlds__pd_util__NewGenericCall_67);
                        if (transform_hlds__pd_util__succeeded)
                        {
                          hlds__goal_util__generic_call_vars_2_p_0(transform_hlds__pd_util__OldGenericCall_63, &transform_hlds__pd_util__OldArgs0_70);
                          hlds__goal_util__generic_call_vars_2_p_0(transform_hlds__pd_util__NewGenericCall_67, &transform_hlds__pd_util__NewArgs0_71);
                          transform_hlds__pd_util__TypeInfo_118_118 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
                          transform_hlds__pd_util__OldArgs_31 = mercury__list__f_43_43_2_f_0(transform_hlds__pd_util__TypeInfo_118_118, transform_hlds__pd_util__OldArgs0_70, transform_hlds__pd_util__OldArgs1_113);
                          transform_hlds__pd_util__NewArgs_32 = mercury__list__f_43_43_2_f_0(transform_hlds__pd_util__TypeInfo_118_118, transform_hlds__pd_util__NewArgs0_71, transform_hlds__pd_util__NewArgs1_114);
                          transform_hlds__pd_util__succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                  break;
              }
              break;
          }
          if (transform_hlds__pd_util__succeeded)
          {
            MR_Word transform_hlds__pd_util__TypeInfo_119_119 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
            MR_Word transform_hlds__pd_util__ONArgsList_72;
            MR_Box transform_hlds__pd_util__conv1_STATE_VARIABLE_ONRenaming_101_101;

            mercury__assoc_list__from_corresponding_lists_3_p_0(transform_hlds__pd_util__TypeInfo_119_119, transform_hlds__pd_util__TypeInfo_119_119, transform_hlds__pd_util__OldArgs_31, transform_hlds__pd_util__NewArgs_32, &transform_hlds__pd_util__ONArgsList_72);
            transform_hlds__pd_util__succeeded = mercury__list__foldl_4_p_3((MR_Word) &transform_hlds__pd_util_scalar_common_2[2], (MR_Word) &transform_hlds__pd_util_scalar_common_2[3], (MR_Word) &transform_hlds__pd_util_scalar_common_2[7], transform_hlds__pd_util__ONArgsList_72, ((MR_Box) (transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3)), &transform_hlds__pd_util__conv1_STATE_VARIABLE_ONRenaming_101_101);
            if (transform_hlds__pd_util__succeeded)
            {
              transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_101_101 = ((MR_Word) transform_hlds__pd_util__conv1_STATE_VARIABLE_ONRenaming_101_101);
              transform_hlds__pd_util__succeeded = MR_TRUE;
            }
          }
          else
          {
            MR_Word transform_hlds__pd_util__OldSubGoal_80;
            MR_Word transform_hlds__pd_util__NewSubGoal_81;
            MR_Word transform_hlds__pd_util__OldSubGoalList_84;
            MR_Word transform_hlds__pd_util__NewSubGoalList_85;

            if (((MR_tag((MR_Word) transform_hlds__pd_util__OldGoalExpr_13)) == (MR_mktag((MR_Integer) 0))))
            {
              transform_hlds__pd_util__OldSubGoal_80 = (MR_Word) MR_body(((MR_Word) transform_hlds__pd_util__OldGoalExpr_13), (MR_Integer) 0);
              transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__NewGoalExpr_15)) == (MR_mktag((MR_Integer) 0)));
              if (transform_hlds__pd_util__succeeded)
                transform_hlds__pd_util__NewSubGoal_81 = (MR_Word) MR_body(((MR_Word) transform_hlds__pd_util__NewGoalExpr_15), (MR_Integer) 0);
            }
            else
            if (((((MR_tag((MR_Word) transform_hlds__pd_util__OldGoalExpr_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
            {
              MR_Word transform_hlds__pd_util__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 1)));
              MR_Word transform_hlds__pd_util__Var_83;

              transform_hlds__pd_util__OldSubGoal_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__OldGoalExpr_13, (MR_Integer) 2)));
              transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__NewGoalExpr_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (transform_hlds__pd_util__succeeded)
              {
                transform_hlds__pd_util__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 1)));
                transform_hlds__pd_util__NewSubGoal_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewGoalExpr_15, (MR_Integer) 2)));
              }
            }
            else
              transform_hlds__pd_util__succeeded = MR_FALSE;
            if (transform_hlds__pd_util__succeeded)
            {
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__OldSubGoal_80, &transform_hlds__pd_util__OldSubGoalList_84);
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__NewSubGoal_81, &transform_hlds__pd_util__NewSubGoalList_85);
              transform_hlds__pd_util__succeeded = transform_hlds__pd_util__goals_match_2_4_p_0(transform_hlds__pd_util__OldSubGoalList_84, transform_hlds__pd_util__NewSubGoalList_85, transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3, &transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_101_101);
            }
          }
          if (transform_hlds__pd_util__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__pd_util__next_value_of_HeadVar__1_1 = transform_hlds__pd_util__OldGoals_9;
              MR_Word transform_hlds__pd_util__next_value_of_HeadVar__2_2 = transform_hlds__pd_util__NewGoals_11;
              MR_Word transform_hlds__pd_util__next_value_of_STATE_VARIABLE_ONRenaming_0_3 = transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_101_101;

              transform_hlds__pd_util__HeadVar__1_1 = transform_hlds__pd_util__next_value_of_HeadVar__1_1;
              transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__next_value_of_HeadVar__2_2;
              transform_hlds__pd_util__STATE_VARIABLE_ONRenaming_0_3 = transform_hlds__pd_util__next_value_of_STATE_VARIABLE_ONRenaming_0_3;
            }
            continue;
          }
        }
      }
      return transform_hlds__pd_util__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util__match_generic_call_2_p_0(
  MR_Word transform_hlds__pd_util__GenericCallA_3,
  MR_Word transform_hlds__pd_util__GenericCallB_4)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;

    if (((MR_tag((MR_Word) transform_hlds__pd_util__GenericCallA_3)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Integer transform_hlds__pd_util__MethodNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__GenericCallA_3, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_util__ClassId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__GenericCallA_3, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_util__CallId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__GenericCallA_3, (MR_Integer) 3)));
      MR_Integer transform_hlds__pd_util__Var_18;
      MR_Word transform_hlds__pd_util__Var_19;
      MR_Word transform_hlds__pd_util__Var_20;
      MR_Word transform_hlds__pd_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__GenericCallA_3, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_util__Var_14;

      transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__GenericCallB_4)) == (MR_mktag((MR_Integer) 1)));
      if (transform_hlds__pd_util__succeeded)
      {
        transform_hlds__pd_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__GenericCallB_4, (MR_Integer) 0)));
        transform_hlds__pd_util__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__GenericCallB_4, (MR_Integer) 1)));
        transform_hlds__pd_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__GenericCallB_4, (MR_Integer) 2)));
        transform_hlds__pd_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__GenericCallB_4, (MR_Integer) 3)));
        transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__MethodNum_11 == transform_hlds__pd_util__Var_18);
        if (transform_hlds__pd_util__succeeded)
        {
          transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____class_id_0_0(transform_hlds__pd_util__ClassId_12, transform_hlds__pd_util__Var_19);
          if (transform_hlds__pd_util__succeeded)
            transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(transform_hlds__pd_util__CallId_13, transform_hlds__pd_util__Var_20);
        }
      }
    }
    else
    if (((MR_tag((MR_Word) transform_hlds__pd_util__GenericCallA_3)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word transform_hlds__pd_util__Purity_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__GenericCallA_3, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_util__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__GenericCallA_3, (MR_Integer) 2)));
      MR_Integer transform_hlds__pd_util__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__GenericCallA_3, (MR_Integer) 3)));
      MR_Word transform_hlds__pd_util__Var_15;
      MR_Word transform_hlds__pd_util__Var_16;
      MR_Integer transform_hlds__pd_util__Var_17;
      MR_Word transform_hlds__pd_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__GenericCallA_3, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_util__Var_9;

      transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__GenericCallB_4)) == (MR_mktag((MR_Integer) 0)));
      if (transform_hlds__pd_util__succeeded)
      {
        transform_hlds__pd_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__GenericCallB_4, (MR_Integer) 0)));
        transform_hlds__pd_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__GenericCallB_4, (MR_Integer) 1)));
        transform_hlds__pd_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__GenericCallB_4, (MR_Integer) 2)));
        transform_hlds__pd_util__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__GenericCallB_4, (MR_Integer) 3)));
        transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Purity_6 == transform_hlds__pd_util__Var_15);
        if (transform_hlds__pd_util__succeeded)
        {
          transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__PredOrFunc_7 == transform_hlds__pd_util__Var_16);
          if (transform_hlds__pd_util__succeeded)
            transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Arity_8 == transform_hlds__pd_util__Var_17);
        }
      }
    }
    else
      transform_hlds__pd_util__succeeded = MR_FALSE;
    return transform_hlds__pd_util__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_util__collect_matching_arg_types_5_p_0(
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__Renaming_3,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__pd_util__succeeded;

      if ((transform_hlds__pd_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4, transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_5);
        }
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_util", (MR_String) "predicate \140transform_hlds.pd_util.collect_matching_arg_types\'/5", (MR_String) "list length mismatch");
            return;
          }
        }
      else
      {
        MR_Word transform_hlds__pd_util__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__pd_util__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));

        if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_util", (MR_String) "predicate \140transform_hlds.pd_util.collect_matching_arg_types\'/5", (MR_String) "list length mismatch");
            return;
          }
        }
        else
        {
          MR_Word transform_hlds__pd_util__Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word transform_hlds__pd_util__Types_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37;
          MR_Word transform_hlds__pd_util__TypeInfo_40_40 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];

          transform_hlds__pd_util__succeeded = mercury__map__contains_2_p_0(transform_hlds__pd_util__TypeInfo_40_40, transform_hlds__pd_util__TypeInfo_40_40, transform_hlds__pd_util__Renaming_3, ((MR_Box) (transform_hlds__pd_util__Var_42)));
          if (transform_hlds__pd_util__succeeded)
            {
              transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37, 0) = ((MR_Box) (transform_hlds__pd_util__Type_31));
              MR_hl_field(MR_mktag(1), transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37, 1) = ((MR_Box) (transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4));
            }
          else
            transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37 = transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4;
          /* direct tailcall eliminated */
          {
            MR_Word transform_hlds__pd_util__next_value_of_HeadVar__1_1 = transform_hlds__pd_util__Var_41;
            MR_Word transform_hlds__pd_util__next_value_of_HeadVar__2_2 = transform_hlds__pd_util__Types_32;
            MR_Word transform_hlds__pd_util__next_value_of_STATE_VARIABLE_MatchingTypes_0_4 = transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_37_37;

            transform_hlds__pd_util__HeadVar__1_1 = transform_hlds__pd_util__next_value_of_HeadVar__1_1;
            transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__next_value_of_HeadVar__2_2;
            transform_hlds__pd_util__STATE_VARIABLE_MatchingTypes_0_4 = transform_hlds__pd_util__next_value_of_STATE_VARIABLE_MatchingTypes_0_4;
          }
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
transform_hlds__pd_util__inst_list_size_3_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_4,
  MR_Word transform_hlds__pd_util__Insts_5,
  MR_Integer * transform_hlds__pd_util__Size_6)
{
  {
    MR_Word transform_hlds__pd_util__Expansions_7;

    mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &transform_hlds__pd_util__Expansions_7);
    transform_hlds__pd_util__inst_list_size_5_p_0(transform_hlds__pd_util__ModuleInfo_4, transform_hlds__pd_util__Insts_5, transform_hlds__pd_util__Expansions_7, (MR_Integer) 0, transform_hlds__pd_util__Size_6);
  }
}

void MR_CALL 
transform_hlds__pd_util__inst_size_3_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_4,
  MR_Word transform_hlds__pd_util__Inst_5,
  MR_Integer * transform_hlds__pd_util__Size_6)
{
  {
    MR_Word transform_hlds__pd_util__Expansions_7;

    mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &transform_hlds__pd_util__Expansions_7);
    transform_hlds__pd_util__inst_size_2_4_p_0(transform_hlds__pd_util__ModuleInfo_4, transform_hlds__pd_util__Inst_5, transform_hlds__pd_util__Expansions_7, transform_hlds__pd_util__Size_6);
  }
}

static void MR_CALL 
transform_hlds__pd_util__inst_list_size_5_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__Expansions_3,
  MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_0_4,
  MR_Integer * transform_hlds__pd_util__STATE_VARIABLE_Size_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__pd_util__STATE_VARIABLE_Size_5 = transform_hlds__pd_util__STATE_VARIABLE_Size_0_4;
    else
    {
      MR_Word transform_hlds__pd_util__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_util__Insts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer transform_hlds__pd_util__InstSize_16;
      MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_19_19;

      transform_hlds__pd_util__inst_size_2_4_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__Inst_12, transform_hlds__pd_util__Expansions_3, &transform_hlds__pd_util__InstSize_16);
      transform_hlds__pd_util__STATE_VARIABLE_Size_19_19 = (transform_hlds__pd_util__STATE_VARIABLE_Size_0_4 + transform_hlds__pd_util__InstSize_16);
      /* direct tailcall eliminated */
      {
        MR_Word transform_hlds__pd_util__next_value_of_HeadVar__2_2 = transform_hlds__pd_util__Insts_13;
        MR_Integer transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Size_0_4 = transform_hlds__pd_util__STATE_VARIABLE_Size_19_19;

        transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__next_value_of_HeadVar__2_2;
        transform_hlds__pd_util__STATE_VARIABLE_Size_0_4 = transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Size_0_4;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__bound_inst_size_5_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__Expansions_3,
  MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_0_4,
  MR_Integer * transform_hlds__pd_util__STATE_VARIABLE_Size_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__pd_util__STATE_VARIABLE_Size_5 = transform_hlds__pd_util__STATE_VARIABLE_Size_0_4;
    else
    {
      MR_Word transform_hlds__pd_util__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_util__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_util__ArgInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BoundInst_12, (MR_Integer) 1)));
      MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_20_20;
      MR_Integer transform_hlds__pd_util__STATE_VARIABLE_Size_21_21;
      MR_Word transform_hlds__pd_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BoundInst_12, (MR_Integer) 0)));

      transform_hlds__pd_util__inst_list_size_5_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__ArgInsts_17, transform_hlds__pd_util__Expansions_3, transform_hlds__pd_util__STATE_VARIABLE_Size_0_4, &transform_hlds__pd_util__STATE_VARIABLE_Size_20_20);
      transform_hlds__pd_util__STATE_VARIABLE_Size_21_21 = (transform_hlds__pd_util__STATE_VARIABLE_Size_20_20 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      {
        MR_Word transform_hlds__pd_util__next_value_of_HeadVar__2_2 = transform_hlds__pd_util__BoundInsts_13;
        MR_Integer transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Size_0_4 = transform_hlds__pd_util__STATE_VARIABLE_Size_21_21;

        transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__next_value_of_HeadVar__2_2;
        transform_hlds__pd_util__STATE_VARIABLE_Size_0_4 = transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Size_0_4;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__inst_size_2_4_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_5,
  MR_Word transform_hlds__pd_util__Inst_6,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23,
  MR_Integer * transform_hlds__pd_util__Size_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__pd_util__succeeded;

      switch (MR_tag((MR_Word) transform_hlds__pd_util__Inst_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *transform_hlds__pd_util__Size_8 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *transform_hlds__pd_util__Size_8 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word transform_hlds__pd_util__BoundInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 3)));
                MR_Word transform_hlds__pd_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 1)));
                MR_Word transform_hlds__pd_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 2)));

                transform_hlds__pd_util__bound_inst_size_5_p_0(transform_hlds__pd_util__ModuleInfo_5, transform_hlds__pd_util__BoundInsts_22, transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23, (MR_Integer) 1, transform_hlds__pd_util__Size_8);
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 5:
              *transform_hlds__pd_util__Size_8 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              {
                MR_Word transform_hlds__pd_util__SubInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 2)));
                MR_Word transform_hlds__pd_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__pd_util__next_value_of_Inst_6 = transform_hlds__pd_util__SubInst_18;

                  transform_hlds__pd_util__Inst_6 = transform_hlds__pd_util__next_value_of_Inst_6;
                }
                continue;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word transform_hlds__pd_util__InstName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst_6, (MR_Integer) 1)));

                transform_hlds__pd_util__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (transform_hlds__pd_util__InstName_19)), transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23);
                if (transform_hlds__pd_util__succeeded)
                  *transform_hlds__pd_util__Size_8 = (MR_Integer) 1;
                else
                {
                  MR_Word transform_hlds__pd_util__SubInst_30;
                  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Expansions_25_31;

                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (transform_hlds__pd_util__InstName_19)), transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23, &transform_hlds__pd_util__STATE_VARIABLE_Expansions_25_31);
                  check_hlds__mode_util__inst_lookup_3_p_0(transform_hlds__pd_util__ModuleInfo_5, transform_hlds__pd_util__InstName_19, &transform_hlds__pd_util__SubInst_30);
                  /* direct tailcall eliminated */
                  {
                    MR_Word transform_hlds__pd_util__next_value_of_Inst_6 = transform_hlds__pd_util__SubInst_30;
                    MR_Word transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Expansions_0_23 = transform_hlds__pd_util__STATE_VARIABLE_Expansions_25_31;

                    transform_hlds__pd_util__Inst_6 = transform_hlds__pd_util__next_value_of_Inst_6;
                    transform_hlds__pd_util__STATE_VARIABLE_Expansions_0_23 = transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Expansions_0_23;
                  }
                  continue;
                }
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
transform_hlds__pd_util__inst_MSG_4_p_0(
  MR_Word transform_hlds__pd_util__InstA_5,
  MR_Word transform_hlds__pd_util__InstB_6,
  MR_Word transform_hlds__pd_util__ModuleInfo_7,
  MR_Word * transform_hlds__pd_util__Inst_8)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Word transform_hlds__pd_util__Expansions_9;

    mercury__set__init_1_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_2[0], &transform_hlds__pd_util__Expansions_9);
    transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__pd_util__InstA_5, transform_hlds__pd_util__InstB_6);
    if (transform_hlds__pd_util__succeeded)
    {
      *transform_hlds__pd_util__Inst_8 = transform_hlds__pd_util__InstA_5;
      transform_hlds__pd_util__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word transform_hlds__pd_util__TypeInfo_19_24;
      MR_Word transform_hlds__pd_util__InstA2_17;
      MR_Word transform_hlds__pd_util__InstB2_18;
      MR_Word transform_hlds__pd_util__Var_20;
      MR_Word transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_22;
      MR_Word transform_hlds__pd_util__Var_19;

      {
        transform_hlds__pd_util__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_19, 0) = ((MR_Box) (transform_hlds__pd_util__InstA_5));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_19, 1) = ((MR_Box) (transform_hlds__pd_util__InstB_6));
      }
      transform_hlds__pd_util__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_2[0], ((MR_Box) (transform_hlds__pd_util__Var_19)), transform_hlds__pd_util__Expansions_9);
      transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
      if (transform_hlds__pd_util__succeeded)
      {
        check_hlds__inst_util__inst_expand_3_p_0(transform_hlds__pd_util__ModuleInfo_7, transform_hlds__pd_util__InstA_5, &transform_hlds__pd_util__InstA2_17);
        check_hlds__inst_util__inst_expand_3_p_0(transform_hlds__pd_util__ModuleInfo_7, transform_hlds__pd_util__InstB_6, &transform_hlds__pd_util__InstB2_18);
        transform_hlds__pd_util__TypeInfo_19_24 = (MR_Word) &transform_hlds__pd_util_scalar_common_2[0];
        {
          transform_hlds__pd_util__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_20, 0) = ((MR_Box) (transform_hlds__pd_util__InstA_5));
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_20, 1) = ((MR_Box) (transform_hlds__pd_util__InstB_6));
        }
        mercury__set__insert_3_p_0(transform_hlds__pd_util__TypeInfo_19_24, ((MR_Box) (transform_hlds__pd_util__Var_20)), transform_hlds__pd_util__Expansions_9, &transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_22);
        transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__InstB2_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        if (transform_hlds__pd_util__succeeded)
        {
          *transform_hlds__pd_util__Inst_8 = transform_hlds__pd_util__InstA2_17;
          transform_hlds__pd_util__succeeded = MR_TRUE;
        }
        else
          switch (MR_tag((MR_Word) transform_hlds__pd_util__InstA2_17)) {
            default:
              transform_hlds__pd_util__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(transform_hlds__pd_util__InstA2_17)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__InstB2_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (transform_hlds__pd_util__succeeded)
                    {
                      *transform_hlds__pd_util__Inst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      transform_hlds__pd_util__succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *transform_hlds__pd_util__Inst_8 = transform_hlds__pd_util__InstB2_18;
                    transform_hlds__pd_util__succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word transform_hlds__pd_util__Var_53;
                MR_Word transform_hlds__pd_util__Var_54;

                transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__InstB2_18)) == (MR_mktag((MR_Integer) 2)));
                if (transform_hlds__pd_util__succeeded)
                {
                  transform_hlds__pd_util__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__InstB2_18, (MR_Integer) 0)));
                  transform_hlds__pd_util__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__InstB2_18, (MR_Integer) 1)));
                  *transform_hlds__pd_util__Inst_8 = transform_hlds__pd_util__InstB2_18;
                  transform_hlds__pd_util__succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA2_17, (MR_Integer) 0)))) {
                default:
                  transform_hlds__pd_util__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word transform_hlds__pd_util__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA2_17, (MR_Integer) 3)));
                    MR_Word transform_hlds__pd_util__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA2_17, (MR_Integer) 2)));
                    MR_Word transform_hlds__pd_util__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA2_17, (MR_Integer) 1)));

                    if (((((MR_tag((MR_Word) transform_hlds__pd_util__InstB2_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_18, (MR_Integer) 0)))) == (MR_Integer) 0))))
                    {
                      MR_Word transform_hlds__pd_util__UniqB_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_18, (MR_Integer) 1)));
                      MR_Word transform_hlds__pd_util__BoundInstsB_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_18, (MR_Integer) 3)));
                      MR_Word transform_hlds__pd_util__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_18, (MR_Integer) 2)));

                      transform_hlds__pd_util__succeeded = transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(transform_hlds__pd_util__Var_61, transform_hlds__pd_util__BoundInstsB_50, transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_22, transform_hlds__pd_util__ModuleInfo_7, transform_hlds__pd_util__UniqB_48, transform_hlds__pd_util__BoundInstsB_50, transform_hlds__pd_util__Inst_8);
                    }
                    else
                    if (((((MR_tag((MR_Word) transform_hlds__pd_util__InstB2_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_18, (MR_Integer) 0)))) == (MR_Integer) 1))))
                    {
                      *transform_hlds__pd_util__Inst_8 = transform_hlds__pd_util__InstB2_18;
                      transform_hlds__pd_util__succeeded = MR_TRUE;
                    }
                    else
                      transform_hlds__pd_util__succeeded = MR_FALSE;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__pd_util__Var_67;
                    MR_Word transform_hlds__pd_util__Var_68;

                    transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__InstB2_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (transform_hlds__pd_util__succeeded)
                    {
                      transform_hlds__pd_util__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_18, (MR_Integer) 1)));
                      transform_hlds__pd_util__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_18, (MR_Integer) 2)));
                      *transform_hlds__pd_util__Inst_8 = transform_hlds__pd_util__InstB2_18;
                      transform_hlds__pd_util__succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word transform_hlds__pd_util__Name_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA2_17, (MR_Integer) 1)));
                    MR_Word transform_hlds__pd_util__ArgsA_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA2_17, (MR_Integer) 2)));
                    MR_Word transform_hlds__pd_util__ArgsB_57;
                    MR_Word transform_hlds__pd_util__Args_58;
                    MR_Word transform_hlds__pd_util__Var_60;

                    transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__InstB2_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_18, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (transform_hlds__pd_util__succeeded)
                    {
                      transform_hlds__pd_util__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_18, (MR_Integer) 1)));
                      transform_hlds__pd_util__ArgsB_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_18, (MR_Integer) 2)));
                      transform_hlds__pd_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__pd_util__Name_55, transform_hlds__pd_util__Var_60);
                      if (transform_hlds__pd_util__succeeded)
                      {
                        transform_hlds__pd_util__succeeded = transform_hlds__pd_util__inst_list_MSG_5_p_0(transform_hlds__pd_util__ArgsA_56, transform_hlds__pd_util__ArgsB_57, transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_22, transform_hlds__pd_util__ModuleInfo_7, &transform_hlds__pd_util__Args_58);
                        if (transform_hlds__pd_util__succeeded)
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            *transform_hlds__pd_util__Inst_8 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__pd_util__Name_55));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__pd_util__Args_58));
                          }
                          transform_hlds__pd_util__succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                  break;
              }
              break;
          }
      }
    }
    return transform_hlds__pd_util__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(
  MR_Word transform_hlds__pd_util__Xs_8,
  MR_Word transform_hlds__pd_util__Ys_9,
  MR_Word transform_hlds__pd_util__Expansions_10,
  MR_Word transform_hlds__pd_util__ModuleInfo_11,
  MR_Word transform_hlds__pd_util__Uniq_12,
  MR_Word transform_hlds__pd_util__BoundInsts_13,
  MR_Word * transform_hlds__pd_util__Inst_14)
{
  {
    MR_bool transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Xs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (transform_hlds__pd_util__succeeded)
      transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Ys_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (transform_hlds__pd_util__succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        *transform_hlds__pd_util__Inst_14 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__pd_util__Uniq_12));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      transform_hlds__pd_util__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word transform_hlds__pd_util__Xs1_16;
      MR_Word transform_hlds__pd_util__Ys1_18;
      MR_Word transform_hlds__pd_util__ConsId_19;
      MR_Word transform_hlds__pd_util__ArgsX_20;
      MR_Word transform_hlds__pd_util__ArgsY_21;
      MR_Word transform_hlds__pd_util__X_15;
      MR_Word transform_hlds__pd_util__Y_17;
      MR_Word transform_hlds__pd_util__Var_41;

      transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__Xs_8)) == (MR_mktag((MR_Integer) 1)));
      if (transform_hlds__pd_util__succeeded)
      {
        transform_hlds__pd_util__X_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Xs_8, (MR_Integer) 0)));
        transform_hlds__pd_util__Xs1_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Xs_8, (MR_Integer) 1)));
        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__Ys_9)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__pd_util__succeeded)
        {
          transform_hlds__pd_util__Y_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Ys_9, (MR_Integer) 0)));
          transform_hlds__pd_util__Ys1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Ys_9, (MR_Integer) 1)));
          transform_hlds__pd_util__ConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__X_15, (MR_Integer) 0)));
          transform_hlds__pd_util__ArgsX_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__X_15, (MR_Integer) 1)));
          transform_hlds__pd_util__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Y_17, (MR_Integer) 0)));
          transform_hlds__pd_util__ArgsY_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Y_17, (MR_Integer) 1)));
          transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__pd_util__ConsId_19, transform_hlds__pd_util__Var_41);
        }
      }
      if (transform_hlds__pd_util__succeeded)
      {
        MR_Word transform_hlds__pd_util__Args_22;
        MR_Word transform_hlds__pd_util__Z_23;
        MR_Word transform_hlds__pd_util__Inst1_24;
        MR_Word transform_hlds__pd_util__Zs_26;
        MR_Word transform_hlds__pd_util__Var_42;
        MR_Word transform_hlds__pd_util__Var_25;

        transform_hlds__pd_util__succeeded = transform_hlds__pd_util__inst_list_MSG_5_p_0(transform_hlds__pd_util__ArgsX_20, transform_hlds__pd_util__ArgsY_21, transform_hlds__pd_util__Expansions_10, transform_hlds__pd_util__ModuleInfo_11, &transform_hlds__pd_util__Args_22);
        if (transform_hlds__pd_util__succeeded)
        {
          {
            transform_hlds__pd_util__Z_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Z_23, 0) = ((MR_Box) (transform_hlds__pd_util__ConsId_19));
            MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Z_23, 1) = ((MR_Box) (transform_hlds__pd_util__Args_22));
          }
          transform_hlds__pd_util__succeeded = transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(transform_hlds__pd_util__Xs1_16, transform_hlds__pd_util__Ys1_18, transform_hlds__pd_util__Expansions_10, transform_hlds__pd_util__ModuleInfo_11, transform_hlds__pd_util__Uniq_12, transform_hlds__pd_util__BoundInsts_13, &transform_hlds__pd_util__Inst1_24);
          if (transform_hlds__pd_util__succeeded)
          {
            transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__Inst1_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst1_24, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (transform_hlds__pd_util__succeeded)
            {
              transform_hlds__pd_util__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst1_24, (MR_Integer) 1)));
              transform_hlds__pd_util__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst1_24, (MR_Integer) 2)));
              transform_hlds__pd_util__Zs_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Inst1_24, (MR_Integer) 3)));
              transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Uniq_12 == transform_hlds__pd_util__Var_42);
            }
            if (transform_hlds__pd_util__succeeded)
            {
              MR_Word transform_hlds__pd_util__Var_31;

              {
                transform_hlds__pd_util__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_31, 0) = ((MR_Box) (transform_hlds__pd_util__Z_23));
                MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_31, 1) = ((MR_Box) (transform_hlds__pd_util__Zs_26));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__pd_util__Inst_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__pd_util__Uniq_12));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__pd_util__Var_31));
              }
            }
            else
              *transform_hlds__pd_util__Inst_14 = transform_hlds__pd_util__Inst1_24;
            transform_hlds__pd_util__succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        MR_Word transform_hlds__pd_util__Var_39;
        MR_Word transform_hlds__pd_util__Var_36;
        MR_Word transform_hlds__pd_util__Var_37;
        MR_Word transform_hlds__pd_util__Var_38;

        switch (transform_hlds__pd_util__Uniq_12) {
          default:
            transform_hlds__pd_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__pd_util__NewInst_27;

              {
                transform_hlds__pd_util__NewInst_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_27, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_27, 3) = ((MR_Box) (transform_hlds__pd_util__BoundInsts_13));
              }
              transform_hlds__pd_util__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(transform_hlds__pd_util__ModuleInfo_11, transform_hlds__pd_util__NewInst_27);
              if (transform_hlds__pd_util__succeeded)
                transform_hlds__pd_util__succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(transform_hlds__pd_util__ModuleInfo_11, transform_hlds__pd_util__NewInst_27);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__pd_util__NewInst_40;

              {
                transform_hlds__pd_util__NewInst_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_40, 1) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), transform_hlds__pd_util__NewInst_40, 3) = ((MR_Box) (transform_hlds__pd_util__BoundInsts_13));
              }
              transform_hlds__pd_util__succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(transform_hlds__pd_util__ModuleInfo_11, transform_hlds__pd_util__NewInst_40);
            }
            break;
        }
        if (transform_hlds__pd_util__succeeded)
        {
          transform_hlds__pd_util__Var_37 = (MR_Integer) 0;
          transform_hlds__pd_util__Var_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            transform_hlds__pd_util__Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Var_36, 1) = ((MR_Box) (transform_hlds__pd_util__Var_37));
            MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Var_36, 2) = ((MR_Box) (transform_hlds__pd_util__Var_38));
            MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Var_36, 3) = ((MR_Box) (transform_hlds__pd_util__BoundInsts_13));
          }
          transform_hlds__pd_util__succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(transform_hlds__pd_util__ModuleInfo_11, transform_hlds__pd_util__Var_36);
          transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
          if (transform_hlds__pd_util__succeeded)
          {
            transform_hlds__pd_util__Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__pd_util__Inst_14 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__pd_util__Uniq_12));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__pd_util__Var_39));
            }
            transform_hlds__pd_util__succeeded = MR_TRUE;
          }
        }
      }
    }
    return transform_hlds__pd_util__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util__inst_list_MSG_5_p_0(
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__Expansions_3,
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
  MR_Word * transform_hlds__pd_util__HeadVar__5_5)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;

    if ((transform_hlds__pd_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (transform_hlds__pd_util__succeeded)
      {
        *transform_hlds__pd_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        transform_hlds__pd_util__succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word transform_hlds__pd_util__ArgA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_util__ArgsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_util__ArgB_10;
      MR_Word transform_hlds__pd_util__ArgsB_11;
      MR_Word transform_hlds__pd_util__Arg_14;
      MR_Word transform_hlds__pd_util__Args_15;

      transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (transform_hlds__pd_util__succeeded)
      {
        transform_hlds__pd_util__ArgB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
        transform_hlds__pd_util__ArgsB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
        transform_hlds__pd_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__pd_util__ArgA_8, transform_hlds__pd_util__ArgB_10);
        if (transform_hlds__pd_util__succeeded)
        {
          transform_hlds__pd_util__Arg_14 = transform_hlds__pd_util__ArgA_8;
          transform_hlds__pd_util__succeeded = MR_TRUE;
        }
        else
        {
          MR_Word transform_hlds__pd_util__TypeInfo_19_29;
          MR_Word transform_hlds__pd_util__InstA2_22;
          MR_Word transform_hlds__pd_util__InstB2_23;
          MR_Word transform_hlds__pd_util__Var_25;
          MR_Word transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_27;
          MR_Word transform_hlds__pd_util__Var_24;

          {
            transform_hlds__pd_util__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_24, 0) = ((MR_Box) (transform_hlds__pd_util__ArgA_8));
            MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_24, 1) = ((MR_Box) (transform_hlds__pd_util__ArgB_10));
          }
          transform_hlds__pd_util__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_2[0], ((MR_Box) (transform_hlds__pd_util__Var_24)), transform_hlds__pd_util__Expansions_3);
          transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
          if (transform_hlds__pd_util__succeeded)
          {
            check_hlds__inst_util__inst_expand_3_p_0(transform_hlds__pd_util__HeadVar__4_4, transform_hlds__pd_util__ArgA_8, &transform_hlds__pd_util__InstA2_22);
            check_hlds__inst_util__inst_expand_3_p_0(transform_hlds__pd_util__HeadVar__4_4, transform_hlds__pd_util__ArgB_10, &transform_hlds__pd_util__InstB2_23);
            transform_hlds__pd_util__TypeInfo_19_29 = (MR_Word) &transform_hlds__pd_util_scalar_common_2[0];
            {
              transform_hlds__pd_util__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_25, 0) = ((MR_Box) (transform_hlds__pd_util__ArgA_8));
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_25, 1) = ((MR_Box) (transform_hlds__pd_util__ArgB_10));
            }
            mercury__set__insert_3_p_0(transform_hlds__pd_util__TypeInfo_19_29, ((MR_Box) (transform_hlds__pd_util__Var_25)), transform_hlds__pd_util__Expansions_3, &transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_27);
            transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__InstB2_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            if (transform_hlds__pd_util__succeeded)
            {
              transform_hlds__pd_util__Arg_14 = transform_hlds__pd_util__InstA2_22;
              transform_hlds__pd_util__succeeded = MR_TRUE;
            }
            else
              switch (MR_tag((MR_Word) transform_hlds__pd_util__InstA2_22)) {
                default:
                  transform_hlds__pd_util__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(transform_hlds__pd_util__InstA2_22)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__InstB2_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__pd_util__succeeded)
                        {
                          transform_hlds__pd_util__Arg_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          transform_hlds__pd_util__succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        transform_hlds__pd_util__Arg_14 = transform_hlds__pd_util__InstB2_23;
                        transform_hlds__pd_util__succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word transform_hlds__pd_util__Var_58;
                    MR_Word transform_hlds__pd_util__Var_59;

                    transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__InstB2_23)) == (MR_mktag((MR_Integer) 2)));
                    if (transform_hlds__pd_util__succeeded)
                    {
                      transform_hlds__pd_util__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__InstB2_23, (MR_Integer) 0)));
                      transform_hlds__pd_util__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__InstB2_23, (MR_Integer) 1)));
                      transform_hlds__pd_util__Arg_14 = transform_hlds__pd_util__InstB2_23;
                      transform_hlds__pd_util__succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA2_22, (MR_Integer) 0)))) {
                    default:
                      transform_hlds__pd_util__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word transform_hlds__pd_util__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA2_22, (MR_Integer) 3)));
                        MR_Word transform_hlds__pd_util__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA2_22, (MR_Integer) 2)));
                        MR_Word transform_hlds__pd_util__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA2_22, (MR_Integer) 1)));

                        if (((((MR_tag((MR_Word) transform_hlds__pd_util__InstB2_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_23, (MR_Integer) 0)))) == (MR_Integer) 0))))
                        {
                          MR_Word transform_hlds__pd_util__UniqB_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_23, (MR_Integer) 1)));
                          MR_Word transform_hlds__pd_util__BoundInstsB_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_23, (MR_Integer) 3)));
                          MR_Word transform_hlds__pd_util__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_23, (MR_Integer) 2)));

                          transform_hlds__pd_util__succeeded = transform_hlds__pd_util__bound_inst_list_MSG_7_p_0(transform_hlds__pd_util__Var_66, transform_hlds__pd_util__BoundInstsB_55, transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_27, transform_hlds__pd_util__HeadVar__4_4, transform_hlds__pd_util__UniqB_53, transform_hlds__pd_util__BoundInstsB_55, &transform_hlds__pd_util__Arg_14);
                        }
                        else
                        if (((((MR_tag((MR_Word) transform_hlds__pd_util__InstB2_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_23, (MR_Integer) 0)))) == (MR_Integer) 1))))
                        {
                          transform_hlds__pd_util__Arg_14 = transform_hlds__pd_util__InstB2_23;
                          transform_hlds__pd_util__succeeded = MR_TRUE;
                        }
                        else
                          transform_hlds__pd_util__succeeded = MR_FALSE;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word transform_hlds__pd_util__Var_72;
                        MR_Word transform_hlds__pd_util__Var_73;

                        transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__InstB2_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (transform_hlds__pd_util__succeeded)
                        {
                          transform_hlds__pd_util__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_23, (MR_Integer) 1)));
                          transform_hlds__pd_util__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_23, (MR_Integer) 2)));
                          transform_hlds__pd_util__Arg_14 = transform_hlds__pd_util__InstB2_23;
                          transform_hlds__pd_util__succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word transform_hlds__pd_util__Name_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA2_22, (MR_Integer) 1)));
                        MR_Word transform_hlds__pd_util__ArgsA_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstA2_22, (MR_Integer) 2)));
                        MR_Word transform_hlds__pd_util__ArgsB_62;
                        MR_Word transform_hlds__pd_util__Args_63;
                        MR_Word transform_hlds__pd_util__Var_65;

                        transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__InstB2_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_23, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (transform_hlds__pd_util__succeeded)
                        {
                          transform_hlds__pd_util__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_23, (MR_Integer) 1)));
                          transform_hlds__pd_util__ArgsB_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__InstB2_23, (MR_Integer) 2)));
                          transform_hlds__pd_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__pd_util__Name_60, transform_hlds__pd_util__Var_65);
                          if (transform_hlds__pd_util__succeeded)
                          {
                            transform_hlds__pd_util__succeeded = transform_hlds__pd_util__inst_list_MSG_5_p_0(transform_hlds__pd_util__ArgsA_61, transform_hlds__pd_util__ArgsB_62, transform_hlds__pd_util__STATE_VARIABLE_Expansions_16_27, transform_hlds__pd_util__HeadVar__4_4, &transform_hlds__pd_util__Args_63);
                            if (transform_hlds__pd_util__succeeded)
                            {
                              {
                                transform_hlds__pd_util__Arg_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Arg_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Arg_14, 1) = ((MR_Box) (transform_hlds__pd_util__Name_60));
                                MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Arg_14, 2) = ((MR_Box) (transform_hlds__pd_util__Args_63));
                              }
                              transform_hlds__pd_util__succeeded = MR_TRUE;
                            }
                          }
                        }
                      }
                      break;
                  }
                  break;
              }
          }
        }
        if (transform_hlds__pd_util__succeeded)
        {
          transform_hlds__pd_util__succeeded = transform_hlds__pd_util__inst_list_MSG_5_p_0(transform_hlds__pd_util__ArgsA_9, transform_hlds__pd_util__ArgsB_11, transform_hlds__pd_util__Expansions_3, transform_hlds__pd_util__HeadVar__4_4, &transform_hlds__pd_util__Args_15);
          if (transform_hlds__pd_util__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__pd_util__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_util__Arg_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_util__Args_15));
            }
            transform_hlds__pd_util__succeeded = MR_TRUE;
          }
        }
      }
    }
    return transform_hlds__pd_util__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_util__get_branch_vars_goal_4_p_0(
  MR_Word transform_hlds__pd_util__Goal_5,
  MR_Word * transform_hlds__pd_util__MaybeBranchInfo_6,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_PDInfo_21)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Word transform_hlds__pd_util__TypeCtorInfo_30_30;
    MR_Word transform_hlds__pd_util__TypeInfo_31_31;
    MR_Word transform_hlds__pd_util__ModuleInfo0_8;
    MR_Word transform_hlds__pd_util__InstMap0_9;
    MR_Word transform_hlds__pd_util__ProcArgInfo_10;
    MR_Word transform_hlds__pd_util__ProcInfo_11;
    MR_Word transform_hlds__pd_util__VarTypes_12;
    MR_Word transform_hlds__pd_util__LeftVars0_13;
    MR_Word transform_hlds__pd_util__Vars0_14;
    MR_Word transform_hlds__pd_util__LeftVars_15;
    MR_Word transform_hlds__pd_util__Vars1_16;
    MR_Word transform_hlds__pd_util__Var_22;

    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20, &transform_hlds__pd_util__ModuleInfo0_8);
    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20, &transform_hlds__pd_util__InstMap0_9);
    transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20, &transform_hlds__pd_util__ProcArgInfo_10);
    transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20, &transform_hlds__pd_util__ProcInfo_11);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_util__ProcInfo_11, &transform_hlds__pd_util__VarTypes_12);
    transform_hlds__pd_util__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__set_of_var__init_1_p_0(transform_hlds__pd_util__TypeCtorInfo_30_30, &transform_hlds__pd_util__LeftVars0_13);
    transform_hlds__pd_util__TypeInfo_31_31 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
    mercury__map__init_1_p_0(transform_hlds__pd_util__TypeInfo_31_31, (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], &transform_hlds__pd_util__Vars0_14);
    {
      transform_hlds__pd_util__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_22, 0) = ((MR_Box) (transform_hlds__pd_util__Goal_5));
      MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    transform_hlds__pd_util__succeeded = transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0(transform_hlds__pd_util__ModuleInfo0_8, transform_hlds__pd_util__Var_22, (MR_Integer) 0, transform_hlds__pd_util__InstMap0_9, transform_hlds__pd_util__LeftVars0_13, &transform_hlds__pd_util__LeftVars_15, transform_hlds__pd_util__Vars0_14, &transform_hlds__pd_util__Vars1_16);
    if (transform_hlds__pd_util__succeeded)
    {
      MR_Word transform_hlds__pd_util__Vars_17;
      MR_Word transform_hlds__pd_util__ModuleInfo_18;
      MR_Word transform_hlds__pd_util__OpaqueVars_19;
      MR_Word transform_hlds__pd_util__Var_28;
      MR_Word transform_hlds__pd_util__Var_29;

      transform_hlds__pd_util__get_sub_branch_vars_goal_8_p_0(transform_hlds__pd_util__ProcArgInfo_10, transform_hlds__pd_util__Var_22, transform_hlds__pd_util__VarTypes_12, transform_hlds__pd_util__InstMap0_9, transform_hlds__pd_util__Vars1_16, &transform_hlds__pd_util__Vars_17, transform_hlds__pd_util__ModuleInfo0_8, &transform_hlds__pd_util__ModuleInfo_18);
      transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_util__ModuleInfo_18, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_21);
      mercury__set__init_1_p_0(transform_hlds__pd_util__TypeInfo_31_31, &transform_hlds__pd_util__OpaqueVars_19);
      transform_hlds__pd_util__Var_29 = parse_tree__set_of_var__bitset_to_set_1_f_0(transform_hlds__pd_util__TypeCtorInfo_30_30, transform_hlds__pd_util__LeftVars_15);
      {
        transform_hlds__pd_util__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_28, 0) = ((MR_Box) (transform_hlds__pd_util__Vars_17));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_28, 1) = ((MR_Box) (transform_hlds__pd_util__Var_29));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_28, 2) = ((MR_Box) (transform_hlds__pd_util__OpaqueVars_19));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *transform_hlds__pd_util__MaybeBranchInfo_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__pd_util__Var_28));
      }
    }
    else
    {
      *transform_hlds__pd_util__MaybeBranchInfo_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *transform_hlds__pd_util__STATE_VARIABLE_PDInfo_21 = transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_20;
    }
  }
}

void MR_CALL 
transform_hlds__pd_util__get_branch_vars_proc_6_p_0(
  MR_Word transform_hlds__pd_util__PredProcId_7,
  MR_Word transform_hlds__pd_util__ProcInfo_8,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_33,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_0_34,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_35)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Word transform_hlds__pd_util__TypeInfo_44_44;
    MR_Word transform_hlds__pd_util__Goal_11;
    MR_Word transform_hlds__pd_util__VarTypes_12;
    MR_Word transform_hlds__pd_util__InstMap0_13;
    MR_Word transform_hlds__pd_util__Vars0_14;
    MR_Word transform_hlds__pd_util__LeftVars0_15;
    MR_Word transform_hlds__pd_util__GoalList_16;
    MR_Word transform_hlds__pd_util__LeftVars_17;
    MR_Word transform_hlds__pd_util__Vars_18;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__pd_util__ProcInfo_8, &transform_hlds__pd_util__Goal_11);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_util__ProcInfo_8, &transform_hlds__pd_util__VarTypes_12);
    hlds__instmap__init_reachable_1_p_0(&transform_hlds__pd_util__InstMap0_13);
    transform_hlds__pd_util__TypeInfo_44_44 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[1];
    mercury__map__init_1_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], transform_hlds__pd_util__TypeInfo_44_44, &transform_hlds__pd_util__Vars0_14);
    parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__pd_util__LeftVars0_15);
    hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__Goal_11, &transform_hlds__pd_util__GoalList_16);
    transform_hlds__pd_util__succeeded = transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0(transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__pd_util__GoalList_16, (MR_Integer) 0, transform_hlds__pd_util__InstMap0_13, transform_hlds__pd_util__LeftVars0_15, &transform_hlds__pd_util__LeftVars_17, transform_hlds__pd_util__Vars0_14, &transform_hlds__pd_util__Vars_18);
    if (transform_hlds__pd_util__succeeded)
    {
      MR_Word transform_hlds__pd_util__TypeCtorInfo_46_46;
      MR_Word transform_hlds__pd_util__TypeCtorInfo_47_47;
      MR_Word transform_hlds__pd_util__TypeInfo_48_48;
      MR_Word transform_hlds__pd_util__HeadVars_19;
      MR_Word transform_hlds__pd_util__ThisProcArgMap0_20;
      MR_Word transform_hlds__pd_util__ThisProcLeftArgs0_21;
      MR_Word transform_hlds__pd_util__ThisProcArgMap1_22;
      MR_Word transform_hlds__pd_util__ThisProcLeftArgs_23;
      MR_Word transform_hlds__pd_util__OpaqueArgs0_24;
      MR_Word transform_hlds__pd_util__BranchInfo0_25;
      MR_Word transform_hlds__pd_util__AllVars_26;
      MR_Word transform_hlds__pd_util__ThisProcArgMap_27;
      MR_Word transform_hlds__pd_util__ArgModes_29;
      MR_Word transform_hlds__pd_util__OpaqueArgs_30;
      MR_Word transform_hlds__pd_util__BranchInfo_31;
      MR_Word transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_38_38;
      MR_Word transform_hlds__pd_util__Var_28;

      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__pd_util__ProcInfo_8, &transform_hlds__pd_util__HeadVars_19);
      transform_hlds__pd_util__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      mercury__map__init_1_p_0(transform_hlds__pd_util__TypeCtorInfo_46_46, transform_hlds__pd_util__TypeInfo_44_44, &transform_hlds__pd_util__ThisProcArgMap0_20);
      mercury__set__init_1_p_0(transform_hlds__pd_util__TypeCtorInfo_46_46, &transform_hlds__pd_util__ThisProcLeftArgs0_21);
      transform_hlds__pd_util__get_extra_info_headvars_8_p_0(transform_hlds__pd_util__HeadVars_19, (MR_Integer) 1, transform_hlds__pd_util__LeftVars_17, transform_hlds__pd_util__Vars_18, transform_hlds__pd_util__ThisProcArgMap0_20, &transform_hlds__pd_util__ThisProcArgMap1_22, transform_hlds__pd_util__ThisProcLeftArgs0_21, &transform_hlds__pd_util__ThisProcLeftArgs_23);
      mercury__set__init_1_p_0(transform_hlds__pd_util__TypeCtorInfo_46_46, &transform_hlds__pd_util__OpaqueArgs0_24);
      {
        transform_hlds__pd_util__BranchInfo0_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo0_25, 0) = ((MR_Box) (transform_hlds__pd_util__ThisProcArgMap1_22));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo0_25, 1) = ((MR_Box) (transform_hlds__pd_util__ThisProcLeftArgs_23));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo0_25, 2) = ((MR_Box) (transform_hlds__pd_util__OpaqueArgs0_24));
      }
      transform_hlds__pd_util__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
      transform_hlds__pd_util__TypeInfo_48_48 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[2];
      mercury__map__set_4_p_0(transform_hlds__pd_util__TypeCtorInfo_47_47, transform_hlds__pd_util__TypeInfo_48_48, ((MR_Box) (transform_hlds__pd_util__PredProcId_7)), ((MR_Box) (transform_hlds__pd_util__BranchInfo0_25)), transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_0_34, &transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_38_38);
      transform_hlds__pd_util__get_sub_branch_vars_goal_8_p_0(transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_38_38, transform_hlds__pd_util__GoalList_16, transform_hlds__pd_util__VarTypes_12, transform_hlds__pd_util__InstMap0_13, transform_hlds__pd_util__Vars_18, &transform_hlds__pd_util__AllVars_26, transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_32, transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_33);
      transform_hlds__pd_util__get_extra_info_headvars_8_p_0(transform_hlds__pd_util__HeadVars_19, (MR_Integer) 1, transform_hlds__pd_util__LeftVars0_15, transform_hlds__pd_util__AllVars_26, transform_hlds__pd_util__ThisProcArgMap0_20, &transform_hlds__pd_util__ThisProcArgMap_27, transform_hlds__pd_util__ThisProcLeftArgs0_21, &transform_hlds__pd_util__Var_28);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__pd_util__ProcInfo_8, &transform_hlds__pd_util__ArgModes_29);
      transform_hlds__pd_util__get_opaque_args_6_p_0(*transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_33, (MR_Integer) 1, transform_hlds__pd_util__ArgModes_29, transform_hlds__pd_util__ThisProcArgMap_27, transform_hlds__pd_util__OpaqueArgs0_24, &transform_hlds__pd_util__OpaqueArgs_30);
      {
        transform_hlds__pd_util__BranchInfo_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_31, 0) = ((MR_Box) (transform_hlds__pd_util__ThisProcArgMap_27));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_31, 1) = ((MR_Box) (transform_hlds__pd_util__ThisProcLeftArgs_23));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_31, 2) = ((MR_Box) (transform_hlds__pd_util__OpaqueArgs_30));
      }
      mercury__map__set_4_p_0(transform_hlds__pd_util__TypeCtorInfo_47_47, transform_hlds__pd_util__TypeInfo_48_48, ((MR_Box) (transform_hlds__pd_util__PredProcId_7)), ((MR_Box) (transform_hlds__pd_util__BranchInfo_31)), transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_38_38, transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_35);
    }
    else
    {
      *transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_35 = transform_hlds__pd_util__STATE_VARIABLE_ArgInfo_0_34;
      *transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_33 = transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_32;
    }
  }
}

static void MR_CALL 
transform_hlds__pd_util__get_sub_branch_vars_goal_8_p_0(
  MR_Word transform_hlds__pd_util__ProcArgInfo_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__VarTypes_3,
  MR_Word transform_hlds__pd_util__InstMap0_4,
  MR_Word transform_hlds__pd_util__HeadVar__5_5,
  MR_Word * transform_hlds__pd_util__HeadVar__6_6,
  MR_Word transform_hlds__pd_util__HeadVar__7_7,
  MR_Word * transform_hlds__pd_util__HeadVar__8_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *transform_hlds__pd_util__HeadVar__6_6 = transform_hlds__pd_util__HeadVar__5_5;
      *transform_hlds__pd_util__HeadVar__8_8 = transform_hlds__pd_util__HeadVar__7_7;
    }
    else
    {
      MR_Word transform_hlds__pd_util__Goal_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_util__GoalList_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_util__GoalExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_17, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_util__GoalInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_17, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_util__InstMapDelta_69;
      MR_Word transform_hlds__pd_util__InstMap_70;
      MR_Word transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79;
      MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85;

      switch (MR_tag((MR_Word) transform_hlds__pd_util__GoalExpr_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
            transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
          }
          break;
        case (MR_Integer) 1:
          {
            transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
            transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
          }
          break;
        case (MR_Integer) 2:
          {
            transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
            transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
                transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
              }
              break;
            case (MR_Integer) 1:
              {
                transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
                transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
              }
              break;
            case (MR_Integer) 2:
              {
                transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
                transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word transform_hlds__pd_util__Goals_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 1)));

                transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_p_0(transform_hlds__pd_util__HeadVar__7_7, transform_hlds__pd_util__ProcArgInfo_1, (MR_Integer) 1, transform_hlds__pd_util__Goals_36, transform_hlds__pd_util__InstMap0_4, transform_hlds__pd_util__HeadVar__5_5, &transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85);
                transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word transform_hlds__pd_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 1)));
                MR_Word transform_hlds__pd_util__Cases_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 3)));
                MR_Word transform_hlds__pd_util__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 2)));

                transform_hlds__pd_util__examine_case_list_10_p_0(transform_hlds__pd_util__ProcArgInfo_1, (MR_Integer) 1, transform_hlds__pd_util__Var_37, transform_hlds__pd_util__Cases_39, transform_hlds__pd_util__VarTypes_3, transform_hlds__pd_util__InstMap0_4, transform_hlds__pd_util__HeadVar__5_5, &transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85, transform_hlds__pd_util__HeadVar__7_7, &transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79);
              }
              break;
            case (MR_Integer) 5:
              {
                transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85 = transform_hlds__pd_util__HeadVar__5_5;
                transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word transform_hlds__pd_util__Cond_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 2)));
                MR_Word transform_hlds__pd_util__Then_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 3)));
                MR_Word transform_hlds__pd_util__Else_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 4)));
                MR_Word transform_hlds__pd_util__CondInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Cond_27, (MR_Integer) 1)));
                MR_Word transform_hlds__pd_util__CondDelta_32;
                MR_Word transform_hlds__pd_util__InstMap1_33;
                MR_Word transform_hlds__pd_util__ThenList_34;
                MR_Word transform_hlds__pd_util__ElseList_35;
                MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_83_83;
                MR_Word transform_hlds__pd_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_24, (MR_Integer) 1)));
                MR_Word transform_hlds__pd_util__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Cond_27, (MR_Integer) 0)));

                transform_hlds__pd_util__CondDelta_32 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__CondInfo_31);
                hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__pd_util__InstMap0_4, transform_hlds__pd_util__CondDelta_32, &transform_hlds__pd_util__InstMap1_33);
                hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__Then_28, &transform_hlds__pd_util__ThenList_34);
                transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(transform_hlds__pd_util__HeadVar__7_7, transform_hlds__pd_util__ProcArgInfo_1, (MR_Integer) 1, transform_hlds__pd_util__ThenList_34, transform_hlds__pd_util__InstMap1_33, transform_hlds__pd_util__HeadVar__5_5, &transform_hlds__pd_util__STATE_VARIABLE_Vars_83_83);
                hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__Else_29, &transform_hlds__pd_util__ElseList_35);
                transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(transform_hlds__pd_util__HeadVar__7_7, transform_hlds__pd_util__ProcArgInfo_1, (MR_Integer) 2, transform_hlds__pd_util__ElseList_35, transform_hlds__pd_util__InstMap0_4, transform_hlds__pd_util__STATE_VARIABLE_Vars_83_83, &transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85);
                transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79 = transform_hlds__pd_util__HeadVar__7_7;
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_util", (MR_String) "predicate \140transform_hlds.pd_util.get_sub_branch_vars_goal\'/8", (MR_String) "shorthand");
                  return;
                }
              }
              break;
          }
          break;
      }
      transform_hlds__pd_util__InstMapDelta_69 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo_25);
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__pd_util__InstMap0_4, transform_hlds__pd_util__InstMapDelta_69, &transform_hlds__pd_util__InstMap_70);
      /* direct tailcall eliminated */
      {
        MR_Word transform_hlds__pd_util__next_value_of_HeadVar__2_2 = transform_hlds__pd_util__GoalList_18;
        MR_Word transform_hlds__pd_util__next_value_of_InstMap0_4 = transform_hlds__pd_util__InstMap_70;
        MR_Word transform_hlds__pd_util__next_value_of_HeadVar__5_5 = transform_hlds__pd_util__STATE_VARIABLE_Vars_85_85;
        MR_Word transform_hlds__pd_util__next_value_of_HeadVar__7_7 = transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_79_79;

        transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__next_value_of_HeadVar__2_2;
        transform_hlds__pd_util__InstMap0_4 = transform_hlds__pd_util__next_value_of_InstMap0_4;
        transform_hlds__pd_util__HeadVar__5_5 = transform_hlds__pd_util__next_value_of_HeadVar__5_5;
        transform_hlds__pd_util__HeadVar__7_7 = transform_hlds__pd_util__next_value_of_HeadVar__7_7;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_108_105_115_116_95_95_91_53_93_95_48_8_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Word transform_hlds__pd_util__ProcArgInfo_2,
  MR_Integer transform_hlds__pd_util__BranchNo_3,
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
  MR_Word transform_hlds__pd_util__InstMap_6,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((transform_hlds__pd_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__pd_util__STATE_VARIABLE_Vars_8 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7;
    else
    {
      MR_Word transform_hlds__pd_util__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_util__Goals_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_util__GoalList_25;
      MR_Integer transform_hlds__pd_util__NextBranch_26;
      MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_29_29;

      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__Goal_20, &transform_hlds__pd_util__GoalList_25);
      transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__ProcArgInfo_2, transform_hlds__pd_util__BranchNo_3, transform_hlds__pd_util__GoalList_25, transform_hlds__pd_util__InstMap_6, transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7, &transform_hlds__pd_util__STATE_VARIABLE_Vars_29_29);
      transform_hlds__pd_util__NextBranch_26 = (transform_hlds__pd_util__BranchNo_3 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      {
        MR_Integer transform_hlds__pd_util__next_value_of_BranchNo_3 = transform_hlds__pd_util__NextBranch_26;
        MR_Word transform_hlds__pd_util__next_value_of_HeadVar__4_4 = transform_hlds__pd_util__Goals_21;
        MR_Word transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Vars_0_7 = transform_hlds__pd_util__STATE_VARIABLE_Vars_29_29;

        transform_hlds__pd_util__BranchNo_3 = transform_hlds__pd_util__next_value_of_BranchNo_3;
        transform_hlds__pd_util__HeadVar__4_4 = transform_hlds__pd_util__next_value_of_HeadVar__4_4;
        transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7 = transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Vars_0_7;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__examine_case_list_10_p_0(
  MR_Word transform_hlds__pd_util__ProcArgInfo_1,
  MR_Integer transform_hlds__pd_util__BranchNo_2,
  MR_Word transform_hlds__pd_util__Var_3,
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
  MR_Word transform_hlds__pd_util__VarTypes_5,
  MR_Word transform_hlds__pd_util__InstMap0_6,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((transform_hlds__pd_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_10 = transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_9;
      *transform_hlds__pd_util__STATE_VARIABLE_Vars_8 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7;
    }
    else
    {
      MR_Word transform_hlds__pd_util__Case_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_util__Cases_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_util__Type_31;
      MR_Word transform_hlds__pd_util__MainConsId_32;
      MR_Word transform_hlds__pd_util__OtherConsIds_33;
      MR_Word transform_hlds__pd_util__Goal_34;
      MR_Word transform_hlds__pd_util__InstMap1_35;
      MR_Word transform_hlds__pd_util__GoalList_36;
      MR_Integer transform_hlds__pd_util__NextBranch_37;
      MR_Word transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_42_42;
      MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_43_43;

      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__pd_util__VarTypes_5, transform_hlds__pd_util__Var_3, &transform_hlds__pd_util__Type_31);
      transform_hlds__pd_util__MainConsId_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Case_25, (MR_Integer) 0)));
      transform_hlds__pd_util__OtherConsIds_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Case_25, (MR_Integer) 1)));
      transform_hlds__pd_util__Goal_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Case_25, (MR_Integer) 2)));
      hlds__instmap__bind_var_to_functors_8_p_0(transform_hlds__pd_util__Var_3, transform_hlds__pd_util__Type_31, transform_hlds__pd_util__MainConsId_32, transform_hlds__pd_util__OtherConsIds_33, transform_hlds__pd_util__InstMap0_6, &transform_hlds__pd_util__InstMap1_35, transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_42_42);
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__Goal_34, &transform_hlds__pd_util__GoalList_36);
      transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_42_42, transform_hlds__pd_util__ProcArgInfo_1, transform_hlds__pd_util__BranchNo_2, transform_hlds__pd_util__GoalList_36, transform_hlds__pd_util__InstMap1_35, transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7, &transform_hlds__pd_util__STATE_VARIABLE_Vars_43_43);
      transform_hlds__pd_util__NextBranch_37 = (transform_hlds__pd_util__BranchNo_2 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      {
        MR_Integer transform_hlds__pd_util__next_value_of_BranchNo_2 = transform_hlds__pd_util__NextBranch_37;
        MR_Word transform_hlds__pd_util__next_value_of_HeadVar__4_4 = transform_hlds__pd_util__Cases_26;
        MR_Word transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Vars_0_7 = transform_hlds__pd_util__STATE_VARIABLE_Vars_43_43;
        MR_Word transform_hlds__pd_util__next_value_of_STATE_VARIABLE_ModuleInfo_0_9 = transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_42_42;

        transform_hlds__pd_util__BranchNo_2 = transform_hlds__pd_util__next_value_of_BranchNo_2;
        transform_hlds__pd_util__HeadVar__4_4 = transform_hlds__pd_util__next_value_of_HeadVar__4_4;
        transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7 = transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Vars_0_7;
        transform_hlds__pd_util__STATE_VARIABLE_ModuleInfo_0_9 = transform_hlds__pd_util__next_value_of_STATE_VARIABLE_ModuleInfo_0_9;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_109_105_110_101_95_98_114_97_110_99_104_95_95_91_53_93_95_48_8_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Word transform_hlds__pd_util__ProcArgInfo_2,
  MR_Integer transform_hlds__pd_util__BranchNo_3,
  MR_Word transform_hlds__pd_util__HeadVar__4_4,
  MR_Word transform_hlds__pd_util__InstMap_6,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__pd_util__succeeded;

      if ((transform_hlds__pd_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *transform_hlds__pd_util__STATE_VARIABLE_Vars_8 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7;
      else
      {
        MR_Word transform_hlds__pd_util__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_util__Goals_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word transform_hlds__pd_util__GoalInfo_41;
        MR_Word transform_hlds__pd_util__InstMapDelta_42;
        MR_Word transform_hlds__pd_util__InstMap1_43;
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49;
        MR_Word transform_hlds__pd_util__PredId_25;
        MR_Integer transform_hlds__pd_util__ProcId_26;
        MR_Word transform_hlds__pd_util__Args_27;
        MR_Word transform_hlds__pd_util__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_util__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 1)));
        MR_Word transform_hlds__pd_util__Var_28;
        MR_Word transform_hlds__pd_util__Var_29;
        MR_Word transform_hlds__pd_util__Var_30;
        MR_Word transform_hlds__pd_util__Var_40;

        transform_hlds__pd_util__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_util__Var_46)) == (MR_mktag((MR_Integer) 2)));
        if (transform_hlds__pd_util__succeeded)
        {
          transform_hlds__pd_util__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__Var_46, (MR_Integer) 0)));
          transform_hlds__pd_util__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__Var_46, (MR_Integer) 1)));
          transform_hlds__pd_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__Var_46, (MR_Integer) 2)));
          transform_hlds__pd_util__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__Var_46, (MR_Integer) 3)));
          transform_hlds__pd_util__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__Var_46, (MR_Integer) 4)));
          transform_hlds__pd_util__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_util__Var_46, (MR_Integer) 5)));
          {
            MR_Word transform_hlds__pd_util__ThisProcArgInfo_32;
            MR_Word transform_hlds__pd_util__Var_47;
            MR_Box transform_hlds__pd_util__conv0_ThisProcArgInfo_32;

            {
              transform_hlds__pd_util__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_47, 0) = ((MR_Box) (transform_hlds__pd_util__PredId_25));
              MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_47, 1) = ((MR_Box) (transform_hlds__pd_util__ProcId_26));
            }
            transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_util_scalar_common_1[2], transform_hlds__pd_util__ProcArgInfo_2, ((MR_Box) (transform_hlds__pd_util__Var_47)), &transform_hlds__pd_util__conv0_ThisProcArgInfo_32);
            if (transform_hlds__pd_util__succeeded)
            {
              transform_hlds__pd_util__ThisProcArgInfo_32 = ((MR_Word) transform_hlds__pd_util__conv0_ThisProcArgInfo_32);
              transform_hlds__pd_util__succeeded = MR_TRUE;
            }
            if (transform_hlds__pd_util__succeeded)
            {
              MR_Word transform_hlds__pd_util__BranchInfo_33;
              MR_Word transform_hlds__pd_util__ExtraVars1_36;
              MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_48_48;
              MR_Word transform_hlds__pd_util__Var_34;
              MR_Word transform_hlds__pd_util__Var_35;

              transform_hlds__pd_util__convert_branch_info_3_p_0(transform_hlds__pd_util__ThisProcArgInfo_32, transform_hlds__pd_util__Args_27, &transform_hlds__pd_util__BranchInfo_33);
              transform_hlds__pd_util__STATE_VARIABLE_Vars_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_33, (MR_Integer) 0)));
              transform_hlds__pd_util__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_33, (MR_Integer) 1)));
              transform_hlds__pd_util__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__BranchInfo_33, (MR_Integer) 2)));
              mercury__map__keys_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__STATE_VARIABLE_Vars_48_48, &transform_hlds__pd_util__ExtraVars1_36);
              transform_hlds__pd_util__combine_vars_4_p_0(transform_hlds__pd_util__BranchNo_3, transform_hlds__pd_util__ExtraVars1_36, transform_hlds__pd_util__STATE_VARIABLE_Vars_48_48, &transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49);
            }
            else
              transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7;
          }
        }
        else
        {
          MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_53_53;
          MR_Word transform_hlds__pd_util__LeftVars0_37;
          MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_50_50;
          MR_Word transform_hlds__pd_util__Var_51;
          MR_Word transform_hlds__pd_util__Var_38;

          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__pd_util__LeftVars0_37);
          mercury__map__init_1_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], &transform_hlds__pd_util__STATE_VARIABLE_Vars_50_50);
          {
            transform_hlds__pd_util__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_51, 0) = ((MR_Box) (transform_hlds__pd_util__Goal_20));
            MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          transform_hlds__pd_util__succeeded = transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__Var_51, (MR_Integer) 0, transform_hlds__pd_util__InstMap_6, transform_hlds__pd_util__LeftVars0_37, &transform_hlds__pd_util__Var_38, transform_hlds__pd_util__STATE_VARIABLE_Vars_50_50, &transform_hlds__pd_util__STATE_VARIABLE_Vars_53_53);
          if (transform_hlds__pd_util__succeeded)
          {
            MR_Word transform_hlds__pd_util__ExtraVars2_39;

            mercury__map__keys_2_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__STATE_VARIABLE_Vars_53_53, &transform_hlds__pd_util__ExtraVars2_39);
            transform_hlds__pd_util__combine_vars_4_p_0(transform_hlds__pd_util__BranchNo_3, transform_hlds__pd_util__ExtraVars2_39, transform_hlds__pd_util__STATE_VARIABLE_Vars_53_53, &transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49);
          }
          else
            transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7;
        }
        transform_hlds__pd_util__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 0)));
        transform_hlds__pd_util__GoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 1)));
        transform_hlds__pd_util__InstMapDelta_42 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo_41);
        hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__pd_util__InstMap_6, transform_hlds__pd_util__InstMapDelta_42, &transform_hlds__pd_util__InstMap1_43);
        /* direct tailcall eliminated */
        {
          MR_Word transform_hlds__pd_util__next_value_of_HeadVar__4_4 = transform_hlds__pd_util__Goals_21;
          MR_Word transform_hlds__pd_util__next_value_of_InstMap_6 = transform_hlds__pd_util__InstMap1_43;
          MR_Word transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Vars_0_7 = transform_hlds__pd_util__STATE_VARIABLE_Vars_49_49;

          transform_hlds__pd_util__HeadVar__4_4 = transform_hlds__pd_util__next_value_of_HeadVar__4_4;
          transform_hlds__pd_util__InstMap_6 = transform_hlds__pd_util__next_value_of_InstMap_6;
          transform_hlds__pd_util__STATE_VARIABLE_Vars_0_7 = transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Vars_0_7;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0_2(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box * transform_hlds__pd_util__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
    MR_Word transform_hlds__pd_util__conv1_LambdaHeadVar__2_38;

    transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__582__1_2_p_0(((MR_Word) transform_hlds__pd_util__wrapper_arg_1), &transform_hlds__pd_util__conv1_LambdaHeadVar__2_38);
    *transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv1_LambdaHeadVar__2_38));
  }
}

static void MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0_1(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box * transform_hlds__pd_util__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
    MR_Word transform_hlds__pd_util__conv0_LambdaHeadVar__2_36;

    transform_hlds__pd_util__IntroducedFrom__pred__get_branch_instmap_deltas__590__1_2_p_0(((MR_Word) transform_hlds__pd_util__wrapper_arg_1), &transform_hlds__pd_util__conv0_LambdaHeadVar__2_36);
    *transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv0_LambdaHeadVar__2_36));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_118_97_114_115_95_103_111_97_108_95_50_95_95_91_52_93_95_48_9_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
  MR_Word transform_hlds__pd_util__InstMap0_5,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_LeftVars_7,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_9)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__pd_util__succeeded;

      if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__HeadVar__3_3 == (MR_Integer) 1);
        if (transform_hlds__pd_util__succeeded)
        {
          *transform_hlds__pd_util__STATE_VARIABLE_Vars_9 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8;
          *transform_hlds__pd_util__STATE_VARIABLE_LeftVars_7 = transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6;
          transform_hlds__pd_util__succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word transform_hlds__pd_util__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_util__Goals_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__pd_util__GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 1)));
        MR_Word transform_hlds__pd_util__InstMapDelta_29;
        MR_Word transform_hlds__pd_util__InstMap_30;
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_40_40;
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_LeftVars_41_41;
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_FoundBranch_42_42;
        MR_Word transform_hlds__pd_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_util__InstMapDeltas_31;
        MR_Word transform_hlds__pd_util__GoalExpr_48;
        MR_Word transform_hlds__pd_util__Var_49;

        transform_hlds__pd_util__InstMapDelta_29 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo_28);
        hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__pd_util__InstMap0_5, transform_hlds__pd_util__InstMapDelta_29, &transform_hlds__pd_util__InstMap_30);
        transform_hlds__pd_util__GoalExpr_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 0)));
        transform_hlds__pd_util__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 1)));
        switch (MR_tag((MR_Word) transform_hlds__pd_util__GoalExpr_48)) {
          default:
            transform_hlds__pd_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 0)))) {
              default:
                transform_hlds__pd_util__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word transform_hlds__pd_util__Disjuncts_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 1)));

                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0, (MR_Word) &transform_hlds__pd_util_scalar_common_2[5], transform_hlds__pd_util__Disjuncts_73, &transform_hlds__pd_util__InstMapDeltas_31);
                  transform_hlds__pd_util__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word transform_hlds__pd_util__Cases_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 3)));
                  MR_Word transform_hlds__pd_util__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 1)));
                  MR_Word transform_hlds__pd_util__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 2)));

                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0, (MR_Word) &transform_hlds__pd_util_scalar_common_2[6], transform_hlds__pd_util__Cases_65, &transform_hlds__pd_util__InstMapDeltas_31);
                  transform_hlds__pd_util__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word transform_hlds__pd_util__Cond_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 2)));
                  MR_Word transform_hlds__pd_util__Then_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 3)));
                  MR_Word transform_hlds__pd_util__Else_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 4)));
                  MR_Word transform_hlds__pd_util__CondInfo_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Cond_51, (MR_Integer) 1)));
                  MR_Word transform_hlds__pd_util__ThenInfo_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Then_52, (MR_Integer) 1)));
                  MR_Word transform_hlds__pd_util__ElseInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Else_53, (MR_Integer) 1)));
                  MR_Word transform_hlds__pd_util__CondDelta_60;
                  MR_Word transform_hlds__pd_util__ThenDelta_61;
                  MR_Word transform_hlds__pd_util__ElseDelta_62;
                  MR_Word transform_hlds__pd_util__Var_83;
                  MR_Word transform_hlds__pd_util__Var_84;
                  MR_Word transform_hlds__pd_util__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__GoalExpr_48, (MR_Integer) 1)));
                  MR_Word transform_hlds__pd_util__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Cond_51, (MR_Integer) 0)));
                  MR_Word transform_hlds__pd_util__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Then_52, (MR_Integer) 0)));
                  MR_Word transform_hlds__pd_util__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Else_53, (MR_Integer) 0)));

                  transform_hlds__pd_util__CondDelta_60 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__CondInfo_55);
                  transform_hlds__pd_util__ThenDelta_61 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__ThenInfo_57);
                  transform_hlds__pd_util__ElseDelta_62 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__ElseInfo_59);
                  {
                    transform_hlds__pd_util__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_84, 0) = ((MR_Box) (transform_hlds__pd_util__ElseDelta_62));
                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    transform_hlds__pd_util__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_83, 0) = ((MR_Box) (transform_hlds__pd_util__ThenDelta_61));
                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__Var_83, 1) = ((MR_Box) (transform_hlds__pd_util__Var_84));
                  }
                  {
                    transform_hlds__pd_util__InstMapDeltas_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__InstMapDeltas_31, 0) = ((MR_Box) (transform_hlds__pd_util__CondDelta_60));
                    MR_hl_field(MR_mktag(1), transform_hlds__pd_util__InstMapDeltas_31, 1) = ((MR_Box) (transform_hlds__pd_util__Var_83));
                  }
                  transform_hlds__pd_util__succeeded = MR_TRUE;
                }
                break;
            }
            break;
        }
        if (transform_hlds__pd_util__succeeded)
        {
          MR_Integer transform_hlds__pd_util__Var_39;

          transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__HeadVar__3_3 == (MR_Integer) 0);
          if (transform_hlds__pd_util__succeeded)
          {
            transform_hlds__pd_util__Var_39 = (MR_Integer) 1;
            transform_hlds__pd_util__succeeded = transform_hlds__pd_util__get_branch_vars_7_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__Goal_20, transform_hlds__pd_util__InstMapDeltas_31, transform_hlds__pd_util__InstMap_30, transform_hlds__pd_util__Var_39, transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8, &transform_hlds__pd_util__STATE_VARIABLE_Vars_40_40);
            if (transform_hlds__pd_util__succeeded)
            {
              transform_hlds__pd_util__get_left_vars_3_p_0(transform_hlds__pd_util__Goal_20, transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6, &transform_hlds__pd_util__STATE_VARIABLE_LeftVars_41_41);
              transform_hlds__pd_util__STATE_VARIABLE_FoundBranch_42_42 = (MR_Integer) 1;
              transform_hlds__pd_util__succeeded = MR_TRUE;
            }
          }
        }
        else
        {
          MR_Word transform_hlds__pd_util__GoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 0)));
          MR_Word transform_hlds__pd_util__Var_43;
          MR_Word transform_hlds__pd_util__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_20, (MR_Integer) 1)));

          transform_hlds__pd_util__Var_43 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__pd_util__GoalExpr_32);
          transform_hlds__pd_util__succeeded = (transform_hlds__pd_util__Var_43 == (MR_Integer) 1);
          if (transform_hlds__pd_util__succeeded)
          {
            transform_hlds__pd_util__STATE_VARIABLE_Vars_40_40 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8;
            transform_hlds__pd_util__STATE_VARIABLE_LeftVars_41_41 = transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6;
            transform_hlds__pd_util__STATE_VARIABLE_FoundBranch_42_42 = transform_hlds__pd_util__HeadVar__3_3;
            transform_hlds__pd_util__succeeded = MR_TRUE;
          }
        }
        if (transform_hlds__pd_util__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word transform_hlds__pd_util__next_value_of_HeadVar__2_2 = transform_hlds__pd_util__Goals_21;
            MR_Word transform_hlds__pd_util__next_value_of_HeadVar__3_3 = transform_hlds__pd_util__STATE_VARIABLE_FoundBranch_42_42;
            MR_Word transform_hlds__pd_util__next_value_of_InstMap0_5 = transform_hlds__pd_util__InstMap_30;
            MR_Word transform_hlds__pd_util__next_value_of_STATE_VARIABLE_LeftVars_0_6 = transform_hlds__pd_util__STATE_VARIABLE_LeftVars_41_41;
            MR_Word transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Vars_0_8 = transform_hlds__pd_util__STATE_VARIABLE_Vars_40_40;

            transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__next_value_of_HeadVar__2_2;
            transform_hlds__pd_util__HeadVar__3_3 = transform_hlds__pd_util__next_value_of_HeadVar__3_3;
            transform_hlds__pd_util__InstMap0_5 = transform_hlds__pd_util__next_value_of_InstMap0_5;
            transform_hlds__pd_util__STATE_VARIABLE_LeftVars_0_6 = transform_hlds__pd_util__next_value_of_STATE_VARIABLE_LeftVars_0_6;
            transform_hlds__pd_util__STATE_VARIABLE_Vars_0_8 = transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Vars_0_8;
          }
          continue;
        }
      }
      return transform_hlds__pd_util__succeeded;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__get_branch_vars_7_p_0_1(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
  MR_Box * transform_hlds__pd_util__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
    MR_Word transform_hlds__pd_util__conv0_LambdaHeadVar__3_45;

    transform_hlds__pd_util__IntroducedFrom__pred__get_branch_vars__621__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__pd_util__wrapper_arg_1), ((MR_Word) transform_hlds__pd_util__wrapper_arg_2), &transform_hlds__pd_util__conv0_LambdaHeadVar__3_45);
    *transform_hlds__pd_util__wrapper_arg_3 = ((MR_Box) (transform_hlds__pd_util__conv0_LambdaHeadVar__3_45));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util__get_branch_vars_7_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Word transform_hlds__pd_util__Goal_2,
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
  MR_Word transform_hlds__pd_util__InstMap_4,
  MR_Integer transform_hlds__pd_util__BranchNo_5,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0_6,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__pd_util__succeeded;

      if ((transform_hlds__pd_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_7 = transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0_6;
        transform_hlds__pd_util__succeeded = MR_TRUE;
      }
      else
      {
        MR_Word transform_hlds__pd_util__TypeInfo_65_65;
        MR_Word transform_hlds__pd_util__InstMapDelta_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_util__InstMapDeltas_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__pd_util__AddExtraInfoVars_22;
        MR_Word transform_hlds__pd_util__ChangedVars_32;
        MR_Word transform_hlds__pd_util__ChangedVarsList_33;
        MR_Integer transform_hlds__pd_util__NextBranch_40;
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_50_50;
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_52_52;
        MR_Box transform_hlds__pd_util__conv1_STATE_VARIABLE_ExtraVars_50_50;
        MR_Word transform_hlds__pd_util__SwitchVar_34;
        MR_Word transform_hlds__pd_util__Var_51;
        MR_Word transform_hlds__pd_util__Var_37;
        MR_Word transform_hlds__pd_util__Var_35;
        MR_Word transform_hlds__pd_util__Var_36;

        {
          transform_hlds__pd_util__AddExtraInfoVars_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 1) = ((MR_Box) (transform_hlds__pd_util__get_branch_vars_7_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 3) = ((MR_Box) (transform_hlds__pd_util__ModuleInfo_1));
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 4) = ((MR_Box) (transform_hlds__pd_util__InstMap_4));
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 5) = ((MR_Box) (transform_hlds__pd_util__BranchNo_5));
          MR_hl_field(MR_mktag(0), transform_hlds__pd_util__AddExtraInfoVars_22, 6) = ((MR_Box) (transform_hlds__pd_util__InstMapDelta_17));
        }
        hlds__instmap__instmap_delta_changed_vars_2_p_0(transform_hlds__pd_util__InstMapDelta_17, &transform_hlds__pd_util__ChangedVars_32);
        parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_util__ChangedVars_32, &transform_hlds__pd_util__ChangedVarsList_33);
        transform_hlds__pd_util__TypeInfo_65_65 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
        mercury__list__foldl_4_p_0(transform_hlds__pd_util__TypeInfo_65_65, (MR_Word) &transform_hlds__pd_util_scalar_common_2[1], transform_hlds__pd_util__AddExtraInfoVars_22, transform_hlds__pd_util__ChangedVarsList_33, ((MR_Box) (transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0_6)), &transform_hlds__pd_util__conv1_STATE_VARIABLE_ExtraVars_50_50);
        transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_50_50 = ((MR_Word) transform_hlds__pd_util__conv1_STATE_VARIABLE_ExtraVars_50_50);
        transform_hlds__pd_util__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_2, (MR_Integer) 0)));
        transform_hlds__pd_util__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_2, (MR_Integer) 1)));
        transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__Var_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Var_51, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (transform_hlds__pd_util__succeeded)
        {
          transform_hlds__pd_util__SwitchVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Var_51, (MR_Integer) 1)));
          transform_hlds__pd_util__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Var_51, (MR_Integer) 2)));
          transform_hlds__pd_util__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Var_51, (MR_Integer) 3)));
          {
            MR_Word transform_hlds__pd_util__SwitchVarSet_39;
            MR_Word transform_hlds__pd_util__SwitchVarSet0_38;
            MR_Box transform_hlds__pd_util__conv2_SwitchVarSet0_38;

            transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_util__TypeInfo_65_65, (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_50_50, ((MR_Box) (transform_hlds__pd_util__SwitchVar_34)), &transform_hlds__pd_util__conv2_SwitchVarSet0_38);
            if (transform_hlds__pd_util__succeeded)
            {
              transform_hlds__pd_util__SwitchVarSet0_38 = ((MR_Word) transform_hlds__pd_util__conv2_SwitchVarSet0_38);
              transform_hlds__pd_util__succeeded = MR_TRUE;
            }
            if (transform_hlds__pd_util__succeeded)
            {
              mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_5)), transform_hlds__pd_util__SwitchVarSet0_38, &transform_hlds__pd_util__SwitchVarSet_39);
            }
            else
            {
              transform_hlds__pd_util__SwitchVarSet_39 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_5)));
            }
            mercury__map__set_4_p_0(transform_hlds__pd_util__TypeInfo_65_65, (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_util__SwitchVar_34)), ((MR_Box) (transform_hlds__pd_util__SwitchVarSet_39)), transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_50_50, &transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_52_52);
          }
        }
        else
          transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_52_52 = transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_50_50;
        transform_hlds__pd_util__NextBranch_40 = (transform_hlds__pd_util__BranchNo_5 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Word transform_hlds__pd_util__next_value_of_HeadVar__3_3 = transform_hlds__pd_util__InstMapDeltas_18;
          MR_Integer transform_hlds__pd_util__next_value_of_BranchNo_5 = transform_hlds__pd_util__NextBranch_40;
          MR_Word transform_hlds__pd_util__next_value_of_STATE_VARIABLE_ExtraVars_0_6 = transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_52_52;

          transform_hlds__pd_util__HeadVar__3_3 = transform_hlds__pd_util__next_value_of_HeadVar__3_3;
          transform_hlds__pd_util__BranchNo_5 = transform_hlds__pd_util__next_value_of_BranchNo_5;
          transform_hlds__pd_util__STATE_VARIABLE_ExtraVars_0_6 = transform_hlds__pd_util__next_value_of_STATE_VARIABLE_ExtraVars_0_6;
        }
        continue;
      }
      return transform_hlds__pd_util__succeeded;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__get_left_vars_3_p_0(
  MR_Word transform_hlds__pd_util__Goal_4,
  MR_Word transform_hlds__pd_util__Vars0_5,
  MR_Word * transform_hlds__pd_util__Vars_6)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Word transform_hlds__pd_util__Var_7;
    MR_Word transform_hlds__pd_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_4, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal_4, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_util__Var_8;
    MR_Word transform_hlds__pd_util__Var_9;

    transform_hlds__pd_util__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_util__Var_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Var_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (transform_hlds__pd_util__succeeded)
    {
      transform_hlds__pd_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Var_11, (MR_Integer) 1)));
      transform_hlds__pd_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Var_11, (MR_Integer) 2)));
      transform_hlds__pd_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_util__Var_11, (MR_Integer) 3)));
      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_util__Var_7, transform_hlds__pd_util__Vars0_5, transform_hlds__pd_util__Vars_6);
    }
    else
      *transform_hlds__pd_util__Vars_6 = transform_hlds__pd_util__Vars0_5;
  }
}

static void MR_CALL 
transform_hlds__pd_util__combine_vars_4_p_0(
  MR_Integer transform_hlds__pd_util__BranchNo_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__pd_util__succeeded;

      if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *transform_hlds__pd_util__STATE_VARIABLE_Vars_4 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3;
      else
      {
        MR_Word transform_hlds__pd_util__ExtraVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_util__ExtraVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_17_17;
        MR_Word transform_hlds__pd_util__Branches0_13;
        MR_Box transform_hlds__pd_util__conv0_Branches0_13;

        transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3, ((MR_Box) (transform_hlds__pd_util__ExtraVar_10)), &transform_hlds__pd_util__conv0_Branches0_13);
        if (transform_hlds__pd_util__succeeded)
        {
          transform_hlds__pd_util__Branches0_13 = ((MR_Word) transform_hlds__pd_util__conv0_Branches0_13);
          transform_hlds__pd_util__succeeded = MR_TRUE;
        }
        if (transform_hlds__pd_util__succeeded)
        {
          MR_Word transform_hlds__pd_util__Branches_14;

          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_1)), transform_hlds__pd_util__Branches0_13, &transform_hlds__pd_util__Branches_14);
          mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_util__ExtraVar_10)), ((MR_Box) (transform_hlds__pd_util__Branches_14)), transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3, &transform_hlds__pd_util__STATE_VARIABLE_Vars_17_17);
        }
        else
        {
          MR_Word transform_hlds__pd_util__Branches_20;

          transform_hlds__pd_util__Branches_20 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__BranchNo_1)));
          mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_util__ExtraVar_10)), ((MR_Box) (transform_hlds__pd_util__Branches_20)), transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3, &transform_hlds__pd_util__STATE_VARIABLE_Vars_17_17);
        }
        /* direct tailcall eliminated */
        {
          MR_Word transform_hlds__pd_util__next_value_of_HeadVar__2_2 = transform_hlds__pd_util__ExtraVars_11;
          MR_Word transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Vars_0_3 = transform_hlds__pd_util__STATE_VARIABLE_Vars_17_17;

          transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__next_value_of_HeadVar__2_2;
          transform_hlds__pd_util__STATE_VARIABLE_Vars_0_3 = transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Vars_0_3;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0_2(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box * transform_hlds__pd_util__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
    MR_Word transform_hlds__pd_util__conv1_HeadVar__3_28;

    transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__405__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__pd_util__wrapper_arg_1), &transform_hlds__pd_util__conv1_HeadVar__3_28);
    *transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv1_HeadVar__3_28));
  }
}

static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0_1(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box * transform_hlds__pd_util__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
    MR_Word transform_hlds__pd_util__conv0_HeadVar__3_25;

    transform_hlds__pd_util__IntroducedFrom__pred__convert_branch_info__401__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__pd_util__wrapper_arg_1), &transform_hlds__pd_util__conv0_HeadVar__3_25);
    *transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__3_25));
  }
}

void MR_CALL 
transform_hlds__pd_util__convert_branch_info_3_p_0(
  MR_Word transform_hlds__pd_util__ArgInfo_4,
  MR_Word transform_hlds__pd_util__Args_5,
  MR_Word * transform_hlds__pd_util__VarInfo_6)
{
  {
    MR_Word transform_hlds__pd_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word transform_hlds__pd_util__TypeInfo_22_22 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[1];
    MR_Word transform_hlds__pd_util__TypeInfo_23_23;
    MR_Word transform_hlds__pd_util__ArgMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__ArgInfo_4, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_util__LeftArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__ArgInfo_4, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_util__OpaqueArgs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__ArgInfo_4, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_util__ArgList_10;
    MR_Word transform_hlds__pd_util__BranchVarMap0_11;
    MR_Word transform_hlds__pd_util__BranchVarMap_12;
    MR_Word transform_hlds__pd_util__LeftArgNos_13;
    MR_Word transform_hlds__pd_util__LeftVars0_14;
    MR_Word transform_hlds__pd_util__LeftVars_15;
    MR_Word transform_hlds__pd_util__OpaqueArgNos_16;
    MR_Word transform_hlds__pd_util__OpaqueVars0_17;
    MR_Word transform_hlds__pd_util__OpaqueVars_18;
    MR_Word transform_hlds__pd_util__Var_19;
    MR_Word transform_hlds__pd_util__Var_20;

    mercury__map__to_assoc_list_2_p_0(transform_hlds__pd_util__TypeCtorInfo_21_21, transform_hlds__pd_util__TypeInfo_22_22, transform_hlds__pd_util__ArgMap_7, &transform_hlds__pd_util__ArgList_10);
    transform_hlds__pd_util__TypeInfo_23_23 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
    mercury__map__init_1_p_0(transform_hlds__pd_util__TypeInfo_23_23, transform_hlds__pd_util__TypeInfo_22_22, &transform_hlds__pd_util__BranchVarMap0_11);
    transform_hlds__pd_util__convert_branch_info_2_4_p_0(transform_hlds__pd_util__ArgList_10, transform_hlds__pd_util__Args_5, transform_hlds__pd_util__BranchVarMap0_11, &transform_hlds__pd_util__BranchVarMap_12);
    mercury__set__to_sorted_list_2_p_0(transform_hlds__pd_util__TypeCtorInfo_21_21, transform_hlds__pd_util__LeftArgs_8, &transform_hlds__pd_util__LeftArgNos_13);
    {
      transform_hlds__pd_util__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_19, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_19, 1) = ((MR_Box) (transform_hlds__pd_util__convert_branch_info_3_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_19, 3) = ((MR_Box) (transform_hlds__pd_util__Args_5));
    }
    mercury__list__map_3_p_0(transform_hlds__pd_util__TypeCtorInfo_21_21, transform_hlds__pd_util__TypeInfo_23_23, transform_hlds__pd_util__Var_19, transform_hlds__pd_util__LeftArgNos_13, &transform_hlds__pd_util__LeftVars0_14);
    mercury__set__list_to_set_2_p_0(transform_hlds__pd_util__TypeInfo_23_23, transform_hlds__pd_util__LeftVars0_14, &transform_hlds__pd_util__LeftVars_15);
    mercury__set__to_sorted_list_2_p_0(transform_hlds__pd_util__TypeCtorInfo_21_21, transform_hlds__pd_util__OpaqueArgs_9, &transform_hlds__pd_util__OpaqueArgNos_16);
    {
      transform_hlds__pd_util__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_20, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_20, 1) = ((MR_Box) (transform_hlds__pd_util__convert_branch_info_3_p_0_2));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_20, 3) = ((MR_Box) (transform_hlds__pd_util__Args_5));
    }
    mercury__list__map_3_p_0(transform_hlds__pd_util__TypeCtorInfo_21_21, transform_hlds__pd_util__TypeInfo_23_23, transform_hlds__pd_util__Var_20, transform_hlds__pd_util__OpaqueArgNos_16, &transform_hlds__pd_util__OpaqueVars0_17);
    mercury__set__list_to_set_2_p_0(transform_hlds__pd_util__TypeInfo_23_23, transform_hlds__pd_util__OpaqueVars0_17, &transform_hlds__pd_util__OpaqueVars_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_util__VarInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_util__BranchVarMap_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_util__LeftVars_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_util__OpaqueVars_18));
    }
  }
}

static void MR_CALL 
transform_hlds__pd_util__convert_branch_info_2_4_p_0(
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
  MR_Word transform_hlds__pd_util__Args_2,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0_3,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_VarInfo_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((transform_hlds__pd_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__pd_util__STATE_VARIABLE_VarInfo_4 = transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0_3;
    else
    {
      MR_Word transform_hlds__pd_util__TypeInfo_20_20;
      MR_Integer transform_hlds__pd_util__ArgNo_9;
      MR_Word transform_hlds__pd_util__Branches_10;
      MR_Word transform_hlds__pd_util__ArgInfos_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_util__Arg_14;
      MR_Word transform_hlds__pd_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_util__STATE_VARIABLE_VarInfo_18_18;
      MR_Box transform_hlds__pd_util__conv0_Arg_14;

      transform_hlds__pd_util__ArgNo_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_17, (MR_Integer) 0)));
      transform_hlds__pd_util__Branches_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_17, (MR_Integer) 1)));
      transform_hlds__pd_util__TypeInfo_20_20 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[0];
      mercury__list__det_index1_3_p_0(transform_hlds__pd_util__TypeInfo_20_20, transform_hlds__pd_util__Args_2, transform_hlds__pd_util__ArgNo_9, &transform_hlds__pd_util__conv0_Arg_14);
      transform_hlds__pd_util__Arg_14 = ((MR_Word) transform_hlds__pd_util__conv0_Arg_14);
      mercury__map__set_4_p_0(transform_hlds__pd_util__TypeInfo_20_20, (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], ((MR_Box) (transform_hlds__pd_util__Arg_14)), ((MR_Box) (transform_hlds__pd_util__Branches_10)), transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0_3, &transform_hlds__pd_util__STATE_VARIABLE_VarInfo_18_18);
      /* direct tailcall eliminated */
      {
        MR_Word transform_hlds__pd_util__next_value_of_HeadVar__1_1 = transform_hlds__pd_util__ArgInfos_11;
        MR_Word transform_hlds__pd_util__next_value_of_STATE_VARIABLE_VarInfo_0_3 = transform_hlds__pd_util__STATE_VARIABLE_VarInfo_18_18;

        transform_hlds__pd_util__HeadVar__1_1 = transform_hlds__pd_util__next_value_of_HeadVar__1_1;
        transform_hlds__pd_util__STATE_VARIABLE_VarInfo_0_3 = transform_hlds__pd_util__next_value_of_STATE_VARIABLE_VarInfo_0_3;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__get_extra_info_headvars_8_p_0(
  MR_Word transform_hlds__pd_util__HeadVar__1_1,
  MR_Integer transform_hlds__pd_util__ArgNo_2,
  MR_Word transform_hlds__pd_util__LeftVars_3,
  MR_Word transform_hlds__pd_util__VarInfo_4,
  MR_Word transform_hlds__pd_util__HeadVar__5_5,
  MR_Word * transform_hlds__pd_util__HeadVar__6_6,
  MR_Word transform_hlds__pd_util__HeadVar__7_7,
  MR_Word * transform_hlds__pd_util__HeadVar__8_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__pd_util__succeeded;

      if ((transform_hlds__pd_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__pd_util__HeadVar__8_8 = transform_hlds__pd_util__HeadVar__7_7;
        *transform_hlds__pd_util__HeadVar__6_6 = transform_hlds__pd_util__HeadVar__5_5;
      }
      else
      {
        MR_Word transform_hlds__pd_util__HeadVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_util__HeadVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer transform_hlds__pd_util__NextArgNo_26;
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_ThisProcArgs_31_31;
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_ThisProcLeftVars_32_32;
        MR_Word transform_hlds__pd_util__ThisVarInfo_25;
        MR_Box transform_hlds__pd_util__conv0_ThisVarInfo_25;

        transform_hlds__pd_util__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[0], (MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__VarInfo_4, ((MR_Box) (transform_hlds__pd_util__HeadVar_18)), &transform_hlds__pd_util__conv0_ThisVarInfo_25);
        if (transform_hlds__pd_util__succeeded)
        {
          transform_hlds__pd_util__ThisVarInfo_25 = ((MR_Word) transform_hlds__pd_util__conv0_ThisVarInfo_25);
          transform_hlds__pd_util__succeeded = MR_TRUE;
        }
        if (transform_hlds__pd_util__succeeded)
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &transform_hlds__pd_util_scalar_common_1[1], transform_hlds__pd_util__ArgNo_2, ((MR_Box) (transform_hlds__pd_util__ThisVarInfo_25)), transform_hlds__pd_util__HeadVar__5_5, &transform_hlds__pd_util__STATE_VARIABLE_ThisProcArgs_31_31);
        }
        else
          transform_hlds__pd_util__STATE_VARIABLE_ThisProcArgs_31_31 = transform_hlds__pd_util__HeadVar__5_5;
        transform_hlds__pd_util__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_util__LeftVars_3, transform_hlds__pd_util__HeadVar_18);
        if (transform_hlds__pd_util__succeeded)
        {
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__ArgNo_2)), transform_hlds__pd_util__HeadVar__7_7, &transform_hlds__pd_util__STATE_VARIABLE_ThisProcLeftVars_32_32);
        }
        else
          transform_hlds__pd_util__STATE_VARIABLE_ThisProcLeftVars_32_32 = transform_hlds__pd_util__HeadVar__7_7;
        transform_hlds__pd_util__NextArgNo_26 = (transform_hlds__pd_util__ArgNo_2 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Word transform_hlds__pd_util__next_value_of_HeadVar__1_1 = transform_hlds__pd_util__HeadVars_19;
          MR_Integer transform_hlds__pd_util__next_value_of_ArgNo_2 = transform_hlds__pd_util__NextArgNo_26;
          MR_Word transform_hlds__pd_util__next_value_of_HeadVar__5_5 = transform_hlds__pd_util__STATE_VARIABLE_ThisProcArgs_31_31;
          MR_Word transform_hlds__pd_util__next_value_of_HeadVar__7_7 = transform_hlds__pd_util__STATE_VARIABLE_ThisProcLeftVars_32_32;

          transform_hlds__pd_util__HeadVar__1_1 = transform_hlds__pd_util__next_value_of_HeadVar__1_1;
          transform_hlds__pd_util__ArgNo_2 = transform_hlds__pd_util__next_value_of_ArgNo_2;
          transform_hlds__pd_util__HeadVar__5_5 = transform_hlds__pd_util__next_value_of_HeadVar__5_5;
          transform_hlds__pd_util__HeadVar__7_7 = transform_hlds__pd_util__next_value_of_HeadVar__7_7;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_util__get_opaque_args_6_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Integer transform_hlds__pd_util__ArgNo_2,
  MR_Word transform_hlds__pd_util__HeadVar__3_3,
  MR_Word transform_hlds__pd_util__ExtraInfoArgs_4,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__pd_util__succeeded;

      if ((transform_hlds__pd_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_6 = transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5;
      else
      {
        MR_Word transform_hlds__pd_util__ArgMode_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_util__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer transform_hlds__pd_util__NextArg_19;
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_22_22;
        MR_Word transform_hlds__pd_util__TypeCtorInfo_25_25;
        MR_Word transform_hlds__pd_util__TypeInfo_26_26;

        transform_hlds__pd_util__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__ArgMode_15);
        if (transform_hlds__pd_util__succeeded)
        {
          transform_hlds__pd_util__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          transform_hlds__pd_util__TypeInfo_26_26 = (MR_Word) &transform_hlds__pd_util_scalar_common_1[1];
          transform_hlds__pd_util__succeeded = mercury__map__contains_2_p_0(transform_hlds__pd_util__TypeCtorInfo_25_25, transform_hlds__pd_util__TypeInfo_26_26, transform_hlds__pd_util__ExtraInfoArgs_4, ((MR_Box) (transform_hlds__pd_util__ArgNo_2)));
          transform_hlds__pd_util__succeeded = !(transform_hlds__pd_util__succeeded);
        }
        if (transform_hlds__pd_util__succeeded)
        {
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__pd_util__ArgNo_2)), transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5, &transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_22_22);
        }
        else
          transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_22_22 = transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5;
        transform_hlds__pd_util__NextArg_19 = (transform_hlds__pd_util__ArgNo_2 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer transform_hlds__pd_util__next_value_of_ArgNo_2 = transform_hlds__pd_util__NextArg_19;
          MR_Word transform_hlds__pd_util__next_value_of_HeadVar__3_3 = transform_hlds__pd_util__ArgModes_16;
          MR_Word transform_hlds__pd_util__next_value_of_STATE_VARIABLE_OpaqueArgs_0_5 = transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_22_22;

          transform_hlds__pd_util__ArgNo_2 = transform_hlds__pd_util__next_value_of_ArgNo_2;
          transform_hlds__pd_util__HeadVar__3_3 = transform_hlds__pd_util__next_value_of_HeadVar__3_3;
          transform_hlds__pd_util__STATE_VARIABLE_OpaqueArgs_0_5 = transform_hlds__pd_util__next_value_of_STATE_VARIABLE_OpaqueArgs_0_5;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
transform_hlds__pd_util__unique_modecheck_goal_5_p_0(
  MR_Word transform_hlds__pd_util__Goal0_6,
  MR_Word * transform_hlds__pd_util__Goal_7,
  MR_Word * transform_hlds__pd_util__Errors_8,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_11,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_PDInfo_12)
{
  {
    MR_Word transform_hlds__pd_util__TypeCtorInfo_16_26;
    MR_Word transform_hlds__pd_util__LiveVars_10;
    MR_Word transform_hlds__pd_util__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_util__ModuleInfo_19;
    MR_Word transform_hlds__pd_util__InstMapDelta_20;
    MR_Word transform_hlds__pd_util__InstMap_21;
    MR_Word transform_hlds__pd_util__NonLocals_22;
    MR_Word transform_hlds__pd_util__NonLocalsList_23;
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_14_24;
    MR_Word transform_hlds__pd_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Goal0_6, (MR_Integer) 0)));

    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_11, &transform_hlds__pd_util__ModuleInfo_19);
    transform_hlds__pd_util__InstMapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_util__GoalInfo_17);
    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_11, &transform_hlds__pd_util__InstMap_21);
    transform_hlds__pd_util__NonLocals_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_util__GoalInfo_17);
    transform_hlds__pd_util__TypeCtorInfo_16_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__set_of_var__to_sorted_list_2_p_0(transform_hlds__pd_util__TypeCtorInfo_16_26, transform_hlds__pd_util__NonLocals_22, &transform_hlds__pd_util__NonLocalsList_23);
    parse_tree__set_of_var__init_1_p_0(transform_hlds__pd_util__TypeCtorInfo_16_26, &transform_hlds__pd_util__STATE_VARIABLE_Vars_14_24);
    transform_hlds__pd_util__get_goal_live_vars_2_6_p_0(transform_hlds__pd_util__ModuleInfo_19, transform_hlds__pd_util__NonLocalsList_23, transform_hlds__pd_util__InstMap_21, transform_hlds__pd_util__InstMapDelta_20, transform_hlds__pd_util__STATE_VARIABLE_Vars_14_24, &transform_hlds__pd_util__LiveVars_10);
    transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0(transform_hlds__pd_util__LiveVars_10, transform_hlds__pd_util__Goal0_6, transform_hlds__pd_util__Goal_7, transform_hlds__pd_util__Errors_8, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_11, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_12);
  }
}

static void MR_CALL 
transform_hlds__pd_util__get_goal_live_vars_2_6_p_0(
  MR_Word transform_hlds__pd_util__ModuleInfo_1,
  MR_Word transform_hlds__pd_util__HeadVar__2_2,
  MR_Word transform_hlds__pd_util__InstMap_3,
  MR_Word transform_hlds__pd_util__InstMapDelta_4,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Vars_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__pd_util__succeeded;

      if ((transform_hlds__pd_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *transform_hlds__pd_util__STATE_VARIABLE_Vars_6 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5;
      else
      {
        MR_Word transform_hlds__pd_util__NonLocal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_util__NonLocals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__pd_util__FinalInst_20;
        MR_Word transform_hlds__pd_util__STATE_VARIABLE_Vars_23_23;
        MR_Word transform_hlds__pd_util__FinalInst0_19;

        transform_hlds__pd_util__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__pd_util__InstMapDelta_4, transform_hlds__pd_util__NonLocal_14, &transform_hlds__pd_util__FinalInst0_19);
        if (transform_hlds__pd_util__succeeded)
          transform_hlds__pd_util__FinalInst_20 = transform_hlds__pd_util__FinalInst0_19;
        else
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_util__InstMap_3, transform_hlds__pd_util__NonLocal_14, &transform_hlds__pd_util__FinalInst_20);
        transform_hlds__pd_util__succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(transform_hlds__pd_util__ModuleInfo_1, transform_hlds__pd_util__FinalInst_20);
        if (transform_hlds__pd_util__succeeded)
          transform_hlds__pd_util__STATE_VARIABLE_Vars_23_23 = transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5;
        else
        {
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_util__NonLocal_14, transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5, &transform_hlds__pd_util__STATE_VARIABLE_Vars_23_23);
        }
        /* direct tailcall eliminated */
        {
          MR_Word transform_hlds__pd_util__next_value_of_HeadVar__2_2 = transform_hlds__pd_util__NonLocals_15;
          MR_Word transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Vars_0_5 = transform_hlds__pd_util__STATE_VARIABLE_Vars_23_23;

          transform_hlds__pd_util__HeadVar__2_2 = transform_hlds__pd_util__next_value_of_HeadVar__2_2;
          transform_hlds__pd_util__STATE_VARIABLE_Vars_0_5 = transform_hlds__pd_util__next_value_of_STATE_VARIABLE_Vars_0_5;
        }
        continue;
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0_1(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__pd_util__wrapper_arg_2;
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
    MR_Word transform_hlds__pd_util__conv0_HeadVar__3_3;

    transform_hlds__pd_util__conv0_HeadVar__3_3 = check_hlds__mode_errors__mode_error_info_to_spec_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__pd_util__wrapper_arg_1));
    transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__3_3));
    return transform_hlds__pd_util__wrapper_arg_2;
  }
}

void MR_CALL 
transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0(
  MR_Word transform_hlds__pd_util__LiveVars_7,
  MR_Word transform_hlds__pd_util__Goal0_8,
  MR_Word * transform_hlds__pd_util__Goal_9,
  MR_Word * transform_hlds__pd_util__Errors_10,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_38,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_PDInfo_39)
{
  {
    MR_Word transform_hlds__pd_util__PredProcId_12;
    MR_Word transform_hlds__pd_util__PredId_13;
    MR_Integer transform_hlds__pd_util__ProcId_14;
    MR_Word transform_hlds__pd_util__ModuleInfo0_15;
    MR_Word transform_hlds__pd_util__InstMap0_16;
    MR_Word transform_hlds__pd_util__Context_17;
    MR_Word transform_hlds__pd_util__PredInfo0_18;
    MR_Word transform_hlds__pd_util__ProcInfo0_19;
    MR_Word transform_hlds__pd_util__HeadInstVars_20;
    MR_Word transform_hlds__pd_util__ModuleInfo1_21;
    MR_Word transform_hlds__pd_util__ModeInfo0_23;
    MR_Word transform_hlds__pd_util__ModeInfo_24;
    MR_Word transform_hlds__pd_util__ModuleInfo_25;
    MR_Word transform_hlds__pd_util__Globals_26;
    MR_Word transform_hlds__pd_util__Debug_27;
    MR_Word transform_hlds__pd_util__VarSet_32;
    MR_Word transform_hlds__pd_util__VarTypes_33;
    MR_Word transform_hlds__pd_util__PredInfo_34;
    MR_Word transform_hlds__pd_util__ProcInfo1_35;
    MR_Word transform_hlds__pd_util__ProcInfo2_36;
    MR_Word transform_hlds__pd_util__ProcInfo_37;
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_47_47;
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_48_48;

    transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_38, &transform_hlds__pd_util__PredProcId_12);
    transform_hlds__pd_util__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__PredProcId_12, (MR_Integer) 0)));
    transform_hlds__pd_util__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__PredProcId_12, (MR_Integer) 1)));
    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_38, &transform_hlds__pd_util__ModuleInfo0_15);
    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_38, &transform_hlds__pd_util__InstMap0_16);
    mercury__term__context_init_1_p_0(&transform_hlds__pd_util__Context_17);
    transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_38, &transform_hlds__pd_util__PredInfo0_18);
    transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_38, &transform_hlds__pd_util__ProcInfo0_19);
    transform_hlds__pd_info__pd_info_get_head_inst_vars_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_38, &transform_hlds__pd_util__HeadInstVars_20);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__pd_util__PredId_13, transform_hlds__pd_util__ProcId_14, transform_hlds__pd_util__PredInfo0_18, transform_hlds__pd_util__ProcInfo0_19, transform_hlds__pd_util__ModuleInfo0_15, &transform_hlds__pd_util__ModuleInfo1_21);
    check_hlds__mode_info__mode_info_init_10_p_0(transform_hlds__pd_util__ModuleInfo1_21, transform_hlds__pd_util__PredId_13, transform_hlds__pd_util__ProcId_14, transform_hlds__pd_util__Context_17, transform_hlds__pd_util__LiveVars_7, transform_hlds__pd_util__HeadInstVars_20, transform_hlds__pd_util__InstMap0_16, (MR_Integer) 1, (MR_Integer) 1, &transform_hlds__pd_util__ModeInfo0_23);
    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(transform_hlds__pd_util__Goal0_8, transform_hlds__pd_util__Goal_9, transform_hlds__pd_util__ModeInfo0_23, &transform_hlds__pd_util__ModeInfo_24);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(transform_hlds__pd_util__ModeInfo_24, &transform_hlds__pd_util__ModuleInfo_25);
    hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_util__ModuleInfo_25, &transform_hlds__pd_util__Globals_26);
    libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_util__Globals_26, (MR_Integer) 83, &transform_hlds__pd_util__Debug_27);
    check_hlds__mode_info__mode_info_get_errors_2_p_0(transform_hlds__pd_util__ModeInfo_24, transform_hlds__pd_util__Errors_10);
    switch (transform_hlds__pd_util__Debug_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__pd_util__ErrorSpecs_29;
          MR_Word transform_hlds__pd_util__Var_43;
          MR_Integer transform_hlds__pd_util___NumWarnings_30;
          MR_Integer transform_hlds__pd_util___NumErrors_31;

          {
            transform_hlds__pd_util__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_43, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_43, 1) = ((MR_Box) (transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0_1));
            MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_43, 3) = ((MR_Box) (transform_hlds__pd_util__ModeInfo_24));
          }
          transform_hlds__pd_util__ErrorSpecs_29 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, transform_hlds__pd_util__Var_43, *transform_hlds__pd_util__Errors_10);
          parse_tree__error_util__write_error_specs_8_p_0(transform_hlds__pd_util__ErrorSpecs_29, transform_hlds__pd_util__Globals_26, (MR_Integer) 0, &transform_hlds__pd_util___NumWarnings_30, (MR_Integer) 0, &transform_hlds__pd_util___NumErrors_31);
        }
        break;
    }
    check_hlds__mode_info__mode_info_get_varset_2_p_0(transform_hlds__pd_util__ModeInfo_24, &transform_hlds__pd_util__VarSet_32);
    check_hlds__mode_info__mode_info_get_var_types_2_p_0(transform_hlds__pd_util__ModeInfo_24, &transform_hlds__pd_util__VarTypes_33);
    transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_util__ModuleInfo_25, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_38, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_47_47);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__pd_util__ModuleInfo_25, transform_hlds__pd_util__PredId_13, transform_hlds__pd_util__ProcId_14, &transform_hlds__pd_util__PredInfo_34, &transform_hlds__pd_util__ProcInfo1_35);
    transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(transform_hlds__pd_util__PredInfo_34, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_47_47, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_48_48);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__pd_util__VarSet_32, transform_hlds__pd_util__ProcInfo1_35, &transform_hlds__pd_util__ProcInfo2_36);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__pd_util__VarTypes_33, transform_hlds__pd_util__ProcInfo2_36, &transform_hlds__pd_util__ProcInfo_37);
    transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__pd_util__ProcInfo_37, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_48_48, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_39);
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util__propagate_constraints_4_p_0_1(
  MR_Box transform_hlds__pd_util__closure_arg)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;

    transform_hlds__pd_util__succeeded = transform_hlds__pd_util__IntroducedFrom__pred__rerun_det_analysis__390__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__closure, (MR_Integer) 4))));
    return transform_hlds__pd_util__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_util__propagate_constraints_4_p_0(
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Goal_0_29,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Goal_30,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_31,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_PDInfo_32)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Word transform_hlds__pd_util__ModuleInfo0_7;
    MR_Word transform_hlds__pd_util__Globals_8;
    MR_Word transform_hlds__pd_util__ConstraintProp_9;
    MR_Word transform_hlds__pd_util__DebugPD_10;

    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_31, &transform_hlds__pd_util__ModuleInfo0_7);
    hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_util__ModuleInfo0_7, &transform_hlds__pd_util__Globals_8);
    libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_util__Globals_8, (MR_Integer) 357, &transform_hlds__pd_util__ConstraintProp_9);
    libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_util__Globals_8, (MR_Integer) 83, &transform_hlds__pd_util__DebugPD_10);
    switch (transform_hlds__pd_util__ConstraintProp_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *transform_hlds__pd_util__STATE_VARIABLE_Goal_30 = transform_hlds__pd_util__STATE_VARIABLE_Goal_0_29;
          *transform_hlds__pd_util__STATE_VARIABLE_PDInfo_32 = transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_31;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__pd_util__ProcInfo0_13;
          MR_Word transform_hlds__pd_util__InstMap_14;
          MR_Word transform_hlds__pd_util__VarTypes0_15;
          MR_Word transform_hlds__pd_util__VarSet0_16;
          MR_Word transform_hlds__pd_util__CInfo0_17;
          MR_Word transform_hlds__pd_util__GoalInfo0_19;
          MR_Word transform_hlds__pd_util__NonLocals_20;
          MR_Word transform_hlds__pd_util__CInfo_21;
          MR_Word transform_hlds__pd_util__ModuleInfo_22;
          MR_Word transform_hlds__pd_util__VarTypes_23;
          MR_Word transform_hlds__pd_util__VarSet_24;
          MR_Word transform_hlds__pd_util__Changed_25;
          MR_Word transform_hlds__pd_util__ProcInfo1_26;
          MR_Word transform_hlds__pd_util__ProcInfo_27;
          MR_Word transform_hlds__pd_util__STATE_VARIABLE_Goal_41_41;
          MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_42_42;
          MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_43_43;
          MR_Word transform_hlds__pd_util__Var_18;

          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__pd_util__DebugPD_10, (MR_String) "%% Propagating constraints\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_31, (MR_String) "before constraints\n", transform_hlds__pd_util__STATE_VARIABLE_Goal_0_29);
          transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_31, &transform_hlds__pd_util__ProcInfo0_13);
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_31, &transform_hlds__pd_util__InstMap_14);
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_util__ProcInfo0_13, &transform_hlds__pd_util__VarTypes0_15);
          hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__pd_util__ProcInfo0_13, &transform_hlds__pd_util__VarSet0_16);
          transform_hlds__constraint__constraint_info_init_5_p_0(transform_hlds__pd_util__ModuleInfo0_7, transform_hlds__pd_util__VarTypes0_15, transform_hlds__pd_util__VarSet0_16, transform_hlds__pd_util__InstMap_14, &transform_hlds__pd_util__CInfo0_17);
          transform_hlds__pd_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__STATE_VARIABLE_Goal_0_29, (MR_Integer) 0)));
          transform_hlds__pd_util__GoalInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__STATE_VARIABLE_Goal_0_29, (MR_Integer) 1)));
          transform_hlds__pd_util__NonLocals_20 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_util__GoalInfo0_19);
          transform_hlds__constraint__propagate_constraints_in_goal_4_p_0(transform_hlds__pd_util__STATE_VARIABLE_Goal_0_29, &transform_hlds__pd_util__STATE_VARIABLE_Goal_41_41, transform_hlds__pd_util__CInfo0_17, &transform_hlds__pd_util__CInfo_21);
          transform_hlds__constraint__constraint_info_deconstruct_5_p_0(transform_hlds__pd_util__CInfo_21, &transform_hlds__pd_util__ModuleInfo_22, &transform_hlds__pd_util__VarTypes_23, &transform_hlds__pd_util__VarSet_24, &transform_hlds__pd_util__Changed_25);
          transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_util__ModuleInfo_22, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_31, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_42_42);
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__pd_util__VarTypes_23, transform_hlds__pd_util__ProcInfo0_13, &transform_hlds__pd_util__ProcInfo1_26);
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__pd_util__VarSet_24, transform_hlds__pd_util__ProcInfo1_26, &transform_hlds__pd_util__ProcInfo_27);
          transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__pd_util__ProcInfo_27, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_42_42, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_43_43);
          switch (transform_hlds__pd_util__Changed_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *transform_hlds__pd_util__STATE_VARIABLE_Goal_30 = transform_hlds__pd_util__STATE_VARIABLE_Goal_0_29;
                *transform_hlds__pd_util__STATE_VARIABLE_PDInfo_32 = transform_hlds__pd_util__STATE_VARIABLE_PDInfo_43_43;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__pd_util__SimplifyTasks_28;
                MR_Word transform_hlds__pd_util__STATE_VARIABLE_Goal_48_48;
                MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_49_49;
                MR_Word transform_hlds__pd_util__STATE_VARIABLE_Goal_50_50;
                MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51;
                MR_Word transform_hlds__pd_util__STATE_VARIABLE_Goal_52_52;
                MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_53_53;
                MR_Word transform_hlds__pd_util__GoalInfo0_63;
                MR_Word transform_hlds__pd_util__Detism_64;
                MR_Word transform_hlds__pd_util__SolnContext_65;
                MR_Word transform_hlds__pd_util__PredProcId_66;
                MR_Word transform_hlds__pd_util__PredInfo_67;
                MR_Word transform_hlds__pd_util__ProcInfo_68;
                MR_Word transform_hlds__pd_util__ModuleInfo0_69;
                MR_Word transform_hlds__pd_util__ModuleInfo1_70;
                MR_Word transform_hlds__pd_util__VarSet_71;
                MR_Word transform_hlds__pd_util__VarTypes_72;
                MR_Word transform_hlds__pd_util__DetInfo0_73;
                MR_Word transform_hlds__pd_util__InstMap_74;
                MR_Word transform_hlds__pd_util__DetInfo_77;
                MR_Word transform_hlds__pd_util__ModuleInfo_78;
                MR_Word transform_hlds__pd_util__Specs_79;
                MR_Word transform_hlds__pd_util__Globals_80;
                MR_Word transform_hlds__pd_util__GlobalsToUse_82;
                MR_Word transform_hlds__pd_util__ContainsErrors_83;
                MR_Word transform_hlds__pd_util__Var_89;
                MR_Word transform_hlds__pd_util__Var_62;
                MR_Word transform_hlds__pd_util__Var_75;
                MR_Word transform_hlds__pd_util__Var_76;
                MR_Word transform_hlds__pd_util___OptionsToRestore_81;

                transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_43_43, (MR_String) "after constraints, before recompute\n", transform_hlds__pd_util__STATE_VARIABLE_Goal_41_41);
                transform_hlds__pd_util__pd_requantify_goal_5_p_0(transform_hlds__pd_util__NonLocals_20, transform_hlds__pd_util__STATE_VARIABLE_Goal_41_41, &transform_hlds__pd_util__STATE_VARIABLE_Goal_48_48, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_43_43, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_49_49);
                transform_hlds__pd_util__pd_recompute_instmap_delta_4_p_0(transform_hlds__pd_util__STATE_VARIABLE_Goal_48_48, &transform_hlds__pd_util__STATE_VARIABLE_Goal_50_50, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_49_49, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51);
                transform_hlds__pd_util__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__STATE_VARIABLE_Goal_50_50, (MR_Integer) 0)));
                transform_hlds__pd_util__GoalInfo0_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__STATE_VARIABLE_Goal_50_50, (MR_Integer) 1)));
                transform_hlds__pd_util__Detism_64 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__pd_util__GoalInfo0_63);
                check_hlds__det_analysis__det_get_soln_context_2_p_0(transform_hlds__pd_util__Detism_64, &transform_hlds__pd_util__SolnContext_65);
                transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__PredProcId_66);
                transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__PredInfo_67);
                transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__ProcInfo_68);
                transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__ModuleInfo0_69);
                hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__pd_util__PredProcId_66, transform_hlds__pd_util__PredInfo_67, transform_hlds__pd_util__ProcInfo_68, transform_hlds__pd_util__ModuleInfo0_69, &transform_hlds__pd_util__ModuleInfo1_70);
                hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__pd_util__ProcInfo_68, &transform_hlds__pd_util__VarSet_71);
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_util__ProcInfo_68, &transform_hlds__pd_util__VarTypes_72);
                check_hlds__det_util__det_info_init_7_p_0(transform_hlds__pd_util__ModuleInfo1_70, transform_hlds__pd_util__PredProcId_66, transform_hlds__pd_util__VarSet_71, transform_hlds__pd_util__VarTypes_72, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__pd_util__DetInfo0_73);
                transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__InstMap_74);
                check_hlds__det_analysis__det_infer_goal_10_p_0(transform_hlds__pd_util__STATE_VARIABLE_Goal_50_50, &transform_hlds__pd_util__STATE_VARIABLE_Goal_52_52, transform_hlds__pd_util__InstMap_74, transform_hlds__pd_util__SolnContext_65, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__pd_util__Var_75, &transform_hlds__pd_util__Var_76, transform_hlds__pd_util__DetInfo0_73, &transform_hlds__pd_util__DetInfo_77);
                check_hlds__det_util__det_info_get_module_info_2_p_0(transform_hlds__pd_util__DetInfo_77, &transform_hlds__pd_util__ModuleInfo_78);
                transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_util__ModuleInfo_78, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_51_51, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_53_53);
                check_hlds__det_util__det_info_get_error_specs_2_p_0(transform_hlds__pd_util__DetInfo_77, &transform_hlds__pd_util__Specs_79);
                hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_util__ModuleInfo_78, &transform_hlds__pd_util__Globals_80);
                check_hlds__det_report__disable_det_warnings_3_p_0(&transform_hlds__pd_util___OptionsToRestore_81, transform_hlds__pd_util__Globals_80, &transform_hlds__pd_util__GlobalsToUse_82);
                transform_hlds__pd_util__ContainsErrors_83 = parse_tree__error_util__contains_errors_2_f_0(transform_hlds__pd_util__GlobalsToUse_82, transform_hlds__pd_util__Specs_79);
                {
                  transform_hlds__pd_util__Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_89, 0) = ((MR_Box) (&transform_hlds__pd_util_scalar_common_3[1]));
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_89, 1) = ((MR_Box) (transform_hlds__pd_util__propagate_constraints_4_p_0_1));
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_89, 3) = ((MR_Box) (transform_hlds__pd_util__ContainsErrors_83));
                  MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_89, 4) = ((MR_Box) ((MR_Integer) 0));
                }
                mercury__require__expect_4_p_0(transform_hlds__pd_util__Var_89, (MR_String) "transform_hlds.pd_util", (MR_String) "predicate \140transform_hlds.pd_util.rerun_det_analysis\'/4", (MR_String) "determinism errors");
                check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, transform_hlds__pd_util__Globals_8, &transform_hlds__pd_util__SimplifyTasks_28);
                transform_hlds__pd_util__pd_simplify_goal_5_p_0(transform_hlds__pd_util__SimplifyTasks_28, transform_hlds__pd_util__STATE_VARIABLE_Goal_52_52, transform_hlds__pd_util__STATE_VARIABLE_Goal_30, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_53_53, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_32);
              }
              break;
          }
        }
        break;
    }
  }
}

void MR_CALL 
transform_hlds__pd_util__pd_recompute_instmap_delta_4_p_0(
  MR_Word transform_hlds__pd_util__Goal0_5,
  MR_Word * transform_hlds__pd_util__Goal_6,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_14,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_PDInfo_15)
{
  {
    MR_Word transform_hlds__pd_util__ModuleInfo0_8;
    MR_Word transform_hlds__pd_util__InstMap_9;
    MR_Word transform_hlds__pd_util__ProcInfo_10;
    MR_Word transform_hlds__pd_util__VarTypes_11;
    MR_Word transform_hlds__pd_util__InstVarSet_12;
    MR_Word transform_hlds__pd_util__ModuleInfo_13;

    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_14, &transform_hlds__pd_util__ModuleInfo0_8);
    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_14, &transform_hlds__pd_util__InstMap_9);
    transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_14, &transform_hlds__pd_util__ProcInfo_10);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_util__ProcInfo_10, &transform_hlds__pd_util__VarTypes_11);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__pd_util__ProcInfo_10, &transform_hlds__pd_util__InstVarSet_12);
    check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, transform_hlds__pd_util__Goal0_5, transform_hlds__pd_util__Goal_6, transform_hlds__pd_util__VarTypes_11, transform_hlds__pd_util__InstVarSet_12, transform_hlds__pd_util__InstMap_9, transform_hlds__pd_util__ModuleInfo0_8, &transform_hlds__pd_util__ModuleInfo_13);
    transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_util__ModuleInfo_13, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_14, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_15);
  }
}

void MR_CALL 
transform_hlds__pd_util__pd_requantify_goal_5_p_0(
  MR_Word transform_hlds__pd_util__NonLocals_6,
  MR_Word transform_hlds__pd_util__Goal0_7,
  MR_Word * transform_hlds__pd_util__Goal_8,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_18,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_PDInfo_19)
{
  {
    MR_Word transform_hlds__pd_util__VarSet0_11;
    MR_Word transform_hlds__pd_util__VarTypes0_12;
    MR_Word transform_hlds__pd_util__RttiVarMaps0_13;
    MR_Word transform_hlds__pd_util__VarSet_15;
    MR_Word transform_hlds__pd_util__VarTypes_16;
    MR_Word transform_hlds__pd_util__RttiVarMaps_17;
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20;
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_22_22;
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_23_23;
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_24_24;
    MR_Word transform_hlds__pd_util__Var_14;

    transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_18, &transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__pd_util__VarSet0_11);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__pd_util__VarTypes0_12);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__pd_util__RttiVarMaps0_13);
    hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 1, transform_hlds__pd_util__NonLocals_6, &transform_hlds__pd_util__Var_14, transform_hlds__pd_util__Goal0_7, transform_hlds__pd_util__Goal_8, transform_hlds__pd_util__VarSet0_11, &transform_hlds__pd_util__VarSet_15, transform_hlds__pd_util__VarTypes0_12, &transform_hlds__pd_util__VarTypes_16, transform_hlds__pd_util__RttiVarMaps0_13, &transform_hlds__pd_util__RttiVarMaps_17);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__pd_util__VarSet_15, transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_22_22);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__pd_util__VarTypes_16, transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_22_22, &transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_23_23);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__pd_util__RttiVarMaps_17, transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_23_23, &transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_24_24);
    transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__pd_util__STATE_VARIABLE_ProcInfo_24_24, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_18, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_19);
  }
}

void MR_CALL 
transform_hlds__pd_util__pd_simplify_goal_5_p_0(
  MR_Word transform_hlds__pd_util__SimplifyTasks_6,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_Goal_0_17,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_Goal_18,
  MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_19,
  MR_Word * transform_hlds__pd_util__STATE_VARIABLE_PDInfo_20)
{
  {
    MR_Word transform_hlds__pd_util__ModuleInfo0_9;
    MR_Word transform_hlds__pd_util__PredId_10;
    MR_Integer transform_hlds__pd_util__ProcId_11;
    MR_Word transform_hlds__pd_util__ProcInfo0_12;
    MR_Word transform_hlds__pd_util__InstMap0_13;
    MR_Word transform_hlds__pd_util__ModuleInfo_14;
    MR_Word transform_hlds__pd_util__ProcInfo_15;
    MR_Integer transform_hlds__pd_util__CostDelta_16;
    MR_Word transform_hlds__pd_util__Var_21;
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_23_23;
    MR_Word transform_hlds__pd_util__STATE_VARIABLE_PDInfo_24_24;

    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_19, &transform_hlds__pd_util__ModuleInfo0_9);
    transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_19, &transform_hlds__pd_util__Var_21);
    transform_hlds__pd_util__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_21, (MR_Integer) 0)));
    transform_hlds__pd_util__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_util__Var_21, (MR_Integer) 1)));
    transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_19, &transform_hlds__pd_util__ProcInfo0_12);
    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_19, &transform_hlds__pd_util__InstMap0_13);
    check_hlds__simplify__simplify_proc__simplify_goal_update_vars_in_proc_11_p_0(transform_hlds__pd_util__SimplifyTasks_6, transform_hlds__pd_util__ModuleInfo0_9, &transform_hlds__pd_util__ModuleInfo_14, transform_hlds__pd_util__PredId_10, transform_hlds__pd_util__ProcId_11, transform_hlds__pd_util__ProcInfo0_12, &transform_hlds__pd_util__ProcInfo_15, transform_hlds__pd_util__InstMap0_13, transform_hlds__pd_util__STATE_VARIABLE_Goal_0_17, transform_hlds__pd_util__STATE_VARIABLE_Goal_18, &transform_hlds__pd_util__CostDelta_16);
    transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_util__ModuleInfo_14, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_0_19, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_23_23);
    transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__pd_util__ProcInfo_15, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_23_23, &transform_hlds__pd_util__STATE_VARIABLE_PDInfo_24_24);
    transform_hlds__pd_info__pd_info_incr_cost_delta_3_p_0(transform_hlds__pd_util__CostDelta_16, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_24_24, transform_hlds__pd_util__STATE_VARIABLE_PDInfo_20);
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util__goal_get_calls_2_p_0_1(
  MR_Box transform_hlds__pd_util__closure_arg,
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box * transform_hlds__pd_util__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Box transform_hlds__pd_util__closure = transform_hlds__pd_util__closure_arg;
    MR_Word transform_hlds__pd_util__conv0_LambdaHeadVar__2_17;

    transform_hlds__pd_util__succeeded = transform_hlds__pd_util__IntroducedFrom__pred__goal_get_calls__193__1_2_p_0(((MR_Word) transform_hlds__pd_util__wrapper_arg_1), &transform_hlds__pd_util__conv0_LambdaHeadVar__2_17);
    if (transform_hlds__pd_util__succeeded)
    {
      *transform_hlds__pd_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_util__conv0_LambdaHeadVar__2_17));
      transform_hlds__pd_util__succeeded = MR_TRUE;
    }
    return transform_hlds__pd_util__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_util__goal_get_calls_2_p_0(
  MR_Word transform_hlds__pd_util__Goal0_3,
  MR_Word * transform_hlds__pd_util__CalledPreds_4)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;
    MR_Word transform_hlds__pd_util__GoalList_5;

    hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__pd_util__Goal0_3, &transform_hlds__pd_util__GoalList_5);
    mercury__list__filter_map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_util_scalar_common_2[4], transform_hlds__pd_util__GoalList_5, transform_hlds__pd_util__CalledPreds_4);
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____expansions_0_0_10001(
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box transform_hlds__pd_util__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;

    transform_hlds__pd_util__succeeded = transform_hlds__pd_util____Unify____expansions_0_0(((MR_Word) transform_hlds__pd_util__wrapper_arg_1), ((MR_Word) transform_hlds__pd_util__wrapper_arg_2));
    return transform_hlds__pd_util__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_util____Compare____expansions_0_0_10001(
  MR_Box * transform_hlds__pd_util__wrapper_arg_1,
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
  MR_Box transform_hlds__pd_util__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_util__conv0_HeadVar__1_1;

    transform_hlds__pd_util____Compare____expansions_0_0(&transform_hlds__pd_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_util__wrapper_arg_2), ((MR_Word) transform_hlds__pd_util__wrapper_arg_3));
    *transform_hlds__pd_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_util____Unify____pd_var_info_0_0_10001(
  MR_Box transform_hlds__pd_util__wrapper_arg_1,
  MR_Box transform_hlds__pd_util__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_util__succeeded;

    transform_hlds__pd_util__succeeded = transform_hlds__pd_util____Unify____pd_var_info_0_0(((MR_Word) transform_hlds__pd_util__wrapper_arg_1), ((MR_Word) transform_hlds__pd_util__wrapper_arg_2));
    return transform_hlds__pd_util__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_util____Compare____pd_var_info_0_0_10001(
  MR_Box * transform_hlds__pd_util__wrapper_arg_1,
  MR_Box transform_hlds__pd_util__wrapper_arg_2,
  MR_Box transform_hlds__pd_util__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_util__conv0_HeadVar__1_1;

    transform_hlds__pd_util____Compare____pd_var_info_0_0(&transform_hlds__pd_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_util__wrapper_arg_2), ((MR_Word) transform_hlds__pd_util__wrapper_arg_3));
    *transform_hlds__pd_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_util__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__pd_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.pd_util. */
