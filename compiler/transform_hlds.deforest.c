/*
** Automatically generated from `deforest.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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
#include "mdbcomp.sym_name.mih"
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
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1683 "deforest.m"
struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s {
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2;
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3;
#line 1687 "deforest.m"
  MR_bool transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded;
#line 1689 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23;
#line 1691 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__V_32_32;
#line 1728 "deforest.m"
  jmp_buf transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0;
#line 1728 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_41;
#line 1727 "deforest.m"
  MR_Box transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_41;
#line 1683 "deforest.m"
};

#line 1683 "deforest.m"
struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s {
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2;
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3;
#line 1687 "deforest.m"
  MR_bool transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded;
#line 1689 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23;
#line 1691 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__V_32_32;
#line 1715 "deforest.m"
  jmp_buf transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0;
#line 1715 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_41;
#line 1714 "deforest.m"
  MR_Box transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_41;
#line 1683 "deforest.m"
};

#line 1876 "deforest.m"
struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s {
#line 1876 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10;
#line 1876 "deforest.m"
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11;
#line 1876 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12;
#line 1876 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14;
#line 1881 "deforest.m"
  MR_bool transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded;
#line 1881 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_86_86;
#line 1881 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18;
#line 1881 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19;
#line 1881 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20;
#line 1881 "deforest.m"
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29;
#line 1881 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__CallerMarkers_30;
#line 1900 "deforest.m"
  jmp_buf transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0;
#line 1900 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_91_91;
#line 1900 "deforest.m"
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_36;
#line 1900 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_37;
#line 1900 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_38;
#line 1900 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__InlinePromisedPure_40;
#line 1900 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_42;
#line 1900 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_43;
#line 1900 "deforest.m"
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_44;
#line 1900 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__V_54_54;
#line 1900 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__V_55_55;
#line 1900 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__V_90_90;
#line 1902 "deforest.m"
  MR_Box transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_36;
#line 1876 "deforest.m"
};

#line 855 "deforest.m"
struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s {
#line 855 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7;
#line 855 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8;
#line 855 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9;
#line 859 "deforest.m"
  MR_bool transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded;
#line 859 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredInfo_12;
#line 859 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14;
#line 859 "deforest.m"
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19;
#line 859 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_20;
#line 889 "deforest.m"
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_0;
#line 889 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_23;
#line 889 "deforest.m"
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_24;
#line 889 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_36;
#line 889 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_37;
#line 889 "deforest.m"
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_38;
#line 916 "deforest.m"
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1;
#line 916 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_40;
#line 916 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__InlinePromisedPure_48;
#line 916 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CallerMarkers_49;
#line 916 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_97;
#line 916 "deforest.m"
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_98;
#line 949 "deforest.m"
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2;
#line 949 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50;
#line 949 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_52;
#line 946 "deforest.m"
  MR_Box transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_50;
#line 963 "deforest.m"
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3;
#line 963 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_53;
#line 963 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_54;
#line 964 "deforest.m"
  MR_Box transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_54;
#line 855 "deforest.m"
};

#line 811 "deforest.m"
struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s {
#line 814 "deforest.m"
  MR_bool transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded;
#line 814 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9;
#line 814 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10;
#line 814 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11;
#line 836 "deforest.m"
  jmp_buf transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0;
#line 836 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_60_60;
#line 836 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_35;
#line 836 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36;
#line 836 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_38;
#line 836 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_39;
#line 836 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_40;
#line 836 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_41;
#line 837 "deforest.m"
  MR_Box transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_36;
#line 811 "deforest.m"
};


#line 342 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 345 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 348 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__deforest__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 351 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

#line 354 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 357 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 360 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 363 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__deforest__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 366 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 369 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 372 "transform_hlds.deforest.c"
static const MR_VA_TypeInfo_Struct4 transform_hlds__deforest____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0bool__type_ctor_info_bool_0hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 375 "transform_hlds.deforest.c"
static const MR_PseudoTypeInfo transform_hlds__deforest__transform_hlds__deforest__field_types_deforest_info_0_0[6];

#line 378 "transform_hlds.deforest.c"
static const MR_DuFunctorDesc transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0;

#line 381 "transform_hlds.deforest.c"
static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_stag_ordered_deforest_info_0_0[1];

#line 384 "transform_hlds.deforest.c"
static const MR_DuPtagLayout transform_hlds__deforest__transform_hlds__deforest__du_ptag_ordered_deforest_info_0[1];

#line 387 "transform_hlds.deforest.c"
static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_name_ordered_deforest_info_0[1];

#line 390 "transform_hlds.deforest.c"
static const MR_Integer transform_hlds__deforest__transform_hlds__deforest__functor_number_map_deforest_info_0[1];

#line 393 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0_10001(
#line 396 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 398 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2);

#line 401 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0_10001(
#line 404 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 406 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 408 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3);

#line 411 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0_10001(
#line 414 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 416 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2);

#line 419 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0_10001(
#line 422 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 424 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 426 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3);

#line 429 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0_10001(
#line 432 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 434 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2);

#line 437 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0_10001(
#line 440 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 442 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 444 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3);

#line 2154 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
#line 2154 "deforest.m"
  MR_Integer transform_hlds__deforest__Size_6,
#line 2154 "deforest.m"
  MR_Integer transform_hlds__deforest__OriginalCost_7,
#line 2154 "deforest.m"
  MR_Integer transform_hlds__deforest__CostDelta_8);

#line 1020 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
#line 1020 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_9,
#line 1020 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_10,
#line 1020 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_11,
#line 1020 "deforest.m"
  MR_Word * transform_hlds__deforest__MaybeGoal_12,
#line 1020 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15,
#line 1020 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_16);

#line 1728 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_1(
#line 1728 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1727 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_3(
#line 1727 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1728 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_2(
#line 1728 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1728 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_4(
#line 1728 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1683 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0(
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__ModuleInfo_2,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__FullyStrict_3,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
#line 1683 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__EndGoal_7,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__8_8,
#line 1683 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__9_9);

#line 1715 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_1(
#line 1715 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1714 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_3(
#line 1714 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1715 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_2(
#line 1715 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1715 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_4(
#line 1715 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1683 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0(
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__ModuleInfo_2,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__FullyStrict_3,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
#line 1683 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__EndGoal_7,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__8_8,
#line 1683 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__9_9);

#line 1630 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1630__1_3_p_0(
#line 1630 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_29,
#line 1630 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_30,
#line 1630 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_31);

#line 634 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__634__1_3_p_0(
#line 634 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_22,
#line 634 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_23,
#line 634 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_24);

#line 495 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__495__1_1_p_0(
#line 495 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_46);

#line 148 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__deforestation__148__1_2_p_0(
#line 148 "deforest.m"
  MR_Word transform_hlds__deforest__FoundErrors_29,
#line 148 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_53);

#line 1905 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____list__list_1_1(
#line 1905 "deforest.m"
  MR_Word transform_hlds__deforest__TypeInfo_for_T_11,
#line 1905 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 1905 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2);

#line 569 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0(
#line 569 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 569 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 569 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3);

#line 569 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0(
#line 569 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 569 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2);

#line 1701 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0(
#line 1701 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 1701 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 1701 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3);

#line 1701 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0(
#line 1701 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 1701 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2);

#line 533 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0(
#line 533 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 533 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 533 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3);

#line 533 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0(
#line 533 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 533 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2);

#line 2137 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_1_p_0(
#line 2137 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1);

#line 2130 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_list_1_p_0(
#line 2130 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1);

#line 1966 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__unfold_call_10_p_0(
#line 1966 "deforest.m"
  MR_Word transform_hlds__deforest__CheckImprovement_11,
#line 1966 "deforest.m"
  MR_Word transform_hlds__deforest__CheckVars_12,
#line 1966 "deforest.m"
  MR_Word transform_hlds__deforest__PredId_13,
#line 1966 "deforest.m"
  MR_Integer transform_hlds__deforest__ProcId_14,
#line 1966 "deforest.m"
  MR_Word transform_hlds__deforest__Args_15,
#line 1966 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_16,
#line 1966 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_17,
#line 1966 "deforest.m"
  MR_Word * transform_hlds__deforest__Optimized_18,
#line 1966 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79,
#line 1966 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_80);

#line 1900 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_1(
#line 1900 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1902 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_3(
#line 1902 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1900 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_2(
#line 1900 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1900 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_4(
#line 1900 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1876 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0(
#line 1876 "deforest.m"
  MR_Word transform_hlds__deforest__PredId_10,
#line 1876 "deforest.m"
  MR_Integer transform_hlds__deforest__ProcId_11,
#line 1876 "deforest.m"
  MR_Word transform_hlds__deforest__Args_12,
#line 1876 "deforest.m"
  MR_Word transform_hlds__deforest__SymName_13,
#line 1876 "deforest.m"
  MR_Word transform_hlds__deforest__BuiltinState_14,
#line 1876 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_15,
#line 1876 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_16,
#line 1876 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49,
#line 1876 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_50);

#line 1854 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0_1(
#line 1854 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 1854 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1854 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1854 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 1845 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0(
#line 1845 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_10,
#line 1845 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_11,
#line 1845 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend0_12,
#line 1845 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals0_13,
#line 1845 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrBranch_14,
#line 1845 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_15,
#line 1845 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_16,
#line 1845 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30,
#line 1845 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_31);

#line 1827 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_to_cases_10_p_0(
#line 1827 "deforest.m"
  MR_Word transform_hlds__deforest__Var_1,
#line 1827 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_2,
#line 1827 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend_3,
#line 1827 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_4,
#line 1827 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrCase_5,
#line 1827 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_6,
#line 1827 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__7_7,
#line 1827 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__8_8,
#line 1827 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9,
#line 1827 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_10);

#line 1812 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(
#line 1812 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_1,
#line 1812 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend_2,
#line 1812 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_3,
#line 1812 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrBranch_4,
#line 1812 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_5,
#line 1812 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__6_6,
#line 1812 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__7_7,
#line 1812 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
#line 1812 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);

#line 1739 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__push_goal_into_goal_8_p_0(
#line 1739 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_9,
#line 1739 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_10,
#line 1739 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_11,
#line 1739 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_12,
#line 1739 "deforest.m"
  MR_Word transform_hlds__deforest__LaterGoal_13,
#line 1739 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_14,
#line 1739 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87,
#line 1739 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_88);

#line 1657 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__reorder_conj_5_p_0(
#line 1657 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo0_6,
#line 1657 "deforest.m"
  MR_Word * transform_hlds__deforest__DeforestInfo_7,
#line 1657 "deforest.m"
  MR_Word * transform_hlds__deforest__BeforeIrrelevant_8,
#line 1657 "deforest.m"
  MR_Word * transform_hlds__deforest__AfterIrrelevant_9,
#line 1657 "deforest.m"
  MR_Word transform_hlds__deforest__PDInfo_10);

#line 1630 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0_1(
#line 1630 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 1630 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1630 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1630 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 1622 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(
#line 1622 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_0_27,
#line 1622 "deforest.m"
  MR_Word transform_hlds__deforest__RevBeforeGoals_11,
#line 1622 "deforest.m"
  MR_Word transform_hlds__deforest__BeforeIrrelevant_12,
#line 1622 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_13,
#line 1622 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_14,
#line 1622 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_15,
#line 1622 "deforest.m"
  MR_Word transform_hlds__deforest__AfterIrrelevant_16,
#line 1622 "deforest.m"
  MR_Word transform_hlds__deforest__AfterGoals_17,
#line 1622 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_28);

#line 1608 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(
#line 1608 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals0_8,
#line 1608 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_9,
#line 1608 "deforest.m"
  MR_Word transform_hlds__deforest__RevBeforeGoals_10,
#line 1608 "deforest.m"
  MR_Word transform_hlds__deforest__BeforeIrrelevant_11,
#line 1608 "deforest.m"
  MR_Word transform_hlds__deforest__AfterIrrelevant_12,
#line 1608 "deforest.m"
  MR_Word transform_hlds__deforest__AfterGoals0_13,
#line 1608 "deforest.m"
  MR_Word * transform_hlds__deforest__SubConjNonLocals_14);

#line 984 "deforest.m"
static MR_Word MR_CALL 
transform_hlds__deforest__is_improvement_worth_while_4_f_0(
#line 984 "deforest.m"
  MR_Word transform_hlds__deforest__PDInfo_6,
#line 984 "deforest.m"
  MR_Word transform_hlds__deforest__Optimized0_7,
#line 984 "deforest.m"
  MR_Integer transform_hlds__deforest__CostDelta0_8,
#line 984 "deforest.m"
  MR_Integer transform_hlds__deforest__SizeDelta0_9);

#line 889 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_1(
#line 889 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 889 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_2(
#line 889 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 889 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_3(
#line 889 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 916 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_4(
#line 916 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 916 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_5(
#line 916 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 916 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_6(
#line 916 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 949 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_7(
#line 949 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 949 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_8(
#line 949 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 946 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_9(
#line 946 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 949 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_10(
#line 949 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 963 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_11(
#line 963 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 963 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_12(
#line 963 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 964 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_13(
#line 964 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 963 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_14(
#line 963 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 855 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0(
#line 855 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_7,
#line 855 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_8,
#line 855 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_9,
#line 855 "deforest.m"
  MR_Word * transform_hlds__deforest__ShouldTry_10,
#line 855 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56,
#line 855 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_57);

#line 836 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_1(
#line 836 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 836 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_2(
#line 836 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 837 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_3(
#line 837 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 836 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_4(
#line 836 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 811 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0(
#line 811 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_5,
#line 811 "deforest.m"
  MR_Word * transform_hlds__deforest__ShouldTry_6,
#line 811 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_42,
#line 811 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_43);

#line 788 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_2(
#line 788 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 788 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 788 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 788 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 675 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_1(
#line 675 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 675 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 675 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 675 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 648 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0(
#line 648 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_10,
#line 648 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo0_11,
#line 648 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82,
#line 648 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_83,
#line 648 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84,
#line 648 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85,
#line 648 "deforest.m"
  MR_Word * transform_hlds__deforest__Optimized_14,
#line 648 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86,
#line 648 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_87);

#line 634 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0_1(
#line 634 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 634 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 634 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 634 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 595 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0(
#line 595 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_7,
#line 595 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierBranchInfo_8,
#line 595 "deforest.m"
  MR_Word transform_hlds__deforest__RevBetweenGoals0_9,
#line 595 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 595 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_12,
#line 595 "deforest.m"
  MR_Word * transform_hlds__deforest__DeforestInfo_13);

#line 536 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_conj_6_p_0(
#line 536 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 536 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_2,
#line 536 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3,
#line 536 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__4_4,
#line 536 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
#line 536 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6);

#line 495 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0_1(
#line 495 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 495 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1);

#line 479 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0(
#line 479 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 479 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_2,
#line 479 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3,
#line 479 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_4,
#line 479 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
#line 479 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6);

#line 431 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__compute_goal_infos_4_p_0(
#line 431 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 431 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
#line 431 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
#line 431 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);

#line 410 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(
#line 410 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 410 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 410 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_3,
#line 410 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
#line 410 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5);

#line 391 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_cases_5_p_0(
#line 391 "deforest.m"
  MR_Word transform_hlds__deforest__Var_1,
#line 391 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 391 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_3,
#line 391 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
#line 391 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5);

#line 379 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_disj_4_p_0(
#line 379 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 379 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
#line 379 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
#line 379 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);

#line 281 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_goal_expr_6_p_0(
#line 281 "deforest.m"
  MR_Word transform_hlds__deforest__GoalExpr0_7,
#line 281 "deforest.m"
  MR_Word * transform_hlds__deforest__GoalExpr_8,
#line 281 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60,
#line 281 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61,
#line 281 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62,
#line 281 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);

#line 273 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_goal_4_p_0(
#line 273 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_5,
#line 273 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_6,
#line 273 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_12,
#line 273 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_13);

#line 192 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_proc_deltas_5_p_0(
#line 192 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 192 "deforest.m"
  MR_Integer * transform_hlds__deforest__CostDelta_8,
#line 192 "deforest.m"
  MR_Integer * transform_hlds__deforest__SizeDelta_9,
#line 192 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_28,
#line 192 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_29);

#line 187 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_proc_3_p_0(
#line 187 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_4,
#line 187 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
#line 187 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);

#line 176 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(
#line 176 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_8,
#line 176 "deforest.m"
  MR_Word transform_hlds__deforest__ProcInfo_9,
#line 176 "deforest.m"
  MR_Word * transform_hlds__deforest__ProcInfo_3,
#line 176 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_15,
#line 176 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_16,
#line 176 "deforest.m"
  MR_Word transform_hlds__deforest__UnivProcArgInfo0_11,
#line 176 "deforest.m"
  MR_Word * transform_hlds__deforest__UnivProcArgInfo_12);

#line 154 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(
#line 154 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_4,
#line 154 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_11,
#line 154 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_12);

#line 148 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_4(
#line 148 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg);

#line 140 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_3(
#line 140 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 140 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 140 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 140 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 124 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_2(
#line 124 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 124 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 124 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 124 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 104 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_1(
#line 104 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 104 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 104 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 104 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3,
#line 104 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_4,
#line 104 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_5,
#line 104 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_6,
#line 104 "deforest.m"
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



#line 1602 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1610 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1618 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__deforest__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1627 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1635 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1643 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1,
  {
    (MR_TypeInfo) &transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1651 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1659 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__deforest__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_TypeInfo) &transform_hlds__deforest__maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1668 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__deforest__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1676 "transform_hlds.deforest.c"
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

#line 1697 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1705 "transform_hlds.deforest.c"
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

#line 1717 "transform_hlds.deforest.c"
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

#line 1738 "transform_hlds.deforest.c"
static const MR_PseudoTypeInfo transform_hlds__deforest__transform_hlds__deforest__field_types_deforest_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

#line 1748 "transform_hlds.deforest.c"
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

#line 1763 "transform_hlds.deforest.c"
static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_stag_ordered_deforest_info_0_0[1] = {
  &transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0
};

#line 1768 "transform_hlds.deforest.c"
static const MR_DuPtagLayout transform_hlds__deforest__transform_hlds__deforest__du_ptag_ordered_deforest_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__deforest__transform_hlds__deforest__du_stag_ordered_deforest_info_0_0
  }
};

#line 1777 "transform_hlds.deforest.c"
static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_name_ordered_deforest_info_0[1] = {
  &transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0
};

#line 1782 "transform_hlds.deforest.c"
static const MR_Integer transform_hlds__deforest__transform_hlds__deforest__functor_number_map_deforest_info_0[1] = {
  (MR_Integer) 0
};

#line 1787 "transform_hlds.deforest.c"
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

#line 1808 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0_10001(
#line 1811 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1813 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2)
#line 1815 "transform_hlds.deforest.c"
{
#line 1817 "transform_hlds.deforest.c"
  {
#line 1819 "transform_hlds.deforest.c"
    MR_bool transform_hlds__deforest__succeeded;

#line 1822 "transform_hlds.deforest.c"
    {
#line 1824 "transform_hlds.deforest.c"
      transform_hlds__deforest__succeeded = transform_hlds__deforest____Unify____annotated_conj_0_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2));
    }
#line 1827 "transform_hlds.deforest.c"
    return transform_hlds__deforest__succeeded;
#line 1829 "transform_hlds.deforest.c"
  }
#line 1831 "transform_hlds.deforest.c"
}

#line 1834 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0_10001(
#line 1837 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 1839 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1841 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3)
#line 1843 "transform_hlds.deforest.c"
{
#line 1845 "transform_hlds.deforest.c"
  {
#line 1847 "transform_hlds.deforest.c"
    MR_Word transform_hlds__deforest__conv0_HeadVar__1_1;

#line 1850 "transform_hlds.deforest.c"
    {
#line 1852 "transform_hlds.deforest.c"
      transform_hlds__deforest____Compare____annotated_conj_0_0(&transform_hlds__deforest__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__deforest__wrapper_arg_2), ((MR_Word) transform_hlds__deforest__wrapper_arg_3));
    }
#line 1855 "transform_hlds.deforest.c"
    *transform_hlds__deforest__wrapper_arg_1 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__1_1));
#line 1857 "transform_hlds.deforest.c"
  }
#line 1859 "transform_hlds.deforest.c"
}

#line 1862 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0_10001(
#line 1865 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1867 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2)
#line 1869 "transform_hlds.deforest.c"
{
#line 1871 "transform_hlds.deforest.c"
  {
#line 1873 "transform_hlds.deforest.c"
    MR_bool transform_hlds__deforest__succeeded;

#line 1876 "transform_hlds.deforest.c"
    {
#line 1878 "transform_hlds.deforest.c"
      transform_hlds__deforest__succeeded = transform_hlds__deforest____Unify____can_move_0_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2));
    }
#line 1881 "transform_hlds.deforest.c"
    return transform_hlds__deforest__succeeded;
#line 1883 "transform_hlds.deforest.c"
  }
#line 1885 "transform_hlds.deforest.c"
}

#line 1888 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0_10001(
#line 1891 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 1893 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1895 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3)
#line 1897 "transform_hlds.deforest.c"
{
#line 1899 "transform_hlds.deforest.c"
  {
#line 1901 "transform_hlds.deforest.c"
    MR_Word transform_hlds__deforest__conv0_HeadVar__1_1;

#line 1904 "transform_hlds.deforest.c"
    {
#line 1906 "transform_hlds.deforest.c"
      transform_hlds__deforest____Compare____can_move_0_0(&transform_hlds__deforest__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__deforest__wrapper_arg_2), ((MR_Word) transform_hlds__deforest__wrapper_arg_3));
    }
#line 1909 "transform_hlds.deforest.c"
    *transform_hlds__deforest__wrapper_arg_1 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__1_1));
#line 1911 "transform_hlds.deforest.c"
  }
#line 1913 "transform_hlds.deforest.c"
}

#line 1916 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0_10001(
#line 1919 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1921 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2)
#line 1923 "transform_hlds.deforest.c"
{
#line 1925 "transform_hlds.deforest.c"
  {
#line 1927 "transform_hlds.deforest.c"
    MR_bool transform_hlds__deforest__succeeded;

#line 1930 "transform_hlds.deforest.c"
    {
#line 1932 "transform_hlds.deforest.c"
      transform_hlds__deforest__succeeded = transform_hlds__deforest____Unify____deforest_info_0_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2));
    }
#line 1935 "transform_hlds.deforest.c"
    return transform_hlds__deforest__succeeded;
#line 1937 "transform_hlds.deforest.c"
  }
#line 1939 "transform_hlds.deforest.c"
}

#line 1942 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0_10001(
#line 1945 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 1947 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1949 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3)
#line 1951 "transform_hlds.deforest.c"
{
#line 1953 "transform_hlds.deforest.c"
  {
#line 1955 "transform_hlds.deforest.c"
    MR_Word transform_hlds__deforest__conv0_HeadVar__1_1;

#line 1958 "transform_hlds.deforest.c"
    {
#line 1960 "transform_hlds.deforest.c"
      transform_hlds__deforest____Compare____deforest_info_0_0(&transform_hlds__deforest__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__deforest__wrapper_arg_2), ((MR_Word) transform_hlds__deforest__wrapper_arg_3));
    }
#line 1963 "transform_hlds.deforest.c"
    *transform_hlds__deforest__wrapper_arg_1 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__1_1));
#line 1965 "transform_hlds.deforest.c"
  }
#line 1967 "transform_hlds.deforest.c"
}

#line 2154 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
#line 2154 "deforest.m"
  MR_Integer transform_hlds__deforest__Size_6,
#line 2154 "deforest.m"
  MR_Integer transform_hlds__deforest__OriginalCost_7,
#line 2154 "deforest.m"
  MR_Integer transform_hlds__deforest__CostDelta_8)
#line 2154 "deforest.m"
{
#line 2160 "deforest.m"
  {
#line 2160 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded = (transform_hlds__deforest__Size_6 <= (MR_Integer) 5);

#line 2160 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 2159 "deforest.m"
      {
#line 2159 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__CostDelta_8 > (MR_Integer) 0);
#line 2159 "deforest.m"
      }
#line 2160 "deforest.m"
    else
#line 2161 "deforest.m"
      {
#line 2161 "deforest.m"
        MR_Integer transform_hlds__deforest__PercentChange_9;
#line 2161 "deforest.m"
        MR_Integer transform_hlds__deforest__V_12_12 = (transform_hlds__deforest__CostDelta_8 * (MR_Integer) 100);

#line 2161 "deforest.m"
        {
#line 2161 "deforest.m"
          transform_hlds__deforest__PercentChange_9 = mercury__int__f_47_47_2_f_0(transform_hlds__deforest__V_12_12, transform_hlds__deforest__OriginalCost_7);
        }
#line 2162 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__PercentChange_9 >= (MR_Integer) 5);
#line 2161 "deforest.m"
      }
#line 2160 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 2160 "deforest.m"
  }
#line 2154 "deforest.m"
}

#line 1020 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
#line 1020 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_9,
#line 1020 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_10,
#line 1020 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_11,
#line 1020 "deforest.m"
  MR_Word * transform_hlds__deforest__MaybeGoal_12,
#line 1020 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15,
#line 1020 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_16)
#line 1020 "deforest.m"
{
#line 1025 "deforest.m"
  while (MR_TRUE)
#line 1025 "deforest.m"
    {
#line 1025 "deforest.m"
      /* tailcall optimized into a loop */
#line 1025 "deforest.m"
      {
#line 1025 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;
#line 1025 "deforest.m"
        MR_Word transform_hlds__deforest__ShouldTry_14;
#line 1025 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;

#line 1026 "deforest.m"
        {
#line 1026 "deforest.m"
          transform_hlds__deforest__can_optimize_conj_6_p_0(transform_hlds__deforest__EarlierGoal_9, transform_hlds__deforest__BetweenGoals_10, transform_hlds__deforest__MaybeLaterGoal_11, &transform_hlds__deforest__ShouldTry_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17);
        }
#line 1032 "deforest.m"
        if ((transform_hlds__deforest__ShouldTry_14 == (MR_Integer) 0))
#line 1033 "deforest.m"
          {
#line 1034 "deforest.m"
            *transform_hlds__deforest__MaybeGoal_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1034 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;
#line 1033 "deforest.m"
          }
#line 1032 "deforest.m"
        else
#line 1030 "deforest.m"
          {
#line 1030 "deforest.m"
            /* direct tailcall eliminated */
#line 1030 "deforest.m"
            {
#line 1030 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_15 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;

#line 1030 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_15;
#line 1030 "deforest.m"
            }
#line 1030 "deforest.m"
            continue;
#line 1030 "deforest.m"
          }
#line 1025 "deforest.m"
      }
#line 1025 "deforest.m"
      break;
#line 1025 "deforest.m"
    }
#line 1020 "deforest.m"
}

#line 1728 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_1(
#line 1728 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1728 "deforest.m"
{
#line 1728 "deforest.m"
  {
#line 1728 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1728 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0, 1);
#line 1728 "deforest.m"
  }
#line 1728 "deforest.m"
}

#line 1727 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_3(
#line 1727 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1727 "deforest.m"
{
#line 1727 "deforest.m"
  {
#line 1727 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1727 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_41 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_41);
#line 1727 "deforest.m"
    {
#line 1727 "deforest.m"
      transform_hlds__deforest__move_goals__ho2_9_p_0_2(transform_hlds__deforest__env_ptr);
#line 1727 "deforest.m"
      return;
    }
#line 1727 "deforest.m"
  }
#line 1727 "deforest.m"
}

#line 1728 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_2(
#line 1728 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1728 "deforest.m"
{
#line 1728 "deforest.m"
  {
#line 1728 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1729 "deforest.m"
    {
#line 1729 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = transform_hlds__pd_util__pd_can_reorder_goals_4_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_41, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23);
    }
#line 1728 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded);
#line 1728 "deforest.m"
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded)
#line 1728 "deforest.m"
      {
#line 1728 "deforest.m"
        transform_hlds__deforest__move_goals__ho2_9_p_0_1(transform_hlds__deforest__env_ptr);
#line 1728 "deforest.m"
        return;
      }
#line 1728 "deforest.m"
  }
#line 1728 "deforest.m"
}

#line 1728 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_4(
#line 1728 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1728 "deforest.m"
{
#line 1728 "deforest.m"
  {
#line 1728 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1728 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0) == 0)
#line 1728 "deforest.m"
      {
#line 1728 "deforest.m"
        {
#line 1727 "deforest.m"
          {
#line 1727 "deforest.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_41, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__V_32_32, transform_hlds__deforest__move_goals__ho2_9_p_0_3, transform_hlds__deforest__env_ptr);
          }
#line 1728 "deforest.m"
        }
#line 1728 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = MR_FALSE;
#line 1728 "deforest.m"
      }
#line 1728 "deforest.m"
    else
#line 1728 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = MR_TRUE;
#line 1728 "deforest.m"
  }
#line 1728 "deforest.m"
}

#line 1683 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0(
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__ModuleInfo_2,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__FullyStrict_3,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
#line 1683 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__EndGoal_7,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__8_8,
#line 1683 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__9_9)
#line 1683 "deforest.m"
{
#line 1683 "deforest.m"
  {
#line 1683 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s transform_hlds__deforest__env;

#line 1683 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2 = transform_hlds__deforest__ModuleInfo_2;
#line 1683 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3 = transform_hlds__deforest__FullyStrict_3;
#line 1687 "deforest.m"
    while (MR_TRUE)
#line 1687 "deforest.m"
      {
#line 1687 "deforest.m"
        /* tailcall optimized into a loop */
#line 1687 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1687 "deforest.m"
          {
#line 1687 "deforest.m"
            *transform_hlds__deforest__HeadVar__9_9 = transform_hlds__deforest__HeadVar__8_8;
#line 1687 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
#line 1687 "deforest.m"
          }
#line 1687 "deforest.m"
        else
#line 1689 "deforest.m"
          {
#line 1689 "deforest.m"
            MR_Word transform_hlds__deforest__RevBetweenGoals0_24;
#line 1689 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;
#line 1689 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;

#line 1688 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 0)));
#line 1688 "deforest.m"
            transform_hlds__deforest__RevBetweenGoals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 1)));
#line 1692 "deforest.m"
            {
#line 1692 "deforest.m"
              MR_Word base;
#line 1692 "deforest.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1692 "deforest.m"
              (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__V_32_32 = base;
#line 1692 "deforest.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__EndGoal_7));
#line 1692 "deforest.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
#line 1692 "deforest.m"
            }
#line 1728 "deforest.m"
            {
#line 1728 "deforest.m"
              transform_hlds__deforest__move_goals__ho2_9_p_0_4(&transform_hlds__deforest__env);
            }
#line 1728 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded);
#line 1695 "deforest.m"
            if ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded)
#line 1694 "deforest.m"
              {
#line 1694 "deforest.m"
                {
#line 1694 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23));
#line 1694 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__8_8));
#line 1694 "deforest.m"
                }
#line 1694 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
#line 1694 "deforest.m"
              }
#line 1695 "deforest.m"
            else
#line 1696 "deforest.m"
              {
#line 1696 "deforest.m"
                {
#line 1696 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1696 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23));
#line 1696 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
#line 1696 "deforest.m"
                }
#line 1696 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = transform_hlds__deforest__HeadVar__8_8;
#line 1696 "deforest.m"
              }
#line 1698 "deforest.m"
            /* direct tailcall eliminated */
#line 1698 "deforest.m"
            {
#line 1698 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__4__tmp_copy_4 = transform_hlds__deforest__RevBetweenGoals0_24;
#line 1698 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;
#line 1698 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__8__tmp_copy_8 = transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;

#line 1698 "deforest.m"
              transform_hlds__deforest__HeadVar__8_8 = transform_hlds__deforest__HeadVar__8__tmp_copy_8;
#line 1698 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0__tmp_copy_5;
#line 1698 "deforest.m"
              transform_hlds__deforest__HeadVar__4_4 = transform_hlds__deforest__HeadVar__4__tmp_copy_4;
#line 1698 "deforest.m"
            }
#line 1698 "deforest.m"
            continue;
#line 1689 "deforest.m"
          }
#line 1687 "deforest.m"
        break;
#line 1687 "deforest.m"
      }
#line 1683 "deforest.m"
  }
#line 1683 "deforest.m"
}

#line 1715 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_1(
#line 1715 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1715 "deforest.m"
{
#line 1715 "deforest.m"
  {
#line 1715 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1715 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0, 1);
#line 1715 "deforest.m"
  }
#line 1715 "deforest.m"
}

#line 1714 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_3(
#line 1714 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1714 "deforest.m"
{
#line 1714 "deforest.m"
  {
#line 1714 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1714 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_41 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_41);
#line 1714 "deforest.m"
    {
#line 1714 "deforest.m"
      transform_hlds__deforest__move_goals__ho1_9_p_0_2(transform_hlds__deforest__env_ptr);
#line 1714 "deforest.m"
      return;
    }
#line 1714 "deforest.m"
  }
#line 1714 "deforest.m"
}

#line 1715 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_2(
#line 1715 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1715 "deforest.m"
{
#line 1715 "deforest.m"
  {
#line 1715 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1716 "deforest.m"
    {
#line 1716 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = transform_hlds__pd_util__pd_can_reorder_goals_4_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_41);
    }
#line 1715 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded);
#line 1715 "deforest.m"
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded)
#line 1715 "deforest.m"
      {
#line 1715 "deforest.m"
        transform_hlds__deforest__move_goals__ho1_9_p_0_1(transform_hlds__deforest__env_ptr);
#line 1715 "deforest.m"
        return;
      }
#line 1715 "deforest.m"
  }
#line 1715 "deforest.m"
}

#line 1715 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_4(
#line 1715 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1715 "deforest.m"
{
#line 1715 "deforest.m"
  {
#line 1715 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1715 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0) == 0)
#line 1715 "deforest.m"
      {
#line 1715 "deforest.m"
        {
#line 1714 "deforest.m"
          {
#line 1714 "deforest.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_41, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__V_32_32, transform_hlds__deforest__move_goals__ho1_9_p_0_3, transform_hlds__deforest__env_ptr);
          }
#line 1715 "deforest.m"
        }
#line 1715 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = MR_FALSE;
#line 1715 "deforest.m"
      }
#line 1715 "deforest.m"
    else
#line 1715 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = MR_TRUE;
#line 1715 "deforest.m"
  }
#line 1715 "deforest.m"
}

#line 1683 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0(
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__ModuleInfo_2,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__FullyStrict_3,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
#line 1683 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__EndGoal_7,
#line 1683 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__8_8,
#line 1683 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__9_9)
#line 1683 "deforest.m"
{
#line 1683 "deforest.m"
  {
#line 1683 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s transform_hlds__deforest__env;

#line 1683 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2 = transform_hlds__deforest__ModuleInfo_2;
#line 1683 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3 = transform_hlds__deforest__FullyStrict_3;
#line 1687 "deforest.m"
    while (MR_TRUE)
#line 1687 "deforest.m"
      {
#line 1687 "deforest.m"
        /* tailcall optimized into a loop */
#line 1687 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1687 "deforest.m"
          {
#line 1687 "deforest.m"
            *transform_hlds__deforest__HeadVar__9_9 = transform_hlds__deforest__HeadVar__8_8;
#line 1687 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
#line 1687 "deforest.m"
          }
#line 1687 "deforest.m"
        else
#line 1689 "deforest.m"
          {
#line 1689 "deforest.m"
            MR_Word transform_hlds__deforest__RevBetweenGoals0_24;
#line 1689 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;
#line 1689 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;

#line 1688 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 0)));
#line 1688 "deforest.m"
            transform_hlds__deforest__RevBetweenGoals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 1)));
#line 1692 "deforest.m"
            {
#line 1692 "deforest.m"
              MR_Word base;
#line 1692 "deforest.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1692 "deforest.m"
              (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__V_32_32 = base;
#line 1692 "deforest.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__EndGoal_7));
#line 1692 "deforest.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
#line 1692 "deforest.m"
            }
#line 1715 "deforest.m"
            {
#line 1715 "deforest.m"
              transform_hlds__deforest__move_goals__ho1_9_p_0_4(&transform_hlds__deforest__env);
            }
#line 1715 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded);
#line 1695 "deforest.m"
            if ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded)
#line 1694 "deforest.m"
              {
#line 1694 "deforest.m"
                {
#line 1694 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23));
#line 1694 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__8_8));
#line 1694 "deforest.m"
                }
#line 1694 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
#line 1694 "deforest.m"
              }
#line 1695 "deforest.m"
            else
#line 1696 "deforest.m"
              {
#line 1696 "deforest.m"
                {
#line 1696 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1696 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23));
#line 1696 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
#line 1696 "deforest.m"
                }
#line 1696 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = transform_hlds__deforest__HeadVar__8_8;
#line 1696 "deforest.m"
              }
#line 1698 "deforest.m"
            /* direct tailcall eliminated */
#line 1698 "deforest.m"
            {
#line 1698 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__4__tmp_copy_4 = transform_hlds__deforest__RevBetweenGoals0_24;
#line 1698 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;
#line 1698 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__8__tmp_copy_8 = transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;

#line 1698 "deforest.m"
              transform_hlds__deforest__HeadVar__8_8 = transform_hlds__deforest__HeadVar__8__tmp_copy_8;
#line 1698 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0__tmp_copy_5;
#line 1698 "deforest.m"
              transform_hlds__deforest__HeadVar__4_4 = transform_hlds__deforest__HeadVar__4__tmp_copy_4;
#line 1698 "deforest.m"
            }
#line 1698 "deforest.m"
            continue;
#line 1689 "deforest.m"
          }
#line 1687 "deforest.m"
        break;
#line 1687 "deforest.m"
      }
#line 1683 "deforest.m"
  }
#line 1683 "deforest.m"
}

#line 1630 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1630__1_3_p_0(
#line 1630 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_29,
#line 1630 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_30,
#line 1630 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_31)
#line 1630 "deforest.m"
{
#line 1630 "deforest.m"
  {
#line 1630 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1630 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_29, (MR_Integer) 1)));
#line 1630 "deforest.m"
    MR_Word transform_hlds__deforest__GoalNonLocals_25;
#line 1631 "deforest.m"
    MR_Word transform_hlds__deforest__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_29, (MR_Integer) 0)));

#line 1632 "deforest.m"
    {
#line 1632 "deforest.m"
      transform_hlds__deforest__GoalNonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__GoalInfo_24);
    }
#line 1633 "deforest.m"
    {
#line 1633 "deforest.m"
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__GoalNonLocals_25, transform_hlds__deforest__HeadVar__2_30, transform_hlds__deforest__HeadVar__3_31);
#line 1633 "deforest.m"
      return;
    }
#line 1630 "deforest.m"
  }
#line 1630 "deforest.m"
}

#line 634 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__634__1_3_p_0(
#line 634 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_22,
#line 634 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_23,
#line 634 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_24)
#line 634 "deforest.m"
{
#line 634 "deforest.m"
  {
#line 634 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 634 "deforest.m"
    MR_Word transform_hlds__deforest__Branches1_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_22, (MR_Integer) 1)));
#line 636 "deforest.m"
    MR_Word transform_hlds__deforest__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_22, (MR_Integer) 0)));

#line 637 "deforest.m"
    {
#line 637 "deforest.m"
      mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__deforest__HeadVar__2_23, transform_hlds__deforest__Branches1_20, transform_hlds__deforest__HeadVar__3_24);
#line 637 "deforest.m"
      return;
    }
#line 634 "deforest.m"
  }
#line 634 "deforest.m"
}

#line 495 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__495__1_1_p_0(
#line 495 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_46)
#line 495 "deforest.m"
{
#line 495 "deforest.m"
  {
#line 495 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 495 "deforest.m"
    MR_Word transform_hlds__deforest__CnstrGoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_46, (MR_Integer) 1)));
#line 496 "deforest.m"
    MR_Word transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_46, (MR_Integer) 0)));

#line 497 "deforest.m"
    {
#line 497 "deforest.m"
      return transform_hlds__deforest__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(transform_hlds__deforest__CnstrGoalInfo_30, (MR_Integer) 0);
    }
#line 495 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 495 "deforest.m"
  }
#line 495 "deforest.m"
}

#line 148 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__deforestation__148__1_2_p_0(
#line 148 "deforest.m"
  MR_Word transform_hlds__deforest__FoundErrors_29,
#line 148 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_53)
#line 148 "deforest.m"
{
#line 148 "deforest.m"
  {
#line 148 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded = (transform_hlds__deforest__FoundErrors_29 == transform_hlds__deforest__HeadVar__2_53);

#line 148 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 148 "deforest.m"
  }
#line 148 "deforest.m"
}

#line 1905 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____list__list_1_1(
#line 1905 "deforest.m"
  MR_Word transform_hlds__deforest__TypeInfo_for_T_11,
#line 1905 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 1905 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2)
#line 1905 "deforest.m"
{
#line 1905 "deforest.m"
  {
#line 1905 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1905 "deforest.m"
    MR_Word transform_hlds__deforest__V_6_6;
#line 1905 "deforest.m"
    MR_Box transform_hlds__deforest__V_7_7;
#line 1905 "deforest.m"
    MR_Word transform_hlds__deforest__V_8_8;

#line 1905 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 1905 "deforest.m"
      {
#line 1905 "deforest.m"
        transform_hlds__deforest__V_7_7 = (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0));
#line 1905 "deforest.m"
        transform_hlds__deforest__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
#line 1905 "deforest.m"
        (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)) = transform_hlds__deforest__V_7_7;
#line 1905 "deforest.m"
        transform_hlds__deforest__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 1905 "deforest.m"
        {
#line 1905 "deforest.m"
          return transform_hlds__deforest__succeeded = mercury__list____Unify____list_1_0(transform_hlds__deforest__TypeInfo_for_T_11, transform_hlds__deforest__V_6_6, transform_hlds__deforest__V_8_8);
        }
#line 1905 "deforest.m"
      }
#line 1905 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 1905 "deforest.m"
  }
#line 1905 "deforest.m"
}

#line 569 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0(
#line 569 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 569 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 569 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3)
#line 569 "deforest.m"
{
#line 569 "deforest.m"
  {
#line 569 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 569 "deforest.m"
    MR_Integer transform_hlds__deforest__CastX_21 = (MR_Integer) transform_hlds__deforest__HeadVar__2_2;
#line 569 "deforest.m"
    MR_Integer transform_hlds__deforest__CastY_22 = (MR_Integer) transform_hlds__deforest__HeadVar__3_3;

#line 569 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__CastX_21 == transform_hlds__deforest__CastY_22);
#line 569 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 2818 "transform_hlds.deforest.c"
      *transform_hlds__deforest__HeadVar__1_1 = (MR_Integer) 0;
#line 569 "deforest.m"
    else
#line 569 "deforest.m"
      {
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 2)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 3)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 4)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 5)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 0)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 1)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 2)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 3)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 4)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 5)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_16_16;

#line 569 "deforest.m"
        {
#line 569 "deforest.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__deforest__V_16_16, transform_hlds__deforest__V_4_4, transform_hlds__deforest__V_10_10);
        }
#line 2856 "transform_hlds.deforest.c"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_16_16 == (MR_Integer) 0);
#line 569 "deforest.m"
        transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 569 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 569 "deforest.m"
          *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_16_16;
#line 569 "deforest.m"
        else
#line 569 "deforest.m"
          {
#line 569 "deforest.m"
            MR_Word transform_hlds__deforest__V_17_17;

#line 569 "deforest.m"
            {
#line 569 "deforest.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[2], &transform_hlds__deforest__V_17_17, ((MR_Box) (transform_hlds__deforest__V_5_5)), ((MR_Box) (transform_hlds__deforest__V_11_11)));
            }
#line 2876 "transform_hlds.deforest.c"
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_17_17 == (MR_Integer) 0);
#line 569 "deforest.m"
            transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 569 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 569 "deforest.m"
              *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_17_17;
#line 569 "deforest.m"
            else
#line 569 "deforest.m"
              {
#line 569 "deforest.m"
                MR_Word transform_hlds__deforest__V_18_18;

#line 569 "deforest.m"
                {
#line 569 "deforest.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[7], &transform_hlds__deforest__V_18_18, ((MR_Box) (transform_hlds__deforest__V_6_6)), ((MR_Box) (transform_hlds__deforest__V_12_12)));
                }
#line 2896 "transform_hlds.deforest.c"
                transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_18_18 == (MR_Integer) 0);
#line 569 "deforest.m"
                transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 569 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 569 "deforest.m"
                  *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_18_18;
#line 569 "deforest.m"
                else
#line 569 "deforest.m"
                  {
#line 569 "deforest.m"
                    MR_Word transform_hlds__deforest__V_19_19;

#line 569 "deforest.m"
                    {
#line 569 "deforest.m"
                      hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__deforest__V_19_19, transform_hlds__deforest__V_7_7, transform_hlds__deforest__V_13_13);
                    }
#line 2916 "transform_hlds.deforest.c"
                    transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_19_19 == (MR_Integer) 0);
#line 569 "deforest.m"
                    transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 569 "deforest.m"
                    if (transform_hlds__deforest__succeeded)
#line 569 "deforest.m"
                      *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_19_19;
#line 569 "deforest.m"
                    else
#line 569 "deforest.m"
                      {
#line 569 "deforest.m"
                        MR_Word transform_hlds__deforest__V_20_20;

#line 569 "deforest.m"
                        {
#line 569 "deforest.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[2], &transform_hlds__deforest__V_20_20, ((MR_Box) (transform_hlds__deforest__V_8_8)), ((MR_Box) (transform_hlds__deforest__V_14_14)));
                        }
#line 2936 "transform_hlds.deforest.c"
                        transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_20_20 == (MR_Integer) 0);
#line 569 "deforest.m"
                        transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 569 "deforest.m"
                        if (transform_hlds__deforest__succeeded)
#line 569 "deforest.m"
                          *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_20_20;
#line 569 "deforest.m"
                        else
#line 569 "deforest.m"
                          {
#line 569 "deforest.m"
                            {
#line 569 "deforest.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[4], transform_hlds__deforest__HeadVar__1_1, ((MR_Box) (transform_hlds__deforest__V_9_9)), ((MR_Box) (transform_hlds__deforest__V_15_15)));
#line 569 "deforest.m"
                              return;
                            }
#line 569 "deforest.m"
                          }
#line 569 "deforest.m"
                      }
#line 569 "deforest.m"
                  }
#line 569 "deforest.m"
              }
#line 569 "deforest.m"
          }
#line 569 "deforest.m"
      }
#line 569 "deforest.m"
  }
#line 569 "deforest.m"
}

#line 569 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0(
#line 569 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 569 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2)
#line 569 "deforest.m"
{
#line 569 "deforest.m"
  {
#line 569 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 569 "deforest.m"
    MR_Integer transform_hlds__deforest__CastX_15 = (MR_Integer) transform_hlds__deforest__HeadVar__1_1;
#line 569 "deforest.m"
    MR_Integer transform_hlds__deforest__CastY_16 = (MR_Integer) transform_hlds__deforest__HeadVar__2_2;

#line 569 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__CastX_15 == transform_hlds__deforest__CastY_16);
#line 569 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 569 "deforest.m"
      transform_hlds__deforest__succeeded = MR_TRUE;
#line 569 "deforest.m"
    else
#line 569 "deforest.m"
      {
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_18_18;
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_19_19;
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_21_21;
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_22_22;
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 2)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 3)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 4)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 5)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 2)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 3)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 4)));
#line 569 "deforest.m"
        MR_Word transform_hlds__deforest__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 5)));

#line 3033 "transform_hlds.deforest.c"
        {
#line 3035 "transform_hlds.deforest.c"
          transform_hlds__deforest__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__deforest__V_3_3, transform_hlds__deforest__V_9_9);
        }
#line 569 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 569 "deforest.m"
          {
#line 3042 "transform_hlds.deforest.c"
            transform_hlds__deforest__TypeInfo_18_18 = (MR_Word) &transform_hlds__deforest_scalar_common_1[2];
#line 3044 "transform_hlds.deforest.c"
            {
#line 3046 "transform_hlds.deforest.c"
              transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_18_18, ((MR_Box) (transform_hlds__deforest__V_4_4)), ((MR_Box) (transform_hlds__deforest__V_10_10)));
            }
#line 569 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 569 "deforest.m"
              {
#line 3053 "transform_hlds.deforest.c"
                transform_hlds__deforest__TypeInfo_19_19 = (MR_Word) &transform_hlds__deforest_scalar_common_1[7];
#line 3055 "transform_hlds.deforest.c"
                {
#line 3057 "transform_hlds.deforest.c"
                  transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_19_19, ((MR_Box) (transform_hlds__deforest__V_5_5)), ((MR_Box) (transform_hlds__deforest__V_11_11)));
                }
#line 569 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 569 "deforest.m"
                  {
#line 3064 "transform_hlds.deforest.c"
                    {
#line 3066 "transform_hlds.deforest.c"
                      transform_hlds__deforest__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__deforest__V_6_6, transform_hlds__deforest__V_12_12);
                    }
#line 569 "deforest.m"
                    if (transform_hlds__deforest__succeeded)
#line 569 "deforest.m"
                      {
#line 3073 "transform_hlds.deforest.c"
                        transform_hlds__deforest__TypeInfo_21_21 = (MR_Word) &transform_hlds__deforest_scalar_common_1[2];
#line 3075 "transform_hlds.deforest.c"
                        {
#line 3077 "transform_hlds.deforest.c"
                          transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_21_21, ((MR_Box) (transform_hlds__deforest__V_7_7)), ((MR_Box) (transform_hlds__deforest__V_13_13)));
                        }
#line 569 "deforest.m"
                        if (transform_hlds__deforest__succeeded)
#line 569 "deforest.m"
                          {
#line 3084 "transform_hlds.deforest.c"
                            transform_hlds__deforest__TypeInfo_22_22 = (MR_Word) &transform_hlds__deforest_scalar_common_1[4];
#line 3086 "transform_hlds.deforest.c"
                            {
#line 3088 "transform_hlds.deforest.c"
                              return transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_22_22, ((MR_Box) (transform_hlds__deforest__V_8_8)), ((MR_Box) (transform_hlds__deforest__V_14_14)));
                            }
#line 569 "deforest.m"
                          }
#line 569 "deforest.m"
                      }
#line 569 "deforest.m"
                  }
#line 569 "deforest.m"
              }
#line 569 "deforest.m"
          }
#line 569 "deforest.m"
      }
#line 569 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 569 "deforest.m"
  }
#line 569 "deforest.m"
}

#line 1701 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0(
#line 1701 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 1701 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 1701 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3)
#line 1701 "deforest.m"
{
#line 1701 "deforest.m"
  {
#line 1701 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1701 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar1_4 = transform_hlds__deforest__HeadVar__2_2;
#line 1701 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar2_5 = transform_hlds__deforest__HeadVar__3_3;

#line 1701 "deforest.m"
    {
#line 1701 "deforest.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_3[0], transform_hlds__deforest__HeadVar__1_1, ((MR_Box) (transform_hlds__deforest__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__deforest__Cast_HeadVar2_5)));
#line 1701 "deforest.m"
      return;
    }
#line 1701 "deforest.m"
  }
#line 1701 "deforest.m"
}

#line 1701 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0(
#line 1701 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 1701 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2)
#line 1701 "deforest.m"
{
#line 1701 "deforest.m"
  {
#line 1701 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1701 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar1_3 = transform_hlds__deforest__HeadVar__1_1;
#line 1701 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar2_4 = transform_hlds__deforest__HeadVar__2_2;

#line 1701 "deforest.m"
    {
#line 1701 "deforest.m"
      return transform_hlds__deforest__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) transform_hlds__deforest__Cast_HeadVar1_3, (MR_Word) transform_hlds__deforest__Cast_HeadVar2_4);
    }
#line 1701 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 1701 "deforest.m"
  }
#line 1701 "deforest.m"
}

#line 533 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0(
#line 533 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 533 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 533 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3)
#line 533 "deforest.m"
{
#line 533 "deforest.m"
  {
#line 533 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 533 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar1_4 = transform_hlds__deforest__HeadVar__2_2;
#line 533 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar2_5 = transform_hlds__deforest__HeadVar__3_3;

#line 533 "deforest.m"
    {
#line 533 "deforest.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[6], transform_hlds__deforest__HeadVar__1_1, ((MR_Box) (transform_hlds__deforest__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__deforest__Cast_HeadVar2_5)));
#line 533 "deforest.m"
      return;
    }
#line 533 "deforest.m"
  }
#line 533 "deforest.m"
}

#line 533 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0(
#line 533 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 533 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2)
#line 533 "deforest.m"
{
#line 533 "deforest.m"
  {
#line 533 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 533 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar1_3 = transform_hlds__deforest__HeadVar__1_1;
#line 533 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar2_4 = transform_hlds__deforest__HeadVar__2_2;

#line 533 "deforest.m"
    {
#line 533 "deforest.m"
      return transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[6], ((MR_Box) (transform_hlds__deforest__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__deforest__Cast_HeadVar2_4)));
    }
#line 533 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 533 "deforest.m"
  }
#line 533 "deforest.m"
}

#line 2137 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_1_p_0(
#line 2137 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1)
#line 2137 "deforest.m"
{
#line 2139 "deforest.m"
  {
#line 2139 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 2139 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 2139 "deforest.m"
    MR_Word transform_hlds__deforest__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));

#line 2141 "deforest.m"
    {
#line 2141 "deforest.m"
      MR_Word transform_hlds__deforest__V_6_6;

#line 2141 "deforest.m"
      {
#line 2141 "deforest.m"
        transform_hlds__deforest__V_6_6 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__deforest__GoalExpr_2);
      }
#line 2141 "deforest.m"
      transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_6_6 == (MR_Integer) 1);
#line 2141 "deforest.m"
    }
#line 2142 "deforest.m"
    if (!(transform_hlds__deforest__succeeded))
#line 2143 "deforest.m"
      {
#line 2143 "deforest.m"
        MR_Word transform_hlds__deforest__Goal1_4;
#line 2143 "deforest.m"
        MR_Word transform_hlds__deforest__GoalList1_5;

#line 2143 "deforest.m"
        transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_2)) == (MR_mktag((MR_Integer) 0)));
#line 2143 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2143 "deforest.m"
          {
#line 2143 "deforest.m"
            transform_hlds__deforest__Goal1_4 = (MR_Word) MR_body(((MR_Word) transform_hlds__deforest__GoalExpr_2), (MR_Integer) 0);
#line 2145 "deforest.m"
            {
#line 2145 "deforest.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__deforest__Goal1_4, &transform_hlds__deforest__GoalList1_5);
            }
#line 2146 "deforest.m"
            {
#line 2146 "deforest.m"
              return transform_hlds__deforest__succeeded = transform_hlds__deforest__is_simple_goal_list_1_p_0(transform_hlds__deforest__GoalList1_5);
            }
#line 2143 "deforest.m"
          }
#line 2143 "deforest.m"
      }
#line 2139 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 2139 "deforest.m"
  }
#line 2137 "deforest.m"
}

#line 2130 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_list_1_p_0(
#line 2130 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1)
#line 2130 "deforest.m"
{
#line 2132 "deforest.m"
  while (MR_TRUE)
#line 2132 "deforest.m"
    {
#line 2132 "deforest.m"
      /* tailcall optimized into a loop */
#line 2132 "deforest.m"
      {
#line 2132 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;

#line 2132 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2132 "deforest.m"
          transform_hlds__deforest__succeeded = MR_TRUE;
#line 2132 "deforest.m"
        else
#line 2133 "deforest.m"
          {
#line 2133 "deforest.m"
            MR_Word transform_hlds__deforest__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 2133 "deforest.m"
            MR_Word transform_hlds__deforest__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));

#line 2134 "deforest.m"
            {
#line 2134 "deforest.m"
              transform_hlds__deforest__succeeded = transform_hlds__deforest__is_simple_goal_1_p_0(transform_hlds__deforest__Goal_2);
            }
#line 2133 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 2135 "deforest.m"
              {
#line 2135 "deforest.m"
                /* direct tailcall eliminated */
#line 2135 "deforest.m"
                {
#line 2135 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals_3;

#line 2135 "deforest.m"
                  transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 2135 "deforest.m"
                }
#line 2135 "deforest.m"
                continue;
#line 2135 "deforest.m"
              }
#line 2133 "deforest.m"
          }
#line 2132 "deforest.m"
        return transform_hlds__deforest__succeeded;
#line 2132 "deforest.m"
      }
#line 2132 "deforest.m"
      break;
#line 2132 "deforest.m"
    }
#line 2130 "deforest.m"
}

#line 1966 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__unfold_call_10_p_0(
#line 1966 "deforest.m"
  MR_Word transform_hlds__deforest__CheckImprovement_11,
#line 1966 "deforest.m"
  MR_Word transform_hlds__deforest__CheckVars_12,
#line 1966 "deforest.m"
  MR_Word transform_hlds__deforest__PredId_13,
#line 1966 "deforest.m"
  MR_Integer transform_hlds__deforest__ProcId_14,
#line 1966 "deforest.m"
  MR_Word transform_hlds__deforest__Args_15,
#line 1966 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_16,
#line 1966 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_17,
#line 1966 "deforest.m"
  MR_Word * transform_hlds__deforest__Optimized_18,
#line 1966 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79,
#line 1966 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_80)
#line 1966 "deforest.m"
{
#line 1971 "deforest.m"
  {
#line 1971 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1971 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_132_132;
#line 1971 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_20;
#line 1971 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_21;
#line 1971 "deforest.m"
    MR_Integer transform_hlds__deforest__VarsOpt_22;
#line 1971 "deforest.m"
    MR_Word transform_hlds__deforest__ProcInfo0_23;
#line 1971 "deforest.m"
    MR_Word transform_hlds__deforest__VarSet0_24;
#line 1971 "deforest.m"
    MR_Word transform_hlds__deforest__Vars_25;
#line 1971 "deforest.m"
    MR_Integer transform_hlds__deforest__NumVars_26;
#line 1971 "deforest.m"
    MR_Word transform_hlds__deforest__DebugPD_27;

#line 1972 "deforest.m"
    {
#line 1972 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__ModuleInfo_20);
    }
#line 1973 "deforest.m"
    {
#line 1973 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_20, &transform_hlds__deforest__Globals_21);
    }
#line 1974 "deforest.m"
    {
#line 1974 "deforest.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_21, (MR_Integer) 391, &transform_hlds__deforest__VarsOpt_22);
    }
#line 1975 "deforest.m"
    {
#line 1975 "deforest.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__ProcInfo0_23);
    }
#line 1976 "deforest.m"
    {
#line 1976 "deforest.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__VarSet0_24);
    }
#line 3443 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1977 "deforest.m"
    {
#line 1977 "deforest.m"
      mercury__varset__vars_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__VarSet0_24, &transform_hlds__deforest__Vars_25);
    }
#line 1978 "deforest.m"
    {
#line 1978 "deforest.m"
      mercury__list__length_2_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[1], transform_hlds__deforest__Vars_25, &transform_hlds__deforest__NumVars_26);
    }
#line 1979 "deforest.m"
    {
#line 1979 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_21, (MR_Integer) 71, &transform_hlds__deforest__DebugPD_27);
    }
#line 1983 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__CheckVars_12 == (MR_Integer) 0);
#line 1984 "deforest.m"
    if (!(transform_hlds__deforest__succeeded))
#line 1984 "deforest.m"
      {
#line 1985 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__VarsOpt_22 == (MR_Integer) -1);
#line 1984 "deforest.m"
        if (!(transform_hlds__deforest__succeeded))
#line 1988 "deforest.m"
          transform_hlds__deforest__succeeded = (transform_hlds__deforest__NumVars_26 < transform_hlds__deforest__VarsOpt_22);
#line 1984 "deforest.m"
      }
#line 2119 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 1991 "deforest.m"
      {
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__PredInfo0_29;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__CalledPredInfo_30;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__CalledProcInfo_31;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__TypeVarSet0_32;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__UnivQVars_33;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__VarTypes0_34;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__RttiVarMaps0_35;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__VarSet_36;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__VarTypes_37;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__TypeVarSet_38;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__RttiVarMaps_39;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__Goal1_40;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__PredInfo_41;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__CalledHasParallelConj_42;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo1_43;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo2_44;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo3_45;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo_46;
#line 1991 "deforest.m"
        MR_Integer transform_hlds__deforest__OriginalCost_47;
#line 1991 "deforest.m"
        MR_Integer transform_hlds__deforest__CostDelta0_48;
#line 1991 "deforest.m"
        MR_Integer transform_hlds__deforest__SizeDelta0_49;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__Changed0_50;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo1_52;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__NonLocals1_53;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__NonLocals_54;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__Goal2_55;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__ArgLives_57;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__LiveVars0_58;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__LiveVars1_59;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__LiveVars_60;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__Goal3_61;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__Errors_62;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__Optimized0_63;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__SimplifyTasks_66;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__Goal4_67;
#line 1991 "deforest.m"
        MR_Integer transform_hlds__deforest__CostDelta1_68;
#line 1991 "deforest.m"
        MR_Integer transform_hlds__deforest__CostDelta_69;
#line 1991 "deforest.m"
        MR_Integer transform_hlds__deforest__GoalSize_70;
#line 1991 "deforest.m"
        MR_Integer transform_hlds__deforest__SizeDelta_71;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_91_91;
#line 1991 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 1991 "deforest.m"
        MR_Integer transform_hlds__deforest__V_98_98;
#line 2026 "deforest.m"
        MR_Word transform_hlds__deforest__V_51_51;
#line 2066 "deforest.m"
        MR_Integer transform_hlds__deforest__Factor_72;

#line 1991 "deforest.m"
        {
#line 1991 "deforest.m"
          transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__PredInfo0_29);
        }
#line 1992 "deforest.m"
        {
#line 1992 "deforest.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__deforest__ModuleInfo_20, transform_hlds__deforest__PredId_13, transform_hlds__deforest__ProcId_14, &transform_hlds__deforest__CalledPredInfo_30, &transform_hlds__deforest__CalledProcInfo_31);
        }
#line 1994 "deforest.m"
        {
#line 1994 "deforest.m"
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__deforest__PredInfo0_29, &transform_hlds__deforest__TypeVarSet0_32);
        }
#line 1995 "deforest.m"
        {
#line 1995 "deforest.m"
          hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(transform_hlds__deforest__PredInfo0_29, &transform_hlds__deforest__UnivQVars_33);
        }
#line 1996 "deforest.m"
        {
#line 1996 "deforest.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__VarTypes0_34);
        }
#line 1997 "deforest.m"
        {
#line 1997 "deforest.m"
          hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__RttiVarMaps0_35);
        }
#line 1998 "deforest.m"
        {
#line 1998 "deforest.m"
          transform_hlds__inlining__do_inline_call_13_p_0(transform_hlds__deforest__UnivQVars_33, transform_hlds__deforest__Args_15, transform_hlds__deforest__CalledPredInfo_30, transform_hlds__deforest__CalledProcInfo_31, transform_hlds__deforest__VarSet0_24, &transform_hlds__deforest__VarSet_36, transform_hlds__deforest__VarTypes0_34, &transform_hlds__deforest__VarTypes_37, transform_hlds__deforest__TypeVarSet0_32, &transform_hlds__deforest__TypeVarSet_38, transform_hlds__deforest__RttiVarMaps0_35, &transform_hlds__deforest__RttiVarMaps_39, &transform_hlds__deforest__Goal1_40);
        }
#line 2001 "deforest.m"
        {
#line 2001 "deforest.m"
          hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__deforest__TypeVarSet_38, transform_hlds__deforest__PredInfo0_29, &transform_hlds__deforest__PredInfo_41);
        }
#line 2002 "deforest.m"
        {
#line 2002 "deforest.m"
          hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__deforest__CalledProcInfo_31, &transform_hlds__deforest__CalledHasParallelConj_42);
        }
#line 2004 "deforest.m"
        {
#line 2004 "deforest.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__deforest__VarSet_36, transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__ProcInfo1_43);
        }
#line 2005 "deforest.m"
        {
#line 2005 "deforest.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__deforest__VarTypes_37, transform_hlds__deforest__ProcInfo1_43, &transform_hlds__deforest__ProcInfo2_44);
        }
#line 2006 "deforest.m"
        {
#line 2006 "deforest.m"
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__deforest__RttiVarMaps_39, transform_hlds__deforest__ProcInfo2_44, &transform_hlds__deforest__ProcInfo3_45);
        }
#line 2011 "deforest.m"
        if ((transform_hlds__deforest__CalledHasParallelConj_42 == (MR_Integer) 1))
#line 2014 "deforest.m"
          transform_hlds__deforest__ProcInfo_46 = transform_hlds__deforest__ProcInfo3_45;
#line 2011 "deforest.m"
        else
#line 2008 "deforest.m"
          {
#line 2009 "deforest.m"
            {
#line 2009 "deforest.m"
              hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, transform_hlds__deforest__ProcInfo3_45, &transform_hlds__deforest__ProcInfo_46);
            }
#line 2008 "deforest.m"
          }
#line 2017 "deforest.m"
        {
#line 2017 "deforest.m"
          transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(transform_hlds__deforest__PredInfo_41, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84);
        }
#line 2018 "deforest.m"
        {
#line 2018 "deforest.m"
          transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__deforest__ProcInfo_46, transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85);
        }
#line 2020 "deforest.m"
        {
#line 2020 "deforest.m"
          transform_hlds__pd_cost__goal_cost_2_p_0(transform_hlds__deforest__Goal1_40, &transform_hlds__deforest__OriginalCost_47);
        }
#line 2021 "deforest.m"
        {
#line 2021 "deforest.m"
          transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__CostDelta0_48);
        }
#line 2022 "deforest.m"
        {
#line 2022 "deforest.m"
          transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__SizeDelta0_49);
        }
#line 2023 "deforest.m"
        {
#line 2023 "deforest.m"
          transform_hlds__pd_info__pd_info_get_changed_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__Changed0_50);
        }
#line 2026 "deforest.m"
        transform_hlds__deforest__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_40, (MR_Integer) 0)));
#line 2026 "deforest.m"
        transform_hlds__deforest__GoalInfo1_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_40, (MR_Integer) 1)));
#line 2027 "deforest.m"
        {
#line 2027 "deforest.m"
          transform_hlds__deforest__NonLocals1_53 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__GoalInfo1_52);
        }
#line 2028 "deforest.m"
        {
#line 2028 "deforest.m"
          parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__Args_15, &transform_hlds__deforest__NonLocals_54);
        }
#line 2029 "deforest.m"
        {
#line 2029 "deforest.m"
          transform_hlds__deforest__succeeded = parse_tree__set_of_var__equal_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__NonLocals1_53, transform_hlds__deforest__NonLocals_54);
        }
#line 2031 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2030 "deforest.m"
          {
#line 2030 "deforest.m"
            transform_hlds__deforest__Goal2_55 = transform_hlds__deforest__Goal1_40;
#line 2030 "deforest.m"
            transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
#line 2030 "deforest.m"
          }
#line 2031 "deforest.m"
        else
#line 2032 "deforest.m"
          {
#line 2032 "deforest.m"
            transform_hlds__pd_util__pd_requantify_goal_5_p_0(transform_hlds__deforest__NonLocals_54, transform_hlds__deforest__Goal1_40, &transform_hlds__deforest__Goal2_55, transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86);
          }
#line 2037 "deforest.m"
        {
#line 2037 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "Running unique modes\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 2039 "deforest.m"
        {
#line 2039 "deforest.m"
          hlds__hlds_pred__proc_info_arglives_3_p_0(transform_hlds__deforest__CalledProcInfo_31, transform_hlds__deforest__ModuleInfo_20, &transform_hlds__deforest__ArgLives_57);
        }
#line 2040 "deforest.m"
        {
#line 2040 "deforest.m"
          check_hlds__modecheck_util__get_live_vars_3_p_0(transform_hlds__deforest__Args_15, transform_hlds__deforest__ArgLives_57, &transform_hlds__deforest__LiveVars0_58);
        }
#line 2041 "deforest.m"
        {
#line 2041 "deforest.m"
          parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__LiveVars0_58, &transform_hlds__deforest__LiveVars1_59);
        }
#line 2042 "deforest.m"
        {
#line 2042 "deforest.m"
          parse_tree__set_of_var__intersect_3_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__NonLocals_54, transform_hlds__deforest__LiveVars1_59, &transform_hlds__deforest__LiveVars_60);
        }
#line 2043 "deforest.m"
        {
#line 2043 "deforest.m"
          transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0(transform_hlds__deforest__LiveVars_60, transform_hlds__deforest__Goal2_55, &transform_hlds__deforest__Goal3_61, &transform_hlds__deforest__Errors_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_91_91);
        }
#line 2049 "deforest.m"
        if ((transform_hlds__deforest__Errors_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2048 "deforest.m"
          transform_hlds__deforest__Optimized0_63 = (MR_Integer) 1;
#line 2049 "deforest.m"
        else
#line 2053 "deforest.m"
          transform_hlds__deforest__Optimized0_63 = (MR_Integer) 0;
#line 2057 "deforest.m"
        {
#line 2057 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "Running simplify\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 2059 "deforest.m"
        {
#line 2059 "deforest.m"
          check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, transform_hlds__deforest__Globals_21, &transform_hlds__deforest__SimplifyTasks_66);
        }
#line 2060 "deforest.m"
        {
#line 2060 "deforest.m"
          transform_hlds__pd_util__pd_simplify_goal_5_p_0(transform_hlds__deforest__SimplifyTasks_66, transform_hlds__deforest__Goal3_61, &transform_hlds__deforest__Goal4_67, transform_hlds__deforest__STATE_VARIABLE_PDInfo_91_91, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
        }
#line 2062 "deforest.m"
        {
#line 2062 "deforest.m"
          transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__CostDelta1_68);
        }
#line 2063 "deforest.m"
        transform_hlds__deforest__CostDelta_69 = (transform_hlds__deforest__CostDelta1_68 - transform_hlds__deforest__CostDelta0_48);
#line 2064 "deforest.m"
        {
#line 2064 "deforest.m"
          hlds__goal_util__goal_size_2_p_0(transform_hlds__deforest__Goal4_67, &transform_hlds__deforest__GoalSize_70);
        }
#line 2065 "deforest.m"
        {
#line 2065 "deforest.m"
          transform_hlds__deforest__V_98_98 = transform_hlds__pd_cost__cost_of_call_0_f_0();
        }
#line 2065 "deforest.m"
        transform_hlds__deforest__SizeDelta_71 = (transform_hlds__deforest__GoalSize_70 - transform_hlds__deforest__V_98_98);
#line 2066 "deforest.m"
        {
#line 2066 "deforest.m"
          libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_21, (MR_Integer) 390, &transform_hlds__deforest__Factor_72);
        }
#line 2068 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__Optimized0_63 == (MR_Integer) 1);
#line 2068 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2071 "deforest.m"
          {
#line 2071 "deforest.m"
            if ((transform_hlds__deforest__CheckImprovement_11 == (MR_Integer) 0))
#line 2070 "deforest.m"
              transform_hlds__deforest__succeeded = MR_TRUE;
#line 2071 "deforest.m"
            else
#line 2076 "deforest.m"
              {
#line 2074 "deforest.m"
                {
#line 2074 "deforest.m"
                  transform_hlds__deforest__succeeded = transform_hlds__deforest__is_simple_goal_1_p_0(transform_hlds__deforest__Goal3_61);
                }
#line 2076 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 2075 "deforest.m"
                  transform_hlds__deforest__succeeded = MR_TRUE;
#line 2076 "deforest.m"
                else
#line 2077 "deforest.m"
                  {
#line 2077 "deforest.m"
                    transform_hlds__deforest__succeeded = transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(transform_hlds__deforest__GoalSize_70, transform_hlds__deforest__OriginalCost_47, transform_hlds__deforest__CostDelta_69);
                  }
#line 2076 "deforest.m"
              }
#line 2071 "deforest.m"
          }
#line 2104 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2082 "deforest.m"
          {
#line 2082 "deforest.m"
            MR_Word transform_hlds__deforest__GoalInfo0_74;
#line 2082 "deforest.m"
            MR_Word transform_hlds__deforest__Det0_75;
#line 2082 "deforest.m"
            MR_Word transform_hlds__deforest__GoalInfo_77;
#line 2082 "deforest.m"
            MR_Word transform_hlds__deforest__Det_78;
#line 2082 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_108_108;
#line 2082 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110;
#line 2083 "deforest.m"
            MR_Word transform_hlds__deforest__V_102_102;
#line 2083 "deforest.m"
            MR_Word transform_hlds__deforest__V_104_104;
#line 2083 "deforest.m"
            MR_Word transform_hlds__deforest__V_105_105;
#line 2083 "deforest.m"
            MR_Word transform_hlds__deforest__V_106_106;
#line 2089 "deforest.m"
            MR_Word transform_hlds__deforest__V_73_73;
#line 2091 "deforest.m"
            MR_Word transform_hlds__deforest__V_76_76;

#line 2082 "deforest.m"
            *transform_hlds__deforest__Goal_17 = transform_hlds__deforest__Goal4_67;
#line 2085 "deforest.m"
            {
#line 2085 "deforest.m"
              transform_hlds__deforest__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2085 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_104_104, 0) = ((MR_Box) (transform_hlds__deforest__CostDelta_69));
#line 2085 "deforest.m"
            }
#line 2085 "deforest.m"
            {
#line 2085 "deforest.m"
              transform_hlds__deforest__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2085 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_106_106, 0) = ((MR_Box) (transform_hlds__deforest__SizeDelta_71));
#line 2085 "deforest.m"
            }
#line 2085 "deforest.m"
            {
#line 2085 "deforest.m"
              transform_hlds__deforest__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2085 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_105_105, 0) = ((MR_Box) (transform_hlds__deforest__V_106_106));
#line 2085 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2085 "deforest.m"
            }
#line 2085 "deforest.m"
            {
#line 2085 "deforest.m"
              transform_hlds__deforest__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2085 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_102_102, 0) = ((MR_Box) (transform_hlds__deforest__V_104_104));
#line 2085 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_102_102, 1) = ((MR_Box) (transform_hlds__deforest__V_105_105));
#line 2085 "deforest.m"
            }
#line 2084 "deforest.m"
            {
#line 2084 "deforest.m"
              transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "inlined: cost(%i) size(%i)\n", transform_hlds__deforest__V_102_102);
            }
#line 2087 "deforest.m"
            {
#line 2087 "deforest.m"
              transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(transform_hlds__deforest__SizeDelta_71, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_108_108);
            }
#line 2088 "deforest.m"
            {
#line 2088 "deforest.m"
              transform_hlds__pd_info__pd_info_set_changed_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_108_108, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110);
            }
#line 2089 "deforest.m"
            transform_hlds__deforest__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_16, (MR_Integer) 0)));
#line 2089 "deforest.m"
            transform_hlds__deforest__GoalInfo0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_16, (MR_Integer) 1)));
#line 2090 "deforest.m"
            {
#line 2090 "deforest.m"
              transform_hlds__deforest__Det0_75 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__deforest__GoalInfo0_74);
            }
#line 2091 "deforest.m"
            transform_hlds__deforest__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__deforest__Goal_17, (MR_Integer) 0)));
#line 2091 "deforest.m"
            transform_hlds__deforest__GoalInfo_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__deforest__Goal_17, (MR_Integer) 1)));
#line 2092 "deforest.m"
            {
#line 2092 "deforest.m"
              transform_hlds__deforest__Det_78 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__deforest__GoalInfo_77);
            }
#line 2097 "deforest.m"
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__Det_78 == transform_hlds__deforest__Det0_75);
#line 2099 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 2097 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_80 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110;
#line 2099 "deforest.m"
            else
#line 2100 "deforest.m"
              {
#line 2100 "deforest.m"
                {
#line 2100 "deforest.m"
                  transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110, transform_hlds__deforest__STATE_VARIABLE_PDInfo_80);
                }
#line 2100 "deforest.m"
              }
#line 2103 "deforest.m"
            *transform_hlds__deforest__Optimized_18 = (MR_Integer) 1;
#line 2082 "deforest.m"
          }
#line 2104 "deforest.m"
        else
#line 2110 "deforest.m"
          {
#line 2110 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123;
#line 2110 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124;
#line 2110 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125;
#line 2110 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126;
#line 2105 "deforest.m"
            MR_Word transform_hlds__deforest__V_115_115;
#line 2105 "deforest.m"
            MR_Word transform_hlds__deforest__V_119_119;
#line 2105 "deforest.m"
            MR_Word transform_hlds__deforest__V_120_120;
#line 2105 "deforest.m"
            MR_Word transform_hlds__deforest__V_121_121;

#line 2109 "deforest.m"
            {
#line 2109 "deforest.m"
              transform_hlds__deforest__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2109 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_119_119, 0) = ((MR_Box) (transform_hlds__deforest__CostDelta_69));
#line 2109 "deforest.m"
            }
#line 2109 "deforest.m"
            {
#line 2109 "deforest.m"
              transform_hlds__deforest__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2109 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_121_121, 0) = ((MR_Box) (transform_hlds__deforest__SizeDelta_71));
#line 2109 "deforest.m"
            }
#line 2109 "deforest.m"
            {
#line 2109 "deforest.m"
              transform_hlds__deforest__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2109 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_120_120, 0) = ((MR_Box) (transform_hlds__deforest__V_121_121));
#line 2109 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2109 "deforest.m"
            }
#line 2109 "deforest.m"
            {
#line 2109 "deforest.m"
              transform_hlds__deforest__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2109 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_115_115, 0) = ((MR_Box) (transform_hlds__deforest__V_119_119));
#line 2109 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_115_115, 1) = ((MR_Box) (transform_hlds__deforest__V_120_120));
#line 2109 "deforest.m"
            }
#line 2106 "deforest.m"
            {
#line 2106 "deforest.m"
              transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "not enough improvement - not inlining: cost(%i) size(%i)\n", transform_hlds__deforest__V_115_115);
            }
#line 2111 "deforest.m"
            {
#line 2111 "deforest.m"
              transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(transform_hlds__deforest__PredInfo0_29, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123);
            }
#line 2112 "deforest.m"
            {
#line 2112 "deforest.m"
              transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__deforest__ProcInfo0_23, transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124);
            }
#line 2113 "deforest.m"
            {
#line 2113 "deforest.m"
              transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(transform_hlds__deforest__SizeDelta0_49, transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125);
            }
#line 2114 "deforest.m"
            {
#line 2114 "deforest.m"
              transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(transform_hlds__deforest__CostDelta0_48, transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126);
            }
#line 2115 "deforest.m"
            {
#line 2115 "deforest.m"
              transform_hlds__pd_info__pd_info_set_changed_3_p_0(transform_hlds__deforest__Changed0_50, transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126, transform_hlds__deforest__STATE_VARIABLE_PDInfo_80);
            }
#line 2116 "deforest.m"
            *transform_hlds__deforest__Goal_17 = transform_hlds__deforest__Goal0_16;
#line 2117 "deforest.m"
            *transform_hlds__deforest__Optimized_18 = (MR_Integer) 0;
#line 2110 "deforest.m"
          }
#line 1991 "deforest.m"
      }
#line 2119 "deforest.m"
    else
#line 2123 "deforest.m"
      {
#line 2121 "deforest.m"
        {
#line 2121 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "too many variables - not inlining\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 2124 "deforest.m"
        *transform_hlds__deforest__Goal_17 = transform_hlds__deforest__Goal0_16;
#line 2125 "deforest.m"
        *transform_hlds__deforest__Optimized_18 = (MR_Integer) 0;
#line 2125 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_80 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79;
#line 2123 "deforest.m"
      }
#line 1971 "deforest.m"
  }
#line 1966 "deforest.m"
}

#line 1900 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_1(
#line 1900 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1900 "deforest.m"
{
#line 1900 "deforest.m"
  {
#line 1900 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1900 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0, 1);
#line 1900 "deforest.m"
  }
#line 1900 "deforest.m"
}

#line 1902 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_3(
#line 1902 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1902 "deforest.m"
{
#line 1902 "deforest.m"
  {
#line 1902 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1902 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_36 = ((MR_Integer) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_36);
#line 1902 "deforest.m"
    {
#line 1902 "deforest.m"
      transform_hlds__deforest__deforest_call_9_p_0_2(transform_hlds__deforest__env_ptr);
#line 1902 "deforest.m"
      return;
    }
#line 1902 "deforest.m"
  }
#line 1902 "deforest.m"
}

#line 1900 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_2(
#line 1900 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1900 "deforest.m"
{
#line 1900 "deforest.m"
  {
#line 1900 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1900 "deforest.m"
    {
#line 1903 "deforest.m"
      MR_Box transform_hlds__deforest__conv2_Arg_37;
#line 1905 "deforest.m"
      MR_Word transform_hlds__deforest__V_39_39;
#line 1918 "deforest.m"
      MR_Word transform_hlds__deforest__V_41_41;

#line 1903 "deforest.m"
      {
#line 1903 "deforest.m"
        mercury__list__det_index1_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_86_86, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_36, &transform_hlds__deforest__conv2_Arg_37);
      }
#line 1903 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_37 = ((MR_Word) transform_hlds__deforest__conv2_Arg_37);
#line 1904 "deforest.m"
      {
#line 1904 "deforest.m"
        hlds__instmap__instmap_lookup_var_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_37, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_38);
      }
#line 1905 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1905 "deforest.m"
      {
#line 1905 "deforest.m"
        MR_Word base;
#line 1905 "deforest.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1905 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_54_54 = base;
#line 1905 "deforest.m"
        MR_hl_field(MR_mktag(1), base, 0) = NULL;
#line 1905 "deforest.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_55_55));
#line 1905 "deforest.m"
      }
#line 1905 "deforest.m"
      {
#line 1905 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = check_hlds__inst_match__inst_is_bound_to_functors_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_38, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_90_90);
      }
#line 1900 "deforest.m"
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1900 "deforest.m"
        {
#line 4166 "transform_hlds.deforest.c"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_91_91 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 1905 "deforest.m"
          {
#line 1905 "deforest.m"
            (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__deforest____Unify____list__list_1_1((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_91_91, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_54_54, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_90_90);
          }
#line 1900 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1900 "deforest.m"
            {
#line 1913 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__InlinePromisedPure_40 = (MR_Integer) 0;
#line 1914 "deforest.m"
              {
#line 1914 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__inlining__can_inline_proc_6_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__InlinePromisedPure_40, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CallerMarkers_30, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19);
              }
#line 1900 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1900 "deforest.m"
                {
#line 1918 "deforest.m"
                  {
#line 1918 "deforest.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, &transform_hlds__deforest__V_41_41, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_42);
                  }
#line 1920 "deforest.m"
                  {
#line 1920 "deforest.m"
                    hlds__hlds_pred__proc_info_get_goal_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_42, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_43);
                  }
#line 1921 "deforest.m"
                  {
#line 1921 "deforest.m"
                    hlds__goal_util__goal_size_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_43, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_44);
                  }
#line 1922 "deforest.m"
                  (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29 == (MR_Integer) -1);
#line 1923 "deforest.m"
                  if (!((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded))
#line 1923 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_44 < (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29);
#line 1923 "deforest.m"
                  if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1923 "deforest.m"
                    {
#line 1923 "deforest.m"
                      transform_hlds__deforest__deforest_call_9_p_0_1(transform_hlds__deforest__env_ptr);
#line 1923 "deforest.m"
                      return;
                    }
#line 1900 "deforest.m"
                }
#line 1900 "deforest.m"
            }
#line 1900 "deforest.m"
        }
#line 1900 "deforest.m"
    }
#line 1900 "deforest.m"
  }
#line 1900 "deforest.m"
}

#line 1900 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_4(
#line 1900 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1900 "deforest.m"
{
#line 1900 "deforest.m"
  {
#line 1900 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1900 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0) == 0)
#line 1900 "deforest.m"
      {
#line 1900 "deforest.m"
        {
#line 1900 "deforest.m"
          MR_Word transform_hlds__deforest__TypeCtorInfo_89_89;
#line 1900 "deforest.m"
          MR_Word transform_hlds__deforest__ProcArgInfo_32;
#line 1900 "deforest.m"
          MR_Word transform_hlds__deforest__LeftArgs_34;
#line 1900 "deforest.m"
          MR_Word transform_hlds__deforest__V_53_53;
#line 1900 "deforest.m"
          MR_Box transform_hlds__deforest__conv0_ProcArgInfo_32;
#line 1901 "deforest.m"
          MR_Word transform_hlds__deforest__V_33_33;
#line 1901 "deforest.m"
          MR_Word transform_hlds__deforest__V_35_35;

#line 1900 "deforest.m"
          {
#line 1900 "deforest.m"
            transform_hlds__deforest__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1900 "deforest.m"
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_53_53, 0) = ((MR_Box) ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10));
#line 1900 "deforest.m"
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_53_53, 1) = ((MR_Box) ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11));
#line 1900 "deforest.m"
          }
#line 1900 "deforest.m"
          {
#line 1900 "deforest.m"
            (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[0], (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18, ((MR_Box) (transform_hlds__deforest__V_53_53)), &transform_hlds__deforest__conv0_ProcArgInfo_32);
          }
#line 1900 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1900 "deforest.m"
            {
#line 1900 "deforest.m"
              transform_hlds__deforest__ProcArgInfo_32 = ((MR_Word) transform_hlds__deforest__conv0_ProcArgInfo_32);
#line 1900 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_TRUE;
#line 1900 "deforest.m"
            }
#line 1900 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1900 "deforest.m"
            {
#line 1901 "deforest.m"
              transform_hlds__deforest__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__ProcArgInfo_32, (MR_Integer) 0)));
#line 1901 "deforest.m"
              transform_hlds__deforest__LeftArgs_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__ProcArgInfo_32, (MR_Integer) 1)));
#line 1901 "deforest.m"
              transform_hlds__deforest__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__ProcArgInfo_32, (MR_Integer) 2)));
#line 4299 "transform_hlds.deforest.c"
              transform_hlds__deforest__TypeCtorInfo_89_89 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1902 "deforest.m"
              {
#line 1902 "deforest.m"
                mercury__set__member_2_p_1(transform_hlds__deforest__TypeCtorInfo_89_89, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_36, transform_hlds__deforest__LeftArgs_34, transform_hlds__deforest__deforest_call_9_p_0_3, transform_hlds__deforest__env_ptr);
              }
#line 1900 "deforest.m"
            }
#line 1900 "deforest.m"
        }
#line 1900 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_FALSE;
#line 1900 "deforest.m"
      }
#line 1900 "deforest.m"
    else
#line 1900 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_TRUE;
#line 1900 "deforest.m"
  }
#line 1900 "deforest.m"
}

#line 1876 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0(
#line 1876 "deforest.m"
  MR_Word transform_hlds__deforest__PredId_10,
#line 1876 "deforest.m"
  MR_Integer transform_hlds__deforest__ProcId_11,
#line 1876 "deforest.m"
  MR_Word transform_hlds__deforest__Args_12,
#line 1876 "deforest.m"
  MR_Word transform_hlds__deforest__SymName_13,
#line 1876 "deforest.m"
  MR_Word transform_hlds__deforest__BuiltinState_14,
#line 1876 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_15,
#line 1876 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_16,
#line 1876 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49,
#line 1876 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_50)
#line 1876 "deforest.m"
{
#line 1876 "deforest.m"
  {
#line 1876 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s transform_hlds__deforest__env;

#line 1876 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10 = transform_hlds__deforest__PredId_10;
#line 1876 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11 = transform_hlds__deforest__ProcId_11;
#line 1876 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12 = transform_hlds__deforest__Args_12;
#line 1876 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14 = transform_hlds__deforest__BuiltinState_14;
#line 1881 "deforest.m"
    {
#line 1881 "deforest.m"
      MR_String transform_hlds__deforest__Name_21;
#line 1881 "deforest.m"
      MR_Integer transform_hlds__deforest__Arity_22;
#line 1881 "deforest.m"
      MR_Word transform_hlds__deforest__GoalInfo0_24;
#line 1881 "deforest.m"
      MR_Word transform_hlds__deforest__Context_25;
#line 1881 "deforest.m"
      MR_Word transform_hlds__deforest__LocalTermInfo0_26;
#line 1881 "deforest.m"
      MR_Word transform_hlds__deforest__PredInfo_27;
#line 1881 "deforest.m"
      MR_Word transform_hlds__deforest__Globals_28;
#line 1881 "deforest.m"
      MR_Word transform_hlds__deforest__DebugPD_31;
#line 1887 "deforest.m"
      MR_Word transform_hlds__deforest__GoalExpr0_23;

#line 1882 "deforest.m"
      {
#line 1882 "deforest.m"
        transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18);
      }
#line 1883 "deforest.m"
      {
#line 1883 "deforest.m"
        transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19);
      }
#line 1884 "deforest.m"
      {
#line 1884 "deforest.m"
        transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20);
      }
#line 1885 "deforest.m"
      {
#line 1885 "deforest.m"
        transform_hlds__deforest__Name_21 = mdbcomp__sym_name__unqualify_name_1_f_0(transform_hlds__deforest__SymName_13);
      }
#line 4400 "transform_hlds.deforest.c"
      (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_86_86 = (MR_Word) &transform_hlds__deforest_scalar_common_1[1];
#line 1886 "deforest.m"
      {
#line 1886 "deforest.m"
        mercury__list__length_2_p_0((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_86_86, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, &transform_hlds__deforest__Arity_22);
      }
#line 1887 "deforest.m"
      transform_hlds__deforest__GoalExpr0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_15, (MR_Integer) 0)));
#line 1887 "deforest.m"
      transform_hlds__deforest__GoalInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_15, (MR_Integer) 1)));
#line 1888 "deforest.m"
      {
#line 1888 "deforest.m"
        transform_hlds__deforest__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__deforest__GoalInfo0_24);
      }
#line 1890 "deforest.m"
      {
#line 1890 "deforest.m"
        transform_hlds__pd_info__pd_info_get_local_term_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &transform_hlds__deforest__LocalTermInfo0_26);
      }
#line 1892 "deforest.m"
      {
#line 1892 "deforest.m"
        transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &transform_hlds__deforest__PredInfo_27);
      }
#line 1893 "deforest.m"
      {
#line 1893 "deforest.m"
        hlds__hlds_module__module_info_get_globals_2_p_0((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, &transform_hlds__deforest__Globals_28);
      }
#line 1894 "deforest.m"
      {
#line 1894 "deforest.m"
        libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_28, (MR_Integer) 392, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29);
      }
#line 1896 "deforest.m"
      {
#line 1896 "deforest.m"
        hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__deforest__PredInfo_27, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__CallerMarkers_30);
      }
#line 1897 "deforest.m"
      {
#line 1897 "deforest.m"
        libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_28, (MR_Integer) 71, &transform_hlds__deforest__DebugPD_31);
      }
#line 1900 "deforest.m"
      {
#line 1900 "deforest.m"
        transform_hlds__deforest__deforest_call_9_p_0_4(&transform_hlds__deforest__env);
      }
#line 1957 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1930 "deforest.m"
        {
#line 1926 "deforest.m"
          MR_Word transform_hlds__deforest__V_58_58;
#line 1926 "deforest.m"
          MR_Word transform_hlds__deforest__V_60_60;
#line 1926 "deforest.m"
          MR_Word transform_hlds__deforest__V_61_61;
#line 1926 "deforest.m"
          MR_Word transform_hlds__deforest__V_62_62;
#line 1950 "deforest.m"
          MR_Word transform_hlds__deforest__LocalTermInfo_46;

#line 1929 "deforest.m"
          {
#line 1929 "deforest.m"
            transform_hlds__deforest__V_60_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1929 "deforest.m"
            MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_60_60, 0) = ((MR_Box) (transform_hlds__deforest__Name_21));
#line 1929 "deforest.m"
          }
#line 1929 "deforest.m"
          {
#line 1929 "deforest.m"
            transform_hlds__deforest__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1929 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_62_62, 0) = ((MR_Box) (transform_hlds__deforest__Arity_22));
#line 1929 "deforest.m"
          }
#line 1929 "deforest.m"
          {
#line 1929 "deforest.m"
            transform_hlds__deforest__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1929 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_61_61, 0) = ((MR_Box) (transform_hlds__deforest__V_62_62));
#line 1929 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1929 "deforest.m"
          }
#line 1929 "deforest.m"
          {
#line 1929 "deforest.m"
            transform_hlds__deforest__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1929 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_58_58, 0) = ((MR_Box) (transform_hlds__deforest__V_60_60));
#line 1929 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_58_58, 1) = ((MR_Box) (transform_hlds__deforest__V_61_61));
#line 1929 "deforest.m"
          }
#line 1927 "deforest.m"
          {
#line 1927 "deforest.m"
            transform_hlds__pd_debug__pd_debug_message_context_6_p_0(transform_hlds__deforest__DebugPD_31, transform_hlds__deforest__Context_25, (MR_String) "Found extra information for call to %s/%i\n", transform_hlds__deforest__V_58_58);
          }
#line 1932 "deforest.m"
          {
#line 1932 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__pd_term__local_check_5_p_0((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, transform_hlds__deforest__Goal0_15, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20, transform_hlds__deforest__LocalTermInfo0_26, &transform_hlds__deforest__LocalTermInfo_46);
          }
#line 1950 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1938 "deforest.m"
            {
#line 1938 "deforest.m"
              MR_Word transform_hlds__deforest__Goal1_47;
#line 1938 "deforest.m"
              MR_Word transform_hlds__deforest__Optimized_48;
#line 1938 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68;
#line 1938 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71;
#line 1938 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_72_72;

#line 1936 "deforest.m"
              {
#line 1936 "deforest.m"
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_31, (MR_String) "Local termination check succeeded\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 1939 "deforest.m"
              {
#line 1939 "deforest.m"
                transform_hlds__pd_info__pd_info_set_local_term_info_3_p_0(transform_hlds__deforest__LocalTermInfo_46, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68);
              }
#line 1940 "deforest.m"
              {
#line 1940 "deforest.m"
                transform_hlds__deforest__unfold_call_10_p_0((MR_Integer) 1, (MR_Integer) 1, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, transform_hlds__deforest__Goal0_15, &transform_hlds__deforest__Goal1_47, &transform_hlds__deforest__Optimized_48, transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71);
              }
#line 1945 "deforest.m"
              if ((transform_hlds__deforest__Optimized_48 == (MR_Integer) 0))
#line 1946 "deforest.m"
                {
#line 1947 "deforest.m"
                  *transform_hlds__deforest__Goal_16 = transform_hlds__deforest__Goal1_47;
#line 1947 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_PDInfo_72_72 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71;
#line 1946 "deforest.m"
                }
#line 1945 "deforest.m"
              else
#line 1944 "deforest.m"
                {
#line 1944 "deforest.m"
                  transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Goal1_47, transform_hlds__deforest__Goal_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_72_72);
                }
#line 1949 "deforest.m"
              {
#line 1949 "deforest.m"
                transform_hlds__pd_info__pd_info_set_local_term_info_3_p_0(transform_hlds__deforest__LocalTermInfo0_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_72_72, transform_hlds__deforest__STATE_VARIABLE_PDInfo_50);
#line 1949 "deforest.m"
                return;
              }
#line 1938 "deforest.m"
            }
#line 1950 "deforest.m"
          else
#line 1954 "deforest.m"
            {
#line 1952 "deforest.m"
              {
#line 1952 "deforest.m"
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_31, (MR_String) "Local termination check failed\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 1955 "deforest.m"
              *transform_hlds__deforest__Goal_16 = transform_hlds__deforest__Goal0_15;
#line 1955 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_50 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49;
#line 1954 "deforest.m"
            }
#line 1930 "deforest.m"
        }
#line 1957 "deforest.m"
      else
#line 1962 "deforest.m"
        {
#line 1958 "deforest.m"
          MR_Word transform_hlds__deforest__V_80_80;
#line 1958 "deforest.m"
          MR_Word transform_hlds__deforest__V_82_82;
#line 1958 "deforest.m"
          MR_Word transform_hlds__deforest__V_83_83;
#line 1958 "deforest.m"
          MR_Word transform_hlds__deforest__V_84_84;

#line 1961 "deforest.m"
          {
#line 1961 "deforest.m"
            transform_hlds__deforest__V_82_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "deforest.m"
            MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_82_82, 0) = ((MR_Box) (transform_hlds__deforest__Name_21));
#line 1961 "deforest.m"
          }
#line 1961 "deforest.m"
          {
#line 1961 "deforest.m"
            transform_hlds__deforest__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_84_84, 0) = ((MR_Box) (transform_hlds__deforest__Arity_22));
#line 1961 "deforest.m"
          }
#line 1961 "deforest.m"
          {
#line 1961 "deforest.m"
            transform_hlds__deforest__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_83_83, 0) = ((MR_Box) (transform_hlds__deforest__V_84_84));
#line 1961 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1961 "deforest.m"
          }
#line 1961 "deforest.m"
          {
#line 1961 "deforest.m"
            transform_hlds__deforest__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_80_80, 0) = ((MR_Box) (transform_hlds__deforest__V_82_82));
#line 1961 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_80_80, 1) = ((MR_Box) (transform_hlds__deforest__V_83_83));
#line 1961 "deforest.m"
          }
#line 1959 "deforest.m"
          {
#line 1959 "deforest.m"
            transform_hlds__pd_debug__pd_debug_message_context_6_p_0(transform_hlds__deforest__DebugPD_31, transform_hlds__deforest__Context_25, (MR_String) "No extra information for call to %s/%i\n", transform_hlds__deforest__V_80_80);
          }
#line 1963 "deforest.m"
          *transform_hlds__deforest__Goal_16 = transform_hlds__deforest__Goal0_15;
#line 1963 "deforest.m"
          *transform_hlds__deforest__STATE_VARIABLE_PDInfo_50 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49;
#line 1962 "deforest.m"
        }
#line 1881 "deforest.m"
    }
#line 1876 "deforest.m"
  }
#line 1876 "deforest.m"
}

#line 1854 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0_1(
#line 1854 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 1854 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1854 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1854 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 1854 "deforest.m"
{
#line 1854 "deforest.m"
  {
#line 1854 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 1854 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_HeadVar__3_3;

#line 1854 "deforest.m"
    {
#line 1854 "deforest.m"
      transform_hlds__pd_info__pd_info_update_goal_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_HeadVar__3_3);
    }
#line 1854 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__3_3));
#line 1854 "deforest.m"
  }
#line 1854 "deforest.m"
}

#line 1845 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0(
#line 1845 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_10,
#line 1845 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_11,
#line 1845 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend0_12,
#line 1845 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals0_13,
#line 1845 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrBranch_14,
#line 1845 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_15,
#line 1845 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_16,
#line 1845 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30,
#line 1845 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_31)
#line 1845 "deforest.m"
{
#line 1850 "deforest.m"
  {
#line 1850 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1850 "deforest.m"
    MR_Word transform_hlds__deforest__GoalToAppend_19;
#line 1850 "deforest.m"
    MR_Word transform_hlds__deforest__GoalList0_20;
#line 1850 "deforest.m"
    MR_Word transform_hlds__deforest__GoalListToAppend_21;
#line 1850 "deforest.m"
    MR_Word transform_hlds__deforest__Goals_22;
#line 1850 "deforest.m"
    MR_Word transform_hlds__deforest__SubNonLocals_23;
#line 1850 "deforest.m"
    MR_Word transform_hlds__deforest__NonLocals_24;
#line 1850 "deforest.m"
    MR_Word transform_hlds__deforest__Delta0_25;
#line 1850 "deforest.m"
    MR_Word transform_hlds__deforest__Delta_26;
#line 1850 "deforest.m"
    MR_Word transform_hlds__deforest__Detism_27;
#line 1850 "deforest.m"
    MR_Word transform_hlds__deforest__Purity_28;
#line 1850 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_29;
#line 1850 "deforest.m"
    MR_Word transform_hlds__deforest__V_37_37;
#line 1850 "deforest.m"
    MR_Word transform_hlds__deforest__V_38_38;
#line 1850 "deforest.m"
    MR_Word transform_hlds__deforest__V_39_39;
#line 1850 "deforest.m"
    MR_Word transform_hlds__deforest__V_41_41;

#line 1851 "deforest.m"
    {
#line 1851 "deforest.m"
      transform_hlds__deforest__succeeded = mercury__set__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__deforest__CurrBranch_14)), transform_hlds__deforest__Branches_15);
    }
#line 1857 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 1853 "deforest.m"
      {
#line 1853 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_18;
#line 1853 "deforest.m"
        MR_Word transform_hlds__deforest__V_33_33;
#line 1853 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;
#line 1853 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_35_35;
#line 1853 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr0_56;
#line 1853 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo0_57;
#line 1853 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr_58;
#line 1853 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo_59;
#line 1854 "deforest.m"
        MR_Box transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_34_34;

#line 1853 "deforest.m"
        {
#line 1853 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30, &transform_hlds__deforest__InstMap0_18);
        }
#line 1854 "deforest.m"
        {
#line 1854 "deforest.m"
          transform_hlds__deforest__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1854 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_33_33, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_10));
#line 1854 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_33_33, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_11));
#line 1854 "deforest.m"
        }
#line 1854 "deforest.m"
        {
#line 1854 "deforest.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0, (MR_Word) &transform_hlds__deforest_scalar_common_2[12], transform_hlds__deforest__V_33_33, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30)), &transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_34_34);
        }
#line 1854 "deforest.m"
        transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34 = ((MR_Word) transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_34_34);
#line 277 "deforest.m"
        transform_hlds__deforest__GoalExpr0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend0_12, (MR_Integer) 0)));
#line 277 "deforest.m"
        transform_hlds__deforest__GoalInfo0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend0_12, (MR_Integer) 1)));
#line 278 "deforest.m"
        {
#line 278 "deforest.m"
          transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_56, &transform_hlds__deforest__GoalExpr_58, transform_hlds__deforest__GoalInfo0_57, &transform_hlds__deforest__GoalInfo_59, transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_35_35);
        }
#line 279 "deforest.m"
        {
#line 279 "deforest.m"
          transform_hlds__deforest__GoalToAppend_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 279 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend_19, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_58));
#line 279 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend_19, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_59));
#line 279 "deforest.m"
        }
#line 1856 "deforest.m"
        {
#line 1856 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_18, transform_hlds__deforest__STATE_VARIABLE_PDInfo_35_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_31);
        }
#line 1853 "deforest.m"
      }
#line 1857 "deforest.m"
    else
#line 1858 "deforest.m"
      {
#line 1858 "deforest.m"
        transform_hlds__deforest__GoalToAppend_19 = transform_hlds__deforest__GoalToAppend0_12;
#line 1858 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_31 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30;
#line 1858 "deforest.m"
      }
#line 1860 "deforest.m"
    {
#line 1860 "deforest.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__deforest__Goal0_10, &transform_hlds__deforest__GoalList0_20);
    }
#line 1861 "deforest.m"
    {
#line 1861 "deforest.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__deforest__GoalToAppend_19, &transform_hlds__deforest__GoalListToAppend_21);
    }
#line 1862 "deforest.m"
    {
#line 1862 "deforest.m"
      transform_hlds__deforest__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1862 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_39_39, 0) = ((MR_Box) (transform_hlds__deforest__GoalListToAppend_21));
#line 1862 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1862 "deforest.m"
    }
#line 1862 "deforest.m"
    {
#line 1862 "deforest.m"
      transform_hlds__deforest__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1862 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_38_38, 0) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_11));
#line 1862 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_38_38, 1) = ((MR_Box) (transform_hlds__deforest__V_39_39));
#line 1862 "deforest.m"
    }
#line 1862 "deforest.m"
    {
#line 1862 "deforest.m"
      transform_hlds__deforest__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1862 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_37_37, 0) = ((MR_Box) (transform_hlds__deforest__GoalList0_20));
#line 1862 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_37_37, 1) = ((MR_Box) (transform_hlds__deforest__V_38_38));
#line 1862 "deforest.m"
    }
#line 1862 "deforest.m"
    {
#line 1862 "deforest.m"
      mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__V_37_37, &transform_hlds__deforest__Goals_22);
    }
#line 1864 "deforest.m"
    {
#line 1864 "deforest.m"
      hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__SubNonLocals_23);
    }
#line 1865 "deforest.m"
    {
#line 1865 "deforest.m"
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__NonLocals0_13, transform_hlds__deforest__SubNonLocals_23, &transform_hlds__deforest__NonLocals_24);
    }
#line 1866 "deforest.m"
    {
#line 1866 "deforest.m"
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__Delta0_25);
    }
#line 1867 "deforest.m"
    {
#line 1867 "deforest.m"
      hlds__instmap__instmap_delta_restrict_3_p_0(transform_hlds__deforest__NonLocals_24, transform_hlds__deforest__Delta0_25, &transform_hlds__deforest__Delta_26);
    }
#line 1868 "deforest.m"
    {
#line 1868 "deforest.m"
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__Detism_27);
    }
#line 1869 "deforest.m"
    {
#line 1869 "deforest.m"
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__Purity_28);
    }
#line 1870 "deforest.m"
    {
#line 1870 "deforest.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__deforest__NonLocals_24, transform_hlds__deforest__Delta_26, transform_hlds__deforest__Detism_27, transform_hlds__deforest__Purity_28, &transform_hlds__deforest__GoalInfo_29);
    }
#line 1871 "deforest.m"
    {
#line 1871 "deforest.m"
      transform_hlds__deforest__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1871 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1871 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_41_41, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1871 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_41_41, 2) = ((MR_Box) (transform_hlds__deforest__Goals_22));
#line 1871 "deforest.m"
    }
#line 1871 "deforest.m"
    {
#line 1871 "deforest.m"
      MR_Word base;
#line 1871 "deforest.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1871 "deforest.m"
      *transform_hlds__deforest__Goal_16 = base;
#line 1871 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__V_41_41));
#line 1871 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_29));
#line 1871 "deforest.m"
    }
#line 1850 "deforest.m"
  }
#line 1845 "deforest.m"
}

#line 1827 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_to_cases_10_p_0(
#line 1827 "deforest.m"
  MR_Word transform_hlds__deforest__Var_1,
#line 1827 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_2,
#line 1827 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend_3,
#line 1827 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_4,
#line 1827 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrCase_5,
#line 1827 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_6,
#line 1827 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__7_7,
#line 1827 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__8_8,
#line 1827 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9,
#line 1827 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_10)
#line 1827 "deforest.m"
{
#line 1831 "deforest.m"
  {
#line 1831 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 1831 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1831 "deforest.m"
      {
#line 1831 "deforest.m"
        *transform_hlds__deforest__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1831 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_10 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9;
#line 1831 "deforest.m"
      }
#line 1831 "deforest.m"
    else
#line 1833 "deforest.m"
      {
#line 1833 "deforest.m"
        MR_Word transform_hlds__deforest__Case0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__7_7, (MR_Integer) 0)));
#line 1833 "deforest.m"
        MR_Word transform_hlds__deforest__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__7_7, (MR_Integer) 1)));
#line 1833 "deforest.m"
        MR_Word transform_hlds__deforest__Case_28;
#line 1833 "deforest.m"
        MR_Word transform_hlds__deforest__Cases_29;
#line 1833 "deforest.m"
        MR_Word transform_hlds__deforest__MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_26, (MR_Integer) 0)));
#line 1833 "deforest.m"
        MR_Word transform_hlds__deforest__OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_26, (MR_Integer) 1)));
#line 1833 "deforest.m"
        MR_Word transform_hlds__deforest__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_26, (MR_Integer) 2)));
#line 1833 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_34;
#line 1833 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_35;
#line 1833 "deforest.m"
        MR_Integer transform_hlds__deforest__NextCase_36;
#line 1833 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_39_39;
#line 1833 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40;
#line 1833 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_42_42;

#line 1835 "deforest.m"
        {
#line 1835 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9, &transform_hlds__deforest__InstMap0_34);
        }
#line 1836 "deforest.m"
        {
#line 1836 "deforest.m"
          transform_hlds__pd_info__pd_info_bind_var_to_functors_5_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__MainConsId_31, transform_hlds__deforest__OtherConsIds_32, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_39_39);
        }
#line 1837 "deforest.m"
        {
#line 1837 "deforest.m"
          transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Goal0_33, transform_hlds__deforest__BetweenGoals_2, transform_hlds__deforest__GoalToAppend_3, transform_hlds__deforest__NonLocals_4, transform_hlds__deforest__CurrCase_5, transform_hlds__deforest__Branches_6, &transform_hlds__deforest__Goal_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_39_39, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40);
        }
#line 1839 "deforest.m"
        {
#line 1839 "deforest.m"
          transform_hlds__deforest__Case_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1839 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_28, 0) = ((MR_Box) (transform_hlds__deforest__MainConsId_31));
#line 1839 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_28, 1) = ((MR_Box) (transform_hlds__deforest__OtherConsIds_32));
#line 1839 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_28, 2) = ((MR_Box) (transform_hlds__deforest__Goal_35));
#line 1839 "deforest.m"
        }
#line 1840 "deforest.m"
        transform_hlds__deforest__NextCase_36 = (transform_hlds__deforest__CurrCase_5 + (MR_Integer) 1);
#line 1841 "deforest.m"
        {
#line 1841 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_34, transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_42_42);
        }
#line 1842 "deforest.m"
        {
#line 1842 "deforest.m"
          transform_hlds__deforest__append_goal_to_cases_10_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__BetweenGoals_2, transform_hlds__deforest__GoalToAppend_3, transform_hlds__deforest__NonLocals_4, transform_hlds__deforest__NextCase_36, transform_hlds__deforest__Branches_6, transform_hlds__deforest__Cases0_27, &transform_hlds__deforest__Cases_29, transform_hlds__deforest__STATE_VARIABLE_PDInfo_42_42, transform_hlds__deforest__STATE_VARIABLE_PDInfo_10);
        }
#line 1833 "deforest.m"
        {
#line 1833 "deforest.m"
          MR_Word base;
#line 1833 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1833 "deforest.m"
          *transform_hlds__deforest__HeadVar__8_8 = base;
#line 1833 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Case_28));
#line 1833 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Cases_29));
#line 1833 "deforest.m"
        }
#line 1833 "deforest.m"
      }
#line 1831 "deforest.m"
  }
#line 1827 "deforest.m"
}

#line 1812 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(
#line 1812 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_1,
#line 1812 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend_2,
#line 1812 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_3,
#line 1812 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrBranch_4,
#line 1812 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_5,
#line 1812 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__6_6,
#line 1812 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__7_7,
#line 1812 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
#line 1812 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9)
#line 1812 "deforest.m"
{
#line 1816 "deforest.m"
  {
#line 1816 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 1816 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1816 "deforest.m"
      {
#line 1816 "deforest.m"
        *transform_hlds__deforest__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1816 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_9 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8;
#line 1816 "deforest.m"
      }
#line 1816 "deforest.m"
    else
#line 1818 "deforest.m"
      {
#line 1818 "deforest.m"
        MR_Word transform_hlds__deforest__Goal0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__6_6, (MR_Integer) 0)));
#line 1818 "deforest.m"
        MR_Word transform_hlds__deforest__Goals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__6_6, (MR_Integer) 1)));
#line 1818 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_25;
#line 1818 "deforest.m"
        MR_Word transform_hlds__deforest__Goals_26;
#line 1818 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_28;
#line 1818 "deforest.m"
        MR_Integer transform_hlds__deforest__NextBranch_29;
#line 1818 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_32_32;
#line 1818 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;

#line 1819 "deforest.m"
        {
#line 1819 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__deforest__InstMap0_28);
        }
#line 1820 "deforest.m"
        {
#line 1820 "deforest.m"
          transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Goal0_23, transform_hlds__deforest__BetweenGoals_1, transform_hlds__deforest__GoalToAppend_2, transform_hlds__deforest__NonLocals_3, transform_hlds__deforest__CurrBranch_4, transform_hlds__deforest__Branches_5, &transform_hlds__deforest__Goal_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_32_32);
        }
#line 1822 "deforest.m"
        transform_hlds__deforest__NextBranch_29 = (transform_hlds__deforest__CurrBranch_4 + (MR_Integer) 1);
#line 1823 "deforest.m"
        {
#line 1823 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_28, transform_hlds__deforest__STATE_VARIABLE_PDInfo_32_32, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34);
        }
#line 1824 "deforest.m"
        {
#line 1824 "deforest.m"
          transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(transform_hlds__deforest__BetweenGoals_1, transform_hlds__deforest__GoalToAppend_2, transform_hlds__deforest__NonLocals_3, transform_hlds__deforest__NextBranch_29, transform_hlds__deforest__Branches_5, transform_hlds__deforest__Goals0_24, &transform_hlds__deforest__Goals_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34, transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);
        }
#line 1818 "deforest.m"
        {
#line 1818 "deforest.m"
          MR_Word base;
#line 1818 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1818 "deforest.m"
          *transform_hlds__deforest__HeadVar__7_7 = base;
#line 1818 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Goal_25));
#line 1818 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_26));
#line 1818 "deforest.m"
        }
#line 1818 "deforest.m"
      }
#line 1816 "deforest.m"
  }
#line 1812 "deforest.m"
}

#line 1739 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__push_goal_into_goal_8_p_0(
#line 1739 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_9,
#line 1739 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_10,
#line 1739 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_11,
#line 1739 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_12,
#line 1739 "deforest.m"
  MR_Word transform_hlds__deforest__LaterGoal_13,
#line 1739 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_14,
#line 1739 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87,
#line 1739 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_88)
#line 1739 "deforest.m"
{
#line 1744 "deforest.m"
  {
#line 1744 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__InstMap0_16;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierGoalExpr_17;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr_24;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__Delta0_66;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__LaterInfo_68;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__Delta1_69;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__Delta2_70;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__Delta_71;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__Detism0_72;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__Detism1_73;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__Detism_74;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__Purity0_75;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__Purity1_76;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__Purity_77;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_78;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__Goal2_79;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_80;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_81;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__SimplifyTasks0_82;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__SimpList0_83;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__SimpList_84;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__SimplifyTasks_85;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__Goal3_86;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__V_103_103;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110;
#line 1744 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_111_111;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__V_18_18;
#line 1784 "deforest.m"
    MR_Word transform_hlds__deforest__V_67_67;

#line 1745 "deforest.m"
    {
#line 1745 "deforest.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__InstMap0_16);
    }
#line 1746 "deforest.m"
    transform_hlds__deforest__EarlierGoalExpr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_11, (MR_Integer) 0)));
#line 1746 "deforest.m"
    transform_hlds__deforest__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_11, (MR_Integer) 1)));
#line 1753 "deforest.m"
    if (((((MR_tag((MR_Word) transform_hlds__deforest__EarlierGoalExpr_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1766 "deforest.m"
      {
#line 1766 "deforest.m"
        MR_Word transform_hlds__deforest__Disjuncts0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 1)));
#line 1766 "deforest.m"
        MR_Word transform_hlds__deforest__Disjuncts_36;

#line 1767 "deforest.m"
        {
#line 1767 "deforest.m"
          transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__NonLocals_9, (MR_Integer) 1, transform_hlds__deforest__DeforestInfo_10, transform_hlds__deforest__Disjuncts0_35, &transform_hlds__deforest__Disjuncts_36, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101);
        }
#line 1769 "deforest.m"
        {
#line 1769 "deforest.m"
          transform_hlds__deforest__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1769 "deforest.m"
          MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1769 "deforest.m"
          MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 1) = ((MR_Box) (transform_hlds__deforest__Disjuncts_36));
#line 1769 "deforest.m"
        }
#line 1766 "deforest.m"
      }
#line 1753 "deforest.m"
    else
#line 1753 "deforest.m"
      if (((((MR_tag((MR_Word) transform_hlds__deforest__EarlierGoalExpr_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1754 "deforest.m"
        {
#line 1754 "deforest.m"
          MR_Word transform_hlds__deforest__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 1)));
#line 1754 "deforest.m"
          MR_Word transform_hlds__deforest__Cond_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 2)));
#line 1754 "deforest.m"
          MR_Word transform_hlds__deforest__Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 3)));
#line 1754 "deforest.m"
          MR_Word transform_hlds__deforest__Else0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 4)));
#line 1754 "deforest.m"
          MR_Word transform_hlds__deforest__CondInfo_30;
#line 1754 "deforest.m"
          MR_Word transform_hlds__deforest__CondNonLocals_31;
#line 1754 "deforest.m"
          MR_Word transform_hlds__deforest__ThenNonLocals_32;
#line 1754 "deforest.m"
          MR_Word transform_hlds__deforest__Then_33;
#line 1754 "deforest.m"
          MR_Word transform_hlds__deforest__Else_34;
#line 1754 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94;
#line 1754 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96;
#line 1754 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 1756 "deforest.m"
          MR_Word transform_hlds__deforest__V_29_29;

#line 1755 "deforest.m"
          {
#line 1755 "deforest.m"
            transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Cond_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94);
          }
#line 1756 "deforest.m"
          transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Cond_26, (MR_Integer) 0)));
#line 1756 "deforest.m"
          transform_hlds__deforest__CondInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Cond_26, (MR_Integer) 1)));
#line 1757 "deforest.m"
          {
#line 1757 "deforest.m"
            transform_hlds__deforest__CondNonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__CondInfo_30);
          }
#line 1758 "deforest.m"
          {
#line 1758 "deforest.m"
            parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__CondNonLocals_31, transform_hlds__deforest__NonLocals_9, &transform_hlds__deforest__ThenNonLocals_32);
          }
#line 1759 "deforest.m"
          {
#line 1759 "deforest.m"
            transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Then0_27, transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__ThenNonLocals_32, (MR_Integer) 1, transform_hlds__deforest__DeforestInfo_10, &transform_hlds__deforest__Then_33, transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96);
          }
#line 1761 "deforest.m"
          {
#line 1761 "deforest.m"
            transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
          }
#line 1762 "deforest.m"
          {
#line 1762 "deforest.m"
            transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Else0_28, transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__NonLocals_9, (MR_Integer) 2, transform_hlds__deforest__DeforestInfo_10, &transform_hlds__deforest__Else_34, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101);
          }
#line 1764 "deforest.m"
          {
#line 1764 "deforest.m"
            transform_hlds__deforest__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1764 "deforest.m"
            MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1764 "deforest.m"
            MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 1) = ((MR_Box) (transform_hlds__deforest__Vars_25));
#line 1764 "deforest.m"
            MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 2) = ((MR_Box) (transform_hlds__deforest__Cond_26));
#line 1764 "deforest.m"
            MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 3) = ((MR_Box) (transform_hlds__deforest__Then_33));
#line 1764 "deforest.m"
            MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 4) = ((MR_Box) (transform_hlds__deforest__Else_34));
#line 1764 "deforest.m"
          }
#line 1754 "deforest.m"
        }
#line 1753 "deforest.m"
      else
#line 1753 "deforest.m"
        if (((((MR_tag((MR_Word) transform_hlds__deforest__EarlierGoalExpr_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1748 "deforest.m"
          {
#line 1748 "deforest.m"
            MR_Word transform_hlds__deforest__Var1_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 1)));
#line 1748 "deforest.m"
            MR_Word transform_hlds__deforest__CanFail1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 2)));
#line 1748 "deforest.m"
            MR_Word transform_hlds__deforest__Cases1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 3)));
#line 1748 "deforest.m"
            MR_Word transform_hlds__deforest__CaseNonLocals_22;
#line 1748 "deforest.m"
            MR_Word transform_hlds__deforest__Cases_23;

#line 1749 "deforest.m"
            {
#line 1749 "deforest.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__Var1_19, transform_hlds__deforest__NonLocals_9, &transform_hlds__deforest__CaseNonLocals_22);
            }
#line 1750 "deforest.m"
            {
#line 1750 "deforest.m"
              transform_hlds__deforest__append_goal_to_cases_10_p_0(transform_hlds__deforest__Var1_19, transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__CaseNonLocals_22, (MR_Integer) 1, transform_hlds__deforest__DeforestInfo_10, transform_hlds__deforest__Cases1_21, &transform_hlds__deforest__Cases_23, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101);
            }
#line 1752 "deforest.m"
            {
#line 1752 "deforest.m"
              transform_hlds__deforest__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1752 "deforest.m"
              MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1752 "deforest.m"
              MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 1) = ((MR_Box) (transform_hlds__deforest__Var1_19));
#line 1752 "deforest.m"
              MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 2) = ((MR_Box) (transform_hlds__deforest__CanFail1_20));
#line 1752 "deforest.m"
              MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 3) = ((MR_Box) (transform_hlds__deforest__Cases_23));
#line 1752 "deforest.m"
            }
#line 1748 "deforest.m"
          }
#line 1753 "deforest.m"
        else
#line 1779 "deforest.m"
          {
#line 1780 "deforest.m"
            {
#line 1780 "deforest.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.push_goal_into_goal\'/8", (MR_String) "unexpected goal type");
#line 1780 "deforest.m"
              return;
            }
#line 1779 "deforest.m"
          }
#line 1782 "deforest.m"
    {
#line 1782 "deforest.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102);
    }
#line 1783 "deforest.m"
    {
#line 1783 "deforest.m"
      transform_hlds__deforest__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1783 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_103_103, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_11));
#line 1783 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_103_103, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_12));
#line 1783 "deforest.m"
    }
#line 1783 "deforest.m"
    {
#line 1783 "deforest.m"
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__deforest__V_103_103, &transform_hlds__deforest__Delta0_66);
    }
#line 1784 "deforest.m"
    transform_hlds__deforest__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_13, (MR_Integer) 0)));
#line 1784 "deforest.m"
    transform_hlds__deforest__LaterInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_13, (MR_Integer) 1)));
#line 1785 "deforest.m"
    {
#line 1785 "deforest.m"
      transform_hlds__deforest__Delta1_69 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__deforest__LaterInfo_68);
    }
#line 1786 "deforest.m"
    {
#line 1786 "deforest.m"
      hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(transform_hlds__deforest__Delta0_66, transform_hlds__deforest__Delta1_69, (MR_Integer) 2, &transform_hlds__deforest__Delta2_70);
    }
#line 1787 "deforest.m"
    {
#line 1787 "deforest.m"
      hlds__instmap__instmap_delta_restrict_3_p_0(transform_hlds__deforest__NonLocals_9, transform_hlds__deforest__Delta2_70, &transform_hlds__deforest__Delta_71);
    }
#line 1788 "deforest.m"
    {
#line 1788 "deforest.m"
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__deforest__V_103_103, &transform_hlds__deforest__Detism0_72);
    }
#line 1789 "deforest.m"
    {
#line 1789 "deforest.m"
      transform_hlds__deforest__Detism1_73 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__deforest__LaterInfo_68);
    }
#line 1790 "deforest.m"
    {
#line 1790 "deforest.m"
      parse_tree__prog_data__det_conjunction_detism_3_p_0(transform_hlds__deforest__Detism0_72, transform_hlds__deforest__Detism1_73, &transform_hlds__deforest__Detism_74);
    }
#line 1791 "deforest.m"
    {
#line 1791 "deforest.m"
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__deforest__V_103_103, &transform_hlds__deforest__Purity0_75);
    }
#line 1792 "deforest.m"
    {
#line 1792 "deforest.m"
      transform_hlds__deforest__Purity1_76 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__deforest__LaterInfo_68);
    }
#line 1793 "deforest.m"
    {
#line 1793 "deforest.m"
      transform_hlds__deforest__Purity_77 = parse_tree__prog_data__worst_purity_2_f_0(transform_hlds__deforest__Purity0_75, transform_hlds__deforest__Purity1_76);
    }
#line 1794 "deforest.m"
    {
#line 1794 "deforest.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__deforest__NonLocals_9, transform_hlds__deforest__Delta_71, transform_hlds__deforest__Detism_74, transform_hlds__deforest__Purity_77, &transform_hlds__deforest__GoalInfo_78);
    }
#line 1795 "deforest.m"
    {
#line 1795 "deforest.m"
      transform_hlds__deforest__Goal2_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1795 "deforest.m"
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal2_79, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_24));
#line 1795 "deforest.m"
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal2_79, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_78));
#line 1795 "deforest.m"
    }
#line 1797 "deforest.m"
    {
#line 1797 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102, &transform_hlds__deforest__ModuleInfo_80);
    }
#line 1798 "deforest.m"
    {
#line 1798 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_80, &transform_hlds__deforest__Globals_81);
    }
#line 1799 "deforest.m"
    {
#line 1799 "deforest.m"
      check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, transform_hlds__deforest__Globals_81, &transform_hlds__deforest__SimplifyTasks0_82);
    }
#line 1800 "deforest.m"
    {
#line 1800 "deforest.m"
      transform_hlds__deforest__SimpList0_83 = check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(transform_hlds__deforest__SimplifyTasks0_82);
    }
#line 1803 "deforest.m"
    {
#line 1803 "deforest.m"
      transform_hlds__deforest__SimpList_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1803 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__SimpList_84, 0) = ((MR_Box) ((MR_Integer) 11));
#line 1803 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__SimpList_84, 1) = ((MR_Box) (transform_hlds__deforest__SimpList0_83));
#line 1803 "deforest.m"
    }
#line 1804 "deforest.m"
    {
#line 1804 "deforest.m"
      transform_hlds__deforest__SimplifyTasks_85 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0(transform_hlds__deforest__SimpList_84);
    }
#line 1805 "deforest.m"
    {
#line 1805 "deforest.m"
      transform_hlds__pd_util__pd_simplify_goal_5_p_0(transform_hlds__deforest__SimplifyTasks_85, transform_hlds__deforest__Goal2_79, &transform_hlds__deforest__Goal3_86, transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
    }
#line 1806 "deforest.m"
    {
#line 1806 "deforest.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110);
    }
#line 1809 "deforest.m"
    {
#line 1809 "deforest.m"
      transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Goal3_86, transform_hlds__deforest__Goal_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_111_111);
    }
#line 1810 "deforest.m"
    {
#line 1810 "deforest.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_111_111, transform_hlds__deforest__STATE_VARIABLE_PDInfo_88);
#line 1810 "deforest.m"
      return;
    }
#line 1744 "deforest.m"
  }
#line 1739 "deforest.m"
}

#line 1657 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__reorder_conj_5_p_0(
#line 1657 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo0_6,
#line 1657 "deforest.m"
  MR_Word * transform_hlds__deforest__DeforestInfo_7,
#line 1657 "deforest.m"
  MR_Word * transform_hlds__deforest__BeforeIrrelevant_8,
#line 1657 "deforest.m"
  MR_Word * transform_hlds__deforest__AfterIrrelevant_9,
#line 1657 "deforest.m"
  MR_Word transform_hlds__deforest__PDInfo_10)
#line 1657 "deforest.m"
{
#line 1661 "deforest.m"
  {
#line 1661 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1661 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_11;
#line 1661 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_12;
#line 1661 "deforest.m"
    MR_Word transform_hlds__deforest__DebugPD_13;
#line 1661 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierGoal_15;
#line 1661 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierBranchInfo_16;
#line 1661 "deforest.m"
    MR_Word transform_hlds__deforest__BetweenGoals0_17;
#line 1661 "deforest.m"
    MR_Word transform_hlds__deforest__LaterGoal_18;
#line 1661 "deforest.m"
    MR_Word transform_hlds__deforest__LaterBranchInfo_19;
#line 1661 "deforest.m"
    MR_Word transform_hlds__deforest__DeforestBranches_20;
#line 1661 "deforest.m"
    MR_Word transform_hlds__deforest__FullyStrict_21;
#line 1661 "deforest.m"
    MR_Word transform_hlds__deforest__RevBetweenGoals1_22;
#line 1661 "deforest.m"
    MR_Word transform_hlds__deforest__RevBeforeIrrelevant_23;
#line 1661 "deforest.m"
    MR_Word transform_hlds__deforest__BetweenGoals_24;

#line 1662 "deforest.m"
    {
#line 1662 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__PDInfo_10, &transform_hlds__deforest__ModuleInfo_11);
    }
#line 1663 "deforest.m"
    {
#line 1663 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_11, &transform_hlds__deforest__Globals_12);
    }
#line 1664 "deforest.m"
    {
#line 1664 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_12, (MR_Integer) 71, &transform_hlds__deforest__DebugPD_13);
    }
#line 1666 "deforest.m"
    {
#line 1666 "deforest.m"
      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_13, (MR_String) "Reordering conjunction\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 1668 "deforest.m"
    transform_hlds__deforest__EarlierGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 0)));
#line 1668 "deforest.m"
    transform_hlds__deforest__EarlierBranchInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 1)));
#line 1668 "deforest.m"
    transform_hlds__deforest__BetweenGoals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 2)));
#line 1668 "deforest.m"
    transform_hlds__deforest__LaterGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 3)));
#line 1668 "deforest.m"
    transform_hlds__deforest__LaterBranchInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 4)));
#line 1668 "deforest.m"
    transform_hlds__deforest__DeforestBranches_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 5)));
#line 1671 "deforest.m"
    {
#line 1671 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_12, (MR_Integer) 162, &transform_hlds__deforest__FullyStrict_21);
    }
#line 1672 "deforest.m"
    {
#line 1672 "deforest.m"
      transform_hlds__deforest__move_goals__ho2_9_p_0(transform_hlds__deforest__ModuleInfo_11, transform_hlds__deforest__FullyStrict_21, transform_hlds__deforest__BetweenGoals0_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__RevBetweenGoals1_22, transform_hlds__deforest__EarlierGoal_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__RevBeforeIrrelevant_23);
    }
#line 1675 "deforest.m"
    {
#line 1675 "deforest.m"
      transform_hlds__deforest__move_goals__ho1_9_p_0(transform_hlds__deforest__ModuleInfo_11, transform_hlds__deforest__FullyStrict_21, transform_hlds__deforest__RevBetweenGoals1_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__BetweenGoals_24, transform_hlds__deforest__LaterGoal_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__deforest__AfterIrrelevant_9);
    }
#line 1679 "deforest.m"
    {
#line 1679 "deforest.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__RevBeforeIrrelevant_23, transform_hlds__deforest__BeforeIrrelevant_8);
    }
#line 1680 "deforest.m"
    {
#line 1680 "deforest.m"
      MR_Word base;
#line 1680 "deforest.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1680 "deforest.m"
      *transform_hlds__deforest__DeforestInfo_7 = base;
#line 1680 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_15));
#line 1680 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__EarlierBranchInfo_16));
#line 1680 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_24));
#line 1680 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__deforest__LaterGoal_18));
#line 1680 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__deforest__LaterBranchInfo_19));
#line 1680 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__deforest__DeforestBranches_20));
#line 1680 "deforest.m"
    }
#line 1661 "deforest.m"
  }
#line 1657 "deforest.m"
}

#line 1630 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0_1(
#line 1630 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 1630 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1630 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1630 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 1630 "deforest.m"
{
#line 1630 "deforest.m"
  {
#line 1630 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 1630 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_HeadVar__3_31;

#line 1630 "deforest.m"
    {
#line 1630 "deforest.m"
      transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1630__1_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_HeadVar__3_31);
    }
#line 1630 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__3_31));
#line 1630 "deforest.m"
  }
#line 1630 "deforest.m"
}

#line 1622 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(
#line 1622 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_0_27,
#line 1622 "deforest.m"
  MR_Word transform_hlds__deforest__RevBeforeGoals_11,
#line 1622 "deforest.m"
  MR_Word transform_hlds__deforest__BeforeIrrelevant_12,
#line 1622 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_13,
#line 1622 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_14,
#line 1622 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_15,
#line 1622 "deforest.m"
  MR_Word transform_hlds__deforest__AfterIrrelevant_16,
#line 1622 "deforest.m"
  MR_Word transform_hlds__deforest__AfterGoals_17,
#line 1622 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_28)
#line 1622 "deforest.m"
{
#line 1629 "deforest.m"
  {
#line 1629 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1629 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_45_45 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1629 "deforest.m"
    MR_Word transform_hlds__deforest__TypeInfo_46_46 = (MR_Word) &transform_hlds__deforest_scalar_common_1[5];
#line 1629 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_47_47;
#line 1629 "deforest.m"
    MR_Word transform_hlds__deforest__AddGoalNonLocals_19 = (MR_Word) &transform_hlds__deforest_scalar_common_2[11];
#line 1629 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_32_32;
#line 1629 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_33_33;
#line 1629 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_34_34;
#line 1629 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_35_35;
#line 1629 "deforest.m"
    MR_Word transform_hlds__deforest__V_36_36;
#line 1629 "deforest.m"
    MR_Word transform_hlds__deforest__V_37_37;
#line 1629 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38;
#line 1629 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39;
#line 1635 "deforest.m"
    MR_Box transform_hlds__deforest__conv1_STATE_VARIABLE_NonLocals_32_32;
#line 1636 "deforest.m"
    MR_Box transform_hlds__deforest__conv2_STATE_VARIABLE_NonLocals_33_33;
#line 1637 "deforest.m"
    MR_Box transform_hlds__deforest__conv3_STATE_VARIABLE_NonLocals_34_34;
#line 1638 "deforest.m"
    MR_Box transform_hlds__deforest__conv4_STATE_VARIABLE_NonLocals_35_35;
#line 1640 "deforest.m"
    MR_Box transform_hlds__deforest__conv5_STATE_VARIABLE_SubConjNonLocals_38_38;

#line 1635 "deforest.m"
    {
#line 1635 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__RevBeforeGoals_11, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_0_27)), &transform_hlds__deforest__conv1_STATE_VARIABLE_NonLocals_32_32);
    }
#line 1635 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_32_32 = ((MR_Word) transform_hlds__deforest__conv1_STATE_VARIABLE_NonLocals_32_32);
#line 1636 "deforest.m"
    {
#line 1636 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__BeforeIrrelevant_12, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_32_32)), &transform_hlds__deforest__conv2_STATE_VARIABLE_NonLocals_33_33);
    }
#line 1636 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_33_33 = ((MR_Word) transform_hlds__deforest__conv2_STATE_VARIABLE_NonLocals_33_33);
#line 1637 "deforest.m"
    {
#line 1637 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__AfterIrrelevant_16, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_33_33)), &transform_hlds__deforest__conv3_STATE_VARIABLE_NonLocals_34_34);
    }
#line 1637 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_34_34 = ((MR_Word) transform_hlds__deforest__conv3_STATE_VARIABLE_NonLocals_34_34);
#line 1638 "deforest.m"
    {
#line 1638 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__AfterGoals_17, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_34_34)), &transform_hlds__deforest__conv4_STATE_VARIABLE_NonLocals_35_35);
    }
#line 1638 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_35_35 = ((MR_Word) transform_hlds__deforest__conv4_STATE_VARIABLE_NonLocals_35_35);
#line 1640 "deforest.m"
    {
#line 1640 "deforest.m"
      transform_hlds__deforest__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1640 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_36_36, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_13));
#line 1640 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_36_36, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_14));
#line 1640 "deforest.m"
    }
#line 5839 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1641 "deforest.m"
    {
#line 1641 "deforest.m"
      transform_hlds__deforest__V_37_37 = parse_tree__set_of_var__init_0_f_0(transform_hlds__deforest__TypeCtorInfo_47_47);
    }
#line 1640 "deforest.m"
    {
#line 1640 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__V_36_36, ((MR_Box) (transform_hlds__deforest__V_37_37)), &transform_hlds__deforest__conv5_STATE_VARIABLE_SubConjNonLocals_38_38);
    }
#line 1640 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38 = ((MR_Word) transform_hlds__deforest__conv5_STATE_VARIABLE_SubConjNonLocals_38_38);
#line 1645 "deforest.m"
    if ((transform_hlds__deforest__MaybeLaterGoal_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1646 "deforest.m"
      transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39 = transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38;
#line 1645 "deforest.m"
    else
#line 1643 "deforest.m"
      {
#line 1643 "deforest.m"
        MR_Word transform_hlds__deforest__LaterGoal_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeLaterGoal_15, (MR_Integer) 0)));
#line 1643 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_26, (MR_Integer) 1)));
#line 1643 "deforest.m"
        MR_Word transform_hlds__deforest__GoalNonLocals_72;
#line 1631 "deforest.m"
        MR_Word transform_hlds__deforest__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_26, (MR_Integer) 0)));

#line 1632 "deforest.m"
        {
#line 1632 "deforest.m"
          transform_hlds__deforest__GoalNonLocals_72 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__GoalInfo_71);
        }
#line 1633 "deforest.m"
        {
#line 1633 "deforest.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__GoalNonLocals_72, transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38, &transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39);
        }
#line 1643 "deforest.m"
      }
#line 1648 "deforest.m"
    {
#line 1648 "deforest.m"
      parse_tree__set_of_var__intersect_3_p_0(transform_hlds__deforest__TypeCtorInfo_47_47, transform_hlds__deforest__STATE_VARIABLE_NonLocals_35_35, transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39, transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_28);
#line 1648 "deforest.m"
      return;
    }
#line 1629 "deforest.m"
  }
#line 1622 "deforest.m"
}

#line 1608 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(
#line 1608 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals0_8,
#line 1608 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_9,
#line 1608 "deforest.m"
  MR_Word transform_hlds__deforest__RevBeforeGoals_10,
#line 1608 "deforest.m"
  MR_Word transform_hlds__deforest__BeforeIrrelevant_11,
#line 1608 "deforest.m"
  MR_Word transform_hlds__deforest__AfterIrrelevant_12,
#line 1608 "deforest.m"
  MR_Word transform_hlds__deforest__AfterGoals0_13,
#line 1608 "deforest.m"
  MR_Word * transform_hlds__deforest__SubConjNonLocals_14)
#line 1608 "deforest.m"
{
#line 1614 "deforest.m"
  {
#line 1614 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1614 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 0)));
#line 1614 "deforest.m"
    MR_Word transform_hlds__deforest__BetweenGoals_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 2)));
#line 1614 "deforest.m"
    MR_Word transform_hlds__deforest__LaterGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 3)));
#line 1614 "deforest.m"
    MR_Word transform_hlds__deforest__AfterGoals_21;
#line 1614 "deforest.m"
    MR_Word transform_hlds__deforest__V_22_22;
#line 1615 "deforest.m"
    MR_Word transform_hlds__deforest__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 1)));
#line 1615 "deforest.m"
    MR_Word transform_hlds__deforest__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 4)));
#line 1615 "deforest.m"
    MR_Word transform_hlds__deforest__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 5)));

#line 1617 "deforest.m"
    {
#line 1617 "deforest.m"
      mercury__assoc_list__keys_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[3], transform_hlds__deforest__AfterGoals0_13, &transform_hlds__deforest__AfterGoals_21);
    }
#line 1619 "deforest.m"
    {
#line 1619 "deforest.m"
      transform_hlds__deforest__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1619 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_22_22, 0) = ((MR_Box) (transform_hlds__deforest__LaterGoal_18));
#line 1619 "deforest.m"
    }
#line 1618 "deforest.m"
    {
#line 1618 "deforest.m"
      transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(transform_hlds__deforest__NonLocals0_8, transform_hlds__deforest__RevBeforeGoals_10, transform_hlds__deforest__BeforeIrrelevant_11, transform_hlds__deforest__EarlierGoal_15, transform_hlds__deforest__BetweenGoals_17, transform_hlds__deforest__V_22_22, transform_hlds__deforest__AfterIrrelevant_12, transform_hlds__deforest__AfterGoals_21, transform_hlds__deforest__SubConjNonLocals_14);
#line 1618 "deforest.m"
      return;
    }
#line 1614 "deforest.m"
  }
#line 1608 "deforest.m"
}

#line 984 "deforest.m"
static MR_Word MR_CALL 
transform_hlds__deforest__is_improvement_worth_while_4_f_0(
#line 984 "deforest.m"
  MR_Word transform_hlds__deforest__PDInfo_6,
#line 984 "deforest.m"
  MR_Word transform_hlds__deforest__Optimized0_7,
#line 984 "deforest.m"
  MR_Integer transform_hlds__deforest__CostDelta0_8,
#line 984 "deforest.m"
  MR_Integer transform_hlds__deforest__SizeDelta0_9)
#line 984 "deforest.m"
{
#line 987 "deforest.m"
  {
#line 987 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 987 "deforest.m"
    MR_Word transform_hlds__deforest__Optimized_10;
#line 987 "deforest.m"
    MR_Integer transform_hlds__deforest__CostDelta_11;
#line 987 "deforest.m"
    MR_Integer transform_hlds__deforest__SizeDelta_12;
#line 987 "deforest.m"
    MR_Integer transform_hlds__deforest__Improvement_13;
#line 987 "deforest.m"
    MR_Integer transform_hlds__deforest__SizeDifference_14;
#line 987 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_15;
#line 987 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_16;
#line 987 "deforest.m"
    MR_Integer transform_hlds__deforest__Factor_17;
#line 987 "deforest.m"
    MR_Word transform_hlds__deforest__DebugPD_18;
#line 2169 "deforest.m"
    MR_Integer transform_hlds__deforest__V_43_43;

#line 988 "deforest.m"
    {
#line 988 "deforest.m"
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__PDInfo_6, &transform_hlds__deforest__CostDelta_11);
    }
#line 989 "deforest.m"
    {
#line 989 "deforest.m"
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__PDInfo_6, &transform_hlds__deforest__SizeDelta_12);
    }
#line 990 "deforest.m"
    transform_hlds__deforest__Improvement_13 = (transform_hlds__deforest__CostDelta_11 - transform_hlds__deforest__CostDelta0_8);
#line 991 "deforest.m"
    transform_hlds__deforest__SizeDifference_14 = (transform_hlds__deforest__SizeDelta_12 - transform_hlds__deforest__SizeDelta0_9);
#line 993 "deforest.m"
    {
#line 993 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__PDInfo_6, &transform_hlds__deforest__ModuleInfo_15);
    }
#line 994 "deforest.m"
    {
#line 994 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_15, &transform_hlds__deforest__Globals_16);
    }
#line 995 "deforest.m"
    {
#line 995 "deforest.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_16, (MR_Integer) 390, &transform_hlds__deforest__Factor_17);
    }
#line 996 "deforest.m"
    {
#line 996 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_16, (MR_Integer) 71, &transform_hlds__deforest__DebugPD_18);
    }
#line 998 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__Optimized0_7 == (MR_Integer) 1);
#line 998 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 998 "deforest.m"
      {
#line 2169 "deforest.m"
        transform_hlds__deforest__V_43_43 = (MR_Integer) 5;
#line 2169 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__SizeDifference_14 <= transform_hlds__deforest__V_43_43);
#line 2172 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2171 "deforest.m"
          {
#line 2171 "deforest.m"
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__Improvement_13 > (MR_Integer) 0);
#line 2171 "deforest.m"
          }
#line 2172 "deforest.m"
        else
#line 2176 "deforest.m"
          {
#line 2176 "deforest.m"
            MR_Integer transform_hlds__deforest__ExpectedCostDelta_41;
#line 2176 "deforest.m"
            MR_Integer transform_hlds__deforest__FudgedCostDelta_42;
#line 2176 "deforest.m"
            MR_Integer transform_hlds__deforest__V_45_45;
#line 2176 "deforest.m"
            MR_Integer transform_hlds__deforest__V_46_46;
#line 2176 "deforest.m"
            MR_Integer transform_hlds__deforest__V_48_48;

#line 2176 "deforest.m"
            {
#line 2176 "deforest.m"
              transform_hlds__deforest__V_48_48 = transform_hlds__pd_cost__cost_of_heap_incr_0_f_0();
            }
#line 2176 "deforest.m"
            transform_hlds__deforest__V_46_46 = ((MR_Integer) 1000 * transform_hlds__deforest__V_48_48);
#line 2176 "deforest.m"
            transform_hlds__deforest__V_45_45 = (transform_hlds__deforest__V_46_46 * transform_hlds__deforest__SizeDifference_14);
#line 2176 "deforest.m"
            {
#line 2176 "deforest.m"
              transform_hlds__deforest__ExpectedCostDelta_41 = mercury__int__f_47_47_2_f_0(transform_hlds__deforest__V_45_45, (MR_Integer) 3);
            }
#line 2177 "deforest.m"
            transform_hlds__deforest__FudgedCostDelta_42 = (transform_hlds__deforest__Improvement_13 * transform_hlds__deforest__Factor_17);
#line 2178 "deforest.m"
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__FudgedCostDelta_42 >= transform_hlds__deforest__ExpectedCostDelta_41);
#line 2176 "deforest.m"
          }
#line 998 "deforest.m"
      }
#line 1007 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 1001 "deforest.m"
      {
#line 1002 "deforest.m"
        MR_Word transform_hlds__deforest__V_24_24;
#line 1002 "deforest.m"
        MR_Word transform_hlds__deforest__V_26_26;
#line 1002 "deforest.m"
        MR_Word transform_hlds__deforest__V_27_27;
#line 1002 "deforest.m"
        MR_Word transform_hlds__deforest__V_28_28;

#line 1001 "deforest.m"
        transform_hlds__deforest__Optimized_10 = (MR_Integer) 1;
#line 1005 "deforest.m"
        {
#line 1005 "deforest.m"
          transform_hlds__deforest__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_26_26, 0) = ((MR_Box) (transform_hlds__deforest__Improvement_13));
#line 1005 "deforest.m"
        }
#line 1005 "deforest.m"
        {
#line 1005 "deforest.m"
          transform_hlds__deforest__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_28_28, 0) = ((MR_Box) (transform_hlds__deforest__SizeDifference_14));
#line 1005 "deforest.m"
        }
#line 1005 "deforest.m"
        {
#line 1005 "deforest.m"
          transform_hlds__deforest__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_27_27, 0) = ((MR_Box) (transform_hlds__deforest__V_28_28));
#line 1005 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1005 "deforest.m"
        }
#line 1005 "deforest.m"
        {
#line 1005 "deforest.m"
          transform_hlds__deforest__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_24_24, 0) = ((MR_Box) (transform_hlds__deforest__V_26_26));
#line 1005 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_24_24, 1) = ((MR_Box) (transform_hlds__deforest__V_27_27));
#line 1005 "deforest.m"
        }
#line 1003 "deforest.m"
        {
#line 1003 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Enough improvement: cost(%i) size(%i)\n", transform_hlds__deforest__V_24_24);
        }
#line 1001 "deforest.m"
      }
#line 1007 "deforest.m"
    else
#line 1008 "deforest.m"
      {
#line 1009 "deforest.m"
        MR_Word transform_hlds__deforest__V_32_32;
#line 1009 "deforest.m"
        MR_Word transform_hlds__deforest__V_34_34;
#line 1009 "deforest.m"
        MR_Word transform_hlds__deforest__V_35_35;
#line 1009 "deforest.m"
        MR_Word transform_hlds__deforest__V_36_36;

#line 1008 "deforest.m"
        transform_hlds__deforest__Optimized_10 = (MR_Integer) 0;
#line 1012 "deforest.m"
        {
#line 1012 "deforest.m"
          transform_hlds__deforest__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_34_34, 0) = ((MR_Box) (transform_hlds__deforest__Improvement_13));
#line 1012 "deforest.m"
        }
#line 1012 "deforest.m"
        {
#line 1012 "deforest.m"
          transform_hlds__deforest__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_36_36, 0) = ((MR_Box) (transform_hlds__deforest__SizeDifference_14));
#line 1012 "deforest.m"
        }
#line 1012 "deforest.m"
        {
#line 1012 "deforest.m"
          transform_hlds__deforest__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_35_35, 0) = ((MR_Box) (transform_hlds__deforest__V_36_36));
#line 1012 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "deforest.m"
        }
#line 1012 "deforest.m"
        {
#line 1012 "deforest.m"
          transform_hlds__deforest__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_32_32, 0) = ((MR_Box) (transform_hlds__deforest__V_34_34));
#line 1012 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_32_32, 1) = ((MR_Box) (transform_hlds__deforest__V_35_35));
#line 1012 "deforest.m"
        }
#line 1010 "deforest.m"
        {
#line 1010 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Not enough improvement: cost(%i) size(%i)\n", transform_hlds__deforest__V_32_32);
        }
#line 1008 "deforest.m"
      }
#line 987 "deforest.m"
    return transform_hlds__deforest__Optimized_10;
#line 987 "deforest.m"
  }
#line 984 "deforest.m"
}

#line 889 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_1(
#line 889 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 889 "deforest.m"
{
#line 889 "deforest.m"
  {
#line 889 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 889 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_0, 1);
#line 889 "deforest.m"
  }
#line 889 "deforest.m"
}

#line 889 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_2(
#line 889 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 889 "deforest.m"
{
#line 889 "deforest.m"
  {
#line 889 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 889 "deforest.m"
    {
#line 896 "deforest.m"
      MR_Word transform_hlds__deforest__V_35_35;

#line 896 "deforest.m"
      {
#line 896 "deforest.m"
        hlds__hlds_module__module_info_pred_proc_info_5_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_23, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_24, &transform_hlds__deforest__V_35_35, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_36);
      }
#line 898 "deforest.m"
      {
#line 898 "deforest.m"
        hlds__hlds_pred__proc_info_get_goal_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_36, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_37);
      }
#line 899 "deforest.m"
      {
#line 899 "deforest.m"
        hlds__goal_util__goal_size_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_37, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_38);
      }
#line 900 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19 == (MR_Integer) -1);
#line 900 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 889 "deforest.m"
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 889 "deforest.m"
        {
#line 901 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_38 > (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19);
#line 901 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 901 "deforest.m"
            {
#line 901 "deforest.m"
              transform_hlds__deforest__can_optimize_conj_6_p_0_1(transform_hlds__deforest__env_ptr);
#line 901 "deforest.m"
              return;
            }
#line 889 "deforest.m"
        }
#line 889 "deforest.m"
    }
#line 889 "deforest.m"
  }
#line 889 "deforest.m"
}

#line 889 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_3(
#line 889 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 889 "deforest.m"
{
#line 889 "deforest.m"
  {
#line 889 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 889 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_0) == 0)
#line 889 "deforest.m"
      {
#line 889 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19 == (MR_Integer) -1);
#line 889 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 889 "deforest.m"
        if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 889 "deforest.m"
          {
#line 891 "deforest.m"
            {
#line 891 "deforest.m"
              MR_Word transform_hlds__deforest__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 0)));
#line 891 "deforest.m"
              MR_Word transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 1)));
#line 891 "deforest.m"
              MR_Word transform_hlds__deforest__V_25_25;
#line 891 "deforest.m"
              MR_Word transform_hlds__deforest__V_26_26;
#line 891 "deforest.m"
              MR_Word transform_hlds__deforest__V_27_27;
#line 891 "deforest.m"
              MR_Word transform_hlds__deforest__V_28_28;

#line 891 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_70_70)) == (MR_mktag((MR_Integer) 2)));
#line 891 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 891 "deforest.m"
                {
#line 891 "deforest.m"
                  {
#line 891 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 0)));
#line 891 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 1)));
#line 891 "deforest.m"
                    transform_hlds__deforest__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 2)));
#line 891 "deforest.m"
                    transform_hlds__deforest__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 3)));
#line 891 "deforest.m"
                    transform_hlds__deforest__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 4)));
#line 891 "deforest.m"
                    transform_hlds__deforest__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 5)));
#line 891 "deforest.m"
                  }
#line 891 "deforest.m"
                  {
#line 891 "deforest.m"
                    transform_hlds__deforest__can_optimize_conj_6_p_0_2(transform_hlds__deforest__env_ptr);
                  }
#line 891 "deforest.m"
                }
#line 891 "deforest.m"
            }
#line 893 "deforest.m"
            {
#line 893 "deforest.m"
              MR_Word transform_hlds__deforest__V_68_68;
#line 893 "deforest.m"
              MR_Word transform_hlds__deforest__V_69_69;
#line 894 "deforest.m"
              MR_Word transform_hlds__deforest__V_34_34;
#line 894 "deforest.m"
              MR_Word transform_hlds__deforest__V_30_30;
#line 894 "deforest.m"
              MR_Word transform_hlds__deforest__V_31_31;
#line 894 "deforest.m"
              MR_Word transform_hlds__deforest__V_32_32;
#line 894 "deforest.m"
              MR_Word transform_hlds__deforest__V_33_33;

#line 893 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
#line 893 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 893 "deforest.m"
                {
#line 893 "deforest.m"
                  transform_hlds__deforest__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
#line 893 "deforest.m"
                  {
#line 894 "deforest.m"
                    transform_hlds__deforest__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_68_68, (MR_Integer) 0)));
#line 894 "deforest.m"
                    transform_hlds__deforest__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_68_68, (MR_Integer) 1)));
#line 894 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_69_69)) == (MR_mktag((MR_Integer) 2)));
#line 894 "deforest.m"
                    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 894 "deforest.m"
                      {
#line 894 "deforest.m"
                        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 0)));
#line 894 "deforest.m"
                        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 1)));
#line 894 "deforest.m"
                        transform_hlds__deforest__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 2)));
#line 894 "deforest.m"
                        transform_hlds__deforest__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 3)));
#line 894 "deforest.m"
                        transform_hlds__deforest__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 4)));
#line 894 "deforest.m"
                        transform_hlds__deforest__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 5)));
#line 894 "deforest.m"
                      }
#line 893 "deforest.m"
                  }
#line 893 "deforest.m"
                }
#line 893 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 893 "deforest.m"
                {
#line 893 "deforest.m"
                  transform_hlds__deforest__can_optimize_conj_6_p_0_2(transform_hlds__deforest__env_ptr);
                }
#line 893 "deforest.m"
            }
#line 889 "deforest.m"
          }
#line 889 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
#line 889 "deforest.m"
      }
#line 889 "deforest.m"
    else
#line 889 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
#line 889 "deforest.m"
  }
#line 889 "deforest.m"
}

#line 916 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_4(
#line 916 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 916 "deforest.m"
{
#line 916 "deforest.m"
  {
#line 916 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 916 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1, 1);
#line 916 "deforest.m"
  }
#line 916 "deforest.m"
}

#line 916 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_5(
#line 916 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 916 "deforest.m"
{
#line 916 "deforest.m"
  {
#line 916 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 922 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__InlinePromisedPure_48 = (MR_Integer) 0;
#line 923 "deforest.m"
    {
#line 923 "deforest.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredInfo_12, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CallerMarkers_49);
    }
#line 924 "deforest.m"
    {
#line 924 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = transform_hlds__inlining__can_inline_proc_6_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_97, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_98, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_40, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__InlinePromisedPure_48, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CallerMarkers_49, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14);
    }
#line 924 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 924 "deforest.m"
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 924 "deforest.m"
      {
#line 924 "deforest.m"
        transform_hlds__deforest__can_optimize_conj_6_p_0_4(transform_hlds__deforest__env_ptr);
#line 924 "deforest.m"
        return;
      }
#line 916 "deforest.m"
  }
#line 916 "deforest.m"
}

#line 916 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_6(
#line 916 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 916 "deforest.m"
{
#line 916 "deforest.m"
  {
#line 916 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 916 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1) == 0)
#line 916 "deforest.m"
      {
#line 910 "deforest.m"
        {
#line 910 "deforest.m"
          MR_Word transform_hlds__deforest__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 0)));
#line 911 "deforest.m"
          MR_Word transform_hlds__deforest__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 1)));
#line 911 "deforest.m"
          MR_Word transform_hlds__deforest__V_39_39;
#line 911 "deforest.m"
          MR_Word transform_hlds__deforest__V_41_41;
#line 911 "deforest.m"
          MR_Word transform_hlds__deforest__V_42_42;

#line 911 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_77_77)) == (MR_mktag((MR_Integer) 2)));
#line 911 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 911 "deforest.m"
            {
#line 911 "deforest.m"
              {
#line 911 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 0)));
#line 911 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_98 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 1)));
#line 911 "deforest.m"
                transform_hlds__deforest__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 2)));
#line 911 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 3)));
#line 911 "deforest.m"
                transform_hlds__deforest__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 4)));
#line 911 "deforest.m"
                transform_hlds__deforest__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 5)));
#line 911 "deforest.m"
              }
#line 910 "deforest.m"
              {
#line 910 "deforest.m"
                transform_hlds__deforest__can_optimize_conj_6_p_0_5(transform_hlds__deforest__env_ptr);
              }
#line 911 "deforest.m"
            }
#line 910 "deforest.m"
        }
#line 913 "deforest.m"
        {
#line 913 "deforest.m"
          MR_Word transform_hlds__deforest__V_75_75;
#line 913 "deforest.m"
          MR_Word transform_hlds__deforest__V_76_76;
#line 914 "deforest.m"
          MR_Word transform_hlds__deforest__V_47_47;
#line 914 "deforest.m"
          MR_Word transform_hlds__deforest__V_44_44;
#line 914 "deforest.m"
          MR_Word transform_hlds__deforest__V_45_45;
#line 914 "deforest.m"
          MR_Word transform_hlds__deforest__V_46_46;

#line 913 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
#line 913 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 913 "deforest.m"
            {
#line 913 "deforest.m"
              transform_hlds__deforest__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
#line 913 "deforest.m"
              {
#line 914 "deforest.m"
                transform_hlds__deforest__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_75_75, (MR_Integer) 0)));
#line 914 "deforest.m"
                transform_hlds__deforest__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_75_75, (MR_Integer) 1)));
#line 914 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_76_76)) == (MR_mktag((MR_Integer) 2)));
#line 914 "deforest.m"
                if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 914 "deforest.m"
                  {
#line 914 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 0)));
#line 914 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_98 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 1)));
#line 914 "deforest.m"
                    transform_hlds__deforest__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 2)));
#line 914 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 3)));
#line 914 "deforest.m"
                    transform_hlds__deforest__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 4)));
#line 914 "deforest.m"
                    transform_hlds__deforest__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 5)));
#line 914 "deforest.m"
                  }
#line 913 "deforest.m"
              }
#line 913 "deforest.m"
            }
#line 913 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 913 "deforest.m"
            {
#line 913 "deforest.m"
              transform_hlds__deforest__can_optimize_conj_6_p_0_5(transform_hlds__deforest__env_ptr);
            }
#line 913 "deforest.m"
        }
#line 916 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
#line 916 "deforest.m"
      }
#line 916 "deforest.m"
    else
#line 916 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
#line 916 "deforest.m"
  }
#line 916 "deforest.m"
}

#line 949 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_7(
#line 949 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 949 "deforest.m"
{
#line 949 "deforest.m"
  {
#line 949 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 949 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2, 1);
#line 949 "deforest.m"
  }
#line 949 "deforest.m"
}

#line 949 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_8(
#line 949 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 949 "deforest.m"
{
#line 949 "deforest.m"
  {
#line 949 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 949 "deforest.m"
    {
#line 950 "deforest.m"
      MR_Word transform_hlds__deforest__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50, (MR_Integer) 0)));
#line 951 "deforest.m"
      MR_Word transform_hlds__deforest__V_86_86;

#line 950 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50, (MR_Integer) 1)));
#line 951 "deforest.m"
      {
#line 951 "deforest.m"
        transform_hlds__deforest__V_86_86 = hlds__hlds_goal__goal_info_get_purity_1_f_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_52);
      }
#line 951 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (transform_hlds__deforest__V_86_86 == (MR_Integer) 0);
#line 951 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 951 "deforest.m"
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 951 "deforest.m"
        {
#line 951 "deforest.m"
          transform_hlds__deforest__can_optimize_conj_6_p_0_7(transform_hlds__deforest__env_ptr);
#line 951 "deforest.m"
          return;
        }
#line 949 "deforest.m"
    }
#line 949 "deforest.m"
  }
#line 949 "deforest.m"
}

#line 946 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_9(
#line 946 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 946 "deforest.m"
{
#line 946 "deforest.m"
  {
#line 946 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 946 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_50);
#line 946 "deforest.m"
    {
#line 946 "deforest.m"
      transform_hlds__deforest__can_optimize_conj_6_p_0_8(transform_hlds__deforest__env_ptr);
#line 946 "deforest.m"
      return;
    }
#line 946 "deforest.m"
  }
#line 946 "deforest.m"
}

#line 949 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_10(
#line 949 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 949 "deforest.m"
{
#line 949 "deforest.m"
  {
#line 949 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 949 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2) == 0)
#line 949 "deforest.m"
      {
#line 946 "deforest.m"
        {
#line 946 "deforest.m"
          {
#line 946 "deforest.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_50, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8, transform_hlds__deforest__can_optimize_conj_6_p_0_9, transform_hlds__deforest__env_ptr);
          }
#line 946 "deforest.m"
        }
#line 947 "deforest.m"
        {
#line 947 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50 = (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7;
#line 947 "deforest.m"
          {
#line 947 "deforest.m"
            transform_hlds__deforest__can_optimize_conj_6_p_0_8(transform_hlds__deforest__env_ptr);
          }
#line 947 "deforest.m"
        }
#line 948 "deforest.m"
        {
#line 948 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
#line 948 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 948 "deforest.m"
            {
#line 948 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
#line 948 "deforest.m"
              {
#line 948 "deforest.m"
                transform_hlds__deforest__can_optimize_conj_6_p_0_8(transform_hlds__deforest__env_ptr);
              }
#line 948 "deforest.m"
            }
#line 948 "deforest.m"
        }
#line 949 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
#line 949 "deforest.m"
      }
#line 949 "deforest.m"
    else
#line 949 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
#line 949 "deforest.m"
  }
#line 949 "deforest.m"
}

#line 963 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_11(
#line 963 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 963 "deforest.m"
{
#line 963 "deforest.m"
  {
#line 963 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 963 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3, 1);
#line 963 "deforest.m"
  }
#line 963 "deforest.m"
}

#line 963 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_12(
#line 963 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 963 "deforest.m"
{
#line 963 "deforest.m"
  {
#line 963 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 967 "deforest.m"
    {
#line 967 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = hlds__goal_util__reordering_maintains_termination_old_4_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_53, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_54);
    }
#line 967 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 967 "deforest.m"
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 967 "deforest.m"
      {
#line 967 "deforest.m"
        transform_hlds__deforest__can_optimize_conj_6_p_0_11(transform_hlds__deforest__env_ptr);
#line 967 "deforest.m"
        return;
      }
#line 963 "deforest.m"
  }
#line 963 "deforest.m"
}

#line 964 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_13(
#line 964 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 964 "deforest.m"
{
#line 964 "deforest.m"
  {
#line 964 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 964 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_54 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_54);
#line 964 "deforest.m"
    {
#line 964 "deforest.m"
      transform_hlds__deforest__can_optimize_conj_6_p_0_12(transform_hlds__deforest__env_ptr);
#line 964 "deforest.m"
      return;
    }
#line 964 "deforest.m"
  }
#line 964 "deforest.m"
}

#line 963 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_14(
#line 963 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 963 "deforest.m"
{
#line 963 "deforest.m"
  {
#line 963 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 963 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3) == 0)
#line 963 "deforest.m"
      {
#line 963 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_20)) == (MR_mktag((MR_Integer) 1)));
#line 963 "deforest.m"
        if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 963 "deforest.m"
          {
#line 963 "deforest.m"
            (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_20, (MR_Integer) 0)));
#line 963 "deforest.m"
            {
#line 964 "deforest.m"
              {
#line 964 "deforest.m"
                {
#line 964 "deforest.m"
                  mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_54, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8, transform_hlds__deforest__can_optimize_conj_6_p_0_13, transform_hlds__deforest__env_ptr);
                }
#line 964 "deforest.m"
              }
#line 965 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
#line 965 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 965 "deforest.m"
                {
#line 965 "deforest.m"
                  (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
#line 965 "deforest.m"
                  {
#line 965 "deforest.m"
                    transform_hlds__deforest__can_optimize_conj_6_p_0_12(transform_hlds__deforest__env_ptr);
                  }
#line 965 "deforest.m"
                }
#line 963 "deforest.m"
            }
#line 963 "deforest.m"
          }
#line 963 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
#line 963 "deforest.m"
      }
#line 963 "deforest.m"
    else
#line 963 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
#line 963 "deforest.m"
  }
#line 963 "deforest.m"
}

#line 855 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0(
#line 855 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_7,
#line 855 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_8,
#line 855 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_9,
#line 855 "deforest.m"
  MR_Word * transform_hlds__deforest__ShouldTry_10,
#line 855 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56,
#line 855 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_57)
#line 855 "deforest.m"
{
#line 855 "deforest.m"
  {
#line 855 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s transform_hlds__deforest__env;

#line 855 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7 = transform_hlds__deforest__EarlierGoal_7;
#line 855 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8 = transform_hlds__deforest__BetweenGoals_8;
#line 855 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9 = transform_hlds__deforest__MaybeLaterGoal_9;
#line 859 "deforest.m"
    {
#line 859 "deforest.m"
      MR_Integer transform_hlds__deforest__Depth0_13;
#line 859 "deforest.m"
      MR_Word transform_hlds__deforest__Globals_15;
#line 859 "deforest.m"
      MR_Word transform_hlds__deforest__DepthLimitOpt_16;
#line 859 "deforest.m"
      MR_Word transform_hlds__deforest__DebugPD_17;
#line 859 "deforest.m"
      MR_Integer transform_hlds__deforest__Depth_18;
#line 872 "deforest.m"
      MR_Integer transform_hlds__deforest__MaxDepth_21;

#line 860 "deforest.m"
      {
#line 860 "deforest.m"
        transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredInfo_12);
      }
#line 861 "deforest.m"
      {
#line 861 "deforest.m"
        transform_hlds__pd_info__pd_info_get_depth_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56, &transform_hlds__deforest__Depth0_13);
      }
#line 862 "deforest.m"
      {
#line 862 "deforest.m"
        transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14);
      }
#line 863 "deforest.m"
      {
#line 863 "deforest.m"
        hlds__hlds_module__module_info_get_globals_2_p_0((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14, &transform_hlds__deforest__Globals_15);
      }
#line 864 "deforest.m"
      {
#line 864 "deforest.m"
        libs__globals__lookup_option_3_p_0(transform_hlds__deforest__Globals_15, (MR_Integer) 389, &transform_hlds__deforest__DepthLimitOpt_16);
      }
#line 865 "deforest.m"
      {
#line 865 "deforest.m"
        libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_15, (MR_Integer) 71, &transform_hlds__deforest__DebugPD_17);
      }
#line 866 "deforest.m"
      transform_hlds__deforest__Depth_18 = (transform_hlds__deforest__Depth0_13 + (MR_Integer) 1);
#line 867 "deforest.m"
      {
#line 867 "deforest.m"
        transform_hlds__pd_info__pd_info_set_depth_3_p_0(transform_hlds__deforest__Depth_18, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56, transform_hlds__deforest__STATE_VARIABLE_PDInfo_57);
      }
#line 868 "deforest.m"
      {
#line 868 "deforest.m"
        libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_15, (MR_Integer) 392, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19);
      }
#line 870 "deforest.m"
      {
#line 870 "deforest.m"
        libs__globals__lookup_option_3_p_0(transform_hlds__deforest__Globals_15, (MR_Integer) 162, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_20);
      }
#line 872 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__DepthLimitOpt_16)) == (MR_mktag((MR_Integer) 2)));
#line 872 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 872 "deforest.m"
        {
#line 872 "deforest.m"
          transform_hlds__deforest__MaxDepth_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__DepthLimitOpt_16, (MR_Integer) 0)));
#line 873 "deforest.m"
          (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (transform_hlds__deforest__MaxDepth_21 == (MR_Integer) -1);
#line 873 "deforest.m"
          (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 872 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 874 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (transform_hlds__deforest__Depth0_13 >= transform_hlds__deforest__MaxDepth_21);
#line 872 "deforest.m"
        }
#line 883 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 882 "deforest.m"
        *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 883 "deforest.m"
      else
#line 907 "deforest.m"
        {
#line 889 "deforest.m"
          {
#line 889 "deforest.m"
            transform_hlds__deforest__can_optimize_conj_6_p_0_3(&transform_hlds__deforest__env);
          }
#line 907 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 905 "deforest.m"
            {
#line 904 "deforest.m"
              {
#line 904 "deforest.m"
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "goal too large\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 906 "deforest.m"
              *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 905 "deforest.m"
            }
#line 907 "deforest.m"
          else
#line 931 "deforest.m"
            {
#line 916 "deforest.m"
              {
#line 916 "deforest.m"
                transform_hlds__deforest__can_optimize_conj_6_p_0_6(&transform_hlds__deforest__env);
              }
#line 931 "deforest.m"
              if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 929 "deforest.m"
                {
#line 928 "deforest.m"
                  {
#line 928 "deforest.m"
                    transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "non-inlineable calls\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 930 "deforest.m"
                  *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 929 "deforest.m"
                }
#line 931 "deforest.m"
              else
#line 943 "deforest.m"
                {
#line 936 "deforest.m"
                  {
#line 936 "deforest.m"
                    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = transform_hlds__deforest__is_simple_goal_list_1_p_0((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8);
                  }
#line 936 "deforest.m"
                  (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 943 "deforest.m"
                  if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 941 "deforest.m"
                    {
#line 939 "deforest.m"
                      {
#line 939 "deforest.m"
                        transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "between goals not simple enough\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                      }
#line 942 "deforest.m"
                      *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 941 "deforest.m"
                    }
#line 943 "deforest.m"
                  else
#line 958 "deforest.m"
                    {
#line 949 "deforest.m"
                      {
#line 949 "deforest.m"
                        transform_hlds__deforest__can_optimize_conj_6_p_0_10(&transform_hlds__deforest__env);
                      }
#line 958 "deforest.m"
                      if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 956 "deforest.m"
                        {
#line 954 "deforest.m"
                          {
#line 954 "deforest.m"
                            transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "goal list contains impure goal(s)\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                          }
#line 957 "deforest.m"
                          *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 956 "deforest.m"
                        }
#line 958 "deforest.m"
                      else
#line 975 "deforest.m"
                        {
#line 963 "deforest.m"
                          {
#line 963 "deforest.m"
                            transform_hlds__deforest__can_optimize_conj_6_p_0_14(&transform_hlds__deforest__env);
                          }
#line 975 "deforest.m"
                          if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 973 "deforest.m"
                            {
#line 971 "deforest.m"
                              {
#line 971 "deforest.m"
                                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "interleaving execution could change termination behaviour\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                              }
#line 974 "deforest.m"
                              *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 973 "deforest.m"
                            }
#line 975 "deforest.m"
                          else
#line 976 "deforest.m"
                            *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 1;
#line 975 "deforest.m"
                        }
#line 958 "deforest.m"
                    }
#line 943 "deforest.m"
                }
#line 931 "deforest.m"
            }
#line 907 "deforest.m"
        }
#line 859 "deforest.m"
    }
#line 855 "deforest.m"
  }
#line 855 "deforest.m"
}

#line 836 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_1(
#line 836 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 836 "deforest.m"
{
#line 836 "deforest.m"
  {
#line 836 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 836 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0, 1);
#line 836 "deforest.m"
  }
#line 836 "deforest.m"
}

#line 836 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_2(
#line 836 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 836 "deforest.m"
{
#line 836 "deforest.m"
  {
#line 836 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 836 "deforest.m"
    {
#line 840 "deforest.m"
      MR_Word transform_hlds__deforest__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36, (MR_Integer) 0)));

#line 840 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36, (MR_Integer) 1)));
#line 841 "deforest.m"
      {
#line 841 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_39 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_38);
      }
#line 7223 "transform_hlds.deforest.c"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 842 "deforest.m"
      {
#line 842 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_40 = parse_tree__set_of_var__set_to_bitset_1_f_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_60_60, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_35);
      }
#line 843 "deforest.m"
      {
#line 843 "deforest.m"
        parse_tree__set_of_var__intersect_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_60_60, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_39, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_40, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_41);
      }
#line 844 "deforest.m"
      {
#line 844 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_60_60, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_41);
      }
#line 844 "deforest.m"
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 844 "deforest.m"
        {
#line 844 "deforest.m"
          transform_hlds__deforest__should_try_deforestation_4_p_0_1(transform_hlds__deforest__env_ptr);
#line 844 "deforest.m"
          return;
        }
#line 836 "deforest.m"
    }
#line 836 "deforest.m"
  }
#line 836 "deforest.m"
}

#line 837 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_3(
#line 837 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 837 "deforest.m"
{
#line 837 "deforest.m"
  {
#line 837 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 837 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_36);
#line 837 "deforest.m"
    {
#line 837 "deforest.m"
      transform_hlds__deforest__should_try_deforestation_4_p_0_2(transform_hlds__deforest__env_ptr);
#line 837 "deforest.m"
      return;
    }
#line 837 "deforest.m"
  }
#line 837 "deforest.m"
}

#line 836 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_4(
#line 836 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 836 "deforest.m"
{
#line 836 "deforest.m"
  {
#line 836 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 836 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0) == 0)
#line 836 "deforest.m"
      {
#line 836 "deforest.m"
        {
#line 836 "deforest.m"
          MR_Word transform_hlds__deforest__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9, (MR_Integer) 0)));
#line 836 "deforest.m"
          MR_Word transform_hlds__deforest__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9, (MR_Integer) 1)));

#line 836 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9, (MR_Integer) 2)));
#line 837 "deforest.m"
          {
#line 837 "deforest.m"
            {
#line 837 "deforest.m"
              mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_36, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10, transform_hlds__deforest__should_try_deforestation_4_p_0_3, transform_hlds__deforest__env_ptr);
            }
#line 837 "deforest.m"
          }
#line 838 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36 = (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11;
#line 838 "deforest.m"
          {
#line 838 "deforest.m"
            transform_hlds__deforest__should_try_deforestation_4_p_0_2(transform_hlds__deforest__env_ptr);
          }
#line 836 "deforest.m"
        }
#line 836 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = MR_FALSE;
#line 836 "deforest.m"
      }
#line 836 "deforest.m"
    else
#line 836 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = MR_TRUE;
#line 836 "deforest.m"
  }
#line 836 "deforest.m"
}

#line 811 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0(
#line 811 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_5,
#line 811 "deforest.m"
  MR_Word * transform_hlds__deforest__ShouldTry_6,
#line 811 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_42,
#line 811 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_43)
#line 811 "deforest.m"
{
#line 811 "deforest.m"
  {
#line 811 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s transform_hlds__deforest__env;

#line 814 "deforest.m"
    {
#line 814 "deforest.m"
      MR_Word transform_hlds__deforest__EarlierGoal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 0)));
#line 814 "deforest.m"
      MR_Word transform_hlds__deforest__UselessVersions_14;
#line 814 "deforest.m"
      MR_Word transform_hlds__deforest__ModuleInfo0_15;
#line 814 "deforest.m"
      MR_Word transform_hlds__deforest__Globals_16;
#line 815 "deforest.m"
      MR_Word transform_hlds__deforest__V_12_12;
#line 815 "deforest.m"
      MR_Word transform_hlds__deforest__V_13_13;
#line 820 "deforest.m"
      MR_Word transform_hlds__deforest__DebugPD_17;
#line 822 "deforest.m"
      MR_Word transform_hlds__deforest__TypeInfo_58_58;
#line 822 "deforest.m"
      MR_Word transform_hlds__deforest__PredId1_18;
#line 822 "deforest.m"
      MR_Integer transform_hlds__deforest__ProcId1_19;
#line 822 "deforest.m"
      MR_Word transform_hlds__deforest__PredId2_25;
#line 822 "deforest.m"
      MR_Integer transform_hlds__deforest__ProcId2_26;
#line 822 "deforest.m"
      MR_Word transform_hlds__deforest__V_45_45;
#line 822 "deforest.m"
      MR_Word transform_hlds__deforest__V_46_46;
#line 822 "deforest.m"
      MR_Word transform_hlds__deforest__V_47_47;
#line 822 "deforest.m"
      MR_Word transform_hlds__deforest__V_48_48;
#line 822 "deforest.m"
      MR_Word transform_hlds__deforest__V_49_49;
#line 822 "deforest.m"
      MR_Word transform_hlds__deforest__V_24_24;
#line 822 "deforest.m"
      MR_Word transform_hlds__deforest__V_20_20;
#line 822 "deforest.m"
      MR_Word transform_hlds__deforest__V_21_21;
#line 822 "deforest.m"
      MR_Word transform_hlds__deforest__V_22_22;
#line 822 "deforest.m"
      MR_Word transform_hlds__deforest__V_23_23;
#line 823 "deforest.m"
      MR_Word transform_hlds__deforest__V_31_31;
#line 823 "deforest.m"
      MR_Word transform_hlds__deforest__V_27_27;
#line 823 "deforest.m"
      MR_Word transform_hlds__deforest__V_28_28;
#line 823 "deforest.m"
      MR_Word transform_hlds__deforest__V_29_29;
#line 823 "deforest.m"
      MR_Word transform_hlds__deforest__V_30_30;

#line 815 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 1)));
#line 815 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 2)));
#line 815 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 3)));
#line 815 "deforest.m"
      transform_hlds__deforest__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 4)));
#line 815 "deforest.m"
      transform_hlds__deforest__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 5)));
#line 817 "deforest.m"
      {
#line 817 "deforest.m"
        transform_hlds__pd_info__pd_info_get_useless_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_42, &transform_hlds__deforest__UselessVersions_14);
      }
#line 818 "deforest.m"
      {
#line 818 "deforest.m"
        transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_42, &transform_hlds__deforest__ModuleInfo0_15);
      }
#line 819 "deforest.m"
      {
#line 819 "deforest.m"
        hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo0_15, &transform_hlds__deforest__Globals_16);
      }
#line 820 "deforest.m"
      {
#line 820 "deforest.m"
        libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_16, (MR_Integer) 71, &transform_hlds__deforest__DebugPD_17);
      }
#line 822 "deforest.m"
      transform_hlds__deforest__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_8, (MR_Integer) 0)));
#line 822 "deforest.m"
      transform_hlds__deforest__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_8, (MR_Integer) 1)));
#line 822 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_45_45)) == (MR_mktag((MR_Integer) 2)));
#line 822 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 822 "deforest.m"
        {
#line 822 "deforest.m"
          transform_hlds__deforest__PredId1_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 0)));
#line 822 "deforest.m"
          transform_hlds__deforest__ProcId1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 1)));
#line 822 "deforest.m"
          transform_hlds__deforest__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 2)));
#line 822 "deforest.m"
          transform_hlds__deforest__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 3)));
#line 822 "deforest.m"
          transform_hlds__deforest__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 4)));
#line 822 "deforest.m"
          transform_hlds__deforest__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 5)));
#line 823 "deforest.m"
          transform_hlds__deforest__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11, (MR_Integer) 0)));
#line 823 "deforest.m"
          transform_hlds__deforest__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11, (MR_Integer) 1)));
#line 823 "deforest.m"
          (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_46_46)) == (MR_mktag((MR_Integer) 2)));
#line 823 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 823 "deforest.m"
            {
#line 823 "deforest.m"
              transform_hlds__deforest__PredId2_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 0)));
#line 823 "deforest.m"
              transform_hlds__deforest__ProcId2_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 1)));
#line 823 "deforest.m"
              transform_hlds__deforest__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 2)));
#line 823 "deforest.m"
              transform_hlds__deforest__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 3)));
#line 823 "deforest.m"
              transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 4)));
#line 823 "deforest.m"
              transform_hlds__deforest__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 5)));
#line 7487 "transform_hlds.deforest.c"
              transform_hlds__deforest__TypeInfo_58_58 = (MR_Word) &transform_hlds__deforest_scalar_common_2[3];
#line 824 "deforest.m"
              {
#line 824 "deforest.m"
                transform_hlds__deforest__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 824 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_48_48, 0) = ((MR_Box) (transform_hlds__deforest__PredId1_18));
#line 824 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_48_48, 1) = ((MR_Box) (transform_hlds__deforest__ProcId1_19));
#line 824 "deforest.m"
              }
#line 824 "deforest.m"
              {
#line 824 "deforest.m"
                transform_hlds__deforest__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 824 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 0) = ((MR_Box) (transform_hlds__deforest__PredId2_25));
#line 824 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 1) = ((MR_Box) (transform_hlds__deforest__ProcId2_26));
#line 824 "deforest.m"
              }
#line 824 "deforest.m"
              {
#line 824 "deforest.m"
                transform_hlds__deforest__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 824 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_47_47, 0) = ((MR_Box) (transform_hlds__deforest__V_48_48));
#line 824 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_47_47, 1) = ((MR_Box) (transform_hlds__deforest__V_49_49));
#line 824 "deforest.m"
              }
#line 824 "deforest.m"
              {
#line 824 "deforest.m"
                (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = mercury__set__member_2_p_0(transform_hlds__deforest__TypeInfo_58_58, ((MR_Box) (transform_hlds__deforest__V_47_47)), transform_hlds__deforest__UselessVersions_14);
              }
#line 823 "deforest.m"
            }
#line 822 "deforest.m"
        }
#line 832 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 831 "deforest.m"
        *transform_hlds__deforest__ShouldTry_6 = (MR_Integer) 0;
#line 832 "deforest.m"
      else
#line 851 "deforest.m"
        {
#line 836 "deforest.m"
          {
#line 836 "deforest.m"
            transform_hlds__deforest__should_try_deforestation_4_p_0_4(&transform_hlds__deforest__env);
          }
#line 851 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 850 "deforest.m"
            *transform_hlds__deforest__ShouldTry_6 = (MR_Integer) 0;
#line 851 "deforest.m"
          else
#line 852 "deforest.m"
            *transform_hlds__deforest__ShouldTry_6 = (MR_Integer) 1;
#line 851 "deforest.m"
        }
#line 852 "deforest.m"
      *transform_hlds__deforest__STATE_VARIABLE_PDInfo_43 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_42;
#line 814 "deforest.m"
    }
#line 811 "deforest.m"
  }
#line 811 "deforest.m"
}

#line 788 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_2(
#line 788 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 788 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 788 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 788 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 788 "deforest.m"
{
#line 788 "deforest.m"
  {
#line 788 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 788 "deforest.m"
    MR_Word transform_hlds__deforest__conv2_HeadVar__3_3;

#line 788 "deforest.m"
    {
#line 788 "deforest.m"
      transform_hlds__pd_info__remove_version_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv2_HeadVar__3_3);
    }
#line 788 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv2_HeadVar__3_3));
#line 788 "deforest.m"
  }
#line 788 "deforest.m"
}

#line 675 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_1(
#line 675 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 675 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 675 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 675 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 675 "deforest.m"
{
#line 675 "deforest.m"
  {
#line 675 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 675 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_HeadVar__3_3;

#line 675 "deforest.m"
    {
#line 675 "deforest.m"
      transform_hlds__pd_info__pd_info_update_goal_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_HeadVar__3_3);
    }
#line 675 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__3_3));
#line 675 "deforest.m"
  }
#line 675 "deforest.m"
}

#line 648 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0(
#line 648 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_10,
#line 648 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo0_11,
#line 648 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82,
#line 648 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_83,
#line 648 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84,
#line 648 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85,
#line 648 "deforest.m"
  MR_Word * transform_hlds__deforest__Optimized_14,
#line 648 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86,
#line 648 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_87)
#line 648 "deforest.m"
{
#line 654 "deforest.m"
  {
#line 654 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_168_168;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_169_169;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_16;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_17;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__DebugPD_18;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__InstMap0_19;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__CreatedVersions0_20;
#line 654 "deforest.m"
    MR_Integer transform_hlds__deforest__Depth0_21;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__DeforestInfo_23;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__BeforeIrrelevant_24;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__AfterIrrelevant_25;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__ConjNonLocals_26;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__CurrPredProcId_27;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__Parents0_28;
#line 654 "deforest.m"
    MR_Integer transform_hlds__deforest__CostDelta0_29;
#line 654 "deforest.m"
    MR_Integer transform_hlds__deforest__SizeDelta0_30;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierGoal_31;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__BetweenGoals_33;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__LaterGoal_34;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__DeforestBranches_36;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__ShouldOptimize_37;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__Optimized0_38;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__Goals_39;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_135_135;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136;
#line 654 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151;
#line 663 "deforest.m"
    MR_Word transform_hlds__deforest__V_91_91;
#line 663 "deforest.m"
    MR_Word transform_hlds__deforest__V_93_93;
#line 675 "deforest.m"
    MR_Box transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_96_96;
#line 682 "deforest.m"
    MR_Word transform_hlds__deforest__V_32_32;
#line 682 "deforest.m"
    MR_Word transform_hlds__deforest__V_35_35;
#line 803 "deforest.m"
    MR_Word transform_hlds__deforest__V_154_154;
#line 803 "deforest.m"
    MR_Word transform_hlds__deforest__V_156_156;

#line 655 "deforest.m"
    {
#line 655 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__ModuleInfo_16);
    }
#line 656 "deforest.m"
    {
#line 656 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_16, &transform_hlds__deforest__Globals_17);
    }
#line 657 "deforest.m"
    {
#line 657 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_17, (MR_Integer) 71, &transform_hlds__deforest__DebugPD_18);
    }
#line 659 "deforest.m"
    {
#line 659 "deforest.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__InstMap0_19);
    }
#line 660 "deforest.m"
    {
#line 660 "deforest.m"
      transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__CreatedVersions0_20);
    }
#line 662 "deforest.m"
    {
#line 662 "deforest.m"
      transform_hlds__pd_info__pd_info_get_depth_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__Depth0_21);
    }
#line 665 "deforest.m"
    {
#line 665 "deforest.m"
      transform_hlds__deforest__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 665 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_93_93, 0) = ((MR_Box) (transform_hlds__deforest__Depth0_21));
#line 665 "deforest.m"
    }
#line 665 "deforest.m"
    {
#line 665 "deforest.m"
      transform_hlds__deforest__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_91_91, 0) = ((MR_Box) (transform_hlds__deforest__V_93_93));
#line 665 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "deforest.m"
    }
#line 664 "deforest.m"
    {
#line 664 "deforest.m"
      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "checking for deforestation at depth %i\n", transform_hlds__deforest__V_91_91);
    }
#line 668 "deforest.m"
    {
#line 668 "deforest.m"
      transform_hlds__deforest__reorder_conj_5_p_0(transform_hlds__deforest__DeforestInfo0_11, &transform_hlds__deforest__DeforestInfo_23, &transform_hlds__deforest__BeforeIrrelevant_24, &transform_hlds__deforest__AfterIrrelevant_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86);
    }
#line 671 "deforest.m"
    {
#line 671 "deforest.m"
      transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(transform_hlds__deforest__NonLocals_10, transform_hlds__deforest__DeforestInfo_23, transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82, transform_hlds__deforest__BeforeIrrelevant_24, transform_hlds__deforest__AfterIrrelevant_25, transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84, &transform_hlds__deforest__ConjNonLocals_26);
    }
#line 7787 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_168_168 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 7789 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_169_169 = (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0;
#line 675 "deforest.m"
    {
#line 675 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_168_168, transform_hlds__deforest__TypeCtorInfo_169_169, (MR_Word) &transform_hlds__deforest_scalar_common_2[9], transform_hlds__deforest__BeforeIrrelevant_24, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86)), &transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_96_96);
    }
#line 675 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96 = ((MR_Word) transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_96_96);
#line 677 "deforest.m"
    {
#line 677 "deforest.m"
      transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__CurrPredProcId_27);
    }
#line 678 "deforest.m"
    {
#line 678 "deforest.m"
      transform_hlds__pd_info__pd_info_get_parents_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__Parents0_28);
    }
#line 679 "deforest.m"
    {
#line 679 "deforest.m"
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__CostDelta0_29);
    }
#line 680 "deforest.m"
    {
#line 680 "deforest.m"
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__SizeDelta0_30);
    }
#line 682 "deforest.m"
    transform_hlds__deforest__EarlierGoal_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 0)));
#line 682 "deforest.m"
    transform_hlds__deforest__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 1)));
#line 682 "deforest.m"
    transform_hlds__deforest__BetweenGoals_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 2)));
#line 682 "deforest.m"
    transform_hlds__deforest__LaterGoal_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 3)));
#line 682 "deforest.m"
    transform_hlds__deforest__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 4)));
#line 682 "deforest.m"
    transform_hlds__deforest__DeforestBranches_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 5)));
#line 685 "deforest.m"
    {
#line 685 "deforest.m"
      transform_hlds__deforest__should_try_deforestation_4_p_0(transform_hlds__deforest__DeforestInfo_23, &transform_hlds__deforest__ShouldOptimize_37, transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
    }
#line 690 "deforest.m"
    if ((transform_hlds__deforest__ShouldOptimize_37 == (MR_Integer) 0))
#line 687 "deforest.m"
      {
#line 688 "deforest.m"
        transform_hlds__deforest__Optimized0_38 = (MR_Integer) 0;
#line 689 "deforest.m"
        transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 689 "deforest.m"
        transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 687 "deforest.m"
      }
#line 690 "deforest.m"
    else
#line 715 "deforest.m"
      {
#line 715 "deforest.m"
        MR_Word transform_hlds__deforest__PredId1_40;
#line 715 "deforest.m"
        MR_Word transform_hlds__deforest__PredId2_47;
#line 693 "deforest.m"
        MR_Word transform_hlds__deforest__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 0)));
#line 693 "deforest.m"
        MR_Word transform_hlds__deforest__V_99_99;
#line 693 "deforest.m"
        MR_Word transform_hlds__deforest__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 1)));
#line 693 "deforest.m"
        MR_Integer transform_hlds__deforest__V_41_41;
#line 693 "deforest.m"
        MR_Word transform_hlds__deforest__V_42_42;
#line 693 "deforest.m"
        MR_Word transform_hlds__deforest__V_43_43;
#line 693 "deforest.m"
        MR_Word transform_hlds__deforest__V_44_44;
#line 693 "deforest.m"
        MR_Word transform_hlds__deforest__V_45_45;
#line 694 "deforest.m"
        MR_Word transform_hlds__deforest__V_53_53;
#line 694 "deforest.m"
        MR_Integer transform_hlds__deforest__V_48_48;
#line 694 "deforest.m"
        MR_Word transform_hlds__deforest__V_49_49;
#line 694 "deforest.m"
        MR_Word transform_hlds__deforest__V_50_50;
#line 694 "deforest.m"
        MR_Word transform_hlds__deforest__V_51_51;
#line 694 "deforest.m"
        MR_Word transform_hlds__deforest__V_52_52;

#line 693 "deforest.m"
        transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_98_98)) == (MR_mktag((MR_Integer) 2)));
#line 693 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 693 "deforest.m"
          {
#line 693 "deforest.m"
            transform_hlds__deforest__PredId1_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 0)));
#line 693 "deforest.m"
            transform_hlds__deforest__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 1)));
#line 693 "deforest.m"
            transform_hlds__deforest__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 2)));
#line 693 "deforest.m"
            transform_hlds__deforest__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 3)));
#line 693 "deforest.m"
            transform_hlds__deforest__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 4)));
#line 693 "deforest.m"
            transform_hlds__deforest__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 5)));
#line 694 "deforest.m"
            transform_hlds__deforest__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 0)));
#line 694 "deforest.m"
            transform_hlds__deforest__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 1)));
#line 694 "deforest.m"
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_99_99)) == (MR_mktag((MR_Integer) 2)));
#line 694 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 694 "deforest.m"
              {
#line 694 "deforest.m"
                transform_hlds__deforest__PredId2_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 0)));
#line 694 "deforest.m"
                transform_hlds__deforest__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 1)));
#line 694 "deforest.m"
                transform_hlds__deforest__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 2)));
#line 694 "deforest.m"
                transform_hlds__deforest__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 3)));
#line 694 "deforest.m"
                transform_hlds__deforest__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 4)));
#line 694 "deforest.m"
                transform_hlds__deforest__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 5)));
#line 694 "deforest.m"
              }
#line 693 "deforest.m"
          }
#line 715 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 698 "deforest.m"
          {
#line 698 "deforest.m"
            MR_String transform_hlds__deforest__PredName1_54;
#line 698 "deforest.m"
            MR_String transform_hlds__deforest__PredName2_55;
#line 698 "deforest.m"
            MR_Word transform_hlds__deforest__MaybeGoal_56;
#line 698 "deforest.m"
            MR_Word transform_hlds__deforest__V_108_108;
#line 700 "deforest.m"
            MR_Word transform_hlds__deforest__V_102_102;
#line 700 "deforest.m"
            MR_Word transform_hlds__deforest__V_104_104;
#line 700 "deforest.m"
            MR_Word transform_hlds__deforest__V_105_105;
#line 700 "deforest.m"
            MR_Word transform_hlds__deforest__V_106_106;

#line 698 "deforest.m"
            {
#line 698 "deforest.m"
              transform_hlds__deforest__PredName1_54 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__deforest__ModuleInfo_16, transform_hlds__deforest__PredId1_40);
            }
#line 699 "deforest.m"
            {
#line 699 "deforest.m"
              transform_hlds__deforest__PredName2_55 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__deforest__ModuleInfo_16, transform_hlds__deforest__PredId2_47);
            }
#line 702 "deforest.m"
            {
#line 702 "deforest.m"
              transform_hlds__deforest__V_104_104 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 702 "deforest.m"
              MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_104_104, 0) = ((MR_Box) (transform_hlds__deforest__PredName1_54));
#line 702 "deforest.m"
            }
#line 702 "deforest.m"
            {
#line 702 "deforest.m"
              transform_hlds__deforest__V_106_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 702 "deforest.m"
              MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_106_106, 0) = ((MR_Box) (transform_hlds__deforest__PredName2_55));
#line 702 "deforest.m"
            }
#line 702 "deforest.m"
            {
#line 702 "deforest.m"
              transform_hlds__deforest__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_105_105, 0) = ((MR_Box) (transform_hlds__deforest__V_106_106));
#line 702 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "deforest.m"
            }
#line 702 "deforest.m"
            {
#line 702 "deforest.m"
              transform_hlds__deforest__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_102_102, 0) = ((MR_Box) (transform_hlds__deforest__V_104_104));
#line 702 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_102_102, 1) = ((MR_Box) (transform_hlds__deforest__V_105_105));
#line 702 "deforest.m"
            }
#line 701 "deforest.m"
            {
#line 701 "deforest.m"
              transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "deforesting calls to %s and %s\n", transform_hlds__deforest__V_102_102);
            }
#line 705 "deforest.m"
            {
#line 705 "deforest.m"
              transform_hlds__deforest__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 705 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_108_108, 0) = ((MR_Box) (transform_hlds__deforest__LaterGoal_34));
#line 705 "deforest.m"
            }
#line 704 "deforest.m"
            {
#line 704 "deforest.m"
              transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(transform_hlds__deforest__EarlierGoal_31, transform_hlds__deforest__BetweenGoals_33, transform_hlds__deforest__V_108_108, &transform_hlds__deforest__MaybeGoal_56, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
            }
#line 710 "deforest.m"
            if ((transform_hlds__deforest__MaybeGoal_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 711 "deforest.m"
              {
#line 712 "deforest.m"
                transform_hlds__deforest__Optimized0_38 = (MR_Integer) 0;
#line 713 "deforest.m"
                transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 711 "deforest.m"
              }
#line 710 "deforest.m"
            else
#line 707 "deforest.m"
              {
#line 707 "deforest.m"
                MR_Word transform_hlds__deforest__Goal_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeGoal_56, (MR_Integer) 0)));

#line 708 "deforest.m"
                transform_hlds__deforest__Optimized0_38 = (MR_Integer) 1;
#line 709 "deforest.m"
                {
#line 709 "deforest.m"
                  transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 0) = ((MR_Box) (transform_hlds__deforest__Goal_57));
#line 709 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "deforest.m"
                }
#line 707 "deforest.m"
              }
#line 698 "deforest.m"
          }
#line 715 "deforest.m"
        else
#line 738 "deforest.m"
          {
#line 738 "deforest.m"
            MR_Word transform_hlds__deforest__PredId_60;
#line 738 "deforest.m"
            MR_Word transform_hlds__deforest__PredProcId_67;
#line 720 "deforest.m"
            MR_Word transform_hlds__deforest__EarlierGoalExpr_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 0)));
#line 720 "deforest.m"
            MR_Integer transform_hlds__deforest__ProcId_61;
#line 720 "deforest.m"
            MR_Word transform_hlds__deforest__V_111_111;
#line 720 "deforest.m"
            MR_Word transform_hlds__deforest__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 1)));
#line 722 "deforest.m"
            MR_Word transform_hlds__deforest__V_66_66;
#line 722 "deforest.m"
            MR_Word transform_hlds__deforest__V_62_62;
#line 722 "deforest.m"
            MR_Word transform_hlds__deforest__V_63_63;
#line 722 "deforest.m"
            MR_Word transform_hlds__deforest__V_64_64;
#line 722 "deforest.m"
            MR_Word transform_hlds__deforest__V_65_65;
#line 725 "deforest.m"
            MR_Word transform_hlds__deforest__TypeCtorInfo_170_170;

#line 721 "deforest.m"
            {
#line 721 "deforest.m"
              transform_hlds__deforest__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__deforest__EarlierGoalExpr_58);
            }
#line 720 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 720 "deforest.m"
              {
#line 722 "deforest.m"
                transform_hlds__deforest__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 0)));
#line 722 "deforest.m"
                transform_hlds__deforest__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 1)));
#line 722 "deforest.m"
                transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_111_111)) == (MR_mktag((MR_Integer) 2)));
#line 722 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 722 "deforest.m"
                  {
#line 722 "deforest.m"
                    transform_hlds__deforest__PredId_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 0)));
#line 722 "deforest.m"
                    transform_hlds__deforest__ProcId_61 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 1)));
#line 722 "deforest.m"
                    transform_hlds__deforest__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 2)));
#line 722 "deforest.m"
                    transform_hlds__deforest__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 3)));
#line 722 "deforest.m"
                    transform_hlds__deforest__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 4)));
#line 722 "deforest.m"
                    transform_hlds__deforest__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 5)));
#line 723 "deforest.m"
                    {
#line 723 "deforest.m"
                      transform_hlds__deforest__PredProcId_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 723 "deforest.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__deforest__PredProcId_67, 0) = ((MR_Box) (transform_hlds__deforest__PredId_60));
#line 723 "deforest.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__deforest__PredProcId_67, 1) = ((MR_Box) (transform_hlds__deforest__ProcId_61));
#line 723 "deforest.m"
                    }
#line 724 "deforest.m"
                    {
#line 724 "deforest.m"
                      transform_hlds__deforest__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__deforest__PredProcId_67, transform_hlds__deforest__CurrPredProcId_27);
                    }
#line 724 "deforest.m"
                    transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 720 "deforest.m"
                    if (transform_hlds__deforest__succeeded)
#line 720 "deforest.m"
                      {
#line 8127 "transform_hlds.deforest.c"
                        transform_hlds__deforest__TypeCtorInfo_170_170 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 725 "deforest.m"
                        {
#line 725 "deforest.m"
                          transform_hlds__deforest__succeeded = mercury__set__member_2_p_0(transform_hlds__deforest__TypeCtorInfo_170_170, ((MR_Box) (transform_hlds__deforest__PredProcId_67)), transform_hlds__deforest__Parents0_28);
                        }
#line 725 "deforest.m"
                        transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 720 "deforest.m"
                      }
#line 722 "deforest.m"
                  }
#line 720 "deforest.m"
              }
#line 738 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 727 "deforest.m"
              {
#line 727 "deforest.m"
                MR_String transform_hlds__deforest__CurrPredName_68;
#line 727 "deforest.m"
                MR_Word transform_hlds__deforest__Parents_69;
#line 727 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_119_119;
#line 727 "deforest.m"
                MR_Word transform_hlds__deforest__Goal_159;
#line 728 "deforest.m"
                MR_Word transform_hlds__deforest__V_114_114;
#line 728 "deforest.m"
                MR_Word transform_hlds__deforest__V_116_116;

#line 727 "deforest.m"
                {
#line 727 "deforest.m"
                  transform_hlds__deforest__CurrPredName_68 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__deforest__ModuleInfo_16, transform_hlds__deforest__PredId_60);
                }
#line 730 "deforest.m"
                {
#line 730 "deforest.m"
                  transform_hlds__deforest__V_116_116 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 730 "deforest.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_116_116, 0) = ((MR_Box) (transform_hlds__deforest__CurrPredName_68));
#line 730 "deforest.m"
                }
#line 730 "deforest.m"
                {
#line 730 "deforest.m"
                  transform_hlds__deforest__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_114_114, 0) = ((MR_Box) (transform_hlds__deforest__V_116_116));
#line 730 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "deforest.m"
                }
#line 729 "deforest.m"
                {
#line 729 "deforest.m"
                  transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Pushing call to %s into goal\n", transform_hlds__deforest__V_114_114);
                }
#line 732 "deforest.m"
                {
#line 732 "deforest.m"
                  mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__deforest__PredProcId_67)), transform_hlds__deforest__Parents0_28, &transform_hlds__deforest__Parents_69);
                }
#line 733 "deforest.m"
                {
#line 733 "deforest.m"
                  transform_hlds__pd_info__pd_info_set_parents_3_p_0(transform_hlds__deforest__Parents_69, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_119_119);
                }
#line 734 "deforest.m"
                {
#line 734 "deforest.m"
                  transform_hlds__deforest__push_goal_into_goal_8_p_0(transform_hlds__deforest__ConjNonLocals_26, transform_hlds__deforest__DeforestBranches_36, transform_hlds__deforest__EarlierGoal_31, transform_hlds__deforest__BetweenGoals_33, transform_hlds__deforest__LaterGoal_34, &transform_hlds__deforest__Goal_159, transform_hlds__deforest__STATE_VARIABLE_PDInfo_119_119, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
                }
#line 736 "deforest.m"
                {
#line 736 "deforest.m"
                  transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 0) = ((MR_Box) (transform_hlds__deforest__Goal_159));
#line 736 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 736 "deforest.m"
                }
#line 737 "deforest.m"
                transform_hlds__deforest__Optimized0_38 = (MR_Integer) 1;
#line 727 "deforest.m"
              }
#line 738 "deforest.m"
            else
#line 758 "deforest.m"
              {
#line 741 "deforest.m"
                MR_Word transform_hlds__deforest__LaterGoalExpr_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 0)));
#line 741 "deforest.m"
                MR_Word transform_hlds__deforest__EarlierGoalExpr_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 0)));
#line 741 "deforest.m"
                MR_Word transform_hlds__deforest__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 1)));
#line 742 "deforest.m"
                MR_Word transform_hlds__deforest__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 1)));

#line 743 "deforest.m"
                {
#line 743 "deforest.m"
                  transform_hlds__deforest__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__deforest__EarlierGoalExpr_160);
                }
#line 741 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 744 "deforest.m"
                  {
#line 744 "deforest.m"
                    transform_hlds__deforest__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__deforest__LaterGoalExpr_71);
                  }
#line 758 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 748 "deforest.m"
                  {
#line 748 "deforest.m"
                    MR_Integer transform_hlds__deforest__ConjSize1_73;
#line 748 "deforest.m"
                    MR_Integer transform_hlds__deforest__ConjSize2_74;
#line 748 "deforest.m"
                    MR_Integer transform_hlds__deforest__NewSize_75;
#line 748 "deforest.m"
                    MR_Integer transform_hlds__deforest__SizeDiff_76;
#line 748 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126;
#line 748 "deforest.m"
                    MR_Word transform_hlds__deforest__V_128_128;
#line 748 "deforest.m"
                    MR_Integer transform_hlds__deforest__V_129_129;
#line 748 "deforest.m"
                    MR_Word transform_hlds__deforest__Goal_161;

#line 747 "deforest.m"
                    {
#line 747 "deforest.m"
                      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Pushing goal into goal\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                    }
#line 749 "deforest.m"
                    {
#line 749 "deforest.m"
                      transform_hlds__deforest__push_goal_into_goal_8_p_0(transform_hlds__deforest__ConjNonLocals_26, transform_hlds__deforest__DeforestBranches_36, transform_hlds__deforest__EarlierGoal_31, transform_hlds__deforest__BetweenGoals_33, transform_hlds__deforest__LaterGoal_34, &transform_hlds__deforest__Goal_161, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126);
                    }
#line 751 "deforest.m"
                    {
#line 751 "deforest.m"
                      transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 0) = ((MR_Box) (transform_hlds__deforest__Goal_161));
#line 751 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 751 "deforest.m"
                    }
#line 752 "deforest.m"
                    {
#line 752 "deforest.m"
                      transform_hlds__deforest__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_128_128, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_31));
#line 752 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_128_128, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_33));
#line 752 "deforest.m"
                    }
#line 752 "deforest.m"
                    {
#line 752 "deforest.m"
                      hlds__goal_util__goals_size_2_p_0(transform_hlds__deforest__V_128_128, &transform_hlds__deforest__ConjSize1_73);
                    }
#line 753 "deforest.m"
                    {
#line 753 "deforest.m"
                      hlds__goal_util__goal_size_2_p_0(transform_hlds__deforest__LaterGoal_34, &transform_hlds__deforest__ConjSize2_74);
                    }
#line 754 "deforest.m"
                    {
#line 754 "deforest.m"
                      hlds__goal_util__goal_size_2_p_0(transform_hlds__deforest__Goal_161, &transform_hlds__deforest__NewSize_75);
                    }
#line 755 "deforest.m"
                    transform_hlds__deforest__V_129_129 = (transform_hlds__deforest__NewSize_75 - transform_hlds__deforest__ConjSize1_73);
#line 755 "deforest.m"
                    transform_hlds__deforest__SizeDiff_76 = (transform_hlds__deforest__V_129_129 - transform_hlds__deforest__ConjSize2_74);
#line 756 "deforest.m"
                    {
#line 756 "deforest.m"
                      transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(transform_hlds__deforest__SizeDiff_76, transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
                    }
#line 757 "deforest.m"
                    transform_hlds__deforest__Optimized0_38 = (MR_Integer) 1;
#line 748 "deforest.m"
                  }
#line 758 "deforest.m"
                else
#line 761 "deforest.m"
                  {
#line 760 "deforest.m"
                    {
#line 760 "deforest.m"
                      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "not optimizing\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                    }
#line 762 "deforest.m"
                    transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 763 "deforest.m"
                    transform_hlds__deforest__Optimized0_38 = (MR_Integer) 0;
#line 763 "deforest.m"
                    transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 761 "deforest.m"
                  }
#line 758 "deforest.m"
              }
#line 738 "deforest.m"
          }
#line 715 "deforest.m"
      }
#line 766 "deforest.m"
    {
#line 766 "deforest.m"
      *transform_hlds__deforest__Optimized_14 = transform_hlds__deforest__is_improvement_worth_while_4_f_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109, transform_hlds__deforest__Optimized0_38, transform_hlds__deforest__CostDelta0_29, transform_hlds__deforest__SizeDelta0_30);
    }
#line 770 "deforest.m"
    {
#line 770 "deforest.m"
      transform_hlds__pd_info__pd_info_set_depth_3_p_0(transform_hlds__deforest__Depth0_21, transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_135_135);
    }
#line 771 "deforest.m"
    {
#line 771 "deforest.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_PDInfo_135_135, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136);
    }
#line 791 "deforest.m"
    if ((*transform_hlds__deforest__Optimized_14 == (MR_Integer) 0))
#line 773 "deforest.m"
      {
#line 773 "deforest.m"
        MR_Word transform_hlds__deforest__TypeCtorInfo_172_172;
#line 773 "deforest.m"
        MR_Word transform_hlds__deforest__CreatedVersions_77;
#line 773 "deforest.m"
        MR_Word transform_hlds__deforest__NewVersions0_78;
#line 773 "deforest.m"
        MR_Word transform_hlds__deforest__NewVersions_79;
#line 773 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_148_148;
#line 773 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149;
#line 788 "deforest.m"
        MR_Box transform_hlds__deforest__conv3_STATE_VARIABLE_PDInfo_151_151;

#line 781 "deforest.m"
        {
#line 781 "deforest.m"
          transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(transform_hlds__deforest__CostDelta0_29, transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_148_148);
        }
#line 782 "deforest.m"
        {
#line 782 "deforest.m"
          transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(transform_hlds__deforest__SizeDelta0_30, transform_hlds__deforest__STATE_VARIABLE_PDInfo_148_148, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149);
        }
#line 785 "deforest.m"
        {
#line 785 "deforest.m"
          transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149, &transform_hlds__deforest__CreatedVersions_77);
        }
#line 8392 "transform_hlds.deforest.c"
        transform_hlds__deforest__TypeCtorInfo_172_172 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 786 "deforest.m"
        {
#line 786 "deforest.m"
          mercury__set__difference_3_p_0(transform_hlds__deforest__TypeCtorInfo_172_172, transform_hlds__deforest__CreatedVersions_77, transform_hlds__deforest__CreatedVersions0_20, &transform_hlds__deforest__NewVersions0_78);
        }
#line 787 "deforest.m"
        {
#line 787 "deforest.m"
          mercury__set__to_sorted_list_2_p_0(transform_hlds__deforest__TypeCtorInfo_172_172, transform_hlds__deforest__NewVersions0_78, &transform_hlds__deforest__NewVersions_79);
        }
#line 788 "deforest.m"
        {
#line 788 "deforest.m"
          mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_172_172, transform_hlds__deforest__TypeCtorInfo_169_169, (MR_Word) &transform_hlds__deforest_scalar_common_2[10], transform_hlds__deforest__NewVersions_79, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149)), &transform_hlds__deforest__conv3_STATE_VARIABLE_PDInfo_151_151);
        }
#line 788 "deforest.m"
        transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151 = ((MR_Word) transform_hlds__deforest__conv3_STATE_VARIABLE_PDInfo_151_151);
#line 788 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85 = transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84;
#line 773 "deforest.m"
      }
#line 791 "deforest.m"
    else
#line 792 "deforest.m"
      {
#line 792 "deforest.m"
        MR_Word transform_hlds__deforest__GoalsToProcess_80;
#line 792 "deforest.m"
        MR_Word transform_hlds__deforest__GoalsAndInfo_81;
#line 792 "deforest.m"
        MR_Word transform_hlds__deforest__V_137_137;
#line 792 "deforest.m"
        MR_Word transform_hlds__deforest__V_138_138;
#line 792 "deforest.m"
        MR_Word transform_hlds__deforest__V_139_139;
#line 792 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_141_141;
#line 792 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_143_143;
#line 792 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_145_145;

#line 795 "deforest.m"
        {
#line 795 "deforest.m"
          transform_hlds__deforest__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_139_139, 0) = ((MR_Box) (transform_hlds__deforest__AfterIrrelevant_25));
#line 795 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 795 "deforest.m"
        }
#line 795 "deforest.m"
        {
#line 795 "deforest.m"
          transform_hlds__deforest__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_138_138, 0) = ((MR_Box) (transform_hlds__deforest__Goals_39));
#line 795 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_138_138, 1) = ((MR_Box) (transform_hlds__deforest__V_139_139));
#line 795 "deforest.m"
        }
#line 795 "deforest.m"
        {
#line 795 "deforest.m"
          transform_hlds__deforest__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_137_137, 0) = ((MR_Box) (transform_hlds__deforest__BeforeIrrelevant_24));
#line 795 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_137_137, 1) = ((MR_Box) (transform_hlds__deforest__V_138_138));
#line 795 "deforest.m"
        }
#line 795 "deforest.m"
        {
#line 795 "deforest.m"
          mercury__list__condense_2_p_0(transform_hlds__deforest__TypeCtorInfo_168_168, transform_hlds__deforest__V_137_137, &transform_hlds__deforest__GoalsToProcess_80);
        }
#line 797 "deforest.m"
        {
#line 797 "deforest.m"
          transform_hlds__deforest__compute_goal_infos_4_p_0(transform_hlds__deforest__GoalsToProcess_80, &transform_hlds__deforest__GoalsAndInfo_81, transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_141_141);
        }
#line 798 "deforest.m"
        {
#line 798 "deforest.m"
          mercury__list__append_3_p_1((MR_Word) &transform_hlds__deforest_scalar_common_2[1], transform_hlds__deforest__GoalsAndInfo_81, transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84, transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85);
        }
#line 799 "deforest.m"
        {
#line 799 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_PDInfo_141_141, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_143_143);
        }
#line 800 "deforest.m"
        {
#line 800 "deforest.m"
          transform_hlds__pd_info__pd_info_set_changed_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_143_143, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_145_145);
        }
#line 801 "deforest.m"
        {
#line 801 "deforest.m"
          transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_145_145, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151);
        }
#line 792 "deforest.m"
      }
#line 805 "deforest.m"
    {
#line 805 "deforest.m"
      transform_hlds__deforest__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 805 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_156_156, 0) = ((MR_Box) (transform_hlds__deforest__Depth0_21));
#line 805 "deforest.m"
    }
#line 805 "deforest.m"
    {
#line 805 "deforest.m"
      transform_hlds__deforest__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_154_154, 0) = ((MR_Box) (transform_hlds__deforest__V_156_156));
#line 805 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 805 "deforest.m"
    }
#line 804 "deforest.m"
    {
#line 804 "deforest.m"
      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "finished deforestation at depth %i\n", transform_hlds__deforest__V_154_154);
    }
#line 807 "deforest.m"
    {
#line 807 "deforest.m"
      transform_hlds__pd_info__pd_info_set_parents_3_p_0(transform_hlds__deforest__Parents0_28, transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151, transform_hlds__deforest__STATE_VARIABLE_PDInfo_87);
    }
#line 807 "deforest.m"
    *transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_83 = transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82;
#line 654 "deforest.m"
  }
#line 648 "deforest.m"
}

#line 634 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0_1(
#line 634 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 634 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 634 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 634 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 634 "deforest.m"
{
#line 634 "deforest.m"
  {
#line 634 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 634 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_HeadVar__3_24;

#line 634 "deforest.m"
    {
#line 634 "deforest.m"
      transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__634__1_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_HeadVar__3_24);
    }
#line 634 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__3_24));
#line 634 "deforest.m"
  }
#line 634 "deforest.m"
}

#line 595 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0(
#line 595 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_7,
#line 595 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierBranchInfo_8,
#line 595 "deforest.m"
  MR_Word transform_hlds__deforest__RevBetweenGoals0_9,
#line 595 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 595 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_12,
#line 595 "deforest.m"
  MR_Word * transform_hlds__deforest__DeforestInfo_13)
#line 595 "deforest.m"
{
#line 601 "deforest.m"
  while (MR_TRUE)
#line 601 "deforest.m"
    {
#line 601 "deforest.m"
      /* tailcall optimized into a loop */
#line 601 "deforest.m"
      {
#line 601 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 601 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_10;
#line 601 "deforest.m"
        MR_Word transform_hlds__deforest__Goals0_11;
#line 612 "deforest.m"
        MR_Word transform_hlds__deforest__LaterGoal_14;
#line 612 "deforest.m"
        MR_Word transform_hlds__deforest__LaterBranchInfo_15;
#line 612 "deforest.m"
        MR_Word transform_hlds__deforest__DeforestBranches_16;
#line 603 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_28_48;
#line 603 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_29_49;
#line 603 "deforest.m"
        MR_Word transform_hlds__deforest__TypeCtorInfo_31_51;
#line 603 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_32_52;
#line 603 "deforest.m"
        MR_Word transform_hlds__deforest__V_19_19;
#line 603 "deforest.m"
        MR_Word transform_hlds__deforest__VarMap1_27;
#line 603 "deforest.m"
        MR_Word transform_hlds__deforest__LeftVars2_31;
#line 603 "deforest.m"
        MR_Word transform_hlds__deforest__VarMap_33;
#line 603 "deforest.m"
        MR_Word transform_hlds__deforest__VarAssoc_34;
#line 603 "deforest.m"
        MR_Word transform_hlds__deforest__GetBranches_35;
#line 603 "deforest.m"
        MR_Word transform_hlds__deforest__DeforestBranches0_41;
#line 625 "deforest.m"
        MR_Word transform_hlds__deforest__V_28_28;
#line 625 "deforest.m"
        MR_Word transform_hlds__deforest__V_29_29;
#line 626 "deforest.m"
        MR_Word transform_hlds__deforest__V_30_30;
#line 626 "deforest.m"
        MR_Word transform_hlds__deforest__V_32_32;
#line 640 "deforest.m"
        MR_Box transform_hlds__deforest__conv1_DeforestBranches_16;

#line 601 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 601 "deforest.m"
          {
#line 601 "deforest.m"
            transform_hlds__deforest__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 0)));
#line 601 "deforest.m"
            transform_hlds__deforest__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 1)));
#line 603 "deforest.m"
            transform_hlds__deforest__LaterGoal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, (MR_Integer) 0)));
#line 603 "deforest.m"
            transform_hlds__deforest__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, (MR_Integer) 1)));
#line 603 "deforest.m"
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 603 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 603 "deforest.m"
              {
#line 603 "deforest.m"
                transform_hlds__deforest__LaterBranchInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_19_19, (MR_Integer) 0)));
#line 625 "deforest.m"
                transform_hlds__deforest__VarMap1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierBranchInfo_8, (MR_Integer) 0)));
#line 625 "deforest.m"
                transform_hlds__deforest__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierBranchInfo_8, (MR_Integer) 1)));
#line 625 "deforest.m"
                transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierBranchInfo_8, (MR_Integer) 2)));
#line 626 "deforest.m"
                transform_hlds__deforest__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterBranchInfo_15, (MR_Integer) 0)));
#line 626 "deforest.m"
                transform_hlds__deforest__LeftVars2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterBranchInfo_15, (MR_Integer) 1)));
#line 626 "deforest.m"
                transform_hlds__deforest__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterBranchInfo_15, (MR_Integer) 2)));
#line 8667 "transform_hlds.deforest.c"
                transform_hlds__deforest__TypeInfo_28_48 = (MR_Word) &transform_hlds__deforest_scalar_common_1[1];
#line 8669 "transform_hlds.deforest.c"
                transform_hlds__deforest__TypeInfo_29_49 = (MR_Word) &transform_hlds__deforest_scalar_common_1[4];
#line 628 "deforest.m"
                {
#line 628 "deforest.m"
                  mercury__map__select_3_p_0(transform_hlds__deforest__TypeInfo_28_48, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__VarMap1_27, transform_hlds__deforest__LeftVars2_31, &transform_hlds__deforest__VarMap_33);
                }
#line 629 "deforest.m"
                {
#line 629 "deforest.m"
                  mercury__map__to_assoc_list_2_p_0(transform_hlds__deforest__TypeInfo_28_48, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__VarMap_33, &transform_hlds__deforest__VarAssoc_34);
                }
#line 630 "deforest.m"
                {
#line 630 "deforest.m"
                  transform_hlds__deforest__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__deforest__TypeInfo_28_48, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__VarMap_33);
                }
#line 630 "deforest.m"
                transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 603 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 603 "deforest.m"
                  {
#line 634 "deforest.m"
                    transform_hlds__deforest__GetBranches_35 = (MR_Word) &transform_hlds__deforest_scalar_common_2[8];
#line 8694 "transform_hlds.deforest.c"
                    transform_hlds__deforest__TypeCtorInfo_31_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 639 "deforest.m"
                    {
#line 639 "deforest.m"
                      mercury__set__init_1_p_0(transform_hlds__deforest__TypeCtorInfo_31_51, &transform_hlds__deforest__DeforestBranches0_41);
                    }
#line 8701 "transform_hlds.deforest.c"
                    transform_hlds__deforest__TypeInfo_32_52 = (MR_Word) &transform_hlds__deforest_scalar_common_2[2];
#line 640 "deforest.m"
                    {
#line 640 "deforest.m"
                      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeInfo_32_52, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__GetBranches_35, transform_hlds__deforest__VarAssoc_34, ((MR_Box) (transform_hlds__deforest__DeforestBranches0_41)), &transform_hlds__deforest__conv1_DeforestBranches_16);
                    }
#line 640 "deforest.m"
                    transform_hlds__deforest__DeforestBranches_16 = ((MR_Word) transform_hlds__deforest__conv1_DeforestBranches_16);
#line 640 "deforest.m"
                    transform_hlds__deforest__succeeded = MR_TRUE;
#line 603 "deforest.m"
                  }
#line 603 "deforest.m"
              }
#line 612 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 607 "deforest.m"
              {
#line 607 "deforest.m"
                MR_Word transform_hlds__deforest__BetweenGoals1_17;
#line 607 "deforest.m"
                MR_Word transform_hlds__deforest__BetweenGoals_18;

#line 607 "deforest.m"
                {
#line 607 "deforest.m"
                  mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__deforest_scalar_common_2[1], transform_hlds__deforest__RevBetweenGoals0_9, &transform_hlds__deforest__BetweenGoals1_17);
                }
#line 608 "deforest.m"
                {
#line 608 "deforest.m"
                  mercury__assoc_list__keys_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[3], transform_hlds__deforest__BetweenGoals1_17, &transform_hlds__deforest__BetweenGoals_18);
                }
#line 609 "deforest.m"
                *transform_hlds__deforest__Goals_12 = transform_hlds__deforest__Goals0_11;
#line 610 "deforest.m"
                {
#line 610 "deforest.m"
                  MR_Word base;
#line 610 "deforest.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 610 "deforest.m"
                  *transform_hlds__deforest__DeforestInfo_13 = base;
#line 610 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_7));
#line 610 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__EarlierBranchInfo_8));
#line 610 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_18));
#line 610 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__deforest__LaterGoal_14));
#line 610 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__deforest__LaterBranchInfo_15));
#line 610 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__deforest__DeforestBranches_16));
#line 610 "deforest.m"
                }
#line 607 "deforest.m"
                transform_hlds__deforest__succeeded = MR_TRUE;
#line 607 "deforest.m"
              }
#line 612 "deforest.m"
            else
#line 613 "deforest.m"
              {
#line 613 "deforest.m"
                MR_Word transform_hlds__deforest__V_20_20;

#line 614 "deforest.m"
                {
#line 614 "deforest.m"
                  transform_hlds__deforest__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_20_20, 0) = ((MR_Box) (transform_hlds__deforest__Goal_10));
#line 614 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_20_20, 1) = ((MR_Box) (transform_hlds__deforest__RevBetweenGoals0_9));
#line 614 "deforest.m"
                }
#line 613 "deforest.m"
                /* direct tailcall eliminated */
#line 613 "deforest.m"
                {
#line 613 "deforest.m"
                  MR_Word transform_hlds__deforest__RevBetweenGoals0__tmp_copy_9 = transform_hlds__deforest__V_20_20;
#line 613 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__4__tmp_copy_4 = transform_hlds__deforest__Goals0_11;

#line 613 "deforest.m"
                  transform_hlds__deforest__HeadVar__4_4 = transform_hlds__deforest__HeadVar__4__tmp_copy_4;
#line 613 "deforest.m"
                  transform_hlds__deforest__RevBetweenGoals0_9 = transform_hlds__deforest__RevBetweenGoals0__tmp_copy_9;
#line 613 "deforest.m"
                }
#line 613 "deforest.m"
                continue;
#line 613 "deforest.m"
              }
#line 601 "deforest.m"
          }
#line 601 "deforest.m"
        return transform_hlds__deforest__succeeded;
#line 601 "deforest.m"
      }
#line 601 "deforest.m"
      break;
#line 601 "deforest.m"
    }
#line 595 "deforest.m"
}

#line 536 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_conj_6_p_0(
#line 536 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 536 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_2,
#line 536 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3,
#line 536 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__4_4,
#line 536 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
#line 536 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6)
#line 536 "deforest.m"
{
#line 540 "deforest.m"
  while (MR_TRUE)
#line 540 "deforest.m"
    {
#line 540 "deforest.m"
      /* tailcall optimized into a loop */
#line 540 "deforest.m"
      {
#line 540 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;

#line 540 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 540 "deforest.m"
          {
#line 541 "deforest.m"
            {
#line 541 "deforest.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__HeadVar__3_3, transform_hlds__deforest__HeadVar__4_4);
            }
#line 540 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_6 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5;
#line 540 "deforest.m"
          }
#line 540 "deforest.m"
        else
#line 543 "deforest.m"
          {
#line 543 "deforest.m"
            MR_Word transform_hlds__deforest__Goal0_13;
#line 543 "deforest.m"
            MR_Word transform_hlds__deforest__MaybeBranchInfo_14;
#line 543 "deforest.m"
            MR_Word transform_hlds__deforest__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 543 "deforest.m"
            MR_Word transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 561 "deforest.m"
            MR_Word transform_hlds__deforest__Goals1_21;
#line 561 "deforest.m"
            MR_Word transform_hlds__deforest__DeforestInfo_22;
#line 546 "deforest.m"
            MR_Word transform_hlds__deforest__GoalBranchInfo_20;
#line 546 "deforest.m"
            MR_Word transform_hlds__deforest__V_44_44;

#line 542 "deforest.m"
            transform_hlds__deforest__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_29_29, (MR_Integer) 0)));
#line 542 "deforest.m"
            transform_hlds__deforest__MaybeBranchInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_29_29, (MR_Integer) 1)));
#line 546 "deforest.m"
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__MaybeBranchInfo_14)) == (MR_mktag((MR_Integer) 1)));
#line 546 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 546 "deforest.m"
              {
#line 546 "deforest.m"
                transform_hlds__deforest__GoalBranchInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeBranchInfo_14, (MR_Integer) 0)));
#line 592 "deforest.m"
                transform_hlds__deforest__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 592 "deforest.m"
                {
#line 592 "deforest.m"
                  transform_hlds__deforest__succeeded = transform_hlds__deforest__search_for_deforest_goal_6_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__GoalBranchInfo_20, transform_hlds__deforest__V_44_44, transform_hlds__deforest__Goals0_15, &transform_hlds__deforest__Goals1_21, &transform_hlds__deforest__DeforestInfo_22);
                }
#line 546 "deforest.m"
              }
#line 561 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 551 "deforest.m"
              {
#line 551 "deforest.m"
                MR_Word transform_hlds__deforest__RevGoals1_23;
#line 551 "deforest.m"
                MR_Word transform_hlds__deforest__Goals2_24;
#line 551 "deforest.m"
                MR_Word transform_hlds__deforest__Optimized_25;
#line 551 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30;

#line 550 "deforest.m"
                {
#line 550 "deforest.m"
                  transform_hlds__deforest__handle_deforestation_9_p_0(transform_hlds__deforest__NonLocals_2, transform_hlds__deforest__DeforestInfo_22, transform_hlds__deforest__HeadVar__3_3, &transform_hlds__deforest__RevGoals1_23, transform_hlds__deforest__Goals1_21, &transform_hlds__deforest__Goals2_24, &transform_hlds__deforest__Optimized_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30);
                }
#line 555 "deforest.m"
                if ((transform_hlds__deforest__Optimized_25 == (MR_Integer) 0))
#line 556 "deforest.m"
                  {
#line 556 "deforest.m"
                    MR_Word transform_hlds__deforest__RevGoals2_26;
#line 556 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_31_31;

#line 557 "deforest.m"
                    {
#line 557 "deforest.m"
                      transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_31_31);
                    }
#line 558 "deforest.m"
                    {
#line 558 "deforest.m"
                      transform_hlds__deforest__RevGoals2_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_26, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
#line 558 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_26, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 558 "deforest.m"
                    }
#line 559 "deforest.m"
                    /* direct tailcall eliminated */
#line 559 "deforest.m"
                    {
#line 559 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_15;
#line 559 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__RevGoals2_26;
#line 559 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_31_31;

#line 559 "deforest.m"
                      transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 559 "deforest.m"
                      transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 559 "deforest.m"
                      transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 559 "deforest.m"
                    }
#line 559 "deforest.m"
                    continue;
#line 556 "deforest.m"
                  }
#line 555 "deforest.m"
                else
#line 554 "deforest.m"
                  {
#line 554 "deforest.m"
                    /* direct tailcall eliminated */
#line 554 "deforest.m"
                    {
#line 554 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals2_24;
#line 554 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__RevGoals1_23;
#line 554 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30;

#line 554 "deforest.m"
                      transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 554 "deforest.m"
                      transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 554 "deforest.m"
                      transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 554 "deforest.m"
                    }
#line 554 "deforest.m"
                    continue;
#line 554 "deforest.m"
                  }
#line 551 "deforest.m"
              }
#line 561 "deforest.m"
            else
#line 562 "deforest.m"
              {
#line 562 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;
#line 562 "deforest.m"
                MR_Word transform_hlds__deforest__RevGoals1_36;

#line 562 "deforest.m"
                {
#line 562 "deforest.m"
                  transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34);
                }
#line 563 "deforest.m"
                {
#line 563 "deforest.m"
                  transform_hlds__deforest__RevGoals1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals1_36, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
#line 563 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals1_36, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 563 "deforest.m"
                }
#line 564 "deforest.m"
                /* direct tailcall eliminated */
#line 564 "deforest.m"
                {
#line 564 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_15;
#line 564 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__RevGoals1_36;
#line 564 "deforest.m"
                  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;

#line 564 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 564 "deforest.m"
                  transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 564 "deforest.m"
                  transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 564 "deforest.m"
                }
#line 564 "deforest.m"
                continue;
#line 562 "deforest.m"
              }
#line 543 "deforest.m"
          }
#line 540 "deforest.m"
      }
#line 540 "deforest.m"
      break;
#line 540 "deforest.m"
    }
#line 536 "deforest.m"
}

#line 495 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0_1(
#line 495 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 495 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1)
#line 495 "deforest.m"
{
#line 495 "deforest.m"
  {
#line 495 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 495 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;

#line 495 "deforest.m"
    {
#line 495 "deforest.m"
      return transform_hlds__deforest__succeeded = transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__495__1_1_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1));
    }
#line 495 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 495 "deforest.m"
  }
#line 495 "deforest.m"
}

#line 479 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0(
#line 479 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 479 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_2,
#line 479 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3,
#line 479 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_4,
#line 479 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
#line 479 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6)
#line 479 "deforest.m"
{
#line 483 "deforest.m"
  while (MR_TRUE)
#line 483 "deforest.m"
    {
#line 483 "deforest.m"
      /* tailcall optimized into a loop */
#line 483 "deforest.m"
      {
#line 483 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;

#line 483 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 483 "deforest.m"
          {
#line 484 "deforest.m"
            {
#line 484 "deforest.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__HeadVar__3_3, transform_hlds__deforest__Goals_4);
            }
#line 483 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_6 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5;
#line 483 "deforest.m"
          }
#line 483 "deforest.m"
        else
#line 486 "deforest.m"
          {
#line 486 "deforest.m"
            MR_Word transform_hlds__deforest__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 486 "deforest.m"
            MR_Word transform_hlds__deforest__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 486 "deforest.m"
            MR_Word transform_hlds__deforest__ModuleInfo_19;
#line 525 "deforest.m"
            MR_Word transform_hlds__deforest__SymName_25;
#line 525 "deforest.m"
            MR_Word transform_hlds__deforest__Constraints_31;
#line 525 "deforest.m"
            MR_Word transform_hlds__deforest__Goals1_32;
#line 492 "deforest.m"
            MR_Word transform_hlds__deforest__TypeCtorInfo_73_73;
#line 492 "deforest.m"
            MR_Word transform_hlds__deforest__PredId_20;
#line 492 "deforest.m"
            MR_Word transform_hlds__deforest__PredInfo_27;
#line 492 "deforest.m"
            MR_Word transform_hlds__deforest__V_44_44;
#line 492 "deforest.m"
            MR_Word transform_hlds__deforest__V_45_45;
#line 491 "deforest.m"
            MR_Word transform_hlds__deforest__V_26_26;
#line 491 "deforest.m"
            MR_Integer transform_hlds__deforest___ProcId_21;
#line 491 "deforest.m"
            MR_Word transform_hlds__deforest___Args_22;
#line 491 "deforest.m"
            MR_Word transform_hlds__deforest__V_23_23;
#line 491 "deforest.m"
            MR_Word transform_hlds__deforest__V_24_24;
#line 499 "deforest.m"
            MR_Word transform_hlds__deforest__V_33_33;
#line 499 "deforest.m"
            MR_Word transform_hlds__deforest__V_34_34;

#line 487 "deforest.m"
            {
#line 487 "deforest.m"
              transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__ModuleInfo_19);
            }
#line 491 "deforest.m"
            transform_hlds__deforest__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_13, (MR_Integer) 0)));
#line 491 "deforest.m"
            transform_hlds__deforest__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_13, (MR_Integer) 1)));
#line 491 "deforest.m"
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_44_44)) == (MR_mktag((MR_Integer) 2)));
#line 491 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 491 "deforest.m"
              {
#line 491 "deforest.m"
                transform_hlds__deforest__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 0)));
#line 491 "deforest.m"
                transform_hlds__deforest___ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 1)));
#line 491 "deforest.m"
                transform_hlds__deforest___Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 2)));
#line 491 "deforest.m"
                transform_hlds__deforest__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 3)));
#line 491 "deforest.m"
                transform_hlds__deforest__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 4)));
#line 491 "deforest.m"
                transform_hlds__deforest__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 5)));
#line 493 "deforest.m"
                {
#line 493 "deforest.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__deforest__ModuleInfo_19, transform_hlds__deforest__PredId_20, &transform_hlds__deforest__PredInfo_27);
                }
#line 494 "deforest.m"
                {
#line 494 "deforest.m"
                  transform_hlds__deforest__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__deforest__PredInfo_27);
                }
#line 494 "deforest.m"
                transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 492 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 492 "deforest.m"
                  {
#line 495 "deforest.m"
                    transform_hlds__deforest__V_45_45 = (MR_Word) &transform_hlds__deforest_scalar_common_2[7];
#line 9202 "transform_hlds.deforest.c"
                    transform_hlds__deforest__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 495 "deforest.m"
                    {
#line 495 "deforest.m"
                      mercury__list__takewhile_4_p_0(transform_hlds__deforest__TypeCtorInfo_73_73, transform_hlds__deforest__V_45_45, transform_hlds__deforest__Goals0_14, &transform_hlds__deforest__Constraints_31, &transform_hlds__deforest__Goals1_32);
                    }
#line 499 "deforest.m"
                    transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Constraints_31)) == (MR_mktag((MR_Integer) 1)));
#line 499 "deforest.m"
                    if (transform_hlds__deforest__succeeded)
#line 499 "deforest.m"
                      {
#line 499 "deforest.m"
                        transform_hlds__deforest__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Constraints_31, (MR_Integer) 0)));
#line 499 "deforest.m"
                        transform_hlds__deforest__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Constraints_31, (MR_Integer) 1)));
#line 499 "deforest.m"
                      }
#line 492 "deforest.m"
                  }
#line 491 "deforest.m"
              }
#line 525 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 501 "deforest.m"
              {
#line 501 "deforest.m"
                MR_String transform_hlds__deforest__SymNameString_35;
#line 501 "deforest.m"
                MR_Word transform_hlds__deforest__Globals_36;
#line 501 "deforest.m"
                MR_Word transform_hlds__deforest__DebugPD_37;
#line 501 "deforest.m"
                MR_Word transform_hlds__deforest__MaybeGoal_40;
#line 501 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59;
#line 504 "deforest.m"
                MR_Word transform_hlds__deforest__V_51_51;
#line 504 "deforest.m"
                MR_Word transform_hlds__deforest__V_53_53;
#line 510 "deforest.m"
                MR_Word transform_hlds__deforest__ConjNonLocals_39;

#line 501 "deforest.m"
                {
#line 501 "deforest.m"
                  transform_hlds__deforest__SymNameString_35 = mdbcomp__sym_name__sym_name_to_string_1_f_0(transform_hlds__deforest__SymName_25);
                }
#line 502 "deforest.m"
                {
#line 502 "deforest.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_19, &transform_hlds__deforest__Globals_36);
                }
#line 503 "deforest.m"
                {
#line 503 "deforest.m"
                  libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_36, (MR_Integer) 71, &transform_hlds__deforest__DebugPD_37);
                }
#line 507 "deforest.m"
                {
#line 507 "deforest.m"
                  transform_hlds__deforest__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 507 "deforest.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_53_53, 0) = ((MR_Box) (transform_hlds__deforest__SymNameString_35));
#line 507 "deforest.m"
                }
#line 507 "deforest.m"
                {
#line 507 "deforest.m"
                  transform_hlds__deforest__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_51_51, 0) = ((MR_Box) (transform_hlds__deforest__V_53_53));
#line 507 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 507 "deforest.m"
                }
#line 505 "deforest.m"
                {
#line 505 "deforest.m"
                  transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_37, (MR_String) "propagating constraints into call to %s\n", transform_hlds__deforest__V_51_51);
                }
#line 510 "deforest.m"
                {
#line 510 "deforest.m"
                  transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(transform_hlds__deforest__NonLocals_2, transform_hlds__deforest__HeadVar__3_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__deforest__Goal0_13, transform_hlds__deforest__Constraints_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__deforest__Goals1_32, &transform_hlds__deforest__ConjNonLocals_39);
                }
#line 512 "deforest.m"
                {
#line 512 "deforest.m"
                  transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__Constraints_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__MaybeGoal_40, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59);
                }
#line 519 "deforest.m"
                if ((transform_hlds__deforest__MaybeGoal_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 520 "deforest.m"
                  {
#line 520 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_60_60;
#line 520 "deforest.m"
                    MR_Word transform_hlds__deforest__V_61_61;

#line 521 "deforest.m"
                    {
#line 521 "deforest.m"
                      transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_60_60);
                    }
#line 523 "deforest.m"
                    {
#line 523 "deforest.m"
                      transform_hlds__deforest__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_61_61, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
#line 523 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_61_61, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 523 "deforest.m"
                    }
#line 522 "deforest.m"
                    /* direct tailcall eliminated */
#line 522 "deforest.m"
                    {
#line 522 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_14;
#line 522 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__V_61_61;
#line 522 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_60_60;

#line 522 "deforest.m"
                      transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 522 "deforest.m"
                      transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 522 "deforest.m"
                      transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 522 "deforest.m"
                    }
#line 522 "deforest.m"
                    continue;
#line 520 "deforest.m"
                  }
#line 519 "deforest.m"
                else
#line 514 "deforest.m"
                  {
#line 514 "deforest.m"
                    MR_Word transform_hlds__deforest__Goal_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeGoal_40, (MR_Integer) 0)));
#line 514 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_64_64;
#line 514 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_65_65;
#line 514 "deforest.m"
                    MR_Word transform_hlds__deforest__V_66_66;

#line 515 "deforest.m"
                    {
#line 515 "deforest.m"
                      transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_64_64);
                    }
#line 516 "deforest.m"
                    {
#line 516 "deforest.m"
                      transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal_41, transform_hlds__deforest__STATE_VARIABLE_PDInfo_64_64, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_65_65);
                    }
#line 518 "deforest.m"
                    {
#line 518 "deforest.m"
                      transform_hlds__deforest__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_66_66, 0) = ((MR_Box) (transform_hlds__deforest__Goal_41));
#line 518 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_66_66, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 518 "deforest.m"
                    }
#line 517 "deforest.m"
                    /* direct tailcall eliminated */
#line 517 "deforest.m"
                    {
#line 517 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals1_32;
#line 517 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__V_66_66;
#line 517 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_65_65;

#line 517 "deforest.m"
                      transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 517 "deforest.m"
                      transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 517 "deforest.m"
                      transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 517 "deforest.m"
                    }
#line 517 "deforest.m"
                    continue;
#line 514 "deforest.m"
                  }
#line 501 "deforest.m"
              }
#line 525 "deforest.m"
            else
#line 526 "deforest.m"
              {
#line 526 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68;
#line 526 "deforest.m"
                MR_Word transform_hlds__deforest__V_69_69;

#line 526 "deforest.m"
                {
#line 526 "deforest.m"
                  transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68);
                }
#line 528 "deforest.m"
                {
#line 528 "deforest.m"
                  transform_hlds__deforest__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_69_69, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
#line 528 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_69_69, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 528 "deforest.m"
                }
#line 527 "deforest.m"
                /* direct tailcall eliminated */
#line 527 "deforest.m"
                {
#line 527 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_14;
#line 527 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__V_69_69;
#line 527 "deforest.m"
                  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68;

#line 527 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 527 "deforest.m"
                  transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 527 "deforest.m"
                  transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 527 "deforest.m"
                }
#line 527 "deforest.m"
                continue;
#line 526 "deforest.m"
              }
#line 486 "deforest.m"
          }
#line 483 "deforest.m"
      }
#line 483 "deforest.m"
      break;
#line 483 "deforest.m"
    }
#line 479 "deforest.m"
}

#line 431 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__compute_goal_infos_4_p_0(
#line 431 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 431 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
#line 431 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
#line 431 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4)
#line 431 "deforest.m"
{
#line 434 "deforest.m"
  {
#line 434 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 434 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 434 "deforest.m"
      {
#line 434 "deforest.m"
        *transform_hlds__deforest__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 434 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 434 "deforest.m"
      }
#line 434 "deforest.m"
    else
#line 436 "deforest.m"
      {
#line 436 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 436 "deforest.m"
        MR_Word transform_hlds__deforest__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 436 "deforest.m"
        MR_Word transform_hlds__deforest__MaybeBranchInfo_10;
#line 436 "deforest.m"
        MR_Word transform_hlds__deforest__Goals_11;
#line 436 "deforest.m"
        MR_Word transform_hlds__deforest__V_15_15;
#line 436 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16;
#line 436 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;
#line 436 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_8, (MR_Integer) 0)));
#line 445 "deforest.m"
        MR_Word transform_hlds__deforest__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_8, (MR_Integer) 1)));

#line 452 "deforest.m"
        if (((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_24)) == (MR_mktag((MR_Integer) 2))))
#line 462 "deforest.m"
          {
#line 462 "deforest.m"
            MR_Word transform_hlds__deforest__PredId_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 0)));
#line 462 "deforest.m"
            MR_Integer transform_hlds__deforest__ProcId_57 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 1)));
#line 462 "deforest.m"
            MR_Word transform_hlds__deforest__Args_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 2)));
#line 462 "deforest.m"
            MR_Word transform_hlds__deforest__ProcBranchInfos_62;
#line 462 "deforest.m"
            MR_Word transform_hlds__deforest__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 3)));
#line 462 "deforest.m"
            MR_Word transform_hlds__deforest__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 4)));
#line 462 "deforest.m"
            MR_Word transform_hlds__deforest__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 5)));
#line 469 "deforest.m"
            MR_Word transform_hlds__deforest__BranchInfo0_63;
#line 464 "deforest.m"
            MR_Word transform_hlds__deforest__V_69_69;
#line 464 "deforest.m"
            MR_Box transform_hlds__deforest__conv0_BranchInfo0_63;

#line 463 "deforest.m"
            {
#line 463 "deforest.m"
              transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__ProcBranchInfos_62);
            }
#line 464 "deforest.m"
            {
#line 464 "deforest.m"
              transform_hlds__deforest__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 464 "deforest.m"
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_69_69, 0) = ((MR_Box) (transform_hlds__deforest__PredId_56));
#line 464 "deforest.m"
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_69_69, 1) = ((MR_Box) (transform_hlds__deforest__ProcId_57));
#line 464 "deforest.m"
            }
#line 464 "deforest.m"
            {
#line 464 "deforest.m"
              transform_hlds__deforest__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[0], transform_hlds__deforest__ProcBranchInfos_62, ((MR_Box) (transform_hlds__deforest__V_69_69)), &transform_hlds__deforest__conv0_BranchInfo0_63);
            }
#line 464 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 464 "deforest.m"
              {
#line 464 "deforest.m"
                transform_hlds__deforest__BranchInfo0_63 = ((MR_Word) transform_hlds__deforest__conv0_BranchInfo0_63);
#line 464 "deforest.m"
                transform_hlds__deforest__succeeded = MR_TRUE;
#line 464 "deforest.m"
              }
#line 469 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 467 "deforest.m"
              {
#line 467 "deforest.m"
                MR_Word transform_hlds__deforest__BranchInfo_64;

#line 467 "deforest.m"
                {
#line 467 "deforest.m"
                  transform_hlds__pd_util__convert_branch_info_3_p_0(transform_hlds__deforest__BranchInfo0_63, transform_hlds__deforest__Args_58, &transform_hlds__deforest__BranchInfo_64);
                }
#line 468 "deforest.m"
                {
#line 468 "deforest.m"
                  transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 468 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeBranchInfo_10, 0) = ((MR_Box) (transform_hlds__deforest__BranchInfo_64));
#line 468 "deforest.m"
                }
#line 467 "deforest.m"
              }
#line 469 "deforest.m"
            else
#line 470 "deforest.m"
              transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 470 "deforest.m"
            transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 462 "deforest.m"
          }
#line 452 "deforest.m"
        else
#line 452 "deforest.m"
          if (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 473 "deforest.m"
            {
#line 474 "deforest.m"
              {
#line 474 "deforest.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforest_get_branch_vars_goal\'/4", (MR_String) "shorthand");
#line 474 "deforest.m"
                return;
              }
#line 473 "deforest.m"
            }
#line 452 "deforest.m"
          else
#line 452 "deforest.m"
            if (((((((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 0)))) == (MR_Integer) 3)))) || (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 0)))) == (MR_Integer) 4))))))
#line 451 "deforest.m"
              {
#line 451 "deforest.m"
                transform_hlds__pd_util__get_branch_vars_goal_4_p_0(transform_hlds__deforest__Goal_8, &transform_hlds__deforest__MaybeBranchInfo_10, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16);
              }
#line 452 "deforest.m"
            else
#line 459 "deforest.m"
              {
#line 460 "deforest.m"
                transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 460 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 459 "deforest.m"
              }
#line 435 "deforest.m"
        {
#line 435 "deforest.m"
          transform_hlds__deforest__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 435 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_15_15, 0) = ((MR_Box) (transform_hlds__deforest__Goal_8));
#line 435 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_15_15, 1) = ((MR_Box) (transform_hlds__deforest__MaybeBranchInfo_10));
#line 435 "deforest.m"
        }
#line 438 "deforest.m"
        {
#line 438 "deforest.m"
          transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal_8, transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17);
        }
#line 439 "deforest.m"
        {
#line 439 "deforest.m"
          transform_hlds__deforest__compute_goal_infos_4_p_0(transform_hlds__deforest__Goals0_9, &transform_hlds__deforest__Goals_11, transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17, transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);
        }
#line 435 "deforest.m"
        {
#line 435 "deforest.m"
          MR_Word base;
#line 435 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "deforest.m"
          *transform_hlds__deforest__HeadVar__2_2 = base;
#line 435 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__V_15_15));
#line 435 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_11));
#line 435 "deforest.m"
        }
#line 436 "deforest.m"
      }
#line 434 "deforest.m"
  }
#line 431 "deforest.m"
}

#line 410 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(
#line 410 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 410 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 410 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_3,
#line 410 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
#line 410 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5)
#line 410 "deforest.m"
{
#line 414 "deforest.m"
  while (MR_TRUE)
#line 414 "deforest.m"
    {
#line 414 "deforest.m"
      /* tailcall optimized into a loop */
#line 414 "deforest.m"
      {
#line 414 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;

#line 414 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 414 "deforest.m"
          {
#line 415 "deforest.m"
            {
#line 415 "deforest.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__HeadVar__2_2, transform_hlds__deforest__Goals_3);
            }
#line 414 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4;
#line 414 "deforest.m"
          }
#line 414 "deforest.m"
        else
#line 416 "deforest.m"
          {
#line 416 "deforest.m"
            MR_Word transform_hlds__deforest__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 416 "deforest.m"
            MR_Word transform_hlds__deforest__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 416 "deforest.m"
            MR_Word transform_hlds__deforest__Goal1_16;
#line 416 "deforest.m"
            MR_Word transform_hlds__deforest__RevGoals2_20;
#line 416 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23;
#line 416 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24;
#line 416 "deforest.m"
            MR_Word transform_hlds__deforest__GoalExpr0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_11, (MR_Integer) 0)));
#line 416 "deforest.m"
            MR_Word transform_hlds__deforest__GoalInfo0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_11, (MR_Integer) 1)));
#line 416 "deforest.m"
            MR_Word transform_hlds__deforest__GoalExpr_37;
#line 416 "deforest.m"
            MR_Word transform_hlds__deforest__GoalInfo_38;
#line 422 "deforest.m"
            MR_Word transform_hlds__deforest__Goals1_17;
#line 419 "deforest.m"
            MR_Word transform_hlds__deforest__V_25_25;
#line 419 "deforest.m"
            MR_Word transform_hlds__deforest__V_26_26;
#line 419 "deforest.m"
            MR_Word transform_hlds__deforest__V_18_18;

#line 278 "deforest.m"
            {
#line 278 "deforest.m"
              transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_35, &transform_hlds__deforest__GoalExpr_37, transform_hlds__deforest__GoalInfo0_36, &transform_hlds__deforest__GoalInfo_38, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23);
            }
#line 279 "deforest.m"
            {
#line 279 "deforest.m"
              transform_hlds__deforest__Goal1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 279 "deforest.m"
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_37));
#line 279 "deforest.m"
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_38));
#line 279 "deforest.m"
            }
#line 418 "deforest.m"
            {
#line 418 "deforest.m"
              transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal1_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24);
            }
#line 419 "deforest.m"
            transform_hlds__deforest__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, (MR_Integer) 0)));
#line 419 "deforest.m"
            transform_hlds__deforest__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, (MR_Integer) 1)));
#line 419 "deforest.m"
            transform_hlds__deforest__succeeded = ((((MR_tag((MR_Word) transform_hlds__deforest__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 419 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 419 "deforest.m"
              {
#line 419 "deforest.m"
                transform_hlds__deforest__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_25_25, (MR_Integer) 1)));
#line 419 "deforest.m"
                transform_hlds__deforest__Goals1_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_25_25, (MR_Integer) 2)));
#line 419 "deforest.m"
                transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_26_26 == (MR_Integer) 0);
#line 419 "deforest.m"
              }
#line 422 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 420 "deforest.m"
              {
#line 420 "deforest.m"
                MR_Word transform_hlds__deforest__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 420 "deforest.m"
                MR_Word transform_hlds__deforest__RevGoals1_19;

#line 420 "deforest.m"
                {
#line 420 "deforest.m"
                  mercury__list__reverse_2_p_0(transform_hlds__deforest__TypeCtorInfo_29_29, transform_hlds__deforest__Goals1_17, &transform_hlds__deforest__RevGoals1_19);
                }
#line 421 "deforest.m"
                {
#line 421 "deforest.m"
                  mercury__list__append_3_p_1(transform_hlds__deforest__TypeCtorInfo_29_29, transform_hlds__deforest__RevGoals1_19, transform_hlds__deforest__HeadVar__2_2, &transform_hlds__deforest__RevGoals2_20);
                }
#line 420 "deforest.m"
              }
#line 422 "deforest.m"
            else
#line 423 "deforest.m"
              {
#line 423 "deforest.m"
                transform_hlds__deforest__RevGoals2_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_20, 0) = ((MR_Box) (transform_hlds__deforest__Goal1_16));
#line 423 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_20, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__2_2));
#line 423 "deforest.m"
              }
#line 425 "deforest.m"
            /* direct tailcall eliminated */
#line 425 "deforest.m"
            {
#line 425 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_12;
#line 425 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__2__tmp_copy_2 = transform_hlds__deforest__RevGoals2_20;
#line 425 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24;

#line 425 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_4;
#line 425 "deforest.m"
              transform_hlds__deforest__HeadVar__2_2 = transform_hlds__deforest__HeadVar__2__tmp_copy_2;
#line 425 "deforest.m"
              transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 425 "deforest.m"
            }
#line 425 "deforest.m"
            continue;
#line 416 "deforest.m"
          }
#line 414 "deforest.m"
      }
#line 414 "deforest.m"
      break;
#line 414 "deforest.m"
    }
#line 410 "deforest.m"
}

#line 391 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_cases_5_p_0(
#line 391 "deforest.m"
  MR_Word transform_hlds__deforest__Var_1,
#line 391 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 391 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_3,
#line 391 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
#line 391 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5)
#line 391 "deforest.m"
{
#line 394 "deforest.m"
  {
#line 394 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 394 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "deforest.m"
      {
#line 394 "deforest.m"
        *transform_hlds__deforest__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 394 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4;
#line 394 "deforest.m"
      }
#line 394 "deforest.m"
    else
#line 395 "deforest.m"
      {
#line 395 "deforest.m"
        MR_Word transform_hlds__deforest__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0)));
#line 395 "deforest.m"
        MR_Word transform_hlds__deforest__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
#line 395 "deforest.m"
        MR_Word transform_hlds__deforest__Case_13;
#line 395 "deforest.m"
        MR_Word transform_hlds__deforest__Cases_14;
#line 395 "deforest.m"
        MR_Word transform_hlds__deforest__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_11, (MR_Integer) 0)));
#line 395 "deforest.m"
        MR_Word transform_hlds__deforest__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_11, (MR_Integer) 1)));
#line 395 "deforest.m"
        MR_Word transform_hlds__deforest__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_11, (MR_Integer) 2)));
#line 395 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_19;
#line 395 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_20;
#line 395 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23;
#line 395 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24;
#line 395 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_25_25;
#line 395 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr0_32;
#line 395 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo0_33;
#line 395 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr_34;
#line 395 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo_35;

#line 399 "deforest.m"
        {
#line 399 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4, &transform_hlds__deforest__InstMap0_19);
        }
#line 400 "deforest.m"
        {
#line 400 "deforest.m"
          transform_hlds__pd_info__pd_info_bind_var_to_functors_5_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__MainConsId_16, transform_hlds__deforest__OtherConsIds_17, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23);
        }
#line 277 "deforest.m"
        transform_hlds__deforest__GoalExpr0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_18, (MR_Integer) 0)));
#line 277 "deforest.m"
        transform_hlds__deforest__GoalInfo0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_18, (MR_Integer) 1)));
#line 278 "deforest.m"
        {
#line 278 "deforest.m"
          transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_32, &transform_hlds__deforest__GoalExpr_34, transform_hlds__deforest__GoalInfo0_33, &transform_hlds__deforest__GoalInfo_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24);
        }
#line 279 "deforest.m"
        {
#line 279 "deforest.m"
          transform_hlds__deforest__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 279 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_20, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_34));
#line 279 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_20, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_35));
#line 279 "deforest.m"
        }
#line 402 "deforest.m"
        {
#line 402 "deforest.m"
          transform_hlds__deforest__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 402 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_13, 0) = ((MR_Box) (transform_hlds__deforest__MainConsId_16));
#line 402 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_13, 1) = ((MR_Box) (transform_hlds__deforest__OtherConsIds_17));
#line 402 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_13, 2) = ((MR_Box) (transform_hlds__deforest__Goal_20));
#line 402 "deforest.m"
        }
#line 403 "deforest.m"
        {
#line 403 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_25_25);
        }
#line 404 "deforest.m"
        {
#line 404 "deforest.m"
          transform_hlds__deforest__deforest_cases_5_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__Cases0_12, &transform_hlds__deforest__Cases_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_25_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_5);
        }
#line 395 "deforest.m"
        {
#line 395 "deforest.m"
          MR_Word base;
#line 395 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "deforest.m"
          *transform_hlds__deforest__HeadVar__3_3 = base;
#line 395 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Case_13));
#line 395 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Cases_14));
#line 395 "deforest.m"
        }
#line 395 "deforest.m"
      }
#line 394 "deforest.m"
  }
#line 391 "deforest.m"
}

#line 379 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_disj_4_p_0(
#line 379 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 379 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
#line 379 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
#line 379 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4)
#line 379 "deforest.m"
{
#line 382 "deforest.m"
  {
#line 382 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 382 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 382 "deforest.m"
      {
#line 382 "deforest.m"
        *transform_hlds__deforest__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 382 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 382 "deforest.m"
      }
#line 382 "deforest.m"
    else
#line 383 "deforest.m"
      {
#line 383 "deforest.m"
        MR_Word transform_hlds__deforest__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 383 "deforest.m"
        MR_Word transform_hlds__deforest__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 383 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_10;
#line 383 "deforest.m"
        MR_Word transform_hlds__deforest__Goals_11;
#line 383 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_13;
#line 383 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16;
#line 383 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;
#line 383 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr0_24;
#line 383 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo0_25;
#line 383 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr_26;
#line 383 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo_27;

#line 384 "deforest.m"
        {
#line 384 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__InstMap0_13);
        }
#line 277 "deforest.m"
        transform_hlds__deforest__GoalExpr0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_8, (MR_Integer) 0)));
#line 277 "deforest.m"
        transform_hlds__deforest__GoalInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_8, (MR_Integer) 1)));
#line 278 "deforest.m"
        {
#line 278 "deforest.m"
          transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_24, &transform_hlds__deforest__GoalExpr_26, transform_hlds__deforest__GoalInfo0_25, &transform_hlds__deforest__GoalInfo_27, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16);
        }
#line 279 "deforest.m"
        {
#line 279 "deforest.m"
          transform_hlds__deforest__Goal_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 279 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_26));
#line 279 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_27));
#line 279 "deforest.m"
        }
#line 386 "deforest.m"
        {
#line 386 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17);
        }
#line 387 "deforest.m"
        {
#line 387 "deforest.m"
          transform_hlds__deforest__deforest_disj_4_p_0(transform_hlds__deforest__Goals0_9, &transform_hlds__deforest__Goals_11, transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17, transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);
        }
#line 383 "deforest.m"
        {
#line 383 "deforest.m"
          MR_Word base;
#line 383 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "deforest.m"
          *transform_hlds__deforest__HeadVar__2_2 = base;
#line 383 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Goal_10));
#line 383 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_11));
#line 383 "deforest.m"
        }
#line 383 "deforest.m"
      }
#line 382 "deforest.m"
  }
#line 379 "deforest.m"
}

#line 281 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_goal_expr_6_p_0(
#line 281 "deforest.m"
  MR_Word transform_hlds__deforest__GoalExpr0_7,
#line 281 "deforest.m"
  MR_Word * transform_hlds__deforest__GoalExpr_8,
#line 281 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60,
#line 281 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61,
#line 281 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62,
#line 281 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_63)
#line 281 "deforest.m"
{
#line 286 "deforest.m"
  {
#line 286 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 286 "deforest.m"
    if (((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 0))))
#line 344 "deforest.m"
      {
#line 344 "deforest.m"
        MR_Word transform_hlds__deforest__SubGoal0_31 = (MR_Word) MR_body(((MR_Word) transform_hlds__deforest__GoalExpr0_7), (MR_Integer) 0);
#line 344 "deforest.m"
        MR_Word transform_hlds__deforest__SubGoal_32;

#line 345 "deforest.m"
        {
#line 345 "deforest.m"
          transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__SubGoal0_31, &transform_hlds__deforest__SubGoal_32, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
        }
#line 346 "deforest.m"
        *transform_hlds__deforest__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__deforest__SubGoal_32);
#line 346 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 344 "deforest.m"
      }
#line 286 "deforest.m"
    else
#line 286 "deforest.m"
      if (((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 2))))
#line 361 "deforest.m"
        {
#line 361 "deforest.m"
          MR_Word transform_hlds__deforest__PredId_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)));
#line 361 "deforest.m"
          MR_Integer transform_hlds__deforest__ProcId_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 361 "deforest.m"
          MR_Word transform_hlds__deforest__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
#line 361 "deforest.m"
          MR_Word transform_hlds__deforest__BuiltinState_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 3)));
#line 361 "deforest.m"
          MR_Word transform_hlds__deforest__Name_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 5)));
#line 361 "deforest.m"
          MR_Word transform_hlds__deforest__V_67_67;
#line 361 "deforest.m"
          MR_Word transform_hlds__deforest__V_68_68;
#line 361 "deforest.m"
          MR_Word transform_hlds__deforest__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 4)));

#line 363 "deforest.m"
          {
#line 363 "deforest.m"
            transform_hlds__deforest__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 363 "deforest.m"
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_67_67, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr0_7));
#line 363 "deforest.m"
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_67_67, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60));
#line 363 "deforest.m"
          }
#line 362 "deforest.m"
          {
#line 362 "deforest.m"
            transform_hlds__deforest__deforest_call_9_p_0(transform_hlds__deforest__PredId_36, transform_hlds__deforest__ProcId_37, transform_hlds__deforest__Args_38, transform_hlds__deforest__Name_41, transform_hlds__deforest__BuiltinState_39, transform_hlds__deforest__V_67_67, &transform_hlds__deforest__V_68_68, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
          }
#line 363 "deforest.m"
          *transform_hlds__deforest__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_68_68, (MR_Integer) 0)));
#line 363 "deforest.m"
          *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_68_68, (MR_Integer) 1)));
#line 361 "deforest.m"
        }
#line 286 "deforest.m"
      else
#line 286 "deforest.m"
        if (((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 1))))
#line 369 "deforest.m"
          {
#line 370 "deforest.m"
            *transform_hlds__deforest__GoalExpr_8 = transform_hlds__deforest__GoalExpr0_7;
#line 370 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 370 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 369 "deforest.m"
          }
#line 286 "deforest.m"
        else
#line 286 "deforest.m"
          if (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 369 "deforest.m"
            {
#line 370 "deforest.m"
              *transform_hlds__deforest__GoalExpr_8 = transform_hlds__deforest__GoalExpr0_7;
#line 370 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 370 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 369 "deforest.m"
            }
#line 286 "deforest.m"
          else
#line 286 "deforest.m"
            if (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 286 "deforest.m"
              {
#line 286 "deforest.m"
                MR_Word transform_hlds__deforest__ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 286 "deforest.m"
                MR_Word transform_hlds__deforest__Goals_13;
#line 286 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));

#line 318 "deforest.m"
                if ((transform_hlds__deforest__ConjType_11 == (MR_Integer) 1))
#line 319 "deforest.m"
                  {
#line 319 "deforest.m"
                    *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 319 "deforest.m"
                    transform_hlds__deforest__Goals_13 = transform_hlds__deforest__STATE_VARIABLE_Goals_81_81;
#line 319 "deforest.m"
                  }
#line 318 "deforest.m"
                else
#line 290 "deforest.m"
                  {
#line 290 "deforest.m"
                    MR_Word transform_hlds__deforest__InstMap0_14;
#line 290 "deforest.m"
                    MR_Word transform_hlds__deforest__NonLocals_15;
#line 290 "deforest.m"
                    MR_Word transform_hlds__deforest__ModuleInfo_16;
#line 290 "deforest.m"
                    MR_Word transform_hlds__deforest__Globals_17;
#line 290 "deforest.m"
                    MR_Word transform_hlds__deforest__Deforestation_18;
#line 290 "deforest.m"
                    MR_Word transform_hlds__deforest__Constraints_19;
#line 290 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_83_83;
#line 290 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84;
#line 290 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
#line 290 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_91_91;
#line 290 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92;
#line 290 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94;
#line 290 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;

#line 291 "deforest.m"
                    {
#line 291 "deforest.m"
                      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__InstMap0_14);
                    }
#line 292 "deforest.m"
                    {
#line 292 "deforest.m"
                      transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_81_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__STATE_VARIABLE_Goals_83_83, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84);
                    }
#line 293 "deforest.m"
                    {
#line 293 "deforest.m"
                      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85);
                    }
#line 294 "deforest.m"
                    {
#line 294 "deforest.m"
                      transform_hlds__deforest__NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60);
                    }
#line 295 "deforest.m"
                    {
#line 295 "deforest.m"
                      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__ModuleInfo_16);
                    }
#line 296 "deforest.m"
                    {
#line 296 "deforest.m"
                      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_16, &transform_hlds__deforest__Globals_17);
                    }
#line 297 "deforest.m"
                    {
#line 297 "deforest.m"
                      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_17, (MR_Integer) 388, &transform_hlds__deforest__Deforestation_18);
                    }
#line 304 "deforest.m"
                    if ((transform_hlds__deforest__Deforestation_18 == (MR_Integer) 0))
#line 305 "deforest.m"
                      {
#line 305 "deforest.m"
                        transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
#line 305 "deforest.m"
                        transform_hlds__deforest__STATE_VARIABLE_Goals_91_91 = transform_hlds__deforest__STATE_VARIABLE_Goals_83_83;
#line 305 "deforest.m"
                      }
#line 304 "deforest.m"
                    else
#line 300 "deforest.m"
                      {
#line 300 "deforest.m"
                        MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_87_87;
#line 300 "deforest.m"
                        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_88_88;
#line 300 "deforest.m"
                        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_89_89;

#line 301 "deforest.m"
                        {
#line 301 "deforest.m"
                          transform_hlds__deforest__compute_goal_infos_4_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_83_83, &transform_hlds__deforest__STATE_VARIABLE_Goals_87_87, transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_88_88);
                        }
#line 302 "deforest.m"
                        {
#line 302 "deforest.m"
                          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_88_88, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_89_89);
                        }
#line 303 "deforest.m"
                        {
#line 303 "deforest.m"
                          transform_hlds__deforest__deforest_conj_6_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_87_87, transform_hlds__deforest__NonLocals_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__STATE_VARIABLE_Goals_91_91, transform_hlds__deforest__STATE_VARIABLE_PDInfo_89_89, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92);
                        }
#line 300 "deforest.m"
                      }
#line 307 "deforest.m"
                    {
#line 307 "deforest.m"
                      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_17, (MR_Integer) 348, &transform_hlds__deforest__Constraints_19);
                    }
#line 309 "deforest.m"
                    {
#line 309 "deforest.m"
                      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94);
                    }
#line 314 "deforest.m"
                    if ((transform_hlds__deforest__Constraints_19 == (MR_Integer) 0))
#line 315 "deforest.m"
                      {
#line 315 "deforest.m"
                        transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94;
#line 315 "deforest.m"
                        transform_hlds__deforest__Goals_13 = transform_hlds__deforest__STATE_VARIABLE_Goals_91_91;
#line 315 "deforest.m"
                      }
#line 314 "deforest.m"
                    else
#line 311 "deforest.m"
                      {
#line 312 "deforest.m"
                        {
#line 312 "deforest.m"
                          transform_hlds__deforest__propagate_conj_constraints_6_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_91_91, transform_hlds__deforest__NonLocals_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__Goals_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
                        }
#line 311 "deforest.m"
                      }
#line 317 "deforest.m"
                    {
#line 317 "deforest.m"
                      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
                    }
#line 290 "deforest.m"
                  }
#line 324 "deforest.m"
                {
#line 324 "deforest.m"
                  MR_Word base;
#line 324 "deforest.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 324 "deforest.m"
                  *transform_hlds__deforest__GoalExpr_8 = base;
#line 324 "deforest.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 324 "deforest.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__ConjType_11));
#line 324 "deforest.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__Goals_13));
#line 324 "deforest.m"
                }
#line 324 "deforest.m"
                *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 286 "deforest.m"
              }
#line 286 "deforest.m"
            else
#line 286 "deforest.m"
              if (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 326 "deforest.m"
                {
#line 326 "deforest.m"
                  MR_Word transform_hlds__deforest__Goals0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 326 "deforest.m"
                  MR_Word transform_hlds__deforest__Goals_100;

#line 327 "deforest.m"
                  {
#line 327 "deforest.m"
                    transform_hlds__deforest__deforest_disj_4_p_0(transform_hlds__deforest__Goals0_99, &transform_hlds__deforest__Goals_100, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
                  }
#line 328 "deforest.m"
                  {
#line 328 "deforest.m"
                    MR_Word base;
#line 328 "deforest.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "deforest.m"
                    *transform_hlds__deforest__GoalExpr_8 = base;
#line 328 "deforest.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 328 "deforest.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_100));
#line 328 "deforest.m"
                  }
#line 328 "deforest.m"
                  *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 326 "deforest.m"
                }
#line 286 "deforest.m"
              else
#line 286 "deforest.m"
                if (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 369 "deforest.m"
                  {
#line 370 "deforest.m"
                    *transform_hlds__deforest__GoalExpr_8 = transform_hlds__deforest__GoalExpr0_7;
#line 370 "deforest.m"
                    *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 370 "deforest.m"
                    *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 369 "deforest.m"
                  }
#line 286 "deforest.m"
                else
#line 286 "deforest.m"
                  if (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 330 "deforest.m"
                    {
#line 330 "deforest.m"
                      MR_Word transform_hlds__deforest__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 330 "deforest.m"
                      MR_Word transform_hlds__deforest__Cond0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
#line 330 "deforest.m"
                      MR_Word transform_hlds__deforest__Then0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 3)));
#line 330 "deforest.m"
                      MR_Word transform_hlds__deforest__Else0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 4)));
#line 330 "deforest.m"
                      MR_Word transform_hlds__deforest__Cond_24;
#line 330 "deforest.m"
                      MR_Word transform_hlds__deforest__Then_25;
#line 330 "deforest.m"
                      MR_Word transform_hlds__deforest__Else_26;
#line 330 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_74_74;
#line 330 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_75_75;
#line 330 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76;
#line 330 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77;
#line 330 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_78_78;
#line 330 "deforest.m"
                      MR_Word transform_hlds__deforest__InstMap0_101;

#line 331 "deforest.m"
                      {
#line 331 "deforest.m"
                        transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__InstMap0_101);
                      }
#line 332 "deforest.m"
                      {
#line 332 "deforest.m"
                        transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Cond0_21, &transform_hlds__deforest__Cond_24, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_74_74);
                      }
#line 333 "deforest.m"
                      {
#line 333 "deforest.m"
                        transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Cond_24, transform_hlds__deforest__STATE_VARIABLE_PDInfo_74_74, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_75_75);
                      }
#line 334 "deforest.m"
                      {
#line 334 "deforest.m"
                        transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Then0_22, &transform_hlds__deforest__Then_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_75_75, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76);
                      }
#line 335 "deforest.m"
                      {
#line 335 "deforest.m"
                        transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_101, transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77);
                      }
#line 336 "deforest.m"
                      {
#line 336 "deforest.m"
                        transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Else0_23, &transform_hlds__deforest__Else_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_78_78);
                      }
#line 337 "deforest.m"
                      {
#line 337 "deforest.m"
                        transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_101, transform_hlds__deforest__STATE_VARIABLE_PDInfo_78_78, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
                      }
#line 338 "deforest.m"
                      {
#line 338 "deforest.m"
                        MR_Word base;
#line 338 "deforest.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 338 "deforest.m"
                        *transform_hlds__deforest__GoalExpr_8 = base;
#line 338 "deforest.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 338 "deforest.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Vars_20));
#line 338 "deforest.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__Cond_24));
#line 338 "deforest.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__deforest__Then_25));
#line 338 "deforest.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__deforest__Else_26));
#line 338 "deforest.m"
                      }
#line 338 "deforest.m"
                      *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 330 "deforest.m"
                    }
#line 286 "deforest.m"
                  else
#line 286 "deforest.m"
                    if (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 348 "deforest.m"
                      {
#line 348 "deforest.m"
                        MR_Word transform_hlds__deforest__Reason_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 348 "deforest.m"
                        MR_Word transform_hlds__deforest__SubGoal0_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
#line 348 "deforest.m"
                        MR_Word transform_hlds__deforest__SubGoal_103;
#line 350 "deforest.m"
                        MR_Word transform_hlds__deforest__FGT_35;
#line 350 "deforest.m"
                        MR_Word transform_hlds__deforest__V_34_34;

#line 350 "deforest.m"
                        transform_hlds__deforest__succeeded = ((((MR_tag((MR_Word) transform_hlds__deforest__Reason_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Reason_33, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 350 "deforest.m"
                        if (transform_hlds__deforest__succeeded)
#line 350 "deforest.m"
                          {
#line 350 "deforest.m"
                            transform_hlds__deforest__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Reason_33, (MR_Integer) 1)));
#line 350 "deforest.m"
                            transform_hlds__deforest__FGT_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Reason_33, (MR_Integer) 2)));
#line 352 "deforest.m"
                            if ((transform_hlds__deforest__FGT_35 == (MR_Integer) 1))
#line 351 "deforest.m"
                              transform_hlds__deforest__succeeded = MR_TRUE;
#line 352 "deforest.m"
                            else
#line 352 "deforest.m"
                              if ((transform_hlds__deforest__FGT_35 == (MR_Integer) 2))
#line 352 "deforest.m"
                                transform_hlds__deforest__succeeded = MR_TRUE;
#line 352 "deforest.m"
                              else
#line 352 "deforest.m"
                                transform_hlds__deforest__succeeded = MR_FALSE;
#line 350 "deforest.m"
                          }
#line 356 "deforest.m"
                        if (transform_hlds__deforest__succeeded)
#line 355 "deforest.m"
                          {
#line 355 "deforest.m"
                            transform_hlds__deforest__SubGoal_103 = transform_hlds__deforest__SubGoal0_102;
#line 355 "deforest.m"
                            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 355 "deforest.m"
                          }
#line 356 "deforest.m"
                        else
#line 357 "deforest.m"
                          {
#line 357 "deforest.m"
                            transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__SubGoal0_102, &transform_hlds__deforest__SubGoal_103, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
                          }
#line 359 "deforest.m"
                        {
#line 359 "deforest.m"
                          MR_Word base;
#line 359 "deforest.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 359 "deforest.m"
                          *transform_hlds__deforest__GoalExpr_8 = base;
#line 359 "deforest.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 359 "deforest.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Reason_33));
#line 359 "deforest.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__SubGoal_103));
#line 359 "deforest.m"
                        }
#line 359 "deforest.m"
                        *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 348 "deforest.m"
                      }
#line 286 "deforest.m"
                    else
#line 286 "deforest.m"
                      if (((((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 372 "deforest.m"
                        {
#line 374 "deforest.m"
                          {
#line 374 "deforest.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforest_goal_expr\'/6", (MR_String) "shorthand");
#line 374 "deforest.m"
                            return;
                          }
#line 372 "deforest.m"
                        }
#line 286 "deforest.m"
                      else
#line 340 "deforest.m"
                        {
#line 340 "deforest.m"
                          MR_Word transform_hlds__deforest__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 340 "deforest.m"
                          MR_Word transform_hlds__deforest__CanFail_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
#line 340 "deforest.m"
                          MR_Word transform_hlds__deforest__Cases0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 3)));
#line 340 "deforest.m"
                          MR_Word transform_hlds__deforest__Cases_30;

#line 341 "deforest.m"
                          {
#line 341 "deforest.m"
                            transform_hlds__deforest__deforest_cases_5_p_0(transform_hlds__deforest__Var_27, transform_hlds__deforest__Cases0_29, &transform_hlds__deforest__Cases_30, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
                          }
#line 342 "deforest.m"
                          {
#line 342 "deforest.m"
                            MR_Word base;
#line 342 "deforest.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 342 "deforest.m"
                            *transform_hlds__deforest__GoalExpr_8 = base;
#line 342 "deforest.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 342 "deforest.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Var_27));
#line 342 "deforest.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__CanFail_28));
#line 342 "deforest.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__deforest__Cases_30));
#line 342 "deforest.m"
                          }
#line 342 "deforest.m"
                          *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 340 "deforest.m"
                        }
#line 286 "deforest.m"
  }
#line 281 "deforest.m"
}

#line 273 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_goal_4_p_0(
#line 273 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_5,
#line 273 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_6,
#line 273 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_12,
#line 273 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_13)
#line 273 "deforest.m"
{
#line 276 "deforest.m"
  {
#line 276 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 276 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_5, (MR_Integer) 0)));
#line 276 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_5, (MR_Integer) 1)));
#line 276 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr_10;
#line 276 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_11;

#line 278 "deforest.m"
    {
#line 278 "deforest.m"
      transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_8, &transform_hlds__deforest__GoalExpr_10, transform_hlds__deforest__GoalInfo0_9, &transform_hlds__deforest__GoalInfo_11, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_12, transform_hlds__deforest__STATE_VARIABLE_PDInfo_13);
    }
#line 279 "deforest.m"
    {
#line 279 "deforest.m"
      MR_Word base;
#line 279 "deforest.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 279 "deforest.m"
      *transform_hlds__deforest__Goal_6 = base;
#line 279 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_10));
#line 279 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_11));
#line 279 "deforest.m"
    }
#line 276 "deforest.m"
  }
#line 273 "deforest.m"
}

#line 192 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_proc_deltas_5_p_0(
#line 192 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 192 "deforest.m"
  MR_Integer * transform_hlds__deforest__CostDelta_8,
#line 192 "deforest.m"
  MR_Integer * transform_hlds__deforest__SizeDelta_9,
#line 192 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_28,
#line 192 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_29)
#line 192 "deforest.m"
{
#line 195 "deforest.m"
  {
#line 195 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 195 "deforest.m"
    MR_Integer transform_hlds__deforest__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_16;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__SimplifyTasks_17;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__Changed_18;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PredInfo_34_34;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_35_35;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_37_37;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_38_38;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_40_40;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_41_41;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_42_42;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_43_43;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_47_47;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_49_49;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_50_50;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_72_72;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr0_88;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo0_89;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr_90;
#line 195 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_91;

#line 197 "deforest.m"
    {
#line 197 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_28, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 199 "deforest.m"
    {
#line 199 "deforest.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Deforesting ", transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 202 "deforest.m"
    {
#line 202 "deforest.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30, transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, &transform_hlds__deforest__STATE_VARIABLE_PredInfo_34_34, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_35_35);
    }
#line 204 "deforest.m"
    {
#line 204 "deforest.m"
      transform_hlds__pd_info__pd_info_init_unfold_info_5_p_0(transform_hlds__deforest__HeadVar__1_1, transform_hlds__deforest__STATE_VARIABLE_PredInfo_34_34, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_35_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_28, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_37_37);
    }
#line 206 "deforest.m"
    {
#line 206 "deforest.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_35_35, &transform_hlds__deforest__STATE_VARIABLE_Goal_38_38);
    }
#line 209 "deforest.m"
    {
#line 209 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__deforest__Globals_16);
    }
#line 210 "deforest.m"
    {
#line 210 "deforest.m"
      check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, transform_hlds__deforest__Globals_16, &transform_hlds__deforest__SimplifyTasks_17);
    }
#line 211 "deforest.m"
    {
#line 211 "deforest.m"
      transform_hlds__pd_util__pd_simplify_goal_5_p_0(transform_hlds__deforest__SimplifyTasks_17, transform_hlds__deforest__STATE_VARIABLE_Goal_38_38, &transform_hlds__deforest__STATE_VARIABLE_Goal_40_40, transform_hlds__deforest__STATE_VARIABLE_PDInfo_37_37, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_41_41);
    }
#line 212 "deforest.m"
    {
#line 212 "deforest.m"
      transform_hlds__pd_util__propagate_constraints_4_p_0(transform_hlds__deforest__STATE_VARIABLE_Goal_40_40, &transform_hlds__deforest__STATE_VARIABLE_Goal_42_42, transform_hlds__deforest__STATE_VARIABLE_PDInfo_41_41, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_43_43);
    }
#line 214 "deforest.m"
    {
#line 214 "deforest.m"
      transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_43_43, (MR_String) "after constraints\n", transform_hlds__deforest__STATE_VARIABLE_Goal_42_42);
    }
#line 277 "deforest.m"
    transform_hlds__deforest__GoalExpr0_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_42_42, (MR_Integer) 0)));
#line 277 "deforest.m"
    transform_hlds__deforest__GoalInfo0_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_42_42, (MR_Integer) 1)));
#line 278 "deforest.m"
    {
#line 278 "deforest.m"
      transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_88, &transform_hlds__deforest__GoalExpr_90, transform_hlds__deforest__GoalInfo0_89, &transform_hlds__deforest__GoalInfo_91, transform_hlds__deforest__STATE_VARIABLE_PDInfo_43_43, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48);
    }
#line 279 "deforest.m"
    {
#line 279 "deforest.m"
      transform_hlds__deforest__STATE_VARIABLE_Goal_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 279 "deforest.m"
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_47_47, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_90));
#line 279 "deforest.m"
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_47_47, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_91));
#line 279 "deforest.m"
    }
#line 217 "deforest.m"
    {
#line 217 "deforest.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_49_49);
    }
#line 218 "deforest.m"
    {
#line 218 "deforest.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__deforest__STATE_VARIABLE_Goal_47_47, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_49_49, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_50_50);
    }
#line 219 "deforest.m"
    {
#line 219 "deforest.m"
      transform_hlds__pd_info__pd_info_get_changed_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__Changed_18);
    }
#line 254 "deforest.m"
    if ((transform_hlds__deforest__Changed_18 == (MR_Integer) 0))
#line 255 "deforest.m"
      {
#line 255 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_51_51;
#line 255 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_80;
#line 255 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_82;

#line 256 "deforest.m"
        {
#line 256 "deforest.m"
          transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_51_51);
        }
#line 257 "deforest.m"
        {
#line 257 "deforest.m"
          transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_80);
        }
#line 258 "deforest.m"
        {
#line 258 "deforest.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_80, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_50_50, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_51_51, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_82);
        }
#line 260 "deforest.m"
        {
#line 260 "deforest.m"
          transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_82, transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71);
        }
#line 255 "deforest.m"
      }
#line 254 "deforest.m"
    else
#line 222 "deforest.m"
      {
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_19;
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__VarTypes_20;
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__InstVarSet_21;
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__RerunDet_22;
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__ProcArgInfo0_26;
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__ProcArgInfo_27;
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_55_55;
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57;
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_58_58;
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_60_60;
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_61_61;
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62;
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_63;
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_64_64;
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_65;
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_66_66;
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_69;
#line 222 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_70_70;

#line 223 "deforest.m"
        {
#line 223 "deforest.m"
          transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_55_55);
        }
#line 224 "deforest.m"
        {
#line 224 "deforest.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57);
        }
#line 225 "deforest.m"
        {
#line 225 "deforest.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__deforest__STATE_VARIABLE_Goal_58_58);
        }
#line 226 "deforest.m"
        {
#line 226 "deforest.m"
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_55_55, &transform_hlds__deforest__InstMap0_19);
        }
#line 227 "deforest.m"
        {
#line 227 "deforest.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__deforest__VarTypes_20);
        }
#line 228 "deforest.m"
        {
#line 228 "deforest.m"
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__deforest__InstVarSet_21);
        }
#line 229 "deforest.m"
        {
#line 229 "deforest.m"
          check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, transform_hlds__deforest__STATE_VARIABLE_Goal_58_58, &transform_hlds__deforest__STATE_VARIABLE_Goal_60_60, transform_hlds__deforest__VarTypes_20, transform_hlds__deforest__InstVarSet_21, transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_55_55, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_61_61);
        }
#line 231 "deforest.m"
        {
#line 231 "deforest.m"
          transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_61_61, transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62);
        }
#line 232 "deforest.m"
        {
#line 232 "deforest.m"
          transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62, &transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_63);
        }
#line 233 "deforest.m"
        {
#line 233 "deforest.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__deforest__STATE_VARIABLE_Goal_60_60, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_64_64);
        }
#line 234 "deforest.m"
        {
#line 234 "deforest.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_63, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_64_64, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_61_61, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_65);
        }
#line 236 "deforest.m"
        {
#line 236 "deforest.m"
          transform_hlds__pd_info__pd_info_get_rerun_det_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62, &transform_hlds__deforest__RerunDet_22);
        }
#line 244 "deforest.m"
        if ((transform_hlds__deforest__RerunDet_22 == (MR_Integer) 0))
#line 245 "deforest.m"
          transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_66_66 = transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_65;
#line 244 "deforest.m"
        else
#line 239 "deforest.m"
          {
#line 243 "deforest.m"
            MR_Word transform_hlds__deforest__V_23_23;
#line 243 "deforest.m"
            MR_Word transform_hlds__deforest__V_24_24;
#line 243 "deforest.m"
            MR_Word transform_hlds__deforest__V_25_25;

#line 243 "deforest.m"
            {
#line 243 "deforest.m"
              check_hlds__det_analysis__det_infer_proc_8_p_0(transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_65, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_66_66, &transform_hlds__deforest__V_23_23, &transform_hlds__deforest__V_24_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__V_25_25);
            }
#line 239 "deforest.m"
          }
#line 249 "deforest.m"
        {
#line 249 "deforest.m"
          transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62, &transform_hlds__deforest__ProcArgInfo0_26);
        }
#line 250 "deforest.m"
        {
#line 250 "deforest.m"
          transform_hlds__pd_util__get_branch_vars_proc_6_p_0(transform_hlds__deforest__HeadVar__1_1, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_64_64, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_66_66, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_69, transform_hlds__deforest__ProcArgInfo0_26, &transform_hlds__deforest__ProcArgInfo_27);
        }
#line 252 "deforest.m"
        {
#line 252 "deforest.m"
          transform_hlds__pd_info__pd_info_set_proc_arg_info_3_p_0(transform_hlds__deforest__ProcArgInfo_27, transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_70_70);
        }
#line 253 "deforest.m"
        {
#line 253 "deforest.m"
          transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_69, transform_hlds__deforest__STATE_VARIABLE_PDInfo_70_70, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71);
        }
#line 222 "deforest.m"
      }
#line 263 "deforest.m"
    {
#line 263 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_72_72);
    }
#line 265 "deforest.m"
    {
#line 265 "deforest.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Finished deforesting ", transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_72_72);
    }
#line 268 "deforest.m"
    {
#line 268 "deforest.m"
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71, transform_hlds__deforest__CostDelta_8);
    }
#line 269 "deforest.m"
    {
#line 269 "deforest.m"
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71, transform_hlds__deforest__SizeDelta_9);
    }
#line 270 "deforest.m"
    {
#line 270 "deforest.m"
      transform_hlds__pd_info__pd_info_unset_unfold_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71, transform_hlds__deforest__STATE_VARIABLE_PDInfo_29);
#line 270 "deforest.m"
      return;
    }
#line 195 "deforest.m"
  }
#line 192 "deforest.m"
}

#line 187 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_proc_3_p_0(
#line 187 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_4,
#line 187 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
#line 187 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9)
#line 187 "deforest.m"
{
#line 190 "deforest.m"
  {
#line 190 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 190 "deforest.m"
    MR_Integer transform_hlds__deforest__V_6_6;
#line 190 "deforest.m"
    MR_Integer transform_hlds__deforest__V_7_7;

#line 190 "deforest.m"
    {
#line 190 "deforest.m"
      transform_hlds__deforest__deforest_proc_deltas_5_p_0(transform_hlds__deforest__PredProcId_4, &transform_hlds__deforest__V_6_6, &transform_hlds__deforest__V_7_7, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8, transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);
    }
#line 190 "deforest.m"
  }
#line 187 "deforest.m"
}

#line 176 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(
#line 176 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_8,
#line 176 "deforest.m"
  MR_Word transform_hlds__deforest__ProcInfo_9,
#line 176 "deforest.m"
  MR_Word * transform_hlds__deforest__ProcInfo_3,
#line 176 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_15,
#line 176 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_16,
#line 176 "deforest.m"
  MR_Word transform_hlds__deforest__UnivProcArgInfo0_11,
#line 176 "deforest.m"
  MR_Word * transform_hlds__deforest__UnivProcArgInfo_12)
#line 176 "deforest.m"
{
#line 181 "deforest.m"
  {
#line 181 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 181 "deforest.m"
    MR_Word transform_hlds__deforest__TypeInfo_18_18;
#line 181 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo0_13;
#line 181 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo_14;
#line 182 "deforest.m"
    MR_Box transform_hlds__deforest__conv0_ProcArgInfo0_13;

#line 180 "deforest.m"
    *transform_hlds__deforest__ProcInfo_3 = transform_hlds__deforest__ProcInfo_9;
#line 11147 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeInfo_18_18 = (MR_Word) &transform_hlds__deforest_scalar_common_2[0];
#line 182 "deforest.m"
    {
#line 182 "deforest.m"
      mercury__univ__det_univ_to_type_2_p_0(transform_hlds__deforest__TypeInfo_18_18, transform_hlds__deforest__UnivProcArgInfo0_11, &transform_hlds__deforest__conv0_ProcArgInfo0_13);
    }
#line 182 "deforest.m"
    transform_hlds__deforest__ProcArgInfo0_13 = ((MR_Word) transform_hlds__deforest__conv0_ProcArgInfo0_13);
#line 183 "deforest.m"
    {
#line 183 "deforest.m"
      transform_hlds__pd_util__get_branch_vars_proc_6_p_0(transform_hlds__deforest__PredProcId_8, transform_hlds__deforest__ProcInfo_9, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_15, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_16, transform_hlds__deforest__ProcArgInfo0_13, &transform_hlds__deforest__ProcArgInfo_14);
    }
#line 185 "deforest.m"
    {
#line 185 "deforest.m"
      mercury__univ__type_to_univ_2_p_1(transform_hlds__deforest__TypeInfo_18_18, ((MR_Box) (transform_hlds__deforest__ProcArgInfo_14)), transform_hlds__deforest__UnivProcArgInfo_12);
#line 185 "deforest.m"
      return;
    }
#line 181 "deforest.m"
  }
#line 176 "deforest.m"
}

#line 154 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(
#line 154 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_4,
#line 154 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_11,
#line 154 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_12)
#line 154 "deforest.m"
{
#line 157 "deforest.m"
  {
#line 157 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 157 "deforest.m"
    MR_Word transform_hlds__deforest__PredInfo_6;
#line 157 "deforest.m"
    MR_Word transform_hlds__deforest__ProcInfo0_7;
#line 157 "deforest.m"
    MR_Word transform_hlds__deforest__Detism0_8;
#line 160 "deforest.m"
    MR_Word transform_hlds__deforest__V_16_16;
#line 160 "deforest.m"
    MR_Word transform_hlds__deforest__V_9_9;

#line 158 "deforest.m"
    {
#line 158 "deforest.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__deforest__PredProcId_4, &transform_hlds__deforest__PredInfo_6, &transform_hlds__deforest__ProcInfo0_7);
    }
#line 159 "deforest.m"
    {
#line 159 "deforest.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__deforest__ProcInfo0_7, &transform_hlds__deforest__Detism0_8);
    }
#line 160 "deforest.m"
    {
#line 160 "deforest.m"
      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__deforest__Detism0_8, &transform_hlds__deforest__V_9_9, &transform_hlds__deforest__V_16_16);
    }
#line 160 "deforest.m"
    transform_hlds__deforest__succeeded = ((MR_Integer) 2 == transform_hlds__deforest__V_16_16);
#line 164 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 160 "deforest.m"
      *transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_12 = transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_11;
#line 164 "deforest.m"
    else
#line 166 "deforest.m"
      {
#line 166 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo_10;

#line 165 "deforest.m"
        {
#line 165 "deforest.m"
          hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0((MR_Integer) 6, transform_hlds__deforest__ProcInfo0_7, &transform_hlds__deforest__ProcInfo_10);
        }
#line 167 "deforest.m"
        {
#line 167 "deforest.m"
          hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__deforest__PredProcId_4, transform_hlds__deforest__PredInfo_6, transform_hlds__deforest__ProcInfo_10, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_12);
#line 167 "deforest.m"
          return;
        }
#line 166 "deforest.m"
      }
#line 157 "deforest.m"
  }
#line 154 "deforest.m"
}

#line 148 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_4(
#line 148 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg)
#line 148 "deforest.m"
{
#line 148 "deforest.m"
  {
#line 148 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 148 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;

#line 148 "deforest.m"
    {
#line 148 "deforest.m"
      return transform_hlds__deforest__succeeded = transform_hlds__deforest__IntroducedFrom__pred__deforestation__148__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__closure, (MR_Integer) 4))));
    }
#line 148 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 148 "deforest.m"
  }
#line 148 "deforest.m"
}

#line 140 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_3(
#line 140 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 140 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 140 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 140 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 140 "deforest.m"
{
#line 140 "deforest.m"
  {
#line 140 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 140 "deforest.m"
    MR_Word transform_hlds__deforest__conv6_STATE_VARIABLE_ModuleInfo_12;

#line 140 "deforest.m"
    {
#line 140 "deforest.m"
      transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv6_STATE_VARIABLE_ModuleInfo_12);
    }
#line 140 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv6_STATE_VARIABLE_ModuleInfo_12));
#line 140 "deforest.m"
  }
#line 140 "deforest.m"
}

#line 124 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_2(
#line 124 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 124 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 124 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 124 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 124 "deforest.m"
{
#line 124 "deforest.m"
  {
#line 124 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 124 "deforest.m"
    MR_Word transform_hlds__deforest__conv4_STATE_VARIABLE_PDInfo_9;

#line 124 "deforest.m"
    {
#line 124 "deforest.m"
      transform_hlds__deforest__deforest_proc_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv4_STATE_VARIABLE_PDInfo_9);
    }
#line 124 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv4_STATE_VARIABLE_PDInfo_9));
#line 124 "deforest.m"
  }
#line 124 "deforest.m"
}

#line 104 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_1(
#line 104 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 104 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 104 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 104 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3,
#line 104 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_4,
#line 104 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_5,
#line 104 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_6,
#line 104 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_7)
#line 104 "deforest.m"
{
#line 104 "deforest.m"
  {
#line 104 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 104 "deforest.m"
    MR_Word transform_hlds__deforest__conv2_ProcInfo_3;
#line 104 "deforest.m"
    MR_Word transform_hlds__deforest__conv1_STATE_VARIABLE_ModuleInfo_16;
#line 104 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_UnivProcArgInfo_12;

#line 104 "deforest.m"
    {
#line 104 "deforest.m"
      transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv2_ProcInfo_3, ((MR_Word) transform_hlds__deforest__wrapper_arg_4), &transform_hlds__deforest__conv1_STATE_VARIABLE_ModuleInfo_16, ((MR_Word) transform_hlds__deforest__wrapper_arg_6), &transform_hlds__deforest__conv0_UnivProcArgInfo_12);
    }
#line 104 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv2_ProcInfo_3));
#line 104 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_5 = ((MR_Box) (transform_hlds__deforest__conv1_STATE_VARIABLE_ModuleInfo_16));
#line 104 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_7 = ((MR_Box) (transform_hlds__deforest__conv0_UnivProcArgInfo_12));
#line 104 "deforest.m"
  }
#line 104 "deforest.m"
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
#line 98 "deforest.m"
  {
#line 98 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__TypeInfo_54_54;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_62_62;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo0_7;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__UnivProcArgInfo0_8;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__Task0_9;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__Task_10;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo_14;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__DepInfo_15;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__DepOrdering_16;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__DepList_17;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__PDInfo0_18;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__PDInfo_19;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__VersionIndex_20;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__Versions_21;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_22;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__Constraints_23;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_35_35;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_39_39;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_41_41;
#line 98 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42;
#line 111 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo1_13;
#line 107 "deforest.m"
    MR_Word transform_hlds__deforest__UnivProcArgInfo_12;
#line 107 "deforest.m"
    MR_Word transform_hlds__deforest__V_11_11;
#line 108 "deforest.m"
    MR_Box transform_hlds__deforest__conv3_ProcArgInfo1_13;
#line 124 "deforest.m"
    MR_Box transform_hlds__deforest__conv5_PDInfo_19;
#line 135 "deforest.m"
    MR_Word transform_hlds__deforest__V_24_24;
#line 135 "deforest.m"
    MR_Word transform_hlds__deforest__V_25_25;

#line 174 "deforest.m"
    {
#line 174 "deforest.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[0], &transform_hlds__deforest__ProcArgInfo0_7);
    }
#line 11457 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeInfo_54_54 = (MR_Word) &transform_hlds__deforest_scalar_common_2[0];
#line 100 "deforest.m"
    {
#line 100 "deforest.m"
      mercury__univ__type_to_univ_2_p_1(transform_hlds__deforest__TypeInfo_54_54, ((MR_Box) (transform_hlds__deforest__ProcArgInfo0_7)), &transform_hlds__deforest__UnivProcArgInfo0_8);
    }
#line 104 "deforest.m"
    {
#line 104 "deforest.m"
      transform_hlds__deforest__Task0_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 104 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task0_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 104 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task0_9, 1) = ((MR_Box) (&transform_hlds__deforest_scalar_common_2[4]));
#line 104 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task0_9, 2) = ((MR_Box) (transform_hlds__deforest__UnivProcArgInfo0_8));
#line 104 "deforest.m"
    }
#line 105 "deforest.m"
    {
#line 105 "deforest.m"
      hlds__passes_aux__process_all_nonimported_procs_update_4_p_0(transform_hlds__deforest__Task0_9, &transform_hlds__deforest__Task_10, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_30, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_35_35);
    }
#line 107 "deforest.m"
    transform_hlds__deforest__succeeded = ((((MR_tag((MR_Word) transform_hlds__deforest__Task_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 107 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 107 "deforest.m"
      {
#line 107 "deforest.m"
        transform_hlds__deforest__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task_10, (MR_Integer) 1)));
#line 107 "deforest.m"
        transform_hlds__deforest__UnivProcArgInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task_10, (MR_Integer) 2)));
#line 108 "deforest.m"
        {
#line 108 "deforest.m"
          transform_hlds__deforest__succeeded = mercury__univ__univ_to_type_2_p_0(transform_hlds__deforest__TypeInfo_54_54, transform_hlds__deforest__UnivProcArgInfo_12, &transform_hlds__deforest__conv3_ProcArgInfo1_13);
        }
#line 108 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 108 "deforest.m"
          {
#line 108 "deforest.m"
            transform_hlds__deforest__ProcArgInfo1_13 = ((MR_Word) transform_hlds__deforest__conv3_ProcArgInfo1_13);
#line 108 "deforest.m"
            transform_hlds__deforest__succeeded = MR_TRUE;
#line 108 "deforest.m"
          }
#line 107 "deforest.m"
      }
#line 111 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 110 "deforest.m"
      transform_hlds__deforest__ProcArgInfo_14 = transform_hlds__deforest__ProcArgInfo1_13;
#line 111 "deforest.m"
    else
#line 112 "deforest.m"
      {
#line 112 "deforest.m"
        {
#line 112 "deforest.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforestation\'/4", (MR_String) "passes_aux stuffed up");
#line 112 "deforest.m"
          return;
        }
#line 112 "deforest.m"
      }
#line 118 "deforest.m"
    {
#line 118 "deforest.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_35_35, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_39_39);
    }
#line 119 "deforest.m"
    {
#line 119 "deforest.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_39_39, &transform_hlds__deforest__DepInfo_15);
    }
#line 11535 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 120 "deforest.m"
    {
#line 120 "deforest.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(transform_hlds__deforest__TypeCtorInfo_62_62, transform_hlds__deforest__DepInfo_15, &transform_hlds__deforest__DepOrdering_16);
    }
#line 121 "deforest.m"
    {
#line 121 "deforest.m"
      mercury__list__condense_2_p_0(transform_hlds__deforest__TypeCtorInfo_62_62, transform_hlds__deforest__DepOrdering_16, &transform_hlds__deforest__DepList_17);
    }
#line 123 "deforest.m"
    {
#line 123 "deforest.m"
      transform_hlds__pd_info__pd_info_init_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_39_39, transform_hlds__deforest__ProcArgInfo_14, &transform_hlds__deforest__PDInfo0_18);
    }
#line 124 "deforest.m"
    {
#line 124 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_62_62, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0, (MR_Word) &transform_hlds__deforest_scalar_common_2[5], transform_hlds__deforest__DepList_17, ((MR_Box) (transform_hlds__deforest__PDInfo0_18)), &transform_hlds__deforest__conv5_PDInfo_19);
    }
#line 124 "deforest.m"
    transform_hlds__deforest__PDInfo_19 = ((MR_Word) transform_hlds__deforest__conv5_PDInfo_19);
#line 125 "deforest.m"
    {
#line 125 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__PDInfo_19, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_41_41);
    }
#line 126 "deforest.m"
    {
#line 126 "deforest.m"
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_41_41, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42);
    }
#line 127 "deforest.m"
    {
#line 127 "deforest.m"
      transform_hlds__pd_info__pd_info_get_versions_2_p_0(transform_hlds__deforest__PDInfo_19, &transform_hlds__deforest__VersionIndex_20);
    }
#line 129 "deforest.m"
    {
#line 129 "deforest.m"
      mercury__map__keys_2_p_0(transform_hlds__deforest__TypeCtorInfo_62_62, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__deforest__VersionIndex_20, &transform_hlds__deforest__Versions_21);
    }
#line 131 "deforest.m"
    {
#line 131 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42, &transform_hlds__deforest__Globals_22);
    }
#line 132 "deforest.m"
    {
#line 132 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_22, (MR_Integer) 348, &transform_hlds__deforest__Constraints_23);
    }
#line 134 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__Constraints_23 == (MR_Integer) 1);
#line 134 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 134 "deforest.m"
      {
#line 135 "deforest.m"
        transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Versions_21)) == (MR_mktag((MR_Integer) 1)));
#line 135 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 135 "deforest.m"
          {
#line 135 "deforest.m"
            transform_hlds__deforest__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Versions_21, (MR_Integer) 0)));
#line 135 "deforest.m"
            transform_hlds__deforest__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Versions_21, (MR_Integer) 1)));
#line 135 "deforest.m"
          }
#line 134 "deforest.m"
      }
#line 150 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 140 "deforest.m"
      {
#line 140 "deforest.m"
        MR_Word transform_hlds__deforest__NoWarnGlobals_27;
#line 140 "deforest.m"
        MR_Word transform_hlds__deforest__Specs_28;
#line 140 "deforest.m"
        MR_Word transform_hlds__deforest__FoundErrors_29;
#line 140 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_45_45;
#line 140 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_46_46;
#line 140 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_47_47;
#line 140 "deforest.m"
        MR_Word transform_hlds__deforest__V_49_49;
#line 140 "deforest.m"
        MR_Box transform_hlds__deforest__conv7_STATE_VARIABLE_ModuleInfo_45_45;
#line 142 "deforest.m"
        MR_Word transform_hlds__deforest___OptionsToRestore_26;

#line 140 "deforest.m"
        {
#line 140 "deforest.m"
          mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_62_62, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__deforest_scalar_common_2[6], transform_hlds__deforest__Versions_21, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42)), &transform_hlds__deforest__conv7_STATE_VARIABLE_ModuleInfo_45_45);
        }
#line 140 "deforest.m"
        transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_45_45 = ((MR_Word) transform_hlds__deforest__conv7_STATE_VARIABLE_ModuleInfo_45_45);
#line 142 "deforest.m"
        {
#line 142 "deforest.m"
          check_hlds__det_report__disable_det_warnings_3_p_0(&transform_hlds__deforest___OptionsToRestore_26, transform_hlds__deforest__Globals_22, &transform_hlds__deforest__NoWarnGlobals_27);
        }
#line 143 "deforest.m"
        {
#line 143 "deforest.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(transform_hlds__deforest__NoWarnGlobals_27, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_45_45, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_46_46);
        }
#line 144 "deforest.m"
        {
#line 144 "deforest.m"
          check_hlds__det_analysis__determinism_pass_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_46_46, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_47_47, &transform_hlds__deforest__Specs_28);
        }
#line 145 "deforest.m"
        {
#line 145 "deforest.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(transform_hlds__deforest__Globals_22, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_47_47, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_31);
        }
#line 147 "deforest.m"
        {
#line 147 "deforest.m"
          transform_hlds__deforest__FoundErrors_29 = parse_tree__error_util__contains_errors_2_f_0(transform_hlds__deforest__Globals_22, transform_hlds__deforest__Specs_28);
        }
#line 148 "deforest.m"
        {
#line 148 "deforest.m"
          transform_hlds__deforest__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 148 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 0) = ((MR_Box) (&transform_hlds__deforest_scalar_common_5[0]));
#line 148 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 1) = ((MR_Box) (transform_hlds__deforest__deforestation_4_p_0_4));
#line 148 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 148 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 3) = ((MR_Box) (transform_hlds__deforest__FoundErrors_29));
#line 148 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 4) = ((MR_Box) ((MR_Integer) 0));
#line 148 "deforest.m"
        }
#line 148 "deforest.m"
        {
#line 148 "deforest.m"
          mercury__require__expect_4_p_0(transform_hlds__deforest__V_49_49, (MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforestation\'/4", (MR_String) "determinism errors after deforestation");
#line 148 "deforest.m"
          return;
        }
#line 140 "deforest.m"
      }
#line 150 "deforest.m"
    else
#line 148 "deforest.m"
      *transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_31 = transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42;
#line 98 "deforest.m"
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
