/*
** Automatically generated from `deforest.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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


/* :- module transform_hlds.deforest. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__deforest__init
ENDINIT
*/

#include "transform_hlds.deforest.mih"


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
#include "check_hlds.common.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_analysis.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
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
#include "hlds.passes_aux.mih"
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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.inlining.mih"
#include "transform_hlds.pd_cost.mih"
#include "transform_hlds.pd_debug.mih"
#include "transform_hlds.pd_info.mih"
#include "transform_hlds.pd_term.mih"
#include "transform_hlds.pd_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1680 "deforest.m"
struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s {
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2;
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3;
#line 1684 "deforest.m"
  MR_bool transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded;
#line 1686 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23;
#line 1688 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__V_32_32;
#line 1725 "deforest.m"
  jmp_buf transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0;
#line 1725 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_41;
#line 1724 "deforest.m"
  MR_Box transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_41;
#line 1680 "deforest.m"
};

#line 1680 "deforest.m"
struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s {
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2;
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3;
#line 1684 "deforest.m"
  MR_bool transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded;
#line 1686 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23;
#line 1688 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__V_32_32;
#line 1712 "deforest.m"
  jmp_buf transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0;
#line 1712 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_41;
#line 1711 "deforest.m"
  MR_Box transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_41;
#line 1680 "deforest.m"
};

#line 1873 "deforest.m"
struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s {
#line 1873 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10;
#line 1873 "deforest.m"
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11;
#line 1873 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12;
#line 1873 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14;
#line 1878 "deforest.m"
  MR_bool transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded;
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_86_86;
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18;
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19;
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20;
#line 1878 "deforest.m"
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29;
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__CallerMarkers_30;
#line 1897 "deforest.m"
  jmp_buf transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0;
#line 1897 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_91_91;
#line 1897 "deforest.m"
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_36;
#line 1897 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_37;
#line 1897 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_38;
#line 1897 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__InlinePromisedPure_40;
#line 1897 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_42;
#line 1897 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_43;
#line 1897 "deforest.m"
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_44;
#line 1897 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__V_54_54;
#line 1897 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__V_55_55;
#line 1897 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__V_90_90;
#line 1899 "deforest.m"
  MR_Box transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_36;
#line 1873 "deforest.m"
};

#line 852 "deforest.m"
struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s {
#line 852 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7;
#line 852 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8;
#line 852 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9;
#line 856 "deforest.m"
  MR_bool transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded;
#line 856 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredInfo_12;
#line 856 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14;
#line 856 "deforest.m"
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19;
#line 856 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_20;
#line 886 "deforest.m"
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_0;
#line 886 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_23;
#line 886 "deforest.m"
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_24;
#line 886 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_36;
#line 886 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_37;
#line 886 "deforest.m"
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_38;
#line 913 "deforest.m"
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1;
#line 913 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_40;
#line 913 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__InlinePromisedPure_48;
#line 913 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CallerMarkers_49;
#line 913 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_97;
#line 913 "deforest.m"
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_98;
#line 946 "deforest.m"
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2;
#line 946 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50;
#line 946 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_52;
#line 943 "deforest.m"
  MR_Box transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_50;
#line 960 "deforest.m"
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3;
#line 960 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_53;
#line 960 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_54;
#line 961 "deforest.m"
  MR_Box transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_54;
#line 852 "deforest.m"
};

#line 808 "deforest.m"
struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s {
#line 811 "deforest.m"
  MR_bool transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded;
#line 811 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9;
#line 811 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10;
#line 811 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11;
#line 833 "deforest.m"
  jmp_buf transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0;
#line 833 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_60_60;
#line 833 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_35;
#line 833 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36;
#line 833 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_38;
#line 833 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_39;
#line 833 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_40;
#line 833 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_41;
#line 834 "deforest.m"
  MR_Box transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_36;
#line 808 "deforest.m"
};


#line 338 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 341 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 344 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__deforest__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 347 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

#line 350 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 353 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 356 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 359 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__deforest__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 362 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 365 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 368 "transform_hlds.deforest.c"
static const MR_VA_TypeInfo_Struct4 transform_hlds__deforest____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0bool__type_ctor_info_bool_0hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 371 "transform_hlds.deforest.c"
static const MR_PseudoTypeInfo transform_hlds__deforest__transform_hlds__deforest__field_types_deforest_info_0_0[6];

#line 374 "transform_hlds.deforest.c"
static const MR_DuFunctorDesc transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0;

#line 377 "transform_hlds.deforest.c"
static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_stag_ordered_deforest_info_0_0[1];

#line 380 "transform_hlds.deforest.c"
static const MR_DuPtagLayout transform_hlds__deforest__transform_hlds__deforest__du_ptag_ordered_deforest_info_0[1];

#line 383 "transform_hlds.deforest.c"
static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_name_ordered_deforest_info_0[1];

#line 386 "transform_hlds.deforest.c"
static const MR_Integer transform_hlds__deforest__transform_hlds__deforest__functor_number_map_deforest_info_0[1];

#line 389 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0_10001(
#line 392 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 394 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2);

#line 397 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0_10001(
#line 400 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 402 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 404 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3);

#line 407 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0_10001(
#line 410 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 412 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2);

#line 415 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0_10001(
#line 418 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 420 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 422 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3);

#line 425 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0_10001(
#line 428 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 430 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2);

#line 433 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0_10001(
#line 436 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 438 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 440 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3);

#line 2150 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
#line 2150 "deforest.m"
  MR_Integer transform_hlds__deforest__Size_6,
#line 2150 "deforest.m"
  MR_Integer transform_hlds__deforest__OriginalCost_7,
#line 2150 "deforest.m"
  MR_Integer transform_hlds__deforest__CostDelta_8);

#line 1017 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
#line 1017 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_9,
#line 1017 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_10,
#line 1017 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_11,
#line 1017 "deforest.m"
  MR_Word * transform_hlds__deforest__MaybeGoal_12,
#line 1017 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15,
#line 1017 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_16);

#line 1725 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_1(
#line 1725 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1724 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_3(
#line 1724 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1725 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_2(
#line 1725 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1725 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_4(
#line 1725 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1680 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0(
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__ModuleInfo_2,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__FullyStrict_3,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
#line 1680 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__EndGoal_7,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__8_8,
#line 1680 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__9_9);

#line 1712 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_1(
#line 1712 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1711 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_3(
#line 1711 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1712 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_2(
#line 1712 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1712 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_4(
#line 1712 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1680 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0(
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__ModuleInfo_2,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__FullyStrict_3,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
#line 1680 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__EndGoal_7,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__8_8,
#line 1680 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__9_9);

#line 1627 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_p_0(
#line 1627 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_29,
#line 1627 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_30,
#line 1627 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_31);

#line 631 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__631__1_3_p_0(
#line 631 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_22,
#line 631 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_23,
#line 631 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_24);

#line 492 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__492__1_1_p_0(
#line 492 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_46);

#line 145 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__deforestation__145__1_2_p_0(
#line 145 "deforest.m"
  MR_Word transform_hlds__deforest__FoundErrors_29,
#line 145 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_53);

#line 1902 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____list__list_1_1(
#line 1902 "deforest.m"
  MR_Word transform_hlds__deforest__TypeInfo_for_T_11,
#line 1902 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 1902 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2);

#line 566 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0(
#line 566 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 566 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 566 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3);

#line 566 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0(
#line 566 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 566 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2);

#line 1698 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0(
#line 1698 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 1698 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 1698 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3);

#line 1698 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0(
#line 1698 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 1698 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2);

#line 530 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0(
#line 530 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 530 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 530 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3);

#line 530 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0(
#line 530 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 530 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2);

#line 2133 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_1_p_0(
#line 2133 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1);

#line 2126 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_list_1_p_0(
#line 2126 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1);

#line 1963 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__unfold_call_10_p_0(
#line 1963 "deforest.m"
  MR_Word transform_hlds__deforest__CheckImprovement_11,
#line 1963 "deforest.m"
  MR_Word transform_hlds__deforest__CheckVars_12,
#line 1963 "deforest.m"
  MR_Word transform_hlds__deforest__PredId_13,
#line 1963 "deforest.m"
  MR_Integer transform_hlds__deforest__ProcId_14,
#line 1963 "deforest.m"
  MR_Word transform_hlds__deforest__Args_15,
#line 1963 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_16,
#line 1963 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_17,
#line 1963 "deforest.m"
  MR_Word * transform_hlds__deforest__Optimized_18,
#line 1963 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79,
#line 1963 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_80);

#line 1897 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_1(
#line 1897 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1899 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_3(
#line 1899 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1897 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_2(
#line 1897 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1897 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_4(
#line 1897 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1873 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0(
#line 1873 "deforest.m"
  MR_Word transform_hlds__deforest__PredId_10,
#line 1873 "deforest.m"
  MR_Integer transform_hlds__deforest__ProcId_11,
#line 1873 "deforest.m"
  MR_Word transform_hlds__deforest__Args_12,
#line 1873 "deforest.m"
  MR_Word transform_hlds__deforest__SymName_13,
#line 1873 "deforest.m"
  MR_Word transform_hlds__deforest__BuiltinState_14,
#line 1873 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_15,
#line 1873 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_16,
#line 1873 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49,
#line 1873 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_50);

#line 1851 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0_1(
#line 1851 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 1851 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1851 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1851 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 1842 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0(
#line 1842 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_10,
#line 1842 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_11,
#line 1842 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend0_12,
#line 1842 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals0_13,
#line 1842 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrBranch_14,
#line 1842 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_15,
#line 1842 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_16,
#line 1842 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30,
#line 1842 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_31);

#line 1824 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_to_cases_10_p_0(
#line 1824 "deforest.m"
  MR_Word transform_hlds__deforest__Var_1,
#line 1824 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_2,
#line 1824 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend_3,
#line 1824 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_4,
#line 1824 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrCase_5,
#line 1824 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_6,
#line 1824 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__7_7,
#line 1824 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__8_8,
#line 1824 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9,
#line 1824 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_10);

#line 1809 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(
#line 1809 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_1,
#line 1809 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend_2,
#line 1809 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_3,
#line 1809 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrBranch_4,
#line 1809 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_5,
#line 1809 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__6_6,
#line 1809 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__7_7,
#line 1809 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
#line 1809 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);

#line 1736 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__push_goal_into_goal_8_p_0(
#line 1736 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_9,
#line 1736 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_10,
#line 1736 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_11,
#line 1736 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_12,
#line 1736 "deforest.m"
  MR_Word transform_hlds__deforest__LaterGoal_13,
#line 1736 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_14,
#line 1736 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87,
#line 1736 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_88);

#line 1654 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__reorder_conj_5_p_0(
#line 1654 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo0_6,
#line 1654 "deforest.m"
  MR_Word * transform_hlds__deforest__DeforestInfo_7,
#line 1654 "deforest.m"
  MR_Word * transform_hlds__deforest__BeforeIrrelevant_8,
#line 1654 "deforest.m"
  MR_Word * transform_hlds__deforest__AfterIrrelevant_9,
#line 1654 "deforest.m"
  MR_Word transform_hlds__deforest__PDInfo_10);

#line 1627 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0_1(
#line 1627 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 1627 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1627 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1627 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 1619 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(
#line 1619 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_0_27,
#line 1619 "deforest.m"
  MR_Word transform_hlds__deforest__RevBeforeGoals_11,
#line 1619 "deforest.m"
  MR_Word transform_hlds__deforest__BeforeIrrelevant_12,
#line 1619 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_13,
#line 1619 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_14,
#line 1619 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_15,
#line 1619 "deforest.m"
  MR_Word transform_hlds__deforest__AfterIrrelevant_16,
#line 1619 "deforest.m"
  MR_Word transform_hlds__deforest__AfterGoals_17,
#line 1619 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_28);

#line 1605 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(
#line 1605 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals0_8,
#line 1605 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_9,
#line 1605 "deforest.m"
  MR_Word transform_hlds__deforest__RevBeforeGoals_10,
#line 1605 "deforest.m"
  MR_Word transform_hlds__deforest__BeforeIrrelevant_11,
#line 1605 "deforest.m"
  MR_Word transform_hlds__deforest__AfterIrrelevant_12,
#line 1605 "deforest.m"
  MR_Word transform_hlds__deforest__AfterGoals0_13,
#line 1605 "deforest.m"
  MR_Word * transform_hlds__deforest__SubConjNonLocals_14);

#line 981 "deforest.m"
static MR_Word MR_CALL 
transform_hlds__deforest__is_improvement_worth_while_4_f_0(
#line 981 "deforest.m"
  MR_Word transform_hlds__deforest__PDInfo_6,
#line 981 "deforest.m"
  MR_Word transform_hlds__deforest__Optimized0_7,
#line 981 "deforest.m"
  MR_Integer transform_hlds__deforest__CostDelta0_8,
#line 981 "deforest.m"
  MR_Integer transform_hlds__deforest__SizeDelta0_9);

#line 886 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_1(
#line 886 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 886 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_2(
#line 886 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 886 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_3(
#line 886 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 913 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_4(
#line 913 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 913 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_5(
#line 913 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 913 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_6(
#line 913 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 946 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_7(
#line 946 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 946 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_8(
#line 946 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 943 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_9(
#line 943 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 946 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_10(
#line 946 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 960 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_11(
#line 960 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 960 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_12(
#line 960 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 961 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_13(
#line 961 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 960 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_14(
#line 960 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 852 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0(
#line 852 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_7,
#line 852 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_8,
#line 852 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_9,
#line 852 "deforest.m"
  MR_Word * transform_hlds__deforest__ShouldTry_10,
#line 852 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56,
#line 852 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_57);

#line 833 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_1(
#line 833 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 833 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_2(
#line 833 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 834 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_3(
#line 834 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 833 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_4(
#line 833 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 808 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0(
#line 808 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_5,
#line 808 "deforest.m"
  MR_Word * transform_hlds__deforest__ShouldTry_6,
#line 808 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_42,
#line 808 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_43);

#line 785 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_2(
#line 785 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 785 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 785 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 785 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 672 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_1(
#line 672 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 672 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 672 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 672 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 645 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0(
#line 645 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_10,
#line 645 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo0_11,
#line 645 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82,
#line 645 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_83,
#line 645 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84,
#line 645 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85,
#line 645 "deforest.m"
  MR_Word * transform_hlds__deforest__Optimized_14,
#line 645 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86,
#line 645 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_87);

#line 631 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0_1(
#line 631 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 631 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 631 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 631 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 592 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0(
#line 592 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_7,
#line 592 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierBranchInfo_8,
#line 592 "deforest.m"
  MR_Word transform_hlds__deforest__RevBetweenGoals0_9,
#line 592 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 592 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_12,
#line 592 "deforest.m"
  MR_Word * transform_hlds__deforest__DeforestInfo_13);

#line 533 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_conj_6_p_0(
#line 533 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 533 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_2,
#line 533 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3,
#line 533 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__4_4,
#line 533 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
#line 533 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6);

#line 492 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0_1(
#line 492 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 492 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1);

#line 476 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0(
#line 476 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 476 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_2,
#line 476 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3,
#line 476 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_4,
#line 476 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
#line 476 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6);

#line 428 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__compute_goal_infos_4_p_0(
#line 428 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 428 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
#line 428 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
#line 428 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);

#line 407 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(
#line 407 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 407 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 407 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_3,
#line 407 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
#line 407 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5);

#line 388 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_cases_5_p_0(
#line 388 "deforest.m"
  MR_Word transform_hlds__deforest__Var_1,
#line 388 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 388 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_3,
#line 388 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
#line 388 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5);

#line 376 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_disj_4_p_0(
#line 376 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 376 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
#line 376 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
#line 376 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);

#line 278 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_goal_expr_6_p_0(
#line 278 "deforest.m"
  MR_Word transform_hlds__deforest__GoalExpr0_7,
#line 278 "deforest.m"
  MR_Word * transform_hlds__deforest__GoalExpr_8,
#line 278 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60,
#line 278 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61,
#line 278 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62,
#line 278 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);

#line 270 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_goal_4_p_0(
#line 270 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_5,
#line 270 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_6,
#line 270 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_12,
#line 270 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_13);

#line 189 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_proc_deltas_5_p_0(
#line 189 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 189 "deforest.m"
  MR_Integer * transform_hlds__deforest__CostDelta_8,
#line 189 "deforest.m"
  MR_Integer * transform_hlds__deforest__SizeDelta_9,
#line 189 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_28,
#line 189 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_29);

#line 184 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_proc_3_p_0(
#line 184 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_4,
#line 184 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
#line 184 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);

#line 173 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(
#line 173 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_8,
#line 173 "deforest.m"
  MR_Word transform_hlds__deforest__ProcInfo_9,
#line 173 "deforest.m"
  MR_Word * transform_hlds__deforest__ProcInfo_3,
#line 173 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_15,
#line 173 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_16,
#line 173 "deforest.m"
  MR_Word transform_hlds__deforest__UnivProcArgInfo0_11,
#line 173 "deforest.m"
  MR_Word * transform_hlds__deforest__UnivProcArgInfo_12);

#line 151 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(
#line 151 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_4,
#line 151 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_11,
#line 151 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_12);

#line 145 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_4(
#line 145 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg);

#line 137 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_3(
#line 137 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 137 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 137 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 137 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 121 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_2(
#line 121 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 121 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 121 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 121 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 101 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_1(
#line 101 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 101 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 101 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 101 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3,
#line 101 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_4,
#line 101 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_5,
#line 101 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_6,
#line 101 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_7);


static /* final */ const MR_Box transform_hlds__deforest_scalar_common_1[8][2];

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_2[13][3];

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_3[6][6];

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_4[1][10];

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_5[1][5];

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_6[1][4];




static /* final */ const MR_Box transform_hlds__deforest_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1)),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_2[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_2[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_1[3]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_1[4]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__deforest__deforestation_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__deforest__deforestation_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__deforest__deforestation_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__deforest__propagate_conj_constraints_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__deforest__search_for_deforest_goal_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_3[4])),
    ((MR_Box) (transform_hlds__deforest__handle_deforestation_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__deforest__handle_deforestation_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_3[5])),
    ((MR_Box) (transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_3[4])),
    ((MR_Box) (transform_hlds__deforest__append_goal_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_3[6][6] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_1[7]))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0)),
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__deforest__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__deforest__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__deforest__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0)),
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__deforest__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__deforest__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_6[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
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



#line 1598 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1606 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1614 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__deforest__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1623 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1631 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1639 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1,
  {
    (MR_TypeInfo) &transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1647 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1655 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__deforest__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_TypeInfo) &transform_hlds__deforest__maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1664 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__deforest__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1672 "transform_hlds.deforest.c"
const MR_TypeCtorInfo_Struct transform_hlds__deforest__transform_hlds__deforest__type_ctor_info_annotated_conj_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__deforest____Unify____annotated_conj_0_0_10001)),
  ((MR_Box) (transform_hlds__deforest____Compare____annotated_conj_0_0_10001)),
  (MR_String) "transform_hlds.deforest",
  (MR_String) "annotated_conj",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__deforest__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1693 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1701 "transform_hlds.deforest.c"
static const MR_VA_TypeInfo_Struct4 transform_hlds__deforest____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0bool__type_ctor_info_bool_0hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_TypeInfo) &transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1713 "transform_hlds.deforest.c"
const MR_TypeCtorInfo_Struct transform_hlds__deforest__transform_hlds__deforest__type_ctor_info_can_move_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__deforest____Unify____can_move_0_0_10001)),
  ((MR_Box) (transform_hlds__deforest____Compare____can_move_0_0_10001)),
  (MR_String) "transform_hlds.deforest",
  (MR_String) "can_move",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__deforest____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0bool__type_ctor_info_bool_0hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1734 "transform_hlds.deforest.c"
static const MR_PseudoTypeInfo transform_hlds__deforest__transform_hlds__deforest__field_types_deforest_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

#line 1744 "transform_hlds.deforest.c"
static const MR_DuFunctorDesc transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0 = {
  (MR_String) "deforest_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__deforest__transform_hlds__deforest__field_types_deforest_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 1759 "transform_hlds.deforest.c"
static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_stag_ordered_deforest_info_0_0[1] = {
  &transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0
};

#line 1764 "transform_hlds.deforest.c"
static const MR_DuPtagLayout transform_hlds__deforest__transform_hlds__deforest__du_ptag_ordered_deforest_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__deforest__transform_hlds__deforest__du_stag_ordered_deforest_info_0_0
  }
};

#line 1773 "transform_hlds.deforest.c"
static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_name_ordered_deforest_info_0[1] = {
  &transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0
};

#line 1778 "transform_hlds.deforest.c"
static const MR_Integer transform_hlds__deforest__transform_hlds__deforest__functor_number_map_deforest_info_0[1] = {
  (MR_Integer) 0
};

#line 1783 "transform_hlds.deforest.c"
const MR_TypeCtorInfo_Struct transform_hlds__deforest__transform_hlds__deforest__type_ctor_info_deforest_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__deforest____Unify____deforest_info_0_0_10001)),
  ((MR_Box) (transform_hlds__deforest____Compare____deforest_info_0_0_10001)),
  (MR_String) "transform_hlds.deforest",
  (MR_String) "deforest_info",
  {
    transform_hlds__deforest__transform_hlds__deforest__du_name_ordered_deforest_info_0
  },
  {
    transform_hlds__deforest__transform_hlds__deforest__du_ptag_ordered_deforest_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__deforest__transform_hlds__deforest__functor_number_map_deforest_info_0
};

#line 1804 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0_10001(
#line 1807 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1809 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2)
#line 1811 "transform_hlds.deforest.c"
{
#line 1813 "transform_hlds.deforest.c"
  {
#line 1815 "transform_hlds.deforest.c"
    MR_bool transform_hlds__deforest__succeeded;

#line 1818 "transform_hlds.deforest.c"
    {
#line 1820 "transform_hlds.deforest.c"
      transform_hlds__deforest__succeeded = transform_hlds__deforest____Unify____annotated_conj_0_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2));
    }
#line 1823 "transform_hlds.deforest.c"
    return transform_hlds__deforest__succeeded;
#line 1825 "transform_hlds.deforest.c"
  }
#line 1827 "transform_hlds.deforest.c"
}

#line 1830 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0_10001(
#line 1833 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 1835 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1837 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3)
#line 1839 "transform_hlds.deforest.c"
{
#line 1841 "transform_hlds.deforest.c"
  {
#line 1843 "transform_hlds.deforest.c"
    MR_Word transform_hlds__deforest__conv0_HeadVar__1_1;

#line 1846 "transform_hlds.deforest.c"
    {
#line 1848 "transform_hlds.deforest.c"
      transform_hlds__deforest____Compare____annotated_conj_0_0(&transform_hlds__deforest__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__deforest__wrapper_arg_2), ((MR_Word) transform_hlds__deforest__wrapper_arg_3));
    }
#line 1851 "transform_hlds.deforest.c"
    *transform_hlds__deforest__wrapper_arg_1 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__1_1));
#line 1853 "transform_hlds.deforest.c"
  }
#line 1855 "transform_hlds.deforest.c"
}

#line 1858 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0_10001(
#line 1861 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1863 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2)
#line 1865 "transform_hlds.deforest.c"
{
#line 1867 "transform_hlds.deforest.c"
  {
#line 1869 "transform_hlds.deforest.c"
    MR_bool transform_hlds__deforest__succeeded;

#line 1872 "transform_hlds.deforest.c"
    {
#line 1874 "transform_hlds.deforest.c"
      transform_hlds__deforest__succeeded = transform_hlds__deforest____Unify____can_move_0_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2));
    }
#line 1877 "transform_hlds.deforest.c"
    return transform_hlds__deforest__succeeded;
#line 1879 "transform_hlds.deforest.c"
  }
#line 1881 "transform_hlds.deforest.c"
}

#line 1884 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0_10001(
#line 1887 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 1889 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1891 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3)
#line 1893 "transform_hlds.deforest.c"
{
#line 1895 "transform_hlds.deforest.c"
  {
#line 1897 "transform_hlds.deforest.c"
    MR_Word transform_hlds__deforest__conv0_HeadVar__1_1;

#line 1900 "transform_hlds.deforest.c"
    {
#line 1902 "transform_hlds.deforest.c"
      transform_hlds__deforest____Compare____can_move_0_0(&transform_hlds__deforest__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__deforest__wrapper_arg_2), ((MR_Word) transform_hlds__deforest__wrapper_arg_3));
    }
#line 1905 "transform_hlds.deforest.c"
    *transform_hlds__deforest__wrapper_arg_1 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__1_1));
#line 1907 "transform_hlds.deforest.c"
  }
#line 1909 "transform_hlds.deforest.c"
}

#line 1912 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0_10001(
#line 1915 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1917 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2)
#line 1919 "transform_hlds.deforest.c"
{
#line 1921 "transform_hlds.deforest.c"
  {
#line 1923 "transform_hlds.deforest.c"
    MR_bool transform_hlds__deforest__succeeded;

#line 1926 "transform_hlds.deforest.c"
    {
#line 1928 "transform_hlds.deforest.c"
      transform_hlds__deforest__succeeded = transform_hlds__deforest____Unify____deforest_info_0_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2));
    }
#line 1931 "transform_hlds.deforest.c"
    return transform_hlds__deforest__succeeded;
#line 1933 "transform_hlds.deforest.c"
  }
#line 1935 "transform_hlds.deforest.c"
}

#line 1938 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0_10001(
#line 1941 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 1943 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1945 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3)
#line 1947 "transform_hlds.deforest.c"
{
#line 1949 "transform_hlds.deforest.c"
  {
#line 1951 "transform_hlds.deforest.c"
    MR_Word transform_hlds__deforest__conv0_HeadVar__1_1;

#line 1954 "transform_hlds.deforest.c"
    {
#line 1956 "transform_hlds.deforest.c"
      transform_hlds__deforest____Compare____deforest_info_0_0(&transform_hlds__deforest__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__deforest__wrapper_arg_2), ((MR_Word) transform_hlds__deforest__wrapper_arg_3));
    }
#line 1959 "transform_hlds.deforest.c"
    *transform_hlds__deforest__wrapper_arg_1 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__1_1));
#line 1961 "transform_hlds.deforest.c"
  }
#line 1963 "transform_hlds.deforest.c"
}

#line 2150 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
#line 2150 "deforest.m"
  MR_Integer transform_hlds__deforest__Size_6,
#line 2150 "deforest.m"
  MR_Integer transform_hlds__deforest__OriginalCost_7,
#line 2150 "deforest.m"
  MR_Integer transform_hlds__deforest__CostDelta_8)
#line 2150 "deforest.m"
{
#line 2156 "deforest.m"
  {
#line 2156 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded = (transform_hlds__deforest__Size_6 <= (MR_Integer) 5);

#line 2156 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 2155 "deforest.m"
      {
#line 2155 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__CostDelta_8 > (MR_Integer) 0);
#line 2155 "deforest.m"
      }
#line 2156 "deforest.m"
    else
#line 2157 "deforest.m"
      {
#line 2157 "deforest.m"
        MR_Integer transform_hlds__deforest__PercentChange_9;
#line 2157 "deforest.m"
        MR_Integer transform_hlds__deforest__V_12_12 = (transform_hlds__deforest__CostDelta_8 * (MR_Integer) 100);

#line 2157 "deforest.m"
        {
#line 2157 "deforest.m"
          transform_hlds__deforest__PercentChange_9 = mercury__int__f_47_47_2_f_0(transform_hlds__deforest__V_12_12, transform_hlds__deforest__OriginalCost_7);
        }
#line 2158 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__PercentChange_9 >= (MR_Integer) 5);
#line 2157 "deforest.m"
      }
#line 2156 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 2156 "deforest.m"
  }
#line 2150 "deforest.m"
}

#line 1017 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
#line 1017 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_9,
#line 1017 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_10,
#line 1017 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_11,
#line 1017 "deforest.m"
  MR_Word * transform_hlds__deforest__MaybeGoal_12,
#line 1017 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15,
#line 1017 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_16)
#line 1017 "deforest.m"
{
#line 1022 "deforest.m"
  while (MR_TRUE)
#line 1022 "deforest.m"
    {
#line 1022 "deforest.m"
      /* tailcall optimized into a loop */
#line 1022 "deforest.m"
      {
#line 1022 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;
#line 1022 "deforest.m"
        MR_Word transform_hlds__deforest__ShouldTry_14;
#line 1022 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;

#line 1023 "deforest.m"
        {
#line 1023 "deforest.m"
          transform_hlds__deforest__can_optimize_conj_6_p_0(transform_hlds__deforest__EarlierGoal_9, transform_hlds__deforest__BetweenGoals_10, transform_hlds__deforest__MaybeLaterGoal_11, &transform_hlds__deforest__ShouldTry_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17);
        }
#line 1029 "deforest.m"
        if ((transform_hlds__deforest__ShouldTry_14 == (MR_Integer) 0))
#line 1030 "deforest.m"
          {
#line 1031 "deforest.m"
            *transform_hlds__deforest__MaybeGoal_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1031 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;
#line 1030 "deforest.m"
          }
#line 1029 "deforest.m"
        else
#line 1027 "deforest.m"
          {
#line 1027 "deforest.m"
            /* direct tailcall eliminated */
#line 1027 "deforest.m"
            {
#line 1027 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_15 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;

#line 1027 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_15;
#line 1027 "deforest.m"
            }
#line 1027 "deforest.m"
            continue;
#line 1027 "deforest.m"
          }
#line 1022 "deforest.m"
      }
#line 1022 "deforest.m"
      break;
#line 1022 "deforest.m"
    }
#line 1017 "deforest.m"
}

#line 1725 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_1(
#line 1725 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1725 "deforest.m"
{
#line 1725 "deforest.m"
  {
#line 1725 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1725 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0, 1);
#line 1725 "deforest.m"
  }
#line 1725 "deforest.m"
}

#line 1724 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_3(
#line 1724 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1724 "deforest.m"
{
#line 1724 "deforest.m"
  {
#line 1724 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1724 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_41 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_41);
#line 1724 "deforest.m"
    {
#line 1724 "deforest.m"
      transform_hlds__deforest__move_goals__ho2_9_p_0_2(transform_hlds__deforest__env_ptr);
#line 1724 "deforest.m"
      return;
    }
#line 1724 "deforest.m"
  }
#line 1724 "deforest.m"
}

#line 1725 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_2(
#line 1725 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1725 "deforest.m"
{
#line 1725 "deforest.m"
  {
#line 1725 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1726 "deforest.m"
    {
#line 1726 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = transform_hlds__pd_util__pd_can_reorder_goals_4_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_41, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23);
    }
#line 1725 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded);
#line 1725 "deforest.m"
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded)
#line 1725 "deforest.m"
      {
#line 1725 "deforest.m"
        transform_hlds__deforest__move_goals__ho2_9_p_0_1(transform_hlds__deforest__env_ptr);
#line 1725 "deforest.m"
        return;
      }
#line 1725 "deforest.m"
  }
#line 1725 "deforest.m"
}

#line 1725 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_4(
#line 1725 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1725 "deforest.m"
{
#line 1725 "deforest.m"
  {
#line 1725 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1725 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0) == 0)
#line 1725 "deforest.m"
      {
#line 1725 "deforest.m"
        {
#line 1724 "deforest.m"
          {
#line 1724 "deforest.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_41, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__V_32_32, transform_hlds__deforest__move_goals__ho2_9_p_0_3, transform_hlds__deforest__env_ptr);
          }
#line 1725 "deforest.m"
        }
#line 1725 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = MR_FALSE;
#line 1725 "deforest.m"
      }
#line 1725 "deforest.m"
    else
#line 1725 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = MR_TRUE;
#line 1725 "deforest.m"
  }
#line 1725 "deforest.m"
}

#line 1680 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0(
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__ModuleInfo_2,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__FullyStrict_3,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
#line 1680 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__EndGoal_7,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__8_8,
#line 1680 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__9_9)
#line 1680 "deforest.m"
{
#line 1680 "deforest.m"
  {
#line 1680 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s transform_hlds__deforest__env;

#line 1680 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2 = transform_hlds__deforest__ModuleInfo_2;
#line 1680 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3 = transform_hlds__deforest__FullyStrict_3;
#line 1684 "deforest.m"
    while (MR_TRUE)
#line 1684 "deforest.m"
      {
#line 1684 "deforest.m"
        /* tailcall optimized into a loop */
#line 1684 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1684 "deforest.m"
          {
#line 1684 "deforest.m"
            *transform_hlds__deforest__HeadVar__9_9 = transform_hlds__deforest__HeadVar__8_8;
#line 1684 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
#line 1684 "deforest.m"
          }
#line 1684 "deforest.m"
        else
#line 1686 "deforest.m"
          {
#line 1686 "deforest.m"
            MR_Word transform_hlds__deforest__RevBetweenGoals0_24;
#line 1686 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;
#line 1686 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;

#line 1686 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 0)));
#line 1686 "deforest.m"
            transform_hlds__deforest__RevBetweenGoals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 1)));
#line 1688 "deforest.m"
            {
#line 1688 "deforest.m"
              MR_Word base;
#line 1688 "deforest.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1688 "deforest.m"
              (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__V_32_32 = base;
#line 1688 "deforest.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__EndGoal_7));
#line 1688 "deforest.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
#line 1688 "deforest.m"
            }
#line 1725 "deforest.m"
            {
#line 1725 "deforest.m"
              transform_hlds__deforest__move_goals__ho2_9_p_0_4(&transform_hlds__deforest__env);
            }
#line 1725 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded);
#line 1692 "deforest.m"
            if ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded)
#line 1691 "deforest.m"
              {
#line 1691 "deforest.m"
                {
#line 1691 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1691 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23));
#line 1691 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__8_8));
#line 1691 "deforest.m"
                }
#line 1691 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
#line 1691 "deforest.m"
              }
#line 1692 "deforest.m"
            else
#line 1693 "deforest.m"
              {
#line 1693 "deforest.m"
                {
#line 1693 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1693 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23));
#line 1693 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
#line 1693 "deforest.m"
                }
#line 1693 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = transform_hlds__deforest__HeadVar__8_8;
#line 1693 "deforest.m"
              }
#line 1695 "deforest.m"
            /* direct tailcall eliminated */
#line 1695 "deforest.m"
            {
#line 1695 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__4__tmp_copy_4 = transform_hlds__deforest__RevBetweenGoals0_24;
#line 1695 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;
#line 1695 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__8__tmp_copy_8 = transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;

#line 1695 "deforest.m"
              transform_hlds__deforest__HeadVar__8_8 = transform_hlds__deforest__HeadVar__8__tmp_copy_8;
#line 1695 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0__tmp_copy_5;
#line 1695 "deforest.m"
              transform_hlds__deforest__HeadVar__4_4 = transform_hlds__deforest__HeadVar__4__tmp_copy_4;
#line 1695 "deforest.m"
            }
#line 1695 "deforest.m"
            continue;
#line 1686 "deforest.m"
          }
#line 1684 "deforest.m"
        break;
#line 1684 "deforest.m"
      }
#line 1680 "deforest.m"
  }
#line 1680 "deforest.m"
}

#line 1712 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_1(
#line 1712 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1712 "deforest.m"
{
#line 1712 "deforest.m"
  {
#line 1712 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1712 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0, 1);
#line 1712 "deforest.m"
  }
#line 1712 "deforest.m"
}

#line 1711 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_3(
#line 1711 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1711 "deforest.m"
{
#line 1711 "deforest.m"
  {
#line 1711 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1711 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_41 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_41);
#line 1711 "deforest.m"
    {
#line 1711 "deforest.m"
      transform_hlds__deforest__move_goals__ho1_9_p_0_2(transform_hlds__deforest__env_ptr);
#line 1711 "deforest.m"
      return;
    }
#line 1711 "deforest.m"
  }
#line 1711 "deforest.m"
}

#line 1712 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_2(
#line 1712 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1712 "deforest.m"
{
#line 1712 "deforest.m"
  {
#line 1712 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1713 "deforest.m"
    {
#line 1713 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = transform_hlds__pd_util__pd_can_reorder_goals_4_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_41);
    }
#line 1712 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded);
#line 1712 "deforest.m"
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded)
#line 1712 "deforest.m"
      {
#line 1712 "deforest.m"
        transform_hlds__deforest__move_goals__ho1_9_p_0_1(transform_hlds__deforest__env_ptr);
#line 1712 "deforest.m"
        return;
      }
#line 1712 "deforest.m"
  }
#line 1712 "deforest.m"
}

#line 1712 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_4(
#line 1712 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1712 "deforest.m"
{
#line 1712 "deforest.m"
  {
#line 1712 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1712 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0) == 0)
#line 1712 "deforest.m"
      {
#line 1712 "deforest.m"
        {
#line 1711 "deforest.m"
          {
#line 1711 "deforest.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_41, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__V_32_32, transform_hlds__deforest__move_goals__ho1_9_p_0_3, transform_hlds__deforest__env_ptr);
          }
#line 1712 "deforest.m"
        }
#line 1712 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = MR_FALSE;
#line 1712 "deforest.m"
      }
#line 1712 "deforest.m"
    else
#line 1712 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = MR_TRUE;
#line 1712 "deforest.m"
  }
#line 1712 "deforest.m"
}

#line 1680 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0(
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__ModuleInfo_2,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__FullyStrict_3,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
#line 1680 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__EndGoal_7,
#line 1680 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__8_8,
#line 1680 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__9_9)
#line 1680 "deforest.m"
{
#line 1680 "deforest.m"
  {
#line 1680 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s transform_hlds__deforest__env;

#line 1680 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2 = transform_hlds__deforest__ModuleInfo_2;
#line 1680 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3 = transform_hlds__deforest__FullyStrict_3;
#line 1684 "deforest.m"
    while (MR_TRUE)
#line 1684 "deforest.m"
      {
#line 1684 "deforest.m"
        /* tailcall optimized into a loop */
#line 1684 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1684 "deforest.m"
          {
#line 1684 "deforest.m"
            *transform_hlds__deforest__HeadVar__9_9 = transform_hlds__deforest__HeadVar__8_8;
#line 1684 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
#line 1684 "deforest.m"
          }
#line 1684 "deforest.m"
        else
#line 1686 "deforest.m"
          {
#line 1686 "deforest.m"
            MR_Word transform_hlds__deforest__RevBetweenGoals0_24;
#line 1686 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;
#line 1686 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;

#line 1686 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 0)));
#line 1686 "deforest.m"
            transform_hlds__deforest__RevBetweenGoals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 1)));
#line 1688 "deforest.m"
            {
#line 1688 "deforest.m"
              MR_Word base;
#line 1688 "deforest.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1688 "deforest.m"
              (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__V_32_32 = base;
#line 1688 "deforest.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__EndGoal_7));
#line 1688 "deforest.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
#line 1688 "deforest.m"
            }
#line 1712 "deforest.m"
            {
#line 1712 "deforest.m"
              transform_hlds__deforest__move_goals__ho1_9_p_0_4(&transform_hlds__deforest__env);
            }
#line 1712 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded);
#line 1692 "deforest.m"
            if ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded)
#line 1691 "deforest.m"
              {
#line 1691 "deforest.m"
                {
#line 1691 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1691 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23));
#line 1691 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__8_8));
#line 1691 "deforest.m"
                }
#line 1691 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
#line 1691 "deforest.m"
              }
#line 1692 "deforest.m"
            else
#line 1693 "deforest.m"
              {
#line 1693 "deforest.m"
                {
#line 1693 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1693 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23));
#line 1693 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
#line 1693 "deforest.m"
                }
#line 1693 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = transform_hlds__deforest__HeadVar__8_8;
#line 1693 "deforest.m"
              }
#line 1695 "deforest.m"
            /* direct tailcall eliminated */
#line 1695 "deforest.m"
            {
#line 1695 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__4__tmp_copy_4 = transform_hlds__deforest__RevBetweenGoals0_24;
#line 1695 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;
#line 1695 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__8__tmp_copy_8 = transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;

#line 1695 "deforest.m"
              transform_hlds__deforest__HeadVar__8_8 = transform_hlds__deforest__HeadVar__8__tmp_copy_8;
#line 1695 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0__tmp_copy_5;
#line 1695 "deforest.m"
              transform_hlds__deforest__HeadVar__4_4 = transform_hlds__deforest__HeadVar__4__tmp_copy_4;
#line 1695 "deforest.m"
            }
#line 1695 "deforest.m"
            continue;
#line 1686 "deforest.m"
          }
#line 1684 "deforest.m"
        break;
#line 1684 "deforest.m"
      }
#line 1680 "deforest.m"
  }
#line 1680 "deforest.m"
}

#line 1627 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_p_0(
#line 1627 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_29,
#line 1627 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_30,
#line 1627 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_31)
#line 1627 "deforest.m"
{
#line 1627 "deforest.m"
  {
#line 1627 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1627 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_29, (MR_Integer) 1)));
#line 1627 "deforest.m"
    MR_Word transform_hlds__deforest__GoalNonLocals_25;
#line 1628 "deforest.m"
    MR_Word transform_hlds__deforest__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_29, (MR_Integer) 0)));

#line 1629 "deforest.m"
    {
#line 1629 "deforest.m"
      transform_hlds__deforest__GoalNonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__GoalInfo_24);
    }
#line 1630 "deforest.m"
    {
#line 1630 "deforest.m"
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__GoalNonLocals_25, transform_hlds__deforest__HeadVar__2_30, transform_hlds__deforest__HeadVar__3_31);
#line 1630 "deforest.m"
      return;
    }
#line 1627 "deforest.m"
  }
#line 1627 "deforest.m"
}

#line 631 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__631__1_3_p_0(
#line 631 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_22,
#line 631 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_23,
#line 631 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_24)
#line 631 "deforest.m"
{
#line 631 "deforest.m"
  {
#line 631 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 631 "deforest.m"
    MR_Word transform_hlds__deforest__Branches1_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_22, (MR_Integer) 1)));
#line 633 "deforest.m"
    MR_Word transform_hlds__deforest__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_22, (MR_Integer) 0)));

#line 634 "deforest.m"
    {
#line 634 "deforest.m"
      mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__deforest__HeadVar__2_23, transform_hlds__deforest__Branches1_20, transform_hlds__deforest__HeadVar__3_24);
#line 634 "deforest.m"
      return;
    }
#line 631 "deforest.m"
  }
#line 631 "deforest.m"
}

#line 492 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__492__1_1_p_0(
#line 492 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_46)
#line 492 "deforest.m"
{
#line 492 "deforest.m"
  {
#line 492 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 492 "deforest.m"
    MR_Word transform_hlds__deforest__CnstrGoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_46, (MR_Integer) 1)));
#line 493 "deforest.m"
    MR_Word transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_46, (MR_Integer) 0)));

#line 494 "deforest.m"
    {
#line 494 "deforest.m"
      return transform_hlds__deforest__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(transform_hlds__deforest__CnstrGoalInfo_30, (MR_Integer) 0);
    }
#line 492 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 492 "deforest.m"
  }
#line 492 "deforest.m"
}

#line 145 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__deforestation__145__1_2_p_0(
#line 145 "deforest.m"
  MR_Word transform_hlds__deforest__FoundErrors_29,
#line 145 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_53)
#line 145 "deforest.m"
{
#line 145 "deforest.m"
  {
#line 145 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded = (transform_hlds__deforest__FoundErrors_29 == transform_hlds__deforest__HeadVar__2_53);

#line 145 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 145 "deforest.m"
  }
#line 145 "deforest.m"
}

#line 1902 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____list__list_1_1(
#line 1902 "deforest.m"
  MR_Word transform_hlds__deforest__TypeInfo_for_T_11,
#line 1902 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 1902 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2)
#line 1902 "deforest.m"
{
#line 1902 "deforest.m"
  {
#line 1902 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1902 "deforest.m"
    MR_Word transform_hlds__deforest__V_6_6;
#line 1902 "deforest.m"
    MR_Box transform_hlds__deforest__V_7_7;
#line 1902 "deforest.m"
    MR_Word transform_hlds__deforest__V_8_8;

#line 1902 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 1902 "deforest.m"
      {
#line 1902 "deforest.m"
        transform_hlds__deforest__V_7_7 = (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0));
#line 1902 "deforest.m"
        transform_hlds__deforest__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
#line 1902 "deforest.m"
        (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)) = transform_hlds__deforest__V_7_7;
#line 1902 "deforest.m"
        transform_hlds__deforest__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 1902 "deforest.m"
        {
#line 1902 "deforest.m"
          return transform_hlds__deforest__succeeded = mercury__list____Unify____list_1_0(transform_hlds__deforest__TypeInfo_for_T_11, transform_hlds__deforest__V_6_6, transform_hlds__deforest__V_8_8);
        }
#line 1902 "deforest.m"
      }
#line 1902 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 1902 "deforest.m"
  }
#line 1902 "deforest.m"
}

#line 566 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0(
#line 566 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 566 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 566 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3)
#line 566 "deforest.m"
{
#line 566 "deforest.m"
  {
#line 566 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 566 "deforest.m"
    MR_Integer transform_hlds__deforest__CastX_21 = (MR_Integer) transform_hlds__deforest__HeadVar__2_2;
#line 566 "deforest.m"
    MR_Integer transform_hlds__deforest__CastY_22 = (MR_Integer) transform_hlds__deforest__HeadVar__3_3;

#line 566 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__CastX_21 == transform_hlds__deforest__CastY_22);
#line 566 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 2814 "transform_hlds.deforest.c"
      *transform_hlds__deforest__HeadVar__1_1 = (MR_Integer) 0;
#line 566 "deforest.m"
    else
#line 566 "deforest.m"
      {
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 2)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 3)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 4)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 5)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 0)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 1)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 2)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 3)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 4)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 5)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_16_16;

#line 566 "deforest.m"
        {
#line 566 "deforest.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__deforest__V_16_16, transform_hlds__deforest__V_4_4, transform_hlds__deforest__V_10_10);
        }
#line 2852 "transform_hlds.deforest.c"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_16_16 == (MR_Integer) 0);
#line 566 "deforest.m"
        transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 566 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 566 "deforest.m"
          *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_16_16;
#line 566 "deforest.m"
        else
#line 566 "deforest.m"
          {
#line 566 "deforest.m"
            MR_Word transform_hlds__deforest__V_17_17;

#line 566 "deforest.m"
            {
#line 566 "deforest.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[2], &transform_hlds__deforest__V_17_17, ((MR_Box) (transform_hlds__deforest__V_5_5)), ((MR_Box) (transform_hlds__deforest__V_11_11)));
            }
#line 2872 "transform_hlds.deforest.c"
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_17_17 == (MR_Integer) 0);
#line 566 "deforest.m"
            transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 566 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 566 "deforest.m"
              *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_17_17;
#line 566 "deforest.m"
            else
#line 566 "deforest.m"
              {
#line 566 "deforest.m"
                MR_Word transform_hlds__deforest__V_18_18;

#line 566 "deforest.m"
                {
#line 566 "deforest.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[7], &transform_hlds__deforest__V_18_18, ((MR_Box) (transform_hlds__deforest__V_6_6)), ((MR_Box) (transform_hlds__deforest__V_12_12)));
                }
#line 2892 "transform_hlds.deforest.c"
                transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_18_18 == (MR_Integer) 0);
#line 566 "deforest.m"
                transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 566 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 566 "deforest.m"
                  *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_18_18;
#line 566 "deforest.m"
                else
#line 566 "deforest.m"
                  {
#line 566 "deforest.m"
                    MR_Word transform_hlds__deforest__V_19_19;

#line 566 "deforest.m"
                    {
#line 566 "deforest.m"
                      hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__deforest__V_19_19, transform_hlds__deforest__V_7_7, transform_hlds__deforest__V_13_13);
                    }
#line 2912 "transform_hlds.deforest.c"
                    transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_19_19 == (MR_Integer) 0);
#line 566 "deforest.m"
                    transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 566 "deforest.m"
                    if (transform_hlds__deforest__succeeded)
#line 566 "deforest.m"
                      *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_19_19;
#line 566 "deforest.m"
                    else
#line 566 "deforest.m"
                      {
#line 566 "deforest.m"
                        MR_Word transform_hlds__deforest__V_20_20;

#line 566 "deforest.m"
                        {
#line 566 "deforest.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[2], &transform_hlds__deforest__V_20_20, ((MR_Box) (transform_hlds__deforest__V_8_8)), ((MR_Box) (transform_hlds__deforest__V_14_14)));
                        }
#line 2932 "transform_hlds.deforest.c"
                        transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_20_20 == (MR_Integer) 0);
#line 566 "deforest.m"
                        transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 566 "deforest.m"
                        if (transform_hlds__deforest__succeeded)
#line 566 "deforest.m"
                          *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_20_20;
#line 566 "deforest.m"
                        else
#line 566 "deforest.m"
                          {
#line 566 "deforest.m"
                            {
#line 566 "deforest.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[4], transform_hlds__deforest__HeadVar__1_1, ((MR_Box) (transform_hlds__deforest__V_9_9)), ((MR_Box) (transform_hlds__deforest__V_15_15)));
#line 566 "deforest.m"
                              return;
                            }
#line 566 "deforest.m"
                          }
#line 566 "deforest.m"
                      }
#line 566 "deforest.m"
                  }
#line 566 "deforest.m"
              }
#line 566 "deforest.m"
          }
#line 566 "deforest.m"
      }
#line 566 "deforest.m"
  }
#line 566 "deforest.m"
}

#line 566 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0(
#line 566 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 566 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2)
#line 566 "deforest.m"
{
#line 566 "deforest.m"
  {
#line 566 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 566 "deforest.m"
    MR_Integer transform_hlds__deforest__CastX_15 = (MR_Integer) transform_hlds__deforest__HeadVar__1_1;
#line 566 "deforest.m"
    MR_Integer transform_hlds__deforest__CastY_16 = (MR_Integer) transform_hlds__deforest__HeadVar__2_2;

#line 566 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__CastX_15 == transform_hlds__deforest__CastY_16);
#line 566 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 566 "deforest.m"
      transform_hlds__deforest__succeeded = MR_TRUE;
#line 566 "deforest.m"
    else
#line 566 "deforest.m"
      {
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_18_18;
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_19_19;
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_21_21;
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_22_22;
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 2)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 3)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 4)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 5)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 2)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 3)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 4)));
#line 566 "deforest.m"
        MR_Word transform_hlds__deforest__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 5)));

#line 3029 "transform_hlds.deforest.c"
        {
#line 3031 "transform_hlds.deforest.c"
          transform_hlds__deforest__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__deforest__V_3_3, transform_hlds__deforest__V_9_9);
        }
#line 566 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 566 "deforest.m"
          {
#line 3038 "transform_hlds.deforest.c"
            transform_hlds__deforest__TypeInfo_18_18 = (MR_Word) &transform_hlds__deforest_scalar_common_1[2];
#line 3040 "transform_hlds.deforest.c"
            {
#line 3042 "transform_hlds.deforest.c"
              transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_18_18, ((MR_Box) (transform_hlds__deforest__V_4_4)), ((MR_Box) (transform_hlds__deforest__V_10_10)));
            }
#line 566 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 566 "deforest.m"
              {
#line 3049 "transform_hlds.deforest.c"
                transform_hlds__deforest__TypeInfo_19_19 = (MR_Word) &transform_hlds__deforest_scalar_common_1[7];
#line 3051 "transform_hlds.deforest.c"
                {
#line 3053 "transform_hlds.deforest.c"
                  transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_19_19, ((MR_Box) (transform_hlds__deforest__V_5_5)), ((MR_Box) (transform_hlds__deforest__V_11_11)));
                }
#line 566 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 566 "deforest.m"
                  {
#line 3060 "transform_hlds.deforest.c"
                    {
#line 3062 "transform_hlds.deforest.c"
                      transform_hlds__deforest__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__deforest__V_6_6, transform_hlds__deforest__V_12_12);
                    }
#line 566 "deforest.m"
                    if (transform_hlds__deforest__succeeded)
#line 566 "deforest.m"
                      {
#line 3069 "transform_hlds.deforest.c"
                        transform_hlds__deforest__TypeInfo_21_21 = (MR_Word) &transform_hlds__deforest_scalar_common_1[2];
#line 3071 "transform_hlds.deforest.c"
                        {
#line 3073 "transform_hlds.deforest.c"
                          transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_21_21, ((MR_Box) (transform_hlds__deforest__V_7_7)), ((MR_Box) (transform_hlds__deforest__V_13_13)));
                        }
#line 566 "deforest.m"
                        if (transform_hlds__deforest__succeeded)
#line 566 "deforest.m"
                          {
#line 3080 "transform_hlds.deforest.c"
                            transform_hlds__deforest__TypeInfo_22_22 = (MR_Word) &transform_hlds__deforest_scalar_common_1[4];
#line 3082 "transform_hlds.deforest.c"
                            {
#line 3084 "transform_hlds.deforest.c"
                              return transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_22_22, ((MR_Box) (transform_hlds__deforest__V_8_8)), ((MR_Box) (transform_hlds__deforest__V_14_14)));
                            }
#line 566 "deforest.m"
                          }
#line 566 "deforest.m"
                      }
#line 566 "deforest.m"
                  }
#line 566 "deforest.m"
              }
#line 566 "deforest.m"
          }
#line 566 "deforest.m"
      }
#line 566 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 566 "deforest.m"
  }
#line 566 "deforest.m"
}

#line 1698 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0(
#line 1698 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 1698 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 1698 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3)
#line 1698 "deforest.m"
{
#line 1698 "deforest.m"
  {
#line 1698 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1698 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar1_4 = transform_hlds__deforest__HeadVar__2_2;
#line 1698 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar2_5 = transform_hlds__deforest__HeadVar__3_3;

#line 1698 "deforest.m"
    {
#line 1698 "deforest.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_3[0], transform_hlds__deforest__HeadVar__1_1, ((MR_Box) (transform_hlds__deforest__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__deforest__Cast_HeadVar2_5)));
#line 1698 "deforest.m"
      return;
    }
#line 1698 "deforest.m"
  }
#line 1698 "deforest.m"
}

#line 1698 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0(
#line 1698 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 1698 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2)
#line 1698 "deforest.m"
{
#line 1698 "deforest.m"
  {
#line 1698 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1698 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar1_3 = transform_hlds__deforest__HeadVar__1_1;
#line 1698 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar2_4 = transform_hlds__deforest__HeadVar__2_2;

#line 1698 "deforest.m"
    {
#line 1698 "deforest.m"
      return transform_hlds__deforest__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) transform_hlds__deforest__Cast_HeadVar1_3, (MR_Word) transform_hlds__deforest__Cast_HeadVar2_4);
    }
#line 1698 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 1698 "deforest.m"
  }
#line 1698 "deforest.m"
}

#line 530 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0(
#line 530 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 530 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 530 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3)
#line 530 "deforest.m"
{
#line 530 "deforest.m"
  {
#line 530 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 530 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar1_4 = transform_hlds__deforest__HeadVar__2_2;
#line 530 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar2_5 = transform_hlds__deforest__HeadVar__3_3;

#line 530 "deforest.m"
    {
#line 530 "deforest.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[6], transform_hlds__deforest__HeadVar__1_1, ((MR_Box) (transform_hlds__deforest__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__deforest__Cast_HeadVar2_5)));
#line 530 "deforest.m"
      return;
    }
#line 530 "deforest.m"
  }
#line 530 "deforest.m"
}

#line 530 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0(
#line 530 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 530 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2)
#line 530 "deforest.m"
{
#line 530 "deforest.m"
  {
#line 530 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 530 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar1_3 = transform_hlds__deforest__HeadVar__1_1;
#line 530 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar2_4 = transform_hlds__deforest__HeadVar__2_2;

#line 530 "deforest.m"
    {
#line 530 "deforest.m"
      return transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[6], ((MR_Box) (transform_hlds__deforest__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__deforest__Cast_HeadVar2_4)));
    }
#line 530 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 530 "deforest.m"
  }
#line 530 "deforest.m"
}

#line 2133 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_1_p_0(
#line 2133 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1)
#line 2133 "deforest.m"
{
#line 2135 "deforest.m"
  {
#line 2135 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 2135 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 2135 "deforest.m"
    MR_Word transform_hlds__deforest__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));

#line 2137 "deforest.m"
    {
#line 2137 "deforest.m"
      MR_Word transform_hlds__deforest__V_6_6;

#line 2137 "deforest.m"
      {
#line 2137 "deforest.m"
        transform_hlds__deforest__V_6_6 = hlds__hlds_goal__goal_expr_has_subgoals_1_f_0(transform_hlds__deforest__GoalExpr_2);
      }
#line 2137 "deforest.m"
      transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_6_6 == (MR_Integer) 1);
#line 2137 "deforest.m"
    }
#line 2138 "deforest.m"
    if (!(transform_hlds__deforest__succeeded))
#line 2139 "deforest.m"
      {
#line 2139 "deforest.m"
        MR_Word transform_hlds__deforest__Goal1_4;
#line 2139 "deforest.m"
        MR_Word transform_hlds__deforest__GoalList1_5;

#line 2139 "deforest.m"
        transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_2)) == (MR_mktag((MR_Integer) 0)));
#line 2139 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2139 "deforest.m"
          {
#line 2139 "deforest.m"
            transform_hlds__deforest__Goal1_4 = (MR_Word) MR_body(((MR_Word) transform_hlds__deforest__GoalExpr_2), (MR_Integer) 0);
#line 2141 "deforest.m"
            {
#line 2141 "deforest.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__deforest__Goal1_4, &transform_hlds__deforest__GoalList1_5);
            }
#line 2142 "deforest.m"
            {
#line 2142 "deforest.m"
              return transform_hlds__deforest__succeeded = transform_hlds__deforest__is_simple_goal_list_1_p_0(transform_hlds__deforest__GoalList1_5);
            }
#line 2139 "deforest.m"
          }
#line 2139 "deforest.m"
      }
#line 2135 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 2135 "deforest.m"
  }
#line 2133 "deforest.m"
}

#line 2126 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_list_1_p_0(
#line 2126 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1)
#line 2126 "deforest.m"
{
#line 2128 "deforest.m"
  while (MR_TRUE)
#line 2128 "deforest.m"
    {
#line 2128 "deforest.m"
      /* tailcall optimized into a loop */
#line 2128 "deforest.m"
      {
#line 2128 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;

#line 2128 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2128 "deforest.m"
          transform_hlds__deforest__succeeded = MR_TRUE;
#line 2128 "deforest.m"
        else
#line 2129 "deforest.m"
          {
#line 2129 "deforest.m"
            MR_Word transform_hlds__deforest__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 2129 "deforest.m"
            MR_Word transform_hlds__deforest__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));

#line 2130 "deforest.m"
            {
#line 2130 "deforest.m"
              transform_hlds__deforest__succeeded = transform_hlds__deforest__is_simple_goal_1_p_0(transform_hlds__deforest__Goal_2);
            }
#line 2129 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 2131 "deforest.m"
              {
#line 2131 "deforest.m"
                /* direct tailcall eliminated */
#line 2131 "deforest.m"
                {
#line 2131 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals_3;

#line 2131 "deforest.m"
                  transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 2131 "deforest.m"
                }
#line 2131 "deforest.m"
                continue;
#line 2131 "deforest.m"
              }
#line 2129 "deforest.m"
          }
#line 2128 "deforest.m"
        return transform_hlds__deforest__succeeded;
#line 2128 "deforest.m"
      }
#line 2128 "deforest.m"
      break;
#line 2128 "deforest.m"
    }
#line 2126 "deforest.m"
}

#line 1963 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__unfold_call_10_p_0(
#line 1963 "deforest.m"
  MR_Word transform_hlds__deforest__CheckImprovement_11,
#line 1963 "deforest.m"
  MR_Word transform_hlds__deforest__CheckVars_12,
#line 1963 "deforest.m"
  MR_Word transform_hlds__deforest__PredId_13,
#line 1963 "deforest.m"
  MR_Integer transform_hlds__deforest__ProcId_14,
#line 1963 "deforest.m"
  MR_Word transform_hlds__deforest__Args_15,
#line 1963 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_16,
#line 1963 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_17,
#line 1963 "deforest.m"
  MR_Word * transform_hlds__deforest__Optimized_18,
#line 1963 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79,
#line 1963 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_80)
#line 1963 "deforest.m"
{
#line 1968 "deforest.m"
  {
#line 1968 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1968 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_132_132;
#line 1968 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_20;
#line 1968 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_21;
#line 1968 "deforest.m"
    MR_Integer transform_hlds__deforest__VarsOpt_22;
#line 1968 "deforest.m"
    MR_Word transform_hlds__deforest__ProcInfo0_23;
#line 1968 "deforest.m"
    MR_Word transform_hlds__deforest__VarSet0_24;
#line 1968 "deforest.m"
    MR_Word transform_hlds__deforest__Vars_25;
#line 1968 "deforest.m"
    MR_Integer transform_hlds__deforest__NumVars_26;
#line 1968 "deforest.m"
    MR_Word transform_hlds__deforest__DebugPD_27;

#line 1969 "deforest.m"
    {
#line 1969 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__ModuleInfo_20);
    }
#line 1970 "deforest.m"
    {
#line 1970 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_20, &transform_hlds__deforest__Globals_21);
    }
#line 1971 "deforest.m"
    {
#line 1971 "deforest.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_21, (MR_Integer) 391, &transform_hlds__deforest__VarsOpt_22);
    }
#line 1972 "deforest.m"
    {
#line 1972 "deforest.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__ProcInfo0_23);
    }
#line 1973 "deforest.m"
    {
#line 1973 "deforest.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__VarSet0_24);
    }
#line 3439 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1974 "deforest.m"
    {
#line 1974 "deforest.m"
      mercury__varset__vars_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__VarSet0_24, &transform_hlds__deforest__Vars_25);
    }
#line 1975 "deforest.m"
    {
#line 1975 "deforest.m"
      mercury__list__length_2_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[1], transform_hlds__deforest__Vars_25, &transform_hlds__deforest__NumVars_26);
    }
#line 1976 "deforest.m"
    {
#line 1976 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_21, (MR_Integer) 70, &transform_hlds__deforest__DebugPD_27);
    }
#line 1980 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__CheckVars_12 == (MR_Integer) 0);
#line 1981 "deforest.m"
    if (!(transform_hlds__deforest__succeeded))
#line 1981 "deforest.m"
      {
#line 1982 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__VarsOpt_22 == (MR_Integer) -1);
#line 1981 "deforest.m"
        if (!(transform_hlds__deforest__succeeded))
#line 1985 "deforest.m"
          transform_hlds__deforest__succeeded = (transform_hlds__deforest__NumVars_26 < transform_hlds__deforest__VarsOpt_22);
#line 1981 "deforest.m"
      }
#line 2115 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 1988 "deforest.m"
      {
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__PredInfo0_29;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__CalledPredInfo_30;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__CalledProcInfo_31;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__TypeVarSet0_32;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__UnivQVars_33;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__VarTypes0_34;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__RttiVarMaps0_35;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__VarSet_36;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__VarTypes_37;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__TypeVarSet_38;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__RttiVarMaps_39;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__Goal1_40;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__PredInfo_41;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__CalledHasParallelConj_42;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo1_43;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo2_44;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo3_45;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo_46;
#line 1988 "deforest.m"
        MR_Integer transform_hlds__deforest__OriginalCost_47;
#line 1988 "deforest.m"
        MR_Integer transform_hlds__deforest__CostDelta0_48;
#line 1988 "deforest.m"
        MR_Integer transform_hlds__deforest__SizeDelta0_49;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__Changed0_50;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo1_52;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__NonLocals1_53;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__NonLocals_54;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__Goal2_55;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__ArgLives_57;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__LiveVars0_58;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__LiveVars1_59;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__LiveVars_60;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__Goal3_61;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__Errors_62;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__Optimized0_63;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__Simplifications_66;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__Goal4_67;
#line 1988 "deforest.m"
        MR_Integer transform_hlds__deforest__CostDelta1_68;
#line 1988 "deforest.m"
        MR_Integer transform_hlds__deforest__CostDelta_69;
#line 1988 "deforest.m"
        MR_Integer transform_hlds__deforest__GoalSize_70;
#line 1988 "deforest.m"
        MR_Integer transform_hlds__deforest__SizeDelta_71;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_91_91;
#line 1988 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 1988 "deforest.m"
        MR_Integer transform_hlds__deforest__V_98_98;
#line 2022 "deforest.m"
        MR_Word transform_hlds__deforest__V_51_51;
#line 2062 "deforest.m"
        MR_Integer transform_hlds__deforest__Factor_72;

#line 1988 "deforest.m"
        {
#line 1988 "deforest.m"
          transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__PredInfo0_29);
        }
#line 1989 "deforest.m"
        {
#line 1989 "deforest.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__deforest__ModuleInfo_20, transform_hlds__deforest__PredId_13, transform_hlds__deforest__ProcId_14, &transform_hlds__deforest__CalledPredInfo_30, &transform_hlds__deforest__CalledProcInfo_31);
        }
#line 1991 "deforest.m"
        {
#line 1991 "deforest.m"
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__deforest__PredInfo0_29, &transform_hlds__deforest__TypeVarSet0_32);
        }
#line 1992 "deforest.m"
        {
#line 1992 "deforest.m"
          hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(transform_hlds__deforest__PredInfo0_29, &transform_hlds__deforest__UnivQVars_33);
        }
#line 1993 "deforest.m"
        {
#line 1993 "deforest.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__VarTypes0_34);
        }
#line 1994 "deforest.m"
        {
#line 1994 "deforest.m"
          hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__RttiVarMaps0_35);
        }
#line 1995 "deforest.m"
        {
#line 1995 "deforest.m"
          transform_hlds__inlining__do_inline_call_13_p_0(transform_hlds__deforest__UnivQVars_33, transform_hlds__deforest__Args_15, transform_hlds__deforest__CalledPredInfo_30, transform_hlds__deforest__CalledProcInfo_31, transform_hlds__deforest__VarSet0_24, &transform_hlds__deforest__VarSet_36, transform_hlds__deforest__VarTypes0_34, &transform_hlds__deforest__VarTypes_37, transform_hlds__deforest__TypeVarSet0_32, &transform_hlds__deforest__TypeVarSet_38, transform_hlds__deforest__RttiVarMaps0_35, &transform_hlds__deforest__RttiVarMaps_39, &transform_hlds__deforest__Goal1_40);
        }
#line 1998 "deforest.m"
        {
#line 1998 "deforest.m"
          hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__deforest__TypeVarSet_38, transform_hlds__deforest__PredInfo0_29, &transform_hlds__deforest__PredInfo_41);
        }
#line 1999 "deforest.m"
        {
#line 1999 "deforest.m"
          hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__deforest__CalledProcInfo_31, &transform_hlds__deforest__CalledHasParallelConj_42);
        }
#line 2001 "deforest.m"
        {
#line 2001 "deforest.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__deforest__VarSet_36, transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__ProcInfo1_43);
        }
#line 2002 "deforest.m"
        {
#line 2002 "deforest.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__deforest__VarTypes_37, transform_hlds__deforest__ProcInfo1_43, &transform_hlds__deforest__ProcInfo2_44);
        }
#line 2003 "deforest.m"
        {
#line 2003 "deforest.m"
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__deforest__RttiVarMaps_39, transform_hlds__deforest__ProcInfo2_44, &transform_hlds__deforest__ProcInfo3_45);
        }
#line 2007 "deforest.m"
        if ((transform_hlds__deforest__CalledHasParallelConj_42 == (MR_Integer) 0))
#line 2010 "deforest.m"
          transform_hlds__deforest__ProcInfo_46 = transform_hlds__deforest__ProcInfo3_45;
#line 2007 "deforest.m"
        else
#line 2005 "deforest.m"
          {
#line 2006 "deforest.m"
            {
#line 2006 "deforest.m"
              hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0((MR_Integer) 1, transform_hlds__deforest__ProcInfo3_45, &transform_hlds__deforest__ProcInfo_46);
            }
#line 2005 "deforest.m"
          }
#line 2013 "deforest.m"
        {
#line 2013 "deforest.m"
          transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(transform_hlds__deforest__PredInfo_41, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84);
        }
#line 2014 "deforest.m"
        {
#line 2014 "deforest.m"
          transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__deforest__ProcInfo_46, transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85);
        }
#line 2016 "deforest.m"
        {
#line 2016 "deforest.m"
          transform_hlds__pd_cost__goal_cost_2_p_0(transform_hlds__deforest__Goal1_40, &transform_hlds__deforest__OriginalCost_47);
        }
#line 2017 "deforest.m"
        {
#line 2017 "deforest.m"
          transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__CostDelta0_48);
        }
#line 2018 "deforest.m"
        {
#line 2018 "deforest.m"
          transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__SizeDelta0_49);
        }
#line 2019 "deforest.m"
        {
#line 2019 "deforest.m"
          transform_hlds__pd_info__pd_info_get_changed_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__Changed0_50);
        }
#line 2022 "deforest.m"
        transform_hlds__deforest__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_40, (MR_Integer) 0)));
#line 2022 "deforest.m"
        transform_hlds__deforest__GoalInfo1_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_40, (MR_Integer) 1)));
#line 2023 "deforest.m"
        {
#line 2023 "deforest.m"
          transform_hlds__deforest__NonLocals1_53 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__GoalInfo1_52);
        }
#line 2024 "deforest.m"
        {
#line 2024 "deforest.m"
          parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__Args_15, &transform_hlds__deforest__NonLocals_54);
        }
#line 2025 "deforest.m"
        {
#line 2025 "deforest.m"
          transform_hlds__deforest__succeeded = parse_tree__set_of_var__equal_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__NonLocals1_53, transform_hlds__deforest__NonLocals_54);
        }
#line 2027 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2026 "deforest.m"
          {
#line 2026 "deforest.m"
            transform_hlds__deforest__Goal2_55 = transform_hlds__deforest__Goal1_40;
#line 2026 "deforest.m"
            transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
#line 2026 "deforest.m"
          }
#line 2027 "deforest.m"
        else
#line 2028 "deforest.m"
          {
#line 2028 "deforest.m"
            transform_hlds__pd_util__pd_requantify_goal_5_p_0(transform_hlds__deforest__NonLocals_54, transform_hlds__deforest__Goal1_40, &transform_hlds__deforest__Goal2_55, transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86);
          }
#line 2033 "deforest.m"
        {
#line 2033 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "Running unique modes\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 2035 "deforest.m"
        {
#line 2035 "deforest.m"
          hlds__hlds_pred__proc_info_arglives_3_p_0(transform_hlds__deforest__CalledProcInfo_31, transform_hlds__deforest__ModuleInfo_20, &transform_hlds__deforest__ArgLives_57);
        }
#line 2036 "deforest.m"
        {
#line 2036 "deforest.m"
          check_hlds__modecheck_util__get_live_vars_3_p_0(transform_hlds__deforest__Args_15, transform_hlds__deforest__ArgLives_57, &transform_hlds__deforest__LiveVars0_58);
        }
#line 2037 "deforest.m"
        {
#line 2037 "deforest.m"
          parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__LiveVars0_58, &transform_hlds__deforest__LiveVars1_59);
        }
#line 2038 "deforest.m"
        {
#line 2038 "deforest.m"
          parse_tree__set_of_var__intersect_3_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__NonLocals_54, transform_hlds__deforest__LiveVars1_59, &transform_hlds__deforest__LiveVars_60);
        }
#line 2039 "deforest.m"
        {
#line 2039 "deforest.m"
          transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0(transform_hlds__deforest__LiveVars_60, transform_hlds__deforest__Goal2_55, &transform_hlds__deforest__Goal3_61, &transform_hlds__deforest__Errors_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_91_91);
        }
#line 2045 "deforest.m"
        if ((transform_hlds__deforest__Errors_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2044 "deforest.m"
          transform_hlds__deforest__Optimized0_63 = (MR_Integer) 1;
#line 2045 "deforest.m"
        else
#line 2049 "deforest.m"
          transform_hlds__deforest__Optimized0_63 = (MR_Integer) 0;
#line 2053 "deforest.m"
        {
#line 2053 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "Running simplify\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 2055 "deforest.m"
        {
#line 2055 "deforest.m"
          check_hlds__simplify__find_simplifications_3_p_0((MR_Integer) 0, transform_hlds__deforest__Globals_21, &transform_hlds__deforest__Simplifications_66);
        }
#line 2056 "deforest.m"
        {
#line 2056 "deforest.m"
          transform_hlds__pd_util__pd_simplify_goal_5_p_0(transform_hlds__deforest__Simplifications_66, transform_hlds__deforest__Goal3_61, &transform_hlds__deforest__Goal4_67, transform_hlds__deforest__STATE_VARIABLE_PDInfo_91_91, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
        }
#line 2058 "deforest.m"
        {
#line 2058 "deforest.m"
          transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__CostDelta1_68);
        }
#line 2059 "deforest.m"
        transform_hlds__deforest__CostDelta_69 = (transform_hlds__deforest__CostDelta1_68 - transform_hlds__deforest__CostDelta0_48);
#line 2060 "deforest.m"
        {
#line 2060 "deforest.m"
          hlds__goal_util__goal_size_2_p_0(transform_hlds__deforest__Goal4_67, &transform_hlds__deforest__GoalSize_70);
        }
#line 2061 "deforest.m"
        {
#line 2061 "deforest.m"
          transform_hlds__deforest__V_98_98 = transform_hlds__pd_cost__cost_of_call_0_f_0();
        }
#line 2061 "deforest.m"
        transform_hlds__deforest__SizeDelta_71 = (transform_hlds__deforest__GoalSize_70 - transform_hlds__deforest__V_98_98);
#line 2062 "deforest.m"
        {
#line 2062 "deforest.m"
          libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_21, (MR_Integer) 390, &transform_hlds__deforest__Factor_72);
        }
#line 2064 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__Optimized0_63 == (MR_Integer) 1);
#line 2064 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2067 "deforest.m"
          {
#line 2067 "deforest.m"
            if ((transform_hlds__deforest__CheckImprovement_11 == (MR_Integer) 0))
#line 2066 "deforest.m"
              transform_hlds__deforest__succeeded = MR_TRUE;
#line 2067 "deforest.m"
            else
#line 2072 "deforest.m"
              {
#line 2070 "deforest.m"
                {
#line 2070 "deforest.m"
                  transform_hlds__deforest__succeeded = transform_hlds__deforest__is_simple_goal_1_p_0(transform_hlds__deforest__Goal3_61);
                }
#line 2072 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 2071 "deforest.m"
                  transform_hlds__deforest__succeeded = MR_TRUE;
#line 2072 "deforest.m"
                else
#line 2073 "deforest.m"
                  {
#line 2073 "deforest.m"
                    transform_hlds__deforest__succeeded = transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(transform_hlds__deforest__GoalSize_70, transform_hlds__deforest__OriginalCost_47, transform_hlds__deforest__CostDelta_69);
                  }
#line 2072 "deforest.m"
              }
#line 2067 "deforest.m"
          }
#line 2100 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2078 "deforest.m"
          {
#line 2078 "deforest.m"
            MR_Word transform_hlds__deforest__GoalInfo0_74;
#line 2078 "deforest.m"
            MR_Word transform_hlds__deforest__Det0_75;
#line 2078 "deforest.m"
            MR_Word transform_hlds__deforest__GoalInfo_77;
#line 2078 "deforest.m"
            MR_Word transform_hlds__deforest__Det_78;
#line 2078 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_108_108;
#line 2078 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110;
#line 2079 "deforest.m"
            MR_Word transform_hlds__deforest__V_102_102;
#line 2079 "deforest.m"
            MR_Word transform_hlds__deforest__V_104_104;
#line 2079 "deforest.m"
            MR_Word transform_hlds__deforest__V_105_105;
#line 2079 "deforest.m"
            MR_Word transform_hlds__deforest__V_106_106;
#line 2085 "deforest.m"
            MR_Word transform_hlds__deforest__V_73_73;
#line 2087 "deforest.m"
            MR_Word transform_hlds__deforest__V_76_76;

#line 2078 "deforest.m"
            *transform_hlds__deforest__Goal_17 = transform_hlds__deforest__Goal4_67;
#line 2081 "deforest.m"
            {
#line 2081 "deforest.m"
              transform_hlds__deforest__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_104_104, 0) = ((MR_Box) (transform_hlds__deforest__CostDelta_69));
#line 2081 "deforest.m"
            }
#line 2081 "deforest.m"
            {
#line 2081 "deforest.m"
              transform_hlds__deforest__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_106_106, 0) = ((MR_Box) (transform_hlds__deforest__SizeDelta_71));
#line 2081 "deforest.m"
            }
#line 2081 "deforest.m"
            {
#line 2081 "deforest.m"
              transform_hlds__deforest__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_105_105, 0) = ((MR_Box) (transform_hlds__deforest__V_106_106));
#line 2081 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2081 "deforest.m"
            }
#line 2080 "deforest.m"
            {
#line 2080 "deforest.m"
              transform_hlds__deforest__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2080 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_102_102, 0) = ((MR_Box) (transform_hlds__deforest__V_104_104));
#line 2080 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_102_102, 1) = ((MR_Box) (transform_hlds__deforest__V_105_105));
#line 2080 "deforest.m"
            }
#line 2080 "deforest.m"
            {
#line 2080 "deforest.m"
              transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "inlined: cost(%i) size(%i)\n", transform_hlds__deforest__V_102_102);
            }
#line 2083 "deforest.m"
            {
#line 2083 "deforest.m"
              transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(transform_hlds__deforest__SizeDelta_71, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_108_108);
            }
#line 2084 "deforest.m"
            {
#line 2084 "deforest.m"
              transform_hlds__pd_info__pd_info_set_changed_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_108_108, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110);
            }
#line 2085 "deforest.m"
            transform_hlds__deforest__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_16, (MR_Integer) 0)));
#line 2085 "deforest.m"
            transform_hlds__deforest__GoalInfo0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_16, (MR_Integer) 1)));
#line 2086 "deforest.m"
            {
#line 2086 "deforest.m"
              transform_hlds__deforest__Det0_75 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__deforest__GoalInfo0_74);
            }
#line 2087 "deforest.m"
            transform_hlds__deforest__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__deforest__Goal_17, (MR_Integer) 0)));
#line 2087 "deforest.m"
            transform_hlds__deforest__GoalInfo_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__deforest__Goal_17, (MR_Integer) 1)));
#line 2088 "deforest.m"
            {
#line 2088 "deforest.m"
              transform_hlds__deforest__Det_78 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__deforest__GoalInfo_77);
            }
#line 2093 "deforest.m"
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__Det_78 == transform_hlds__deforest__Det0_75);
#line 2095 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 2093 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_80 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110;
#line 2095 "deforest.m"
            else
#line 2096 "deforest.m"
              {
#line 2096 "deforest.m"
                {
#line 2096 "deforest.m"
                  transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110, transform_hlds__deforest__STATE_VARIABLE_PDInfo_80);
                }
#line 2096 "deforest.m"
              }
#line 2099 "deforest.m"
            *transform_hlds__deforest__Optimized_18 = (MR_Integer) 1;
#line 2078 "deforest.m"
          }
#line 2100 "deforest.m"
        else
#line 2106 "deforest.m"
          {
#line 2106 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123;
#line 2106 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124;
#line 2106 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125;
#line 2106 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126;
#line 2101 "deforest.m"
            MR_Word transform_hlds__deforest__V_115_115;
#line 2101 "deforest.m"
            MR_Word transform_hlds__deforest__V_119_119;
#line 2101 "deforest.m"
            MR_Word transform_hlds__deforest__V_120_120;
#line 2101 "deforest.m"
            MR_Word transform_hlds__deforest__V_121_121;

#line 2105 "deforest.m"
            {
#line 2105 "deforest.m"
              transform_hlds__deforest__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2105 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_119_119, 0) = ((MR_Box) (transform_hlds__deforest__CostDelta_69));
#line 2105 "deforest.m"
            }
#line 2105 "deforest.m"
            {
#line 2105 "deforest.m"
              transform_hlds__deforest__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2105 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_121_121, 0) = ((MR_Box) (transform_hlds__deforest__SizeDelta_71));
#line 2105 "deforest.m"
            }
#line 2105 "deforest.m"
            {
#line 2105 "deforest.m"
              transform_hlds__deforest__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2105 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_120_120, 0) = ((MR_Box) (transform_hlds__deforest__V_121_121));
#line 2105 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2105 "deforest.m"
            }
#line 2102 "deforest.m"
            {
#line 2102 "deforest.m"
              transform_hlds__deforest__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2102 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_115_115, 0) = ((MR_Box) (transform_hlds__deforest__V_119_119));
#line 2102 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_115_115, 1) = ((MR_Box) (transform_hlds__deforest__V_120_120));
#line 2102 "deforest.m"
            }
#line 2102 "deforest.m"
            {
#line 2102 "deforest.m"
              transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "not enough improvement - not inlining: cost(%i) size(%i)\n", transform_hlds__deforest__V_115_115);
            }
#line 2107 "deforest.m"
            {
#line 2107 "deforest.m"
              transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(transform_hlds__deforest__PredInfo0_29, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123);
            }
#line 2108 "deforest.m"
            {
#line 2108 "deforest.m"
              transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__deforest__ProcInfo0_23, transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124);
            }
#line 2109 "deforest.m"
            {
#line 2109 "deforest.m"
              transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(transform_hlds__deforest__SizeDelta0_49, transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125);
            }
#line 2110 "deforest.m"
            {
#line 2110 "deforest.m"
              transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(transform_hlds__deforest__CostDelta0_48, transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126);
            }
#line 2111 "deforest.m"
            {
#line 2111 "deforest.m"
              transform_hlds__pd_info__pd_info_set_changed_3_p_0(transform_hlds__deforest__Changed0_50, transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126, transform_hlds__deforest__STATE_VARIABLE_PDInfo_80);
            }
#line 2112 "deforest.m"
            *transform_hlds__deforest__Goal_17 = transform_hlds__deforest__Goal0_16;
#line 2113 "deforest.m"
            *transform_hlds__deforest__Optimized_18 = (MR_Integer) 0;
#line 2106 "deforest.m"
          }
#line 1988 "deforest.m"
      }
#line 2115 "deforest.m"
    else
#line 2119 "deforest.m"
      {
#line 2117 "deforest.m"
        {
#line 2117 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "too many variables - not inlining\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 2120 "deforest.m"
        *transform_hlds__deforest__Goal_17 = transform_hlds__deforest__Goal0_16;
#line 2121 "deforest.m"
        *transform_hlds__deforest__Optimized_18 = (MR_Integer) 0;
#line 2121 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_80 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79;
#line 2119 "deforest.m"
      }
#line 1968 "deforest.m"
  }
#line 1963 "deforest.m"
}

#line 1897 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_1(
#line 1897 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1897 "deforest.m"
{
#line 1897 "deforest.m"
  {
#line 1897 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1897 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0, 1);
#line 1897 "deforest.m"
  }
#line 1897 "deforest.m"
}

#line 1899 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_3(
#line 1899 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1899 "deforest.m"
{
#line 1899 "deforest.m"
  {
#line 1899 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1899 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_36 = ((MR_Integer) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_36);
#line 1899 "deforest.m"
    {
#line 1899 "deforest.m"
      transform_hlds__deforest__deforest_call_9_p_0_2(transform_hlds__deforest__env_ptr);
#line 1899 "deforest.m"
      return;
    }
#line 1899 "deforest.m"
  }
#line 1899 "deforest.m"
}

#line 1897 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_2(
#line 1897 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1897 "deforest.m"
{
#line 1897 "deforest.m"
  {
#line 1897 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1897 "deforest.m"
    {
#line 1900 "deforest.m"
      MR_Box transform_hlds__deforest__conv2_Arg_37;
#line 1902 "deforest.m"
      MR_Word transform_hlds__deforest__V_39_39;
#line 1915 "deforest.m"
      MR_Word transform_hlds__deforest__V_41_41;

#line 1900 "deforest.m"
      {
#line 1900 "deforest.m"
        mercury__list__det_index1_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_86_86, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_36, &transform_hlds__deforest__conv2_Arg_37);
      }
#line 1900 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_37 = ((MR_Word) transform_hlds__deforest__conv2_Arg_37);
#line 1901 "deforest.m"
      {
#line 1901 "deforest.m"
        hlds__instmap__instmap_lookup_var_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_37, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_38);
      }
#line 1902 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1902 "deforest.m"
      {
#line 1902 "deforest.m"
        MR_Word base;
#line 1902 "deforest.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1902 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_54_54 = base;
#line 1902 "deforest.m"
        MR_hl_field(MR_mktag(1), base, 0) = NULL;
#line 1902 "deforest.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_55_55));
#line 1902 "deforest.m"
      }
#line 1902 "deforest.m"
      {
#line 1902 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = check_hlds__inst_match__inst_is_bound_to_functors_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_38, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_90_90);
      }
#line 1897 "deforest.m"
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1897 "deforest.m"
        {
#line 4162 "transform_hlds.deforest.c"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_91_91 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 1902 "deforest.m"
          {
#line 1902 "deforest.m"
            (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__deforest____Unify____list__list_1_1((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_91_91, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_54_54, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_90_90);
          }
#line 1897 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1897 "deforest.m"
            {
#line 1910 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__InlinePromisedPure_40 = (MR_Integer) 0;
#line 1911 "deforest.m"
              {
#line 1911 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__inlining__can_inline_proc_6_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__InlinePromisedPure_40, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CallerMarkers_30, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19);
              }
#line 1897 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1897 "deforest.m"
                {
#line 1915 "deforest.m"
                  {
#line 1915 "deforest.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, &transform_hlds__deforest__V_41_41, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_42);
                  }
#line 1917 "deforest.m"
                  {
#line 1917 "deforest.m"
                    hlds__hlds_pred__proc_info_get_goal_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_42, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_43);
                  }
#line 1918 "deforest.m"
                  {
#line 1918 "deforest.m"
                    hlds__goal_util__goal_size_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_43, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_44);
                  }
#line 1919 "deforest.m"
                  (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29 == (MR_Integer) -1);
#line 1920 "deforest.m"
                  if (!((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded))
#line 1920 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_44 < (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29);
#line 1920 "deforest.m"
                  if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1920 "deforest.m"
                    {
#line 1920 "deforest.m"
                      transform_hlds__deforest__deforest_call_9_p_0_1(transform_hlds__deforest__env_ptr);
#line 1920 "deforest.m"
                      return;
                    }
#line 1897 "deforest.m"
                }
#line 1897 "deforest.m"
            }
#line 1897 "deforest.m"
        }
#line 1897 "deforest.m"
    }
#line 1897 "deforest.m"
  }
#line 1897 "deforest.m"
}

#line 1897 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_4(
#line 1897 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1897 "deforest.m"
{
#line 1897 "deforest.m"
  {
#line 1897 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1897 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0) == 0)
#line 1897 "deforest.m"
      {
#line 1897 "deforest.m"
        {
#line 1897 "deforest.m"
          MR_Word transform_hlds__deforest__TypeCtorInfo_89_89;
#line 1897 "deforest.m"
          MR_Word transform_hlds__deforest__ProcArgInfo_32;
#line 1897 "deforest.m"
          MR_Word transform_hlds__deforest__LeftArgs_34;
#line 1897 "deforest.m"
          MR_Word transform_hlds__deforest__V_53_53;
#line 1897 "deforest.m"
          MR_Box transform_hlds__deforest__conv0_ProcArgInfo_32;
#line 1898 "deforest.m"
          MR_Word transform_hlds__deforest__V_33_33;
#line 1898 "deforest.m"
          MR_Word transform_hlds__deforest__V_35_35;

#line 1897 "deforest.m"
          {
#line 1897 "deforest.m"
            transform_hlds__deforest__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1897 "deforest.m"
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_53_53, 0) = ((MR_Box) ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10));
#line 1897 "deforest.m"
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_53_53, 1) = ((MR_Box) ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11));
#line 1897 "deforest.m"
          }
#line 1897 "deforest.m"
          {
#line 1897 "deforest.m"
            (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[0], (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18, ((MR_Box) (transform_hlds__deforest__V_53_53)), &transform_hlds__deforest__conv0_ProcArgInfo_32);
          }
#line 1897 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1897 "deforest.m"
            {
#line 1897 "deforest.m"
              transform_hlds__deforest__ProcArgInfo_32 = ((MR_Word) transform_hlds__deforest__conv0_ProcArgInfo_32);
#line 1897 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_TRUE;
#line 1897 "deforest.m"
            }
#line 1897 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1897 "deforest.m"
            {
#line 1898 "deforest.m"
              transform_hlds__deforest__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__ProcArgInfo_32, (MR_Integer) 0)));
#line 1898 "deforest.m"
              transform_hlds__deforest__LeftArgs_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__ProcArgInfo_32, (MR_Integer) 1)));
#line 1898 "deforest.m"
              transform_hlds__deforest__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__ProcArgInfo_32, (MR_Integer) 2)));
#line 4295 "transform_hlds.deforest.c"
              transform_hlds__deforest__TypeCtorInfo_89_89 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1899 "deforest.m"
              {
#line 1899 "deforest.m"
                mercury__set__member_2_p_1(transform_hlds__deforest__TypeCtorInfo_89_89, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_36, transform_hlds__deforest__LeftArgs_34, transform_hlds__deforest__deforest_call_9_p_0_3, transform_hlds__deforest__env_ptr);
              }
#line 1897 "deforest.m"
            }
#line 1897 "deforest.m"
        }
#line 1897 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_FALSE;
#line 1897 "deforest.m"
      }
#line 1897 "deforest.m"
    else
#line 1897 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_TRUE;
#line 1897 "deforest.m"
  }
#line 1897 "deforest.m"
}

#line 1873 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0(
#line 1873 "deforest.m"
  MR_Word transform_hlds__deforest__PredId_10,
#line 1873 "deforest.m"
  MR_Integer transform_hlds__deforest__ProcId_11,
#line 1873 "deforest.m"
  MR_Word transform_hlds__deforest__Args_12,
#line 1873 "deforest.m"
  MR_Word transform_hlds__deforest__SymName_13,
#line 1873 "deforest.m"
  MR_Word transform_hlds__deforest__BuiltinState_14,
#line 1873 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_15,
#line 1873 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_16,
#line 1873 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49,
#line 1873 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_50)
#line 1873 "deforest.m"
{
#line 1873 "deforest.m"
  {
#line 1873 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s transform_hlds__deforest__env;

#line 1873 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10 = transform_hlds__deforest__PredId_10;
#line 1873 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11 = transform_hlds__deforest__ProcId_11;
#line 1873 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12 = transform_hlds__deforest__Args_12;
#line 1873 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14 = transform_hlds__deforest__BuiltinState_14;
#line 1878 "deforest.m"
    {
#line 1878 "deforest.m"
      MR_String transform_hlds__deforest__Name_21;
#line 1878 "deforest.m"
      MR_Integer transform_hlds__deforest__Arity_22;
#line 1878 "deforest.m"
      MR_Word transform_hlds__deforest__GoalInfo0_24;
#line 1878 "deforest.m"
      MR_Word transform_hlds__deforest__Context_25;
#line 1878 "deforest.m"
      MR_Word transform_hlds__deforest__LocalTermInfo0_26;
#line 1878 "deforest.m"
      MR_Word transform_hlds__deforest__PredInfo_27;
#line 1878 "deforest.m"
      MR_Word transform_hlds__deforest__Globals_28;
#line 1878 "deforest.m"
      MR_Word transform_hlds__deforest__DebugPD_31;
#line 1884 "deforest.m"
      MR_Word transform_hlds__deforest__GoalExpr0_23;

#line 1879 "deforest.m"
      {
#line 1879 "deforest.m"
        transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18);
      }
#line 1880 "deforest.m"
      {
#line 1880 "deforest.m"
        transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19);
      }
#line 1881 "deforest.m"
      {
#line 1881 "deforest.m"
        transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20);
      }
#line 1882 "deforest.m"
      {
#line 1882 "deforest.m"
        transform_hlds__deforest__Name_21 = mdbcomp__prim_data__unqualify_name_1_f_0(transform_hlds__deforest__SymName_13);
      }
#line 4396 "transform_hlds.deforest.c"
      (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_86_86 = (MR_Word) &transform_hlds__deforest_scalar_common_1[1];
#line 1883 "deforest.m"
      {
#line 1883 "deforest.m"
        mercury__list__length_2_p_0((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_86_86, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, &transform_hlds__deforest__Arity_22);
      }
#line 1884 "deforest.m"
      transform_hlds__deforest__GoalExpr0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_15, (MR_Integer) 0)));
#line 1884 "deforest.m"
      transform_hlds__deforest__GoalInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_15, (MR_Integer) 1)));
#line 1885 "deforest.m"
      {
#line 1885 "deforest.m"
        transform_hlds__deforest__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__deforest__GoalInfo0_24);
      }
#line 1887 "deforest.m"
      {
#line 1887 "deforest.m"
        transform_hlds__pd_info__pd_info_get_local_term_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &transform_hlds__deforest__LocalTermInfo0_26);
      }
#line 1889 "deforest.m"
      {
#line 1889 "deforest.m"
        transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &transform_hlds__deforest__PredInfo_27);
      }
#line 1890 "deforest.m"
      {
#line 1890 "deforest.m"
        hlds__hlds_module__module_info_get_globals_2_p_0((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, &transform_hlds__deforest__Globals_28);
      }
#line 1891 "deforest.m"
      {
#line 1891 "deforest.m"
        libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_28, (MR_Integer) 392, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29);
      }
#line 1893 "deforest.m"
      {
#line 1893 "deforest.m"
        hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__deforest__PredInfo_27, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__CallerMarkers_30);
      }
#line 1894 "deforest.m"
      {
#line 1894 "deforest.m"
        libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_28, (MR_Integer) 70, &transform_hlds__deforest__DebugPD_31);
      }
#line 1897 "deforest.m"
      {
#line 1897 "deforest.m"
        transform_hlds__deforest__deforest_call_9_p_0_4(&transform_hlds__deforest__env);
      }
#line 1954 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1927 "deforest.m"
        {
#line 1923 "deforest.m"
          MR_Word transform_hlds__deforest__V_58_58;
#line 1923 "deforest.m"
          MR_Word transform_hlds__deforest__V_60_60;
#line 1923 "deforest.m"
          MR_Word transform_hlds__deforest__V_61_61;
#line 1923 "deforest.m"
          MR_Word transform_hlds__deforest__V_62_62;
#line 1947 "deforest.m"
          MR_Word transform_hlds__deforest__LocalTermInfo_46;

#line 1926 "deforest.m"
          {
#line 1926 "deforest.m"
            transform_hlds__deforest__V_60_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1926 "deforest.m"
            MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_60_60, 0) = ((MR_Box) (transform_hlds__deforest__Name_21));
#line 1926 "deforest.m"
          }
#line 1926 "deforest.m"
          {
#line 1926 "deforest.m"
            transform_hlds__deforest__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1926 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_62_62, 0) = ((MR_Box) (transform_hlds__deforest__Arity_22));
#line 1926 "deforest.m"
          }
#line 1926 "deforest.m"
          {
#line 1926 "deforest.m"
            transform_hlds__deforest__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1926 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_61_61, 0) = ((MR_Box) (transform_hlds__deforest__V_62_62));
#line 1926 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1926 "deforest.m"
          }
#line 1924 "deforest.m"
          {
#line 1924 "deforest.m"
            transform_hlds__deforest__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1924 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_58_58, 0) = ((MR_Box) (transform_hlds__deforest__V_60_60));
#line 1924 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_58_58, 1) = ((MR_Box) (transform_hlds__deforest__V_61_61));
#line 1924 "deforest.m"
          }
#line 1924 "deforest.m"
          {
#line 1924 "deforest.m"
            transform_hlds__pd_debug__pd_debug_message_context_6_p_0(transform_hlds__deforest__DebugPD_31, transform_hlds__deforest__Context_25, (MR_String) "Found extra information for call to %s/%i\n", transform_hlds__deforest__V_58_58);
          }
#line 1929 "deforest.m"
          {
#line 1929 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__pd_term__local_check_5_p_0((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, transform_hlds__deforest__Goal0_15, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20, transform_hlds__deforest__LocalTermInfo0_26, &transform_hlds__deforest__LocalTermInfo_46);
          }
#line 1947 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1935 "deforest.m"
            {
#line 1935 "deforest.m"
              MR_Word transform_hlds__deforest__Goal1_47;
#line 1935 "deforest.m"
              MR_Word transform_hlds__deforest__Optimized_48;
#line 1935 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68;
#line 1935 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71;
#line 1935 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_72_72;

#line 1933 "deforest.m"
              {
#line 1933 "deforest.m"
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_31, (MR_String) "Local termination check succeeded\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 1936 "deforest.m"
              {
#line 1936 "deforest.m"
                transform_hlds__pd_info__pd_info_set_local_term_info_3_p_0(transform_hlds__deforest__LocalTermInfo_46, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68);
              }
#line 1937 "deforest.m"
              {
#line 1937 "deforest.m"
                transform_hlds__deforest__unfold_call_10_p_0((MR_Integer) 1, (MR_Integer) 1, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, transform_hlds__deforest__Goal0_15, &transform_hlds__deforest__Goal1_47, &transform_hlds__deforest__Optimized_48, transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71);
              }
#line 1942 "deforest.m"
              if ((transform_hlds__deforest__Optimized_48 == (MR_Integer) 0))
#line 1943 "deforest.m"
                {
#line 1944 "deforest.m"
                  *transform_hlds__deforest__Goal_16 = transform_hlds__deforest__Goal1_47;
#line 1944 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_PDInfo_72_72 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71;
#line 1943 "deforest.m"
                }
#line 1942 "deforest.m"
              else
#line 1941 "deforest.m"
                {
#line 1941 "deforest.m"
                  transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Goal1_47, transform_hlds__deforest__Goal_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_72_72);
                }
#line 1946 "deforest.m"
              {
#line 1946 "deforest.m"
                transform_hlds__pd_info__pd_info_set_local_term_info_3_p_0(transform_hlds__deforest__LocalTermInfo0_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_72_72, transform_hlds__deforest__STATE_VARIABLE_PDInfo_50);
#line 1946 "deforest.m"
                return;
              }
#line 1935 "deforest.m"
            }
#line 1947 "deforest.m"
          else
#line 1951 "deforest.m"
            {
#line 1949 "deforest.m"
              {
#line 1949 "deforest.m"
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_31, (MR_String) "Local termination check failed\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 1952 "deforest.m"
              *transform_hlds__deforest__Goal_16 = transform_hlds__deforest__Goal0_15;
#line 1952 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_50 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49;
#line 1951 "deforest.m"
            }
#line 1927 "deforest.m"
        }
#line 1954 "deforest.m"
      else
#line 1959 "deforest.m"
        {
#line 1955 "deforest.m"
          MR_Word transform_hlds__deforest__V_80_80;
#line 1955 "deforest.m"
          MR_Word transform_hlds__deforest__V_82_82;
#line 1955 "deforest.m"
          MR_Word transform_hlds__deforest__V_83_83;
#line 1955 "deforest.m"
          MR_Word transform_hlds__deforest__V_84_84;

#line 1958 "deforest.m"
          {
#line 1958 "deforest.m"
            transform_hlds__deforest__V_82_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1958 "deforest.m"
            MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_82_82, 0) = ((MR_Box) (transform_hlds__deforest__Name_21));
#line 1958 "deforest.m"
          }
#line 1958 "deforest.m"
          {
#line 1958 "deforest.m"
            transform_hlds__deforest__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1958 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_84_84, 0) = ((MR_Box) (transform_hlds__deforest__Arity_22));
#line 1958 "deforest.m"
          }
#line 1958 "deforest.m"
          {
#line 1958 "deforest.m"
            transform_hlds__deforest__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1958 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_83_83, 0) = ((MR_Box) (transform_hlds__deforest__V_84_84));
#line 1958 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1958 "deforest.m"
          }
#line 1956 "deforest.m"
          {
#line 1956 "deforest.m"
            transform_hlds__deforest__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1956 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_80_80, 0) = ((MR_Box) (transform_hlds__deforest__V_82_82));
#line 1956 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_80_80, 1) = ((MR_Box) (transform_hlds__deforest__V_83_83));
#line 1956 "deforest.m"
          }
#line 1956 "deforest.m"
          {
#line 1956 "deforest.m"
            transform_hlds__pd_debug__pd_debug_message_context_6_p_0(transform_hlds__deforest__DebugPD_31, transform_hlds__deforest__Context_25, (MR_String) "No extra information for call to %s/%i\n", transform_hlds__deforest__V_80_80);
          }
#line 1960 "deforest.m"
          *transform_hlds__deforest__Goal_16 = transform_hlds__deforest__Goal0_15;
#line 1960 "deforest.m"
          *transform_hlds__deforest__STATE_VARIABLE_PDInfo_50 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49;
#line 1959 "deforest.m"
        }
#line 1878 "deforest.m"
    }
#line 1873 "deforest.m"
  }
#line 1873 "deforest.m"
}

#line 1851 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0_1(
#line 1851 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 1851 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1851 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1851 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 1851 "deforest.m"
{
#line 1851 "deforest.m"
  {
#line 1851 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 1851 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_HeadVar__3_3;

#line 1851 "deforest.m"
    {
#line 1851 "deforest.m"
      transform_hlds__pd_info__pd_info_update_goal_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_HeadVar__3_3);
    }
#line 1851 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__3_3));
#line 1851 "deforest.m"
  }
#line 1851 "deforest.m"
}

#line 1842 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0(
#line 1842 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_10,
#line 1842 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_11,
#line 1842 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend0_12,
#line 1842 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals0_13,
#line 1842 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrBranch_14,
#line 1842 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_15,
#line 1842 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_16,
#line 1842 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30,
#line 1842 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_31)
#line 1842 "deforest.m"
{
#line 1847 "deforest.m"
  {
#line 1847 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1847 "deforest.m"
    MR_Word transform_hlds__deforest__GoalToAppend_19;
#line 1847 "deforest.m"
    MR_Word transform_hlds__deforest__GoalList0_20;
#line 1847 "deforest.m"
    MR_Word transform_hlds__deforest__GoalListToAppend_21;
#line 1847 "deforest.m"
    MR_Word transform_hlds__deforest__Goals_22;
#line 1847 "deforest.m"
    MR_Word transform_hlds__deforest__SubNonLocals_23;
#line 1847 "deforest.m"
    MR_Word transform_hlds__deforest__NonLocals_24;
#line 1847 "deforest.m"
    MR_Word transform_hlds__deforest__Delta0_25;
#line 1847 "deforest.m"
    MR_Word transform_hlds__deforest__Delta_26;
#line 1847 "deforest.m"
    MR_Word transform_hlds__deforest__Detism_27;
#line 1847 "deforest.m"
    MR_Word transform_hlds__deforest__Purity_28;
#line 1847 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_29;
#line 1847 "deforest.m"
    MR_Word transform_hlds__deforest__V_37_37;
#line 1847 "deforest.m"
    MR_Word transform_hlds__deforest__V_38_38;
#line 1847 "deforest.m"
    MR_Word transform_hlds__deforest__V_39_39;
#line 1847 "deforest.m"
    MR_Word transform_hlds__deforest__V_41_41;

#line 1848 "deforest.m"
    {
#line 1848 "deforest.m"
      transform_hlds__deforest__succeeded = mercury__set__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__deforest__CurrBranch_14)), transform_hlds__deforest__Branches_15);
    }
#line 1854 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 1850 "deforest.m"
      {
#line 1850 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_18;
#line 1850 "deforest.m"
        MR_Word transform_hlds__deforest__V_33_33;
#line 1850 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;
#line 1850 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_35_35;
#line 1850 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr0_56;
#line 1850 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo0_57;
#line 1850 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr_58;
#line 1850 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo_59;
#line 1851 "deforest.m"
        MR_Box transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_34_34;

#line 1850 "deforest.m"
        {
#line 1850 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30, &transform_hlds__deforest__InstMap0_18);
        }
#line 1851 "deforest.m"
        {
#line 1851 "deforest.m"
          transform_hlds__deforest__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_33_33, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_10));
#line 1851 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_33_33, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_11));
#line 1851 "deforest.m"
        }
#line 1851 "deforest.m"
        {
#line 1851 "deforest.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0, (MR_Word) &transform_hlds__deforest_scalar_common_2[12], transform_hlds__deforest__V_33_33, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30)), &transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_34_34);
        }
#line 1851 "deforest.m"
        transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34 = ((MR_Word) transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_34_34);
#line 274 "deforest.m"
        transform_hlds__deforest__GoalExpr0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend0_12, (MR_Integer) 0)));
#line 274 "deforest.m"
        transform_hlds__deforest__GoalInfo0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend0_12, (MR_Integer) 1)));
#line 275 "deforest.m"
        {
#line 275 "deforest.m"
          transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_56, &transform_hlds__deforest__GoalExpr_58, transform_hlds__deforest__GoalInfo0_57, &transform_hlds__deforest__GoalInfo_59, transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_35_35);
        }
#line 276 "deforest.m"
        {
#line 276 "deforest.m"
          transform_hlds__deforest__GoalToAppend_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 276 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend_19, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_58));
#line 276 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend_19, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_59));
#line 276 "deforest.m"
        }
#line 1853 "deforest.m"
        {
#line 1853 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_18, transform_hlds__deforest__STATE_VARIABLE_PDInfo_35_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_31);
        }
#line 1850 "deforest.m"
      }
#line 1854 "deforest.m"
    else
#line 1855 "deforest.m"
      {
#line 1855 "deforest.m"
        transform_hlds__deforest__GoalToAppend_19 = transform_hlds__deforest__GoalToAppend0_12;
#line 1855 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_31 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30;
#line 1855 "deforest.m"
      }
#line 1857 "deforest.m"
    {
#line 1857 "deforest.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__deforest__Goal0_10, &transform_hlds__deforest__GoalList0_20);
    }
#line 1858 "deforest.m"
    {
#line 1858 "deforest.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__deforest__GoalToAppend_19, &transform_hlds__deforest__GoalListToAppend_21);
    }
#line 1859 "deforest.m"
    {
#line 1859 "deforest.m"
      transform_hlds__deforest__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1859 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_39_39, 0) = ((MR_Box) (transform_hlds__deforest__GoalListToAppend_21));
#line 1859 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1859 "deforest.m"
    }
#line 1859 "deforest.m"
    {
#line 1859 "deforest.m"
      transform_hlds__deforest__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1859 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_38_38, 0) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_11));
#line 1859 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_38_38, 1) = ((MR_Box) (transform_hlds__deforest__V_39_39));
#line 1859 "deforest.m"
    }
#line 1859 "deforest.m"
    {
#line 1859 "deforest.m"
      transform_hlds__deforest__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1859 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_37_37, 0) = ((MR_Box) (transform_hlds__deforest__GoalList0_20));
#line 1859 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_37_37, 1) = ((MR_Box) (transform_hlds__deforest__V_38_38));
#line 1859 "deforest.m"
    }
#line 1859 "deforest.m"
    {
#line 1859 "deforest.m"
      mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__V_37_37, &transform_hlds__deforest__Goals_22);
    }
#line 1861 "deforest.m"
    {
#line 1861 "deforest.m"
      hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__SubNonLocals_23);
    }
#line 1862 "deforest.m"
    {
#line 1862 "deforest.m"
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__NonLocals0_13, transform_hlds__deforest__SubNonLocals_23, &transform_hlds__deforest__NonLocals_24);
    }
#line 1863 "deforest.m"
    {
#line 1863 "deforest.m"
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__Delta0_25);
    }
#line 1864 "deforest.m"
    {
#line 1864 "deforest.m"
      hlds__instmap__instmap_delta_restrict_3_p_0(transform_hlds__deforest__NonLocals_24, transform_hlds__deforest__Delta0_25, &transform_hlds__deforest__Delta_26);
    }
#line 1865 "deforest.m"
    {
#line 1865 "deforest.m"
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__Detism_27);
    }
#line 1866 "deforest.m"
    {
#line 1866 "deforest.m"
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__Purity_28);
    }
#line 1867 "deforest.m"
    {
#line 1867 "deforest.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__deforest__NonLocals_24, transform_hlds__deforest__Delta_26, transform_hlds__deforest__Detism_27, transform_hlds__deforest__Purity_28, &transform_hlds__deforest__GoalInfo_29);
    }
#line 1868 "deforest.m"
    {
#line 1868 "deforest.m"
      transform_hlds__deforest__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1868 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_41_41, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1868 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_41_41, 2) = ((MR_Box) (transform_hlds__deforest__Goals_22));
#line 1868 "deforest.m"
    }
#line 1868 "deforest.m"
    {
#line 1868 "deforest.m"
      MR_Word base;
#line 1868 "deforest.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1868 "deforest.m"
      *transform_hlds__deforest__Goal_16 = base;
#line 1868 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__V_41_41));
#line 1868 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_29));
#line 1868 "deforest.m"
    }
#line 1847 "deforest.m"
  }
#line 1842 "deforest.m"
}

#line 1824 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_to_cases_10_p_0(
#line 1824 "deforest.m"
  MR_Word transform_hlds__deforest__Var_1,
#line 1824 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_2,
#line 1824 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend_3,
#line 1824 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_4,
#line 1824 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrCase_5,
#line 1824 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_6,
#line 1824 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__7_7,
#line 1824 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__8_8,
#line 1824 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9,
#line 1824 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_10)
#line 1824 "deforest.m"
{
#line 1828 "deforest.m"
  {
#line 1828 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 1828 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1828 "deforest.m"
      {
#line 1828 "deforest.m"
        *transform_hlds__deforest__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1828 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_10 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9;
#line 1828 "deforest.m"
      }
#line 1828 "deforest.m"
    else
#line 1830 "deforest.m"
      {
#line 1830 "deforest.m"
        MR_Word transform_hlds__deforest__Case0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__7_7, (MR_Integer) 0)));
#line 1830 "deforest.m"
        MR_Word transform_hlds__deforest__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__7_7, (MR_Integer) 1)));
#line 1830 "deforest.m"
        MR_Word transform_hlds__deforest__Case_28;
#line 1830 "deforest.m"
        MR_Word transform_hlds__deforest__Cases_29;
#line 1830 "deforest.m"
        MR_Word transform_hlds__deforest__MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_26, (MR_Integer) 0)));
#line 1830 "deforest.m"
        MR_Word transform_hlds__deforest__OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_26, (MR_Integer) 1)));
#line 1830 "deforest.m"
        MR_Word transform_hlds__deforest__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_26, (MR_Integer) 2)));
#line 1830 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_34;
#line 1830 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_35;
#line 1830 "deforest.m"
        MR_Integer transform_hlds__deforest__NextCase_36;
#line 1830 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_39_39;
#line 1830 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40;
#line 1830 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_42_42;

#line 1832 "deforest.m"
        {
#line 1832 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9, &transform_hlds__deforest__InstMap0_34);
        }
#line 1833 "deforest.m"
        {
#line 1833 "deforest.m"
          transform_hlds__pd_info__pd_info_bind_var_to_functors_5_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__MainConsId_31, transform_hlds__deforest__OtherConsIds_32, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_39_39);
        }
#line 1834 "deforest.m"
        {
#line 1834 "deforest.m"
          transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Goal0_33, transform_hlds__deforest__BetweenGoals_2, transform_hlds__deforest__GoalToAppend_3, transform_hlds__deforest__NonLocals_4, transform_hlds__deforest__CurrCase_5, transform_hlds__deforest__Branches_6, &transform_hlds__deforest__Goal_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_39_39, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40);
        }
#line 1836 "deforest.m"
        {
#line 1836 "deforest.m"
          transform_hlds__deforest__Case_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1836 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_28, 0) = ((MR_Box) (transform_hlds__deforest__MainConsId_31));
#line 1836 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_28, 1) = ((MR_Box) (transform_hlds__deforest__OtherConsIds_32));
#line 1836 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_28, 2) = ((MR_Box) (transform_hlds__deforest__Goal_35));
#line 1836 "deforest.m"
        }
#line 1837 "deforest.m"
        transform_hlds__deforest__NextCase_36 = (transform_hlds__deforest__CurrCase_5 + (MR_Integer) 1);
#line 1838 "deforest.m"
        {
#line 1838 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_34, transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_42_42);
        }
#line 1839 "deforest.m"
        {
#line 1839 "deforest.m"
          transform_hlds__deforest__append_goal_to_cases_10_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__BetweenGoals_2, transform_hlds__deforest__GoalToAppend_3, transform_hlds__deforest__NonLocals_4, transform_hlds__deforest__NextCase_36, transform_hlds__deforest__Branches_6, transform_hlds__deforest__Cases0_27, &transform_hlds__deforest__Cases_29, transform_hlds__deforest__STATE_VARIABLE_PDInfo_42_42, transform_hlds__deforest__STATE_VARIABLE_PDInfo_10);
        }
#line 1830 "deforest.m"
        {
#line 1830 "deforest.m"
          MR_Word base;
#line 1830 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1830 "deforest.m"
          *transform_hlds__deforest__HeadVar__8_8 = base;
#line 1830 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Case_28));
#line 1830 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Cases_29));
#line 1830 "deforest.m"
        }
#line 1830 "deforest.m"
      }
#line 1828 "deforest.m"
  }
#line 1824 "deforest.m"
}

#line 1809 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(
#line 1809 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_1,
#line 1809 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend_2,
#line 1809 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_3,
#line 1809 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrBranch_4,
#line 1809 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_5,
#line 1809 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__6_6,
#line 1809 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__7_7,
#line 1809 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
#line 1809 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9)
#line 1809 "deforest.m"
{
#line 1813 "deforest.m"
  {
#line 1813 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 1813 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1813 "deforest.m"
      {
#line 1813 "deforest.m"
        *transform_hlds__deforest__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1813 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_9 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8;
#line 1813 "deforest.m"
      }
#line 1813 "deforest.m"
    else
#line 1815 "deforest.m"
      {
#line 1815 "deforest.m"
        MR_Word transform_hlds__deforest__Goal0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__6_6, (MR_Integer) 0)));
#line 1815 "deforest.m"
        MR_Word transform_hlds__deforest__Goals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__6_6, (MR_Integer) 1)));
#line 1815 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_25;
#line 1815 "deforest.m"
        MR_Word transform_hlds__deforest__Goals_26;
#line 1815 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_28;
#line 1815 "deforest.m"
        MR_Integer transform_hlds__deforest__NextBranch_29;
#line 1815 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_32_32;
#line 1815 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;

#line 1816 "deforest.m"
        {
#line 1816 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__deforest__InstMap0_28);
        }
#line 1817 "deforest.m"
        {
#line 1817 "deforest.m"
          transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Goal0_23, transform_hlds__deforest__BetweenGoals_1, transform_hlds__deforest__GoalToAppend_2, transform_hlds__deforest__NonLocals_3, transform_hlds__deforest__CurrBranch_4, transform_hlds__deforest__Branches_5, &transform_hlds__deforest__Goal_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_32_32);
        }
#line 1819 "deforest.m"
        transform_hlds__deforest__NextBranch_29 = (transform_hlds__deforest__CurrBranch_4 + (MR_Integer) 1);
#line 1820 "deforest.m"
        {
#line 1820 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_28, transform_hlds__deforest__STATE_VARIABLE_PDInfo_32_32, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34);
        }
#line 1821 "deforest.m"
        {
#line 1821 "deforest.m"
          transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(transform_hlds__deforest__BetweenGoals_1, transform_hlds__deforest__GoalToAppend_2, transform_hlds__deforest__NonLocals_3, transform_hlds__deforest__NextBranch_29, transform_hlds__deforest__Branches_5, transform_hlds__deforest__Goals0_24, &transform_hlds__deforest__Goals_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34, transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);
        }
#line 1815 "deforest.m"
        {
#line 1815 "deforest.m"
          MR_Word base;
#line 1815 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1815 "deforest.m"
          *transform_hlds__deforest__HeadVar__7_7 = base;
#line 1815 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Goal_25));
#line 1815 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_26));
#line 1815 "deforest.m"
        }
#line 1815 "deforest.m"
      }
#line 1813 "deforest.m"
  }
#line 1809 "deforest.m"
}

#line 1736 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__push_goal_into_goal_8_p_0(
#line 1736 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_9,
#line 1736 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_10,
#line 1736 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_11,
#line 1736 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_12,
#line 1736 "deforest.m"
  MR_Word transform_hlds__deforest__LaterGoal_13,
#line 1736 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_14,
#line 1736 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87,
#line 1736 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_88)
#line 1736 "deforest.m"
{
#line 1741 "deforest.m"
  {
#line 1741 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__InstMap0_16;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierGoalExpr_17;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr_24;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__Delta0_66;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__LaterInfo_68;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__Delta1_69;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__Delta2_70;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__Delta_71;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__Detism0_72;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__Detism1_73;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__Detism_74;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__Purity0_75;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__Purity1_76;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__Purity_77;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_78;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__Goal2_79;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_80;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_81;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__Simplifications0_82;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__SimpList0_83;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__SimpList_84;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__Simplifications_85;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__Goal3_86;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__V_103_103;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110;
#line 1741 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_111_111;
#line 1743 "deforest.m"
    MR_Word transform_hlds__deforest__V_18_18;
#line 1781 "deforest.m"
    MR_Word transform_hlds__deforest__V_67_67;

#line 1742 "deforest.m"
    {
#line 1742 "deforest.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__InstMap0_16);
    }
#line 1743 "deforest.m"
    transform_hlds__deforest__EarlierGoalExpr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_11, (MR_Integer) 0)));
#line 1743 "deforest.m"
    transform_hlds__deforest__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_11, (MR_Integer) 1)));
#line 1750 "deforest.m"
    if (((((MR_tag((MR_Word) transform_hlds__deforest__EarlierGoalExpr_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1763 "deforest.m"
      {
#line 1763 "deforest.m"
        MR_Word transform_hlds__deforest__Disjuncts0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 1)));
#line 1763 "deforest.m"
        MR_Word transform_hlds__deforest__Disjuncts_36;

#line 1764 "deforest.m"
        {
#line 1764 "deforest.m"
          transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__NonLocals_9, (MR_Integer) 1, transform_hlds__deforest__DeforestInfo_10, transform_hlds__deforest__Disjuncts0_35, &transform_hlds__deforest__Disjuncts_36, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101);
        }
#line 1766 "deforest.m"
        {
#line 1766 "deforest.m"
          transform_hlds__deforest__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1766 "deforest.m"
          MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1766 "deforest.m"
          MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 1) = ((MR_Box) (transform_hlds__deforest__Disjuncts_36));
#line 1766 "deforest.m"
        }
#line 1763 "deforest.m"
      }
#line 1750 "deforest.m"
    else
#line 1750 "deforest.m"
      if (((((MR_tag((MR_Word) transform_hlds__deforest__EarlierGoalExpr_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1751 "deforest.m"
        {
#line 1751 "deforest.m"
          MR_Word transform_hlds__deforest__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 1)));
#line 1751 "deforest.m"
          MR_Word transform_hlds__deforest__Cond_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 2)));
#line 1751 "deforest.m"
          MR_Word transform_hlds__deforest__Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 3)));
#line 1751 "deforest.m"
          MR_Word transform_hlds__deforest__Else0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 4)));
#line 1751 "deforest.m"
          MR_Word transform_hlds__deforest__CondInfo_30;
#line 1751 "deforest.m"
          MR_Word transform_hlds__deforest__CondNonLocals_31;
#line 1751 "deforest.m"
          MR_Word transform_hlds__deforest__ThenNonLocals_32;
#line 1751 "deforest.m"
          MR_Word transform_hlds__deforest__Then_33;
#line 1751 "deforest.m"
          MR_Word transform_hlds__deforest__Else_34;
#line 1751 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94;
#line 1751 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96;
#line 1751 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 1753 "deforest.m"
          MR_Word transform_hlds__deforest__V_29_29;

#line 1752 "deforest.m"
          {
#line 1752 "deforest.m"
            transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Cond_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94);
          }
#line 1753 "deforest.m"
          transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Cond_26, (MR_Integer) 0)));
#line 1753 "deforest.m"
          transform_hlds__deforest__CondInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Cond_26, (MR_Integer) 1)));
#line 1754 "deforest.m"
          {
#line 1754 "deforest.m"
            transform_hlds__deforest__CondNonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__CondInfo_30);
          }
#line 1755 "deforest.m"
          {
#line 1755 "deforest.m"
            parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__CondNonLocals_31, transform_hlds__deforest__NonLocals_9, &transform_hlds__deforest__ThenNonLocals_32);
          }
#line 1756 "deforest.m"
          {
#line 1756 "deforest.m"
            transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Then0_27, transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__ThenNonLocals_32, (MR_Integer) 1, transform_hlds__deforest__DeforestInfo_10, &transform_hlds__deforest__Then_33, transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96);
          }
#line 1758 "deforest.m"
          {
#line 1758 "deforest.m"
            transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
          }
#line 1759 "deforest.m"
          {
#line 1759 "deforest.m"
            transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Else0_28, transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__NonLocals_9, (MR_Integer) 2, transform_hlds__deforest__DeforestInfo_10, &transform_hlds__deforest__Else_34, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101);
          }
#line 1761 "deforest.m"
          {
#line 1761 "deforest.m"
            transform_hlds__deforest__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1761 "deforest.m"
            MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1761 "deforest.m"
            MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 1) = ((MR_Box) (transform_hlds__deforest__Vars_25));
#line 1761 "deforest.m"
            MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 2) = ((MR_Box) (transform_hlds__deforest__Cond_26));
#line 1761 "deforest.m"
            MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 3) = ((MR_Box) (transform_hlds__deforest__Then_33));
#line 1761 "deforest.m"
            MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 4) = ((MR_Box) (transform_hlds__deforest__Else_34));
#line 1761 "deforest.m"
          }
#line 1751 "deforest.m"
        }
#line 1750 "deforest.m"
      else
#line 1750 "deforest.m"
        if (((((MR_tag((MR_Word) transform_hlds__deforest__EarlierGoalExpr_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1745 "deforest.m"
          {
#line 1745 "deforest.m"
            MR_Word transform_hlds__deforest__Var1_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 1)));
#line 1745 "deforest.m"
            MR_Word transform_hlds__deforest__CanFail1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 2)));
#line 1745 "deforest.m"
            MR_Word transform_hlds__deforest__Cases1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 3)));
#line 1745 "deforest.m"
            MR_Word transform_hlds__deforest__CaseNonLocals_22;
#line 1745 "deforest.m"
            MR_Word transform_hlds__deforest__Cases_23;

#line 1746 "deforest.m"
            {
#line 1746 "deforest.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__Var1_19, transform_hlds__deforest__NonLocals_9, &transform_hlds__deforest__CaseNonLocals_22);
            }
#line 1747 "deforest.m"
            {
#line 1747 "deforest.m"
              transform_hlds__deforest__append_goal_to_cases_10_p_0(transform_hlds__deforest__Var1_19, transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__CaseNonLocals_22, (MR_Integer) 1, transform_hlds__deforest__DeforestInfo_10, transform_hlds__deforest__Cases1_21, &transform_hlds__deforest__Cases_23, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101);
            }
#line 1749 "deforest.m"
            {
#line 1749 "deforest.m"
              transform_hlds__deforest__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1749 "deforest.m"
              MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1749 "deforest.m"
              MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 1) = ((MR_Box) (transform_hlds__deforest__Var1_19));
#line 1749 "deforest.m"
              MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 2) = ((MR_Box) (transform_hlds__deforest__CanFail1_20));
#line 1749 "deforest.m"
              MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 3) = ((MR_Box) (transform_hlds__deforest__Cases_23));
#line 1749 "deforest.m"
            }
#line 1745 "deforest.m"
          }
#line 1750 "deforest.m"
        else
#line 1776 "deforest.m"
          {
#line 1777 "deforest.m"
            {
#line 1777 "deforest.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.push_goal_into_goal\'/8", (MR_String) "unexpected goal type");
#line 1777 "deforest.m"
              return;
            }
#line 1776 "deforest.m"
          }
#line 1779 "deforest.m"
    {
#line 1779 "deforest.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102);
    }
#line 1780 "deforest.m"
    {
#line 1780 "deforest.m"
      transform_hlds__deforest__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1780 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_103_103, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_11));
#line 1780 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_103_103, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_12));
#line 1780 "deforest.m"
    }
#line 1780 "deforest.m"
    {
#line 1780 "deforest.m"
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__deforest__V_103_103, &transform_hlds__deforest__Delta0_66);
    }
#line 1781 "deforest.m"
    transform_hlds__deforest__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_13, (MR_Integer) 0)));
#line 1781 "deforest.m"
    transform_hlds__deforest__LaterInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_13, (MR_Integer) 1)));
#line 1782 "deforest.m"
    {
#line 1782 "deforest.m"
      transform_hlds__deforest__Delta1_69 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__deforest__LaterInfo_68);
    }
#line 1783 "deforest.m"
    {
#line 1783 "deforest.m"
      hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(transform_hlds__deforest__Delta0_66, transform_hlds__deforest__Delta1_69, (MR_Integer) 2, &transform_hlds__deforest__Delta2_70);
    }
#line 1784 "deforest.m"
    {
#line 1784 "deforest.m"
      hlds__instmap__instmap_delta_restrict_3_p_0(transform_hlds__deforest__NonLocals_9, transform_hlds__deforest__Delta2_70, &transform_hlds__deforest__Delta_71);
    }
#line 1785 "deforest.m"
    {
#line 1785 "deforest.m"
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__deforest__V_103_103, &transform_hlds__deforest__Detism0_72);
    }
#line 1786 "deforest.m"
    {
#line 1786 "deforest.m"
      transform_hlds__deforest__Detism1_73 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__deforest__LaterInfo_68);
    }
#line 1787 "deforest.m"
    {
#line 1787 "deforest.m"
      parse_tree__prog_data__det_conjunction_detism_3_p_0(transform_hlds__deforest__Detism0_72, transform_hlds__deforest__Detism1_73, &transform_hlds__deforest__Detism_74);
    }
#line 1788 "deforest.m"
    {
#line 1788 "deforest.m"
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__deforest__V_103_103, &transform_hlds__deforest__Purity0_75);
    }
#line 1789 "deforest.m"
    {
#line 1789 "deforest.m"
      transform_hlds__deforest__Purity1_76 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__deforest__LaterInfo_68);
    }
#line 1790 "deforest.m"
    {
#line 1790 "deforest.m"
      transform_hlds__deforest__Purity_77 = parse_tree__prog_data__worst_purity_2_f_0(transform_hlds__deforest__Purity0_75, transform_hlds__deforest__Purity1_76);
    }
#line 1791 "deforest.m"
    {
#line 1791 "deforest.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__deforest__NonLocals_9, transform_hlds__deforest__Delta_71, transform_hlds__deforest__Detism_74, transform_hlds__deforest__Purity_77, &transform_hlds__deforest__GoalInfo_78);
    }
#line 1792 "deforest.m"
    {
#line 1792 "deforest.m"
      transform_hlds__deforest__Goal2_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1792 "deforest.m"
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal2_79, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_24));
#line 1792 "deforest.m"
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal2_79, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_78));
#line 1792 "deforest.m"
    }
#line 1794 "deforest.m"
    {
#line 1794 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102, &transform_hlds__deforest__ModuleInfo_80);
    }
#line 1795 "deforest.m"
    {
#line 1795 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_80, &transform_hlds__deforest__Globals_81);
    }
#line 1796 "deforest.m"
    {
#line 1796 "deforest.m"
      check_hlds__simplify__find_simplifications_3_p_0((MR_Integer) 0, transform_hlds__deforest__Globals_81, &transform_hlds__deforest__Simplifications0_82);
    }
#line 1797 "deforest.m"
    {
#line 1797 "deforest.m"
      transform_hlds__deforest__SimpList0_83 = check_hlds__simplify__simplifications_to_list_1_f_0(transform_hlds__deforest__Simplifications0_82);
    }
#line 1800 "deforest.m"
    {
#line 1800 "deforest.m"
      transform_hlds__deforest__SimpList_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1800 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__SimpList_84, 0) = ((MR_Box) ((MR_Integer) 11));
#line 1800 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__SimpList_84, 1) = ((MR_Box) (transform_hlds__deforest__SimpList0_83));
#line 1800 "deforest.m"
    }
#line 1801 "deforest.m"
    {
#line 1801 "deforest.m"
      transform_hlds__deforest__Simplifications_85 = check_hlds__simplify__list_to_simplifications_1_f_0(transform_hlds__deforest__SimpList_84);
    }
#line 1802 "deforest.m"
    {
#line 1802 "deforest.m"
      transform_hlds__pd_util__pd_simplify_goal_5_p_0(transform_hlds__deforest__Simplifications_85, transform_hlds__deforest__Goal2_79, &transform_hlds__deforest__Goal3_86, transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
    }
#line 1803 "deforest.m"
    {
#line 1803 "deforest.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110);
    }
#line 1806 "deforest.m"
    {
#line 1806 "deforest.m"
      transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Goal3_86, transform_hlds__deforest__Goal_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_111_111);
    }
#line 1807 "deforest.m"
    {
#line 1807 "deforest.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_111_111, transform_hlds__deforest__STATE_VARIABLE_PDInfo_88);
#line 1807 "deforest.m"
      return;
    }
#line 1741 "deforest.m"
  }
#line 1736 "deforest.m"
}

#line 1654 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__reorder_conj_5_p_0(
#line 1654 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo0_6,
#line 1654 "deforest.m"
  MR_Word * transform_hlds__deforest__DeforestInfo_7,
#line 1654 "deforest.m"
  MR_Word * transform_hlds__deforest__BeforeIrrelevant_8,
#line 1654 "deforest.m"
  MR_Word * transform_hlds__deforest__AfterIrrelevant_9,
#line 1654 "deforest.m"
  MR_Word transform_hlds__deforest__PDInfo_10)
#line 1654 "deforest.m"
{
#line 1658 "deforest.m"
  {
#line 1658 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1658 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_11;
#line 1658 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_12;
#line 1658 "deforest.m"
    MR_Word transform_hlds__deforest__DebugPD_13;
#line 1658 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierGoal_15;
#line 1658 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierBranchInfo_16;
#line 1658 "deforest.m"
    MR_Word transform_hlds__deforest__BetweenGoals0_17;
#line 1658 "deforest.m"
    MR_Word transform_hlds__deforest__LaterGoal_18;
#line 1658 "deforest.m"
    MR_Word transform_hlds__deforest__LaterBranchInfo_19;
#line 1658 "deforest.m"
    MR_Word transform_hlds__deforest__DeforestBranches_20;
#line 1658 "deforest.m"
    MR_Word transform_hlds__deforest__FullyStrict_21;
#line 1658 "deforest.m"
    MR_Word transform_hlds__deforest__RevBetweenGoals1_22;
#line 1658 "deforest.m"
    MR_Word transform_hlds__deforest__RevBeforeIrrelevant_23;
#line 1658 "deforest.m"
    MR_Word transform_hlds__deforest__BetweenGoals_24;

#line 1659 "deforest.m"
    {
#line 1659 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__PDInfo_10, &transform_hlds__deforest__ModuleInfo_11);
    }
#line 1660 "deforest.m"
    {
#line 1660 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_11, &transform_hlds__deforest__Globals_12);
    }
#line 1661 "deforest.m"
    {
#line 1661 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_12, (MR_Integer) 70, &transform_hlds__deforest__DebugPD_13);
    }
#line 1663 "deforest.m"
    {
#line 1663 "deforest.m"
      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_13, (MR_String) "Reordering conjunction\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 1665 "deforest.m"
    transform_hlds__deforest__EarlierGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 0)));
#line 1665 "deforest.m"
    transform_hlds__deforest__EarlierBranchInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 1)));
#line 1665 "deforest.m"
    transform_hlds__deforest__BetweenGoals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 2)));
#line 1665 "deforest.m"
    transform_hlds__deforest__LaterGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 3)));
#line 1665 "deforest.m"
    transform_hlds__deforest__LaterBranchInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 4)));
#line 1665 "deforest.m"
    transform_hlds__deforest__DeforestBranches_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 5)));
#line 1668 "deforest.m"
    {
#line 1668 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_12, (MR_Integer) 159, &transform_hlds__deforest__FullyStrict_21);
    }
#line 1669 "deforest.m"
    {
#line 1669 "deforest.m"
      transform_hlds__deforest__move_goals__ho2_9_p_0(transform_hlds__deforest__ModuleInfo_11, transform_hlds__deforest__FullyStrict_21, transform_hlds__deforest__BetweenGoals0_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__RevBetweenGoals1_22, transform_hlds__deforest__EarlierGoal_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__RevBeforeIrrelevant_23);
    }
#line 1672 "deforest.m"
    {
#line 1672 "deforest.m"
      transform_hlds__deforest__move_goals__ho1_9_p_0(transform_hlds__deforest__ModuleInfo_11, transform_hlds__deforest__FullyStrict_21, transform_hlds__deforest__RevBetweenGoals1_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__BetweenGoals_24, transform_hlds__deforest__LaterGoal_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__deforest__AfterIrrelevant_9);
    }
#line 1676 "deforest.m"
    {
#line 1676 "deforest.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__RevBeforeIrrelevant_23, transform_hlds__deforest__BeforeIrrelevant_8);
    }
#line 1677 "deforest.m"
    {
#line 1677 "deforest.m"
      MR_Word base;
#line 1677 "deforest.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1677 "deforest.m"
      *transform_hlds__deforest__DeforestInfo_7 = base;
#line 1677 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_15));
#line 1677 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__EarlierBranchInfo_16));
#line 1677 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_24));
#line 1677 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__deforest__LaterGoal_18));
#line 1677 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__deforest__LaterBranchInfo_19));
#line 1677 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__deforest__DeforestBranches_20));
#line 1677 "deforest.m"
    }
#line 1658 "deforest.m"
  }
#line 1654 "deforest.m"
}

#line 1627 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0_1(
#line 1627 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 1627 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1627 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1627 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 1627 "deforest.m"
{
#line 1627 "deforest.m"
  {
#line 1627 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 1627 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_HeadVar__3_31;

#line 1627 "deforest.m"
    {
#line 1627 "deforest.m"
      transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1627__1_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_HeadVar__3_31);
    }
#line 1627 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__3_31));
#line 1627 "deforest.m"
  }
#line 1627 "deforest.m"
}

#line 1619 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(
#line 1619 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_0_27,
#line 1619 "deforest.m"
  MR_Word transform_hlds__deforest__RevBeforeGoals_11,
#line 1619 "deforest.m"
  MR_Word transform_hlds__deforest__BeforeIrrelevant_12,
#line 1619 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_13,
#line 1619 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_14,
#line 1619 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_15,
#line 1619 "deforest.m"
  MR_Word transform_hlds__deforest__AfterIrrelevant_16,
#line 1619 "deforest.m"
  MR_Word transform_hlds__deforest__AfterGoals_17,
#line 1619 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_28)
#line 1619 "deforest.m"
{
#line 1626 "deforest.m"
  {
#line 1626 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1626 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_45_45 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1626 "deforest.m"
    MR_Word transform_hlds__deforest__TypeInfo_46_46 = (MR_Word) &transform_hlds__deforest_scalar_common_1[5];
#line 1626 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_47_47;
#line 1626 "deforest.m"
    MR_Word transform_hlds__deforest__AddGoalNonLocals_19 = (MR_Word) &transform_hlds__deforest_scalar_common_2[11];
#line 1626 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_32_32;
#line 1626 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_33_33;
#line 1626 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_34_34;
#line 1626 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_35_35;
#line 1626 "deforest.m"
    MR_Word transform_hlds__deforest__V_36_36;
#line 1626 "deforest.m"
    MR_Word transform_hlds__deforest__V_37_37;
#line 1626 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38;
#line 1626 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39;
#line 1632 "deforest.m"
    MR_Box transform_hlds__deforest__conv1_STATE_VARIABLE_NonLocals_32_32;
#line 1633 "deforest.m"
    MR_Box transform_hlds__deforest__conv2_STATE_VARIABLE_NonLocals_33_33;
#line 1634 "deforest.m"
    MR_Box transform_hlds__deforest__conv3_STATE_VARIABLE_NonLocals_34_34;
#line 1635 "deforest.m"
    MR_Box transform_hlds__deforest__conv4_STATE_VARIABLE_NonLocals_35_35;
#line 1637 "deforest.m"
    MR_Box transform_hlds__deforest__conv5_STATE_VARIABLE_SubConjNonLocals_38_38;

#line 1632 "deforest.m"
    {
#line 1632 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__RevBeforeGoals_11, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_0_27)), &transform_hlds__deforest__conv1_STATE_VARIABLE_NonLocals_32_32);
    }
#line 1632 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_32_32 = ((MR_Word) transform_hlds__deforest__conv1_STATE_VARIABLE_NonLocals_32_32);
#line 1633 "deforest.m"
    {
#line 1633 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__BeforeIrrelevant_12, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_32_32)), &transform_hlds__deforest__conv2_STATE_VARIABLE_NonLocals_33_33);
    }
#line 1633 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_33_33 = ((MR_Word) transform_hlds__deforest__conv2_STATE_VARIABLE_NonLocals_33_33);
#line 1634 "deforest.m"
    {
#line 1634 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__AfterIrrelevant_16, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_33_33)), &transform_hlds__deforest__conv3_STATE_VARIABLE_NonLocals_34_34);
    }
#line 1634 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_34_34 = ((MR_Word) transform_hlds__deforest__conv3_STATE_VARIABLE_NonLocals_34_34);
#line 1635 "deforest.m"
    {
#line 1635 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__AfterGoals_17, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_34_34)), &transform_hlds__deforest__conv4_STATE_VARIABLE_NonLocals_35_35);
    }
#line 1635 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_35_35 = ((MR_Word) transform_hlds__deforest__conv4_STATE_VARIABLE_NonLocals_35_35);
#line 1637 "deforest.m"
    {
#line 1637 "deforest.m"
      transform_hlds__deforest__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1637 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_36_36, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_13));
#line 1637 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_36_36, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_14));
#line 1637 "deforest.m"
    }
#line 5835 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1637 "deforest.m"
    {
#line 1637 "deforest.m"
      transform_hlds__deforest__V_37_37 = parse_tree__set_of_var__init_0_f_0(transform_hlds__deforest__TypeCtorInfo_47_47);
    }
#line 1637 "deforest.m"
    {
#line 1637 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__V_36_36, ((MR_Box) (transform_hlds__deforest__V_37_37)), &transform_hlds__deforest__conv5_STATE_VARIABLE_SubConjNonLocals_38_38);
    }
#line 1637 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38 = ((MR_Word) transform_hlds__deforest__conv5_STATE_VARIABLE_SubConjNonLocals_38_38);
#line 1642 "deforest.m"
    if ((transform_hlds__deforest__MaybeLaterGoal_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1643 "deforest.m"
      transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39 = transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38;
#line 1642 "deforest.m"
    else
#line 1640 "deforest.m"
      {
#line 1640 "deforest.m"
        MR_Word transform_hlds__deforest__LaterGoal_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeLaterGoal_15, (MR_Integer) 0)));
#line 1640 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_26, (MR_Integer) 1)));
#line 1640 "deforest.m"
        MR_Word transform_hlds__deforest__GoalNonLocals_72;
#line 1628 "deforest.m"
        MR_Word transform_hlds__deforest__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_26, (MR_Integer) 0)));

#line 1629 "deforest.m"
        {
#line 1629 "deforest.m"
          transform_hlds__deforest__GoalNonLocals_72 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__GoalInfo_71);
        }
#line 1630 "deforest.m"
        {
#line 1630 "deforest.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__GoalNonLocals_72, transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38, &transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39);
        }
#line 1640 "deforest.m"
      }
#line 1645 "deforest.m"
    {
#line 1645 "deforest.m"
      parse_tree__set_of_var__intersect_3_p_0(transform_hlds__deforest__TypeCtorInfo_47_47, transform_hlds__deforest__STATE_VARIABLE_NonLocals_35_35, transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39, transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_28);
#line 1645 "deforest.m"
      return;
    }
#line 1626 "deforest.m"
  }
#line 1619 "deforest.m"
}

#line 1605 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(
#line 1605 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals0_8,
#line 1605 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_9,
#line 1605 "deforest.m"
  MR_Word transform_hlds__deforest__RevBeforeGoals_10,
#line 1605 "deforest.m"
  MR_Word transform_hlds__deforest__BeforeIrrelevant_11,
#line 1605 "deforest.m"
  MR_Word transform_hlds__deforest__AfterIrrelevant_12,
#line 1605 "deforest.m"
  MR_Word transform_hlds__deforest__AfterGoals0_13,
#line 1605 "deforest.m"
  MR_Word * transform_hlds__deforest__SubConjNonLocals_14)
#line 1605 "deforest.m"
{
#line 1611 "deforest.m"
  {
#line 1611 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1611 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 0)));
#line 1611 "deforest.m"
    MR_Word transform_hlds__deforest__BetweenGoals_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 2)));
#line 1611 "deforest.m"
    MR_Word transform_hlds__deforest__LaterGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 3)));
#line 1611 "deforest.m"
    MR_Word transform_hlds__deforest__AfterGoals_21;
#line 1611 "deforest.m"
    MR_Word transform_hlds__deforest__V_22_22;
#line 1612 "deforest.m"
    MR_Word transform_hlds__deforest__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 1)));
#line 1612 "deforest.m"
    MR_Word transform_hlds__deforest__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 4)));
#line 1612 "deforest.m"
    MR_Word transform_hlds__deforest__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 5)));

#line 1614 "deforest.m"
    {
#line 1614 "deforest.m"
      mercury__assoc_list__keys_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[3], transform_hlds__deforest__AfterGoals0_13, &transform_hlds__deforest__AfterGoals_21);
    }
#line 1615 "deforest.m"
    {
#line 1615 "deforest.m"
      transform_hlds__deforest__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1615 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_22_22, 0) = ((MR_Box) (transform_hlds__deforest__LaterGoal_18));
#line 1615 "deforest.m"
    }
#line 1615 "deforest.m"
    {
#line 1615 "deforest.m"
      transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(transform_hlds__deforest__NonLocals0_8, transform_hlds__deforest__RevBeforeGoals_10, transform_hlds__deforest__BeforeIrrelevant_11, transform_hlds__deforest__EarlierGoal_15, transform_hlds__deforest__BetweenGoals_17, transform_hlds__deforest__V_22_22, transform_hlds__deforest__AfterIrrelevant_12, transform_hlds__deforest__AfterGoals_21, transform_hlds__deforest__SubConjNonLocals_14);
#line 1615 "deforest.m"
      return;
    }
#line 1611 "deforest.m"
  }
#line 1605 "deforest.m"
}

#line 981 "deforest.m"
static MR_Word MR_CALL 
transform_hlds__deforest__is_improvement_worth_while_4_f_0(
#line 981 "deforest.m"
  MR_Word transform_hlds__deforest__PDInfo_6,
#line 981 "deforest.m"
  MR_Word transform_hlds__deforest__Optimized0_7,
#line 981 "deforest.m"
  MR_Integer transform_hlds__deforest__CostDelta0_8,
#line 981 "deforest.m"
  MR_Integer transform_hlds__deforest__SizeDelta0_9)
#line 981 "deforest.m"
{
#line 984 "deforest.m"
  {
#line 984 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 984 "deforest.m"
    MR_Word transform_hlds__deforest__Optimized_10;
#line 984 "deforest.m"
    MR_Integer transform_hlds__deforest__CostDelta_11;
#line 984 "deforest.m"
    MR_Integer transform_hlds__deforest__SizeDelta_12;
#line 984 "deforest.m"
    MR_Integer transform_hlds__deforest__Improvement_13;
#line 984 "deforest.m"
    MR_Integer transform_hlds__deforest__SizeDifference_14;
#line 984 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_15;
#line 984 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_16;
#line 984 "deforest.m"
    MR_Integer transform_hlds__deforest__Factor_17;
#line 984 "deforest.m"
    MR_Word transform_hlds__deforest__DebugPD_18;
#line 2165 "deforest.m"
    MR_Integer transform_hlds__deforest__V_43_43;

#line 985 "deforest.m"
    {
#line 985 "deforest.m"
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__PDInfo_6, &transform_hlds__deforest__CostDelta_11);
    }
#line 986 "deforest.m"
    {
#line 986 "deforest.m"
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__PDInfo_6, &transform_hlds__deforest__SizeDelta_12);
    }
#line 987 "deforest.m"
    transform_hlds__deforest__Improvement_13 = (transform_hlds__deforest__CostDelta_11 - transform_hlds__deforest__CostDelta0_8);
#line 988 "deforest.m"
    transform_hlds__deforest__SizeDifference_14 = (transform_hlds__deforest__SizeDelta_12 - transform_hlds__deforest__SizeDelta0_9);
#line 990 "deforest.m"
    {
#line 990 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__PDInfo_6, &transform_hlds__deforest__ModuleInfo_15);
    }
#line 991 "deforest.m"
    {
#line 991 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_15, &transform_hlds__deforest__Globals_16);
    }
#line 992 "deforest.m"
    {
#line 992 "deforest.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_16, (MR_Integer) 390, &transform_hlds__deforest__Factor_17);
    }
#line 993 "deforest.m"
    {
#line 993 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_16, (MR_Integer) 70, &transform_hlds__deforest__DebugPD_18);
    }
#line 995 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__Optimized0_7 == (MR_Integer) 1);
#line 995 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 995 "deforest.m"
      {
#line 2165 "deforest.m"
        transform_hlds__deforest__V_43_43 = (MR_Integer) 5;
#line 2165 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__SizeDifference_14 <= transform_hlds__deforest__V_43_43);
#line 2168 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2167 "deforest.m"
          {
#line 2167 "deforest.m"
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__Improvement_13 > (MR_Integer) 0);
#line 2167 "deforest.m"
          }
#line 2168 "deforest.m"
        else
#line 2172 "deforest.m"
          {
#line 2172 "deforest.m"
            MR_Integer transform_hlds__deforest__ExpectedCostDelta_41;
#line 2172 "deforest.m"
            MR_Integer transform_hlds__deforest__FudgedCostDelta_42;
#line 2172 "deforest.m"
            MR_Integer transform_hlds__deforest__V_45_45;
#line 2172 "deforest.m"
            MR_Integer transform_hlds__deforest__V_46_46;
#line 2172 "deforest.m"
            MR_Integer transform_hlds__deforest__V_48_48;

#line 2172 "deforest.m"
            {
#line 2172 "deforest.m"
              transform_hlds__deforest__V_48_48 = transform_hlds__pd_cost__cost_of_heap_incr_0_f_0();
            }
#line 2172 "deforest.m"
            transform_hlds__deforest__V_46_46 = ((MR_Integer) 1000 * transform_hlds__deforest__V_48_48);
#line 2172 "deforest.m"
            transform_hlds__deforest__V_45_45 = (transform_hlds__deforest__V_46_46 * transform_hlds__deforest__SizeDifference_14);
#line 2172 "deforest.m"
            {
#line 2172 "deforest.m"
              transform_hlds__deforest__ExpectedCostDelta_41 = mercury__int__f_47_47_2_f_0(transform_hlds__deforest__V_45_45, (MR_Integer) 3);
            }
#line 2173 "deforest.m"
            transform_hlds__deforest__FudgedCostDelta_42 = (transform_hlds__deforest__Improvement_13 * transform_hlds__deforest__Factor_17);
#line 2174 "deforest.m"
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__FudgedCostDelta_42 >= transform_hlds__deforest__ExpectedCostDelta_41);
#line 2172 "deforest.m"
          }
#line 995 "deforest.m"
      }
#line 1004 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 998 "deforest.m"
      {
#line 999 "deforest.m"
        MR_Word transform_hlds__deforest__V_24_24;
#line 999 "deforest.m"
        MR_Word transform_hlds__deforest__V_26_26;
#line 999 "deforest.m"
        MR_Word transform_hlds__deforest__V_27_27;
#line 999 "deforest.m"
        MR_Word transform_hlds__deforest__V_28_28;

#line 998 "deforest.m"
        transform_hlds__deforest__Optimized_10 = (MR_Integer) 1;
#line 1002 "deforest.m"
        {
#line 1002 "deforest.m"
          transform_hlds__deforest__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_26_26, 0) = ((MR_Box) (transform_hlds__deforest__Improvement_13));
#line 1002 "deforest.m"
        }
#line 1002 "deforest.m"
        {
#line 1002 "deforest.m"
          transform_hlds__deforest__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_28_28, 0) = ((MR_Box) (transform_hlds__deforest__SizeDifference_14));
#line 1002 "deforest.m"
        }
#line 1002 "deforest.m"
        {
#line 1002 "deforest.m"
          transform_hlds__deforest__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_27_27, 0) = ((MR_Box) (transform_hlds__deforest__V_28_28));
#line 1002 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "deforest.m"
        }
#line 1000 "deforest.m"
        {
#line 1000 "deforest.m"
          transform_hlds__deforest__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_24_24, 0) = ((MR_Box) (transform_hlds__deforest__V_26_26));
#line 1000 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_24_24, 1) = ((MR_Box) (transform_hlds__deforest__V_27_27));
#line 1000 "deforest.m"
        }
#line 1000 "deforest.m"
        {
#line 1000 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Enough improvement: cost(%i) size(%i)\n", transform_hlds__deforest__V_24_24);
        }
#line 998 "deforest.m"
      }
#line 1004 "deforest.m"
    else
#line 1005 "deforest.m"
      {
#line 1006 "deforest.m"
        MR_Word transform_hlds__deforest__V_32_32;
#line 1006 "deforest.m"
        MR_Word transform_hlds__deforest__V_34_34;
#line 1006 "deforest.m"
        MR_Word transform_hlds__deforest__V_35_35;
#line 1006 "deforest.m"
        MR_Word transform_hlds__deforest__V_36_36;

#line 1005 "deforest.m"
        transform_hlds__deforest__Optimized_10 = (MR_Integer) 0;
#line 1009 "deforest.m"
        {
#line 1009 "deforest.m"
          transform_hlds__deforest__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_34_34, 0) = ((MR_Box) (transform_hlds__deforest__Improvement_13));
#line 1009 "deforest.m"
        }
#line 1009 "deforest.m"
        {
#line 1009 "deforest.m"
          transform_hlds__deforest__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_36_36, 0) = ((MR_Box) (transform_hlds__deforest__SizeDifference_14));
#line 1009 "deforest.m"
        }
#line 1009 "deforest.m"
        {
#line 1009 "deforest.m"
          transform_hlds__deforest__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_35_35, 0) = ((MR_Box) (transform_hlds__deforest__V_36_36));
#line 1009 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1009 "deforest.m"
        }
#line 1007 "deforest.m"
        {
#line 1007 "deforest.m"
          transform_hlds__deforest__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_32_32, 0) = ((MR_Box) (transform_hlds__deforest__V_34_34));
#line 1007 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_32_32, 1) = ((MR_Box) (transform_hlds__deforest__V_35_35));
#line 1007 "deforest.m"
        }
#line 1007 "deforest.m"
        {
#line 1007 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Not enough improvement: cost(%i) size(%i)\n", transform_hlds__deforest__V_32_32);
        }
#line 1005 "deforest.m"
      }
#line 984 "deforest.m"
    return transform_hlds__deforest__Optimized_10;
#line 984 "deforest.m"
  }
#line 981 "deforest.m"
}

#line 886 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_1(
#line 886 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 886 "deforest.m"
{
#line 886 "deforest.m"
  {
#line 886 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 886 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_0, 1);
#line 886 "deforest.m"
  }
#line 886 "deforest.m"
}

#line 886 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_2(
#line 886 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 886 "deforest.m"
{
#line 886 "deforest.m"
  {
#line 886 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 886 "deforest.m"
    {
#line 893 "deforest.m"
      MR_Word transform_hlds__deforest__V_35_35;

#line 893 "deforest.m"
      {
#line 893 "deforest.m"
        hlds__hlds_module__module_info_pred_proc_info_5_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_23, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_24, &transform_hlds__deforest__V_35_35, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_36);
      }
#line 895 "deforest.m"
      {
#line 895 "deforest.m"
        hlds__hlds_pred__proc_info_get_goal_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_36, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_37);
      }
#line 896 "deforest.m"
      {
#line 896 "deforest.m"
        hlds__goal_util__goal_size_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_37, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_38);
      }
#line 897 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19 == (MR_Integer) -1);
#line 897 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 886 "deforest.m"
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 886 "deforest.m"
        {
#line 898 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_38 > (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19);
#line 898 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 898 "deforest.m"
            {
#line 898 "deforest.m"
              transform_hlds__deforest__can_optimize_conj_6_p_0_1(transform_hlds__deforest__env_ptr);
#line 898 "deforest.m"
              return;
            }
#line 886 "deforest.m"
        }
#line 886 "deforest.m"
    }
#line 886 "deforest.m"
  }
#line 886 "deforest.m"
}

#line 886 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_3(
#line 886 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 886 "deforest.m"
{
#line 886 "deforest.m"
  {
#line 886 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 886 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_0) == 0)
#line 886 "deforest.m"
      {
#line 886 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19 == (MR_Integer) -1);
#line 886 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 886 "deforest.m"
        if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 886 "deforest.m"
          {
#line 888 "deforest.m"
            {
#line 888 "deforest.m"
              MR_Word transform_hlds__deforest__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 0)));
#line 888 "deforest.m"
              MR_Word transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 1)));
#line 888 "deforest.m"
              MR_Word transform_hlds__deforest__V_25_25;
#line 888 "deforest.m"
              MR_Word transform_hlds__deforest__V_26_26;
#line 888 "deforest.m"
              MR_Word transform_hlds__deforest__V_27_27;
#line 888 "deforest.m"
              MR_Word transform_hlds__deforest__V_28_28;

#line 888 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_70_70)) == (MR_mktag((MR_Integer) 2)));
#line 888 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 888 "deforest.m"
                {
#line 888 "deforest.m"
                  {
#line 888 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 0)));
#line 888 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 1)));
#line 888 "deforest.m"
                    transform_hlds__deforest__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 2)));
#line 888 "deforest.m"
                    transform_hlds__deforest__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 3)));
#line 888 "deforest.m"
                    transform_hlds__deforest__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 4)));
#line 888 "deforest.m"
                    transform_hlds__deforest__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 5)));
#line 888 "deforest.m"
                  }
#line 888 "deforest.m"
                  {
#line 888 "deforest.m"
                    transform_hlds__deforest__can_optimize_conj_6_p_0_2(transform_hlds__deforest__env_ptr);
                  }
#line 888 "deforest.m"
                }
#line 888 "deforest.m"
            }
#line 890 "deforest.m"
            {
#line 890 "deforest.m"
              MR_Word transform_hlds__deforest__V_68_68;
#line 890 "deforest.m"
              MR_Word transform_hlds__deforest__V_69_69;
#line 890 "deforest.m"
              MR_Word transform_hlds__deforest__V_34_34;
#line 891 "deforest.m"
              MR_Word transform_hlds__deforest__V_30_30;
#line 891 "deforest.m"
              MR_Word transform_hlds__deforest__V_31_31;
#line 891 "deforest.m"
              MR_Word transform_hlds__deforest__V_32_32;
#line 891 "deforest.m"
              MR_Word transform_hlds__deforest__V_33_33;

#line 890 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
#line 890 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 890 "deforest.m"
                {
#line 890 "deforest.m"
                  transform_hlds__deforest__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
#line 890 "deforest.m"
                  {
#line 890 "deforest.m"
                    transform_hlds__deforest__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_68_68, (MR_Integer) 0)));
#line 890 "deforest.m"
                    transform_hlds__deforest__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_68_68, (MR_Integer) 1)));
#line 891 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_69_69)) == (MR_mktag((MR_Integer) 2)));
#line 891 "deforest.m"
                    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 891 "deforest.m"
                      {
#line 891 "deforest.m"
                        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 0)));
#line 891 "deforest.m"
                        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 1)));
#line 891 "deforest.m"
                        transform_hlds__deforest__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 2)));
#line 891 "deforest.m"
                        transform_hlds__deforest__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 3)));
#line 891 "deforest.m"
                        transform_hlds__deforest__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 4)));
#line 891 "deforest.m"
                        transform_hlds__deforest__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 5)));
#line 891 "deforest.m"
                      }
#line 890 "deforest.m"
                  }
#line 890 "deforest.m"
                }
#line 890 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 890 "deforest.m"
                {
#line 890 "deforest.m"
                  transform_hlds__deforest__can_optimize_conj_6_p_0_2(transform_hlds__deforest__env_ptr);
                }
#line 890 "deforest.m"
            }
#line 886 "deforest.m"
          }
#line 886 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
#line 886 "deforest.m"
      }
#line 886 "deforest.m"
    else
#line 886 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
#line 886 "deforest.m"
  }
#line 886 "deforest.m"
}

#line 913 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_4(
#line 913 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 913 "deforest.m"
{
#line 913 "deforest.m"
  {
#line 913 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 913 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1, 1);
#line 913 "deforest.m"
  }
#line 913 "deforest.m"
}

#line 913 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_5(
#line 913 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 913 "deforest.m"
{
#line 913 "deforest.m"
  {
#line 913 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 919 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__InlinePromisedPure_48 = (MR_Integer) 0;
#line 920 "deforest.m"
    {
#line 920 "deforest.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredInfo_12, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CallerMarkers_49);
    }
#line 921 "deforest.m"
    {
#line 921 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = transform_hlds__inlining__can_inline_proc_6_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_97, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_98, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_40, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__InlinePromisedPure_48, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CallerMarkers_49, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14);
    }
#line 921 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 921 "deforest.m"
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 921 "deforest.m"
      {
#line 921 "deforest.m"
        transform_hlds__deforest__can_optimize_conj_6_p_0_4(transform_hlds__deforest__env_ptr);
#line 921 "deforest.m"
        return;
      }
#line 913 "deforest.m"
  }
#line 913 "deforest.m"
}

#line 913 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_6(
#line 913 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 913 "deforest.m"
{
#line 913 "deforest.m"
  {
#line 913 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 913 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1) == 0)
#line 913 "deforest.m"
      {
#line 907 "deforest.m"
        {
#line 907 "deforest.m"
          MR_Word transform_hlds__deforest__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 0)));
#line 907 "deforest.m"
          MR_Word transform_hlds__deforest__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 1)));
#line 908 "deforest.m"
          MR_Word transform_hlds__deforest__V_39_39;
#line 908 "deforest.m"
          MR_Word transform_hlds__deforest__V_41_41;
#line 908 "deforest.m"
          MR_Word transform_hlds__deforest__V_42_42;

#line 908 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_77_77)) == (MR_mktag((MR_Integer) 2)));
#line 908 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 908 "deforest.m"
            {
#line 908 "deforest.m"
              {
#line 908 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 0)));
#line 908 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_98 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 1)));
#line 908 "deforest.m"
                transform_hlds__deforest__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 2)));
#line 908 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 3)));
#line 908 "deforest.m"
                transform_hlds__deforest__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 4)));
#line 908 "deforest.m"
                transform_hlds__deforest__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 5)));
#line 908 "deforest.m"
              }
#line 907 "deforest.m"
              {
#line 907 "deforest.m"
                transform_hlds__deforest__can_optimize_conj_6_p_0_5(transform_hlds__deforest__env_ptr);
              }
#line 908 "deforest.m"
            }
#line 907 "deforest.m"
        }
#line 910 "deforest.m"
        {
#line 910 "deforest.m"
          MR_Word transform_hlds__deforest__V_75_75;
#line 910 "deforest.m"
          MR_Word transform_hlds__deforest__V_76_76;
#line 910 "deforest.m"
          MR_Word transform_hlds__deforest__V_47_47;
#line 911 "deforest.m"
          MR_Word transform_hlds__deforest__V_44_44;
#line 911 "deforest.m"
          MR_Word transform_hlds__deforest__V_45_45;
#line 911 "deforest.m"
          MR_Word transform_hlds__deforest__V_46_46;

#line 910 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
#line 910 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 910 "deforest.m"
            {
#line 910 "deforest.m"
              transform_hlds__deforest__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
#line 910 "deforest.m"
              {
#line 910 "deforest.m"
                transform_hlds__deforest__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_75_75, (MR_Integer) 0)));
#line 910 "deforest.m"
                transform_hlds__deforest__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_75_75, (MR_Integer) 1)));
#line 911 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_76_76)) == (MR_mktag((MR_Integer) 2)));
#line 911 "deforest.m"
                if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 911 "deforest.m"
                  {
#line 911 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 0)));
#line 911 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_98 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 1)));
#line 911 "deforest.m"
                    transform_hlds__deforest__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 2)));
#line 911 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 3)));
#line 911 "deforest.m"
                    transform_hlds__deforest__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 4)));
#line 911 "deforest.m"
                    transform_hlds__deforest__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 5)));
#line 911 "deforest.m"
                  }
#line 910 "deforest.m"
              }
#line 910 "deforest.m"
            }
#line 910 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 910 "deforest.m"
            {
#line 910 "deforest.m"
              transform_hlds__deforest__can_optimize_conj_6_p_0_5(transform_hlds__deforest__env_ptr);
            }
#line 910 "deforest.m"
        }
#line 913 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
#line 913 "deforest.m"
      }
#line 913 "deforest.m"
    else
#line 913 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
#line 913 "deforest.m"
  }
#line 913 "deforest.m"
}

#line 946 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_7(
#line 946 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 946 "deforest.m"
{
#line 946 "deforest.m"
  {
#line 946 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 946 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2, 1);
#line 946 "deforest.m"
  }
#line 946 "deforest.m"
}

#line 946 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_8(
#line 946 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 946 "deforest.m"
{
#line 946 "deforest.m"
  {
#line 946 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 946 "deforest.m"
    {
#line 947 "deforest.m"
      MR_Word transform_hlds__deforest__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50, (MR_Integer) 0)));
#line 948 "deforest.m"
      MR_Word transform_hlds__deforest__V_86_86;

#line 947 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50, (MR_Integer) 1)));
#line 948 "deforest.m"
      {
#line 948 "deforest.m"
        transform_hlds__deforest__V_86_86 = hlds__hlds_goal__goal_info_get_purity_1_f_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_52);
      }
#line 948 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (transform_hlds__deforest__V_86_86 == (MR_Integer) 0);
#line 948 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 948 "deforest.m"
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 948 "deforest.m"
        {
#line 948 "deforest.m"
          transform_hlds__deforest__can_optimize_conj_6_p_0_7(transform_hlds__deforest__env_ptr);
#line 948 "deforest.m"
          return;
        }
#line 946 "deforest.m"
    }
#line 946 "deforest.m"
  }
#line 946 "deforest.m"
}

#line 943 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_9(
#line 943 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 943 "deforest.m"
{
#line 943 "deforest.m"
  {
#line 943 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 943 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_50);
#line 943 "deforest.m"
    {
#line 943 "deforest.m"
      transform_hlds__deforest__can_optimize_conj_6_p_0_8(transform_hlds__deforest__env_ptr);
#line 943 "deforest.m"
      return;
    }
#line 943 "deforest.m"
  }
#line 943 "deforest.m"
}

#line 946 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_10(
#line 946 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 946 "deforest.m"
{
#line 946 "deforest.m"
  {
#line 946 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 946 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2) == 0)
#line 946 "deforest.m"
      {
#line 943 "deforest.m"
        {
#line 943 "deforest.m"
          {
#line 943 "deforest.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_50, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8, transform_hlds__deforest__can_optimize_conj_6_p_0_9, transform_hlds__deforest__env_ptr);
          }
#line 943 "deforest.m"
        }
#line 944 "deforest.m"
        {
#line 944 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50 = (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7;
#line 944 "deforest.m"
          {
#line 944 "deforest.m"
            transform_hlds__deforest__can_optimize_conj_6_p_0_8(transform_hlds__deforest__env_ptr);
          }
#line 944 "deforest.m"
        }
#line 945 "deforest.m"
        {
#line 945 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
#line 945 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 945 "deforest.m"
            {
#line 945 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
#line 945 "deforest.m"
              {
#line 945 "deforest.m"
                transform_hlds__deforest__can_optimize_conj_6_p_0_8(transform_hlds__deforest__env_ptr);
              }
#line 945 "deforest.m"
            }
#line 945 "deforest.m"
        }
#line 946 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
#line 946 "deforest.m"
      }
#line 946 "deforest.m"
    else
#line 946 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
#line 946 "deforest.m"
  }
#line 946 "deforest.m"
}

#line 960 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_11(
#line 960 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 960 "deforest.m"
{
#line 960 "deforest.m"
  {
#line 960 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 960 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3, 1);
#line 960 "deforest.m"
  }
#line 960 "deforest.m"
}

#line 960 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_12(
#line 960 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 960 "deforest.m"
{
#line 960 "deforest.m"
  {
#line 960 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 964 "deforest.m"
    {
#line 964 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = hlds__goal_util__reordering_maintains_termination_old_4_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_53, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_54);
    }
#line 964 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 964 "deforest.m"
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 964 "deforest.m"
      {
#line 964 "deforest.m"
        transform_hlds__deforest__can_optimize_conj_6_p_0_11(transform_hlds__deforest__env_ptr);
#line 964 "deforest.m"
        return;
      }
#line 960 "deforest.m"
  }
#line 960 "deforest.m"
}

#line 961 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_13(
#line 961 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 961 "deforest.m"
{
#line 961 "deforest.m"
  {
#line 961 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 961 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_54 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_54);
#line 961 "deforest.m"
    {
#line 961 "deforest.m"
      transform_hlds__deforest__can_optimize_conj_6_p_0_12(transform_hlds__deforest__env_ptr);
#line 961 "deforest.m"
      return;
    }
#line 961 "deforest.m"
  }
#line 961 "deforest.m"
}

#line 960 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_14(
#line 960 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 960 "deforest.m"
{
#line 960 "deforest.m"
  {
#line 960 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 960 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3) == 0)
#line 960 "deforest.m"
      {
#line 960 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_20)) == (MR_mktag((MR_Integer) 1)));
#line 960 "deforest.m"
        if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 960 "deforest.m"
          {
#line 960 "deforest.m"
            (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_20, (MR_Integer) 0)));
#line 960 "deforest.m"
            {
#line 961 "deforest.m"
              {
#line 961 "deforest.m"
                {
#line 961 "deforest.m"
                  mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_54, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8, transform_hlds__deforest__can_optimize_conj_6_p_0_13, transform_hlds__deforest__env_ptr);
                }
#line 961 "deforest.m"
              }
#line 962 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
#line 962 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 962 "deforest.m"
                {
#line 962 "deforest.m"
                  (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
#line 962 "deforest.m"
                  {
#line 962 "deforest.m"
                    transform_hlds__deforest__can_optimize_conj_6_p_0_12(transform_hlds__deforest__env_ptr);
                  }
#line 962 "deforest.m"
                }
#line 960 "deforest.m"
            }
#line 960 "deforest.m"
          }
#line 960 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
#line 960 "deforest.m"
      }
#line 960 "deforest.m"
    else
#line 960 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
#line 960 "deforest.m"
  }
#line 960 "deforest.m"
}

#line 852 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0(
#line 852 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_7,
#line 852 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_8,
#line 852 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_9,
#line 852 "deforest.m"
  MR_Word * transform_hlds__deforest__ShouldTry_10,
#line 852 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56,
#line 852 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_57)
#line 852 "deforest.m"
{
#line 852 "deforest.m"
  {
#line 852 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s transform_hlds__deforest__env;

#line 852 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7 = transform_hlds__deforest__EarlierGoal_7;
#line 852 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8 = transform_hlds__deforest__BetweenGoals_8;
#line 852 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9 = transform_hlds__deforest__MaybeLaterGoal_9;
#line 856 "deforest.m"
    {
#line 856 "deforest.m"
      MR_Integer transform_hlds__deforest__Depth0_13;
#line 856 "deforest.m"
      MR_Word transform_hlds__deforest__Globals_15;
#line 856 "deforest.m"
      MR_Word transform_hlds__deforest__DepthLimitOpt_16;
#line 856 "deforest.m"
      MR_Word transform_hlds__deforest__DebugPD_17;
#line 856 "deforest.m"
      MR_Integer transform_hlds__deforest__Depth_18;
#line 869 "deforest.m"
      MR_Integer transform_hlds__deforest__MaxDepth_21;

#line 857 "deforest.m"
      {
#line 857 "deforest.m"
        transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredInfo_12);
      }
#line 858 "deforest.m"
      {
#line 858 "deforest.m"
        transform_hlds__pd_info__pd_info_get_depth_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56, &transform_hlds__deforest__Depth0_13);
      }
#line 859 "deforest.m"
      {
#line 859 "deforest.m"
        transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14);
      }
#line 860 "deforest.m"
      {
#line 860 "deforest.m"
        hlds__hlds_module__module_info_get_globals_2_p_0((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14, &transform_hlds__deforest__Globals_15);
      }
#line 861 "deforest.m"
      {
#line 861 "deforest.m"
        libs__globals__lookup_option_3_p_0(transform_hlds__deforest__Globals_15, (MR_Integer) 389, &transform_hlds__deforest__DepthLimitOpt_16);
      }
#line 862 "deforest.m"
      {
#line 862 "deforest.m"
        libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_15, (MR_Integer) 70, &transform_hlds__deforest__DebugPD_17);
      }
#line 863 "deforest.m"
      transform_hlds__deforest__Depth_18 = (transform_hlds__deforest__Depth0_13 + (MR_Integer) 1);
#line 864 "deforest.m"
      {
#line 864 "deforest.m"
        transform_hlds__pd_info__pd_info_set_depth_3_p_0(transform_hlds__deforest__Depth_18, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56, transform_hlds__deforest__STATE_VARIABLE_PDInfo_57);
      }
#line 865 "deforest.m"
      {
#line 865 "deforest.m"
        libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_15, (MR_Integer) 392, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19);
      }
#line 867 "deforest.m"
      {
#line 867 "deforest.m"
        libs__globals__lookup_option_3_p_0(transform_hlds__deforest__Globals_15, (MR_Integer) 159, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_20);
      }
#line 869 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__DepthLimitOpt_16)) == (MR_mktag((MR_Integer) 2)));
#line 869 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 869 "deforest.m"
        {
#line 869 "deforest.m"
          transform_hlds__deforest__MaxDepth_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__DepthLimitOpt_16, (MR_Integer) 0)));
#line 870 "deforest.m"
          (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (transform_hlds__deforest__MaxDepth_21 == (MR_Integer) -1);
#line 870 "deforest.m"
          (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 869 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 871 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (transform_hlds__deforest__Depth0_13 >= transform_hlds__deforest__MaxDepth_21);
#line 869 "deforest.m"
        }
#line 880 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 879 "deforest.m"
        *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 880 "deforest.m"
      else
#line 904 "deforest.m"
        {
#line 886 "deforest.m"
          {
#line 886 "deforest.m"
            transform_hlds__deforest__can_optimize_conj_6_p_0_3(&transform_hlds__deforest__env);
          }
#line 904 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 902 "deforest.m"
            {
#line 901 "deforest.m"
              {
#line 901 "deforest.m"
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "goal too large\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 903 "deforest.m"
              *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 902 "deforest.m"
            }
#line 904 "deforest.m"
          else
#line 928 "deforest.m"
            {
#line 913 "deforest.m"
              {
#line 913 "deforest.m"
                transform_hlds__deforest__can_optimize_conj_6_p_0_6(&transform_hlds__deforest__env);
              }
#line 928 "deforest.m"
              if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 926 "deforest.m"
                {
#line 925 "deforest.m"
                  {
#line 925 "deforest.m"
                    transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "non-inlineable calls\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 927 "deforest.m"
                  *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 926 "deforest.m"
                }
#line 928 "deforest.m"
              else
#line 940 "deforest.m"
                {
#line 933 "deforest.m"
                  {
#line 933 "deforest.m"
                    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = transform_hlds__deforest__is_simple_goal_list_1_p_0((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8);
                  }
#line 933 "deforest.m"
                  (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 940 "deforest.m"
                  if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 938 "deforest.m"
                    {
#line 936 "deforest.m"
                      {
#line 936 "deforest.m"
                        transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "between goals not simple enough\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                      }
#line 939 "deforest.m"
                      *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 938 "deforest.m"
                    }
#line 940 "deforest.m"
                  else
#line 955 "deforest.m"
                    {
#line 946 "deforest.m"
                      {
#line 946 "deforest.m"
                        transform_hlds__deforest__can_optimize_conj_6_p_0_10(&transform_hlds__deforest__env);
                      }
#line 955 "deforest.m"
                      if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 953 "deforest.m"
                        {
#line 951 "deforest.m"
                          {
#line 951 "deforest.m"
                            transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "goal list contains impure goal(s)\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                          }
#line 954 "deforest.m"
                          *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 953 "deforest.m"
                        }
#line 955 "deforest.m"
                      else
#line 972 "deforest.m"
                        {
#line 960 "deforest.m"
                          {
#line 960 "deforest.m"
                            transform_hlds__deforest__can_optimize_conj_6_p_0_14(&transform_hlds__deforest__env);
                          }
#line 972 "deforest.m"
                          if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 970 "deforest.m"
                            {
#line 968 "deforest.m"
                              {
#line 968 "deforest.m"
                                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "interleaving execution could change termination behaviour\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                              }
#line 971 "deforest.m"
                              *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 970 "deforest.m"
                            }
#line 972 "deforest.m"
                          else
#line 973 "deforest.m"
                            *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 1;
#line 972 "deforest.m"
                        }
#line 955 "deforest.m"
                    }
#line 940 "deforest.m"
                }
#line 928 "deforest.m"
            }
#line 904 "deforest.m"
        }
#line 856 "deforest.m"
    }
#line 852 "deforest.m"
  }
#line 852 "deforest.m"
}

#line 833 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_1(
#line 833 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 833 "deforest.m"
{
#line 833 "deforest.m"
  {
#line 833 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 833 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0, 1);
#line 833 "deforest.m"
  }
#line 833 "deforest.m"
}

#line 833 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_2(
#line 833 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 833 "deforest.m"
{
#line 833 "deforest.m"
  {
#line 833 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 833 "deforest.m"
    {
#line 837 "deforest.m"
      MR_Word transform_hlds__deforest__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36, (MR_Integer) 0)));

#line 837 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36, (MR_Integer) 1)));
#line 838 "deforest.m"
      {
#line 838 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_39 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_38);
      }
#line 7219 "transform_hlds.deforest.c"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 839 "deforest.m"
      {
#line 839 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_40 = parse_tree__set_of_var__set_to_bitset_1_f_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_60_60, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_35);
      }
#line 840 "deforest.m"
      {
#line 840 "deforest.m"
        parse_tree__set_of_var__intersect_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_60_60, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_39, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_40, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_41);
      }
#line 841 "deforest.m"
      {
#line 841 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_60_60, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_41);
      }
#line 841 "deforest.m"
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 841 "deforest.m"
        {
#line 841 "deforest.m"
          transform_hlds__deforest__should_try_deforestation_4_p_0_1(transform_hlds__deforest__env_ptr);
#line 841 "deforest.m"
          return;
        }
#line 833 "deforest.m"
    }
#line 833 "deforest.m"
  }
#line 833 "deforest.m"
}

#line 834 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_3(
#line 834 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 834 "deforest.m"
{
#line 834 "deforest.m"
  {
#line 834 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 834 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_36);
#line 834 "deforest.m"
    {
#line 834 "deforest.m"
      transform_hlds__deforest__should_try_deforestation_4_p_0_2(transform_hlds__deforest__env_ptr);
#line 834 "deforest.m"
      return;
    }
#line 834 "deforest.m"
  }
#line 834 "deforest.m"
}

#line 833 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_4(
#line 833 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 833 "deforest.m"
{
#line 833 "deforest.m"
  {
#line 833 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 833 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0) == 0)
#line 833 "deforest.m"
      {
#line 833 "deforest.m"
        {
#line 833 "deforest.m"
          MR_Word transform_hlds__deforest__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9, (MR_Integer) 0)));
#line 833 "deforest.m"
          MR_Word transform_hlds__deforest__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9, (MR_Integer) 1)));

#line 833 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9, (MR_Integer) 2)));
#line 834 "deforest.m"
          {
#line 834 "deforest.m"
            {
#line 834 "deforest.m"
              mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_36, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10, transform_hlds__deforest__should_try_deforestation_4_p_0_3, transform_hlds__deforest__env_ptr);
            }
#line 834 "deforest.m"
          }
#line 835 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36 = (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11;
#line 835 "deforest.m"
          {
#line 835 "deforest.m"
            transform_hlds__deforest__should_try_deforestation_4_p_0_2(transform_hlds__deforest__env_ptr);
          }
#line 833 "deforest.m"
        }
#line 833 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = MR_FALSE;
#line 833 "deforest.m"
      }
#line 833 "deforest.m"
    else
#line 833 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = MR_TRUE;
#line 833 "deforest.m"
  }
#line 833 "deforest.m"
}

#line 808 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0(
#line 808 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_5,
#line 808 "deforest.m"
  MR_Word * transform_hlds__deforest__ShouldTry_6,
#line 808 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_42,
#line 808 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_43)
#line 808 "deforest.m"
{
#line 808 "deforest.m"
  {
#line 808 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s transform_hlds__deforest__env;

#line 811 "deforest.m"
    {
#line 811 "deforest.m"
      MR_Word transform_hlds__deforest__EarlierGoal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 0)));
#line 811 "deforest.m"
      MR_Word transform_hlds__deforest__UselessVersions_14;
#line 811 "deforest.m"
      MR_Word transform_hlds__deforest__ModuleInfo0_15;
#line 811 "deforest.m"
      MR_Word transform_hlds__deforest__Globals_16;
#line 812 "deforest.m"
      MR_Word transform_hlds__deforest__V_12_12;
#line 812 "deforest.m"
      MR_Word transform_hlds__deforest__V_13_13;
#line 817 "deforest.m"
      MR_Word transform_hlds__deforest__DebugPD_17;
#line 819 "deforest.m"
      MR_Word transform_hlds__deforest__TypeInfo_58_58;
#line 819 "deforest.m"
      MR_Word transform_hlds__deforest__PredId1_18;
#line 819 "deforest.m"
      MR_Integer transform_hlds__deforest__ProcId1_19;
#line 819 "deforest.m"
      MR_Word transform_hlds__deforest__PredId2_25;
#line 819 "deforest.m"
      MR_Integer transform_hlds__deforest__ProcId2_26;
#line 819 "deforest.m"
      MR_Word transform_hlds__deforest__V_45_45;
#line 819 "deforest.m"
      MR_Word transform_hlds__deforest__V_46_46;
#line 819 "deforest.m"
      MR_Word transform_hlds__deforest__V_47_47;
#line 819 "deforest.m"
      MR_Word transform_hlds__deforest__V_48_48;
#line 819 "deforest.m"
      MR_Word transform_hlds__deforest__V_49_49;
#line 819 "deforest.m"
      MR_Word transform_hlds__deforest__V_24_24;
#line 819 "deforest.m"
      MR_Word transform_hlds__deforest__V_20_20;
#line 819 "deforest.m"
      MR_Word transform_hlds__deforest__V_21_21;
#line 819 "deforest.m"
      MR_Word transform_hlds__deforest__V_22_22;
#line 819 "deforest.m"
      MR_Word transform_hlds__deforest__V_23_23;
#line 820 "deforest.m"
      MR_Word transform_hlds__deforest__V_31_31;
#line 820 "deforest.m"
      MR_Word transform_hlds__deforest__V_27_27;
#line 820 "deforest.m"
      MR_Word transform_hlds__deforest__V_28_28;
#line 820 "deforest.m"
      MR_Word transform_hlds__deforest__V_29_29;
#line 820 "deforest.m"
      MR_Word transform_hlds__deforest__V_30_30;

#line 812 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 1)));
#line 812 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 2)));
#line 812 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 3)));
#line 812 "deforest.m"
      transform_hlds__deforest__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 4)));
#line 812 "deforest.m"
      transform_hlds__deforest__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 5)));
#line 814 "deforest.m"
      {
#line 814 "deforest.m"
        transform_hlds__pd_info__pd_info_get_useless_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_42, &transform_hlds__deforest__UselessVersions_14);
      }
#line 815 "deforest.m"
      {
#line 815 "deforest.m"
        transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_42, &transform_hlds__deforest__ModuleInfo0_15);
      }
#line 816 "deforest.m"
      {
#line 816 "deforest.m"
        hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo0_15, &transform_hlds__deforest__Globals_16);
      }
#line 817 "deforest.m"
      {
#line 817 "deforest.m"
        libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_16, (MR_Integer) 70, &transform_hlds__deforest__DebugPD_17);
      }
#line 819 "deforest.m"
      transform_hlds__deforest__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_8, (MR_Integer) 0)));
#line 819 "deforest.m"
      transform_hlds__deforest__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_8, (MR_Integer) 1)));
#line 819 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_45_45)) == (MR_mktag((MR_Integer) 2)));
#line 819 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 819 "deforest.m"
        {
#line 819 "deforest.m"
          transform_hlds__deforest__PredId1_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 0)));
#line 819 "deforest.m"
          transform_hlds__deforest__ProcId1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 1)));
#line 819 "deforest.m"
          transform_hlds__deforest__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 2)));
#line 819 "deforest.m"
          transform_hlds__deforest__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 3)));
#line 819 "deforest.m"
          transform_hlds__deforest__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 4)));
#line 819 "deforest.m"
          transform_hlds__deforest__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 5)));
#line 820 "deforest.m"
          transform_hlds__deforest__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11, (MR_Integer) 0)));
#line 820 "deforest.m"
          transform_hlds__deforest__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11, (MR_Integer) 1)));
#line 820 "deforest.m"
          (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_46_46)) == (MR_mktag((MR_Integer) 2)));
#line 820 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 820 "deforest.m"
            {
#line 820 "deforest.m"
              transform_hlds__deforest__PredId2_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 0)));
#line 820 "deforest.m"
              transform_hlds__deforest__ProcId2_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 1)));
#line 820 "deforest.m"
              transform_hlds__deforest__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 2)));
#line 820 "deforest.m"
              transform_hlds__deforest__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 3)));
#line 820 "deforest.m"
              transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 4)));
#line 820 "deforest.m"
              transform_hlds__deforest__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 5)));
#line 7483 "transform_hlds.deforest.c"
              transform_hlds__deforest__TypeInfo_58_58 = (MR_Word) &transform_hlds__deforest_scalar_common_2[3];
#line 821 "deforest.m"
              {
#line 821 "deforest.m"
                transform_hlds__deforest__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 821 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_48_48, 0) = ((MR_Box) (transform_hlds__deforest__PredId1_18));
#line 821 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_48_48, 1) = ((MR_Box) (transform_hlds__deforest__ProcId1_19));
#line 821 "deforest.m"
              }
#line 821 "deforest.m"
              {
#line 821 "deforest.m"
                transform_hlds__deforest__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 821 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 0) = ((MR_Box) (transform_hlds__deforest__PredId2_25));
#line 821 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 1) = ((MR_Box) (transform_hlds__deforest__ProcId2_26));
#line 821 "deforest.m"
              }
#line 821 "deforest.m"
              {
#line 821 "deforest.m"
                transform_hlds__deforest__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 821 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_47_47, 0) = ((MR_Box) (transform_hlds__deforest__V_48_48));
#line 821 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_47_47, 1) = ((MR_Box) (transform_hlds__deforest__V_49_49));
#line 821 "deforest.m"
              }
#line 821 "deforest.m"
              {
#line 821 "deforest.m"
                (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = mercury__set__member_2_p_0(transform_hlds__deforest__TypeInfo_58_58, ((MR_Box) (transform_hlds__deforest__V_47_47)), transform_hlds__deforest__UselessVersions_14);
              }
#line 820 "deforest.m"
            }
#line 819 "deforest.m"
        }
#line 829 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 828 "deforest.m"
        *transform_hlds__deforest__ShouldTry_6 = (MR_Integer) 0;
#line 829 "deforest.m"
      else
#line 848 "deforest.m"
        {
#line 833 "deforest.m"
          {
#line 833 "deforest.m"
            transform_hlds__deforest__should_try_deforestation_4_p_0_4(&transform_hlds__deforest__env);
          }
#line 848 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 847 "deforest.m"
            *transform_hlds__deforest__ShouldTry_6 = (MR_Integer) 0;
#line 848 "deforest.m"
          else
#line 849 "deforest.m"
            *transform_hlds__deforest__ShouldTry_6 = (MR_Integer) 1;
#line 848 "deforest.m"
        }
#line 849 "deforest.m"
      *transform_hlds__deforest__STATE_VARIABLE_PDInfo_43 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_42;
#line 811 "deforest.m"
    }
#line 808 "deforest.m"
  }
#line 808 "deforest.m"
}

#line 785 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_2(
#line 785 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 785 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 785 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 785 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 785 "deforest.m"
{
#line 785 "deforest.m"
  {
#line 785 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 785 "deforest.m"
    MR_Word transform_hlds__deforest__conv2_HeadVar__3_3;

#line 785 "deforest.m"
    {
#line 785 "deforest.m"
      transform_hlds__pd_info__remove_version_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv2_HeadVar__3_3);
    }
#line 785 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv2_HeadVar__3_3));
#line 785 "deforest.m"
  }
#line 785 "deforest.m"
}

#line 672 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_1(
#line 672 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 672 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 672 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 672 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 672 "deforest.m"
{
#line 672 "deforest.m"
  {
#line 672 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 672 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_HeadVar__3_3;

#line 672 "deforest.m"
    {
#line 672 "deforest.m"
      transform_hlds__pd_info__pd_info_update_goal_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_HeadVar__3_3);
    }
#line 672 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__3_3));
#line 672 "deforest.m"
  }
#line 672 "deforest.m"
}

#line 645 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0(
#line 645 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_10,
#line 645 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo0_11,
#line 645 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82,
#line 645 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_83,
#line 645 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84,
#line 645 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85,
#line 645 "deforest.m"
  MR_Word * transform_hlds__deforest__Optimized_14,
#line 645 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86,
#line 645 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_87)
#line 645 "deforest.m"
{
#line 651 "deforest.m"
  {
#line 651 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_168_168;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_169_169;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_16;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_17;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__DebugPD_18;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__InstMap0_19;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__CreatedVersions0_20;
#line 651 "deforest.m"
    MR_Integer transform_hlds__deforest__Depth0_21;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__DeforestInfo_23;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__BeforeIrrelevant_24;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__AfterIrrelevant_25;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__ConjNonLocals_26;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__CurrPredProcId_27;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__Parents0_28;
#line 651 "deforest.m"
    MR_Integer transform_hlds__deforest__CostDelta0_29;
#line 651 "deforest.m"
    MR_Integer transform_hlds__deforest__SizeDelta0_30;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierGoal_31;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__BetweenGoals_33;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__LaterGoal_34;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__DeforestBranches_36;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__ShouldOptimize_37;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__Optimized0_38;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__Goals_39;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_135_135;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136;
#line 651 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151;
#line 660 "deforest.m"
    MR_Word transform_hlds__deforest__V_91_91;
#line 660 "deforest.m"
    MR_Word transform_hlds__deforest__V_93_93;
#line 672 "deforest.m"
    MR_Box transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_96_96;
#line 679 "deforest.m"
    MR_Word transform_hlds__deforest__V_32_32;
#line 679 "deforest.m"
    MR_Word transform_hlds__deforest__V_35_35;
#line 800 "deforest.m"
    MR_Word transform_hlds__deforest__V_154_154;
#line 800 "deforest.m"
    MR_Word transform_hlds__deforest__V_156_156;

#line 652 "deforest.m"
    {
#line 652 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__ModuleInfo_16);
    }
#line 653 "deforest.m"
    {
#line 653 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_16, &transform_hlds__deforest__Globals_17);
    }
#line 654 "deforest.m"
    {
#line 654 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_17, (MR_Integer) 70, &transform_hlds__deforest__DebugPD_18);
    }
#line 656 "deforest.m"
    {
#line 656 "deforest.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__InstMap0_19);
    }
#line 657 "deforest.m"
    {
#line 657 "deforest.m"
      transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__CreatedVersions0_20);
    }
#line 659 "deforest.m"
    {
#line 659 "deforest.m"
      transform_hlds__pd_info__pd_info_get_depth_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__Depth0_21);
    }
#line 662 "deforest.m"
    {
#line 662 "deforest.m"
      transform_hlds__deforest__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 662 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_93_93, 0) = ((MR_Box) (transform_hlds__deforest__Depth0_21));
#line 662 "deforest.m"
    }
#line 661 "deforest.m"
    {
#line 661 "deforest.m"
      transform_hlds__deforest__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_91_91, 0) = ((MR_Box) (transform_hlds__deforest__V_93_93));
#line 661 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 661 "deforest.m"
    }
#line 661 "deforest.m"
    {
#line 661 "deforest.m"
      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "checking for deforestation at depth %i\n", transform_hlds__deforest__V_91_91);
    }
#line 665 "deforest.m"
    {
#line 665 "deforest.m"
      transform_hlds__deforest__reorder_conj_5_p_0(transform_hlds__deforest__DeforestInfo0_11, &transform_hlds__deforest__DeforestInfo_23, &transform_hlds__deforest__BeforeIrrelevant_24, &transform_hlds__deforest__AfterIrrelevant_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86);
    }
#line 668 "deforest.m"
    {
#line 668 "deforest.m"
      transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(transform_hlds__deforest__NonLocals_10, transform_hlds__deforest__DeforestInfo_23, transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82, transform_hlds__deforest__BeforeIrrelevant_24, transform_hlds__deforest__AfterIrrelevant_25, transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84, &transform_hlds__deforest__ConjNonLocals_26);
    }
#line 7783 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_168_168 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 7785 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_169_169 = (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0;
#line 672 "deforest.m"
    {
#line 672 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_168_168, transform_hlds__deforest__TypeCtorInfo_169_169, (MR_Word) &transform_hlds__deforest_scalar_common_2[9], transform_hlds__deforest__BeforeIrrelevant_24, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86)), &transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_96_96);
    }
#line 672 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96 = ((MR_Word) transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_96_96);
#line 674 "deforest.m"
    {
#line 674 "deforest.m"
      transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__CurrPredProcId_27);
    }
#line 675 "deforest.m"
    {
#line 675 "deforest.m"
      transform_hlds__pd_info__pd_info_get_parents_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__Parents0_28);
    }
#line 676 "deforest.m"
    {
#line 676 "deforest.m"
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__CostDelta0_29);
    }
#line 677 "deforest.m"
    {
#line 677 "deforest.m"
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__SizeDelta0_30);
    }
#line 679 "deforest.m"
    transform_hlds__deforest__EarlierGoal_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 0)));
#line 679 "deforest.m"
    transform_hlds__deforest__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 1)));
#line 679 "deforest.m"
    transform_hlds__deforest__BetweenGoals_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 2)));
#line 679 "deforest.m"
    transform_hlds__deforest__LaterGoal_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 3)));
#line 679 "deforest.m"
    transform_hlds__deforest__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 4)));
#line 679 "deforest.m"
    transform_hlds__deforest__DeforestBranches_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 5)));
#line 682 "deforest.m"
    {
#line 682 "deforest.m"
      transform_hlds__deforest__should_try_deforestation_4_p_0(transform_hlds__deforest__DeforestInfo_23, &transform_hlds__deforest__ShouldOptimize_37, transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
    }
#line 687 "deforest.m"
    if ((transform_hlds__deforest__ShouldOptimize_37 == (MR_Integer) 0))
#line 684 "deforest.m"
      {
#line 685 "deforest.m"
        transform_hlds__deforest__Optimized0_38 = (MR_Integer) 0;
#line 686 "deforest.m"
        transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 686 "deforest.m"
        transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 684 "deforest.m"
      }
#line 687 "deforest.m"
    else
#line 712 "deforest.m"
      {
#line 712 "deforest.m"
        MR_Word transform_hlds__deforest__PredId1_40;
#line 712 "deforest.m"
        MR_Word transform_hlds__deforest__PredId2_47;
#line 690 "deforest.m"
        MR_Word transform_hlds__deforest__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 0)));
#line 690 "deforest.m"
        MR_Word transform_hlds__deforest__V_99_99;
#line 690 "deforest.m"
        MR_Word transform_hlds__deforest__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 1)));
#line 690 "deforest.m"
        MR_Integer transform_hlds__deforest__V_41_41;
#line 690 "deforest.m"
        MR_Word transform_hlds__deforest__V_42_42;
#line 690 "deforest.m"
        MR_Word transform_hlds__deforest__V_43_43;
#line 690 "deforest.m"
        MR_Word transform_hlds__deforest__V_44_44;
#line 690 "deforest.m"
        MR_Word transform_hlds__deforest__V_45_45;
#line 691 "deforest.m"
        MR_Word transform_hlds__deforest__V_53_53;
#line 691 "deforest.m"
        MR_Integer transform_hlds__deforest__V_48_48;
#line 691 "deforest.m"
        MR_Word transform_hlds__deforest__V_49_49;
#line 691 "deforest.m"
        MR_Word transform_hlds__deforest__V_50_50;
#line 691 "deforest.m"
        MR_Word transform_hlds__deforest__V_51_51;
#line 691 "deforest.m"
        MR_Word transform_hlds__deforest__V_52_52;

#line 690 "deforest.m"
        transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_98_98)) == (MR_mktag((MR_Integer) 2)));
#line 690 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 690 "deforest.m"
          {
#line 690 "deforest.m"
            transform_hlds__deforest__PredId1_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 0)));
#line 690 "deforest.m"
            transform_hlds__deforest__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 1)));
#line 690 "deforest.m"
            transform_hlds__deforest__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 2)));
#line 690 "deforest.m"
            transform_hlds__deforest__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 3)));
#line 690 "deforest.m"
            transform_hlds__deforest__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 4)));
#line 690 "deforest.m"
            transform_hlds__deforest__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 5)));
#line 691 "deforest.m"
            transform_hlds__deforest__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 0)));
#line 691 "deforest.m"
            transform_hlds__deforest__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 1)));
#line 691 "deforest.m"
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_99_99)) == (MR_mktag((MR_Integer) 2)));
#line 691 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 691 "deforest.m"
              {
#line 691 "deforest.m"
                transform_hlds__deforest__PredId2_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 0)));
#line 691 "deforest.m"
                transform_hlds__deforest__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 1)));
#line 691 "deforest.m"
                transform_hlds__deforest__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 2)));
#line 691 "deforest.m"
                transform_hlds__deforest__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 3)));
#line 691 "deforest.m"
                transform_hlds__deforest__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 4)));
#line 691 "deforest.m"
                transform_hlds__deforest__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 5)));
#line 691 "deforest.m"
              }
#line 690 "deforest.m"
          }
#line 712 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 695 "deforest.m"
          {
#line 695 "deforest.m"
            MR_String transform_hlds__deforest__PredName1_54;
#line 695 "deforest.m"
            MR_String transform_hlds__deforest__PredName2_55;
#line 695 "deforest.m"
            MR_Word transform_hlds__deforest__MaybeGoal_56;
#line 695 "deforest.m"
            MR_Word transform_hlds__deforest__V_108_108;
#line 697 "deforest.m"
            MR_Word transform_hlds__deforest__V_102_102;
#line 697 "deforest.m"
            MR_Word transform_hlds__deforest__V_104_104;
#line 697 "deforest.m"
            MR_Word transform_hlds__deforest__V_105_105;
#line 697 "deforest.m"
            MR_Word transform_hlds__deforest__V_106_106;

#line 695 "deforest.m"
            {
#line 695 "deforest.m"
              transform_hlds__deforest__PredName1_54 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__deforest__ModuleInfo_16, transform_hlds__deforest__PredId1_40);
            }
#line 696 "deforest.m"
            {
#line 696 "deforest.m"
              transform_hlds__deforest__PredName2_55 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__deforest__ModuleInfo_16, transform_hlds__deforest__PredId2_47);
            }
#line 699 "deforest.m"
            {
#line 699 "deforest.m"
              transform_hlds__deforest__V_104_104 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 699 "deforest.m"
              MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_104_104, 0) = ((MR_Box) (transform_hlds__deforest__PredName1_54));
#line 699 "deforest.m"
            }
#line 699 "deforest.m"
            {
#line 699 "deforest.m"
              transform_hlds__deforest__V_106_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 699 "deforest.m"
              MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_106_106, 0) = ((MR_Box) (transform_hlds__deforest__PredName2_55));
#line 699 "deforest.m"
            }
#line 699 "deforest.m"
            {
#line 699 "deforest.m"
              transform_hlds__deforest__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_105_105, 0) = ((MR_Box) (transform_hlds__deforest__V_106_106));
#line 699 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 699 "deforest.m"
            }
#line 698 "deforest.m"
            {
#line 698 "deforest.m"
              transform_hlds__deforest__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_102_102, 0) = ((MR_Box) (transform_hlds__deforest__V_104_104));
#line 698 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_102_102, 1) = ((MR_Box) (transform_hlds__deforest__V_105_105));
#line 698 "deforest.m"
            }
#line 698 "deforest.m"
            {
#line 698 "deforest.m"
              transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "deforesting calls to %s and %s\n", transform_hlds__deforest__V_102_102);
            }
#line 701 "deforest.m"
            {
#line 701 "deforest.m"
              transform_hlds__deforest__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 701 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_108_108, 0) = ((MR_Box) (transform_hlds__deforest__LaterGoal_34));
#line 701 "deforest.m"
            }
#line 701 "deforest.m"
            {
#line 701 "deforest.m"
              transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(transform_hlds__deforest__EarlierGoal_31, transform_hlds__deforest__BetweenGoals_33, transform_hlds__deforest__V_108_108, &transform_hlds__deforest__MaybeGoal_56, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
            }
#line 707 "deforest.m"
            if ((transform_hlds__deforest__MaybeGoal_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 708 "deforest.m"
              {
#line 709 "deforest.m"
                transform_hlds__deforest__Optimized0_38 = (MR_Integer) 0;
#line 710 "deforest.m"
                transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 708 "deforest.m"
              }
#line 707 "deforest.m"
            else
#line 704 "deforest.m"
              {
#line 704 "deforest.m"
                MR_Word transform_hlds__deforest__Goal_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeGoal_56, (MR_Integer) 0)));

#line 705 "deforest.m"
                transform_hlds__deforest__Optimized0_38 = (MR_Integer) 1;
#line 706 "deforest.m"
                {
#line 706 "deforest.m"
                  transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 0) = ((MR_Box) (transform_hlds__deforest__Goal_57));
#line 706 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 706 "deforest.m"
                }
#line 704 "deforest.m"
              }
#line 695 "deforest.m"
          }
#line 712 "deforest.m"
        else
#line 735 "deforest.m"
          {
#line 735 "deforest.m"
            MR_Word transform_hlds__deforest__PredId_60;
#line 735 "deforest.m"
            MR_Word transform_hlds__deforest__PredProcId_67;
#line 717 "deforest.m"
            MR_Word transform_hlds__deforest__EarlierGoalExpr_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 0)));
#line 717 "deforest.m"
            MR_Integer transform_hlds__deforest__ProcId_61;
#line 717 "deforest.m"
            MR_Word transform_hlds__deforest__V_111_111;
#line 717 "deforest.m"
            MR_Word transform_hlds__deforest__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 1)));
#line 719 "deforest.m"
            MR_Word transform_hlds__deforest__V_66_66;
#line 719 "deforest.m"
            MR_Word transform_hlds__deforest__V_62_62;
#line 719 "deforest.m"
            MR_Word transform_hlds__deforest__V_63_63;
#line 719 "deforest.m"
            MR_Word transform_hlds__deforest__V_64_64;
#line 719 "deforest.m"
            MR_Word transform_hlds__deforest__V_65_65;
#line 722 "deforest.m"
            MR_Word transform_hlds__deforest__TypeCtorInfo_170_170;

#line 718 "deforest.m"
            {
#line 718 "deforest.m"
              transform_hlds__deforest__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__deforest__EarlierGoalExpr_58);
            }
#line 717 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 717 "deforest.m"
              {
#line 719 "deforest.m"
                transform_hlds__deforest__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 0)));
#line 719 "deforest.m"
                transform_hlds__deforest__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 1)));
#line 719 "deforest.m"
                transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_111_111)) == (MR_mktag((MR_Integer) 2)));
#line 719 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 719 "deforest.m"
                  {
#line 719 "deforest.m"
                    transform_hlds__deforest__PredId_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 0)));
#line 719 "deforest.m"
                    transform_hlds__deforest__ProcId_61 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 1)));
#line 719 "deforest.m"
                    transform_hlds__deforest__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 2)));
#line 719 "deforest.m"
                    transform_hlds__deforest__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 3)));
#line 719 "deforest.m"
                    transform_hlds__deforest__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 4)));
#line 719 "deforest.m"
                    transform_hlds__deforest__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 5)));
#line 720 "deforest.m"
                    {
#line 720 "deforest.m"
                      transform_hlds__deforest__PredProcId_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 720 "deforest.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__deforest__PredProcId_67, 0) = ((MR_Box) (transform_hlds__deforest__PredId_60));
#line 720 "deforest.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__deforest__PredProcId_67, 1) = ((MR_Box) (transform_hlds__deforest__ProcId_61));
#line 720 "deforest.m"
                    }
#line 721 "deforest.m"
                    {
#line 721 "deforest.m"
                      transform_hlds__deforest__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__deforest__PredProcId_67, transform_hlds__deforest__CurrPredProcId_27);
                    }
#line 721 "deforest.m"
                    transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 717 "deforest.m"
                    if (transform_hlds__deforest__succeeded)
#line 717 "deforest.m"
                      {
#line 8123 "transform_hlds.deforest.c"
                        transform_hlds__deforest__TypeCtorInfo_170_170 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 722 "deforest.m"
                        {
#line 722 "deforest.m"
                          transform_hlds__deforest__succeeded = mercury__set__member_2_p_0(transform_hlds__deforest__TypeCtorInfo_170_170, ((MR_Box) (transform_hlds__deforest__PredProcId_67)), transform_hlds__deforest__Parents0_28);
                        }
#line 722 "deforest.m"
                        transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 717 "deforest.m"
                      }
#line 719 "deforest.m"
                  }
#line 717 "deforest.m"
              }
#line 735 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 724 "deforest.m"
              {
#line 724 "deforest.m"
                MR_String transform_hlds__deforest__CurrPredName_68;
#line 724 "deforest.m"
                MR_Word transform_hlds__deforest__Parents_69;
#line 724 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_119_119;
#line 724 "deforest.m"
                MR_Word transform_hlds__deforest__Goal_159;
#line 725 "deforest.m"
                MR_Word transform_hlds__deforest__V_114_114;
#line 725 "deforest.m"
                MR_Word transform_hlds__deforest__V_116_116;

#line 724 "deforest.m"
                {
#line 724 "deforest.m"
                  transform_hlds__deforest__CurrPredName_68 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__deforest__ModuleInfo_16, transform_hlds__deforest__PredId_60);
                }
#line 727 "deforest.m"
                {
#line 727 "deforest.m"
                  transform_hlds__deforest__V_116_116 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 727 "deforest.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_116_116, 0) = ((MR_Box) (transform_hlds__deforest__CurrPredName_68));
#line 727 "deforest.m"
                }
#line 726 "deforest.m"
                {
#line 726 "deforest.m"
                  transform_hlds__deforest__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_114_114, 0) = ((MR_Box) (transform_hlds__deforest__V_116_116));
#line 726 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "deforest.m"
                }
#line 726 "deforest.m"
                {
#line 726 "deforest.m"
                  transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Pushing call to %s into goal\n", transform_hlds__deforest__V_114_114);
                }
#line 729 "deforest.m"
                {
#line 729 "deforest.m"
                  mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__deforest__PredProcId_67)), transform_hlds__deforest__Parents0_28, &transform_hlds__deforest__Parents_69);
                }
#line 730 "deforest.m"
                {
#line 730 "deforest.m"
                  transform_hlds__pd_info__pd_info_set_parents_3_p_0(transform_hlds__deforest__Parents_69, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_119_119);
                }
#line 731 "deforest.m"
                {
#line 731 "deforest.m"
                  transform_hlds__deforest__push_goal_into_goal_8_p_0(transform_hlds__deforest__ConjNonLocals_26, transform_hlds__deforest__DeforestBranches_36, transform_hlds__deforest__EarlierGoal_31, transform_hlds__deforest__BetweenGoals_33, transform_hlds__deforest__LaterGoal_34, &transform_hlds__deforest__Goal_159, transform_hlds__deforest__STATE_VARIABLE_PDInfo_119_119, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
                }
#line 733 "deforest.m"
                {
#line 733 "deforest.m"
                  transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 0) = ((MR_Box) (transform_hlds__deforest__Goal_159));
#line 733 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "deforest.m"
                }
#line 734 "deforest.m"
                transform_hlds__deforest__Optimized0_38 = (MR_Integer) 1;
#line 724 "deforest.m"
              }
#line 735 "deforest.m"
            else
#line 755 "deforest.m"
              {
#line 738 "deforest.m"
                MR_Word transform_hlds__deforest__LaterGoalExpr_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 0)));
#line 738 "deforest.m"
                MR_Word transform_hlds__deforest__EarlierGoalExpr_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 0)));
#line 738 "deforest.m"
                MR_Word transform_hlds__deforest__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 1)));
#line 739 "deforest.m"
                MR_Word transform_hlds__deforest__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 1)));

#line 740 "deforest.m"
                {
#line 740 "deforest.m"
                  transform_hlds__deforest__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__deforest__EarlierGoalExpr_160);
                }
#line 738 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 741 "deforest.m"
                  {
#line 741 "deforest.m"
                    transform_hlds__deforest__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__deforest__LaterGoalExpr_71);
                  }
#line 755 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 745 "deforest.m"
                  {
#line 745 "deforest.m"
                    MR_Integer transform_hlds__deforest__ConjSize1_73;
#line 745 "deforest.m"
                    MR_Integer transform_hlds__deforest__ConjSize2_74;
#line 745 "deforest.m"
                    MR_Integer transform_hlds__deforest__NewSize_75;
#line 745 "deforest.m"
                    MR_Integer transform_hlds__deforest__SizeDiff_76;
#line 745 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126;
#line 745 "deforest.m"
                    MR_Word transform_hlds__deforest__V_128_128;
#line 745 "deforest.m"
                    MR_Integer transform_hlds__deforest__V_129_129;
#line 745 "deforest.m"
                    MR_Word transform_hlds__deforest__Goal_161;

#line 744 "deforest.m"
                    {
#line 744 "deforest.m"
                      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Pushing goal into goal\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                    }
#line 746 "deforest.m"
                    {
#line 746 "deforest.m"
                      transform_hlds__deforest__push_goal_into_goal_8_p_0(transform_hlds__deforest__ConjNonLocals_26, transform_hlds__deforest__DeforestBranches_36, transform_hlds__deforest__EarlierGoal_31, transform_hlds__deforest__BetweenGoals_33, transform_hlds__deforest__LaterGoal_34, &transform_hlds__deforest__Goal_161, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126);
                    }
#line 748 "deforest.m"
                    {
#line 748 "deforest.m"
                      transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 0) = ((MR_Box) (transform_hlds__deforest__Goal_161));
#line 748 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "deforest.m"
                    }
#line 749 "deforest.m"
                    {
#line 749 "deforest.m"
                      transform_hlds__deforest__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_128_128, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_31));
#line 749 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_128_128, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_33));
#line 749 "deforest.m"
                    }
#line 749 "deforest.m"
                    {
#line 749 "deforest.m"
                      hlds__goal_util__goals_size_2_p_0(transform_hlds__deforest__V_128_128, &transform_hlds__deforest__ConjSize1_73);
                    }
#line 750 "deforest.m"
                    {
#line 750 "deforest.m"
                      hlds__goal_util__goal_size_2_p_0(transform_hlds__deforest__LaterGoal_34, &transform_hlds__deforest__ConjSize2_74);
                    }
#line 751 "deforest.m"
                    {
#line 751 "deforest.m"
                      hlds__goal_util__goal_size_2_p_0(transform_hlds__deforest__Goal_161, &transform_hlds__deforest__NewSize_75);
                    }
#line 752 "deforest.m"
                    transform_hlds__deforest__V_129_129 = (transform_hlds__deforest__NewSize_75 - transform_hlds__deforest__ConjSize1_73);
#line 752 "deforest.m"
                    transform_hlds__deforest__SizeDiff_76 = (transform_hlds__deforest__V_129_129 - transform_hlds__deforest__ConjSize2_74);
#line 753 "deforest.m"
                    {
#line 753 "deforest.m"
                      transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(transform_hlds__deforest__SizeDiff_76, transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
                    }
#line 754 "deforest.m"
                    transform_hlds__deforest__Optimized0_38 = (MR_Integer) 1;
#line 745 "deforest.m"
                  }
#line 755 "deforest.m"
                else
#line 758 "deforest.m"
                  {
#line 757 "deforest.m"
                    {
#line 757 "deforest.m"
                      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "not optimizing\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                    }
#line 759 "deforest.m"
                    transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 760 "deforest.m"
                    transform_hlds__deforest__Optimized0_38 = (MR_Integer) 0;
#line 760 "deforest.m"
                    transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 758 "deforest.m"
                  }
#line 755 "deforest.m"
              }
#line 735 "deforest.m"
          }
#line 712 "deforest.m"
      }
#line 763 "deforest.m"
    {
#line 763 "deforest.m"
      *transform_hlds__deforest__Optimized_14 = transform_hlds__deforest__is_improvement_worth_while_4_f_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109, transform_hlds__deforest__Optimized0_38, transform_hlds__deforest__CostDelta0_29, transform_hlds__deforest__SizeDelta0_30);
    }
#line 767 "deforest.m"
    {
#line 767 "deforest.m"
      transform_hlds__pd_info__pd_info_set_depth_3_p_0(transform_hlds__deforest__Depth0_21, transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_135_135);
    }
#line 768 "deforest.m"
    {
#line 768 "deforest.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_PDInfo_135_135, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136);
    }
#line 788 "deforest.m"
    if ((*transform_hlds__deforest__Optimized_14 == (MR_Integer) 0))
#line 770 "deforest.m"
      {
#line 770 "deforest.m"
        MR_Word transform_hlds__deforest__TypeCtorInfo_172_172;
#line 770 "deforest.m"
        MR_Word transform_hlds__deforest__CreatedVersions_77;
#line 770 "deforest.m"
        MR_Word transform_hlds__deforest__NewVersions0_78;
#line 770 "deforest.m"
        MR_Word transform_hlds__deforest__NewVersions_79;
#line 770 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_148_148;
#line 770 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149;
#line 785 "deforest.m"
        MR_Box transform_hlds__deforest__conv3_STATE_VARIABLE_PDInfo_151_151;

#line 778 "deforest.m"
        {
#line 778 "deforest.m"
          transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(transform_hlds__deforest__CostDelta0_29, transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_148_148);
        }
#line 779 "deforest.m"
        {
#line 779 "deforest.m"
          transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(transform_hlds__deforest__SizeDelta0_30, transform_hlds__deforest__STATE_VARIABLE_PDInfo_148_148, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149);
        }
#line 782 "deforest.m"
        {
#line 782 "deforest.m"
          transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149, &transform_hlds__deforest__CreatedVersions_77);
        }
#line 8388 "transform_hlds.deforest.c"
        transform_hlds__deforest__TypeCtorInfo_172_172 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 783 "deforest.m"
        {
#line 783 "deforest.m"
          mercury__set__difference_3_p_0(transform_hlds__deforest__TypeCtorInfo_172_172, transform_hlds__deforest__CreatedVersions_77, transform_hlds__deforest__CreatedVersions0_20, &transform_hlds__deforest__NewVersions0_78);
        }
#line 784 "deforest.m"
        {
#line 784 "deforest.m"
          mercury__set__to_sorted_list_2_p_0(transform_hlds__deforest__TypeCtorInfo_172_172, transform_hlds__deforest__NewVersions0_78, &transform_hlds__deforest__NewVersions_79);
        }
#line 785 "deforest.m"
        {
#line 785 "deforest.m"
          mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_172_172, transform_hlds__deforest__TypeCtorInfo_169_169, (MR_Word) &transform_hlds__deforest_scalar_common_2[10], transform_hlds__deforest__NewVersions_79, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149)), &transform_hlds__deforest__conv3_STATE_VARIABLE_PDInfo_151_151);
        }
#line 785 "deforest.m"
        transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151 = ((MR_Word) transform_hlds__deforest__conv3_STATE_VARIABLE_PDInfo_151_151);
#line 785 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85 = transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84;
#line 770 "deforest.m"
      }
#line 788 "deforest.m"
    else
#line 789 "deforest.m"
      {
#line 789 "deforest.m"
        MR_Word transform_hlds__deforest__GoalsToProcess_80;
#line 789 "deforest.m"
        MR_Word transform_hlds__deforest__GoalsAndInfo_81;
#line 789 "deforest.m"
        MR_Word transform_hlds__deforest__V_137_137;
#line 789 "deforest.m"
        MR_Word transform_hlds__deforest__V_138_138;
#line 789 "deforest.m"
        MR_Word transform_hlds__deforest__V_139_139;
#line 789 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_141_141;
#line 789 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_143_143;
#line 789 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_145_145;

#line 792 "deforest.m"
        {
#line 792 "deforest.m"
          transform_hlds__deforest__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_139_139, 0) = ((MR_Box) (transform_hlds__deforest__AfterIrrelevant_25));
#line 792 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 792 "deforest.m"
        }
#line 792 "deforest.m"
        {
#line 792 "deforest.m"
          transform_hlds__deforest__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_138_138, 0) = ((MR_Box) (transform_hlds__deforest__Goals_39));
#line 792 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_138_138, 1) = ((MR_Box) (transform_hlds__deforest__V_139_139));
#line 792 "deforest.m"
        }
#line 792 "deforest.m"
        {
#line 792 "deforest.m"
          transform_hlds__deforest__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_137_137, 0) = ((MR_Box) (transform_hlds__deforest__BeforeIrrelevant_24));
#line 792 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_137_137, 1) = ((MR_Box) (transform_hlds__deforest__V_138_138));
#line 792 "deforest.m"
        }
#line 792 "deforest.m"
        {
#line 792 "deforest.m"
          mercury__list__condense_2_p_0(transform_hlds__deforest__TypeCtorInfo_168_168, transform_hlds__deforest__V_137_137, &transform_hlds__deforest__GoalsToProcess_80);
        }
#line 794 "deforest.m"
        {
#line 794 "deforest.m"
          transform_hlds__deforest__compute_goal_infos_4_p_0(transform_hlds__deforest__GoalsToProcess_80, &transform_hlds__deforest__GoalsAndInfo_81, transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_141_141);
        }
#line 795 "deforest.m"
        {
#line 795 "deforest.m"
          mercury__list__append_3_p_1((MR_Word) &transform_hlds__deforest_scalar_common_2[1], transform_hlds__deforest__GoalsAndInfo_81, transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84, transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85);
        }
#line 796 "deforest.m"
        {
#line 796 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_PDInfo_141_141, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_143_143);
        }
#line 797 "deforest.m"
        {
#line 797 "deforest.m"
          transform_hlds__pd_info__pd_info_set_changed_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_143_143, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_145_145);
        }
#line 798 "deforest.m"
        {
#line 798 "deforest.m"
          transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_145_145, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151);
        }
#line 789 "deforest.m"
      }
#line 802 "deforest.m"
    {
#line 802 "deforest.m"
      transform_hlds__deforest__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 802 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_156_156, 0) = ((MR_Box) (transform_hlds__deforest__Depth0_21));
#line 802 "deforest.m"
    }
#line 801 "deforest.m"
    {
#line 801 "deforest.m"
      transform_hlds__deforest__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_154_154, 0) = ((MR_Box) (transform_hlds__deforest__V_156_156));
#line 801 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 801 "deforest.m"
    }
#line 801 "deforest.m"
    {
#line 801 "deforest.m"
      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "finished deforestation at depth %i\n", transform_hlds__deforest__V_154_154);
    }
#line 804 "deforest.m"
    {
#line 804 "deforest.m"
      transform_hlds__pd_info__pd_info_set_parents_3_p_0(transform_hlds__deforest__Parents0_28, transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151, transform_hlds__deforest__STATE_VARIABLE_PDInfo_87);
    }
#line 804 "deforest.m"
    *transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_83 = transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82;
#line 651 "deforest.m"
  }
#line 645 "deforest.m"
}

#line 631 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0_1(
#line 631 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 631 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 631 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 631 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 631 "deforest.m"
{
#line 631 "deforest.m"
  {
#line 631 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 631 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_HeadVar__3_24;

#line 631 "deforest.m"
    {
#line 631 "deforest.m"
      transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__631__1_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_HeadVar__3_24);
    }
#line 631 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__3_24));
#line 631 "deforest.m"
  }
#line 631 "deforest.m"
}

#line 592 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0(
#line 592 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_7,
#line 592 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierBranchInfo_8,
#line 592 "deforest.m"
  MR_Word transform_hlds__deforest__RevBetweenGoals0_9,
#line 592 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 592 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_12,
#line 592 "deforest.m"
  MR_Word * transform_hlds__deforest__DeforestInfo_13)
#line 592 "deforest.m"
{
#line 598 "deforest.m"
  while (MR_TRUE)
#line 598 "deforest.m"
    {
#line 598 "deforest.m"
      /* tailcall optimized into a loop */
#line 598 "deforest.m"
      {
#line 598 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 598 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_10;
#line 598 "deforest.m"
        MR_Word transform_hlds__deforest__Goals0_11;
#line 609 "deforest.m"
        MR_Word transform_hlds__deforest__LaterGoal_14;
#line 609 "deforest.m"
        MR_Word transform_hlds__deforest__LaterBranchInfo_15;
#line 609 "deforest.m"
        MR_Word transform_hlds__deforest__DeforestBranches_16;
#line 600 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_28_48;
#line 600 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_29_49;
#line 600 "deforest.m"
        MR_Word transform_hlds__deforest__TypeCtorInfo_31_51;
#line 600 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_32_52;
#line 600 "deforest.m"
        MR_Word transform_hlds__deforest__V_19_19;
#line 600 "deforest.m"
        MR_Word transform_hlds__deforest__VarMap1_27;
#line 600 "deforest.m"
        MR_Word transform_hlds__deforest__LeftVars2_31;
#line 600 "deforest.m"
        MR_Word transform_hlds__deforest__VarMap_33;
#line 600 "deforest.m"
        MR_Word transform_hlds__deforest__VarAssoc_34;
#line 600 "deforest.m"
        MR_Word transform_hlds__deforest__GetBranches_35;
#line 600 "deforest.m"
        MR_Word transform_hlds__deforest__DeforestBranches0_41;
#line 622 "deforest.m"
        MR_Word transform_hlds__deforest__V_28_28;
#line 622 "deforest.m"
        MR_Word transform_hlds__deforest__V_29_29;
#line 623 "deforest.m"
        MR_Word transform_hlds__deforest__V_30_30;
#line 623 "deforest.m"
        MR_Word transform_hlds__deforest__V_32_32;
#line 637 "deforest.m"
        MR_Box transform_hlds__deforest__conv1_DeforestBranches_16;

#line 598 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 598 "deforest.m"
          {
#line 598 "deforest.m"
            transform_hlds__deforest__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 0)));
#line 598 "deforest.m"
            transform_hlds__deforest__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 1)));
#line 600 "deforest.m"
            transform_hlds__deforest__LaterGoal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, (MR_Integer) 0)));
#line 600 "deforest.m"
            transform_hlds__deforest__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, (MR_Integer) 1)));
#line 600 "deforest.m"
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 600 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 600 "deforest.m"
              {
#line 600 "deforest.m"
                transform_hlds__deforest__LaterBranchInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_19_19, (MR_Integer) 0)));
#line 622 "deforest.m"
                transform_hlds__deforest__VarMap1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierBranchInfo_8, (MR_Integer) 0)));
#line 622 "deforest.m"
                transform_hlds__deforest__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierBranchInfo_8, (MR_Integer) 1)));
#line 622 "deforest.m"
                transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierBranchInfo_8, (MR_Integer) 2)));
#line 623 "deforest.m"
                transform_hlds__deforest__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterBranchInfo_15, (MR_Integer) 0)));
#line 623 "deforest.m"
                transform_hlds__deforest__LeftVars2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterBranchInfo_15, (MR_Integer) 1)));
#line 623 "deforest.m"
                transform_hlds__deforest__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterBranchInfo_15, (MR_Integer) 2)));
#line 8663 "transform_hlds.deforest.c"
                transform_hlds__deforest__TypeInfo_28_48 = (MR_Word) &transform_hlds__deforest_scalar_common_1[1];
#line 8665 "transform_hlds.deforest.c"
                transform_hlds__deforest__TypeInfo_29_49 = (MR_Word) &transform_hlds__deforest_scalar_common_1[4];
#line 625 "deforest.m"
                {
#line 625 "deforest.m"
                  mercury__map__select_3_p_0(transform_hlds__deforest__TypeInfo_28_48, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__VarMap1_27, transform_hlds__deforest__LeftVars2_31, &transform_hlds__deforest__VarMap_33);
                }
#line 626 "deforest.m"
                {
#line 626 "deforest.m"
                  mercury__map__to_assoc_list_2_p_0(transform_hlds__deforest__TypeInfo_28_48, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__VarMap_33, &transform_hlds__deforest__VarAssoc_34);
                }
#line 627 "deforest.m"
                {
#line 627 "deforest.m"
                  transform_hlds__deforest__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__deforest__TypeInfo_28_48, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__VarMap_33);
                }
#line 627 "deforest.m"
                transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 600 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 600 "deforest.m"
                  {
#line 631 "deforest.m"
                    transform_hlds__deforest__GetBranches_35 = (MR_Word) &transform_hlds__deforest_scalar_common_2[8];
#line 8690 "transform_hlds.deforest.c"
                    transform_hlds__deforest__TypeCtorInfo_31_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 636 "deforest.m"
                    {
#line 636 "deforest.m"
                      mercury__set__init_1_p_0(transform_hlds__deforest__TypeCtorInfo_31_51, &transform_hlds__deforest__DeforestBranches0_41);
                    }
#line 8697 "transform_hlds.deforest.c"
                    transform_hlds__deforest__TypeInfo_32_52 = (MR_Word) &transform_hlds__deforest_scalar_common_2[2];
#line 637 "deforest.m"
                    {
#line 637 "deforest.m"
                      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeInfo_32_52, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__GetBranches_35, transform_hlds__deforest__VarAssoc_34, ((MR_Box) (transform_hlds__deforest__DeforestBranches0_41)), &transform_hlds__deforest__conv1_DeforestBranches_16);
                    }
#line 637 "deforest.m"
                    transform_hlds__deforest__DeforestBranches_16 = ((MR_Word) transform_hlds__deforest__conv1_DeforestBranches_16);
#line 637 "deforest.m"
                    transform_hlds__deforest__succeeded = MR_TRUE;
#line 600 "deforest.m"
                  }
#line 600 "deforest.m"
              }
#line 609 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 604 "deforest.m"
              {
#line 604 "deforest.m"
                MR_Word transform_hlds__deforest__BetweenGoals1_17;
#line 604 "deforest.m"
                MR_Word transform_hlds__deforest__BetweenGoals_18;

#line 604 "deforest.m"
                {
#line 604 "deforest.m"
                  mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__deforest_scalar_common_2[1], transform_hlds__deforest__RevBetweenGoals0_9, &transform_hlds__deforest__BetweenGoals1_17);
                }
#line 605 "deforest.m"
                {
#line 605 "deforest.m"
                  mercury__assoc_list__keys_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[3], transform_hlds__deforest__BetweenGoals1_17, &transform_hlds__deforest__BetweenGoals_18);
                }
#line 606 "deforest.m"
                *transform_hlds__deforest__Goals_12 = transform_hlds__deforest__Goals0_11;
#line 607 "deforest.m"
                {
#line 607 "deforest.m"
                  MR_Word base;
#line 607 "deforest.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 607 "deforest.m"
                  *transform_hlds__deforest__DeforestInfo_13 = base;
#line 607 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_7));
#line 607 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__EarlierBranchInfo_8));
#line 607 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_18));
#line 607 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__deforest__LaterGoal_14));
#line 607 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__deforest__LaterBranchInfo_15));
#line 607 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__deforest__DeforestBranches_16));
#line 607 "deforest.m"
                }
#line 604 "deforest.m"
                transform_hlds__deforest__succeeded = MR_TRUE;
#line 604 "deforest.m"
              }
#line 609 "deforest.m"
            else
#line 610 "deforest.m"
              {
#line 610 "deforest.m"
                MR_Word transform_hlds__deforest__V_20_20;

#line 610 "deforest.m"
                {
#line 610 "deforest.m"
                  transform_hlds__deforest__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_20_20, 0) = ((MR_Box) (transform_hlds__deforest__Goal_10));
#line 610 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_20_20, 1) = ((MR_Box) (transform_hlds__deforest__RevBetweenGoals0_9));
#line 610 "deforest.m"
                }
#line 610 "deforest.m"
                /* direct tailcall eliminated */
#line 610 "deforest.m"
                {
#line 610 "deforest.m"
                  MR_Word transform_hlds__deforest__RevBetweenGoals0__tmp_copy_9 = transform_hlds__deforest__V_20_20;
#line 610 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__4__tmp_copy_4 = transform_hlds__deforest__Goals0_11;

#line 610 "deforest.m"
                  transform_hlds__deforest__HeadVar__4_4 = transform_hlds__deforest__HeadVar__4__tmp_copy_4;
#line 610 "deforest.m"
                  transform_hlds__deforest__RevBetweenGoals0_9 = transform_hlds__deforest__RevBetweenGoals0__tmp_copy_9;
#line 610 "deforest.m"
                }
#line 610 "deforest.m"
                continue;
#line 610 "deforest.m"
              }
#line 598 "deforest.m"
          }
#line 598 "deforest.m"
        return transform_hlds__deforest__succeeded;
#line 598 "deforest.m"
      }
#line 598 "deforest.m"
      break;
#line 598 "deforest.m"
    }
#line 592 "deforest.m"
}

#line 533 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_conj_6_p_0(
#line 533 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 533 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_2,
#line 533 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3,
#line 533 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__4_4,
#line 533 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
#line 533 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6)
#line 533 "deforest.m"
{
#line 537 "deforest.m"
  while (MR_TRUE)
#line 537 "deforest.m"
    {
#line 537 "deforest.m"
      /* tailcall optimized into a loop */
#line 537 "deforest.m"
      {
#line 537 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;

#line 537 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 537 "deforest.m"
          {
#line 538 "deforest.m"
            {
#line 538 "deforest.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__HeadVar__3_3, transform_hlds__deforest__HeadVar__4_4);
            }
#line 537 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_6 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5;
#line 537 "deforest.m"
          }
#line 537 "deforest.m"
        else
#line 540 "deforest.m"
          {
#line 540 "deforest.m"
            MR_Word transform_hlds__deforest__Goal0_13;
#line 540 "deforest.m"
            MR_Word transform_hlds__deforest__MaybeBranchInfo_14;
#line 540 "deforest.m"
            MR_Word transform_hlds__deforest__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 540 "deforest.m"
            MR_Word transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 558 "deforest.m"
            MR_Word transform_hlds__deforest__Goals1_21;
#line 558 "deforest.m"
            MR_Word transform_hlds__deforest__DeforestInfo_22;
#line 543 "deforest.m"
            MR_Word transform_hlds__deforest__GoalBranchInfo_20;
#line 543 "deforest.m"
            MR_Word transform_hlds__deforest__V_44_44;

#line 539 "deforest.m"
            transform_hlds__deforest__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_29_29, (MR_Integer) 0)));
#line 539 "deforest.m"
            transform_hlds__deforest__MaybeBranchInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_29_29, (MR_Integer) 1)));
#line 543 "deforest.m"
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__MaybeBranchInfo_14)) == (MR_mktag((MR_Integer) 1)));
#line 543 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 543 "deforest.m"
              {
#line 543 "deforest.m"
                transform_hlds__deforest__GoalBranchInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeBranchInfo_14, (MR_Integer) 0)));
#line 589 "deforest.m"
                transform_hlds__deforest__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 589 "deforest.m"
                {
#line 589 "deforest.m"
                  transform_hlds__deforest__succeeded = transform_hlds__deforest__search_for_deforest_goal_6_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__GoalBranchInfo_20, transform_hlds__deforest__V_44_44, transform_hlds__deforest__Goals0_15, &transform_hlds__deforest__Goals1_21, &transform_hlds__deforest__DeforestInfo_22);
                }
#line 543 "deforest.m"
              }
#line 558 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 548 "deforest.m"
              {
#line 548 "deforest.m"
                MR_Word transform_hlds__deforest__RevGoals1_23;
#line 548 "deforest.m"
                MR_Word transform_hlds__deforest__Goals2_24;
#line 548 "deforest.m"
                MR_Word transform_hlds__deforest__Optimized_25;
#line 548 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30;

#line 547 "deforest.m"
                {
#line 547 "deforest.m"
                  transform_hlds__deforest__handle_deforestation_9_p_0(transform_hlds__deforest__NonLocals_2, transform_hlds__deforest__DeforestInfo_22, transform_hlds__deforest__HeadVar__3_3, &transform_hlds__deforest__RevGoals1_23, transform_hlds__deforest__Goals1_21, &transform_hlds__deforest__Goals2_24, &transform_hlds__deforest__Optimized_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30);
                }
#line 552 "deforest.m"
                if ((transform_hlds__deforest__Optimized_25 == (MR_Integer) 0))
#line 553 "deforest.m"
                  {
#line 553 "deforest.m"
                    MR_Word transform_hlds__deforest__RevGoals2_26;
#line 553 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_31_31;

#line 554 "deforest.m"
                    {
#line 554 "deforest.m"
                      transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_31_31);
                    }
#line 555 "deforest.m"
                    {
#line 555 "deforest.m"
                      transform_hlds__deforest__RevGoals2_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_26, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
#line 555 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_26, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 555 "deforest.m"
                    }
#line 556 "deforest.m"
                    /* direct tailcall eliminated */
#line 556 "deforest.m"
                    {
#line 556 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_15;
#line 556 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__RevGoals2_26;
#line 556 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_31_31;

#line 556 "deforest.m"
                      transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 556 "deforest.m"
                      transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 556 "deforest.m"
                      transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 556 "deforest.m"
                    }
#line 556 "deforest.m"
                    continue;
#line 553 "deforest.m"
                  }
#line 552 "deforest.m"
                else
#line 551 "deforest.m"
                  {
#line 551 "deforest.m"
                    /* direct tailcall eliminated */
#line 551 "deforest.m"
                    {
#line 551 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals2_24;
#line 551 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__RevGoals1_23;
#line 551 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30;

#line 551 "deforest.m"
                      transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 551 "deforest.m"
                      transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 551 "deforest.m"
                      transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 551 "deforest.m"
                    }
#line 551 "deforest.m"
                    continue;
#line 551 "deforest.m"
                  }
#line 548 "deforest.m"
              }
#line 558 "deforest.m"
            else
#line 559 "deforest.m"
              {
#line 559 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;
#line 559 "deforest.m"
                MR_Word transform_hlds__deforest__RevGoals1_36;

#line 559 "deforest.m"
                {
#line 559 "deforest.m"
                  transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34);
                }
#line 560 "deforest.m"
                {
#line 560 "deforest.m"
                  transform_hlds__deforest__RevGoals1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals1_36, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
#line 560 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals1_36, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 560 "deforest.m"
                }
#line 561 "deforest.m"
                /* direct tailcall eliminated */
#line 561 "deforest.m"
                {
#line 561 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_15;
#line 561 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__RevGoals1_36;
#line 561 "deforest.m"
                  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;

#line 561 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 561 "deforest.m"
                  transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 561 "deforest.m"
                  transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 561 "deforest.m"
                }
#line 561 "deforest.m"
                continue;
#line 559 "deforest.m"
              }
#line 540 "deforest.m"
          }
#line 537 "deforest.m"
      }
#line 537 "deforest.m"
      break;
#line 537 "deforest.m"
    }
#line 533 "deforest.m"
}

#line 492 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0_1(
#line 492 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 492 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1)
#line 492 "deforest.m"
{
#line 492 "deforest.m"
  {
#line 492 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 492 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;

#line 492 "deforest.m"
    {
#line 492 "deforest.m"
      return transform_hlds__deforest__succeeded = transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__492__1_1_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1));
    }
#line 492 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 492 "deforest.m"
  }
#line 492 "deforest.m"
}

#line 476 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0(
#line 476 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 476 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_2,
#line 476 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3,
#line 476 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_4,
#line 476 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
#line 476 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6)
#line 476 "deforest.m"
{
#line 480 "deforest.m"
  while (MR_TRUE)
#line 480 "deforest.m"
    {
#line 480 "deforest.m"
      /* tailcall optimized into a loop */
#line 480 "deforest.m"
      {
#line 480 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;

#line 480 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "deforest.m"
          {
#line 481 "deforest.m"
            {
#line 481 "deforest.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__HeadVar__3_3, transform_hlds__deforest__Goals_4);
            }
#line 480 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_6 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5;
#line 480 "deforest.m"
          }
#line 480 "deforest.m"
        else
#line 483 "deforest.m"
          {
#line 483 "deforest.m"
            MR_Word transform_hlds__deforest__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 483 "deforest.m"
            MR_Word transform_hlds__deforest__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 483 "deforest.m"
            MR_Word transform_hlds__deforest__ModuleInfo_19;
#line 522 "deforest.m"
            MR_Word transform_hlds__deforest__SymName_25;
#line 522 "deforest.m"
            MR_Word transform_hlds__deforest__Constraints_31;
#line 522 "deforest.m"
            MR_Word transform_hlds__deforest__Goals1_32;
#line 489 "deforest.m"
            MR_Word transform_hlds__deforest__TypeCtorInfo_73_73;
#line 489 "deforest.m"
            MR_Word transform_hlds__deforest__PredId_20;
#line 489 "deforest.m"
            MR_Word transform_hlds__deforest__PredInfo_27;
#line 489 "deforest.m"
            MR_Word transform_hlds__deforest__V_44_44;
#line 489 "deforest.m"
            MR_Word transform_hlds__deforest__V_45_45;
#line 488 "deforest.m"
            MR_Word transform_hlds__deforest__V_26_26;
#line 488 "deforest.m"
            MR_Integer transform_hlds__deforest___ProcId_21;
#line 488 "deforest.m"
            MR_Word transform_hlds__deforest___Args_22;
#line 488 "deforest.m"
            MR_Word transform_hlds__deforest__V_23_23;
#line 488 "deforest.m"
            MR_Word transform_hlds__deforest__V_24_24;
#line 496 "deforest.m"
            MR_Word transform_hlds__deforest__V_33_33;
#line 496 "deforest.m"
            MR_Word transform_hlds__deforest__V_34_34;

#line 484 "deforest.m"
            {
#line 484 "deforest.m"
              transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__ModuleInfo_19);
            }
#line 488 "deforest.m"
            transform_hlds__deforest__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_13, (MR_Integer) 0)));
#line 488 "deforest.m"
            transform_hlds__deforest__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_13, (MR_Integer) 1)));
#line 488 "deforest.m"
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_44_44)) == (MR_mktag((MR_Integer) 2)));
#line 488 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 488 "deforest.m"
              {
#line 488 "deforest.m"
                transform_hlds__deforest__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 0)));
#line 488 "deforest.m"
                transform_hlds__deforest___ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 1)));
#line 488 "deforest.m"
                transform_hlds__deforest___Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 2)));
#line 488 "deforest.m"
                transform_hlds__deforest__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 3)));
#line 488 "deforest.m"
                transform_hlds__deforest__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 4)));
#line 488 "deforest.m"
                transform_hlds__deforest__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 5)));
#line 490 "deforest.m"
                {
#line 490 "deforest.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__deforest__ModuleInfo_19, transform_hlds__deforest__PredId_20, &transform_hlds__deforest__PredInfo_27);
                }
#line 491 "deforest.m"
                {
#line 491 "deforest.m"
                  transform_hlds__deforest__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__deforest__PredInfo_27);
                }
#line 491 "deforest.m"
                transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 489 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 489 "deforest.m"
                  {
#line 492 "deforest.m"
                    transform_hlds__deforest__V_45_45 = (MR_Word) &transform_hlds__deforest_scalar_common_2[7];
#line 9198 "transform_hlds.deforest.c"
                    transform_hlds__deforest__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 492 "deforest.m"
                    {
#line 492 "deforest.m"
                      mercury__list__takewhile_4_p_0(transform_hlds__deforest__TypeCtorInfo_73_73, transform_hlds__deforest__V_45_45, transform_hlds__deforest__Goals0_14, &transform_hlds__deforest__Constraints_31, &transform_hlds__deforest__Goals1_32);
                    }
#line 496 "deforest.m"
                    transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Constraints_31)) == (MR_mktag((MR_Integer) 1)));
#line 496 "deforest.m"
                    if (transform_hlds__deforest__succeeded)
#line 496 "deforest.m"
                      {
#line 496 "deforest.m"
                        transform_hlds__deforest__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Constraints_31, (MR_Integer) 0)));
#line 496 "deforest.m"
                        transform_hlds__deforest__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Constraints_31, (MR_Integer) 1)));
#line 496 "deforest.m"
                      }
#line 489 "deforest.m"
                  }
#line 488 "deforest.m"
              }
#line 522 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 498 "deforest.m"
              {
#line 498 "deforest.m"
                MR_String transform_hlds__deforest__SymNameString_35;
#line 498 "deforest.m"
                MR_Word transform_hlds__deforest__Globals_36;
#line 498 "deforest.m"
                MR_Word transform_hlds__deforest__DebugPD_37;
#line 498 "deforest.m"
                MR_Word transform_hlds__deforest__MaybeGoal_40;
#line 498 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59;
#line 501 "deforest.m"
                MR_Word transform_hlds__deforest__V_51_51;
#line 501 "deforest.m"
                MR_Word transform_hlds__deforest__V_53_53;
#line 507 "deforest.m"
                MR_Word transform_hlds__deforest__ConjNonLocals_39;

#line 498 "deforest.m"
                {
#line 498 "deforest.m"
                  transform_hlds__deforest__SymNameString_35 = mdbcomp__prim_data__sym_name_to_string_1_f_0(transform_hlds__deforest__SymName_25);
                }
#line 499 "deforest.m"
                {
#line 499 "deforest.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_19, &transform_hlds__deforest__Globals_36);
                }
#line 500 "deforest.m"
                {
#line 500 "deforest.m"
                  libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_36, (MR_Integer) 70, &transform_hlds__deforest__DebugPD_37);
                }
#line 504 "deforest.m"
                {
#line 504 "deforest.m"
                  transform_hlds__deforest__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 504 "deforest.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_53_53, 0) = ((MR_Box) (transform_hlds__deforest__SymNameString_35));
#line 504 "deforest.m"
                }
#line 502 "deforest.m"
                {
#line 502 "deforest.m"
                  transform_hlds__deforest__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_51_51, 0) = ((MR_Box) (transform_hlds__deforest__V_53_53));
#line 502 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 502 "deforest.m"
                }
#line 502 "deforest.m"
                {
#line 502 "deforest.m"
                  transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_37, (MR_String) "propagating constraints into call to %s\n", transform_hlds__deforest__V_51_51);
                }
#line 507 "deforest.m"
                {
#line 507 "deforest.m"
                  transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(transform_hlds__deforest__NonLocals_2, transform_hlds__deforest__HeadVar__3_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__deforest__Goal0_13, transform_hlds__deforest__Constraints_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__deforest__Goals1_32, &transform_hlds__deforest__ConjNonLocals_39);
                }
#line 509 "deforest.m"
                {
#line 509 "deforest.m"
                  transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__Constraints_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__MaybeGoal_40, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59);
                }
#line 516 "deforest.m"
                if ((transform_hlds__deforest__MaybeGoal_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "deforest.m"
                  {
#line 517 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_60_60;
#line 517 "deforest.m"
                    MR_Word transform_hlds__deforest__V_61_61;

#line 518 "deforest.m"
                    {
#line 518 "deforest.m"
                      transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_60_60);
                    }
#line 519 "deforest.m"
                    {
#line 519 "deforest.m"
                      transform_hlds__deforest__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_61_61, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
#line 519 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_61_61, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 519 "deforest.m"
                    }
#line 519 "deforest.m"
                    /* direct tailcall eliminated */
#line 519 "deforest.m"
                    {
#line 519 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_14;
#line 519 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__V_61_61;
#line 519 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_60_60;

#line 519 "deforest.m"
                      transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 519 "deforest.m"
                      transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 519 "deforest.m"
                      transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 519 "deforest.m"
                    }
#line 519 "deforest.m"
                    continue;
#line 517 "deforest.m"
                  }
#line 516 "deforest.m"
                else
#line 511 "deforest.m"
                  {
#line 511 "deforest.m"
                    MR_Word transform_hlds__deforest__Goal_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeGoal_40, (MR_Integer) 0)));
#line 511 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_64_64;
#line 511 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_65_65;
#line 511 "deforest.m"
                    MR_Word transform_hlds__deforest__V_66_66;

#line 512 "deforest.m"
                    {
#line 512 "deforest.m"
                      transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_64_64);
                    }
#line 513 "deforest.m"
                    {
#line 513 "deforest.m"
                      transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal_41, transform_hlds__deforest__STATE_VARIABLE_PDInfo_64_64, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_65_65);
                    }
#line 514 "deforest.m"
                    {
#line 514 "deforest.m"
                      transform_hlds__deforest__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_66_66, 0) = ((MR_Box) (transform_hlds__deforest__Goal_41));
#line 514 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_66_66, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 514 "deforest.m"
                    }
#line 514 "deforest.m"
                    /* direct tailcall eliminated */
#line 514 "deforest.m"
                    {
#line 514 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals1_32;
#line 514 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__V_66_66;
#line 514 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_65_65;

#line 514 "deforest.m"
                      transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 514 "deforest.m"
                      transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 514 "deforest.m"
                      transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 514 "deforest.m"
                    }
#line 514 "deforest.m"
                    continue;
#line 511 "deforest.m"
                  }
#line 498 "deforest.m"
              }
#line 522 "deforest.m"
            else
#line 523 "deforest.m"
              {
#line 523 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68;
#line 523 "deforest.m"
                MR_Word transform_hlds__deforest__V_69_69;

#line 523 "deforest.m"
                {
#line 523 "deforest.m"
                  transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68);
                }
#line 524 "deforest.m"
                {
#line 524 "deforest.m"
                  transform_hlds__deforest__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_69_69, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
#line 524 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_69_69, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 524 "deforest.m"
                }
#line 524 "deforest.m"
                /* direct tailcall eliminated */
#line 524 "deforest.m"
                {
#line 524 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_14;
#line 524 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__V_69_69;
#line 524 "deforest.m"
                  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68;

#line 524 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 524 "deforest.m"
                  transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 524 "deforest.m"
                  transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 524 "deforest.m"
                }
#line 524 "deforest.m"
                continue;
#line 523 "deforest.m"
              }
#line 483 "deforest.m"
          }
#line 480 "deforest.m"
      }
#line 480 "deforest.m"
      break;
#line 480 "deforest.m"
    }
#line 476 "deforest.m"
}

#line 428 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__compute_goal_infos_4_p_0(
#line 428 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 428 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
#line 428 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
#line 428 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4)
#line 428 "deforest.m"
{
#line 431 "deforest.m"
  {
#line 431 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 431 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 431 "deforest.m"
      {
#line 431 "deforest.m"
        *transform_hlds__deforest__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 431 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 431 "deforest.m"
      }
#line 431 "deforest.m"
    else
#line 433 "deforest.m"
      {
#line 433 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 433 "deforest.m"
        MR_Word transform_hlds__deforest__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 433 "deforest.m"
        MR_Word transform_hlds__deforest__MaybeBranchInfo_10;
#line 433 "deforest.m"
        MR_Word transform_hlds__deforest__Goals_11;
#line 433 "deforest.m"
        MR_Word transform_hlds__deforest__V_15_15;
#line 433 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16;
#line 433 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;
#line 433 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_8, (MR_Integer) 0)));
#line 442 "deforest.m"
        MR_Word transform_hlds__deforest__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_8, (MR_Integer) 1)));

#line 449 "deforest.m"
        if (((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_24)) == (MR_mktag((MR_Integer) 2))))
#line 459 "deforest.m"
          {
#line 459 "deforest.m"
            MR_Word transform_hlds__deforest__PredId_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 0)));
#line 459 "deforest.m"
            MR_Integer transform_hlds__deforest__ProcId_57 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 1)));
#line 459 "deforest.m"
            MR_Word transform_hlds__deforest__Args_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 2)));
#line 459 "deforest.m"
            MR_Word transform_hlds__deforest__ProcBranchInfos_62;
#line 459 "deforest.m"
            MR_Word transform_hlds__deforest__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 3)));
#line 459 "deforest.m"
            MR_Word transform_hlds__deforest__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 4)));
#line 459 "deforest.m"
            MR_Word transform_hlds__deforest__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 5)));
#line 466 "deforest.m"
            MR_Word transform_hlds__deforest__BranchInfo0_63;
#line 461 "deforest.m"
            MR_Word transform_hlds__deforest__V_69_69;
#line 461 "deforest.m"
            MR_Box transform_hlds__deforest__conv0_BranchInfo0_63;

#line 460 "deforest.m"
            {
#line 460 "deforest.m"
              transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__ProcBranchInfos_62);
            }
#line 461 "deforest.m"
            {
#line 461 "deforest.m"
              transform_hlds__deforest__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 461 "deforest.m"
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_69_69, 0) = ((MR_Box) (transform_hlds__deforest__PredId_56));
#line 461 "deforest.m"
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_69_69, 1) = ((MR_Box) (transform_hlds__deforest__ProcId_57));
#line 461 "deforest.m"
            }
#line 461 "deforest.m"
            {
#line 461 "deforest.m"
              transform_hlds__deforest__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[0], transform_hlds__deforest__ProcBranchInfos_62, ((MR_Box) (transform_hlds__deforest__V_69_69)), &transform_hlds__deforest__conv0_BranchInfo0_63);
            }
#line 461 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 461 "deforest.m"
              {
#line 461 "deforest.m"
                transform_hlds__deforest__BranchInfo0_63 = ((MR_Word) transform_hlds__deforest__conv0_BranchInfo0_63);
#line 461 "deforest.m"
                transform_hlds__deforest__succeeded = MR_TRUE;
#line 461 "deforest.m"
              }
#line 466 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 464 "deforest.m"
              {
#line 464 "deforest.m"
                MR_Word transform_hlds__deforest__BranchInfo_64;

#line 464 "deforest.m"
                {
#line 464 "deforest.m"
                  transform_hlds__pd_util__convert_branch_info_3_p_0(transform_hlds__deforest__BranchInfo0_63, transform_hlds__deforest__Args_58, &transform_hlds__deforest__BranchInfo_64);
                }
#line 465 "deforest.m"
                {
#line 465 "deforest.m"
                  transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 465 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeBranchInfo_10, 0) = ((MR_Box) (transform_hlds__deforest__BranchInfo_64));
#line 465 "deforest.m"
                }
#line 464 "deforest.m"
              }
#line 466 "deforest.m"
            else
#line 467 "deforest.m"
              transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 467 "deforest.m"
            transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 459 "deforest.m"
          }
#line 449 "deforest.m"
        else
#line 449 "deforest.m"
          if (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 470 "deforest.m"
            {
#line 471 "deforest.m"
              {
#line 471 "deforest.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforest_get_branch_vars_goal\'/4", (MR_String) "shorthand");
#line 471 "deforest.m"
                return;
              }
#line 470 "deforest.m"
            }
#line 449 "deforest.m"
          else
#line 449 "deforest.m"
            if (((((((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 0)))) == (MR_Integer) 3)))) || (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 0)))) == (MR_Integer) 4))))))
#line 448 "deforest.m"
              {
#line 448 "deforest.m"
                transform_hlds__pd_util__get_branch_vars_goal_4_p_0(transform_hlds__deforest__Goal_8, &transform_hlds__deforest__MaybeBranchInfo_10, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16);
              }
#line 449 "deforest.m"
            else
#line 456 "deforest.m"
              {
#line 457 "deforest.m"
                transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 457 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 456 "deforest.m"
              }
#line 432 "deforest.m"
        {
#line 432 "deforest.m"
          transform_hlds__deforest__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 432 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_15_15, 0) = ((MR_Box) (transform_hlds__deforest__Goal_8));
#line 432 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_15_15, 1) = ((MR_Box) (transform_hlds__deforest__MaybeBranchInfo_10));
#line 432 "deforest.m"
        }
#line 435 "deforest.m"
        {
#line 435 "deforest.m"
          transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal_8, transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17);
        }
#line 436 "deforest.m"
        {
#line 436 "deforest.m"
          transform_hlds__deforest__compute_goal_infos_4_p_0(transform_hlds__deforest__Goals0_9, &transform_hlds__deforest__Goals_11, transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17, transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);
        }
#line 433 "deforest.m"
        {
#line 433 "deforest.m"
          MR_Word base;
#line 433 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "deforest.m"
          *transform_hlds__deforest__HeadVar__2_2 = base;
#line 433 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__V_15_15));
#line 433 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_11));
#line 433 "deforest.m"
        }
#line 433 "deforest.m"
      }
#line 431 "deforest.m"
  }
#line 428 "deforest.m"
}

#line 407 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(
#line 407 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 407 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 407 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_3,
#line 407 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
#line 407 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5)
#line 407 "deforest.m"
{
#line 411 "deforest.m"
  while (MR_TRUE)
#line 411 "deforest.m"
    {
#line 411 "deforest.m"
      /* tailcall optimized into a loop */
#line 411 "deforest.m"
      {
#line 411 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;

#line 411 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 411 "deforest.m"
          {
#line 412 "deforest.m"
            {
#line 412 "deforest.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__HeadVar__2_2, transform_hlds__deforest__Goals_3);
            }
#line 411 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4;
#line 411 "deforest.m"
          }
#line 411 "deforest.m"
        else
#line 413 "deforest.m"
          {
#line 413 "deforest.m"
            MR_Word transform_hlds__deforest__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 413 "deforest.m"
            MR_Word transform_hlds__deforest__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 413 "deforest.m"
            MR_Word transform_hlds__deforest__Goal1_16;
#line 413 "deforest.m"
            MR_Word transform_hlds__deforest__RevGoals2_20;
#line 413 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23;
#line 413 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24;
#line 413 "deforest.m"
            MR_Word transform_hlds__deforest__GoalExpr0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_11, (MR_Integer) 0)));
#line 413 "deforest.m"
            MR_Word transform_hlds__deforest__GoalInfo0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_11, (MR_Integer) 1)));
#line 413 "deforest.m"
            MR_Word transform_hlds__deforest__GoalExpr_37;
#line 413 "deforest.m"
            MR_Word transform_hlds__deforest__GoalInfo_38;
#line 419 "deforest.m"
            MR_Word transform_hlds__deforest__Goals1_17;
#line 416 "deforest.m"
            MR_Word transform_hlds__deforest__V_25_25;
#line 416 "deforest.m"
            MR_Word transform_hlds__deforest__V_26_26;
#line 416 "deforest.m"
            MR_Word transform_hlds__deforest__V_18_18;

#line 275 "deforest.m"
            {
#line 275 "deforest.m"
              transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_35, &transform_hlds__deforest__GoalExpr_37, transform_hlds__deforest__GoalInfo0_36, &transform_hlds__deforest__GoalInfo_38, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23);
            }
#line 276 "deforest.m"
            {
#line 276 "deforest.m"
              transform_hlds__deforest__Goal1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 276 "deforest.m"
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_37));
#line 276 "deforest.m"
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_38));
#line 276 "deforest.m"
            }
#line 415 "deforest.m"
            {
#line 415 "deforest.m"
              transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal1_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24);
            }
#line 416 "deforest.m"
            transform_hlds__deforest__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, (MR_Integer) 0)));
#line 416 "deforest.m"
            transform_hlds__deforest__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, (MR_Integer) 1)));
#line 416 "deforest.m"
            transform_hlds__deforest__succeeded = ((((MR_tag((MR_Word) transform_hlds__deforest__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 416 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 416 "deforest.m"
              {
#line 416 "deforest.m"
                transform_hlds__deforest__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_25_25, (MR_Integer) 1)));
#line 416 "deforest.m"
                transform_hlds__deforest__Goals1_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_25_25, (MR_Integer) 2)));
#line 416 "deforest.m"
                transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_26_26 == (MR_Integer) 0);
#line 416 "deforest.m"
              }
#line 419 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 417 "deforest.m"
              {
#line 417 "deforest.m"
                MR_Word transform_hlds__deforest__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 417 "deforest.m"
                MR_Word transform_hlds__deforest__RevGoals1_19;

#line 417 "deforest.m"
                {
#line 417 "deforest.m"
                  mercury__list__reverse_2_p_0(transform_hlds__deforest__TypeCtorInfo_29_29, transform_hlds__deforest__Goals1_17, &transform_hlds__deforest__RevGoals1_19);
                }
#line 418 "deforest.m"
                {
#line 418 "deforest.m"
                  mercury__list__append_3_p_1(transform_hlds__deforest__TypeCtorInfo_29_29, transform_hlds__deforest__RevGoals1_19, transform_hlds__deforest__HeadVar__2_2, &transform_hlds__deforest__RevGoals2_20);
                }
#line 417 "deforest.m"
              }
#line 419 "deforest.m"
            else
#line 420 "deforest.m"
              {
#line 420 "deforest.m"
                transform_hlds__deforest__RevGoals2_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_20, 0) = ((MR_Box) (transform_hlds__deforest__Goal1_16));
#line 420 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_20, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__2_2));
#line 420 "deforest.m"
              }
#line 422 "deforest.m"
            /* direct tailcall eliminated */
#line 422 "deforest.m"
            {
#line 422 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_12;
#line 422 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__2__tmp_copy_2 = transform_hlds__deforest__RevGoals2_20;
#line 422 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24;

#line 422 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_4;
#line 422 "deforest.m"
              transform_hlds__deforest__HeadVar__2_2 = transform_hlds__deforest__HeadVar__2__tmp_copy_2;
#line 422 "deforest.m"
              transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 422 "deforest.m"
            }
#line 422 "deforest.m"
            continue;
#line 413 "deforest.m"
          }
#line 411 "deforest.m"
      }
#line 411 "deforest.m"
      break;
#line 411 "deforest.m"
    }
#line 407 "deforest.m"
}

#line 388 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_cases_5_p_0(
#line 388 "deforest.m"
  MR_Word transform_hlds__deforest__Var_1,
#line 388 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 388 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_3,
#line 388 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
#line 388 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5)
#line 388 "deforest.m"
{
#line 391 "deforest.m"
  {
#line 391 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 391 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "deforest.m"
      {
#line 391 "deforest.m"
        *transform_hlds__deforest__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 391 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4;
#line 391 "deforest.m"
      }
#line 391 "deforest.m"
    else
#line 392 "deforest.m"
      {
#line 392 "deforest.m"
        MR_Word transform_hlds__deforest__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0)));
#line 392 "deforest.m"
        MR_Word transform_hlds__deforest__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
#line 392 "deforest.m"
        MR_Word transform_hlds__deforest__Case_13;
#line 392 "deforest.m"
        MR_Word transform_hlds__deforest__Cases_14;
#line 392 "deforest.m"
        MR_Word transform_hlds__deforest__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_11, (MR_Integer) 0)));
#line 392 "deforest.m"
        MR_Word transform_hlds__deforest__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_11, (MR_Integer) 1)));
#line 392 "deforest.m"
        MR_Word transform_hlds__deforest__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_11, (MR_Integer) 2)));
#line 392 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_19;
#line 392 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_20;
#line 392 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23;
#line 392 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24;
#line 392 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_25_25;
#line 392 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr0_32;
#line 392 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo0_33;
#line 392 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr_34;
#line 392 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo_35;

#line 396 "deforest.m"
        {
#line 396 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4, &transform_hlds__deforest__InstMap0_19);
        }
#line 397 "deforest.m"
        {
#line 397 "deforest.m"
          transform_hlds__pd_info__pd_info_bind_var_to_functors_5_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__MainConsId_16, transform_hlds__deforest__OtherConsIds_17, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23);
        }
#line 274 "deforest.m"
        transform_hlds__deforest__GoalExpr0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_18, (MR_Integer) 0)));
#line 274 "deforest.m"
        transform_hlds__deforest__GoalInfo0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_18, (MR_Integer) 1)));
#line 275 "deforest.m"
        {
#line 275 "deforest.m"
          transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_32, &transform_hlds__deforest__GoalExpr_34, transform_hlds__deforest__GoalInfo0_33, &transform_hlds__deforest__GoalInfo_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24);
        }
#line 276 "deforest.m"
        {
#line 276 "deforest.m"
          transform_hlds__deforest__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 276 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_20, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_34));
#line 276 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_20, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_35));
#line 276 "deforest.m"
        }
#line 399 "deforest.m"
        {
#line 399 "deforest.m"
          transform_hlds__deforest__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 399 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_13, 0) = ((MR_Box) (transform_hlds__deforest__MainConsId_16));
#line 399 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_13, 1) = ((MR_Box) (transform_hlds__deforest__OtherConsIds_17));
#line 399 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_13, 2) = ((MR_Box) (transform_hlds__deforest__Goal_20));
#line 399 "deforest.m"
        }
#line 400 "deforest.m"
        {
#line 400 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_25_25);
        }
#line 401 "deforest.m"
        {
#line 401 "deforest.m"
          transform_hlds__deforest__deforest_cases_5_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__Cases0_12, &transform_hlds__deforest__Cases_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_25_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_5);
        }
#line 392 "deforest.m"
        {
#line 392 "deforest.m"
          MR_Word base;
#line 392 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "deforest.m"
          *transform_hlds__deforest__HeadVar__3_3 = base;
#line 392 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Case_13));
#line 392 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Cases_14));
#line 392 "deforest.m"
        }
#line 392 "deforest.m"
      }
#line 391 "deforest.m"
  }
#line 388 "deforest.m"
}

#line 376 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_disj_4_p_0(
#line 376 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 376 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
#line 376 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
#line 376 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4)
#line 376 "deforest.m"
{
#line 379 "deforest.m"
  {
#line 379 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 379 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "deforest.m"
      {
#line 379 "deforest.m"
        *transform_hlds__deforest__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 379 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 379 "deforest.m"
      }
#line 379 "deforest.m"
    else
#line 380 "deforest.m"
      {
#line 380 "deforest.m"
        MR_Word transform_hlds__deforest__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 380 "deforest.m"
        MR_Word transform_hlds__deforest__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 380 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_10;
#line 380 "deforest.m"
        MR_Word transform_hlds__deforest__Goals_11;
#line 380 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_13;
#line 380 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16;
#line 380 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;
#line 380 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr0_24;
#line 380 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo0_25;
#line 380 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr_26;
#line 380 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo_27;

#line 381 "deforest.m"
        {
#line 381 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__InstMap0_13);
        }
#line 274 "deforest.m"
        transform_hlds__deforest__GoalExpr0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_8, (MR_Integer) 0)));
#line 274 "deforest.m"
        transform_hlds__deforest__GoalInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_8, (MR_Integer) 1)));
#line 275 "deforest.m"
        {
#line 275 "deforest.m"
          transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_24, &transform_hlds__deforest__GoalExpr_26, transform_hlds__deforest__GoalInfo0_25, &transform_hlds__deforest__GoalInfo_27, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16);
        }
#line 276 "deforest.m"
        {
#line 276 "deforest.m"
          transform_hlds__deforest__Goal_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 276 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_26));
#line 276 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_27));
#line 276 "deforest.m"
        }
#line 383 "deforest.m"
        {
#line 383 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17);
        }
#line 384 "deforest.m"
        {
#line 384 "deforest.m"
          transform_hlds__deforest__deforest_disj_4_p_0(transform_hlds__deforest__Goals0_9, &transform_hlds__deforest__Goals_11, transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17, transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);
        }
#line 380 "deforest.m"
        {
#line 380 "deforest.m"
          MR_Word base;
#line 380 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "deforest.m"
          *transform_hlds__deforest__HeadVar__2_2 = base;
#line 380 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Goal_10));
#line 380 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_11));
#line 380 "deforest.m"
        }
#line 380 "deforest.m"
      }
#line 379 "deforest.m"
  }
#line 376 "deforest.m"
}

#line 278 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_goal_expr_6_p_0(
#line 278 "deforest.m"
  MR_Word transform_hlds__deforest__GoalExpr0_7,
#line 278 "deforest.m"
  MR_Word * transform_hlds__deforest__GoalExpr_8,
#line 278 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60,
#line 278 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61,
#line 278 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62,
#line 278 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_63)
#line 278 "deforest.m"
{
#line 283 "deforest.m"
  {
#line 283 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 283 "deforest.m"
    if (((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 0))))
#line 341 "deforest.m"
      {
#line 341 "deforest.m"
        MR_Word transform_hlds__deforest__SubGoal0_31 = (MR_Word) MR_body(((MR_Word) transform_hlds__deforest__GoalExpr0_7), (MR_Integer) 0);
#line 341 "deforest.m"
        MR_Word transform_hlds__deforest__SubGoal_32;

#line 342 "deforest.m"
        {
#line 342 "deforest.m"
          transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__SubGoal0_31, &transform_hlds__deforest__SubGoal_32, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
        }
#line 343 "deforest.m"
        *transform_hlds__deforest__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__deforest__SubGoal_32);
#line 343 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 341 "deforest.m"
      }
#line 283 "deforest.m"
    else
#line 283 "deforest.m"
      if (((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 2))))
#line 358 "deforest.m"
        {
#line 358 "deforest.m"
          MR_Word transform_hlds__deforest__PredId_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)));
#line 358 "deforest.m"
          MR_Integer transform_hlds__deforest__ProcId_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 358 "deforest.m"
          MR_Word transform_hlds__deforest__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
#line 358 "deforest.m"
          MR_Word transform_hlds__deforest__BuiltinState_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 3)));
#line 358 "deforest.m"
          MR_Word transform_hlds__deforest__Name_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 5)));
#line 358 "deforest.m"
          MR_Word transform_hlds__deforest__V_67_67;
#line 358 "deforest.m"
          MR_Word transform_hlds__deforest__V_68_68;
#line 358 "deforest.m"
          MR_Word transform_hlds__deforest__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 4)));

#line 359 "deforest.m"
          {
#line 359 "deforest.m"
            transform_hlds__deforest__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 359 "deforest.m"
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_67_67, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr0_7));
#line 359 "deforest.m"
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_67_67, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60));
#line 359 "deforest.m"
          }
#line 359 "deforest.m"
          {
#line 359 "deforest.m"
            transform_hlds__deforest__deforest_call_9_p_0(transform_hlds__deforest__PredId_36, transform_hlds__deforest__ProcId_37, transform_hlds__deforest__Args_38, transform_hlds__deforest__Name_41, transform_hlds__deforest__BuiltinState_39, transform_hlds__deforest__V_67_67, &transform_hlds__deforest__V_68_68, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
          }
#line 359 "deforest.m"
          *transform_hlds__deforest__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_68_68, (MR_Integer) 0)));
#line 359 "deforest.m"
          *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_68_68, (MR_Integer) 1)));
#line 358 "deforest.m"
        }
#line 283 "deforest.m"
      else
#line 283 "deforest.m"
        if (((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 1))))
#line 366 "deforest.m"
          {
#line 367 "deforest.m"
            *transform_hlds__deforest__GoalExpr_8 = transform_hlds__deforest__GoalExpr0_7;
#line 367 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 367 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 366 "deforest.m"
          }
#line 283 "deforest.m"
        else
#line 283 "deforest.m"
          if (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 366 "deforest.m"
            {
#line 367 "deforest.m"
              *transform_hlds__deforest__GoalExpr_8 = transform_hlds__deforest__GoalExpr0_7;
#line 367 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 367 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 366 "deforest.m"
            }
#line 283 "deforest.m"
          else
#line 283 "deforest.m"
            if (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 283 "deforest.m"
              {
#line 283 "deforest.m"
                MR_Word transform_hlds__deforest__ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 283 "deforest.m"
                MR_Word transform_hlds__deforest__Goals_13;
#line 283 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));

#line 315 "deforest.m"
                if ((transform_hlds__deforest__ConjType_11 == (MR_Integer) 1))
#line 316 "deforest.m"
                  {
#line 316 "deforest.m"
                    *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 316 "deforest.m"
                    transform_hlds__deforest__Goals_13 = transform_hlds__deforest__STATE_VARIABLE_Goals_81_81;
#line 316 "deforest.m"
                  }
#line 315 "deforest.m"
                else
#line 287 "deforest.m"
                  {
#line 287 "deforest.m"
                    MR_Word transform_hlds__deforest__InstMap0_14;
#line 287 "deforest.m"
                    MR_Word transform_hlds__deforest__NonLocals_15;
#line 287 "deforest.m"
                    MR_Word transform_hlds__deforest__ModuleInfo_16;
#line 287 "deforest.m"
                    MR_Word transform_hlds__deforest__Globals_17;
#line 287 "deforest.m"
                    MR_Word transform_hlds__deforest__Deforestation_18;
#line 287 "deforest.m"
                    MR_Word transform_hlds__deforest__Constraints_19;
#line 287 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_83_83;
#line 287 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84;
#line 287 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
#line 287 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_91_91;
#line 287 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92;
#line 287 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94;
#line 287 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;

#line 288 "deforest.m"
                    {
#line 288 "deforest.m"
                      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__InstMap0_14);
                    }
#line 289 "deforest.m"
                    {
#line 289 "deforest.m"
                      transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_81_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__STATE_VARIABLE_Goals_83_83, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84);
                    }
#line 290 "deforest.m"
                    {
#line 290 "deforest.m"
                      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85);
                    }
#line 291 "deforest.m"
                    {
#line 291 "deforest.m"
                      transform_hlds__deforest__NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60);
                    }
#line 292 "deforest.m"
                    {
#line 292 "deforest.m"
                      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__ModuleInfo_16);
                    }
#line 293 "deforest.m"
                    {
#line 293 "deforest.m"
                      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_16, &transform_hlds__deforest__Globals_17);
                    }
#line 294 "deforest.m"
                    {
#line 294 "deforest.m"
                      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_17, (MR_Integer) 388, &transform_hlds__deforest__Deforestation_18);
                    }
#line 301 "deforest.m"
                    if ((transform_hlds__deforest__Deforestation_18 == (MR_Integer) 0))
#line 302 "deforest.m"
                      {
#line 302 "deforest.m"
                        transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
#line 302 "deforest.m"
                        transform_hlds__deforest__STATE_VARIABLE_Goals_91_91 = transform_hlds__deforest__STATE_VARIABLE_Goals_83_83;
#line 302 "deforest.m"
                      }
#line 301 "deforest.m"
                    else
#line 297 "deforest.m"
                      {
#line 297 "deforest.m"
                        MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_87_87;
#line 297 "deforest.m"
                        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_88_88;
#line 297 "deforest.m"
                        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_89_89;

#line 298 "deforest.m"
                        {
#line 298 "deforest.m"
                          transform_hlds__deforest__compute_goal_infos_4_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_83_83, &transform_hlds__deforest__STATE_VARIABLE_Goals_87_87, transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_88_88);
                        }
#line 299 "deforest.m"
                        {
#line 299 "deforest.m"
                          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_88_88, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_89_89);
                        }
#line 300 "deforest.m"
                        {
#line 300 "deforest.m"
                          transform_hlds__deforest__deforest_conj_6_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_87_87, transform_hlds__deforest__NonLocals_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__STATE_VARIABLE_Goals_91_91, transform_hlds__deforest__STATE_VARIABLE_PDInfo_89_89, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92);
                        }
#line 297 "deforest.m"
                      }
#line 304 "deforest.m"
                    {
#line 304 "deforest.m"
                      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_17, (MR_Integer) 348, &transform_hlds__deforest__Constraints_19);
                    }
#line 306 "deforest.m"
                    {
#line 306 "deforest.m"
                      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94);
                    }
#line 311 "deforest.m"
                    if ((transform_hlds__deforest__Constraints_19 == (MR_Integer) 0))
#line 312 "deforest.m"
                      {
#line 312 "deforest.m"
                        transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94;
#line 312 "deforest.m"
                        transform_hlds__deforest__Goals_13 = transform_hlds__deforest__STATE_VARIABLE_Goals_91_91;
#line 312 "deforest.m"
                      }
#line 311 "deforest.m"
                    else
#line 308 "deforest.m"
                      {
#line 309 "deforest.m"
                        {
#line 309 "deforest.m"
                          transform_hlds__deforest__propagate_conj_constraints_6_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_91_91, transform_hlds__deforest__NonLocals_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__Goals_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
                        }
#line 308 "deforest.m"
                      }
#line 314 "deforest.m"
                    {
#line 314 "deforest.m"
                      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
                    }
#line 287 "deforest.m"
                  }
#line 321 "deforest.m"
                {
#line 321 "deforest.m"
                  MR_Word base;
#line 321 "deforest.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 321 "deforest.m"
                  *transform_hlds__deforest__GoalExpr_8 = base;
#line 321 "deforest.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 321 "deforest.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__ConjType_11));
#line 321 "deforest.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__Goals_13));
#line 321 "deforest.m"
                }
#line 321 "deforest.m"
                *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 283 "deforest.m"
              }
#line 283 "deforest.m"
            else
#line 283 "deforest.m"
              if (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 323 "deforest.m"
                {
#line 323 "deforest.m"
                  MR_Word transform_hlds__deforest__Goals0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 323 "deforest.m"
                  MR_Word transform_hlds__deforest__Goals_100;

#line 324 "deforest.m"
                  {
#line 324 "deforest.m"
                    transform_hlds__deforest__deforest_disj_4_p_0(transform_hlds__deforest__Goals0_99, &transform_hlds__deforest__Goals_100, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
                  }
#line 325 "deforest.m"
                  {
#line 325 "deforest.m"
                    MR_Word base;
#line 325 "deforest.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "deforest.m"
                    *transform_hlds__deforest__GoalExpr_8 = base;
#line 325 "deforest.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 325 "deforest.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_100));
#line 325 "deforest.m"
                  }
#line 325 "deforest.m"
                  *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 323 "deforest.m"
                }
#line 283 "deforest.m"
              else
#line 283 "deforest.m"
                if (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 366 "deforest.m"
                  {
#line 367 "deforest.m"
                    *transform_hlds__deforest__GoalExpr_8 = transform_hlds__deforest__GoalExpr0_7;
#line 367 "deforest.m"
                    *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 367 "deforest.m"
                    *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 366 "deforest.m"
                  }
#line 283 "deforest.m"
                else
#line 283 "deforest.m"
                  if (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 327 "deforest.m"
                    {
#line 327 "deforest.m"
                      MR_Word transform_hlds__deforest__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 327 "deforest.m"
                      MR_Word transform_hlds__deforest__Cond0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
#line 327 "deforest.m"
                      MR_Word transform_hlds__deforest__Then0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 3)));
#line 327 "deforest.m"
                      MR_Word transform_hlds__deforest__Else0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 4)));
#line 327 "deforest.m"
                      MR_Word transform_hlds__deforest__Cond_24;
#line 327 "deforest.m"
                      MR_Word transform_hlds__deforest__Then_25;
#line 327 "deforest.m"
                      MR_Word transform_hlds__deforest__Else_26;
#line 327 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_74_74;
#line 327 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_75_75;
#line 327 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76;
#line 327 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77;
#line 327 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_78_78;
#line 327 "deforest.m"
                      MR_Word transform_hlds__deforest__InstMap0_101;

#line 328 "deforest.m"
                      {
#line 328 "deforest.m"
                        transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__InstMap0_101);
                      }
#line 329 "deforest.m"
                      {
#line 329 "deforest.m"
                        transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Cond0_21, &transform_hlds__deforest__Cond_24, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_74_74);
                      }
#line 330 "deforest.m"
                      {
#line 330 "deforest.m"
                        transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Cond_24, transform_hlds__deforest__STATE_VARIABLE_PDInfo_74_74, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_75_75);
                      }
#line 331 "deforest.m"
                      {
#line 331 "deforest.m"
                        transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Then0_22, &transform_hlds__deforest__Then_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_75_75, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76);
                      }
#line 332 "deforest.m"
                      {
#line 332 "deforest.m"
                        transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_101, transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77);
                      }
#line 333 "deforest.m"
                      {
#line 333 "deforest.m"
                        transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Else0_23, &transform_hlds__deforest__Else_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_78_78);
                      }
#line 334 "deforest.m"
                      {
#line 334 "deforest.m"
                        transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_101, transform_hlds__deforest__STATE_VARIABLE_PDInfo_78_78, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
                      }
#line 335 "deforest.m"
                      {
#line 335 "deforest.m"
                        MR_Word base;
#line 335 "deforest.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 335 "deforest.m"
                        *transform_hlds__deforest__GoalExpr_8 = base;
#line 335 "deforest.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 335 "deforest.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Vars_20));
#line 335 "deforest.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__Cond_24));
#line 335 "deforest.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__deforest__Then_25));
#line 335 "deforest.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__deforest__Else_26));
#line 335 "deforest.m"
                      }
#line 335 "deforest.m"
                      *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 327 "deforest.m"
                    }
#line 283 "deforest.m"
                  else
#line 283 "deforest.m"
                    if (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 345 "deforest.m"
                      {
#line 345 "deforest.m"
                        MR_Word transform_hlds__deforest__Reason_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 345 "deforest.m"
                        MR_Word transform_hlds__deforest__SubGoal0_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
#line 345 "deforest.m"
                        MR_Word transform_hlds__deforest__SubGoal_103;
#line 347 "deforest.m"
                        MR_Word transform_hlds__deforest__FGT_35;
#line 347 "deforest.m"
                        MR_Word transform_hlds__deforest__V_34_34;

#line 347 "deforest.m"
                        transform_hlds__deforest__succeeded = ((((MR_tag((MR_Word) transform_hlds__deforest__Reason_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Reason_33, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 347 "deforest.m"
                        if (transform_hlds__deforest__succeeded)
#line 347 "deforest.m"
                          {
#line 347 "deforest.m"
                            transform_hlds__deforest__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Reason_33, (MR_Integer) 1)));
#line 347 "deforest.m"
                            transform_hlds__deforest__FGT_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Reason_33, (MR_Integer) 2)));
#line 349 "deforest.m"
                            if ((transform_hlds__deforest__FGT_35 == (MR_Integer) 1))
#line 348 "deforest.m"
                              transform_hlds__deforest__succeeded = MR_TRUE;
#line 349 "deforest.m"
                            else
#line 349 "deforest.m"
                              if ((transform_hlds__deforest__FGT_35 == (MR_Integer) 2))
#line 349 "deforest.m"
                                transform_hlds__deforest__succeeded = MR_TRUE;
#line 349 "deforest.m"
                              else
#line 349 "deforest.m"
                                transform_hlds__deforest__succeeded = MR_FALSE;
#line 347 "deforest.m"
                          }
#line 353 "deforest.m"
                        if (transform_hlds__deforest__succeeded)
#line 352 "deforest.m"
                          {
#line 352 "deforest.m"
                            transform_hlds__deforest__SubGoal_103 = transform_hlds__deforest__SubGoal0_102;
#line 352 "deforest.m"
                            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 352 "deforest.m"
                          }
#line 353 "deforest.m"
                        else
#line 354 "deforest.m"
                          {
#line 354 "deforest.m"
                            transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__SubGoal0_102, &transform_hlds__deforest__SubGoal_103, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
                          }
#line 356 "deforest.m"
                        {
#line 356 "deforest.m"
                          MR_Word base;
#line 356 "deforest.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 356 "deforest.m"
                          *transform_hlds__deforest__GoalExpr_8 = base;
#line 356 "deforest.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 356 "deforest.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Reason_33));
#line 356 "deforest.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__SubGoal_103));
#line 356 "deforest.m"
                        }
#line 356 "deforest.m"
                        *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 345 "deforest.m"
                      }
#line 283 "deforest.m"
                    else
#line 283 "deforest.m"
                      if (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 369 "deforest.m"
                        {
#line 371 "deforest.m"
                          {
#line 371 "deforest.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforest_goal_expr\'/6", (MR_String) "shorthand");
#line 371 "deforest.m"
                            return;
                          }
#line 369 "deforest.m"
                        }
#line 283 "deforest.m"
                      else
#line 337 "deforest.m"
                        {
#line 337 "deforest.m"
                          MR_Word transform_hlds__deforest__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 337 "deforest.m"
                          MR_Word transform_hlds__deforest__CanFail_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
#line 337 "deforest.m"
                          MR_Word transform_hlds__deforest__Cases0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 3)));
#line 337 "deforest.m"
                          MR_Word transform_hlds__deforest__Cases_30;

#line 338 "deforest.m"
                          {
#line 338 "deforest.m"
                            transform_hlds__deforest__deforest_cases_5_p_0(transform_hlds__deforest__Var_27, transform_hlds__deforest__Cases0_29, &transform_hlds__deforest__Cases_30, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
                          }
#line 339 "deforest.m"
                          {
#line 339 "deforest.m"
                            MR_Word base;
#line 339 "deforest.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 339 "deforest.m"
                            *transform_hlds__deforest__GoalExpr_8 = base;
#line 339 "deforest.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 339 "deforest.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Var_27));
#line 339 "deforest.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__CanFail_28));
#line 339 "deforest.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__deforest__Cases_30));
#line 339 "deforest.m"
                          }
#line 339 "deforest.m"
                          *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 337 "deforest.m"
                        }
#line 283 "deforest.m"
  }
#line 278 "deforest.m"
}

#line 270 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_goal_4_p_0(
#line 270 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_5,
#line 270 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_6,
#line 270 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_12,
#line 270 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_13)
#line 270 "deforest.m"
{
#line 273 "deforest.m"
  {
#line 273 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 273 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_5, (MR_Integer) 0)));
#line 273 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_5, (MR_Integer) 1)));
#line 273 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr_10;
#line 273 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_11;

#line 275 "deforest.m"
    {
#line 275 "deforest.m"
      transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_8, &transform_hlds__deforest__GoalExpr_10, transform_hlds__deforest__GoalInfo0_9, &transform_hlds__deforest__GoalInfo_11, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_12, transform_hlds__deforest__STATE_VARIABLE_PDInfo_13);
    }
#line 276 "deforest.m"
    {
#line 276 "deforest.m"
      MR_Word base;
#line 276 "deforest.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 276 "deforest.m"
      *transform_hlds__deforest__Goal_6 = base;
#line 276 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_10));
#line 276 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_11));
#line 276 "deforest.m"
    }
#line 273 "deforest.m"
  }
#line 270 "deforest.m"
}

#line 189 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_proc_deltas_5_p_0(
#line 189 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 189 "deforest.m"
  MR_Integer * transform_hlds__deforest__CostDelta_8,
#line 189 "deforest.m"
  MR_Integer * transform_hlds__deforest__SizeDelta_9,
#line 189 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_28,
#line 189 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_29)
#line 189 "deforest.m"
{
#line 192 "deforest.m"
  {
#line 192 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 192 "deforest.m"
    MR_Integer transform_hlds__deforest__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_16;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__Simplifications_17;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__Changed_18;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PredInfo_34_34;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_35_35;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_37_37;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_38_38;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_40_40;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_41_41;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_42_42;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_43_43;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_47_47;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_49_49;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_50_50;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_72_72;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr0_88;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo0_89;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr_90;
#line 192 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_91;

#line 194 "deforest.m"
    {
#line 194 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_28, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 196 "deforest.m"
    {
#line 196 "deforest.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Deforesting ", transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 199 "deforest.m"
    {
#line 199 "deforest.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30, transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, &transform_hlds__deforest__STATE_VARIABLE_PredInfo_34_34, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_35_35);
    }
#line 201 "deforest.m"
    {
#line 201 "deforest.m"
      transform_hlds__pd_info__pd_info_init_unfold_info_5_p_0(transform_hlds__deforest__HeadVar__1_1, transform_hlds__deforest__STATE_VARIABLE_PredInfo_34_34, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_35_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_28, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_37_37);
    }
#line 203 "deforest.m"
    {
#line 203 "deforest.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_35_35, &transform_hlds__deforest__STATE_VARIABLE_Goal_38_38);
    }
#line 206 "deforest.m"
    {
#line 206 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__deforest__Globals_16);
    }
#line 207 "deforest.m"
    {
#line 207 "deforest.m"
      check_hlds__simplify__find_simplifications_3_p_0((MR_Integer) 0, transform_hlds__deforest__Globals_16, &transform_hlds__deforest__Simplifications_17);
    }
#line 208 "deforest.m"
    {
#line 208 "deforest.m"
      transform_hlds__pd_util__pd_simplify_goal_5_p_0(transform_hlds__deforest__Simplifications_17, transform_hlds__deforest__STATE_VARIABLE_Goal_38_38, &transform_hlds__deforest__STATE_VARIABLE_Goal_40_40, transform_hlds__deforest__STATE_VARIABLE_PDInfo_37_37, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_41_41);
    }
#line 209 "deforest.m"
    {
#line 209 "deforest.m"
      transform_hlds__pd_util__propagate_constraints_4_p_0(transform_hlds__deforest__STATE_VARIABLE_Goal_40_40, &transform_hlds__deforest__STATE_VARIABLE_Goal_42_42, transform_hlds__deforest__STATE_VARIABLE_PDInfo_41_41, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_43_43);
    }
#line 211 "deforest.m"
    {
#line 211 "deforest.m"
      transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_43_43, (MR_String) "after constraints\n", transform_hlds__deforest__STATE_VARIABLE_Goal_42_42);
    }
#line 274 "deforest.m"
    transform_hlds__deforest__GoalExpr0_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_42_42, (MR_Integer) 0)));
#line 274 "deforest.m"
    transform_hlds__deforest__GoalInfo0_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_42_42, (MR_Integer) 1)));
#line 275 "deforest.m"
    {
#line 275 "deforest.m"
      transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_88, &transform_hlds__deforest__GoalExpr_90, transform_hlds__deforest__GoalInfo0_89, &transform_hlds__deforest__GoalInfo_91, transform_hlds__deforest__STATE_VARIABLE_PDInfo_43_43, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48);
    }
#line 276 "deforest.m"
    {
#line 276 "deforest.m"
      transform_hlds__deforest__STATE_VARIABLE_Goal_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 276 "deforest.m"
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_47_47, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_90));
#line 276 "deforest.m"
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_47_47, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_91));
#line 276 "deforest.m"
    }
#line 214 "deforest.m"
    {
#line 214 "deforest.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_49_49);
    }
#line 215 "deforest.m"
    {
#line 215 "deforest.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__deforest__STATE_VARIABLE_Goal_47_47, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_49_49, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_50_50);
    }
#line 216 "deforest.m"
    {
#line 216 "deforest.m"
      transform_hlds__pd_info__pd_info_get_changed_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__Changed_18);
    }
#line 251 "deforest.m"
    if ((transform_hlds__deforest__Changed_18 == (MR_Integer) 0))
#line 252 "deforest.m"
      {
#line 252 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_51_51;
#line 252 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_80;
#line 252 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_82;

#line 253 "deforest.m"
        {
#line 253 "deforest.m"
          transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_51_51);
        }
#line 254 "deforest.m"
        {
#line 254 "deforest.m"
          transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_80);
        }
#line 255 "deforest.m"
        {
#line 255 "deforest.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_80, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_50_50, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_51_51, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_82);
        }
#line 257 "deforest.m"
        {
#line 257 "deforest.m"
          transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_82, transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71);
        }
#line 252 "deforest.m"
      }
#line 251 "deforest.m"
    else
#line 219 "deforest.m"
      {
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_19;
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__VarTypes_20;
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__InstVarSet_21;
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__RerunDet_22;
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__ProcArgInfo0_26;
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__ProcArgInfo_27;
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_55_55;
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57;
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_58_58;
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_60_60;
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_61_61;
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62;
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_63;
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_64_64;
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_65;
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_66_66;
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_69;
#line 219 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_70_70;

#line 220 "deforest.m"
        {
#line 220 "deforest.m"
          transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_55_55);
        }
#line 221 "deforest.m"
        {
#line 221 "deforest.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57);
        }
#line 222 "deforest.m"
        {
#line 222 "deforest.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__deforest__STATE_VARIABLE_Goal_58_58);
        }
#line 223 "deforest.m"
        {
#line 223 "deforest.m"
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_55_55, &transform_hlds__deforest__InstMap0_19);
        }
#line 224 "deforest.m"
        {
#line 224 "deforest.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__deforest__VarTypes_20);
        }
#line 225 "deforest.m"
        {
#line 225 "deforest.m"
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__deforest__InstVarSet_21);
        }
#line 226 "deforest.m"
        {
#line 226 "deforest.m"
          check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, transform_hlds__deforest__STATE_VARIABLE_Goal_58_58, &transform_hlds__deforest__STATE_VARIABLE_Goal_60_60, transform_hlds__deforest__VarTypes_20, transform_hlds__deforest__InstVarSet_21, transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_55_55, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_61_61);
        }
#line 228 "deforest.m"
        {
#line 228 "deforest.m"
          transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_61_61, transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62);
        }
#line 229 "deforest.m"
        {
#line 229 "deforest.m"
          transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62, &transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_63);
        }
#line 230 "deforest.m"
        {
#line 230 "deforest.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__deforest__STATE_VARIABLE_Goal_60_60, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_64_64);
        }
#line 231 "deforest.m"
        {
#line 231 "deforest.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_63, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_64_64, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_61_61, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_65);
        }
#line 233 "deforest.m"
        {
#line 233 "deforest.m"
          transform_hlds__pd_info__pd_info_get_rerun_det_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62, &transform_hlds__deforest__RerunDet_22);
        }
#line 241 "deforest.m"
        if ((transform_hlds__deforest__RerunDet_22 == (MR_Integer) 0))
#line 242 "deforest.m"
          transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_66_66 = transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_65;
#line 241 "deforest.m"
        else
#line 236 "deforest.m"
          {
#line 240 "deforest.m"
            MR_Word transform_hlds__deforest__V_23_23;
#line 240 "deforest.m"
            MR_Word transform_hlds__deforest__V_24_24;
#line 240 "deforest.m"
            MR_Word transform_hlds__deforest__V_25_25;

#line 240 "deforest.m"
            {
#line 240 "deforest.m"
              check_hlds__det_analysis__det_infer_proc_8_p_0(transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_65, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_66_66, &transform_hlds__deforest__V_23_23, &transform_hlds__deforest__V_24_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__V_25_25);
            }
#line 236 "deforest.m"
          }
#line 246 "deforest.m"
        {
#line 246 "deforest.m"
          transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62, &transform_hlds__deforest__ProcArgInfo0_26);
        }
#line 247 "deforest.m"
        {
#line 247 "deforest.m"
          transform_hlds__pd_util__get_branch_vars_proc_6_p_0(transform_hlds__deforest__HeadVar__1_1, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_64_64, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_66_66, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_69, transform_hlds__deforest__ProcArgInfo0_26, &transform_hlds__deforest__ProcArgInfo_27);
        }
#line 249 "deforest.m"
        {
#line 249 "deforest.m"
          transform_hlds__pd_info__pd_info_set_proc_arg_info_3_p_0(transform_hlds__deforest__ProcArgInfo_27, transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_70_70);
        }
#line 250 "deforest.m"
        {
#line 250 "deforest.m"
          transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_69, transform_hlds__deforest__STATE_VARIABLE_PDInfo_70_70, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71);
        }
#line 219 "deforest.m"
      }
#line 260 "deforest.m"
    {
#line 260 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_72_72);
    }
#line 262 "deforest.m"
    {
#line 262 "deforest.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Finished deforesting ", transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_72_72);
    }
#line 265 "deforest.m"
    {
#line 265 "deforest.m"
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71, transform_hlds__deforest__CostDelta_8);
    }
#line 266 "deforest.m"
    {
#line 266 "deforest.m"
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71, transform_hlds__deforest__SizeDelta_9);
    }
#line 267 "deforest.m"
    {
#line 267 "deforest.m"
      transform_hlds__pd_info__pd_info_unset_unfold_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71, transform_hlds__deforest__STATE_VARIABLE_PDInfo_29);
#line 267 "deforest.m"
      return;
    }
#line 192 "deforest.m"
  }
#line 189 "deforest.m"
}

#line 184 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_proc_3_p_0(
#line 184 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_4,
#line 184 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
#line 184 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9)
#line 184 "deforest.m"
{
#line 187 "deforest.m"
  {
#line 187 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 187 "deforest.m"
    MR_Integer transform_hlds__deforest__V_6_6;
#line 187 "deforest.m"
    MR_Integer transform_hlds__deforest__V_7_7;

#line 187 "deforest.m"
    {
#line 187 "deforest.m"
      transform_hlds__deforest__deforest_proc_deltas_5_p_0(transform_hlds__deforest__PredProcId_4, &transform_hlds__deforest__V_6_6, &transform_hlds__deforest__V_7_7, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8, transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);
    }
#line 187 "deforest.m"
  }
#line 184 "deforest.m"
}

#line 173 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(
#line 173 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_8,
#line 173 "deforest.m"
  MR_Word transform_hlds__deforest__ProcInfo_9,
#line 173 "deforest.m"
  MR_Word * transform_hlds__deforest__ProcInfo_3,
#line 173 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_15,
#line 173 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_16,
#line 173 "deforest.m"
  MR_Word transform_hlds__deforest__UnivProcArgInfo0_11,
#line 173 "deforest.m"
  MR_Word * transform_hlds__deforest__UnivProcArgInfo_12)
#line 173 "deforest.m"
{
#line 178 "deforest.m"
  {
#line 178 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 178 "deforest.m"
    MR_Word transform_hlds__deforest__TypeInfo_18_18;
#line 178 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo0_13;
#line 178 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo_14;
#line 179 "deforest.m"
    MR_Box transform_hlds__deforest__conv0_ProcArgInfo0_13;

#line 178 "deforest.m"
    *transform_hlds__deforest__ProcInfo_3 = transform_hlds__deforest__ProcInfo_9;
#line 11143 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeInfo_18_18 = (MR_Word) &transform_hlds__deforest_scalar_common_2[0];
#line 179 "deforest.m"
    {
#line 179 "deforest.m"
      mercury__univ__det_univ_to_type_2_p_0(transform_hlds__deforest__TypeInfo_18_18, transform_hlds__deforest__UnivProcArgInfo0_11, &transform_hlds__deforest__conv0_ProcArgInfo0_13);
    }
#line 179 "deforest.m"
    transform_hlds__deforest__ProcArgInfo0_13 = ((MR_Word) transform_hlds__deforest__conv0_ProcArgInfo0_13);
#line 180 "deforest.m"
    {
#line 180 "deforest.m"
      transform_hlds__pd_util__get_branch_vars_proc_6_p_0(transform_hlds__deforest__PredProcId_8, transform_hlds__deforest__ProcInfo_9, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_15, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_16, transform_hlds__deforest__ProcArgInfo0_13, &transform_hlds__deforest__ProcArgInfo_14);
    }
#line 182 "deforest.m"
    {
#line 182 "deforest.m"
      mercury__univ__type_to_univ_2_p_1(transform_hlds__deforest__TypeInfo_18_18, ((MR_Box) (transform_hlds__deforest__ProcArgInfo_14)), transform_hlds__deforest__UnivProcArgInfo_12);
#line 182 "deforest.m"
      return;
    }
#line 178 "deforest.m"
  }
#line 173 "deforest.m"
}

#line 151 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(
#line 151 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_4,
#line 151 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_11,
#line 151 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_12)
#line 151 "deforest.m"
{
#line 154 "deforest.m"
  {
#line 154 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 154 "deforest.m"
    MR_Word transform_hlds__deforest__PredInfo_6;
#line 154 "deforest.m"
    MR_Word transform_hlds__deforest__ProcInfo0_7;
#line 154 "deforest.m"
    MR_Word transform_hlds__deforest__Detism0_8;
#line 157 "deforest.m"
    MR_Word transform_hlds__deforest__V_16_16;
#line 157 "deforest.m"
    MR_Word transform_hlds__deforest__V_9_9;

#line 155 "deforest.m"
    {
#line 155 "deforest.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__deforest__PredProcId_4, &transform_hlds__deforest__PredInfo_6, &transform_hlds__deforest__ProcInfo0_7);
    }
#line 156 "deforest.m"
    {
#line 156 "deforest.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__deforest__ProcInfo0_7, &transform_hlds__deforest__Detism0_8);
    }
#line 157 "deforest.m"
    {
#line 157 "deforest.m"
      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__deforest__Detism0_8, &transform_hlds__deforest__V_9_9, &transform_hlds__deforest__V_16_16);
    }
#line 157 "deforest.m"
    transform_hlds__deforest__succeeded = ((MR_Integer) 2 == transform_hlds__deforest__V_16_16);
#line 161 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 157 "deforest.m"
      *transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_12 = transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_11;
#line 161 "deforest.m"
    else
#line 163 "deforest.m"
      {
#line 163 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo_10;

#line 162 "deforest.m"
        {
#line 162 "deforest.m"
          hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0((MR_Integer) 6, transform_hlds__deforest__ProcInfo0_7, &transform_hlds__deforest__ProcInfo_10);
        }
#line 164 "deforest.m"
        {
#line 164 "deforest.m"
          hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__deforest__PredProcId_4, transform_hlds__deforest__PredInfo_6, transform_hlds__deforest__ProcInfo_10, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_12);
#line 164 "deforest.m"
          return;
        }
#line 163 "deforest.m"
      }
#line 154 "deforest.m"
  }
#line 151 "deforest.m"
}

#line 145 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_4(
#line 145 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg)
#line 145 "deforest.m"
{
#line 145 "deforest.m"
  {
#line 145 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 145 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;

#line 145 "deforest.m"
    {
#line 145 "deforest.m"
      return transform_hlds__deforest__succeeded = transform_hlds__deforest__IntroducedFrom__pred__deforestation__145__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__closure, (MR_Integer) 4))));
    }
#line 145 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 145 "deforest.m"
  }
#line 145 "deforest.m"
}

#line 137 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_3(
#line 137 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 137 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 137 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 137 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 137 "deforest.m"
{
#line 137 "deforest.m"
  {
#line 137 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 137 "deforest.m"
    MR_Word transform_hlds__deforest__conv6_STATE_VARIABLE_ModuleInfo_12;

#line 137 "deforest.m"
    {
#line 137 "deforest.m"
      transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv6_STATE_VARIABLE_ModuleInfo_12);
    }
#line 137 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv6_STATE_VARIABLE_ModuleInfo_12));
#line 137 "deforest.m"
  }
#line 137 "deforest.m"
}

#line 121 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_2(
#line 121 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 121 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 121 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 121 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 121 "deforest.m"
{
#line 121 "deforest.m"
  {
#line 121 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 121 "deforest.m"
    MR_Word transform_hlds__deforest__conv4_STATE_VARIABLE_PDInfo_9;

#line 121 "deforest.m"
    {
#line 121 "deforest.m"
      transform_hlds__deforest__deforest_proc_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv4_STATE_VARIABLE_PDInfo_9);
    }
#line 121 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv4_STATE_VARIABLE_PDInfo_9));
#line 121 "deforest.m"
  }
#line 121 "deforest.m"
}

#line 101 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_1(
#line 101 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 101 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 101 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 101 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3,
#line 101 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_4,
#line 101 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_5,
#line 101 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_6,
#line 101 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_7)
#line 101 "deforest.m"
{
#line 101 "deforest.m"
  {
#line 101 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 101 "deforest.m"
    MR_Word transform_hlds__deforest__conv2_ProcInfo_3;
#line 101 "deforest.m"
    MR_Word transform_hlds__deforest__conv1_STATE_VARIABLE_ModuleInfo_16;
#line 101 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_UnivProcArgInfo_12;

#line 101 "deforest.m"
    {
#line 101 "deforest.m"
      transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv2_ProcInfo_3, ((MR_Word) transform_hlds__deforest__wrapper_arg_4), &transform_hlds__deforest__conv1_STATE_VARIABLE_ModuleInfo_16, ((MR_Word) transform_hlds__deforest__wrapper_arg_6), &transform_hlds__deforest__conv0_UnivProcArgInfo_12);
    }
#line 101 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv2_ProcInfo_3));
#line 101 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_5 = ((MR_Box) (transform_hlds__deforest__conv1_STATE_VARIABLE_ModuleInfo_16));
#line 101 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_7 = ((MR_Box) (transform_hlds__deforest__conv0_UnivProcArgInfo_12));
#line 101 "deforest.m"
  }
#line 101 "deforest.m"
}

#line 43 "deforest.m"
void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0(
#line 43 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_30,
#line 43 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_31)
#line 43 "deforest.m"
{
#line 95 "deforest.m"
  {
#line 95 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__TypeInfo_54_54;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_62_62;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo0_7;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__UnivProcArgInfo0_8;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__Task0_9;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__Task_10;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo_14;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__DepInfo_15;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__DepOrdering_16;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__DepList_17;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__PDInfo0_18;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__PDInfo_19;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__VersionIndex_20;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__Versions_21;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_22;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__Constraints_23;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_35_35;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_39_39;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_41_41;
#line 95 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42;
#line 108 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo1_13;
#line 104 "deforest.m"
    MR_Word transform_hlds__deforest__UnivProcArgInfo_12;
#line 104 "deforest.m"
    MR_Word transform_hlds__deforest__V_11_11;
#line 105 "deforest.m"
    MR_Box transform_hlds__deforest__conv3_ProcArgInfo1_13;
#line 121 "deforest.m"
    MR_Box transform_hlds__deforest__conv5_PDInfo_19;
#line 132 "deforest.m"
    MR_Word transform_hlds__deforest__V_24_24;
#line 132 "deforest.m"
    MR_Word transform_hlds__deforest__V_25_25;

#line 171 "deforest.m"
    {
#line 171 "deforest.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[0], &transform_hlds__deforest__ProcArgInfo0_7);
    }
#line 11453 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeInfo_54_54 = (MR_Word) &transform_hlds__deforest_scalar_common_2[0];
#line 97 "deforest.m"
    {
#line 97 "deforest.m"
      mercury__univ__type_to_univ_2_p_1(transform_hlds__deforest__TypeInfo_54_54, ((MR_Box) (transform_hlds__deforest__ProcArgInfo0_7)), &transform_hlds__deforest__UnivProcArgInfo0_8);
    }
#line 101 "deforest.m"
    {
#line 101 "deforest.m"
      transform_hlds__deforest__Task0_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 101 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task0_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 101 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task0_9, 1) = ((MR_Box) (&transform_hlds__deforest_scalar_common_2[4]));
#line 101 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task0_9, 2) = ((MR_Box) (transform_hlds__deforest__UnivProcArgInfo0_8));
#line 101 "deforest.m"
    }
#line 102 "deforest.m"
    {
#line 102 "deforest.m"
      hlds__passes_aux__process_all_nonimported_procs_update_4_p_0(transform_hlds__deforest__Task0_9, &transform_hlds__deforest__Task_10, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_30, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_35_35);
    }
#line 104 "deforest.m"
    transform_hlds__deforest__succeeded = ((((MR_tag((MR_Word) transform_hlds__deforest__Task_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 104 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 104 "deforest.m"
      {
#line 104 "deforest.m"
        transform_hlds__deforest__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task_10, (MR_Integer) 1)));
#line 104 "deforest.m"
        transform_hlds__deforest__UnivProcArgInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task_10, (MR_Integer) 2)));
#line 105 "deforest.m"
        {
#line 105 "deforest.m"
          transform_hlds__deforest__succeeded = mercury__univ__univ_to_type_2_p_0(transform_hlds__deforest__TypeInfo_54_54, transform_hlds__deforest__UnivProcArgInfo_12, &transform_hlds__deforest__conv3_ProcArgInfo1_13);
        }
#line 105 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 105 "deforest.m"
          {
#line 105 "deforest.m"
            transform_hlds__deforest__ProcArgInfo1_13 = ((MR_Word) transform_hlds__deforest__conv3_ProcArgInfo1_13);
#line 105 "deforest.m"
            transform_hlds__deforest__succeeded = MR_TRUE;
#line 105 "deforest.m"
          }
#line 104 "deforest.m"
      }
#line 108 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 107 "deforest.m"
      transform_hlds__deforest__ProcArgInfo_14 = transform_hlds__deforest__ProcArgInfo1_13;
#line 108 "deforest.m"
    else
#line 109 "deforest.m"
      {
#line 109 "deforest.m"
        {
#line 109 "deforest.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforestation\'/4", (MR_String) "passes_aux stuffed up");
#line 109 "deforest.m"
          return;
        }
#line 109 "deforest.m"
      }
#line 115 "deforest.m"
    {
#line 115 "deforest.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_35_35, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_39_39);
    }
#line 116 "deforest.m"
    {
#line 116 "deforest.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_39_39, &transform_hlds__deforest__DepInfo_15);
    }
#line 11531 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 117 "deforest.m"
    {
#line 117 "deforest.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(transform_hlds__deforest__TypeCtorInfo_62_62, transform_hlds__deforest__DepInfo_15, &transform_hlds__deforest__DepOrdering_16);
    }
#line 118 "deforest.m"
    {
#line 118 "deforest.m"
      mercury__list__condense_2_p_0(transform_hlds__deforest__TypeCtorInfo_62_62, transform_hlds__deforest__DepOrdering_16, &transform_hlds__deforest__DepList_17);
    }
#line 120 "deforest.m"
    {
#line 120 "deforest.m"
      transform_hlds__pd_info__pd_info_init_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_39_39, transform_hlds__deforest__ProcArgInfo_14, &transform_hlds__deforest__PDInfo0_18);
    }
#line 121 "deforest.m"
    {
#line 121 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_62_62, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0, (MR_Word) &transform_hlds__deforest_scalar_common_2[5], transform_hlds__deforest__DepList_17, ((MR_Box) (transform_hlds__deforest__PDInfo0_18)), &transform_hlds__deforest__conv5_PDInfo_19);
    }
#line 121 "deforest.m"
    transform_hlds__deforest__PDInfo_19 = ((MR_Word) transform_hlds__deforest__conv5_PDInfo_19);
#line 122 "deforest.m"
    {
#line 122 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__PDInfo_19, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_41_41);
    }
#line 123 "deforest.m"
    {
#line 123 "deforest.m"
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_41_41, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42);
    }
#line 124 "deforest.m"
    {
#line 124 "deforest.m"
      transform_hlds__pd_info__pd_info_get_versions_2_p_0(transform_hlds__deforest__PDInfo_19, &transform_hlds__deforest__VersionIndex_20);
    }
#line 126 "deforest.m"
    {
#line 126 "deforest.m"
      mercury__map__keys_2_p_0(transform_hlds__deforest__TypeCtorInfo_62_62, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__deforest__VersionIndex_20, &transform_hlds__deforest__Versions_21);
    }
#line 128 "deforest.m"
    {
#line 128 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42, &transform_hlds__deforest__Globals_22);
    }
#line 129 "deforest.m"
    {
#line 129 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_22, (MR_Integer) 348, &transform_hlds__deforest__Constraints_23);
    }
#line 131 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__Constraints_23 == (MR_Integer) 1);
#line 131 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 131 "deforest.m"
      {
#line 132 "deforest.m"
        transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Versions_21)) == (MR_mktag((MR_Integer) 1)));
#line 132 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 132 "deforest.m"
          {
#line 132 "deforest.m"
            transform_hlds__deforest__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Versions_21, (MR_Integer) 0)));
#line 132 "deforest.m"
            transform_hlds__deforest__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Versions_21, (MR_Integer) 1)));
#line 132 "deforest.m"
          }
#line 131 "deforest.m"
      }
#line 147 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 137 "deforest.m"
      {
#line 137 "deforest.m"
        MR_Word transform_hlds__deforest__NoWarnGlobals_27;
#line 137 "deforest.m"
        MR_Word transform_hlds__deforest__Specs_28;
#line 137 "deforest.m"
        MR_Word transform_hlds__deforest__FoundErrors_29;
#line 137 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_45_45;
#line 137 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_46_46;
#line 137 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_47_47;
#line 137 "deforest.m"
        MR_Word transform_hlds__deforest__V_49_49;
#line 137 "deforest.m"
        MR_Box transform_hlds__deforest__conv7_STATE_VARIABLE_ModuleInfo_45_45;
#line 139 "deforest.m"
        MR_Word transform_hlds__deforest___OptionsToRestore_26;

#line 137 "deforest.m"
        {
#line 137 "deforest.m"
          mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_62_62, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__deforest_scalar_common_2[6], transform_hlds__deforest__Versions_21, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42)), &transform_hlds__deforest__conv7_STATE_VARIABLE_ModuleInfo_45_45);
        }
#line 137 "deforest.m"
        transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_45_45 = ((MR_Word) transform_hlds__deforest__conv7_STATE_VARIABLE_ModuleInfo_45_45);
#line 139 "deforest.m"
        {
#line 139 "deforest.m"
          check_hlds__det_report__disable_det_warnings_3_p_0(&transform_hlds__deforest___OptionsToRestore_26, transform_hlds__deforest__Globals_22, &transform_hlds__deforest__NoWarnGlobals_27);
        }
#line 140 "deforest.m"
        {
#line 140 "deforest.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(transform_hlds__deforest__NoWarnGlobals_27, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_45_45, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_46_46);
        }
#line 141 "deforest.m"
        {
#line 141 "deforest.m"
          check_hlds__det_analysis__determinism_pass_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_46_46, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_47_47, &transform_hlds__deforest__Specs_28);
        }
#line 142 "deforest.m"
        {
#line 142 "deforest.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(transform_hlds__deforest__Globals_22, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_47_47, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_31);
        }
#line 144 "deforest.m"
        {
#line 144 "deforest.m"
          transform_hlds__deforest__FoundErrors_29 = parse_tree__error_util__contains_errors_2_f_0(transform_hlds__deforest__Globals_22, transform_hlds__deforest__Specs_28);
        }
#line 145 "deforest.m"
        {
#line 145 "deforest.m"
          transform_hlds__deforest__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 145 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 0) = ((MR_Box) (&transform_hlds__deforest_scalar_common_5[0]));
#line 145 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 1) = ((MR_Box) (transform_hlds__deforest__deforestation_4_p_0_4));
#line 145 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 145 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 3) = ((MR_Box) (transform_hlds__deforest__FoundErrors_29));
#line 145 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 4) = ((MR_Box) ((MR_Integer) 0));
#line 145 "deforest.m"
        }
#line 145 "deforest.m"
        {
#line 145 "deforest.m"
          mercury__require__expect_4_p_0(transform_hlds__deforest__V_49_49, (MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforestation\'/4", (MR_String) "determinism errors after deforestation");
#line 145 "deforest.m"
          return;
        }
#line 137 "deforest.m"
      }
#line 147 "deforest.m"
    else
#line 145 "deforest.m"
      *transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_31 = transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42;
#line 95 "deforest.m"
  }
#line 43 "deforest.m"
}

void mercury__transform_hlds__deforest__init(void)
{
}

void mercury__transform_hlds__deforest__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__deforest__transform_hlds__deforest__type_ctor_info_annotated_conj_0);
	MR_register_type_ctor_info(&transform_hlds__deforest__transform_hlds__deforest__type_ctor_info_can_move_0);
	MR_register_type_ctor_info(&transform_hlds__deforest__transform_hlds__deforest__type_ctor_info_deforest_info_0);
}

void mercury__transform_hlds__deforest__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.deforest. */
