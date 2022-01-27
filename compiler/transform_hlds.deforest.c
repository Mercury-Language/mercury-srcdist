/*
** Automatically generated from `deforest.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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



#line 1685 "deforest.m"
struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s {
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2;
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3;
#line 1689 "deforest.m"
  MR_bool transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded;
#line 1691 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23;
#line 1693 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__V_32_32;
#line 1730 "deforest.m"
  jmp_buf transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0;
#line 1730 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_41;
#line 1729 "deforest.m"
  MR_Box transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_41;
#line 1685 "deforest.m"
};

#line 1685 "deforest.m"
struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s {
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2;
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3;
#line 1689 "deforest.m"
  MR_bool transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded;
#line 1691 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23;
#line 1693 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__V_32_32;
#line 1717 "deforest.m"
  jmp_buf transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0;
#line 1717 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_41;
#line 1716 "deforest.m"
  MR_Box transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_41;
#line 1685 "deforest.m"
};

#line 1878 "deforest.m"
struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s {
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10;
#line 1878 "deforest.m"
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11;
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12;
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14;
#line 1883 "deforest.m"
  MR_bool transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded;
#line 1883 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_86_86;
#line 1883 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18;
#line 1883 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19;
#line 1883 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20;
#line 1883 "deforest.m"
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29;
#line 1883 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__CallerMarkers_30;
#line 1902 "deforest.m"
  jmp_buf transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0;
#line 1902 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_91_91;
#line 1902 "deforest.m"
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_36;
#line 1902 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_37;
#line 1902 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_38;
#line 1902 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__InlinePromisedPure_40;
#line 1902 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_42;
#line 1902 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_43;
#line 1902 "deforest.m"
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_44;
#line 1902 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__V_54_54;
#line 1902 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__V_55_55;
#line 1902 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__V_90_90;
#line 1904 "deforest.m"
  MR_Box transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_36;
#line 1878 "deforest.m"
};

#line 857 "deforest.m"
struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s {
#line 857 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7;
#line 857 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8;
#line 857 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9;
#line 861 "deforest.m"
  MR_bool transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded;
#line 861 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredInfo_12;
#line 861 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14;
#line 861 "deforest.m"
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19;
#line 861 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_20;
#line 891 "deforest.m"
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_0;
#line 891 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_23;
#line 891 "deforest.m"
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_24;
#line 891 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_36;
#line 891 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_37;
#line 891 "deforest.m"
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_38;
#line 918 "deforest.m"
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1;
#line 918 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_40;
#line 918 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__InlinePromisedPure_48;
#line 918 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CallerMarkers_49;
#line 918 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_97;
#line 918 "deforest.m"
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_98;
#line 951 "deforest.m"
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2;
#line 951 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50;
#line 951 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_52;
#line 948 "deforest.m"
  MR_Box transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_50;
#line 965 "deforest.m"
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3;
#line 965 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_53;
#line 965 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_54;
#line 966 "deforest.m"
  MR_Box transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_54;
#line 857 "deforest.m"
};

#line 813 "deforest.m"
struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s {
#line 816 "deforest.m"
  MR_bool transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded;
#line 816 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9;
#line 816 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10;
#line 816 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11;
#line 838 "deforest.m"
  jmp_buf transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0;
#line 838 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_60_60;
#line 838 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_35;
#line 838 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36;
#line 838 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_38;
#line 838 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_39;
#line 838 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_40;
#line 838 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_41;
#line 839 "deforest.m"
  MR_Box transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_36;
#line 813 "deforest.m"
};


#line 349 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 352 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 355 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__deforest__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 358 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

#line 361 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 364 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 367 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 370 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__deforest__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 373 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 376 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 379 "transform_hlds.deforest.c"
static const MR_VA_TypeInfo_Struct4 transform_hlds__deforest____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0bool__type_ctor_info_bool_0hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 382 "transform_hlds.deforest.c"
static const MR_PseudoTypeInfo transform_hlds__deforest__transform_hlds__deforest__field_types_deforest_info_0_0[6];

#line 385 "transform_hlds.deforest.c"
static const MR_DuFunctorDesc transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0;

#line 388 "transform_hlds.deforest.c"
static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_stag_ordered_deforest_info_0_0[1];

#line 391 "transform_hlds.deforest.c"
static const MR_DuPtagLayout transform_hlds__deforest__transform_hlds__deforest__du_ptag_ordered_deforest_info_0[1];

#line 394 "transform_hlds.deforest.c"
static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_name_ordered_deforest_info_0[1];

#line 397 "transform_hlds.deforest.c"
static const MR_Integer transform_hlds__deforest__transform_hlds__deforest__functor_number_map_deforest_info_0[1];

#line 400 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0_10001(
#line 403 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 405 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2);

#line 408 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0_10001(
#line 411 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 413 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 415 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3);

#line 418 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0_10001(
#line 421 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 423 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2);

#line 426 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0_10001(
#line 429 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 431 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 433 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3);

#line 436 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0_10001(
#line 439 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 441 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2);

#line 444 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0_10001(
#line 447 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 449 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 451 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3);

#line 2156 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
#line 2156 "deforest.m"
  MR_Integer transform_hlds__deforest__Size_6,
#line 2156 "deforest.m"
  MR_Integer transform_hlds__deforest__OriginalCost_7,
#line 2156 "deforest.m"
  MR_Integer transform_hlds__deforest__CostDelta_8);

#line 1022 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
#line 1022 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_9,
#line 1022 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_10,
#line 1022 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_11,
#line 1022 "deforest.m"
  MR_Word * transform_hlds__deforest__MaybeGoal_12,
#line 1022 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15,
#line 1022 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_16);

#line 1730 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_1(
#line 1730 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1729 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_3(
#line 1729 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1730 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_2(
#line 1730 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1730 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_4(
#line 1730 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1685 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0(
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__ModuleInfo_2,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__FullyStrict_3,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
#line 1685 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__EndGoal_7,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__8_8,
#line 1685 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__9_9);

#line 1717 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_1(
#line 1717 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1716 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_3(
#line 1716 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1717 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_2(
#line 1717 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1717 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_4(
#line 1717 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1685 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0(
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__ModuleInfo_2,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__FullyStrict_3,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
#line 1685 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__EndGoal_7,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__8_8,
#line 1685 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__9_9);

#line 1632 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1632__1_3_p_0(
#line 1632 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_29,
#line 1632 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_30,
#line 1632 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_31);

#line 636 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__636__1_3_p_0(
#line 636 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_22,
#line 636 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_23,
#line 636 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_24);

#line 497 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__497__1_1_p_0(
#line 497 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_46);

#line 150 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__deforestation__150__1_2_p_0(
#line 150 "deforest.m"
  MR_Word transform_hlds__deforest__FoundErrors_29,
#line 150 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_53);

#line 1907 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____list__list_1_1(
#line 1907 "deforest.m"
  MR_Word transform_hlds__deforest__TypeInfo_for_T_11,
#line 1907 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 1907 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2);

#line 571 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0(
#line 571 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 571 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 571 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3);

#line 571 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0(
#line 571 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 571 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2);

#line 1703 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0(
#line 1703 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 1703 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 1703 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3);

#line 1703 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0(
#line 1703 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 1703 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2);

#line 535 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0(
#line 535 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 535 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 535 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3);

#line 535 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0(
#line 535 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 535 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2);

#line 2139 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_1_p_0(
#line 2139 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1);

#line 2132 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_list_1_p_0(
#line 2132 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1);

#line 1968 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__unfold_call_10_p_0(
#line 1968 "deforest.m"
  MR_Word transform_hlds__deforest__CheckImprovement_11,
#line 1968 "deforest.m"
  MR_Word transform_hlds__deforest__CheckVars_12,
#line 1968 "deforest.m"
  MR_Word transform_hlds__deforest__PredId_13,
#line 1968 "deforest.m"
  MR_Integer transform_hlds__deforest__ProcId_14,
#line 1968 "deforest.m"
  MR_Word transform_hlds__deforest__Args_15,
#line 1968 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_16,
#line 1968 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_17,
#line 1968 "deforest.m"
  MR_Word * transform_hlds__deforest__Optimized_18,
#line 1968 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79,
#line 1968 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_80);

#line 1902 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_1(
#line 1902 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1904 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_3(
#line 1904 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1902 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_2(
#line 1902 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1902 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_4(
#line 1902 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1878 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0(
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__PredId_10,
#line 1878 "deforest.m"
  MR_Integer transform_hlds__deforest__ProcId_11,
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__Args_12,
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__SymName_13,
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__BuiltinState_14,
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_15,
#line 1878 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_16,
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49,
#line 1878 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_50);

#line 1856 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0_1(
#line 1856 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 1856 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1856 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1856 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 1847 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0(
#line 1847 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_10,
#line 1847 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_11,
#line 1847 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend0_12,
#line 1847 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals0_13,
#line 1847 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrBranch_14,
#line 1847 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_15,
#line 1847 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_16,
#line 1847 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30,
#line 1847 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_31);

#line 1829 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_to_cases_10_p_0(
#line 1829 "deforest.m"
  MR_Word transform_hlds__deforest__Var_1,
#line 1829 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_2,
#line 1829 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend_3,
#line 1829 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_4,
#line 1829 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrCase_5,
#line 1829 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_6,
#line 1829 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__7_7,
#line 1829 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__8_8,
#line 1829 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9,
#line 1829 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_10);

#line 1814 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(
#line 1814 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_1,
#line 1814 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend_2,
#line 1814 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_3,
#line 1814 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrBranch_4,
#line 1814 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_5,
#line 1814 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__6_6,
#line 1814 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__7_7,
#line 1814 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
#line 1814 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);

#line 1741 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__push_goal_into_goal_8_p_0(
#line 1741 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_9,
#line 1741 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_10,
#line 1741 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_11,
#line 1741 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_12,
#line 1741 "deforest.m"
  MR_Word transform_hlds__deforest__LaterGoal_13,
#line 1741 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_14,
#line 1741 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87,
#line 1741 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_88);

#line 1659 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__reorder_conj_5_p_0(
#line 1659 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo0_6,
#line 1659 "deforest.m"
  MR_Word * transform_hlds__deforest__DeforestInfo_7,
#line 1659 "deforest.m"
  MR_Word * transform_hlds__deforest__BeforeIrrelevant_8,
#line 1659 "deforest.m"
  MR_Word * transform_hlds__deforest__AfterIrrelevant_9,
#line 1659 "deforest.m"
  MR_Word transform_hlds__deforest__PDInfo_10);

#line 1632 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0_1(
#line 1632 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 1632 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1632 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1632 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 1624 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(
#line 1624 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_0_27,
#line 1624 "deforest.m"
  MR_Word transform_hlds__deforest__RevBeforeGoals_11,
#line 1624 "deforest.m"
  MR_Word transform_hlds__deforest__BeforeIrrelevant_12,
#line 1624 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_13,
#line 1624 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_14,
#line 1624 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_15,
#line 1624 "deforest.m"
  MR_Word transform_hlds__deforest__AfterIrrelevant_16,
#line 1624 "deforest.m"
  MR_Word transform_hlds__deforest__AfterGoals_17,
#line 1624 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_28);

#line 1610 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(
#line 1610 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals0_8,
#line 1610 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_9,
#line 1610 "deforest.m"
  MR_Word transform_hlds__deforest__RevBeforeGoals_10,
#line 1610 "deforest.m"
  MR_Word transform_hlds__deforest__BeforeIrrelevant_11,
#line 1610 "deforest.m"
  MR_Word transform_hlds__deforest__AfterIrrelevant_12,
#line 1610 "deforest.m"
  MR_Word transform_hlds__deforest__AfterGoals0_13,
#line 1610 "deforest.m"
  MR_Word * transform_hlds__deforest__SubConjNonLocals_14);

#line 986 "deforest.m"
static MR_Word MR_CALL 
transform_hlds__deforest__is_improvement_worth_while_4_f_0(
#line 986 "deforest.m"
  MR_Word transform_hlds__deforest__PDInfo_6,
#line 986 "deforest.m"
  MR_Word transform_hlds__deforest__Optimized0_7,
#line 986 "deforest.m"
  MR_Integer transform_hlds__deforest__CostDelta0_8,
#line 986 "deforest.m"
  MR_Integer transform_hlds__deforest__SizeDelta0_9);

#line 891 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_1(
#line 891 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 891 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_2(
#line 891 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 891 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_3(
#line 891 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 918 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_4(
#line 918 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 918 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_5(
#line 918 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 918 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_6(
#line 918 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 951 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_7(
#line 951 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 951 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_8(
#line 951 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 948 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_9(
#line 948 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 951 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_10(
#line 951 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 965 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_11(
#line 965 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 965 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_12(
#line 965 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 966 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_13(
#line 966 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 965 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_14(
#line 965 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 857 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0(
#line 857 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_7,
#line 857 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_8,
#line 857 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_9,
#line 857 "deforest.m"
  MR_Word * transform_hlds__deforest__ShouldTry_10,
#line 857 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56,
#line 857 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_57);

#line 838 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_1(
#line 838 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 838 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_2(
#line 838 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 839 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_3(
#line 839 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 838 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_4(
#line 838 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 813 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0(
#line 813 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_5,
#line 813 "deforest.m"
  MR_Word * transform_hlds__deforest__ShouldTry_6,
#line 813 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_42,
#line 813 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_43);

#line 790 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_2(
#line 790 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 790 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 790 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 790 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 677 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_1(
#line 677 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 677 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 677 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 677 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 650 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0(
#line 650 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_10,
#line 650 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo0_11,
#line 650 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82,
#line 650 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_83,
#line 650 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84,
#line 650 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85,
#line 650 "deforest.m"
  MR_Word * transform_hlds__deforest__Optimized_14,
#line 650 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86,
#line 650 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_87);

#line 636 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0_1(
#line 636 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 636 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 636 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 636 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 597 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0(
#line 597 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_7,
#line 597 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierBranchInfo_8,
#line 597 "deforest.m"
  MR_Word transform_hlds__deforest__RevBetweenGoals0_9,
#line 597 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 597 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_12,
#line 597 "deforest.m"
  MR_Word * transform_hlds__deforest__DeforestInfo_13);

#line 538 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_conj_6_p_0(
#line 538 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 538 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_2,
#line 538 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3,
#line 538 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__4_4,
#line 538 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
#line 538 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6);

#line 497 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0_1(
#line 497 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 497 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1);

#line 481 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0(
#line 481 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 481 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_2,
#line 481 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3,
#line 481 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_4,
#line 481 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
#line 481 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6);

#line 433 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__compute_goal_infos_4_p_0(
#line 433 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 433 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
#line 433 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
#line 433 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);

#line 412 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(
#line 412 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 412 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 412 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_3,
#line 412 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
#line 412 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5);

#line 393 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_cases_5_p_0(
#line 393 "deforest.m"
  MR_Word transform_hlds__deforest__Var_1,
#line 393 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 393 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_3,
#line 393 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
#line 393 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5);

#line 381 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_disj_4_p_0(
#line 381 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 381 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
#line 381 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
#line 381 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);

#line 283 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_goal_expr_6_p_0(
#line 283 "deforest.m"
  MR_Word transform_hlds__deforest__GoalExpr0_7,
#line 283 "deforest.m"
  MR_Word * transform_hlds__deforest__GoalExpr_8,
#line 283 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60,
#line 283 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61,
#line 283 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62,
#line 283 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);

#line 275 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_goal_4_p_0(
#line 275 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_5,
#line 275 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_6,
#line 275 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_12,
#line 275 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_13);

#line 194 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_proc_deltas_5_p_0(
#line 194 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 194 "deforest.m"
  MR_Integer * transform_hlds__deforest__CostDelta_8,
#line 194 "deforest.m"
  MR_Integer * transform_hlds__deforest__SizeDelta_9,
#line 194 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_28,
#line 194 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_29);

#line 189 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_proc_3_p_0(
#line 189 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_4,
#line 189 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
#line 189 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);

#line 178 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(
#line 178 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_8,
#line 178 "deforest.m"
  MR_Word transform_hlds__deforest__ProcInfo_9,
#line 178 "deforest.m"
  MR_Word * transform_hlds__deforest__ProcInfo_3,
#line 178 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_15,
#line 178 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_16,
#line 178 "deforest.m"
  MR_Word transform_hlds__deforest__UnivProcArgInfo0_11,
#line 178 "deforest.m"
  MR_Word * transform_hlds__deforest__UnivProcArgInfo_12);

#line 156 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(
#line 156 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_4,
#line 156 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_11,
#line 156 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_12);

#line 150 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_4(
#line 150 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg);

#line 142 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_3(
#line 142 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 142 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 142 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 142 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 126 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_2(
#line 126 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 126 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 126 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 126 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 106 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_1(
#line 106 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 106 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 106 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 106 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3,
#line 106 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_4,
#line 106 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_5,
#line 106 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_6,
#line 106 "deforest.m"
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
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_1[1]))
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
    ((MR_Box) (&transform_hlds__deforest__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__deforest__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1603 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1611 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1619 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__deforest__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1628 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1636 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1644 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1,
  {
    (MR_TypeInfo) &transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1652 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1660 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__deforest__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_TypeInfo) &transform_hlds__deforest__maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1669 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__deforest__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1677 "transform_hlds.deforest.c"
const MR_TypeCtorInfo_Struct transform_hlds__deforest__transform_hlds__deforest__type_ctor_info_annotated_conj_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__deforest____Unify____annotated_conj_0_0_10001)),
  ((MR_Box) (transform_hlds__deforest____Compare____annotated_conj_0_0_10001)),
  (MR_String) "transform_hlds.deforest",
  (MR_String) "annotated_conj",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__deforest__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1694 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1702 "transform_hlds.deforest.c"
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

#line 1714 "transform_hlds.deforest.c"
const MR_TypeCtorInfo_Struct transform_hlds__deforest__transform_hlds__deforest__type_ctor_info_can_move_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__deforest____Unify____can_move_0_0_10001)),
  ((MR_Box) (transform_hlds__deforest____Compare____can_move_0_0_10001)),
  (MR_String) "transform_hlds.deforest",
  (MR_String) "can_move",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__deforest____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0bool__type_ctor_info_bool_0hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1731 "transform_hlds.deforest.c"
static const MR_PseudoTypeInfo transform_hlds__deforest__transform_hlds__deforest__field_types_deforest_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

#line 1741 "transform_hlds.deforest.c"
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

#line 1756 "transform_hlds.deforest.c"
static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_stag_ordered_deforest_info_0_0[1] = {
  &transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0
};

#line 1761 "transform_hlds.deforest.c"
static const MR_DuPtagLayout transform_hlds__deforest__transform_hlds__deforest__du_ptag_ordered_deforest_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__deforest__transform_hlds__deforest__du_stag_ordered_deforest_info_0_0
  }
};

#line 1770 "transform_hlds.deforest.c"
static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_name_ordered_deforest_info_0[1] = {
  &transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0
};

#line 1775 "transform_hlds.deforest.c"
static const MR_Integer transform_hlds__deforest__transform_hlds__deforest__functor_number_map_deforest_info_0[1] = {
  (MR_Integer) 0
};

#line 1780 "transform_hlds.deforest.c"
const MR_TypeCtorInfo_Struct transform_hlds__deforest__transform_hlds__deforest__type_ctor_info_deforest_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__deforest____Unify____deforest_info_0_0_10001)),
  ((MR_Box) (transform_hlds__deforest____Compare____deforest_info_0_0_10001)),
  (MR_String) "transform_hlds.deforest",
  (MR_String) "deforest_info",
  {     transform_hlds__deforest__transform_hlds__deforest__du_name_ordered_deforest_info_0 },
  {     transform_hlds__deforest__transform_hlds__deforest__du_ptag_ordered_deforest_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__deforest__transform_hlds__deforest__functor_number_map_deforest_info_0
};

#line 1797 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0_10001(
#line 1800 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1802 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2)
#line 1804 "transform_hlds.deforest.c"
{
#line 1806 "transform_hlds.deforest.c"
  {
#line 1808 "transform_hlds.deforest.c"
    MR_bool transform_hlds__deforest__succeeded;

#line 1811 "transform_hlds.deforest.c"
    {
#line 1813 "transform_hlds.deforest.c"
      transform_hlds__deforest__succeeded = transform_hlds__deforest____Unify____annotated_conj_0_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2));
    }
#line 1816 "transform_hlds.deforest.c"
    return transform_hlds__deforest__succeeded;
#line 1818 "transform_hlds.deforest.c"
  }
#line 1820 "transform_hlds.deforest.c"
}

#line 1823 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0_10001(
#line 1826 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 1828 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1830 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3)
#line 1832 "transform_hlds.deforest.c"
{
#line 1834 "transform_hlds.deforest.c"
  {
#line 1836 "transform_hlds.deforest.c"
    MR_Word transform_hlds__deforest__conv0_HeadVar__1_1;

#line 1839 "transform_hlds.deforest.c"
    {
#line 1841 "transform_hlds.deforest.c"
      transform_hlds__deforest____Compare____annotated_conj_0_0(&transform_hlds__deforest__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__deforest__wrapper_arg_2), ((MR_Word) transform_hlds__deforest__wrapper_arg_3));
    }
#line 1844 "transform_hlds.deforest.c"
    *transform_hlds__deforest__wrapper_arg_1 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__1_1));
#line 1846 "transform_hlds.deforest.c"
  }
#line 1848 "transform_hlds.deforest.c"
}

#line 1851 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0_10001(
#line 1854 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1856 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2)
#line 1858 "transform_hlds.deforest.c"
{
#line 1860 "transform_hlds.deforest.c"
  {
#line 1862 "transform_hlds.deforest.c"
    MR_bool transform_hlds__deforest__succeeded;

#line 1865 "transform_hlds.deforest.c"
    {
#line 1867 "transform_hlds.deforest.c"
      transform_hlds__deforest__succeeded = transform_hlds__deforest____Unify____can_move_0_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2));
    }
#line 1870 "transform_hlds.deforest.c"
    return transform_hlds__deforest__succeeded;
#line 1872 "transform_hlds.deforest.c"
  }
#line 1874 "transform_hlds.deforest.c"
}

#line 1877 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0_10001(
#line 1880 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 1882 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1884 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3)
#line 1886 "transform_hlds.deforest.c"
{
#line 1888 "transform_hlds.deforest.c"
  {
#line 1890 "transform_hlds.deforest.c"
    MR_Word transform_hlds__deforest__conv0_HeadVar__1_1;

#line 1893 "transform_hlds.deforest.c"
    {
#line 1895 "transform_hlds.deforest.c"
      transform_hlds__deforest____Compare____can_move_0_0(&transform_hlds__deforest__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__deforest__wrapper_arg_2), ((MR_Word) transform_hlds__deforest__wrapper_arg_3));
    }
#line 1898 "transform_hlds.deforest.c"
    *transform_hlds__deforest__wrapper_arg_1 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__1_1));
#line 1900 "transform_hlds.deforest.c"
  }
#line 1902 "transform_hlds.deforest.c"
}

#line 1905 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0_10001(
#line 1908 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1910 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2)
#line 1912 "transform_hlds.deforest.c"
{
#line 1914 "transform_hlds.deforest.c"
  {
#line 1916 "transform_hlds.deforest.c"
    MR_bool transform_hlds__deforest__succeeded;

#line 1919 "transform_hlds.deforest.c"
    {
#line 1921 "transform_hlds.deforest.c"
      transform_hlds__deforest__succeeded = transform_hlds__deforest____Unify____deforest_info_0_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2));
    }
#line 1924 "transform_hlds.deforest.c"
    return transform_hlds__deforest__succeeded;
#line 1926 "transform_hlds.deforest.c"
  }
#line 1928 "transform_hlds.deforest.c"
}

#line 1931 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0_10001(
#line 1934 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 1936 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1938 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3)
#line 1940 "transform_hlds.deforest.c"
{
#line 1942 "transform_hlds.deforest.c"
  {
#line 1944 "transform_hlds.deforest.c"
    MR_Word transform_hlds__deforest__conv0_HeadVar__1_1;

#line 1947 "transform_hlds.deforest.c"
    {
#line 1949 "transform_hlds.deforest.c"
      transform_hlds__deforest____Compare____deforest_info_0_0(&transform_hlds__deforest__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__deforest__wrapper_arg_2), ((MR_Word) transform_hlds__deforest__wrapper_arg_3));
    }
#line 1952 "transform_hlds.deforest.c"
    *transform_hlds__deforest__wrapper_arg_1 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__1_1));
#line 1954 "transform_hlds.deforest.c"
  }
#line 1956 "transform_hlds.deforest.c"
}

#line 2156 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
#line 2156 "deforest.m"
  MR_Integer transform_hlds__deforest__Size_6,
#line 2156 "deforest.m"
  MR_Integer transform_hlds__deforest__OriginalCost_7,
#line 2156 "deforest.m"
  MR_Integer transform_hlds__deforest__CostDelta_8)
#line 2156 "deforest.m"
{
#line 2162 "deforest.m"
  {
#line 2162 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded = (transform_hlds__deforest__Size_6 <= (MR_Integer) 5);

#line 2162 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 2161 "deforest.m"
      {
#line 2161 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__CostDelta_8 > (MR_Integer) 0);
#line 2161 "deforest.m"
      }
#line 2162 "deforest.m"
    else
#line 2163 "deforest.m"
      {
#line 2163 "deforest.m"
        MR_Integer transform_hlds__deforest__PercentChange_9;
#line 2163 "deforest.m"
        MR_Integer transform_hlds__deforest__V_12_12 = (transform_hlds__deforest__CostDelta_8 * (MR_Integer) 100);

#line 2163 "deforest.m"
        {
#line 2163 "deforest.m"
          transform_hlds__deforest__PercentChange_9 = mercury__int__f_47_47_2_f_0(transform_hlds__deforest__V_12_12, transform_hlds__deforest__OriginalCost_7);
        }
#line 2164 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__PercentChange_9 >= (MR_Integer) 5);
#line 2163 "deforest.m"
      }
#line 2162 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 2162 "deforest.m"
  }
#line 2156 "deforest.m"
}

#line 1022 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
#line 1022 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_9,
#line 1022 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_10,
#line 1022 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_11,
#line 1022 "deforest.m"
  MR_Word * transform_hlds__deforest__MaybeGoal_12,
#line 1022 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15,
#line 1022 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_16)
#line 1022 "deforest.m"
{
#line 1027 "deforest.m"
  while (MR_TRUE)
#line 1027 "deforest.m"
    {
#line 1027 "deforest.m"
      /* tailcall optimized into a loop */
#line 1027 "deforest.m"
      {
#line 1027 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;
#line 1027 "deforest.m"
        MR_Word transform_hlds__deforest__ShouldTry_14;
#line 1027 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;

#line 1028 "deforest.m"
        {
#line 1028 "deforest.m"
          transform_hlds__deforest__can_optimize_conj_6_p_0(transform_hlds__deforest__EarlierGoal_9, transform_hlds__deforest__BetweenGoals_10, transform_hlds__deforest__MaybeLaterGoal_11, &transform_hlds__deforest__ShouldTry_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17);
        }
#line 1034 "deforest.m"
#line 1034 "deforest.m"
        switch (transform_hlds__deforest__ShouldTry_14) {
#line 1034 "deforest.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1034 "deforest.m"
          case (MR_Integer) 0:
#line 1035 "deforest.m"
            {
#line 1036 "deforest.m"
              *transform_hlds__deforest__MaybeGoal_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1035 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;
#line 1035 "deforest.m"
            }
#line 1034 "deforest.m"
            break;
#line 1034 "deforest.m"
          case (MR_Integer) 1:
#line 1032 "deforest.m"
            {
#line 1032 "deforest.m"
              /* direct tailcall eliminated */
#line 1032 "deforest.m"
              {
#line 1032 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_15 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;

#line 1032 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_15;
#line 1032 "deforest.m"
              }
#line 1032 "deforest.m"
              continue;
#line 1032 "deforest.m"
            }
#line 1034 "deforest.m"
            break;
#line 1034 "deforest.m"
        }
#line 1027 "deforest.m"
      }
#line 1027 "deforest.m"
      break;
#line 1027 "deforest.m"
    }
#line 1022 "deforest.m"
}

#line 1730 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_1(
#line 1730 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1730 "deforest.m"
{
#line 1730 "deforest.m"
  {
#line 1730 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1730 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0, 1);
#line 1730 "deforest.m"
  }
#line 1730 "deforest.m"
}

#line 1729 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_3(
#line 1729 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1729 "deforest.m"
{
#line 1729 "deforest.m"
  {
#line 1729 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1729 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_41 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_41);
#line 1729 "deforest.m"
    {
#line 1729 "deforest.m"
      transform_hlds__deforest__move_goals__ho2_9_p_0_2(transform_hlds__deforest__env_ptr);
#line 1729 "deforest.m"
      return;
    }
#line 1729 "deforest.m"
  }
#line 1729 "deforest.m"
}

#line 1730 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_2(
#line 1730 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1730 "deforest.m"
{
#line 1730 "deforest.m"
  {
#line 1730 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1731 "deforest.m"
    {
#line 1731 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = transform_hlds__pd_util__pd_can_reorder_goals_4_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_41, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23);
    }
#line 1730 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded);
#line 1730 "deforest.m"
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded)
#line 1730 "deforest.m"
      {
#line 1730 "deforest.m"
        transform_hlds__deforest__move_goals__ho2_9_p_0_1(transform_hlds__deforest__env_ptr);
#line 1730 "deforest.m"
        return;
      }
#line 1730 "deforest.m"
  }
#line 1730 "deforest.m"
}

#line 1730 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_4(
#line 1730 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1730 "deforest.m"
{
#line 1730 "deforest.m"
  {
#line 1730 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1730 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0) == 0)
#line 1730 "deforest.m"
      {
#line 1730 "deforest.m"
        {
#line 1729 "deforest.m"
          {
#line 1729 "deforest.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_41, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__V_32_32, transform_hlds__deforest__move_goals__ho2_9_p_0_3, transform_hlds__deforest__env_ptr);
          }
#line 1730 "deforest.m"
        }
#line 1730 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = MR_FALSE;
#line 1730 "deforest.m"
      }
#line 1730 "deforest.m"
    else
#line 1730 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = MR_TRUE;
#line 1730 "deforest.m"
  }
#line 1730 "deforest.m"
}

#line 1685 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0(
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__ModuleInfo_2,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__FullyStrict_3,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
#line 1685 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__EndGoal_7,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__8_8,
#line 1685 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__9_9)
#line 1685 "deforest.m"
{
#line 1685 "deforest.m"
  {
#line 1685 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s transform_hlds__deforest__env;

#line 1685 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2 = transform_hlds__deforest__ModuleInfo_2;
#line 1685 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3 = transform_hlds__deforest__FullyStrict_3;
#line 1689 "deforest.m"
    while (MR_TRUE)
#line 1689 "deforest.m"
      {
#line 1689 "deforest.m"
        /* tailcall optimized into a loop */
#line 1689 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1689 "deforest.m"
          {
#line 1689 "deforest.m"
            *transform_hlds__deforest__HeadVar__9_9 = transform_hlds__deforest__HeadVar__8_8;
#line 1689 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
#line 1689 "deforest.m"
          }
#line 1689 "deforest.m"
        else
#line 1691 "deforest.m"
          {
#line 1691 "deforest.m"
            MR_Word transform_hlds__deforest__RevBetweenGoals0_24;
#line 1691 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;
#line 1691 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;

#line 1690 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 0)));
#line 1690 "deforest.m"
            transform_hlds__deforest__RevBetweenGoals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 1)));
#line 1694 "deforest.m"
            {
#line 1694 "deforest.m"
              MR_Word base;
#line 1694 "deforest.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "deforest.m"
              (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__V_32_32 = base;
#line 1694 "deforest.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__EndGoal_7));
#line 1694 "deforest.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
#line 1694 "deforest.m"
            }
#line 1730 "deforest.m"
            {
#line 1730 "deforest.m"
              transform_hlds__deforest__move_goals__ho2_9_p_0_4(&transform_hlds__deforest__env);
            }
#line 1730 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded);
#line 1697 "deforest.m"
            if ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded)
#line 1696 "deforest.m"
              {
#line 1696 "deforest.m"
                {
#line 1696 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1696 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23));
#line 1696 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__8_8));
#line 1696 "deforest.m"
                }
#line 1696 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
#line 1696 "deforest.m"
              }
#line 1697 "deforest.m"
            else
#line 1698 "deforest.m"
              {
#line 1698 "deforest.m"
                {
#line 1698 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1698 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23));
#line 1698 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
#line 1698 "deforest.m"
                }
#line 1698 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = transform_hlds__deforest__HeadVar__8_8;
#line 1698 "deforest.m"
              }
#line 1700 "deforest.m"
            /* direct tailcall eliminated */
#line 1700 "deforest.m"
            {
#line 1700 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__4__tmp_copy_4 = transform_hlds__deforest__RevBetweenGoals0_24;
#line 1700 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;
#line 1700 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__8__tmp_copy_8 = transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;

#line 1700 "deforest.m"
              transform_hlds__deforest__HeadVar__8_8 = transform_hlds__deforest__HeadVar__8__tmp_copy_8;
#line 1700 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0__tmp_copy_5;
#line 1700 "deforest.m"
              transform_hlds__deforest__HeadVar__4_4 = transform_hlds__deforest__HeadVar__4__tmp_copy_4;
#line 1700 "deforest.m"
            }
#line 1700 "deforest.m"
            continue;
#line 1691 "deforest.m"
          }
#line 1689 "deforest.m"
        break;
#line 1689 "deforest.m"
      }
#line 1685 "deforest.m"
  }
#line 1685 "deforest.m"
}

#line 1717 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_1(
#line 1717 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1717 "deforest.m"
{
#line 1717 "deforest.m"
  {
#line 1717 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1717 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0, 1);
#line 1717 "deforest.m"
  }
#line 1717 "deforest.m"
}

#line 1716 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_3(
#line 1716 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1716 "deforest.m"
{
#line 1716 "deforest.m"
  {
#line 1716 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1716 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_41 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_41);
#line 1716 "deforest.m"
    {
#line 1716 "deforest.m"
      transform_hlds__deforest__move_goals__ho1_9_p_0_2(transform_hlds__deforest__env_ptr);
#line 1716 "deforest.m"
      return;
    }
#line 1716 "deforest.m"
  }
#line 1716 "deforest.m"
}

#line 1717 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_2(
#line 1717 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1717 "deforest.m"
{
#line 1717 "deforest.m"
  {
#line 1717 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1718 "deforest.m"
    {
#line 1718 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = transform_hlds__pd_util__pd_can_reorder_goals_4_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_41);
    }
#line 1717 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded);
#line 1717 "deforest.m"
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded)
#line 1717 "deforest.m"
      {
#line 1717 "deforest.m"
        transform_hlds__deforest__move_goals__ho1_9_p_0_1(transform_hlds__deforest__env_ptr);
#line 1717 "deforest.m"
        return;
      }
#line 1717 "deforest.m"
  }
#line 1717 "deforest.m"
}

#line 1717 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_4(
#line 1717 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1717 "deforest.m"
{
#line 1717 "deforest.m"
  {
#line 1717 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1717 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0) == 0)
#line 1717 "deforest.m"
      {
#line 1717 "deforest.m"
        {
#line 1716 "deforest.m"
          {
#line 1716 "deforest.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_41, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__V_32_32, transform_hlds__deforest__move_goals__ho1_9_p_0_3, transform_hlds__deforest__env_ptr);
          }
#line 1717 "deforest.m"
        }
#line 1717 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = MR_FALSE;
#line 1717 "deforest.m"
      }
#line 1717 "deforest.m"
    else
#line 1717 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = MR_TRUE;
#line 1717 "deforest.m"
  }
#line 1717 "deforest.m"
}

#line 1685 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0(
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__ModuleInfo_2,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__FullyStrict_3,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
#line 1685 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__EndGoal_7,
#line 1685 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__8_8,
#line 1685 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__9_9)
#line 1685 "deforest.m"
{
#line 1685 "deforest.m"
  {
#line 1685 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s transform_hlds__deforest__env;

#line 1685 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2 = transform_hlds__deforest__ModuleInfo_2;
#line 1685 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3 = transform_hlds__deforest__FullyStrict_3;
#line 1689 "deforest.m"
    while (MR_TRUE)
#line 1689 "deforest.m"
      {
#line 1689 "deforest.m"
        /* tailcall optimized into a loop */
#line 1689 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1689 "deforest.m"
          {
#line 1689 "deforest.m"
            *transform_hlds__deforest__HeadVar__9_9 = transform_hlds__deforest__HeadVar__8_8;
#line 1689 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
#line 1689 "deforest.m"
          }
#line 1689 "deforest.m"
        else
#line 1691 "deforest.m"
          {
#line 1691 "deforest.m"
            MR_Word transform_hlds__deforest__RevBetweenGoals0_24;
#line 1691 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;
#line 1691 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;

#line 1690 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 0)));
#line 1690 "deforest.m"
            transform_hlds__deforest__RevBetweenGoals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 1)));
#line 1694 "deforest.m"
            {
#line 1694 "deforest.m"
              MR_Word base;
#line 1694 "deforest.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "deforest.m"
              (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__V_32_32 = base;
#line 1694 "deforest.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__EndGoal_7));
#line 1694 "deforest.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
#line 1694 "deforest.m"
            }
#line 1717 "deforest.m"
            {
#line 1717 "deforest.m"
              transform_hlds__deforest__move_goals__ho1_9_p_0_4(&transform_hlds__deforest__env);
            }
#line 1717 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded);
#line 1697 "deforest.m"
            if ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded)
#line 1696 "deforest.m"
              {
#line 1696 "deforest.m"
                {
#line 1696 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1696 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23));
#line 1696 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__8_8));
#line 1696 "deforest.m"
                }
#line 1696 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
#line 1696 "deforest.m"
              }
#line 1697 "deforest.m"
            else
#line 1698 "deforest.m"
              {
#line 1698 "deforest.m"
                {
#line 1698 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1698 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23));
#line 1698 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
#line 1698 "deforest.m"
                }
#line 1698 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = transform_hlds__deforest__HeadVar__8_8;
#line 1698 "deforest.m"
              }
#line 1700 "deforest.m"
            /* direct tailcall eliminated */
#line 1700 "deforest.m"
            {
#line 1700 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__4__tmp_copy_4 = transform_hlds__deforest__RevBetweenGoals0_24;
#line 1700 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;
#line 1700 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__8__tmp_copy_8 = transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;

#line 1700 "deforest.m"
              transform_hlds__deforest__HeadVar__8_8 = transform_hlds__deforest__HeadVar__8__tmp_copy_8;
#line 1700 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0__tmp_copy_5;
#line 1700 "deforest.m"
              transform_hlds__deforest__HeadVar__4_4 = transform_hlds__deforest__HeadVar__4__tmp_copy_4;
#line 1700 "deforest.m"
            }
#line 1700 "deforest.m"
            continue;
#line 1691 "deforest.m"
          }
#line 1689 "deforest.m"
        break;
#line 1689 "deforest.m"
      }
#line 1685 "deforest.m"
  }
#line 1685 "deforest.m"
}

#line 1632 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1632__1_3_p_0(
#line 1632 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_29,
#line 1632 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_30,
#line 1632 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_31)
#line 1632 "deforest.m"
{
#line 1632 "deforest.m"
  {
#line 1632 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1632 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_29, (MR_Integer) 1)));
#line 1632 "deforest.m"
    MR_Word transform_hlds__deforest__GoalNonLocals_25;
#line 1633 "deforest.m"
    MR_Word transform_hlds__deforest__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_29, (MR_Integer) 0)));

#line 1634 "deforest.m"
    {
#line 1634 "deforest.m"
      transform_hlds__deforest__GoalNonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__GoalInfo_24);
    }
#line 1635 "deforest.m"
    {
#line 1635 "deforest.m"
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__GoalNonLocals_25, transform_hlds__deforest__HeadVar__2_30, transform_hlds__deforest__HeadVar__3_31);
#line 1635 "deforest.m"
      return;
    }
#line 1632 "deforest.m"
  }
#line 1632 "deforest.m"
}

#line 636 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__636__1_3_p_0(
#line 636 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_22,
#line 636 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_23,
#line 636 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_24)
#line 636 "deforest.m"
{
#line 636 "deforest.m"
  {
#line 636 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 636 "deforest.m"
    MR_Word transform_hlds__deforest__Branches1_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_22, (MR_Integer) 1)));
#line 638 "deforest.m"
    MR_Word transform_hlds__deforest__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_22, (MR_Integer) 0)));

#line 639 "deforest.m"
    {
#line 639 "deforest.m"
      mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__deforest__HeadVar__2_23, transform_hlds__deforest__Branches1_20, transform_hlds__deforest__HeadVar__3_24);
#line 639 "deforest.m"
      return;
    }
#line 636 "deforest.m"
  }
#line 636 "deforest.m"
}

#line 497 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__497__1_1_p_0(
#line 497 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_46)
#line 497 "deforest.m"
{
#line 497 "deforest.m"
  {
#line 497 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 497 "deforest.m"
    MR_Word transform_hlds__deforest__CnstrGoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_46, (MR_Integer) 1)));
#line 498 "deforest.m"
    MR_Word transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_46, (MR_Integer) 0)));

#line 499 "deforest.m"
    {
#line 499 "deforest.m"
      return transform_hlds__deforest__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(transform_hlds__deforest__CnstrGoalInfo_30, (MR_Integer) 0);
    }
#line 497 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 497 "deforest.m"
  }
#line 497 "deforest.m"
}

#line 150 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__deforestation__150__1_2_p_0(
#line 150 "deforest.m"
  MR_Word transform_hlds__deforest__FoundErrors_29,
#line 150 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_53)
#line 150 "deforest.m"
{
#line 150 "deforest.m"
  {
#line 150 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded = (transform_hlds__deforest__FoundErrors_29 == transform_hlds__deforest__HeadVar__2_53);

#line 150 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 150 "deforest.m"
  }
#line 150 "deforest.m"
}

#line 1907 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____list__list_1_1(
#line 1907 "deforest.m"
  MR_Word transform_hlds__deforest__TypeInfo_for_T_11,
#line 1907 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 1907 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2)
#line 1907 "deforest.m"
{
#line 1907 "deforest.m"
  {
#line 1907 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1907 "deforest.m"
    MR_Word transform_hlds__deforest__V_6_6;
#line 1907 "deforest.m"
    MR_Box transform_hlds__deforest__V_7_7;
#line 1907 "deforest.m"
    MR_Word transform_hlds__deforest__V_8_8;

#line 1907 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 1907 "deforest.m"
      {
#line 1907 "deforest.m"
        transform_hlds__deforest__V_7_7 = (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0));
#line 1907 "deforest.m"
        transform_hlds__deforest__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
#line 1907 "deforest.m"
        (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)) = transform_hlds__deforest__V_7_7;
#line 1907 "deforest.m"
        transform_hlds__deforest__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 1907 "deforest.m"
        {
#line 1907 "deforest.m"
          return transform_hlds__deforest__succeeded = mercury__list____Unify____list_1_0(transform_hlds__deforest__TypeInfo_for_T_11, transform_hlds__deforest__V_6_6, transform_hlds__deforest__V_8_8);
        }
#line 1907 "deforest.m"
      }
#line 1907 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 1907 "deforest.m"
  }
#line 1907 "deforest.m"
}

#line 571 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0(
#line 571 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 571 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 571 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3)
#line 571 "deforest.m"
{
#line 571 "deforest.m"
  {
#line 571 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 571 "deforest.m"
    MR_Integer transform_hlds__deforest__CastX_21 = (MR_Integer) transform_hlds__deforest__HeadVar__2_2;
#line 571 "deforest.m"
    MR_Integer transform_hlds__deforest__CastY_22 = (MR_Integer) transform_hlds__deforest__HeadVar__3_3;

#line 571 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__CastX_21 == transform_hlds__deforest__CastY_22);
#line 571 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 2818 "transform_hlds.deforest.c"
      *transform_hlds__deforest__HeadVar__1_1 = (MR_Integer) 0;
#line 571 "deforest.m"
    else
#line 571 "deforest.m"
      {
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 2)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 3)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 4)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 5)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 0)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 1)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 2)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 3)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 4)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 5)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_16_16;

#line 571 "deforest.m"
        {
#line 571 "deforest.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__deforest__V_16_16, transform_hlds__deforest__V_4_4, transform_hlds__deforest__V_10_10);
        }
#line 2856 "transform_hlds.deforest.c"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_16_16 == (MR_Integer) 0);
#line 571 "deforest.m"
        transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 571 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 571 "deforest.m"
          *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_16_16;
#line 571 "deforest.m"
        else
#line 571 "deforest.m"
          {
#line 571 "deforest.m"
            MR_Word transform_hlds__deforest__V_17_17;

#line 571 "deforest.m"
            {
#line 571 "deforest.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[2], &transform_hlds__deforest__V_17_17, ((MR_Box) (transform_hlds__deforest__V_5_5)), ((MR_Box) (transform_hlds__deforest__V_11_11)));
            }
#line 2876 "transform_hlds.deforest.c"
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_17_17 == (MR_Integer) 0);
#line 571 "deforest.m"
            transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 571 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 571 "deforest.m"
              *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_17_17;
#line 571 "deforest.m"
            else
#line 571 "deforest.m"
              {
#line 571 "deforest.m"
                MR_Word transform_hlds__deforest__V_18_18;

#line 571 "deforest.m"
                {
#line 571 "deforest.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[7], &transform_hlds__deforest__V_18_18, ((MR_Box) (transform_hlds__deforest__V_6_6)), ((MR_Box) (transform_hlds__deforest__V_12_12)));
                }
#line 2896 "transform_hlds.deforest.c"
                transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_18_18 == (MR_Integer) 0);
#line 571 "deforest.m"
                transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 571 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 571 "deforest.m"
                  *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_18_18;
#line 571 "deforest.m"
                else
#line 571 "deforest.m"
                  {
#line 571 "deforest.m"
                    MR_Word transform_hlds__deforest__V_19_19;

#line 571 "deforest.m"
                    {
#line 571 "deforest.m"
                      hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__deforest__V_19_19, transform_hlds__deforest__V_7_7, transform_hlds__deforest__V_13_13);
                    }
#line 2916 "transform_hlds.deforest.c"
                    transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_19_19 == (MR_Integer) 0);
#line 571 "deforest.m"
                    transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 571 "deforest.m"
                    if (transform_hlds__deforest__succeeded)
#line 571 "deforest.m"
                      *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_19_19;
#line 571 "deforest.m"
                    else
#line 571 "deforest.m"
                      {
#line 571 "deforest.m"
                        MR_Word transform_hlds__deforest__V_20_20;

#line 571 "deforest.m"
                        {
#line 571 "deforest.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[2], &transform_hlds__deforest__V_20_20, ((MR_Box) (transform_hlds__deforest__V_8_8)), ((MR_Box) (transform_hlds__deforest__V_14_14)));
                        }
#line 2936 "transform_hlds.deforest.c"
                        transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_20_20 == (MR_Integer) 0);
#line 571 "deforest.m"
                        transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 571 "deforest.m"
                        if (transform_hlds__deforest__succeeded)
#line 571 "deforest.m"
                          *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_20_20;
#line 571 "deforest.m"
                        else
#line 571 "deforest.m"
                          {
#line 571 "deforest.m"
                            {
#line 571 "deforest.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[4], transform_hlds__deforest__HeadVar__1_1, ((MR_Box) (transform_hlds__deforest__V_9_9)), ((MR_Box) (transform_hlds__deforest__V_15_15)));
#line 571 "deforest.m"
                              return;
                            }
#line 571 "deforest.m"
                          }
#line 571 "deforest.m"
                      }
#line 571 "deforest.m"
                  }
#line 571 "deforest.m"
              }
#line 571 "deforest.m"
          }
#line 571 "deforest.m"
      }
#line 571 "deforest.m"
  }
#line 571 "deforest.m"
}

#line 571 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0(
#line 571 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 571 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2)
#line 571 "deforest.m"
{
#line 571 "deforest.m"
  {
#line 571 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 571 "deforest.m"
    MR_Integer transform_hlds__deforest__CastX_15 = (MR_Integer) transform_hlds__deforest__HeadVar__1_1;
#line 571 "deforest.m"
    MR_Integer transform_hlds__deforest__CastY_16 = (MR_Integer) transform_hlds__deforest__HeadVar__2_2;

#line 571 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__CastX_15 == transform_hlds__deforest__CastY_16);
#line 571 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 571 "deforest.m"
      transform_hlds__deforest__succeeded = MR_TRUE;
#line 571 "deforest.m"
    else
#line 571 "deforest.m"
      {
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_18_18;
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_19_19;
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_21_21;
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_22_22;
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 2)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 3)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 4)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 5)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 2)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 3)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 4)));
#line 571 "deforest.m"
        MR_Word transform_hlds__deforest__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 5)));

#line 3033 "transform_hlds.deforest.c"
        {
#line 3035 "transform_hlds.deforest.c"
          transform_hlds__deforest__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__deforest__V_3_3, transform_hlds__deforest__V_9_9);
        }
#line 571 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 571 "deforest.m"
          {
#line 3042 "transform_hlds.deforest.c"
            transform_hlds__deforest__TypeInfo_18_18 = (MR_Word) &transform_hlds__deforest_scalar_common_1[2];
#line 3044 "transform_hlds.deforest.c"
            {
#line 3046 "transform_hlds.deforest.c"
              transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_18_18, ((MR_Box) (transform_hlds__deforest__V_4_4)), ((MR_Box) (transform_hlds__deforest__V_10_10)));
            }
#line 571 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 571 "deforest.m"
              {
#line 3053 "transform_hlds.deforest.c"
                transform_hlds__deforest__TypeInfo_19_19 = (MR_Word) &transform_hlds__deforest_scalar_common_1[7];
#line 3055 "transform_hlds.deforest.c"
                {
#line 3057 "transform_hlds.deforest.c"
                  transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_19_19, ((MR_Box) (transform_hlds__deforest__V_5_5)), ((MR_Box) (transform_hlds__deforest__V_11_11)));
                }
#line 571 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 571 "deforest.m"
                  {
#line 3064 "transform_hlds.deforest.c"
                    {
#line 3066 "transform_hlds.deforest.c"
                      transform_hlds__deforest__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__deforest__V_6_6, transform_hlds__deforest__V_12_12);
                    }
#line 571 "deforest.m"
                    if (transform_hlds__deforest__succeeded)
#line 571 "deforest.m"
                      {
#line 3073 "transform_hlds.deforest.c"
                        transform_hlds__deforest__TypeInfo_21_21 = (MR_Word) &transform_hlds__deforest_scalar_common_1[2];
#line 3075 "transform_hlds.deforest.c"
                        {
#line 3077 "transform_hlds.deforest.c"
                          transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_21_21, ((MR_Box) (transform_hlds__deforest__V_7_7)), ((MR_Box) (transform_hlds__deforest__V_13_13)));
                        }
#line 571 "deforest.m"
                        if (transform_hlds__deforest__succeeded)
#line 571 "deforest.m"
                          {
#line 3084 "transform_hlds.deforest.c"
                            transform_hlds__deforest__TypeInfo_22_22 = (MR_Word) &transform_hlds__deforest_scalar_common_1[4];
#line 3086 "transform_hlds.deforest.c"
                            {
#line 3088 "transform_hlds.deforest.c"
                              return transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_22_22, ((MR_Box) (transform_hlds__deforest__V_8_8)), ((MR_Box) (transform_hlds__deforest__V_14_14)));
                            }
#line 571 "deforest.m"
                          }
#line 571 "deforest.m"
                      }
#line 571 "deforest.m"
                  }
#line 571 "deforest.m"
              }
#line 571 "deforest.m"
          }
#line 571 "deforest.m"
      }
#line 571 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 571 "deforest.m"
  }
#line 571 "deforest.m"
}

#line 1703 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0(
#line 1703 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 1703 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 1703 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3)
#line 1703 "deforest.m"
{
#line 1703 "deforest.m"
  {
#line 1703 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1703 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar1_4 = transform_hlds__deforest__HeadVar__2_2;
#line 1703 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar2_5 = transform_hlds__deforest__HeadVar__3_3;

#line 1703 "deforest.m"
    {
#line 1703 "deforest.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_3[0], transform_hlds__deforest__HeadVar__1_1, ((MR_Box) (transform_hlds__deforest__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__deforest__Cast_HeadVar2_5)));
#line 1703 "deforest.m"
      return;
    }
#line 1703 "deforest.m"
  }
#line 1703 "deforest.m"
}

#line 1703 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0(
#line 1703 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 1703 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2)
#line 1703 "deforest.m"
{
#line 1703 "deforest.m"
  {
#line 1703 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1703 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar1_3 = transform_hlds__deforest__HeadVar__1_1;
#line 1703 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar2_4 = transform_hlds__deforest__HeadVar__2_2;

#line 1703 "deforest.m"
    {
#line 1703 "deforest.m"
      return transform_hlds__deforest__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) transform_hlds__deforest__Cast_HeadVar1_3, (MR_Word) transform_hlds__deforest__Cast_HeadVar2_4);
    }
#line 1703 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 1703 "deforest.m"
  }
#line 1703 "deforest.m"
}

#line 535 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0(
#line 535 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 535 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 535 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3)
#line 535 "deforest.m"
{
#line 535 "deforest.m"
  {
#line 535 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 535 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar1_4 = transform_hlds__deforest__HeadVar__2_2;
#line 535 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar2_5 = transform_hlds__deforest__HeadVar__3_3;

#line 535 "deforest.m"
    {
#line 535 "deforest.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[6], transform_hlds__deforest__HeadVar__1_1, ((MR_Box) (transform_hlds__deforest__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__deforest__Cast_HeadVar2_5)));
#line 535 "deforest.m"
      return;
    }
#line 535 "deforest.m"
  }
#line 535 "deforest.m"
}

#line 535 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0(
#line 535 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 535 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2)
#line 535 "deforest.m"
{
#line 535 "deforest.m"
  {
#line 535 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 535 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar1_3 = transform_hlds__deforest__HeadVar__1_1;
#line 535 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar2_4 = transform_hlds__deforest__HeadVar__2_2;

#line 535 "deforest.m"
    {
#line 535 "deforest.m"
      return transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[6], ((MR_Box) (transform_hlds__deforest__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__deforest__Cast_HeadVar2_4)));
    }
#line 535 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 535 "deforest.m"
  }
#line 535 "deforest.m"
}

#line 2139 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_1_p_0(
#line 2139 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1)
#line 2139 "deforest.m"
{
#line 2141 "deforest.m"
  {
#line 2141 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 2141 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 2141 "deforest.m"
    MR_Word transform_hlds__deforest__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));

#line 2143 "deforest.m"
    {
#line 2143 "deforest.m"
      MR_Word transform_hlds__deforest__V_6_6;

#line 2143 "deforest.m"
      {
#line 2143 "deforest.m"
        transform_hlds__deforest__V_6_6 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__deforest__GoalExpr_2);
      }
#line 2143 "deforest.m"
      transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_6_6 == (MR_Integer) 1);
#line 2143 "deforest.m"
    }
#line 2144 "deforest.m"
    if (!(transform_hlds__deforest__succeeded))
#line 2145 "deforest.m"
      {
#line 2145 "deforest.m"
        MR_Word transform_hlds__deforest__Goal1_4;
#line 2145 "deforest.m"
        MR_Word transform_hlds__deforest__GoalList1_5;

#line 2145 "deforest.m"
        transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_2)) == (MR_mktag((MR_Integer) 0)));
#line 2145 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2145 "deforest.m"
          {
#line 2145 "deforest.m"
            transform_hlds__deforest__Goal1_4 = (MR_Word) MR_body(((MR_Word) transform_hlds__deforest__GoalExpr_2), (MR_Integer) 0);
#line 2147 "deforest.m"
            {
#line 2147 "deforest.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__deforest__Goal1_4, &transform_hlds__deforest__GoalList1_5);
            }
#line 2148 "deforest.m"
            {
#line 2148 "deforest.m"
              return transform_hlds__deforest__succeeded = transform_hlds__deforest__is_simple_goal_list_1_p_0(transform_hlds__deforest__GoalList1_5);
            }
#line 2145 "deforest.m"
          }
#line 2145 "deforest.m"
      }
#line 2141 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 2141 "deforest.m"
  }
#line 2139 "deforest.m"
}

#line 2132 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_list_1_p_0(
#line 2132 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1)
#line 2132 "deforest.m"
{
#line 2134 "deforest.m"
  while (MR_TRUE)
#line 2134 "deforest.m"
    {
#line 2134 "deforest.m"
      /* tailcall optimized into a loop */
#line 2134 "deforest.m"
      {
#line 2134 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;

#line 2134 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2134 "deforest.m"
          transform_hlds__deforest__succeeded = MR_TRUE;
#line 2134 "deforest.m"
        else
#line 2135 "deforest.m"
          {
#line 2135 "deforest.m"
            MR_Word transform_hlds__deforest__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 2135 "deforest.m"
            MR_Word transform_hlds__deforest__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));

#line 2136 "deforest.m"
            {
#line 2136 "deforest.m"
              transform_hlds__deforest__succeeded = transform_hlds__deforest__is_simple_goal_1_p_0(transform_hlds__deforest__Goal_2);
            }
#line 2135 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 2137 "deforest.m"
              {
#line 2137 "deforest.m"
                /* direct tailcall eliminated */
#line 2137 "deforest.m"
                {
#line 2137 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals_3;

#line 2137 "deforest.m"
                  transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 2137 "deforest.m"
                }
#line 2137 "deforest.m"
                continue;
#line 2137 "deforest.m"
              }
#line 2135 "deforest.m"
          }
#line 2134 "deforest.m"
        return transform_hlds__deforest__succeeded;
#line 2134 "deforest.m"
      }
#line 2134 "deforest.m"
      break;
#line 2134 "deforest.m"
    }
#line 2132 "deforest.m"
}

#line 1968 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__unfold_call_10_p_0(
#line 1968 "deforest.m"
  MR_Word transform_hlds__deforest__CheckImprovement_11,
#line 1968 "deforest.m"
  MR_Word transform_hlds__deforest__CheckVars_12,
#line 1968 "deforest.m"
  MR_Word transform_hlds__deforest__PredId_13,
#line 1968 "deforest.m"
  MR_Integer transform_hlds__deforest__ProcId_14,
#line 1968 "deforest.m"
  MR_Word transform_hlds__deforest__Args_15,
#line 1968 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_16,
#line 1968 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_17,
#line 1968 "deforest.m"
  MR_Word * transform_hlds__deforest__Optimized_18,
#line 1968 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79,
#line 1968 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_80)
#line 1968 "deforest.m"
{
#line 1973 "deforest.m"
  {
#line 1973 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1973 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_132_132;
#line 1973 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_20;
#line 1973 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_21;
#line 1973 "deforest.m"
    MR_Integer transform_hlds__deforest__VarsOpt_22;
#line 1973 "deforest.m"
    MR_Word transform_hlds__deforest__ProcInfo0_23;
#line 1973 "deforest.m"
    MR_Word transform_hlds__deforest__VarSet0_24;
#line 1973 "deforest.m"
    MR_Word transform_hlds__deforest__Vars_25;
#line 1973 "deforest.m"
    MR_Integer transform_hlds__deforest__NumVars_26;
#line 1973 "deforest.m"
    MR_Word transform_hlds__deforest__DebugPD_27;

#line 1974 "deforest.m"
    {
#line 1974 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__ModuleInfo_20);
    }
#line 1975 "deforest.m"
    {
#line 1975 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_20, &transform_hlds__deforest__Globals_21);
    }
#line 1976 "deforest.m"
    {
#line 1976 "deforest.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_21, (MR_Integer) 394, &transform_hlds__deforest__VarsOpt_22);
    }
#line 1977 "deforest.m"
    {
#line 1977 "deforest.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__ProcInfo0_23);
    }
#line 1978 "deforest.m"
    {
#line 1978 "deforest.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__VarSet0_24);
    }
#line 3443 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1979 "deforest.m"
    {
#line 1979 "deforest.m"
      mercury__varset__vars_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__VarSet0_24, &transform_hlds__deforest__Vars_25);
    }
#line 1980 "deforest.m"
    {
#line 1980 "deforest.m"
      mercury__list__length_2_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[1], transform_hlds__deforest__Vars_25, &transform_hlds__deforest__NumVars_26);
    }
#line 1981 "deforest.m"
    {
#line 1981 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_21, (MR_Integer) 72, &transform_hlds__deforest__DebugPD_27);
    }
#line 1985 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__CheckVars_12 == (MR_Integer) 0);
#line 1986 "deforest.m"
    if (!(transform_hlds__deforest__succeeded))
#line 1986 "deforest.m"
      {
#line 1987 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__VarsOpt_22 == (MR_Integer) -1);
#line 1986 "deforest.m"
        if (!(transform_hlds__deforest__succeeded))
#line 1990 "deforest.m"
          transform_hlds__deforest__succeeded = (transform_hlds__deforest__NumVars_26 < transform_hlds__deforest__VarsOpt_22);
#line 1986 "deforest.m"
      }
#line 2121 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 1993 "deforest.m"
      {
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__PredInfo0_29;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__CalledPredInfo_30;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__CalledProcInfo_31;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__TypeVarSet0_32;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__UnivQVars_33;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__VarTypes0_34;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__RttiVarMaps0_35;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__VarSet_36;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__VarTypes_37;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__TypeVarSet_38;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__RttiVarMaps_39;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__Goal1_40;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__PredInfo_41;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__CalledHasParallelConj_42;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo1_43;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo2_44;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo3_45;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo_46;
#line 1993 "deforest.m"
        MR_Integer transform_hlds__deforest__OriginalCost_47;
#line 1993 "deforest.m"
        MR_Integer transform_hlds__deforest__CostDelta0_48;
#line 1993 "deforest.m"
        MR_Integer transform_hlds__deforest__SizeDelta0_49;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__Changed0_50;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo1_52;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__NonLocals1_53;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__NonLocals_54;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__Goal2_55;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__ArgLives_57;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__LiveVars0_58;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__LiveVars1_59;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__LiveVars_60;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__Goal3_61;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__Errors_62;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__Optimized0_63;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__SimplifyTasks_66;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__Goal4_67;
#line 1993 "deforest.m"
        MR_Integer transform_hlds__deforest__CostDelta1_68;
#line 1993 "deforest.m"
        MR_Integer transform_hlds__deforest__CostDelta_69;
#line 1993 "deforest.m"
        MR_Integer transform_hlds__deforest__GoalSize_70;
#line 1993 "deforest.m"
        MR_Integer transform_hlds__deforest__SizeDelta_71;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_91_91;
#line 1993 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 1993 "deforest.m"
        MR_Integer transform_hlds__deforest__V_98_98;
#line 2028 "deforest.m"
        MR_Word transform_hlds__deforest__V_51_51;
#line 2068 "deforest.m"
        MR_Integer transform_hlds__deforest__Factor_72;

#line 1993 "deforest.m"
        {
#line 1993 "deforest.m"
          transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__PredInfo0_29);
        }
#line 1994 "deforest.m"
        {
#line 1994 "deforest.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__deforest__ModuleInfo_20, transform_hlds__deforest__PredId_13, transform_hlds__deforest__ProcId_14, &transform_hlds__deforest__CalledPredInfo_30, &transform_hlds__deforest__CalledProcInfo_31);
        }
#line 1996 "deforest.m"
        {
#line 1996 "deforest.m"
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__deforest__PredInfo0_29, &transform_hlds__deforest__TypeVarSet0_32);
        }
#line 1997 "deforest.m"
        {
#line 1997 "deforest.m"
          hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(transform_hlds__deforest__PredInfo0_29, &transform_hlds__deforest__UnivQVars_33);
        }
#line 1998 "deforest.m"
        {
#line 1998 "deforest.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__VarTypes0_34);
        }
#line 1999 "deforest.m"
        {
#line 1999 "deforest.m"
          hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__RttiVarMaps0_35);
        }
#line 2000 "deforest.m"
        {
#line 2000 "deforest.m"
          transform_hlds__inlining__do_inline_call_13_p_0(transform_hlds__deforest__UnivQVars_33, transform_hlds__deforest__Args_15, transform_hlds__deforest__CalledPredInfo_30, transform_hlds__deforest__CalledProcInfo_31, transform_hlds__deforest__VarSet0_24, &transform_hlds__deforest__VarSet_36, transform_hlds__deforest__VarTypes0_34, &transform_hlds__deforest__VarTypes_37, transform_hlds__deforest__TypeVarSet0_32, &transform_hlds__deforest__TypeVarSet_38, transform_hlds__deforest__RttiVarMaps0_35, &transform_hlds__deforest__RttiVarMaps_39, &transform_hlds__deforest__Goal1_40);
        }
#line 2003 "deforest.m"
        {
#line 2003 "deforest.m"
          hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__deforest__TypeVarSet_38, transform_hlds__deforest__PredInfo0_29, &transform_hlds__deforest__PredInfo_41);
        }
#line 2004 "deforest.m"
        {
#line 2004 "deforest.m"
          hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__deforest__CalledProcInfo_31, &transform_hlds__deforest__CalledHasParallelConj_42);
        }
#line 2006 "deforest.m"
        {
#line 2006 "deforest.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__deforest__VarSet_36, transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__ProcInfo1_43);
        }
#line 2007 "deforest.m"
        {
#line 2007 "deforest.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__deforest__VarTypes_37, transform_hlds__deforest__ProcInfo1_43, &transform_hlds__deforest__ProcInfo2_44);
        }
#line 2008 "deforest.m"
        {
#line 2008 "deforest.m"
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__deforest__RttiVarMaps_39, transform_hlds__deforest__ProcInfo2_44, &transform_hlds__deforest__ProcInfo3_45);
        }
#line 2013 "deforest.m"
#line 2013 "deforest.m"
        switch (transform_hlds__deforest__CalledHasParallelConj_42) {
#line 2013 "deforest.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2013 "deforest.m"
          case (MR_Integer) 1:
#line 2016 "deforest.m"
            transform_hlds__deforest__ProcInfo_46 = transform_hlds__deforest__ProcInfo3_45;
#line 2013 "deforest.m"
            break;
#line 2013 "deforest.m"
          case (MR_Integer) 0:
#line 2010 "deforest.m"
            {
#line 2011 "deforest.m"
              {
#line 2011 "deforest.m"
                hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, transform_hlds__deforest__ProcInfo3_45, &transform_hlds__deforest__ProcInfo_46);
              }
#line 2010 "deforest.m"
            }
#line 2013 "deforest.m"
            break;
#line 2013 "deforest.m"
        }
#line 2019 "deforest.m"
        {
#line 2019 "deforest.m"
          transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(transform_hlds__deforest__PredInfo_41, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84);
        }
#line 2020 "deforest.m"
        {
#line 2020 "deforest.m"
          transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__deforest__ProcInfo_46, transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85);
        }
#line 2022 "deforest.m"
        {
#line 2022 "deforest.m"
          transform_hlds__pd_cost__goal_cost_2_p_0(transform_hlds__deforest__Goal1_40, &transform_hlds__deforest__OriginalCost_47);
        }
#line 2023 "deforest.m"
        {
#line 2023 "deforest.m"
          transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__CostDelta0_48);
        }
#line 2024 "deforest.m"
        {
#line 2024 "deforest.m"
          transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__SizeDelta0_49);
        }
#line 2025 "deforest.m"
        {
#line 2025 "deforest.m"
          transform_hlds__pd_info__pd_info_get_changed_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__Changed0_50);
        }
#line 2028 "deforest.m"
        transform_hlds__deforest__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_40, (MR_Integer) 0)));
#line 2028 "deforest.m"
        transform_hlds__deforest__GoalInfo1_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_40, (MR_Integer) 1)));
#line 2029 "deforest.m"
        {
#line 2029 "deforest.m"
          transform_hlds__deforest__NonLocals1_53 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__GoalInfo1_52);
        }
#line 2030 "deforest.m"
        {
#line 2030 "deforest.m"
          parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__Args_15, &transform_hlds__deforest__NonLocals_54);
        }
#line 2031 "deforest.m"
        {
#line 2031 "deforest.m"
          transform_hlds__deforest__succeeded = parse_tree__set_of_var__equal_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__NonLocals1_53, transform_hlds__deforest__NonLocals_54);
        }
#line 2033 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2032 "deforest.m"
          {
#line 2032 "deforest.m"
            transform_hlds__deforest__Goal2_55 = transform_hlds__deforest__Goal1_40;
#line 2032 "deforest.m"
            transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
#line 2032 "deforest.m"
          }
#line 2033 "deforest.m"
        else
#line 2034 "deforest.m"
          {
#line 2034 "deforest.m"
            transform_hlds__pd_util__pd_requantify_goal_5_p_0(transform_hlds__deforest__NonLocals_54, transform_hlds__deforest__Goal1_40, &transform_hlds__deforest__Goal2_55, transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86);
          }
#line 2039 "deforest.m"
        {
#line 2039 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "Running unique modes\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 2041 "deforest.m"
        {
#line 2041 "deforest.m"
          hlds__hlds_pred__proc_info_arglives_3_p_0(transform_hlds__deforest__CalledProcInfo_31, transform_hlds__deforest__ModuleInfo_20, &transform_hlds__deforest__ArgLives_57);
        }
#line 2042 "deforest.m"
        {
#line 2042 "deforest.m"
          check_hlds__modecheck_util__get_live_vars_3_p_0(transform_hlds__deforest__Args_15, transform_hlds__deforest__ArgLives_57, &transform_hlds__deforest__LiveVars0_58);
        }
#line 2043 "deforest.m"
        {
#line 2043 "deforest.m"
          parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__LiveVars0_58, &transform_hlds__deforest__LiveVars1_59);
        }
#line 2044 "deforest.m"
        {
#line 2044 "deforest.m"
          parse_tree__set_of_var__intersect_3_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__NonLocals_54, transform_hlds__deforest__LiveVars1_59, &transform_hlds__deforest__LiveVars_60);
        }
#line 2045 "deforest.m"
        {
#line 2045 "deforest.m"
          transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0(transform_hlds__deforest__LiveVars_60, transform_hlds__deforest__Goal2_55, &transform_hlds__deforest__Goal3_61, &transform_hlds__deforest__Errors_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_91_91);
        }
#line 2051 "deforest.m"
        if ((transform_hlds__deforest__Errors_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2050 "deforest.m"
          transform_hlds__deforest__Optimized0_63 = (MR_Integer) 1;
#line 2051 "deforest.m"
        else
#line 2055 "deforest.m"
          transform_hlds__deforest__Optimized0_63 = (MR_Integer) 0;
#line 2059 "deforest.m"
        {
#line 2059 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "Running simplify\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 2061 "deforest.m"
        {
#line 2061 "deforest.m"
          check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, transform_hlds__deforest__Globals_21, &transform_hlds__deforest__SimplifyTasks_66);
        }
#line 2062 "deforest.m"
        {
#line 2062 "deforest.m"
          transform_hlds__pd_util__pd_simplify_goal_5_p_0(transform_hlds__deforest__SimplifyTasks_66, transform_hlds__deforest__Goal3_61, &transform_hlds__deforest__Goal4_67, transform_hlds__deforest__STATE_VARIABLE_PDInfo_91_91, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
        }
#line 2064 "deforest.m"
        {
#line 2064 "deforest.m"
          transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__CostDelta1_68);
        }
#line 2065 "deforest.m"
        transform_hlds__deforest__CostDelta_69 = (transform_hlds__deforest__CostDelta1_68 - transform_hlds__deforest__CostDelta0_48);
#line 2066 "deforest.m"
        {
#line 2066 "deforest.m"
          hlds__goal_util__goal_size_2_p_0(transform_hlds__deforest__Goal4_67, &transform_hlds__deforest__GoalSize_70);
        }
#line 2067 "deforest.m"
        {
#line 2067 "deforest.m"
          transform_hlds__deforest__V_98_98 = transform_hlds__pd_cost__cost_of_call_0_f_0();
        }
#line 2067 "deforest.m"
        transform_hlds__deforest__SizeDelta_71 = (transform_hlds__deforest__GoalSize_70 - transform_hlds__deforest__V_98_98);
#line 2068 "deforest.m"
        {
#line 2068 "deforest.m"
          libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_21, (MR_Integer) 393, &transform_hlds__deforest__Factor_72);
        }
#line 2070 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__Optimized0_63 == (MR_Integer) 1);
#line 2070 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2073 "deforest.m"
#line 2073 "deforest.m"
          switch (transform_hlds__deforest__CheckImprovement_11) {
#line 2073 "deforest.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 2073 "deforest.m"
            case (MR_Integer) 0:
#line 2072 "deforest.m"
              transform_hlds__deforest__succeeded = MR_TRUE;
#line 2073 "deforest.m"
              break;
#line 2073 "deforest.m"
            case (MR_Integer) 1:
#line 2078 "deforest.m"
              {
#line 2076 "deforest.m"
                {
#line 2076 "deforest.m"
                  transform_hlds__deforest__succeeded = transform_hlds__deforest__is_simple_goal_1_p_0(transform_hlds__deforest__Goal3_61);
                }
#line 2078 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 2077 "deforest.m"
                  transform_hlds__deforest__succeeded = MR_TRUE;
#line 2078 "deforest.m"
                else
#line 2079 "deforest.m"
                  {
#line 2079 "deforest.m"
                    transform_hlds__deforest__succeeded = transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(transform_hlds__deforest__GoalSize_70, transform_hlds__deforest__OriginalCost_47, transform_hlds__deforest__CostDelta_69);
                  }
#line 2078 "deforest.m"
              }
#line 2073 "deforest.m"
              break;
#line 2073 "deforest.m"
          }
#line 2106 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2084 "deforest.m"
          {
#line 2084 "deforest.m"
            MR_Word transform_hlds__deforest__GoalInfo0_74;
#line 2084 "deforest.m"
            MR_Word transform_hlds__deforest__Det0_75;
#line 2084 "deforest.m"
            MR_Word transform_hlds__deforest__GoalInfo_77;
#line 2084 "deforest.m"
            MR_Word transform_hlds__deforest__Det_78;
#line 2084 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_108_108;
#line 2084 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110;
#line 2085 "deforest.m"
            MR_Word transform_hlds__deforest__V_102_102;
#line 2085 "deforest.m"
            MR_Word transform_hlds__deforest__V_104_104;
#line 2085 "deforest.m"
            MR_Word transform_hlds__deforest__V_105_105;
#line 2085 "deforest.m"
            MR_Word transform_hlds__deforest__V_106_106;
#line 2091 "deforest.m"
            MR_Word transform_hlds__deforest__V_73_73;
#line 2093 "deforest.m"
            MR_Word transform_hlds__deforest__V_76_76;

#line 2084 "deforest.m"
            *transform_hlds__deforest__Goal_17 = transform_hlds__deforest__Goal4_67;
#line 2087 "deforest.m"
            {
#line 2087 "deforest.m"
              transform_hlds__deforest__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2087 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_104_104, 0) = ((MR_Box) (transform_hlds__deforest__CostDelta_69));
#line 2087 "deforest.m"
            }
#line 2087 "deforest.m"
            {
#line 2087 "deforest.m"
              transform_hlds__deforest__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2087 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_106_106, 0) = ((MR_Box) (transform_hlds__deforest__SizeDelta_71));
#line 2087 "deforest.m"
            }
#line 2087 "deforest.m"
            {
#line 2087 "deforest.m"
              transform_hlds__deforest__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2087 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_105_105, 0) = ((MR_Box) (transform_hlds__deforest__V_106_106));
#line 2087 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2087 "deforest.m"
            }
#line 2087 "deforest.m"
            {
#line 2087 "deforest.m"
              transform_hlds__deforest__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2087 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_102_102, 0) = ((MR_Box) (transform_hlds__deforest__V_104_104));
#line 2087 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_102_102, 1) = ((MR_Box) (transform_hlds__deforest__V_105_105));
#line 2087 "deforest.m"
            }
#line 2086 "deforest.m"
            {
#line 2086 "deforest.m"
              transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "inlined: cost(%i) size(%i)\n", transform_hlds__deforest__V_102_102);
            }
#line 2089 "deforest.m"
            {
#line 2089 "deforest.m"
              transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(transform_hlds__deforest__SizeDelta_71, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_108_108);
            }
#line 2090 "deforest.m"
            {
#line 2090 "deforest.m"
              transform_hlds__pd_info__pd_info_set_changed_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_108_108, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110);
            }
#line 2091 "deforest.m"
            transform_hlds__deforest__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_16, (MR_Integer) 0)));
#line 2091 "deforest.m"
            transform_hlds__deforest__GoalInfo0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_16, (MR_Integer) 1)));
#line 2092 "deforest.m"
            {
#line 2092 "deforest.m"
              transform_hlds__deforest__Det0_75 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__deforest__GoalInfo0_74);
            }
#line 2093 "deforest.m"
            transform_hlds__deforest__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__deforest__Goal_17, (MR_Integer) 0)));
#line 2093 "deforest.m"
            transform_hlds__deforest__GoalInfo_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__deforest__Goal_17, (MR_Integer) 1)));
#line 2094 "deforest.m"
            {
#line 2094 "deforest.m"
              transform_hlds__deforest__Det_78 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__deforest__GoalInfo_77);
            }
#line 2099 "deforest.m"
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__Det_78 == transform_hlds__deforest__Det0_75);
#line 2101 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 2101 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_80 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110;
#line 2101 "deforest.m"
            else
#line 2102 "deforest.m"
              {
#line 2102 "deforest.m"
                {
#line 2102 "deforest.m"
                  transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110, transform_hlds__deforest__STATE_VARIABLE_PDInfo_80);
                }
#line 2102 "deforest.m"
              }
#line 2105 "deforest.m"
            *transform_hlds__deforest__Optimized_18 = (MR_Integer) 1;
#line 2084 "deforest.m"
          }
#line 2106 "deforest.m"
        else
#line 2112 "deforest.m"
          {
#line 2112 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123;
#line 2112 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124;
#line 2112 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125;
#line 2112 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126;
#line 2107 "deforest.m"
            MR_Word transform_hlds__deforest__V_115_115;
#line 2107 "deforest.m"
            MR_Word transform_hlds__deforest__V_119_119;
#line 2107 "deforest.m"
            MR_Word transform_hlds__deforest__V_120_120;
#line 2107 "deforest.m"
            MR_Word transform_hlds__deforest__V_121_121;

#line 2111 "deforest.m"
            {
#line 2111 "deforest.m"
              transform_hlds__deforest__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2111 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_119_119, 0) = ((MR_Box) (transform_hlds__deforest__CostDelta_69));
#line 2111 "deforest.m"
            }
#line 2111 "deforest.m"
            {
#line 2111 "deforest.m"
              transform_hlds__deforest__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2111 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_121_121, 0) = ((MR_Box) (transform_hlds__deforest__SizeDelta_71));
#line 2111 "deforest.m"
            }
#line 2111 "deforest.m"
            {
#line 2111 "deforest.m"
              transform_hlds__deforest__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2111 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_120_120, 0) = ((MR_Box) (transform_hlds__deforest__V_121_121));
#line 2111 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2111 "deforest.m"
            }
#line 2111 "deforest.m"
            {
#line 2111 "deforest.m"
              transform_hlds__deforest__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2111 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_115_115, 0) = ((MR_Box) (transform_hlds__deforest__V_119_119));
#line 2111 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_115_115, 1) = ((MR_Box) (transform_hlds__deforest__V_120_120));
#line 2111 "deforest.m"
            }
#line 2108 "deforest.m"
            {
#line 2108 "deforest.m"
              transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "not enough improvement - not inlining: cost(%i) size(%i)\n", transform_hlds__deforest__V_115_115);
            }
#line 2113 "deforest.m"
            {
#line 2113 "deforest.m"
              transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(transform_hlds__deforest__PredInfo0_29, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123);
            }
#line 2114 "deforest.m"
            {
#line 2114 "deforest.m"
              transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__deforest__ProcInfo0_23, transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124);
            }
#line 2115 "deforest.m"
            {
#line 2115 "deforest.m"
              transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(transform_hlds__deforest__SizeDelta0_49, transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125);
            }
#line 2116 "deforest.m"
            {
#line 2116 "deforest.m"
              transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(transform_hlds__deforest__CostDelta0_48, transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126);
            }
#line 2117 "deforest.m"
            {
#line 2117 "deforest.m"
              transform_hlds__pd_info__pd_info_set_changed_3_p_0(transform_hlds__deforest__Changed0_50, transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126, transform_hlds__deforest__STATE_VARIABLE_PDInfo_80);
            }
#line 2118 "deforest.m"
            *transform_hlds__deforest__Goal_17 = transform_hlds__deforest__Goal0_16;
#line 2119 "deforest.m"
            *transform_hlds__deforest__Optimized_18 = (MR_Integer) 0;
#line 2112 "deforest.m"
          }
#line 1993 "deforest.m"
      }
#line 2121 "deforest.m"
    else
#line 2125 "deforest.m"
      {
#line 2123 "deforest.m"
        {
#line 2123 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "too many variables - not inlining\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 2126 "deforest.m"
        *transform_hlds__deforest__Goal_17 = transform_hlds__deforest__Goal0_16;
#line 2127 "deforest.m"
        *transform_hlds__deforest__Optimized_18 = (MR_Integer) 0;
#line 2125 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_80 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79;
#line 2125 "deforest.m"
      }
#line 1973 "deforest.m"
  }
#line 1968 "deforest.m"
}

#line 1902 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_1(
#line 1902 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1902 "deforest.m"
{
#line 1902 "deforest.m"
  {
#line 1902 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1902 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0, 1);
#line 1902 "deforest.m"
  }
#line 1902 "deforest.m"
}

#line 1904 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_3(
#line 1904 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1904 "deforest.m"
{
#line 1904 "deforest.m"
  {
#line 1904 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1904 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_36 = ((MR_Integer) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_36);
#line 1904 "deforest.m"
    {
#line 1904 "deforest.m"
      transform_hlds__deforest__deforest_call_9_p_0_2(transform_hlds__deforest__env_ptr);
#line 1904 "deforest.m"
      return;
    }
#line 1904 "deforest.m"
  }
#line 1904 "deforest.m"
}

#line 1902 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_2(
#line 1902 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1902 "deforest.m"
{
#line 1902 "deforest.m"
  {
#line 1902 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1902 "deforest.m"
    {
#line 1905 "deforest.m"
      MR_Box transform_hlds__deforest__conv2_Arg_37;
#line 1907 "deforest.m"
      MR_Word transform_hlds__deforest__V_39_39;
#line 1920 "deforest.m"
      MR_Word transform_hlds__deforest__V_41_41;

#line 1905 "deforest.m"
      {
#line 1905 "deforest.m"
        mercury__list__det_index1_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_86_86, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_36, &transform_hlds__deforest__conv2_Arg_37);
      }
#line 1905 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_37 = ((MR_Word) transform_hlds__deforest__conv2_Arg_37);
#line 1906 "deforest.m"
      {
#line 1906 "deforest.m"
        hlds__instmap__instmap_lookup_var_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_37, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_38);
      }
#line 1907 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1907 "deforest.m"
      {
#line 1907 "deforest.m"
        MR_Word base;
#line 1907 "deforest.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1907 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_54_54 = base;
#line 1907 "deforest.m"
        MR_hl_field(MR_mktag(1), base, 0) = NULL;
#line 1907 "deforest.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_55_55));
#line 1907 "deforest.m"
      }
#line 1907 "deforest.m"
      {
#line 1907 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = check_hlds__inst_match__inst_is_bound_to_functors_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_38, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_90_90);
      }
#line 1902 "deforest.m"
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1902 "deforest.m"
        {
#line 4184 "transform_hlds.deforest.c"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_91_91 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 1907 "deforest.m"
          {
#line 1907 "deforest.m"
            (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__deforest____Unify____list__list_1_1((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_91_91, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_54_54, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_90_90);
          }
#line 1902 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1902 "deforest.m"
            {
#line 1915 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__InlinePromisedPure_40 = (MR_Integer) 0;
#line 1916 "deforest.m"
              {
#line 1916 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__inlining__can_inline_proc_6_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__InlinePromisedPure_40, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CallerMarkers_30, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19);
              }
#line 1902 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1902 "deforest.m"
                {
#line 1920 "deforest.m"
                  {
#line 1920 "deforest.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, &transform_hlds__deforest__V_41_41, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_42);
                  }
#line 1922 "deforest.m"
                  {
#line 1922 "deforest.m"
                    hlds__hlds_pred__proc_info_get_goal_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_42, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_43);
                  }
#line 1923 "deforest.m"
                  {
#line 1923 "deforest.m"
                    hlds__goal_util__goal_size_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_43, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_44);
                  }
#line 1924 "deforest.m"
                  (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29 == (MR_Integer) -1);
#line 1925 "deforest.m"
                  if (!((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded))
#line 1925 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_44 < (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29);
#line 1925 "deforest.m"
                  if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1925 "deforest.m"
                    {
#line 1925 "deforest.m"
                      transform_hlds__deforest__deforest_call_9_p_0_1(transform_hlds__deforest__env_ptr);
#line 1925 "deforest.m"
                      return;
                    }
#line 1902 "deforest.m"
                }
#line 1902 "deforest.m"
            }
#line 1902 "deforest.m"
        }
#line 1902 "deforest.m"
    }
#line 1902 "deforest.m"
  }
#line 1902 "deforest.m"
}

#line 1902 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_4(
#line 1902 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1902 "deforest.m"
{
#line 1902 "deforest.m"
  {
#line 1902 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1902 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0) == 0)
#line 1902 "deforest.m"
      {
#line 1902 "deforest.m"
        {
#line 1902 "deforest.m"
          MR_Word transform_hlds__deforest__TypeCtorInfo_89_89;
#line 1902 "deforest.m"
          MR_Word transform_hlds__deforest__ProcArgInfo_32;
#line 1902 "deforest.m"
          MR_Word transform_hlds__deforest__LeftArgs_34;
#line 1902 "deforest.m"
          MR_Word transform_hlds__deforest__V_53_53;
#line 1902 "deforest.m"
          MR_Box transform_hlds__deforest__conv0_ProcArgInfo_32;
#line 1903 "deforest.m"
          MR_Word transform_hlds__deforest__V_33_33;
#line 1903 "deforest.m"
          MR_Word transform_hlds__deforest__V_35_35;

#line 1902 "deforest.m"
          {
#line 1902 "deforest.m"
            transform_hlds__deforest__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1902 "deforest.m"
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_53_53, 0) = ((MR_Box) ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10));
#line 1902 "deforest.m"
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_53_53, 1) = ((MR_Box) ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11));
#line 1902 "deforest.m"
          }
#line 1902 "deforest.m"
          {
#line 1902 "deforest.m"
            (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[0], (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18, ((MR_Box) (transform_hlds__deforest__V_53_53)), &transform_hlds__deforest__conv0_ProcArgInfo_32);
          }
#line 1902 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1902 "deforest.m"
            {
#line 1902 "deforest.m"
              transform_hlds__deforest__ProcArgInfo_32 = ((MR_Word) transform_hlds__deforest__conv0_ProcArgInfo_32);
#line 1902 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_TRUE;
#line 1902 "deforest.m"
            }
#line 1902 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1902 "deforest.m"
            {
#line 1903 "deforest.m"
              transform_hlds__deforest__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__ProcArgInfo_32, (MR_Integer) 0)));
#line 1903 "deforest.m"
              transform_hlds__deforest__LeftArgs_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__ProcArgInfo_32, (MR_Integer) 1)));
#line 1903 "deforest.m"
              transform_hlds__deforest__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__ProcArgInfo_32, (MR_Integer) 2)));
#line 4317 "transform_hlds.deforest.c"
              transform_hlds__deforest__TypeCtorInfo_89_89 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1904 "deforest.m"
              {
#line 1904 "deforest.m"
                mercury__set__member_2_p_1(transform_hlds__deforest__TypeCtorInfo_89_89, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_36, transform_hlds__deforest__LeftArgs_34, transform_hlds__deforest__deforest_call_9_p_0_3, transform_hlds__deforest__env_ptr);
              }
#line 1902 "deforest.m"
            }
#line 1902 "deforest.m"
        }
#line 1902 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_FALSE;
#line 1902 "deforest.m"
      }
#line 1902 "deforest.m"
    else
#line 1902 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_TRUE;
#line 1902 "deforest.m"
  }
#line 1902 "deforest.m"
}

#line 1878 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0(
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__PredId_10,
#line 1878 "deforest.m"
  MR_Integer transform_hlds__deforest__ProcId_11,
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__Args_12,
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__SymName_13,
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__BuiltinState_14,
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_15,
#line 1878 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_16,
#line 1878 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49,
#line 1878 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_50)
#line 1878 "deforest.m"
{
#line 1878 "deforest.m"
  {
#line 1878 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s transform_hlds__deforest__env;

#line 1878 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10 = transform_hlds__deforest__PredId_10;
#line 1878 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11 = transform_hlds__deforest__ProcId_11;
#line 1878 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12 = transform_hlds__deforest__Args_12;
#line 1878 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14 = transform_hlds__deforest__BuiltinState_14;
#line 1883 "deforest.m"
    {
#line 1883 "deforest.m"
      MR_String transform_hlds__deforest__Name_21;
#line 1883 "deforest.m"
      MR_Integer transform_hlds__deforest__Arity_22;
#line 1883 "deforest.m"
      MR_Word transform_hlds__deforest__GoalInfo0_24;
#line 1883 "deforest.m"
      MR_Word transform_hlds__deforest__Context_25;
#line 1883 "deforest.m"
      MR_Word transform_hlds__deforest__LocalTermInfo0_26;
#line 1883 "deforest.m"
      MR_Word transform_hlds__deforest__PredInfo_27;
#line 1883 "deforest.m"
      MR_Word transform_hlds__deforest__Globals_28;
#line 1883 "deforest.m"
      MR_Word transform_hlds__deforest__DebugPD_31;
#line 1889 "deforest.m"
      MR_Word transform_hlds__deforest__GoalExpr0_23;

#line 1884 "deforest.m"
      {
#line 1884 "deforest.m"
        transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18);
      }
#line 1885 "deforest.m"
      {
#line 1885 "deforest.m"
        transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19);
      }
#line 1886 "deforest.m"
      {
#line 1886 "deforest.m"
        transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20);
      }
#line 1887 "deforest.m"
      {
#line 1887 "deforest.m"
        transform_hlds__deforest__Name_21 = mdbcomp__sym_name__unqualify_name_1_f_0(transform_hlds__deforest__SymName_13);
      }
#line 4418 "transform_hlds.deforest.c"
      (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_86_86 = (MR_Word) &transform_hlds__deforest_scalar_common_1[1];
#line 1888 "deforest.m"
      {
#line 1888 "deforest.m"
        mercury__list__length_2_p_0((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_86_86, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, &transform_hlds__deforest__Arity_22);
      }
#line 1889 "deforest.m"
      transform_hlds__deforest__GoalExpr0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_15, (MR_Integer) 0)));
#line 1889 "deforest.m"
      transform_hlds__deforest__GoalInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_15, (MR_Integer) 1)));
#line 1890 "deforest.m"
      {
#line 1890 "deforest.m"
        transform_hlds__deforest__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__deforest__GoalInfo0_24);
      }
#line 1892 "deforest.m"
      {
#line 1892 "deforest.m"
        transform_hlds__pd_info__pd_info_get_local_term_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &transform_hlds__deforest__LocalTermInfo0_26);
      }
#line 1894 "deforest.m"
      {
#line 1894 "deforest.m"
        transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &transform_hlds__deforest__PredInfo_27);
      }
#line 1895 "deforest.m"
      {
#line 1895 "deforest.m"
        hlds__hlds_module__module_info_get_globals_2_p_0((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, &transform_hlds__deforest__Globals_28);
      }
#line 1896 "deforest.m"
      {
#line 1896 "deforest.m"
        libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_28, (MR_Integer) 395, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29);
      }
#line 1898 "deforest.m"
      {
#line 1898 "deforest.m"
        hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__deforest__PredInfo_27, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__CallerMarkers_30);
      }
#line 1899 "deforest.m"
      {
#line 1899 "deforest.m"
        libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_28, (MR_Integer) 72, &transform_hlds__deforest__DebugPD_31);
      }
#line 1902 "deforest.m"
      {
#line 1902 "deforest.m"
        transform_hlds__deforest__deforest_call_9_p_0_4(&transform_hlds__deforest__env);
      }
#line 1959 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1932 "deforest.m"
        {
#line 1928 "deforest.m"
          MR_Word transform_hlds__deforest__V_58_58;
#line 1928 "deforest.m"
          MR_Word transform_hlds__deforest__V_60_60;
#line 1928 "deforest.m"
          MR_Word transform_hlds__deforest__V_61_61;
#line 1928 "deforest.m"
          MR_Word transform_hlds__deforest__V_62_62;
#line 1952 "deforest.m"
          MR_Word transform_hlds__deforest__LocalTermInfo_46;

#line 1931 "deforest.m"
          {
#line 1931 "deforest.m"
            transform_hlds__deforest__V_60_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1931 "deforest.m"
            MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_60_60, 0) = ((MR_Box) (transform_hlds__deforest__Name_21));
#line 1931 "deforest.m"
          }
#line 1931 "deforest.m"
          {
#line 1931 "deforest.m"
            transform_hlds__deforest__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1931 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_62_62, 0) = ((MR_Box) (transform_hlds__deforest__Arity_22));
#line 1931 "deforest.m"
          }
#line 1931 "deforest.m"
          {
#line 1931 "deforest.m"
            transform_hlds__deforest__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1931 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_61_61, 0) = ((MR_Box) (transform_hlds__deforest__V_62_62));
#line 1931 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1931 "deforest.m"
          }
#line 1931 "deforest.m"
          {
#line 1931 "deforest.m"
            transform_hlds__deforest__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1931 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_58_58, 0) = ((MR_Box) (transform_hlds__deforest__V_60_60));
#line 1931 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_58_58, 1) = ((MR_Box) (transform_hlds__deforest__V_61_61));
#line 1931 "deforest.m"
          }
#line 1929 "deforest.m"
          {
#line 1929 "deforest.m"
            transform_hlds__pd_debug__pd_debug_message_context_6_p_0(transform_hlds__deforest__DebugPD_31, transform_hlds__deforest__Context_25, (MR_String) "Found extra information for call to %s/%i\n", transform_hlds__deforest__V_58_58);
          }
#line 1934 "deforest.m"
          {
#line 1934 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__pd_term__local_check_5_p_0((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, transform_hlds__deforest__Goal0_15, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20, transform_hlds__deforest__LocalTermInfo0_26, &transform_hlds__deforest__LocalTermInfo_46);
          }
#line 1952 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1940 "deforest.m"
            {
#line 1940 "deforest.m"
              MR_Word transform_hlds__deforest__Goal1_47;
#line 1940 "deforest.m"
              MR_Word transform_hlds__deforest__Optimized_48;
#line 1940 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68;
#line 1940 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71;
#line 1940 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_72_72;

#line 1938 "deforest.m"
              {
#line 1938 "deforest.m"
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_31, (MR_String) "Local termination check succeeded\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 1941 "deforest.m"
              {
#line 1941 "deforest.m"
                transform_hlds__pd_info__pd_info_set_local_term_info_3_p_0(transform_hlds__deforest__LocalTermInfo_46, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68);
              }
#line 1942 "deforest.m"
              {
#line 1942 "deforest.m"
                transform_hlds__deforest__unfold_call_10_p_0((MR_Integer) 1, (MR_Integer) 1, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, transform_hlds__deforest__Goal0_15, &transform_hlds__deforest__Goal1_47, &transform_hlds__deforest__Optimized_48, transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71);
              }
#line 1947 "deforest.m"
#line 1947 "deforest.m"
              switch (transform_hlds__deforest__Optimized_48) {
#line 1947 "deforest.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1947 "deforest.m"
                case (MR_Integer) 0:
#line 1948 "deforest.m"
                  {
#line 1949 "deforest.m"
                    *transform_hlds__deforest__Goal_16 = transform_hlds__deforest__Goal1_47;
#line 1948 "deforest.m"
                    transform_hlds__deforest__STATE_VARIABLE_PDInfo_72_72 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71;
#line 1948 "deforest.m"
                  }
#line 1947 "deforest.m"
                  break;
#line 1947 "deforest.m"
                case (MR_Integer) 1:
#line 1946 "deforest.m"
                  {
#line 1946 "deforest.m"
                    transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Goal1_47, transform_hlds__deforest__Goal_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_72_72);
                  }
#line 1947 "deforest.m"
                  break;
#line 1947 "deforest.m"
              }
#line 1951 "deforest.m"
              {
#line 1951 "deforest.m"
                transform_hlds__pd_info__pd_info_set_local_term_info_3_p_0(transform_hlds__deforest__LocalTermInfo0_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_72_72, transform_hlds__deforest__STATE_VARIABLE_PDInfo_50);
#line 1951 "deforest.m"
                return;
              }
#line 1940 "deforest.m"
            }
#line 1952 "deforest.m"
          else
#line 1956 "deforest.m"
            {
#line 1954 "deforest.m"
              {
#line 1954 "deforest.m"
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_31, (MR_String) "Local termination check failed\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 1957 "deforest.m"
              *transform_hlds__deforest__Goal_16 = transform_hlds__deforest__Goal0_15;
#line 1956 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_50 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49;
#line 1956 "deforest.m"
            }
#line 1932 "deforest.m"
        }
#line 1959 "deforest.m"
      else
#line 1964 "deforest.m"
        {
#line 1960 "deforest.m"
          MR_Word transform_hlds__deforest__V_80_80;
#line 1960 "deforest.m"
          MR_Word transform_hlds__deforest__V_82_82;
#line 1960 "deforest.m"
          MR_Word transform_hlds__deforest__V_83_83;
#line 1960 "deforest.m"
          MR_Word transform_hlds__deforest__V_84_84;

#line 1963 "deforest.m"
          {
#line 1963 "deforest.m"
            transform_hlds__deforest__V_82_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "deforest.m"
            MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_82_82, 0) = ((MR_Box) (transform_hlds__deforest__Name_21));
#line 1963 "deforest.m"
          }
#line 1963 "deforest.m"
          {
#line 1963 "deforest.m"
            transform_hlds__deforest__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_84_84, 0) = ((MR_Box) (transform_hlds__deforest__Arity_22));
#line 1963 "deforest.m"
          }
#line 1963 "deforest.m"
          {
#line 1963 "deforest.m"
            transform_hlds__deforest__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_83_83, 0) = ((MR_Box) (transform_hlds__deforest__V_84_84));
#line 1963 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1963 "deforest.m"
          }
#line 1963 "deforest.m"
          {
#line 1963 "deforest.m"
            transform_hlds__deforest__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_80_80, 0) = ((MR_Box) (transform_hlds__deforest__V_82_82));
#line 1963 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_80_80, 1) = ((MR_Box) (transform_hlds__deforest__V_83_83));
#line 1963 "deforest.m"
          }
#line 1961 "deforest.m"
          {
#line 1961 "deforest.m"
            transform_hlds__pd_debug__pd_debug_message_context_6_p_0(transform_hlds__deforest__DebugPD_31, transform_hlds__deforest__Context_25, (MR_String) "No extra information for call to %s/%i\n", transform_hlds__deforest__V_80_80);
          }
#line 1965 "deforest.m"
          *transform_hlds__deforest__Goal_16 = transform_hlds__deforest__Goal0_15;
#line 1964 "deforest.m"
          *transform_hlds__deforest__STATE_VARIABLE_PDInfo_50 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49;
#line 1964 "deforest.m"
        }
#line 1883 "deforest.m"
    }
#line 1878 "deforest.m"
  }
#line 1878 "deforest.m"
}

#line 1856 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0_1(
#line 1856 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 1856 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1856 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1856 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 1856 "deforest.m"
{
#line 1856 "deforest.m"
  {
#line 1856 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 1856 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_HeadVar__3_3;

#line 1856 "deforest.m"
    {
#line 1856 "deforest.m"
      transform_hlds__pd_info__pd_info_update_goal_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_HeadVar__3_3);
    }
#line 1856 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__3_3));
#line 1856 "deforest.m"
  }
#line 1856 "deforest.m"
}

#line 1847 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0(
#line 1847 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_10,
#line 1847 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_11,
#line 1847 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend0_12,
#line 1847 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals0_13,
#line 1847 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrBranch_14,
#line 1847 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_15,
#line 1847 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_16,
#line 1847 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30,
#line 1847 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_31)
#line 1847 "deforest.m"
{
#line 1852 "deforest.m"
  {
#line 1852 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1852 "deforest.m"
    MR_Word transform_hlds__deforest__GoalToAppend_19;
#line 1852 "deforest.m"
    MR_Word transform_hlds__deforest__GoalList0_20;
#line 1852 "deforest.m"
    MR_Word transform_hlds__deforest__GoalListToAppend_21;
#line 1852 "deforest.m"
    MR_Word transform_hlds__deforest__Goals_22;
#line 1852 "deforest.m"
    MR_Word transform_hlds__deforest__SubNonLocals_23;
#line 1852 "deforest.m"
    MR_Word transform_hlds__deforest__NonLocals_24;
#line 1852 "deforest.m"
    MR_Word transform_hlds__deforest__Delta0_25;
#line 1852 "deforest.m"
    MR_Word transform_hlds__deforest__Delta_26;
#line 1852 "deforest.m"
    MR_Word transform_hlds__deforest__Detism_27;
#line 1852 "deforest.m"
    MR_Word transform_hlds__deforest__Purity_28;
#line 1852 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_29;
#line 1852 "deforest.m"
    MR_Word transform_hlds__deforest__V_37_37;
#line 1852 "deforest.m"
    MR_Word transform_hlds__deforest__V_38_38;
#line 1852 "deforest.m"
    MR_Word transform_hlds__deforest__V_39_39;
#line 1852 "deforest.m"
    MR_Word transform_hlds__deforest__V_41_41;

#line 1853 "deforest.m"
    {
#line 1853 "deforest.m"
      transform_hlds__deforest__succeeded = mercury__set__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__deforest__CurrBranch_14)), transform_hlds__deforest__Branches_15);
    }
#line 1859 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 1855 "deforest.m"
      {
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_18;
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__V_33_33;
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_35_35;
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr0_56;
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo0_57;
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr_58;
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo_59;
#line 1856 "deforest.m"
        MR_Box transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_34_34;

#line 1855 "deforest.m"
        {
#line 1855 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30, &transform_hlds__deforest__InstMap0_18);
        }
#line 1856 "deforest.m"
        {
#line 1856 "deforest.m"
          transform_hlds__deforest__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1856 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_33_33, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_10));
#line 1856 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_33_33, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_11));
#line 1856 "deforest.m"
        }
#line 1856 "deforest.m"
        {
#line 1856 "deforest.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0, (MR_Word) &transform_hlds__deforest_scalar_common_2[12], transform_hlds__deforest__V_33_33, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30)), &transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_34_34);
        }
#line 1856 "deforest.m"
        transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34 = ((MR_Word) transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_34_34);
#line 279 "deforest.m"
        transform_hlds__deforest__GoalExpr0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend0_12, (MR_Integer) 0)));
#line 279 "deforest.m"
        transform_hlds__deforest__GoalInfo0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend0_12, (MR_Integer) 1)));
#line 280 "deforest.m"
        {
#line 280 "deforest.m"
          transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_56, &transform_hlds__deforest__GoalExpr_58, transform_hlds__deforest__GoalInfo0_57, &transform_hlds__deforest__GoalInfo_59, transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_35_35);
        }
#line 281 "deforest.m"
        {
#line 281 "deforest.m"
          transform_hlds__deforest__GoalToAppend_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend_19, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_58));
#line 281 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend_19, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_59));
#line 281 "deforest.m"
        }
#line 1858 "deforest.m"
        {
#line 1858 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_18, transform_hlds__deforest__STATE_VARIABLE_PDInfo_35_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_31);
        }
#line 1855 "deforest.m"
      }
#line 1859 "deforest.m"
    else
#line 1860 "deforest.m"
      {
#line 1860 "deforest.m"
        transform_hlds__deforest__GoalToAppend_19 = transform_hlds__deforest__GoalToAppend0_12;
#line 1860 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_31 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30;
#line 1860 "deforest.m"
      }
#line 1862 "deforest.m"
    {
#line 1862 "deforest.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__deforest__Goal0_10, &transform_hlds__deforest__GoalList0_20);
    }
#line 1863 "deforest.m"
    {
#line 1863 "deforest.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__deforest__GoalToAppend_19, &transform_hlds__deforest__GoalListToAppend_21);
    }
#line 1864 "deforest.m"
    {
#line 1864 "deforest.m"
      transform_hlds__deforest__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_39_39, 0) = ((MR_Box) (transform_hlds__deforest__GoalListToAppend_21));
#line 1864 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1864 "deforest.m"
    }
#line 1864 "deforest.m"
    {
#line 1864 "deforest.m"
      transform_hlds__deforest__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_38_38, 0) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_11));
#line 1864 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_38_38, 1) = ((MR_Box) (transform_hlds__deforest__V_39_39));
#line 1864 "deforest.m"
    }
#line 1864 "deforest.m"
    {
#line 1864 "deforest.m"
      transform_hlds__deforest__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_37_37, 0) = ((MR_Box) (transform_hlds__deforest__GoalList0_20));
#line 1864 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_37_37, 1) = ((MR_Box) (transform_hlds__deforest__V_38_38));
#line 1864 "deforest.m"
    }
#line 1864 "deforest.m"
    {
#line 1864 "deforest.m"
      mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__V_37_37, &transform_hlds__deforest__Goals_22);
    }
#line 1866 "deforest.m"
    {
#line 1866 "deforest.m"
      hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__SubNonLocals_23);
    }
#line 1867 "deforest.m"
    {
#line 1867 "deforest.m"
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__NonLocals0_13, transform_hlds__deforest__SubNonLocals_23, &transform_hlds__deforest__NonLocals_24);
    }
#line 1868 "deforest.m"
    {
#line 1868 "deforest.m"
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__Delta0_25);
    }
#line 1869 "deforest.m"
    {
#line 1869 "deforest.m"
      hlds__instmap__instmap_delta_restrict_3_p_0(transform_hlds__deforest__NonLocals_24, transform_hlds__deforest__Delta0_25, &transform_hlds__deforest__Delta_26);
    }
#line 1870 "deforest.m"
    {
#line 1870 "deforest.m"
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__Detism_27);
    }
#line 1871 "deforest.m"
    {
#line 1871 "deforest.m"
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__Purity_28);
    }
#line 1872 "deforest.m"
    {
#line 1872 "deforest.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__deforest__NonLocals_24, transform_hlds__deforest__Delta_26, transform_hlds__deforest__Detism_27, transform_hlds__deforest__Purity_28, &transform_hlds__deforest__GoalInfo_29);
    }
#line 1873 "deforest.m"
    {
#line 1873 "deforest.m"
      transform_hlds__deforest__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1873 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_41_41, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1873 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_41_41, 2) = ((MR_Box) (transform_hlds__deforest__Goals_22));
#line 1873 "deforest.m"
    }
#line 1873 "deforest.m"
    {
#line 1873 "deforest.m"
      MR_Word base;
#line 1873 "deforest.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1873 "deforest.m"
      *transform_hlds__deforest__Goal_16 = base;
#line 1873 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__V_41_41));
#line 1873 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_29));
#line 1873 "deforest.m"
    }
#line 1852 "deforest.m"
  }
#line 1847 "deforest.m"
}

#line 1829 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_to_cases_10_p_0(
#line 1829 "deforest.m"
  MR_Word transform_hlds__deforest__Var_1,
#line 1829 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_2,
#line 1829 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend_3,
#line 1829 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_4,
#line 1829 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrCase_5,
#line 1829 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_6,
#line 1829 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__7_7,
#line 1829 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__8_8,
#line 1829 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9,
#line 1829 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_10)
#line 1829 "deforest.m"
{
#line 1833 "deforest.m"
  {
#line 1833 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 1833 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1833 "deforest.m"
      {
#line 1833 "deforest.m"
        *transform_hlds__deforest__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1833 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_10 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9;
#line 1833 "deforest.m"
      }
#line 1833 "deforest.m"
    else
#line 1835 "deforest.m"
      {
#line 1835 "deforest.m"
        MR_Word transform_hlds__deforest__Case0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__7_7, (MR_Integer) 0)));
#line 1835 "deforest.m"
        MR_Word transform_hlds__deforest__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__7_7, (MR_Integer) 1)));
#line 1835 "deforest.m"
        MR_Word transform_hlds__deforest__Case_28;
#line 1835 "deforest.m"
        MR_Word transform_hlds__deforest__Cases_29;
#line 1835 "deforest.m"
        MR_Word transform_hlds__deforest__MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_26, (MR_Integer) 0)));
#line 1835 "deforest.m"
        MR_Word transform_hlds__deforest__OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_26, (MR_Integer) 1)));
#line 1835 "deforest.m"
        MR_Word transform_hlds__deforest__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_26, (MR_Integer) 2)));
#line 1835 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_34;
#line 1835 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_35;
#line 1835 "deforest.m"
        MR_Integer transform_hlds__deforest__NextCase_36;
#line 1835 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_39_39;
#line 1835 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40;
#line 1835 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_42_42;

#line 1837 "deforest.m"
        {
#line 1837 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9, &transform_hlds__deforest__InstMap0_34);
        }
#line 1838 "deforest.m"
        {
#line 1838 "deforest.m"
          transform_hlds__pd_info__pd_info_bind_var_to_functors_5_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__MainConsId_31, transform_hlds__deforest__OtherConsIds_32, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_39_39);
        }
#line 1839 "deforest.m"
        {
#line 1839 "deforest.m"
          transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Goal0_33, transform_hlds__deforest__BetweenGoals_2, transform_hlds__deforest__GoalToAppend_3, transform_hlds__deforest__NonLocals_4, transform_hlds__deforest__CurrCase_5, transform_hlds__deforest__Branches_6, &transform_hlds__deforest__Goal_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_39_39, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40);
        }
#line 1841 "deforest.m"
        {
#line 1841 "deforest.m"
          transform_hlds__deforest__Case_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1841 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_28, 0) = ((MR_Box) (transform_hlds__deforest__MainConsId_31));
#line 1841 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_28, 1) = ((MR_Box) (transform_hlds__deforest__OtherConsIds_32));
#line 1841 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_28, 2) = ((MR_Box) (transform_hlds__deforest__Goal_35));
#line 1841 "deforest.m"
        }
#line 1842 "deforest.m"
        transform_hlds__deforest__NextCase_36 = (transform_hlds__deforest__CurrCase_5 + (MR_Integer) 1);
#line 1843 "deforest.m"
        {
#line 1843 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_34, transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_42_42);
        }
#line 1844 "deforest.m"
        {
#line 1844 "deforest.m"
          transform_hlds__deforest__append_goal_to_cases_10_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__BetweenGoals_2, transform_hlds__deforest__GoalToAppend_3, transform_hlds__deforest__NonLocals_4, transform_hlds__deforest__NextCase_36, transform_hlds__deforest__Branches_6, transform_hlds__deforest__Cases0_27, &transform_hlds__deforest__Cases_29, transform_hlds__deforest__STATE_VARIABLE_PDInfo_42_42, transform_hlds__deforest__STATE_VARIABLE_PDInfo_10);
        }
#line 1835 "deforest.m"
        {
#line 1835 "deforest.m"
          MR_Word base;
#line 1835 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1835 "deforest.m"
          *transform_hlds__deforest__HeadVar__8_8 = base;
#line 1835 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Case_28));
#line 1835 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Cases_29));
#line 1835 "deforest.m"
        }
#line 1835 "deforest.m"
      }
#line 1833 "deforest.m"
  }
#line 1829 "deforest.m"
}

#line 1814 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(
#line 1814 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_1,
#line 1814 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend_2,
#line 1814 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_3,
#line 1814 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrBranch_4,
#line 1814 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_5,
#line 1814 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__6_6,
#line 1814 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__7_7,
#line 1814 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
#line 1814 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9)
#line 1814 "deforest.m"
{
#line 1818 "deforest.m"
  {
#line 1818 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 1818 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1818 "deforest.m"
      {
#line 1818 "deforest.m"
        *transform_hlds__deforest__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1818 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_9 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8;
#line 1818 "deforest.m"
      }
#line 1818 "deforest.m"
    else
#line 1820 "deforest.m"
      {
#line 1820 "deforest.m"
        MR_Word transform_hlds__deforest__Goal0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__6_6, (MR_Integer) 0)));
#line 1820 "deforest.m"
        MR_Word transform_hlds__deforest__Goals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__6_6, (MR_Integer) 1)));
#line 1820 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_25;
#line 1820 "deforest.m"
        MR_Word transform_hlds__deforest__Goals_26;
#line 1820 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_28;
#line 1820 "deforest.m"
        MR_Integer transform_hlds__deforest__NextBranch_29;
#line 1820 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_32_32;
#line 1820 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;

#line 1821 "deforest.m"
        {
#line 1821 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__deforest__InstMap0_28);
        }
#line 1822 "deforest.m"
        {
#line 1822 "deforest.m"
          transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Goal0_23, transform_hlds__deforest__BetweenGoals_1, transform_hlds__deforest__GoalToAppend_2, transform_hlds__deforest__NonLocals_3, transform_hlds__deforest__CurrBranch_4, transform_hlds__deforest__Branches_5, &transform_hlds__deforest__Goal_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_32_32);
        }
#line 1824 "deforest.m"
        transform_hlds__deforest__NextBranch_29 = (transform_hlds__deforest__CurrBranch_4 + (MR_Integer) 1);
#line 1825 "deforest.m"
        {
#line 1825 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_28, transform_hlds__deforest__STATE_VARIABLE_PDInfo_32_32, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34);
        }
#line 1826 "deforest.m"
        {
#line 1826 "deforest.m"
          transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(transform_hlds__deforest__BetweenGoals_1, transform_hlds__deforest__GoalToAppend_2, transform_hlds__deforest__NonLocals_3, transform_hlds__deforest__NextBranch_29, transform_hlds__deforest__Branches_5, transform_hlds__deforest__Goals0_24, &transform_hlds__deforest__Goals_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34, transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);
        }
#line 1820 "deforest.m"
        {
#line 1820 "deforest.m"
          MR_Word base;
#line 1820 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1820 "deforest.m"
          *transform_hlds__deforest__HeadVar__7_7 = base;
#line 1820 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Goal_25));
#line 1820 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_26));
#line 1820 "deforest.m"
        }
#line 1820 "deforest.m"
      }
#line 1818 "deforest.m"
  }
#line 1814 "deforest.m"
}

#line 1741 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__push_goal_into_goal_8_p_0(
#line 1741 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_9,
#line 1741 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_10,
#line 1741 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_11,
#line 1741 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_12,
#line 1741 "deforest.m"
  MR_Word transform_hlds__deforest__LaterGoal_13,
#line 1741 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_14,
#line 1741 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87,
#line 1741 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_88)
#line 1741 "deforest.m"
{
#line 1746 "deforest.m"
  {
#line 1746 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__InstMap0_16;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierGoalExpr_17;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr_24;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__Delta0_66;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__LaterInfo_68;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__Delta1_69;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__Delta2_70;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__Delta_71;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__Detism0_72;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__Detism1_73;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__Detism_74;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__Purity0_75;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__Purity1_76;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__Purity_77;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_78;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__Goal2_79;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_80;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_81;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__SimplifyTasks0_82;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__SimpList0_83;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__SimpList_84;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__SimplifyTasks_85;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__Goal3_86;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__V_103_103;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110;
#line 1746 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_111_111;
#line 1748 "deforest.m"
    MR_Word transform_hlds__deforest__V_18_18;
#line 1786 "deforest.m"
    MR_Word transform_hlds__deforest__V_67_67;

#line 1747 "deforest.m"
    {
#line 1747 "deforest.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__InstMap0_16);
    }
#line 1748 "deforest.m"
    transform_hlds__deforest__EarlierGoalExpr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_11, (MR_Integer) 0)));
#line 1748 "deforest.m"
    transform_hlds__deforest__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_11, (MR_Integer) 1)));
#line 1755 "deforest.m"
#line 1755 "deforest.m"
    switch (MR_tag((MR_Word) transform_hlds__deforest__EarlierGoalExpr_17)) {
#line 1755 "deforest.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1755 "deforest.m"
      case (MR_Integer) 0:
#line 1781 "deforest.m"
        {
#line 1782 "deforest.m"
          {
#line 1782 "deforest.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.push_goal_into_goal\'/8", (MR_String) "unexpected goal type");
#line 1782 "deforest.m"
            return;
          }
#line 1781 "deforest.m"
        }
#line 1755 "deforest.m"
        break;
#line 1755 "deforest.m"
      case (MR_Integer) 1:
#line 1755 "deforest.m"
      case (MR_Integer) 2:
#line 1781 "deforest.m"
        {
#line 1782 "deforest.m"
          {
#line 1782 "deforest.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.push_goal_into_goal\'/8", (MR_String) "unexpected goal type");
#line 1782 "deforest.m"
            return;
          }
#line 1781 "deforest.m"
        }
#line 1755 "deforest.m"
        break;
#line 1755 "deforest.m"
      case (MR_Integer) 3:
#line 1755 "deforest.m"
#line 1755 "deforest.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 0)))) {
#line 1755 "deforest.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1755 "deforest.m"
          case (MR_Integer) 0:
#line 1755 "deforest.m"
          case (MR_Integer) 1:
#line 1755 "deforest.m"
          case (MR_Integer) 2:
#line 1755 "deforest.m"
          case (MR_Integer) 5:
#line 1755 "deforest.m"
          case (MR_Integer) 7:
#line 1781 "deforest.m"
            {
#line 1782 "deforest.m"
              {
#line 1782 "deforest.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.push_goal_into_goal\'/8", (MR_String) "unexpected goal type");
#line 1782 "deforest.m"
                return;
              }
#line 1781 "deforest.m"
            }
#line 1755 "deforest.m"
            break;
#line 1755 "deforest.m"
          case (MR_Integer) 3:
#line 1768 "deforest.m"
            {
#line 1768 "deforest.m"
              MR_Word transform_hlds__deforest__Disjuncts0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 1)));
#line 1768 "deforest.m"
              MR_Word transform_hlds__deforest__Disjuncts_36;

#line 1769 "deforest.m"
              {
#line 1769 "deforest.m"
                transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__NonLocals_9, (MR_Integer) 1, transform_hlds__deforest__DeforestInfo_10, transform_hlds__deforest__Disjuncts0_35, &transform_hlds__deforest__Disjuncts_36, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101);
              }
#line 1771 "deforest.m"
              {
#line 1771 "deforest.m"
                transform_hlds__deforest__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1771 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1771 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 1) = ((MR_Box) (transform_hlds__deforest__Disjuncts_36));
#line 1771 "deforest.m"
              }
#line 1768 "deforest.m"
            }
#line 1755 "deforest.m"
            break;
#line 1755 "deforest.m"
          case (MR_Integer) 4:
#line 1750 "deforest.m"
            {
#line 1750 "deforest.m"
              MR_Word transform_hlds__deforest__Var1_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 1)));
#line 1750 "deforest.m"
              MR_Word transform_hlds__deforest__CanFail1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 2)));
#line 1750 "deforest.m"
              MR_Word transform_hlds__deforest__Cases1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 3)));
#line 1750 "deforest.m"
              MR_Word transform_hlds__deforest__CaseNonLocals_22;
#line 1750 "deforest.m"
              MR_Word transform_hlds__deforest__Cases_23;

#line 1751 "deforest.m"
              {
#line 1751 "deforest.m"
                parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__Var1_19, transform_hlds__deforest__NonLocals_9, &transform_hlds__deforest__CaseNonLocals_22);
              }
#line 1752 "deforest.m"
              {
#line 1752 "deforest.m"
                transform_hlds__deforest__append_goal_to_cases_10_p_0(transform_hlds__deforest__Var1_19, transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__CaseNonLocals_22, (MR_Integer) 1, transform_hlds__deforest__DeforestInfo_10, transform_hlds__deforest__Cases1_21, &transform_hlds__deforest__Cases_23, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101);
              }
#line 1754 "deforest.m"
              {
#line 1754 "deforest.m"
                transform_hlds__deforest__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1754 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1754 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 1) = ((MR_Box) (transform_hlds__deforest__Var1_19));
#line 1754 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 2) = ((MR_Box) (transform_hlds__deforest__CanFail1_20));
#line 1754 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 3) = ((MR_Box) (transform_hlds__deforest__Cases_23));
#line 1754 "deforest.m"
              }
#line 1750 "deforest.m"
            }
#line 1755 "deforest.m"
            break;
#line 1755 "deforest.m"
          case (MR_Integer) 6:
#line 1756 "deforest.m"
            {
#line 1756 "deforest.m"
              MR_Word transform_hlds__deforest__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 1)));
#line 1756 "deforest.m"
              MR_Word transform_hlds__deforest__Cond_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 2)));
#line 1756 "deforest.m"
              MR_Word transform_hlds__deforest__Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 3)));
#line 1756 "deforest.m"
              MR_Word transform_hlds__deforest__Else0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 4)));
#line 1756 "deforest.m"
              MR_Word transform_hlds__deforest__CondInfo_30;
#line 1756 "deforest.m"
              MR_Word transform_hlds__deforest__CondNonLocals_31;
#line 1756 "deforest.m"
              MR_Word transform_hlds__deforest__ThenNonLocals_32;
#line 1756 "deforest.m"
              MR_Word transform_hlds__deforest__Then_33;
#line 1756 "deforest.m"
              MR_Word transform_hlds__deforest__Else_34;
#line 1756 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94;
#line 1756 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96;
#line 1756 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 1758 "deforest.m"
              MR_Word transform_hlds__deforest__V_29_29;

#line 1757 "deforest.m"
              {
#line 1757 "deforest.m"
                transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Cond_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94);
              }
#line 1758 "deforest.m"
              transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Cond_26, (MR_Integer) 0)));
#line 1758 "deforest.m"
              transform_hlds__deforest__CondInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Cond_26, (MR_Integer) 1)));
#line 1759 "deforest.m"
              {
#line 1759 "deforest.m"
                transform_hlds__deforest__CondNonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__CondInfo_30);
              }
#line 1760 "deforest.m"
              {
#line 1760 "deforest.m"
                parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__CondNonLocals_31, transform_hlds__deforest__NonLocals_9, &transform_hlds__deforest__ThenNonLocals_32);
              }
#line 1761 "deforest.m"
              {
#line 1761 "deforest.m"
                transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Then0_27, transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__ThenNonLocals_32, (MR_Integer) 1, transform_hlds__deforest__DeforestInfo_10, &transform_hlds__deforest__Then_33, transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96);
              }
#line 1763 "deforest.m"
              {
#line 1763 "deforest.m"
                transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
              }
#line 1764 "deforest.m"
              {
#line 1764 "deforest.m"
                transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Else0_28, transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__NonLocals_9, (MR_Integer) 2, transform_hlds__deforest__DeforestInfo_10, &transform_hlds__deforest__Else_34, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101);
              }
#line 1766 "deforest.m"
              {
#line 1766 "deforest.m"
                transform_hlds__deforest__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1766 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1766 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 1) = ((MR_Box) (transform_hlds__deforest__Vars_25));
#line 1766 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 2) = ((MR_Box) (transform_hlds__deforest__Cond_26));
#line 1766 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 3) = ((MR_Box) (transform_hlds__deforest__Then_33));
#line 1766 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 4) = ((MR_Box) (transform_hlds__deforest__Else_34));
#line 1766 "deforest.m"
              }
#line 1756 "deforest.m"
            }
#line 1755 "deforest.m"
            break;
#line 1755 "deforest.m"
        }
#line 1755 "deforest.m"
        break;
#line 1755 "deforest.m"
    }
#line 1784 "deforest.m"
    {
#line 1784 "deforest.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102);
    }
#line 1785 "deforest.m"
    {
#line 1785 "deforest.m"
      transform_hlds__deforest__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1785 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_103_103, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_11));
#line 1785 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_103_103, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_12));
#line 1785 "deforest.m"
    }
#line 1785 "deforest.m"
    {
#line 1785 "deforest.m"
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__deforest__V_103_103, &transform_hlds__deforest__Delta0_66);
    }
#line 1786 "deforest.m"
    transform_hlds__deforest__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_13, (MR_Integer) 0)));
#line 1786 "deforest.m"
    transform_hlds__deforest__LaterInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_13, (MR_Integer) 1)));
#line 1787 "deforest.m"
    {
#line 1787 "deforest.m"
      transform_hlds__deforest__Delta1_69 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__deforest__LaterInfo_68);
    }
#line 1788 "deforest.m"
    {
#line 1788 "deforest.m"
      hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(transform_hlds__deforest__Delta0_66, transform_hlds__deforest__Delta1_69, (MR_Integer) 2, &transform_hlds__deforest__Delta2_70);
    }
#line 1789 "deforest.m"
    {
#line 1789 "deforest.m"
      hlds__instmap__instmap_delta_restrict_3_p_0(transform_hlds__deforest__NonLocals_9, transform_hlds__deforest__Delta2_70, &transform_hlds__deforest__Delta_71);
    }
#line 1790 "deforest.m"
    {
#line 1790 "deforest.m"
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__deforest__V_103_103, &transform_hlds__deforest__Detism0_72);
    }
#line 1791 "deforest.m"
    {
#line 1791 "deforest.m"
      transform_hlds__deforest__Detism1_73 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__deforest__LaterInfo_68);
    }
#line 1792 "deforest.m"
    {
#line 1792 "deforest.m"
      parse_tree__prog_detism__det_conjunction_detism_3_p_0(transform_hlds__deforest__Detism0_72, transform_hlds__deforest__Detism1_73, &transform_hlds__deforest__Detism_74);
    }
#line 1793 "deforest.m"
    {
#line 1793 "deforest.m"
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__deforest__V_103_103, &transform_hlds__deforest__Purity0_75);
    }
#line 1794 "deforest.m"
    {
#line 1794 "deforest.m"
      transform_hlds__deforest__Purity1_76 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__deforest__LaterInfo_68);
    }
#line 1795 "deforest.m"
    {
#line 1795 "deforest.m"
      transform_hlds__deforest__Purity_77 = parse_tree__prog_data__worst_purity_2_f_0(transform_hlds__deforest__Purity0_75, transform_hlds__deforest__Purity1_76);
    }
#line 1796 "deforest.m"
    {
#line 1796 "deforest.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__deforest__NonLocals_9, transform_hlds__deforest__Delta_71, transform_hlds__deforest__Detism_74, transform_hlds__deforest__Purity_77, &transform_hlds__deforest__GoalInfo_78);
    }
#line 1797 "deforest.m"
    {
#line 1797 "deforest.m"
      transform_hlds__deforest__Goal2_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1797 "deforest.m"
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal2_79, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_24));
#line 1797 "deforest.m"
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal2_79, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_78));
#line 1797 "deforest.m"
    }
#line 1799 "deforest.m"
    {
#line 1799 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102, &transform_hlds__deforest__ModuleInfo_80);
    }
#line 1800 "deforest.m"
    {
#line 1800 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_80, &transform_hlds__deforest__Globals_81);
    }
#line 1801 "deforest.m"
    {
#line 1801 "deforest.m"
      check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, transform_hlds__deforest__Globals_81, &transform_hlds__deforest__SimplifyTasks0_82);
    }
#line 1802 "deforest.m"
    {
#line 1802 "deforest.m"
      transform_hlds__deforest__SimpList0_83 = check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(transform_hlds__deforest__SimplifyTasks0_82);
    }
#line 1805 "deforest.m"
    {
#line 1805 "deforest.m"
      transform_hlds__deforest__SimpList_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1805 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__SimpList_84, 0) = ((MR_Box) ((MR_Integer) 11));
#line 1805 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__SimpList_84, 1) = ((MR_Box) (transform_hlds__deforest__SimpList0_83));
#line 1805 "deforest.m"
    }
#line 1806 "deforest.m"
    {
#line 1806 "deforest.m"
      transform_hlds__deforest__SimplifyTasks_85 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0(transform_hlds__deforest__SimpList_84);
    }
#line 1807 "deforest.m"
    {
#line 1807 "deforest.m"
      transform_hlds__pd_util__pd_simplify_goal_5_p_0(transform_hlds__deforest__SimplifyTasks_85, transform_hlds__deforest__Goal2_79, &transform_hlds__deforest__Goal3_86, transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
    }
#line 1808 "deforest.m"
    {
#line 1808 "deforest.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110);
    }
#line 1811 "deforest.m"
    {
#line 1811 "deforest.m"
      transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Goal3_86, transform_hlds__deforest__Goal_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_111_111);
    }
#line 1812 "deforest.m"
    {
#line 1812 "deforest.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_111_111, transform_hlds__deforest__STATE_VARIABLE_PDInfo_88);
#line 1812 "deforest.m"
      return;
    }
#line 1746 "deforest.m"
  }
#line 1741 "deforest.m"
}

#line 1659 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__reorder_conj_5_p_0(
#line 1659 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo0_6,
#line 1659 "deforest.m"
  MR_Word * transform_hlds__deforest__DeforestInfo_7,
#line 1659 "deforest.m"
  MR_Word * transform_hlds__deforest__BeforeIrrelevant_8,
#line 1659 "deforest.m"
  MR_Word * transform_hlds__deforest__AfterIrrelevant_9,
#line 1659 "deforest.m"
  MR_Word transform_hlds__deforest__PDInfo_10)
#line 1659 "deforest.m"
{
#line 1663 "deforest.m"
  {
#line 1663 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1663 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_11;
#line 1663 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_12;
#line 1663 "deforest.m"
    MR_Word transform_hlds__deforest__DebugPD_13;
#line 1663 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierGoal_15;
#line 1663 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierBranchInfo_16;
#line 1663 "deforest.m"
    MR_Word transform_hlds__deforest__BetweenGoals0_17;
#line 1663 "deforest.m"
    MR_Word transform_hlds__deforest__LaterGoal_18;
#line 1663 "deforest.m"
    MR_Word transform_hlds__deforest__LaterBranchInfo_19;
#line 1663 "deforest.m"
    MR_Word transform_hlds__deforest__DeforestBranches_20;
#line 1663 "deforest.m"
    MR_Word transform_hlds__deforest__FullyStrict_21;
#line 1663 "deforest.m"
    MR_Word transform_hlds__deforest__RevBetweenGoals1_22;
#line 1663 "deforest.m"
    MR_Word transform_hlds__deforest__RevBeforeIrrelevant_23;
#line 1663 "deforest.m"
    MR_Word transform_hlds__deforest__BetweenGoals_24;

#line 1664 "deforest.m"
    {
#line 1664 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__PDInfo_10, &transform_hlds__deforest__ModuleInfo_11);
    }
#line 1665 "deforest.m"
    {
#line 1665 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_11, &transform_hlds__deforest__Globals_12);
    }
#line 1666 "deforest.m"
    {
#line 1666 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_12, (MR_Integer) 72, &transform_hlds__deforest__DebugPD_13);
    }
#line 1668 "deforest.m"
    {
#line 1668 "deforest.m"
      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_13, (MR_String) "Reordering conjunction\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 1670 "deforest.m"
    transform_hlds__deforest__EarlierGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 0)));
#line 1670 "deforest.m"
    transform_hlds__deforest__EarlierBranchInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 1)));
#line 1670 "deforest.m"
    transform_hlds__deforest__BetweenGoals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 2)));
#line 1670 "deforest.m"
    transform_hlds__deforest__LaterGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 3)));
#line 1670 "deforest.m"
    transform_hlds__deforest__LaterBranchInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 4)));
#line 1670 "deforest.m"
    transform_hlds__deforest__DeforestBranches_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 5)));
#line 1673 "deforest.m"
    {
#line 1673 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_12, (MR_Integer) 166, &transform_hlds__deforest__FullyStrict_21);
    }
#line 1674 "deforest.m"
    {
#line 1674 "deforest.m"
      transform_hlds__deforest__move_goals__ho2_9_p_0(transform_hlds__deforest__ModuleInfo_11, transform_hlds__deforest__FullyStrict_21, transform_hlds__deforest__BetweenGoals0_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__RevBetweenGoals1_22, transform_hlds__deforest__EarlierGoal_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__RevBeforeIrrelevant_23);
    }
#line 1677 "deforest.m"
    {
#line 1677 "deforest.m"
      transform_hlds__deforest__move_goals__ho1_9_p_0(transform_hlds__deforest__ModuleInfo_11, transform_hlds__deforest__FullyStrict_21, transform_hlds__deforest__RevBetweenGoals1_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__BetweenGoals_24, transform_hlds__deforest__LaterGoal_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__deforest__AfterIrrelevant_9);
    }
#line 1681 "deforest.m"
    {
#line 1681 "deforest.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__RevBeforeIrrelevant_23, transform_hlds__deforest__BeforeIrrelevant_8);
    }
#line 1682 "deforest.m"
    {
#line 1682 "deforest.m"
      MR_Word base;
#line 1682 "deforest.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1682 "deforest.m"
      *transform_hlds__deforest__DeforestInfo_7 = base;
#line 1682 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_15));
#line 1682 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__EarlierBranchInfo_16));
#line 1682 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_24));
#line 1682 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__deforest__LaterGoal_18));
#line 1682 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__deforest__LaterBranchInfo_19));
#line 1682 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__deforest__DeforestBranches_20));
#line 1682 "deforest.m"
    }
#line 1663 "deforest.m"
  }
#line 1659 "deforest.m"
}

#line 1632 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0_1(
#line 1632 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 1632 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1632 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1632 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 1632 "deforest.m"
{
#line 1632 "deforest.m"
  {
#line 1632 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 1632 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_HeadVar__3_31;

#line 1632 "deforest.m"
    {
#line 1632 "deforest.m"
      transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1632__1_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_HeadVar__3_31);
    }
#line 1632 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__3_31));
#line 1632 "deforest.m"
  }
#line 1632 "deforest.m"
}

#line 1624 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(
#line 1624 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_0_27,
#line 1624 "deforest.m"
  MR_Word transform_hlds__deforest__RevBeforeGoals_11,
#line 1624 "deforest.m"
  MR_Word transform_hlds__deforest__BeforeIrrelevant_12,
#line 1624 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_13,
#line 1624 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_14,
#line 1624 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_15,
#line 1624 "deforest.m"
  MR_Word transform_hlds__deforest__AfterIrrelevant_16,
#line 1624 "deforest.m"
  MR_Word transform_hlds__deforest__AfterGoals_17,
#line 1624 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_28)
#line 1624 "deforest.m"
{
#line 1631 "deforest.m"
  {
#line 1631 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1631 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_45_45 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1631 "deforest.m"
    MR_Word transform_hlds__deforest__TypeInfo_46_46 = (MR_Word) &transform_hlds__deforest_scalar_common_1[5];
#line 1631 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_47_47;
#line 1631 "deforest.m"
    MR_Word transform_hlds__deforest__AddGoalNonLocals_19 = (MR_Word) &transform_hlds__deforest_scalar_common_2[11];
#line 1631 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_32_32;
#line 1631 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_33_33;
#line 1631 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_34_34;
#line 1631 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_35_35;
#line 1631 "deforest.m"
    MR_Word transform_hlds__deforest__V_36_36;
#line 1631 "deforest.m"
    MR_Word transform_hlds__deforest__V_37_37;
#line 1631 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38;
#line 1631 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39;
#line 1637 "deforest.m"
    MR_Box transform_hlds__deforest__conv1_STATE_VARIABLE_NonLocals_32_32;
#line 1638 "deforest.m"
    MR_Box transform_hlds__deforest__conv2_STATE_VARIABLE_NonLocals_33_33;
#line 1639 "deforest.m"
    MR_Box transform_hlds__deforest__conv3_STATE_VARIABLE_NonLocals_34_34;
#line 1640 "deforest.m"
    MR_Box transform_hlds__deforest__conv4_STATE_VARIABLE_NonLocals_35_35;
#line 1642 "deforest.m"
    MR_Box transform_hlds__deforest__conv5_STATE_VARIABLE_SubConjNonLocals_38_38;

#line 1637 "deforest.m"
    {
#line 1637 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__RevBeforeGoals_11, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_0_27)), &transform_hlds__deforest__conv1_STATE_VARIABLE_NonLocals_32_32);
    }
#line 1637 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_32_32 = ((MR_Word) transform_hlds__deforest__conv1_STATE_VARIABLE_NonLocals_32_32);
#line 1638 "deforest.m"
    {
#line 1638 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__BeforeIrrelevant_12, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_32_32)), &transform_hlds__deforest__conv2_STATE_VARIABLE_NonLocals_33_33);
    }
#line 1638 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_33_33 = ((MR_Word) transform_hlds__deforest__conv2_STATE_VARIABLE_NonLocals_33_33);
#line 1639 "deforest.m"
    {
#line 1639 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__AfterIrrelevant_16, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_33_33)), &transform_hlds__deforest__conv3_STATE_VARIABLE_NonLocals_34_34);
    }
#line 1639 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_34_34 = ((MR_Word) transform_hlds__deforest__conv3_STATE_VARIABLE_NonLocals_34_34);
#line 1640 "deforest.m"
    {
#line 1640 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__AfterGoals_17, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_34_34)), &transform_hlds__deforest__conv4_STATE_VARIABLE_NonLocals_35_35);
    }
#line 1640 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_35_35 = ((MR_Word) transform_hlds__deforest__conv4_STATE_VARIABLE_NonLocals_35_35);
#line 1642 "deforest.m"
    {
#line 1642 "deforest.m"
      transform_hlds__deforest__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1642 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_36_36, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_13));
#line 1642 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_36_36, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_14));
#line 1642 "deforest.m"
    }
#line 5930 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1643 "deforest.m"
    {
#line 1643 "deforest.m"
      transform_hlds__deforest__V_37_37 = parse_tree__set_of_var__init_0_f_0(transform_hlds__deforest__TypeCtorInfo_47_47);
    }
#line 1642 "deforest.m"
    {
#line 1642 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__V_36_36, ((MR_Box) (transform_hlds__deforest__V_37_37)), &transform_hlds__deforest__conv5_STATE_VARIABLE_SubConjNonLocals_38_38);
    }
#line 1642 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38 = ((MR_Word) transform_hlds__deforest__conv5_STATE_VARIABLE_SubConjNonLocals_38_38);
#line 1647 "deforest.m"
    if ((transform_hlds__deforest__MaybeLaterGoal_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1648 "deforest.m"
      transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39 = transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38;
#line 1647 "deforest.m"
    else
#line 1645 "deforest.m"
      {
#line 1645 "deforest.m"
        MR_Word transform_hlds__deforest__LaterGoal_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeLaterGoal_15, (MR_Integer) 0)));
#line 1645 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_26, (MR_Integer) 1)));
#line 1645 "deforest.m"
        MR_Word transform_hlds__deforest__GoalNonLocals_72;
#line 1633 "deforest.m"
        MR_Word transform_hlds__deforest__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_26, (MR_Integer) 0)));

#line 1634 "deforest.m"
        {
#line 1634 "deforest.m"
          transform_hlds__deforest__GoalNonLocals_72 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__GoalInfo_71);
        }
#line 1635 "deforest.m"
        {
#line 1635 "deforest.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__GoalNonLocals_72, transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38, &transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39);
        }
#line 1645 "deforest.m"
      }
#line 1650 "deforest.m"
    {
#line 1650 "deforest.m"
      parse_tree__set_of_var__intersect_3_p_0(transform_hlds__deforest__TypeCtorInfo_47_47, transform_hlds__deforest__STATE_VARIABLE_NonLocals_35_35, transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39, transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_28);
#line 1650 "deforest.m"
      return;
    }
#line 1631 "deforest.m"
  }
#line 1624 "deforest.m"
}

#line 1610 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(
#line 1610 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals0_8,
#line 1610 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_9,
#line 1610 "deforest.m"
  MR_Word transform_hlds__deforest__RevBeforeGoals_10,
#line 1610 "deforest.m"
  MR_Word transform_hlds__deforest__BeforeIrrelevant_11,
#line 1610 "deforest.m"
  MR_Word transform_hlds__deforest__AfterIrrelevant_12,
#line 1610 "deforest.m"
  MR_Word transform_hlds__deforest__AfterGoals0_13,
#line 1610 "deforest.m"
  MR_Word * transform_hlds__deforest__SubConjNonLocals_14)
#line 1610 "deforest.m"
{
#line 1616 "deforest.m"
  {
#line 1616 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1616 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 0)));
#line 1616 "deforest.m"
    MR_Word transform_hlds__deforest__BetweenGoals_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 2)));
#line 1616 "deforest.m"
    MR_Word transform_hlds__deforest__LaterGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 3)));
#line 1616 "deforest.m"
    MR_Word transform_hlds__deforest__AfterGoals_21;
#line 1616 "deforest.m"
    MR_Word transform_hlds__deforest__V_22_22;
#line 1617 "deforest.m"
    MR_Word transform_hlds__deforest__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 1)));
#line 1617 "deforest.m"
    MR_Word transform_hlds__deforest__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 4)));
#line 1617 "deforest.m"
    MR_Word transform_hlds__deforest__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 5)));

#line 1619 "deforest.m"
    {
#line 1619 "deforest.m"
      mercury__assoc_list__keys_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[3], transform_hlds__deforest__AfterGoals0_13, &transform_hlds__deforest__AfterGoals_21);
    }
#line 1621 "deforest.m"
    {
#line 1621 "deforest.m"
      transform_hlds__deforest__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1621 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_22_22, 0) = ((MR_Box) (transform_hlds__deforest__LaterGoal_18));
#line 1621 "deforest.m"
    }
#line 1620 "deforest.m"
    {
#line 1620 "deforest.m"
      transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(transform_hlds__deforest__NonLocals0_8, transform_hlds__deforest__RevBeforeGoals_10, transform_hlds__deforest__BeforeIrrelevant_11, transform_hlds__deforest__EarlierGoal_15, transform_hlds__deforest__BetweenGoals_17, transform_hlds__deforest__V_22_22, transform_hlds__deforest__AfterIrrelevant_12, transform_hlds__deforest__AfterGoals_21, transform_hlds__deforest__SubConjNonLocals_14);
#line 1620 "deforest.m"
      return;
    }
#line 1616 "deforest.m"
  }
#line 1610 "deforest.m"
}

#line 986 "deforest.m"
static MR_Word MR_CALL 
transform_hlds__deforest__is_improvement_worth_while_4_f_0(
#line 986 "deforest.m"
  MR_Word transform_hlds__deforest__PDInfo_6,
#line 986 "deforest.m"
  MR_Word transform_hlds__deforest__Optimized0_7,
#line 986 "deforest.m"
  MR_Integer transform_hlds__deforest__CostDelta0_8,
#line 986 "deforest.m"
  MR_Integer transform_hlds__deforest__SizeDelta0_9)
#line 986 "deforest.m"
{
#line 989 "deforest.m"
  {
#line 989 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 989 "deforest.m"
    MR_Word transform_hlds__deforest__Optimized_10;
#line 989 "deforest.m"
    MR_Integer transform_hlds__deforest__CostDelta_11;
#line 989 "deforest.m"
    MR_Integer transform_hlds__deforest__SizeDelta_12;
#line 989 "deforest.m"
    MR_Integer transform_hlds__deforest__Improvement_13;
#line 989 "deforest.m"
    MR_Integer transform_hlds__deforest__SizeDifference_14;
#line 989 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_15;
#line 989 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_16;
#line 989 "deforest.m"
    MR_Integer transform_hlds__deforest__Factor_17;
#line 989 "deforest.m"
    MR_Word transform_hlds__deforest__DebugPD_18;
#line 2171 "deforest.m"
    MR_Integer transform_hlds__deforest__V_43_43;

#line 990 "deforest.m"
    {
#line 990 "deforest.m"
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__PDInfo_6, &transform_hlds__deforest__CostDelta_11);
    }
#line 991 "deforest.m"
    {
#line 991 "deforest.m"
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__PDInfo_6, &transform_hlds__deforest__SizeDelta_12);
    }
#line 992 "deforest.m"
    transform_hlds__deforest__Improvement_13 = (transform_hlds__deforest__CostDelta_11 - transform_hlds__deforest__CostDelta0_8);
#line 993 "deforest.m"
    transform_hlds__deforest__SizeDifference_14 = (transform_hlds__deforest__SizeDelta_12 - transform_hlds__deforest__SizeDelta0_9);
#line 995 "deforest.m"
    {
#line 995 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__PDInfo_6, &transform_hlds__deforest__ModuleInfo_15);
    }
#line 996 "deforest.m"
    {
#line 996 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_15, &transform_hlds__deforest__Globals_16);
    }
#line 997 "deforest.m"
    {
#line 997 "deforest.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_16, (MR_Integer) 393, &transform_hlds__deforest__Factor_17);
    }
#line 998 "deforest.m"
    {
#line 998 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_16, (MR_Integer) 72, &transform_hlds__deforest__DebugPD_18);
    }
#line 1000 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__Optimized0_7 == (MR_Integer) 1);
#line 1000 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 1000 "deforest.m"
      {
#line 2171 "deforest.m"
        transform_hlds__deforest__V_43_43 = (MR_Integer) 5;
#line 2171 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__SizeDifference_14 <= transform_hlds__deforest__V_43_43);
#line 2174 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2173 "deforest.m"
          {
#line 2173 "deforest.m"
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__Improvement_13 > (MR_Integer) 0);
#line 2173 "deforest.m"
          }
#line 2174 "deforest.m"
        else
#line 2178 "deforest.m"
          {
#line 2178 "deforest.m"
            MR_Integer transform_hlds__deforest__ExpectedCostDelta_41;
#line 2178 "deforest.m"
            MR_Integer transform_hlds__deforest__FudgedCostDelta_42;
#line 2178 "deforest.m"
            MR_Integer transform_hlds__deforest__V_45_45;
#line 2178 "deforest.m"
            MR_Integer transform_hlds__deforest__V_46_46;
#line 2178 "deforest.m"
            MR_Integer transform_hlds__deforest__V_48_48;

#line 2178 "deforest.m"
            {
#line 2178 "deforest.m"
              transform_hlds__deforest__V_48_48 = transform_hlds__pd_cost__cost_of_heap_incr_0_f_0();
            }
#line 2178 "deforest.m"
            transform_hlds__deforest__V_46_46 = ((MR_Integer) 1000 * transform_hlds__deforest__V_48_48);
#line 2178 "deforest.m"
            transform_hlds__deforest__V_45_45 = (transform_hlds__deforest__V_46_46 * transform_hlds__deforest__SizeDifference_14);
#line 2178 "deforest.m"
            {
#line 2178 "deforest.m"
              transform_hlds__deforest__ExpectedCostDelta_41 = mercury__int__f_47_47_2_f_0(transform_hlds__deforest__V_45_45, (MR_Integer) 3);
            }
#line 2179 "deforest.m"
            transform_hlds__deforest__FudgedCostDelta_42 = (transform_hlds__deforest__Improvement_13 * transform_hlds__deforest__Factor_17);
#line 2180 "deforest.m"
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__FudgedCostDelta_42 >= transform_hlds__deforest__ExpectedCostDelta_41);
#line 2178 "deforest.m"
          }
#line 1000 "deforest.m"
      }
#line 1009 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 1003 "deforest.m"
      {
#line 1004 "deforest.m"
        MR_Word transform_hlds__deforest__V_24_24;
#line 1004 "deforest.m"
        MR_Word transform_hlds__deforest__V_26_26;
#line 1004 "deforest.m"
        MR_Word transform_hlds__deforest__V_27_27;
#line 1004 "deforest.m"
        MR_Word transform_hlds__deforest__V_28_28;

#line 1003 "deforest.m"
        transform_hlds__deforest__Optimized_10 = (MR_Integer) 1;
#line 1007 "deforest.m"
        {
#line 1007 "deforest.m"
          transform_hlds__deforest__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_26_26, 0) = ((MR_Box) (transform_hlds__deforest__Improvement_13));
#line 1007 "deforest.m"
        }
#line 1007 "deforest.m"
        {
#line 1007 "deforest.m"
          transform_hlds__deforest__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_28_28, 0) = ((MR_Box) (transform_hlds__deforest__SizeDifference_14));
#line 1007 "deforest.m"
        }
#line 1007 "deforest.m"
        {
#line 1007 "deforest.m"
          transform_hlds__deforest__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_27_27, 0) = ((MR_Box) (transform_hlds__deforest__V_28_28));
#line 1007 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1007 "deforest.m"
        }
#line 1007 "deforest.m"
        {
#line 1007 "deforest.m"
          transform_hlds__deforest__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_24_24, 0) = ((MR_Box) (transform_hlds__deforest__V_26_26));
#line 1007 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_24_24, 1) = ((MR_Box) (transform_hlds__deforest__V_27_27));
#line 1007 "deforest.m"
        }
#line 1005 "deforest.m"
        {
#line 1005 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Enough improvement: cost(%i) size(%i)\n", transform_hlds__deforest__V_24_24);
        }
#line 1003 "deforest.m"
      }
#line 1009 "deforest.m"
    else
#line 1010 "deforest.m"
      {
#line 1011 "deforest.m"
        MR_Word transform_hlds__deforest__V_32_32;
#line 1011 "deforest.m"
        MR_Word transform_hlds__deforest__V_34_34;
#line 1011 "deforest.m"
        MR_Word transform_hlds__deforest__V_35_35;
#line 1011 "deforest.m"
        MR_Word transform_hlds__deforest__V_36_36;

#line 1010 "deforest.m"
        transform_hlds__deforest__Optimized_10 = (MR_Integer) 0;
#line 1014 "deforest.m"
        {
#line 1014 "deforest.m"
          transform_hlds__deforest__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_34_34, 0) = ((MR_Box) (transform_hlds__deforest__Improvement_13));
#line 1014 "deforest.m"
        }
#line 1014 "deforest.m"
        {
#line 1014 "deforest.m"
          transform_hlds__deforest__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_36_36, 0) = ((MR_Box) (transform_hlds__deforest__SizeDifference_14));
#line 1014 "deforest.m"
        }
#line 1014 "deforest.m"
        {
#line 1014 "deforest.m"
          transform_hlds__deforest__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_35_35, 0) = ((MR_Box) (transform_hlds__deforest__V_36_36));
#line 1014 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "deforest.m"
        }
#line 1014 "deforest.m"
        {
#line 1014 "deforest.m"
          transform_hlds__deforest__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_32_32, 0) = ((MR_Box) (transform_hlds__deforest__V_34_34));
#line 1014 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_32_32, 1) = ((MR_Box) (transform_hlds__deforest__V_35_35));
#line 1014 "deforest.m"
        }
#line 1012 "deforest.m"
        {
#line 1012 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Not enough improvement: cost(%i) size(%i)\n", transform_hlds__deforest__V_32_32);
        }
#line 1010 "deforest.m"
      }
#line 989 "deforest.m"
    return transform_hlds__deforest__Optimized_10;
#line 989 "deforest.m"
  }
#line 986 "deforest.m"
}

#line 891 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_1(
#line 891 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 891 "deforest.m"
{
#line 891 "deforest.m"
  {
#line 891 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 891 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_0, 1);
#line 891 "deforest.m"
  }
#line 891 "deforest.m"
}

#line 891 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_2(
#line 891 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 891 "deforest.m"
{
#line 891 "deforest.m"
  {
#line 891 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 891 "deforest.m"
    {
#line 898 "deforest.m"
      MR_Word transform_hlds__deforest__V_35_35;

#line 898 "deforest.m"
      {
#line 898 "deforest.m"
        hlds__hlds_module__module_info_pred_proc_info_5_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_23, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_24, &transform_hlds__deforest__V_35_35, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_36);
      }
#line 900 "deforest.m"
      {
#line 900 "deforest.m"
        hlds__hlds_pred__proc_info_get_goal_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_36, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_37);
      }
#line 901 "deforest.m"
      {
#line 901 "deforest.m"
        hlds__goal_util__goal_size_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_37, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_38);
      }
#line 902 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19 == (MR_Integer) -1);
#line 902 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 891 "deforest.m"
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 891 "deforest.m"
        {
#line 903 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_38 > (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19);
#line 903 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 903 "deforest.m"
            {
#line 903 "deforest.m"
              transform_hlds__deforest__can_optimize_conj_6_p_0_1(transform_hlds__deforest__env_ptr);
#line 903 "deforest.m"
              return;
            }
#line 891 "deforest.m"
        }
#line 891 "deforest.m"
    }
#line 891 "deforest.m"
  }
#line 891 "deforest.m"
}

#line 891 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_3(
#line 891 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 891 "deforest.m"
{
#line 891 "deforest.m"
  {
#line 891 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 891 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_0) == 0)
#line 891 "deforest.m"
      {
#line 891 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19 == (MR_Integer) -1);
#line 891 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 891 "deforest.m"
        if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 891 "deforest.m"
          {
#line 893 "deforest.m"
            {
#line 893 "deforest.m"
              MR_Word transform_hlds__deforest__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 0)));
#line 893 "deforest.m"
              MR_Word transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 1)));
#line 893 "deforest.m"
              MR_Word transform_hlds__deforest__V_25_25;
#line 893 "deforest.m"
              MR_Word transform_hlds__deforest__V_26_26;
#line 893 "deforest.m"
              MR_Word transform_hlds__deforest__V_27_27;
#line 893 "deforest.m"
              MR_Word transform_hlds__deforest__V_28_28;

#line 893 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_70_70)) == (MR_mktag((MR_Integer) 2)));
#line 893 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 893 "deforest.m"
                {
#line 893 "deforest.m"
                  {
#line 893 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 0)));
#line 893 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 1)));
#line 893 "deforest.m"
                    transform_hlds__deforest__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 2)));
#line 893 "deforest.m"
                    transform_hlds__deforest__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 3)));
#line 893 "deforest.m"
                    transform_hlds__deforest__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 4)));
#line 893 "deforest.m"
                    transform_hlds__deforest__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_70_70, (MR_Integer) 5)));
#line 893 "deforest.m"
                  }
#line 893 "deforest.m"
                  {
#line 893 "deforest.m"
                    transform_hlds__deforest__can_optimize_conj_6_p_0_2(transform_hlds__deforest__env_ptr);
                  }
#line 893 "deforest.m"
                }
#line 893 "deforest.m"
            }
#line 895 "deforest.m"
            {
#line 895 "deforest.m"
              MR_Word transform_hlds__deforest__V_68_68;
#line 895 "deforest.m"
              MR_Word transform_hlds__deforest__V_69_69;
#line 896 "deforest.m"
              MR_Word transform_hlds__deforest__V_34_34;
#line 896 "deforest.m"
              MR_Word transform_hlds__deforest__V_30_30;
#line 896 "deforest.m"
              MR_Word transform_hlds__deforest__V_31_31;
#line 896 "deforest.m"
              MR_Word transform_hlds__deforest__V_32_32;
#line 896 "deforest.m"
              MR_Word transform_hlds__deforest__V_33_33;

#line 895 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
#line 895 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 895 "deforest.m"
                {
#line 895 "deforest.m"
                  transform_hlds__deforest__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
#line 895 "deforest.m"
                  {
#line 896 "deforest.m"
                    transform_hlds__deforest__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_68_68, (MR_Integer) 0)));
#line 896 "deforest.m"
                    transform_hlds__deforest__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_68_68, (MR_Integer) 1)));
#line 896 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_69_69)) == (MR_mktag((MR_Integer) 2)));
#line 896 "deforest.m"
                    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 896 "deforest.m"
                      {
#line 896 "deforest.m"
                        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 0)));
#line 896 "deforest.m"
                        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 1)));
#line 896 "deforest.m"
                        transform_hlds__deforest__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 2)));
#line 896 "deforest.m"
                        transform_hlds__deforest__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 3)));
#line 896 "deforest.m"
                        transform_hlds__deforest__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 4)));
#line 896 "deforest.m"
                        transform_hlds__deforest__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_69_69, (MR_Integer) 5)));
#line 896 "deforest.m"
                      }
#line 895 "deforest.m"
                  }
#line 895 "deforest.m"
                }
#line 895 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 895 "deforest.m"
                {
#line 895 "deforest.m"
                  transform_hlds__deforest__can_optimize_conj_6_p_0_2(transform_hlds__deforest__env_ptr);
                }
#line 895 "deforest.m"
            }
#line 891 "deforest.m"
          }
#line 891 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
#line 891 "deforest.m"
      }
#line 891 "deforest.m"
    else
#line 891 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
#line 891 "deforest.m"
  }
#line 891 "deforest.m"
}

#line 918 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_4(
#line 918 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 918 "deforest.m"
{
#line 918 "deforest.m"
  {
#line 918 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 918 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1, 1);
#line 918 "deforest.m"
  }
#line 918 "deforest.m"
}

#line 918 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_5(
#line 918 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 918 "deforest.m"
{
#line 918 "deforest.m"
  {
#line 918 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 924 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__InlinePromisedPure_48 = (MR_Integer) 0;
#line 925 "deforest.m"
    {
#line 925 "deforest.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredInfo_12, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CallerMarkers_49);
    }
#line 926 "deforest.m"
    {
#line 926 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = transform_hlds__inlining__can_inline_proc_6_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_97, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_98, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_40, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__InlinePromisedPure_48, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CallerMarkers_49, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14);
    }
#line 926 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 926 "deforest.m"
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 926 "deforest.m"
      {
#line 926 "deforest.m"
        transform_hlds__deforest__can_optimize_conj_6_p_0_4(transform_hlds__deforest__env_ptr);
#line 926 "deforest.m"
        return;
      }
#line 918 "deforest.m"
  }
#line 918 "deforest.m"
}

#line 918 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_6(
#line 918 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 918 "deforest.m"
{
#line 918 "deforest.m"
  {
#line 918 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 918 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1) == 0)
#line 918 "deforest.m"
      {
#line 912 "deforest.m"
        {
#line 912 "deforest.m"
          MR_Word transform_hlds__deforest__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 0)));
#line 913 "deforest.m"
          MR_Word transform_hlds__deforest__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 1)));
#line 913 "deforest.m"
          MR_Word transform_hlds__deforest__V_39_39;
#line 913 "deforest.m"
          MR_Word transform_hlds__deforest__V_41_41;
#line 913 "deforest.m"
          MR_Word transform_hlds__deforest__V_42_42;

#line 913 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_77_77)) == (MR_mktag((MR_Integer) 2)));
#line 913 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 913 "deforest.m"
            {
#line 913 "deforest.m"
              {
#line 913 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 0)));
#line 913 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_98 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 1)));
#line 913 "deforest.m"
                transform_hlds__deforest__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 2)));
#line 913 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 3)));
#line 913 "deforest.m"
                transform_hlds__deforest__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 4)));
#line 913 "deforest.m"
                transform_hlds__deforest__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_77_77, (MR_Integer) 5)));
#line 913 "deforest.m"
              }
#line 912 "deforest.m"
              {
#line 912 "deforest.m"
                transform_hlds__deforest__can_optimize_conj_6_p_0_5(transform_hlds__deforest__env_ptr);
              }
#line 913 "deforest.m"
            }
#line 912 "deforest.m"
        }
#line 915 "deforest.m"
        {
#line 915 "deforest.m"
          MR_Word transform_hlds__deforest__V_75_75;
#line 915 "deforest.m"
          MR_Word transform_hlds__deforest__V_76_76;
#line 916 "deforest.m"
          MR_Word transform_hlds__deforest__V_47_47;
#line 916 "deforest.m"
          MR_Word transform_hlds__deforest__V_44_44;
#line 916 "deforest.m"
          MR_Word transform_hlds__deforest__V_45_45;
#line 916 "deforest.m"
          MR_Word transform_hlds__deforest__V_46_46;

#line 915 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
#line 915 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 915 "deforest.m"
            {
#line 915 "deforest.m"
              transform_hlds__deforest__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
#line 915 "deforest.m"
              {
#line 916 "deforest.m"
                transform_hlds__deforest__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_75_75, (MR_Integer) 0)));
#line 916 "deforest.m"
                transform_hlds__deforest__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_75_75, (MR_Integer) 1)));
#line 916 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_76_76)) == (MR_mktag((MR_Integer) 2)));
#line 916 "deforest.m"
                if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 916 "deforest.m"
                  {
#line 916 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 0)));
#line 916 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_98 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 1)));
#line 916 "deforest.m"
                    transform_hlds__deforest__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 2)));
#line 916 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 3)));
#line 916 "deforest.m"
                    transform_hlds__deforest__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 4)));
#line 916 "deforest.m"
                    transform_hlds__deforest__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_76_76, (MR_Integer) 5)));
#line 916 "deforest.m"
                  }
#line 915 "deforest.m"
              }
#line 915 "deforest.m"
            }
#line 915 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 915 "deforest.m"
            {
#line 915 "deforest.m"
              transform_hlds__deforest__can_optimize_conj_6_p_0_5(transform_hlds__deforest__env_ptr);
            }
#line 915 "deforest.m"
        }
#line 918 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
#line 918 "deforest.m"
      }
#line 918 "deforest.m"
    else
#line 918 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
#line 918 "deforest.m"
  }
#line 918 "deforest.m"
}

#line 951 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_7(
#line 951 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 951 "deforest.m"
{
#line 951 "deforest.m"
  {
#line 951 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 951 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2, 1);
#line 951 "deforest.m"
  }
#line 951 "deforest.m"
}

#line 951 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_8(
#line 951 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 951 "deforest.m"
{
#line 951 "deforest.m"
  {
#line 951 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 951 "deforest.m"
    {
#line 952 "deforest.m"
      MR_Word transform_hlds__deforest__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50, (MR_Integer) 0)));
#line 953 "deforest.m"
      MR_Word transform_hlds__deforest__V_86_86;

#line 952 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50, (MR_Integer) 1)));
#line 953 "deforest.m"
      {
#line 953 "deforest.m"
        transform_hlds__deforest__V_86_86 = hlds__hlds_goal__goal_info_get_purity_1_f_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_52);
      }
#line 953 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (transform_hlds__deforest__V_86_86 == (MR_Integer) 0);
#line 953 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 953 "deforest.m"
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 953 "deforest.m"
        {
#line 953 "deforest.m"
          transform_hlds__deforest__can_optimize_conj_6_p_0_7(transform_hlds__deforest__env_ptr);
#line 953 "deforest.m"
          return;
        }
#line 951 "deforest.m"
    }
#line 951 "deforest.m"
  }
#line 951 "deforest.m"
}

#line 948 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_9(
#line 948 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 948 "deforest.m"
{
#line 948 "deforest.m"
  {
#line 948 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 948 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_50);
#line 948 "deforest.m"
    {
#line 948 "deforest.m"
      transform_hlds__deforest__can_optimize_conj_6_p_0_8(transform_hlds__deforest__env_ptr);
#line 948 "deforest.m"
      return;
    }
#line 948 "deforest.m"
  }
#line 948 "deforest.m"
}

#line 951 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_10(
#line 951 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 951 "deforest.m"
{
#line 951 "deforest.m"
  {
#line 951 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 951 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2) == 0)
#line 951 "deforest.m"
      {
#line 948 "deforest.m"
        {
#line 948 "deforest.m"
          {
#line 948 "deforest.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_50, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8, transform_hlds__deforest__can_optimize_conj_6_p_0_9, transform_hlds__deforest__env_ptr);
          }
#line 948 "deforest.m"
        }
#line 949 "deforest.m"
        {
#line 949 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50 = (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7;
#line 949 "deforest.m"
          {
#line 949 "deforest.m"
            transform_hlds__deforest__can_optimize_conj_6_p_0_8(transform_hlds__deforest__env_ptr);
          }
#line 949 "deforest.m"
        }
#line 950 "deforest.m"
        {
#line 950 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
#line 950 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 950 "deforest.m"
            {
#line 950 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
#line 950 "deforest.m"
              {
#line 950 "deforest.m"
                transform_hlds__deforest__can_optimize_conj_6_p_0_8(transform_hlds__deforest__env_ptr);
              }
#line 950 "deforest.m"
            }
#line 950 "deforest.m"
        }
#line 951 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
#line 951 "deforest.m"
      }
#line 951 "deforest.m"
    else
#line 951 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
#line 951 "deforest.m"
  }
#line 951 "deforest.m"
}

#line 965 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_11(
#line 965 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 965 "deforest.m"
{
#line 965 "deforest.m"
  {
#line 965 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 965 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3, 1);
#line 965 "deforest.m"
  }
#line 965 "deforest.m"
}

#line 965 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_12(
#line 965 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 965 "deforest.m"
{
#line 965 "deforest.m"
  {
#line 965 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 969 "deforest.m"
    {
#line 969 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = hlds__goal_util__reordering_maintains_termination_old_4_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_53, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_54);
    }
#line 969 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 969 "deforest.m"
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 969 "deforest.m"
      {
#line 969 "deforest.m"
        transform_hlds__deforest__can_optimize_conj_6_p_0_11(transform_hlds__deforest__env_ptr);
#line 969 "deforest.m"
        return;
      }
#line 965 "deforest.m"
  }
#line 965 "deforest.m"
}

#line 966 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_13(
#line 966 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 966 "deforest.m"
{
#line 966 "deforest.m"
  {
#line 966 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 966 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_54 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_54);
#line 966 "deforest.m"
    {
#line 966 "deforest.m"
      transform_hlds__deforest__can_optimize_conj_6_p_0_12(transform_hlds__deforest__env_ptr);
#line 966 "deforest.m"
      return;
    }
#line 966 "deforest.m"
  }
#line 966 "deforest.m"
}

#line 965 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_14(
#line 965 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 965 "deforest.m"
{
#line 965 "deforest.m"
  {
#line 965 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 965 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3) == 0)
#line 965 "deforest.m"
      {
#line 965 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_20)) == (MR_mktag((MR_Integer) 1)));
#line 965 "deforest.m"
        if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 965 "deforest.m"
          {
#line 965 "deforest.m"
            (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_20, (MR_Integer) 0)));
#line 965 "deforest.m"
            {
#line 966 "deforest.m"
              {
#line 966 "deforest.m"
                {
#line 966 "deforest.m"
                  mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_54, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8, transform_hlds__deforest__can_optimize_conj_6_p_0_13, transform_hlds__deforest__env_ptr);
                }
#line 966 "deforest.m"
              }
#line 967 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
#line 967 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 967 "deforest.m"
                {
#line 967 "deforest.m"
                  (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
#line 967 "deforest.m"
                  {
#line 967 "deforest.m"
                    transform_hlds__deforest__can_optimize_conj_6_p_0_12(transform_hlds__deforest__env_ptr);
                  }
#line 967 "deforest.m"
                }
#line 965 "deforest.m"
            }
#line 965 "deforest.m"
          }
#line 965 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
#line 965 "deforest.m"
      }
#line 965 "deforest.m"
    else
#line 965 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
#line 965 "deforest.m"
  }
#line 965 "deforest.m"
}

#line 857 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0(
#line 857 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_7,
#line 857 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_8,
#line 857 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_9,
#line 857 "deforest.m"
  MR_Word * transform_hlds__deforest__ShouldTry_10,
#line 857 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56,
#line 857 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_57)
#line 857 "deforest.m"
{
#line 857 "deforest.m"
  {
#line 857 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s transform_hlds__deforest__env;

#line 857 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7 = transform_hlds__deforest__EarlierGoal_7;
#line 857 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8 = transform_hlds__deforest__BetweenGoals_8;
#line 857 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9 = transform_hlds__deforest__MaybeLaterGoal_9;
#line 861 "deforest.m"
    {
#line 861 "deforest.m"
      MR_Integer transform_hlds__deforest__Depth0_13;
#line 861 "deforest.m"
      MR_Word transform_hlds__deforest__Globals_15;
#line 861 "deforest.m"
      MR_Word transform_hlds__deforest__DepthLimitOpt_16;
#line 861 "deforest.m"
      MR_Word transform_hlds__deforest__DebugPD_17;
#line 861 "deforest.m"
      MR_Integer transform_hlds__deforest__Depth_18;
#line 874 "deforest.m"
      MR_Integer transform_hlds__deforest__MaxDepth_21;

#line 862 "deforest.m"
      {
#line 862 "deforest.m"
        transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredInfo_12);
      }
#line 863 "deforest.m"
      {
#line 863 "deforest.m"
        transform_hlds__pd_info__pd_info_get_depth_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56, &transform_hlds__deforest__Depth0_13);
      }
#line 864 "deforest.m"
      {
#line 864 "deforest.m"
        transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14);
      }
#line 865 "deforest.m"
      {
#line 865 "deforest.m"
        hlds__hlds_module__module_info_get_globals_2_p_0((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14, &transform_hlds__deforest__Globals_15);
      }
#line 866 "deforest.m"
      {
#line 866 "deforest.m"
        libs__globals__lookup_option_3_p_0(transform_hlds__deforest__Globals_15, (MR_Integer) 392, &transform_hlds__deforest__DepthLimitOpt_16);
      }
#line 867 "deforest.m"
      {
#line 867 "deforest.m"
        libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_15, (MR_Integer) 72, &transform_hlds__deforest__DebugPD_17);
      }
#line 868 "deforest.m"
      transform_hlds__deforest__Depth_18 = (transform_hlds__deforest__Depth0_13 + (MR_Integer) 1);
#line 869 "deforest.m"
      {
#line 869 "deforest.m"
        transform_hlds__pd_info__pd_info_set_depth_3_p_0(transform_hlds__deforest__Depth_18, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_56, transform_hlds__deforest__STATE_VARIABLE_PDInfo_57);
      }
#line 870 "deforest.m"
      {
#line 870 "deforest.m"
        libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_15, (MR_Integer) 395, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19);
      }
#line 872 "deforest.m"
      {
#line 872 "deforest.m"
        libs__globals__lookup_option_3_p_0(transform_hlds__deforest__Globals_15, (MR_Integer) 166, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_20);
      }
#line 874 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__DepthLimitOpt_16)) == (MR_mktag((MR_Integer) 2)));
#line 874 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 874 "deforest.m"
        {
#line 874 "deforest.m"
          transform_hlds__deforest__MaxDepth_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__DepthLimitOpt_16, (MR_Integer) 0)));
#line 875 "deforest.m"
          (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (transform_hlds__deforest__MaxDepth_21 == (MR_Integer) -1);
#line 875 "deforest.m"
          (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 874 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 876 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (transform_hlds__deforest__Depth0_13 >= transform_hlds__deforest__MaxDepth_21);
#line 874 "deforest.m"
        }
#line 885 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 884 "deforest.m"
        *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 885 "deforest.m"
      else
#line 909 "deforest.m"
        {
#line 891 "deforest.m"
          {
#line 891 "deforest.m"
            transform_hlds__deforest__can_optimize_conj_6_p_0_3(&transform_hlds__deforest__env);
          }
#line 909 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 907 "deforest.m"
            {
#line 906 "deforest.m"
              {
#line 906 "deforest.m"
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "goal too large\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 908 "deforest.m"
              *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 907 "deforest.m"
            }
#line 909 "deforest.m"
          else
#line 933 "deforest.m"
            {
#line 918 "deforest.m"
              {
#line 918 "deforest.m"
                transform_hlds__deforest__can_optimize_conj_6_p_0_6(&transform_hlds__deforest__env);
              }
#line 933 "deforest.m"
              if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 931 "deforest.m"
                {
#line 930 "deforest.m"
                  {
#line 930 "deforest.m"
                    transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "non-inlineable calls\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 932 "deforest.m"
                  *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 931 "deforest.m"
                }
#line 933 "deforest.m"
              else
#line 945 "deforest.m"
                {
#line 938 "deforest.m"
                  {
#line 938 "deforest.m"
                    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = transform_hlds__deforest__is_simple_goal_list_1_p_0((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8);
                  }
#line 938 "deforest.m"
                  (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 945 "deforest.m"
                  if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 943 "deforest.m"
                    {
#line 941 "deforest.m"
                      {
#line 941 "deforest.m"
                        transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "between goals not simple enough\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                      }
#line 944 "deforest.m"
                      *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 943 "deforest.m"
                    }
#line 945 "deforest.m"
                  else
#line 960 "deforest.m"
                    {
#line 951 "deforest.m"
                      {
#line 951 "deforest.m"
                        transform_hlds__deforest__can_optimize_conj_6_p_0_10(&transform_hlds__deforest__env);
                      }
#line 960 "deforest.m"
                      if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 958 "deforest.m"
                        {
#line 956 "deforest.m"
                          {
#line 956 "deforest.m"
                            transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "goal list contains impure goal(s)\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                          }
#line 959 "deforest.m"
                          *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 958 "deforest.m"
                        }
#line 960 "deforest.m"
                      else
#line 977 "deforest.m"
                        {
#line 965 "deforest.m"
                          {
#line 965 "deforest.m"
                            transform_hlds__deforest__can_optimize_conj_6_p_0_14(&transform_hlds__deforest__env);
                          }
#line 977 "deforest.m"
                          if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 975 "deforest.m"
                            {
#line 973 "deforest.m"
                              {
#line 973 "deforest.m"
                                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "interleaving execution could change termination behaviour\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                              }
#line 976 "deforest.m"
                              *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 975 "deforest.m"
                            }
#line 977 "deforest.m"
                          else
#line 978 "deforest.m"
                            *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 1;
#line 977 "deforest.m"
                        }
#line 960 "deforest.m"
                    }
#line 945 "deforest.m"
                }
#line 933 "deforest.m"
            }
#line 909 "deforest.m"
        }
#line 861 "deforest.m"
    }
#line 857 "deforest.m"
  }
#line 857 "deforest.m"
}

#line 838 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_1(
#line 838 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 838 "deforest.m"
{
#line 838 "deforest.m"
  {
#line 838 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 838 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0, 1);
#line 838 "deforest.m"
  }
#line 838 "deforest.m"
}

#line 838 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_2(
#line 838 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 838 "deforest.m"
{
#line 838 "deforest.m"
  {
#line 838 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 838 "deforest.m"
    {
#line 842 "deforest.m"
      MR_Word transform_hlds__deforest__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36, (MR_Integer) 0)));

#line 842 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36, (MR_Integer) 1)));
#line 843 "deforest.m"
      {
#line 843 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_39 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_38);
      }
#line 7314 "transform_hlds.deforest.c"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 844 "deforest.m"
      {
#line 844 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_40 = parse_tree__set_of_var__set_to_bitset_1_f_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_60_60, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_35);
      }
#line 845 "deforest.m"
      {
#line 845 "deforest.m"
        parse_tree__set_of_var__intersect_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_60_60, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_39, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_40, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_41);
      }
#line 846 "deforest.m"
      {
#line 846 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_60_60, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_41);
      }
#line 846 "deforest.m"
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 846 "deforest.m"
        {
#line 846 "deforest.m"
          transform_hlds__deforest__should_try_deforestation_4_p_0_1(transform_hlds__deforest__env_ptr);
#line 846 "deforest.m"
          return;
        }
#line 838 "deforest.m"
    }
#line 838 "deforest.m"
  }
#line 838 "deforest.m"
}

#line 839 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_3(
#line 839 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 839 "deforest.m"
{
#line 839 "deforest.m"
  {
#line 839 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 839 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_36);
#line 839 "deforest.m"
    {
#line 839 "deforest.m"
      transform_hlds__deforest__should_try_deforestation_4_p_0_2(transform_hlds__deforest__env_ptr);
#line 839 "deforest.m"
      return;
    }
#line 839 "deforest.m"
  }
#line 839 "deforest.m"
}

#line 838 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_4(
#line 838 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 838 "deforest.m"
{
#line 838 "deforest.m"
  {
#line 838 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 838 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0) == 0)
#line 838 "deforest.m"
      {
#line 838 "deforest.m"
        {
#line 838 "deforest.m"
          MR_Word transform_hlds__deforest__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9, (MR_Integer) 0)));
#line 838 "deforest.m"
          MR_Word transform_hlds__deforest__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9, (MR_Integer) 1)));

#line 838 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9, (MR_Integer) 2)));
#line 839 "deforest.m"
          {
#line 839 "deforest.m"
            {
#line 839 "deforest.m"
              mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_36, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10, transform_hlds__deforest__should_try_deforestation_4_p_0_3, transform_hlds__deforest__env_ptr);
            }
#line 839 "deforest.m"
          }
#line 840 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36 = (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11;
#line 840 "deforest.m"
          {
#line 840 "deforest.m"
            transform_hlds__deforest__should_try_deforestation_4_p_0_2(transform_hlds__deforest__env_ptr);
          }
#line 838 "deforest.m"
        }
#line 838 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = MR_FALSE;
#line 838 "deforest.m"
      }
#line 838 "deforest.m"
    else
#line 838 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = MR_TRUE;
#line 838 "deforest.m"
  }
#line 838 "deforest.m"
}

#line 813 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0(
#line 813 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_5,
#line 813 "deforest.m"
  MR_Word * transform_hlds__deforest__ShouldTry_6,
#line 813 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_42,
#line 813 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_43)
#line 813 "deforest.m"
{
#line 813 "deforest.m"
  {
#line 813 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s transform_hlds__deforest__env;

#line 816 "deforest.m"
    {
#line 816 "deforest.m"
      MR_Word transform_hlds__deforest__EarlierGoal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 0)));
#line 816 "deforest.m"
      MR_Word transform_hlds__deforest__UselessVersions_14;
#line 816 "deforest.m"
      MR_Word transform_hlds__deforest__ModuleInfo0_15;
#line 816 "deforest.m"
      MR_Word transform_hlds__deforest__Globals_16;
#line 817 "deforest.m"
      MR_Word transform_hlds__deforest__V_12_12;
#line 817 "deforest.m"
      MR_Word transform_hlds__deforest__V_13_13;
#line 822 "deforest.m"
      MR_Word transform_hlds__deforest__DebugPD_17;
#line 824 "deforest.m"
      MR_Word transform_hlds__deforest__TypeInfo_58_58;
#line 824 "deforest.m"
      MR_Word transform_hlds__deforest__PredId1_18;
#line 824 "deforest.m"
      MR_Integer transform_hlds__deforest__ProcId1_19;
#line 824 "deforest.m"
      MR_Word transform_hlds__deforest__PredId2_25;
#line 824 "deforest.m"
      MR_Integer transform_hlds__deforest__ProcId2_26;
#line 824 "deforest.m"
      MR_Word transform_hlds__deforest__V_45_45;
#line 824 "deforest.m"
      MR_Word transform_hlds__deforest__V_46_46;
#line 824 "deforest.m"
      MR_Word transform_hlds__deforest__V_47_47;
#line 824 "deforest.m"
      MR_Word transform_hlds__deforest__V_48_48;
#line 824 "deforest.m"
      MR_Word transform_hlds__deforest__V_49_49;
#line 824 "deforest.m"
      MR_Word transform_hlds__deforest__V_24_24;
#line 824 "deforest.m"
      MR_Word transform_hlds__deforest__V_20_20;
#line 824 "deforest.m"
      MR_Word transform_hlds__deforest__V_21_21;
#line 824 "deforest.m"
      MR_Word transform_hlds__deforest__V_22_22;
#line 824 "deforest.m"
      MR_Word transform_hlds__deforest__V_23_23;
#line 825 "deforest.m"
      MR_Word transform_hlds__deforest__V_31_31;
#line 825 "deforest.m"
      MR_Word transform_hlds__deforest__V_27_27;
#line 825 "deforest.m"
      MR_Word transform_hlds__deforest__V_28_28;
#line 825 "deforest.m"
      MR_Word transform_hlds__deforest__V_29_29;
#line 825 "deforest.m"
      MR_Word transform_hlds__deforest__V_30_30;

#line 817 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 1)));
#line 817 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 2)));
#line 817 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 3)));
#line 817 "deforest.m"
      transform_hlds__deforest__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 4)));
#line 817 "deforest.m"
      transform_hlds__deforest__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 5)));
#line 819 "deforest.m"
      {
#line 819 "deforest.m"
        transform_hlds__pd_info__pd_info_get_useless_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_42, &transform_hlds__deforest__UselessVersions_14);
      }
#line 820 "deforest.m"
      {
#line 820 "deforest.m"
        transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_42, &transform_hlds__deforest__ModuleInfo0_15);
      }
#line 821 "deforest.m"
      {
#line 821 "deforest.m"
        hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo0_15, &transform_hlds__deforest__Globals_16);
      }
#line 822 "deforest.m"
      {
#line 822 "deforest.m"
        libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_16, (MR_Integer) 72, &transform_hlds__deforest__DebugPD_17);
      }
#line 824 "deforest.m"
      transform_hlds__deforest__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_8, (MR_Integer) 0)));
#line 824 "deforest.m"
      transform_hlds__deforest__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_8, (MR_Integer) 1)));
#line 824 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_45_45)) == (MR_mktag((MR_Integer) 2)));
#line 824 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 824 "deforest.m"
        {
#line 824 "deforest.m"
          transform_hlds__deforest__PredId1_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 0)));
#line 824 "deforest.m"
          transform_hlds__deforest__ProcId1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 1)));
#line 824 "deforest.m"
          transform_hlds__deforest__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 2)));
#line 824 "deforest.m"
          transform_hlds__deforest__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 3)));
#line 824 "deforest.m"
          transform_hlds__deforest__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 4)));
#line 824 "deforest.m"
          transform_hlds__deforest__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_45_45, (MR_Integer) 5)));
#line 825 "deforest.m"
          transform_hlds__deforest__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11, (MR_Integer) 0)));
#line 825 "deforest.m"
          transform_hlds__deforest__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11, (MR_Integer) 1)));
#line 825 "deforest.m"
          (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_46_46)) == (MR_mktag((MR_Integer) 2)));
#line 825 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 825 "deforest.m"
            {
#line 825 "deforest.m"
              transform_hlds__deforest__PredId2_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 0)));
#line 825 "deforest.m"
              transform_hlds__deforest__ProcId2_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 1)));
#line 825 "deforest.m"
              transform_hlds__deforest__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 2)));
#line 825 "deforest.m"
              transform_hlds__deforest__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 3)));
#line 825 "deforest.m"
              transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 4)));
#line 825 "deforest.m"
              transform_hlds__deforest__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_46_46, (MR_Integer) 5)));
#line 7578 "transform_hlds.deforest.c"
              transform_hlds__deforest__TypeInfo_58_58 = (MR_Word) &transform_hlds__deforest_scalar_common_2[3];
#line 826 "deforest.m"
              {
#line 826 "deforest.m"
                transform_hlds__deforest__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 826 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_48_48, 0) = ((MR_Box) (transform_hlds__deforest__PredId1_18));
#line 826 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_48_48, 1) = ((MR_Box) (transform_hlds__deforest__ProcId1_19));
#line 826 "deforest.m"
              }
#line 826 "deforest.m"
              {
#line 826 "deforest.m"
                transform_hlds__deforest__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 826 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 0) = ((MR_Box) (transform_hlds__deforest__PredId2_25));
#line 826 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 1) = ((MR_Box) (transform_hlds__deforest__ProcId2_26));
#line 826 "deforest.m"
              }
#line 826 "deforest.m"
              {
#line 826 "deforest.m"
                transform_hlds__deforest__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 826 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_47_47, 0) = ((MR_Box) (transform_hlds__deforest__V_48_48));
#line 826 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_47_47, 1) = ((MR_Box) (transform_hlds__deforest__V_49_49));
#line 826 "deforest.m"
              }
#line 826 "deforest.m"
              {
#line 826 "deforest.m"
                (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = mercury__set__member_2_p_0(transform_hlds__deforest__TypeInfo_58_58, ((MR_Box) (transform_hlds__deforest__V_47_47)), transform_hlds__deforest__UselessVersions_14);
              }
#line 825 "deforest.m"
            }
#line 824 "deforest.m"
        }
#line 834 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 833 "deforest.m"
        *transform_hlds__deforest__ShouldTry_6 = (MR_Integer) 0;
#line 834 "deforest.m"
      else
#line 853 "deforest.m"
        {
#line 838 "deforest.m"
          {
#line 838 "deforest.m"
            transform_hlds__deforest__should_try_deforestation_4_p_0_4(&transform_hlds__deforest__env);
          }
#line 853 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 852 "deforest.m"
            *transform_hlds__deforest__ShouldTry_6 = (MR_Integer) 0;
#line 853 "deforest.m"
          else
#line 854 "deforest.m"
            *transform_hlds__deforest__ShouldTry_6 = (MR_Integer) 1;
#line 853 "deforest.m"
        }
#line 816 "deforest.m"
      *transform_hlds__deforest__STATE_VARIABLE_PDInfo_43 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_42;
#line 816 "deforest.m"
    }
#line 813 "deforest.m"
  }
#line 813 "deforest.m"
}

#line 790 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_2(
#line 790 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 790 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 790 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 790 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 790 "deforest.m"
{
#line 790 "deforest.m"
  {
#line 790 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 790 "deforest.m"
    MR_Word transform_hlds__deforest__conv2_HeadVar__3_3;

#line 790 "deforest.m"
    {
#line 790 "deforest.m"
      transform_hlds__pd_info__remove_version_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv2_HeadVar__3_3);
    }
#line 790 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv2_HeadVar__3_3));
#line 790 "deforest.m"
  }
#line 790 "deforest.m"
}

#line 677 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_1(
#line 677 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 677 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 677 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 677 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 677 "deforest.m"
{
#line 677 "deforest.m"
  {
#line 677 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 677 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_HeadVar__3_3;

#line 677 "deforest.m"
    {
#line 677 "deforest.m"
      transform_hlds__pd_info__pd_info_update_goal_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_HeadVar__3_3);
    }
#line 677 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__3_3));
#line 677 "deforest.m"
  }
#line 677 "deforest.m"
}

#line 650 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0(
#line 650 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_10,
#line 650 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo0_11,
#line 650 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82,
#line 650 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_83,
#line 650 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84,
#line 650 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85,
#line 650 "deforest.m"
  MR_Word * transform_hlds__deforest__Optimized_14,
#line 650 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86,
#line 650 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_87)
#line 650 "deforest.m"
{
#line 656 "deforest.m"
  {
#line 656 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_168_168;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_169_169;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_16;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_17;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__DebugPD_18;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__InstMap0_19;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__CreatedVersions0_20;
#line 656 "deforest.m"
    MR_Integer transform_hlds__deforest__Depth0_21;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__DeforestInfo_23;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__BeforeIrrelevant_24;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__AfterIrrelevant_25;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__ConjNonLocals_26;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__CurrPredProcId_27;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__Parents0_28;
#line 656 "deforest.m"
    MR_Integer transform_hlds__deforest__CostDelta0_29;
#line 656 "deforest.m"
    MR_Integer transform_hlds__deforest__SizeDelta0_30;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierGoal_31;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__BetweenGoals_33;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__LaterGoal_34;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__DeforestBranches_36;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__ShouldOptimize_37;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__Optimized0_38;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__Goals_39;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_135_135;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136;
#line 656 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151;
#line 665 "deforest.m"
    MR_Word transform_hlds__deforest__V_91_91;
#line 665 "deforest.m"
    MR_Word transform_hlds__deforest__V_93_93;
#line 677 "deforest.m"
    MR_Box transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_96_96;
#line 684 "deforest.m"
    MR_Word transform_hlds__deforest__V_32_32;
#line 684 "deforest.m"
    MR_Word transform_hlds__deforest__V_35_35;
#line 805 "deforest.m"
    MR_Word transform_hlds__deforest__V_154_154;
#line 805 "deforest.m"
    MR_Word transform_hlds__deforest__V_156_156;

#line 657 "deforest.m"
    {
#line 657 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__ModuleInfo_16);
    }
#line 658 "deforest.m"
    {
#line 658 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_16, &transform_hlds__deforest__Globals_17);
    }
#line 659 "deforest.m"
    {
#line 659 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_17, (MR_Integer) 72, &transform_hlds__deforest__DebugPD_18);
    }
#line 661 "deforest.m"
    {
#line 661 "deforest.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__InstMap0_19);
    }
#line 662 "deforest.m"
    {
#line 662 "deforest.m"
      transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__CreatedVersions0_20);
    }
#line 664 "deforest.m"
    {
#line 664 "deforest.m"
      transform_hlds__pd_info__pd_info_get_depth_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__Depth0_21);
    }
#line 667 "deforest.m"
    {
#line 667 "deforest.m"
      transform_hlds__deforest__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 667 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_93_93, 0) = ((MR_Box) (transform_hlds__deforest__Depth0_21));
#line 667 "deforest.m"
    }
#line 667 "deforest.m"
    {
#line 667 "deforest.m"
      transform_hlds__deforest__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_91_91, 0) = ((MR_Box) (transform_hlds__deforest__V_93_93));
#line 667 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 667 "deforest.m"
    }
#line 666 "deforest.m"
    {
#line 666 "deforest.m"
      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "checking for deforestation at depth %i\n", transform_hlds__deforest__V_91_91);
    }
#line 670 "deforest.m"
    {
#line 670 "deforest.m"
      transform_hlds__deforest__reorder_conj_5_p_0(transform_hlds__deforest__DeforestInfo0_11, &transform_hlds__deforest__DeforestInfo_23, &transform_hlds__deforest__BeforeIrrelevant_24, &transform_hlds__deforest__AfterIrrelevant_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86);
    }
#line 673 "deforest.m"
    {
#line 673 "deforest.m"
      transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(transform_hlds__deforest__NonLocals_10, transform_hlds__deforest__DeforestInfo_23, transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82, transform_hlds__deforest__BeforeIrrelevant_24, transform_hlds__deforest__AfterIrrelevant_25, transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84, &transform_hlds__deforest__ConjNonLocals_26);
    }
#line 7878 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_168_168 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 7880 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_169_169 = (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0;
#line 677 "deforest.m"
    {
#line 677 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_168_168, transform_hlds__deforest__TypeCtorInfo_169_169, (MR_Word) &transform_hlds__deforest_scalar_common_2[9], transform_hlds__deforest__BeforeIrrelevant_24, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86)), &transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_96_96);
    }
#line 677 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96 = ((MR_Word) transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_96_96);
#line 679 "deforest.m"
    {
#line 679 "deforest.m"
      transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__CurrPredProcId_27);
    }
#line 680 "deforest.m"
    {
#line 680 "deforest.m"
      transform_hlds__pd_info__pd_info_get_parents_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__Parents0_28);
    }
#line 681 "deforest.m"
    {
#line 681 "deforest.m"
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__CostDelta0_29);
    }
#line 682 "deforest.m"
    {
#line 682 "deforest.m"
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__SizeDelta0_30);
    }
#line 684 "deforest.m"
    transform_hlds__deforest__EarlierGoal_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 0)));
#line 684 "deforest.m"
    transform_hlds__deforest__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 1)));
#line 684 "deforest.m"
    transform_hlds__deforest__BetweenGoals_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 2)));
#line 684 "deforest.m"
    transform_hlds__deforest__LaterGoal_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 3)));
#line 684 "deforest.m"
    transform_hlds__deforest__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 4)));
#line 684 "deforest.m"
    transform_hlds__deforest__DeforestBranches_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 5)));
#line 687 "deforest.m"
    {
#line 687 "deforest.m"
      transform_hlds__deforest__should_try_deforestation_4_p_0(transform_hlds__deforest__DeforestInfo_23, &transform_hlds__deforest__ShouldOptimize_37, transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
    }
#line 692 "deforest.m"
#line 692 "deforest.m"
    switch (transform_hlds__deforest__ShouldOptimize_37) {
#line 692 "deforest.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 692 "deforest.m"
      case (MR_Integer) 0:
#line 689 "deforest.m"
        {
#line 690 "deforest.m"
          transform_hlds__deforest__Optimized0_38 = (MR_Integer) 0;
#line 691 "deforest.m"
          transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 689 "deforest.m"
          transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 689 "deforest.m"
        }
#line 692 "deforest.m"
        break;
#line 692 "deforest.m"
      case (MR_Integer) 1:
#line 717 "deforest.m"
        {
#line 717 "deforest.m"
          MR_Word transform_hlds__deforest__PredId1_40;
#line 717 "deforest.m"
          MR_Word transform_hlds__deforest__PredId2_47;
#line 695 "deforest.m"
          MR_Word transform_hlds__deforest__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 0)));
#line 695 "deforest.m"
          MR_Word transform_hlds__deforest__V_99_99;
#line 695 "deforest.m"
          MR_Word transform_hlds__deforest__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 1)));
#line 695 "deforest.m"
          MR_Integer transform_hlds__deforest__V_41_41;
#line 695 "deforest.m"
          MR_Word transform_hlds__deforest__V_42_42;
#line 695 "deforest.m"
          MR_Word transform_hlds__deforest__V_43_43;
#line 695 "deforest.m"
          MR_Word transform_hlds__deforest__V_44_44;
#line 695 "deforest.m"
          MR_Word transform_hlds__deforest__V_45_45;
#line 696 "deforest.m"
          MR_Word transform_hlds__deforest__V_53_53;
#line 696 "deforest.m"
          MR_Integer transform_hlds__deforest__V_48_48;
#line 696 "deforest.m"
          MR_Word transform_hlds__deforest__V_49_49;
#line 696 "deforest.m"
          MR_Word transform_hlds__deforest__V_50_50;
#line 696 "deforest.m"
          MR_Word transform_hlds__deforest__V_51_51;
#line 696 "deforest.m"
          MR_Word transform_hlds__deforest__V_52_52;

#line 695 "deforest.m"
          transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_98_98)) == (MR_mktag((MR_Integer) 2)));
#line 695 "deforest.m"
          if (transform_hlds__deforest__succeeded)
#line 695 "deforest.m"
            {
#line 695 "deforest.m"
              transform_hlds__deforest__PredId1_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 0)));
#line 695 "deforest.m"
              transform_hlds__deforest__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 1)));
#line 695 "deforest.m"
              transform_hlds__deforest__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 2)));
#line 695 "deforest.m"
              transform_hlds__deforest__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 3)));
#line 695 "deforest.m"
              transform_hlds__deforest__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 4)));
#line 695 "deforest.m"
              transform_hlds__deforest__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 5)));
#line 696 "deforest.m"
              transform_hlds__deforest__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 0)));
#line 696 "deforest.m"
              transform_hlds__deforest__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 1)));
#line 696 "deforest.m"
              transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_99_99)) == (MR_mktag((MR_Integer) 2)));
#line 696 "deforest.m"
              if (transform_hlds__deforest__succeeded)
#line 696 "deforest.m"
                {
#line 696 "deforest.m"
                  transform_hlds__deforest__PredId2_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 0)));
#line 696 "deforest.m"
                  transform_hlds__deforest__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 1)));
#line 696 "deforest.m"
                  transform_hlds__deforest__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 2)));
#line 696 "deforest.m"
                  transform_hlds__deforest__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 3)));
#line 696 "deforest.m"
                  transform_hlds__deforest__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 4)));
#line 696 "deforest.m"
                  transform_hlds__deforest__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 5)));
#line 696 "deforest.m"
                }
#line 695 "deforest.m"
            }
#line 717 "deforest.m"
          if (transform_hlds__deforest__succeeded)
#line 700 "deforest.m"
            {
#line 700 "deforest.m"
              MR_String transform_hlds__deforest__PredName1_54;
#line 700 "deforest.m"
              MR_String transform_hlds__deforest__PredName2_55;
#line 700 "deforest.m"
              MR_Word transform_hlds__deforest__MaybeGoal_56;
#line 700 "deforest.m"
              MR_Word transform_hlds__deforest__V_108_108;
#line 702 "deforest.m"
              MR_Word transform_hlds__deforest__V_102_102;
#line 702 "deforest.m"
              MR_Word transform_hlds__deforest__V_104_104;
#line 702 "deforest.m"
              MR_Word transform_hlds__deforest__V_105_105;
#line 702 "deforest.m"
              MR_Word transform_hlds__deforest__V_106_106;

#line 700 "deforest.m"
              {
#line 700 "deforest.m"
                transform_hlds__deforest__PredName1_54 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__deforest__ModuleInfo_16, transform_hlds__deforest__PredId1_40);
              }
#line 701 "deforest.m"
              {
#line 701 "deforest.m"
                transform_hlds__deforest__PredName2_55 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__deforest__ModuleInfo_16, transform_hlds__deforest__PredId2_47);
              }
#line 704 "deforest.m"
              {
#line 704 "deforest.m"
                transform_hlds__deforest__V_104_104 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 704 "deforest.m"
                MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_104_104, 0) = ((MR_Box) (transform_hlds__deforest__PredName1_54));
#line 704 "deforest.m"
              }
#line 704 "deforest.m"
              {
#line 704 "deforest.m"
                transform_hlds__deforest__V_106_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 704 "deforest.m"
                MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_106_106, 0) = ((MR_Box) (transform_hlds__deforest__PredName2_55));
#line 704 "deforest.m"
              }
#line 704 "deforest.m"
              {
#line 704 "deforest.m"
                transform_hlds__deforest__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_105_105, 0) = ((MR_Box) (transform_hlds__deforest__V_106_106));
#line 704 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 704 "deforest.m"
              }
#line 704 "deforest.m"
              {
#line 704 "deforest.m"
                transform_hlds__deforest__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_102_102, 0) = ((MR_Box) (transform_hlds__deforest__V_104_104));
#line 704 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_102_102, 1) = ((MR_Box) (transform_hlds__deforest__V_105_105));
#line 704 "deforest.m"
              }
#line 703 "deforest.m"
              {
#line 703 "deforest.m"
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "deforesting calls to %s and %s\n", transform_hlds__deforest__V_102_102);
              }
#line 707 "deforest.m"
              {
#line 707 "deforest.m"
                transform_hlds__deforest__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 707 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_108_108, 0) = ((MR_Box) (transform_hlds__deforest__LaterGoal_34));
#line 707 "deforest.m"
              }
#line 706 "deforest.m"
              {
#line 706 "deforest.m"
                transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(transform_hlds__deforest__EarlierGoal_31, transform_hlds__deforest__BetweenGoals_33, transform_hlds__deforest__V_108_108, &transform_hlds__deforest__MaybeGoal_56, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
              }
#line 712 "deforest.m"
              if ((transform_hlds__deforest__MaybeGoal_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 713 "deforest.m"
                {
#line 714 "deforest.m"
                  transform_hlds__deforest__Optimized0_38 = (MR_Integer) 0;
#line 715 "deforest.m"
                  transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 713 "deforest.m"
                }
#line 712 "deforest.m"
              else
#line 709 "deforest.m"
                {
#line 709 "deforest.m"
                  MR_Word transform_hlds__deforest__Goal_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeGoal_56, (MR_Integer) 0)));

#line 710 "deforest.m"
                  transform_hlds__deforest__Optimized0_38 = (MR_Integer) 1;
#line 711 "deforest.m"
                  {
#line 711 "deforest.m"
                    transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "deforest.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 0) = ((MR_Box) (transform_hlds__deforest__Goal_57));
#line 711 "deforest.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "deforest.m"
                  }
#line 709 "deforest.m"
                }
#line 700 "deforest.m"
            }
#line 717 "deforest.m"
          else
#line 740 "deforest.m"
            {
#line 740 "deforest.m"
              MR_Word transform_hlds__deforest__PredId_60;
#line 740 "deforest.m"
              MR_Word transform_hlds__deforest__PredProcId_67;
#line 722 "deforest.m"
              MR_Word transform_hlds__deforest__EarlierGoalExpr_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 0)));
#line 722 "deforest.m"
              MR_Integer transform_hlds__deforest__ProcId_61;
#line 722 "deforest.m"
              MR_Word transform_hlds__deforest__V_111_111;
#line 722 "deforest.m"
              MR_Word transform_hlds__deforest__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 1)));
#line 724 "deforest.m"
              MR_Word transform_hlds__deforest__V_66_66;
#line 724 "deforest.m"
              MR_Word transform_hlds__deforest__V_62_62;
#line 724 "deforest.m"
              MR_Word transform_hlds__deforest__V_63_63;
#line 724 "deforest.m"
              MR_Word transform_hlds__deforest__V_64_64;
#line 724 "deforest.m"
              MR_Word transform_hlds__deforest__V_65_65;
#line 727 "deforest.m"
              MR_Word transform_hlds__deforest__TypeCtorInfo_170_170;

#line 723 "deforest.m"
              {
#line 723 "deforest.m"
                transform_hlds__deforest__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__deforest__EarlierGoalExpr_58);
              }
#line 722 "deforest.m"
              if (transform_hlds__deforest__succeeded)
#line 722 "deforest.m"
                {
#line 724 "deforest.m"
                  transform_hlds__deforest__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 0)));
#line 724 "deforest.m"
                  transform_hlds__deforest__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 1)));
#line 724 "deforest.m"
                  transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_111_111)) == (MR_mktag((MR_Integer) 2)));
#line 724 "deforest.m"
                  if (transform_hlds__deforest__succeeded)
#line 724 "deforest.m"
                    {
#line 724 "deforest.m"
                      transform_hlds__deforest__PredId_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 0)));
#line 724 "deforest.m"
                      transform_hlds__deforest__ProcId_61 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 1)));
#line 724 "deforest.m"
                      transform_hlds__deforest__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 2)));
#line 724 "deforest.m"
                      transform_hlds__deforest__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 3)));
#line 724 "deforest.m"
                      transform_hlds__deforest__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 4)));
#line 724 "deforest.m"
                      transform_hlds__deforest__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 5)));
#line 725 "deforest.m"
                      {
#line 725 "deforest.m"
                        transform_hlds__deforest__PredProcId_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 725 "deforest.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__deforest__PredProcId_67, 0) = ((MR_Box) (transform_hlds__deforest__PredId_60));
#line 725 "deforest.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__deforest__PredProcId_67, 1) = ((MR_Box) (transform_hlds__deforest__ProcId_61));
#line 725 "deforest.m"
                      }
#line 726 "deforest.m"
                      {
#line 726 "deforest.m"
                        transform_hlds__deforest__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__deforest__PredProcId_67, transform_hlds__deforest__CurrPredProcId_27);
                      }
#line 726 "deforest.m"
                      transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 722 "deforest.m"
                      if (transform_hlds__deforest__succeeded)
#line 722 "deforest.m"
                        {
#line 8225 "transform_hlds.deforest.c"
                          transform_hlds__deforest__TypeCtorInfo_170_170 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 727 "deforest.m"
                          {
#line 727 "deforest.m"
                            transform_hlds__deforest__succeeded = mercury__set__member_2_p_0(transform_hlds__deforest__TypeCtorInfo_170_170, ((MR_Box) (transform_hlds__deforest__PredProcId_67)), transform_hlds__deforest__Parents0_28);
                          }
#line 727 "deforest.m"
                          transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 722 "deforest.m"
                        }
#line 724 "deforest.m"
                    }
#line 722 "deforest.m"
                }
#line 740 "deforest.m"
              if (transform_hlds__deforest__succeeded)
#line 729 "deforest.m"
                {
#line 729 "deforest.m"
                  MR_String transform_hlds__deforest__CurrPredName_68;
#line 729 "deforest.m"
                  MR_Word transform_hlds__deforest__Parents_69;
#line 729 "deforest.m"
                  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_119_119;
#line 729 "deforest.m"
                  MR_Word transform_hlds__deforest__Goal_159;
#line 730 "deforest.m"
                  MR_Word transform_hlds__deforest__V_114_114;
#line 730 "deforest.m"
                  MR_Word transform_hlds__deforest__V_116_116;

#line 729 "deforest.m"
                  {
#line 729 "deforest.m"
                    transform_hlds__deforest__CurrPredName_68 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__deforest__ModuleInfo_16, transform_hlds__deforest__PredId_60);
                  }
#line 732 "deforest.m"
                  {
#line 732 "deforest.m"
                    transform_hlds__deforest__V_116_116 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 732 "deforest.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_116_116, 0) = ((MR_Box) (transform_hlds__deforest__CurrPredName_68));
#line 732 "deforest.m"
                  }
#line 732 "deforest.m"
                  {
#line 732 "deforest.m"
                    transform_hlds__deforest__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "deforest.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_114_114, 0) = ((MR_Box) (transform_hlds__deforest__V_116_116));
#line 732 "deforest.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 732 "deforest.m"
                  }
#line 731 "deforest.m"
                  {
#line 731 "deforest.m"
                    transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Pushing call to %s into goal\n", transform_hlds__deforest__V_114_114);
                  }
#line 734 "deforest.m"
                  {
#line 734 "deforest.m"
                    mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__deforest__PredProcId_67)), transform_hlds__deforest__Parents0_28, &transform_hlds__deforest__Parents_69);
                  }
#line 735 "deforest.m"
                  {
#line 735 "deforest.m"
                    transform_hlds__pd_info__pd_info_set_parents_3_p_0(transform_hlds__deforest__Parents_69, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_119_119);
                  }
#line 736 "deforest.m"
                  {
#line 736 "deforest.m"
                    transform_hlds__deforest__push_goal_into_goal_8_p_0(transform_hlds__deforest__ConjNonLocals_26, transform_hlds__deforest__DeforestBranches_36, transform_hlds__deforest__EarlierGoal_31, transform_hlds__deforest__BetweenGoals_33, transform_hlds__deforest__LaterGoal_34, &transform_hlds__deforest__Goal_159, transform_hlds__deforest__STATE_VARIABLE_PDInfo_119_119, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
                  }
#line 738 "deforest.m"
                  {
#line 738 "deforest.m"
                    transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "deforest.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 0) = ((MR_Box) (transform_hlds__deforest__Goal_159));
#line 738 "deforest.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 738 "deforest.m"
                  }
#line 739 "deforest.m"
                  transform_hlds__deforest__Optimized0_38 = (MR_Integer) 1;
#line 729 "deforest.m"
                }
#line 740 "deforest.m"
              else
#line 760 "deforest.m"
                {
#line 743 "deforest.m"
                  MR_Word transform_hlds__deforest__LaterGoalExpr_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 0)));
#line 743 "deforest.m"
                  MR_Word transform_hlds__deforest__EarlierGoalExpr_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 0)));
#line 743 "deforest.m"
                  MR_Word transform_hlds__deforest__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 1)));
#line 744 "deforest.m"
                  MR_Word transform_hlds__deforest__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 1)));

#line 745 "deforest.m"
                  {
#line 745 "deforest.m"
                    transform_hlds__deforest__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__deforest__EarlierGoalExpr_160);
                  }
#line 743 "deforest.m"
                  if (transform_hlds__deforest__succeeded)
#line 746 "deforest.m"
                    {
#line 746 "deforest.m"
                      transform_hlds__deforest__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__deforest__LaterGoalExpr_71);
                    }
#line 760 "deforest.m"
                  if (transform_hlds__deforest__succeeded)
#line 750 "deforest.m"
                    {
#line 750 "deforest.m"
                      MR_Integer transform_hlds__deforest__ConjSize1_73;
#line 750 "deforest.m"
                      MR_Integer transform_hlds__deforest__ConjSize2_74;
#line 750 "deforest.m"
                      MR_Integer transform_hlds__deforest__NewSize_75;
#line 750 "deforest.m"
                      MR_Integer transform_hlds__deforest__SizeDiff_76;
#line 750 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126;
#line 750 "deforest.m"
                      MR_Word transform_hlds__deforest__V_128_128;
#line 750 "deforest.m"
                      MR_Integer transform_hlds__deforest__V_129_129;
#line 750 "deforest.m"
                      MR_Word transform_hlds__deforest__Goal_161;

#line 749 "deforest.m"
                      {
#line 749 "deforest.m"
                        transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Pushing goal into goal\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                      }
#line 751 "deforest.m"
                      {
#line 751 "deforest.m"
                        transform_hlds__deforest__push_goal_into_goal_8_p_0(transform_hlds__deforest__ConjNonLocals_26, transform_hlds__deforest__DeforestBranches_36, transform_hlds__deforest__EarlierGoal_31, transform_hlds__deforest__BetweenGoals_33, transform_hlds__deforest__LaterGoal_34, &transform_hlds__deforest__Goal_161, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126);
                      }
#line 753 "deforest.m"
                      {
#line 753 "deforest.m"
                        transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "deforest.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 0) = ((MR_Box) (transform_hlds__deforest__Goal_161));
#line 753 "deforest.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "deforest.m"
                      }
#line 754 "deforest.m"
                      {
#line 754 "deforest.m"
                        transform_hlds__deforest__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "deforest.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_128_128, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_31));
#line 754 "deforest.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_128_128, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_33));
#line 754 "deforest.m"
                      }
#line 754 "deforest.m"
                      {
#line 754 "deforest.m"
                        hlds__goal_util__goals_size_2_p_0(transform_hlds__deforest__V_128_128, &transform_hlds__deforest__ConjSize1_73);
                      }
#line 755 "deforest.m"
                      {
#line 755 "deforest.m"
                        hlds__goal_util__goal_size_2_p_0(transform_hlds__deforest__LaterGoal_34, &transform_hlds__deforest__ConjSize2_74);
                      }
#line 756 "deforest.m"
                      {
#line 756 "deforest.m"
                        hlds__goal_util__goal_size_2_p_0(transform_hlds__deforest__Goal_161, &transform_hlds__deforest__NewSize_75);
                      }
#line 757 "deforest.m"
                      transform_hlds__deforest__V_129_129 = (transform_hlds__deforest__NewSize_75 - transform_hlds__deforest__ConjSize1_73);
#line 757 "deforest.m"
                      transform_hlds__deforest__SizeDiff_76 = (transform_hlds__deforest__V_129_129 - transform_hlds__deforest__ConjSize2_74);
#line 758 "deforest.m"
                      {
#line 758 "deforest.m"
                        transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(transform_hlds__deforest__SizeDiff_76, transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
                      }
#line 759 "deforest.m"
                      transform_hlds__deforest__Optimized0_38 = (MR_Integer) 1;
#line 750 "deforest.m"
                    }
#line 760 "deforest.m"
                  else
#line 763 "deforest.m"
                    {
#line 762 "deforest.m"
                      {
#line 762 "deforest.m"
                        transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "not optimizing\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                      }
#line 764 "deforest.m"
                      transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "deforest.m"
                      transform_hlds__deforest__Optimized0_38 = (MR_Integer) 0;
#line 763 "deforest.m"
                      transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 763 "deforest.m"
                    }
#line 760 "deforest.m"
                }
#line 740 "deforest.m"
            }
#line 717 "deforest.m"
        }
#line 692 "deforest.m"
        break;
#line 692 "deforest.m"
    }
#line 768 "deforest.m"
    {
#line 768 "deforest.m"
      *transform_hlds__deforest__Optimized_14 = transform_hlds__deforest__is_improvement_worth_while_4_f_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109, transform_hlds__deforest__Optimized0_38, transform_hlds__deforest__CostDelta0_29, transform_hlds__deforest__SizeDelta0_30);
    }
#line 772 "deforest.m"
    {
#line 772 "deforest.m"
      transform_hlds__pd_info__pd_info_set_depth_3_p_0(transform_hlds__deforest__Depth0_21, transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_135_135);
    }
#line 773 "deforest.m"
    {
#line 773 "deforest.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_PDInfo_135_135, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136);
    }
#line 793 "deforest.m"
#line 793 "deforest.m"
    switch (*transform_hlds__deforest__Optimized_14) {
#line 793 "deforest.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 793 "deforest.m"
      case (MR_Integer) 0:
#line 775 "deforest.m"
        {
#line 775 "deforest.m"
          MR_Word transform_hlds__deforest__TypeCtorInfo_172_172;
#line 775 "deforest.m"
          MR_Word transform_hlds__deforest__CreatedVersions_77;
#line 775 "deforest.m"
          MR_Word transform_hlds__deforest__NewVersions0_78;
#line 775 "deforest.m"
          MR_Word transform_hlds__deforest__NewVersions_79;
#line 775 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_148_148;
#line 775 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149;
#line 790 "deforest.m"
          MR_Box transform_hlds__deforest__conv3_STATE_VARIABLE_PDInfo_151_151;

#line 783 "deforest.m"
          {
#line 783 "deforest.m"
            transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(transform_hlds__deforest__CostDelta0_29, transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_148_148);
          }
#line 784 "deforest.m"
          {
#line 784 "deforest.m"
            transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(transform_hlds__deforest__SizeDelta0_30, transform_hlds__deforest__STATE_VARIABLE_PDInfo_148_148, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149);
          }
#line 787 "deforest.m"
          {
#line 787 "deforest.m"
            transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149, &transform_hlds__deforest__CreatedVersions_77);
          }
#line 8499 "transform_hlds.deforest.c"
          transform_hlds__deforest__TypeCtorInfo_172_172 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 788 "deforest.m"
          {
#line 788 "deforest.m"
            mercury__set__difference_3_p_0(transform_hlds__deforest__TypeCtorInfo_172_172, transform_hlds__deforest__CreatedVersions_77, transform_hlds__deforest__CreatedVersions0_20, &transform_hlds__deforest__NewVersions0_78);
          }
#line 789 "deforest.m"
          {
#line 789 "deforest.m"
            mercury__set__to_sorted_list_2_p_0(transform_hlds__deforest__TypeCtorInfo_172_172, transform_hlds__deforest__NewVersions0_78, &transform_hlds__deforest__NewVersions_79);
          }
#line 790 "deforest.m"
          {
#line 790 "deforest.m"
            mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_172_172, transform_hlds__deforest__TypeCtorInfo_169_169, (MR_Word) &transform_hlds__deforest_scalar_common_2[10], transform_hlds__deforest__NewVersions_79, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149)), &transform_hlds__deforest__conv3_STATE_VARIABLE_PDInfo_151_151);
          }
#line 790 "deforest.m"
          transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151 = ((MR_Word) transform_hlds__deforest__conv3_STATE_VARIABLE_PDInfo_151_151);
#line 775 "deforest.m"
          *transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85 = transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84;
#line 775 "deforest.m"
        }
#line 793 "deforest.m"
        break;
#line 793 "deforest.m"
      case (MR_Integer) 1:
#line 794 "deforest.m"
        {
#line 794 "deforest.m"
          MR_Word transform_hlds__deforest__GoalsToProcess_80;
#line 794 "deforest.m"
          MR_Word transform_hlds__deforest__GoalsAndInfo_81;
#line 794 "deforest.m"
          MR_Word transform_hlds__deforest__V_137_137;
#line 794 "deforest.m"
          MR_Word transform_hlds__deforest__V_138_138;
#line 794 "deforest.m"
          MR_Word transform_hlds__deforest__V_139_139;
#line 794 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_141_141;
#line 794 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_143_143;
#line 794 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_145_145;

#line 797 "deforest.m"
          {
#line 797 "deforest.m"
            transform_hlds__deforest__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_139_139, 0) = ((MR_Box) (transform_hlds__deforest__AfterIrrelevant_25));
#line 797 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 797 "deforest.m"
          }
#line 797 "deforest.m"
          {
#line 797 "deforest.m"
            transform_hlds__deforest__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_138_138, 0) = ((MR_Box) (transform_hlds__deforest__Goals_39));
#line 797 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_138_138, 1) = ((MR_Box) (transform_hlds__deforest__V_139_139));
#line 797 "deforest.m"
          }
#line 797 "deforest.m"
          {
#line 797 "deforest.m"
            transform_hlds__deforest__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_137_137, 0) = ((MR_Box) (transform_hlds__deforest__BeforeIrrelevant_24));
#line 797 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_137_137, 1) = ((MR_Box) (transform_hlds__deforest__V_138_138));
#line 797 "deforest.m"
          }
#line 797 "deforest.m"
          {
#line 797 "deforest.m"
            mercury__list__condense_2_p_0(transform_hlds__deforest__TypeCtorInfo_168_168, transform_hlds__deforest__V_137_137, &transform_hlds__deforest__GoalsToProcess_80);
          }
#line 799 "deforest.m"
          {
#line 799 "deforest.m"
            transform_hlds__deforest__compute_goal_infos_4_p_0(transform_hlds__deforest__GoalsToProcess_80, &transform_hlds__deforest__GoalsAndInfo_81, transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_141_141);
          }
#line 800 "deforest.m"
          {
#line 800 "deforest.m"
            mercury__list__append_3_p_1((MR_Word) &transform_hlds__deforest_scalar_common_2[1], transform_hlds__deforest__GoalsAndInfo_81, transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84, transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85);
          }
#line 801 "deforest.m"
          {
#line 801 "deforest.m"
            transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_PDInfo_141_141, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_143_143);
          }
#line 802 "deforest.m"
          {
#line 802 "deforest.m"
            transform_hlds__pd_info__pd_info_set_changed_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_143_143, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_145_145);
          }
#line 803 "deforest.m"
          {
#line 803 "deforest.m"
            transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_145_145, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151);
          }
#line 794 "deforest.m"
        }
#line 793 "deforest.m"
        break;
#line 793 "deforest.m"
    }
#line 807 "deforest.m"
    {
#line 807 "deforest.m"
      transform_hlds__deforest__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 807 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_156_156, 0) = ((MR_Box) (transform_hlds__deforest__Depth0_21));
#line 807 "deforest.m"
    }
#line 807 "deforest.m"
    {
#line 807 "deforest.m"
      transform_hlds__deforest__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_154_154, 0) = ((MR_Box) (transform_hlds__deforest__V_156_156));
#line 807 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 807 "deforest.m"
    }
#line 806 "deforest.m"
    {
#line 806 "deforest.m"
      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "finished deforestation at depth %i\n", transform_hlds__deforest__V_154_154);
    }
#line 809 "deforest.m"
    {
#line 809 "deforest.m"
      transform_hlds__pd_info__pd_info_set_parents_3_p_0(transform_hlds__deforest__Parents0_28, transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151, transform_hlds__deforest__STATE_VARIABLE_PDInfo_87);
    }
#line 656 "deforest.m"
    *transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_83 = transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82;
#line 656 "deforest.m"
  }
#line 650 "deforest.m"
}

#line 636 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0_1(
#line 636 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 636 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 636 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 636 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 636 "deforest.m"
{
#line 636 "deforest.m"
  {
#line 636 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 636 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_HeadVar__3_24;

#line 636 "deforest.m"
    {
#line 636 "deforest.m"
      transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__636__1_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_HeadVar__3_24);
    }
#line 636 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__3_24));
#line 636 "deforest.m"
  }
#line 636 "deforest.m"
}

#line 597 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0(
#line 597 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_7,
#line 597 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierBranchInfo_8,
#line 597 "deforest.m"
  MR_Word transform_hlds__deforest__RevBetweenGoals0_9,
#line 597 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 597 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_12,
#line 597 "deforest.m"
  MR_Word * transform_hlds__deforest__DeforestInfo_13)
#line 597 "deforest.m"
{
#line 603 "deforest.m"
  while (MR_TRUE)
#line 603 "deforest.m"
    {
#line 603 "deforest.m"
      /* tailcall optimized into a loop */
#line 603 "deforest.m"
      {
#line 603 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 603 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_10;
#line 603 "deforest.m"
        MR_Word transform_hlds__deforest__Goals0_11;
#line 614 "deforest.m"
        MR_Word transform_hlds__deforest__LaterGoal_14;
#line 614 "deforest.m"
        MR_Word transform_hlds__deforest__LaterBranchInfo_15;
#line 614 "deforest.m"
        MR_Word transform_hlds__deforest__DeforestBranches_16;
#line 605 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_28_48;
#line 605 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_29_49;
#line 605 "deforest.m"
        MR_Word transform_hlds__deforest__TypeCtorInfo_31_51;
#line 605 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_32_52;
#line 605 "deforest.m"
        MR_Word transform_hlds__deforest__V_19_19;
#line 605 "deforest.m"
        MR_Word transform_hlds__deforest__VarMap1_27;
#line 605 "deforest.m"
        MR_Word transform_hlds__deforest__LeftVars2_31;
#line 605 "deforest.m"
        MR_Word transform_hlds__deforest__VarMap_33;
#line 605 "deforest.m"
        MR_Word transform_hlds__deforest__VarAssoc_34;
#line 605 "deforest.m"
        MR_Word transform_hlds__deforest__GetBranches_35;
#line 605 "deforest.m"
        MR_Word transform_hlds__deforest__DeforestBranches0_41;
#line 627 "deforest.m"
        MR_Word transform_hlds__deforest__V_28_28;
#line 627 "deforest.m"
        MR_Word transform_hlds__deforest__V_29_29;
#line 628 "deforest.m"
        MR_Word transform_hlds__deforest__V_30_30;
#line 628 "deforest.m"
        MR_Word transform_hlds__deforest__V_32_32;
#line 642 "deforest.m"
        MR_Box transform_hlds__deforest__conv1_DeforestBranches_16;

#line 603 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 603 "deforest.m"
          {
#line 603 "deforest.m"
            transform_hlds__deforest__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 0)));
#line 603 "deforest.m"
            transform_hlds__deforest__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 1)));
#line 605 "deforest.m"
            transform_hlds__deforest__LaterGoal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, (MR_Integer) 0)));
#line 605 "deforest.m"
            transform_hlds__deforest__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, (MR_Integer) 1)));
#line 605 "deforest.m"
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 605 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 605 "deforest.m"
              {
#line 605 "deforest.m"
                transform_hlds__deforest__LaterBranchInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_19_19, (MR_Integer) 0)));
#line 627 "deforest.m"
                transform_hlds__deforest__VarMap1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierBranchInfo_8, (MR_Integer) 0)));
#line 627 "deforest.m"
                transform_hlds__deforest__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierBranchInfo_8, (MR_Integer) 1)));
#line 627 "deforest.m"
                transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierBranchInfo_8, (MR_Integer) 2)));
#line 628 "deforest.m"
                transform_hlds__deforest__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterBranchInfo_15, (MR_Integer) 0)));
#line 628 "deforest.m"
                transform_hlds__deforest__LeftVars2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterBranchInfo_15, (MR_Integer) 1)));
#line 628 "deforest.m"
                transform_hlds__deforest__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterBranchInfo_15, (MR_Integer) 2)));
#line 8780 "transform_hlds.deforest.c"
                transform_hlds__deforest__TypeInfo_28_48 = (MR_Word) &transform_hlds__deforest_scalar_common_1[1];
#line 8782 "transform_hlds.deforest.c"
                transform_hlds__deforest__TypeInfo_29_49 = (MR_Word) &transform_hlds__deforest_scalar_common_1[4];
#line 630 "deforest.m"
                {
#line 630 "deforest.m"
                  mercury__map__select_3_p_0(transform_hlds__deforest__TypeInfo_28_48, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__VarMap1_27, transform_hlds__deforest__LeftVars2_31, &transform_hlds__deforest__VarMap_33);
                }
#line 631 "deforest.m"
                {
#line 631 "deforest.m"
                  mercury__map__to_assoc_list_2_p_0(transform_hlds__deforest__TypeInfo_28_48, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__VarMap_33, &transform_hlds__deforest__VarAssoc_34);
                }
#line 632 "deforest.m"
                {
#line 632 "deforest.m"
                  transform_hlds__deforest__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__deforest__TypeInfo_28_48, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__VarMap_33);
                }
#line 632 "deforest.m"
                transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 605 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 605 "deforest.m"
                  {
#line 636 "deforest.m"
                    transform_hlds__deforest__GetBranches_35 = (MR_Word) &transform_hlds__deforest_scalar_common_2[8];
#line 8807 "transform_hlds.deforest.c"
                    transform_hlds__deforest__TypeCtorInfo_31_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 641 "deforest.m"
                    {
#line 641 "deforest.m"
                      mercury__set__init_1_p_0(transform_hlds__deforest__TypeCtorInfo_31_51, &transform_hlds__deforest__DeforestBranches0_41);
                    }
#line 8814 "transform_hlds.deforest.c"
                    transform_hlds__deforest__TypeInfo_32_52 = (MR_Word) &transform_hlds__deforest_scalar_common_2[2];
#line 642 "deforest.m"
                    {
#line 642 "deforest.m"
                      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeInfo_32_52, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__GetBranches_35, transform_hlds__deforest__VarAssoc_34, ((MR_Box) (transform_hlds__deforest__DeforestBranches0_41)), &transform_hlds__deforest__conv1_DeforestBranches_16);
                    }
#line 642 "deforest.m"
                    transform_hlds__deforest__DeforestBranches_16 = ((MR_Word) transform_hlds__deforest__conv1_DeforestBranches_16);
#line 642 "deforest.m"
                    transform_hlds__deforest__succeeded = MR_TRUE;
#line 605 "deforest.m"
                  }
#line 605 "deforest.m"
              }
#line 614 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 609 "deforest.m"
              {
#line 609 "deforest.m"
                MR_Word transform_hlds__deforest__BetweenGoals1_17;
#line 609 "deforest.m"
                MR_Word transform_hlds__deforest__BetweenGoals_18;

#line 609 "deforest.m"
                {
#line 609 "deforest.m"
                  mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__deforest_scalar_common_2[1], transform_hlds__deforest__RevBetweenGoals0_9, &transform_hlds__deforest__BetweenGoals1_17);
                }
#line 610 "deforest.m"
                {
#line 610 "deforest.m"
                  mercury__assoc_list__keys_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[3], transform_hlds__deforest__BetweenGoals1_17, &transform_hlds__deforest__BetweenGoals_18);
                }
#line 611 "deforest.m"
                *transform_hlds__deforest__Goals_12 = transform_hlds__deforest__Goals0_11;
#line 612 "deforest.m"
                {
#line 612 "deforest.m"
                  MR_Word base;
#line 612 "deforest.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 612 "deforest.m"
                  *transform_hlds__deforest__DeforestInfo_13 = base;
#line 612 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_7));
#line 612 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__EarlierBranchInfo_8));
#line 612 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_18));
#line 612 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__deforest__LaterGoal_14));
#line 612 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__deforest__LaterBranchInfo_15));
#line 612 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__deforest__DeforestBranches_16));
#line 612 "deforest.m"
                }
#line 609 "deforest.m"
                transform_hlds__deforest__succeeded = MR_TRUE;
#line 609 "deforest.m"
              }
#line 614 "deforest.m"
            else
#line 615 "deforest.m"
              {
#line 615 "deforest.m"
                MR_Word transform_hlds__deforest__V_20_20;

#line 616 "deforest.m"
                {
#line 616 "deforest.m"
                  transform_hlds__deforest__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_20_20, 0) = ((MR_Box) (transform_hlds__deforest__Goal_10));
#line 616 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_20_20, 1) = ((MR_Box) (transform_hlds__deforest__RevBetweenGoals0_9));
#line 616 "deforest.m"
                }
#line 615 "deforest.m"
                /* direct tailcall eliminated */
#line 615 "deforest.m"
                {
#line 615 "deforest.m"
                  MR_Word transform_hlds__deforest__RevBetweenGoals0__tmp_copy_9 = transform_hlds__deforest__V_20_20;
#line 615 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__4__tmp_copy_4 = transform_hlds__deforest__Goals0_11;

#line 615 "deforest.m"
                  transform_hlds__deforest__HeadVar__4_4 = transform_hlds__deforest__HeadVar__4__tmp_copy_4;
#line 615 "deforest.m"
                  transform_hlds__deforest__RevBetweenGoals0_9 = transform_hlds__deforest__RevBetweenGoals0__tmp_copy_9;
#line 615 "deforest.m"
                }
#line 615 "deforest.m"
                continue;
#line 615 "deforest.m"
              }
#line 603 "deforest.m"
          }
#line 603 "deforest.m"
        return transform_hlds__deforest__succeeded;
#line 603 "deforest.m"
      }
#line 603 "deforest.m"
      break;
#line 603 "deforest.m"
    }
#line 597 "deforest.m"
}

#line 538 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_conj_6_p_0(
#line 538 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 538 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_2,
#line 538 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3,
#line 538 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__4_4,
#line 538 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
#line 538 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6)
#line 538 "deforest.m"
{
#line 542 "deforest.m"
  while (MR_TRUE)
#line 542 "deforest.m"
    {
#line 542 "deforest.m"
      /* tailcall optimized into a loop */
#line 542 "deforest.m"
      {
#line 542 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;

#line 542 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "deforest.m"
          {
#line 543 "deforest.m"
            {
#line 543 "deforest.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__HeadVar__3_3, transform_hlds__deforest__HeadVar__4_4);
            }
#line 542 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_6 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5;
#line 542 "deforest.m"
          }
#line 542 "deforest.m"
        else
#line 545 "deforest.m"
          {
#line 545 "deforest.m"
            MR_Word transform_hlds__deforest__Goal0_13;
#line 545 "deforest.m"
            MR_Word transform_hlds__deforest__MaybeBranchInfo_14;
#line 545 "deforest.m"
            MR_Word transform_hlds__deforest__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 545 "deforest.m"
            MR_Word transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 563 "deforest.m"
            MR_Word transform_hlds__deforest__Goals1_21;
#line 563 "deforest.m"
            MR_Word transform_hlds__deforest__DeforestInfo_22;
#line 548 "deforest.m"
            MR_Word transform_hlds__deforest__GoalBranchInfo_20;
#line 548 "deforest.m"
            MR_Word transform_hlds__deforest__V_44_44;

#line 544 "deforest.m"
            transform_hlds__deforest__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_29_29, (MR_Integer) 0)));
#line 544 "deforest.m"
            transform_hlds__deforest__MaybeBranchInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_29_29, (MR_Integer) 1)));
#line 548 "deforest.m"
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__MaybeBranchInfo_14)) == (MR_mktag((MR_Integer) 1)));
#line 548 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 548 "deforest.m"
              {
#line 548 "deforest.m"
                transform_hlds__deforest__GoalBranchInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeBranchInfo_14, (MR_Integer) 0)));
#line 594 "deforest.m"
                transform_hlds__deforest__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 594 "deforest.m"
                {
#line 594 "deforest.m"
                  transform_hlds__deforest__succeeded = transform_hlds__deforest__search_for_deforest_goal_6_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__GoalBranchInfo_20, transform_hlds__deforest__V_44_44, transform_hlds__deforest__Goals0_15, &transform_hlds__deforest__Goals1_21, &transform_hlds__deforest__DeforestInfo_22);
                }
#line 548 "deforest.m"
              }
#line 563 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 553 "deforest.m"
              {
#line 553 "deforest.m"
                MR_Word transform_hlds__deforest__RevGoals1_23;
#line 553 "deforest.m"
                MR_Word transform_hlds__deforest__Goals2_24;
#line 553 "deforest.m"
                MR_Word transform_hlds__deforest__Optimized_25;
#line 553 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30;

#line 552 "deforest.m"
                {
#line 552 "deforest.m"
                  transform_hlds__deforest__handle_deforestation_9_p_0(transform_hlds__deforest__NonLocals_2, transform_hlds__deforest__DeforestInfo_22, transform_hlds__deforest__HeadVar__3_3, &transform_hlds__deforest__RevGoals1_23, transform_hlds__deforest__Goals1_21, &transform_hlds__deforest__Goals2_24, &transform_hlds__deforest__Optimized_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30);
                }
#line 557 "deforest.m"
#line 557 "deforest.m"
                switch (transform_hlds__deforest__Optimized_25) {
#line 557 "deforest.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 557 "deforest.m"
                  case (MR_Integer) 0:
#line 558 "deforest.m"
                    {
#line 558 "deforest.m"
                      MR_Word transform_hlds__deforest__RevGoals2_26;
#line 558 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_31_31;

#line 559 "deforest.m"
                      {
#line 559 "deforest.m"
                        transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_31_31);
                      }
#line 560 "deforest.m"
                      {
#line 560 "deforest.m"
                        transform_hlds__deforest__RevGoals2_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "deforest.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_26, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
#line 560 "deforest.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_26, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 560 "deforest.m"
                      }
#line 561 "deforest.m"
                      /* direct tailcall eliminated */
#line 561 "deforest.m"
                      {
#line 561 "deforest.m"
                        MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_15;
#line 561 "deforest.m"
                        MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__RevGoals2_26;
#line 561 "deforest.m"
                        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_31_31;

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
#line 558 "deforest.m"
                    }
#line 557 "deforest.m"
                    break;
#line 557 "deforest.m"
                  case (MR_Integer) 1:
#line 556 "deforest.m"
                    {
#line 556 "deforest.m"
                      /* direct tailcall eliminated */
#line 556 "deforest.m"
                      {
#line 556 "deforest.m"
                        MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals2_24;
#line 556 "deforest.m"
                        MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__RevGoals1_23;
#line 556 "deforest.m"
                        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30;

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
#line 556 "deforest.m"
                    }
#line 557 "deforest.m"
                    break;
#line 557 "deforest.m"
                }
#line 553 "deforest.m"
              }
#line 563 "deforest.m"
            else
#line 564 "deforest.m"
              {
#line 564 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;
#line 564 "deforest.m"
                MR_Word transform_hlds__deforest__RevGoals1_36;

#line 564 "deforest.m"
                {
#line 564 "deforest.m"
                  transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34);
                }
#line 565 "deforest.m"
                {
#line 565 "deforest.m"
                  transform_hlds__deforest__RevGoals1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals1_36, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
#line 565 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals1_36, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 565 "deforest.m"
                }
#line 566 "deforest.m"
                /* direct tailcall eliminated */
#line 566 "deforest.m"
                {
#line 566 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_15;
#line 566 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__RevGoals1_36;
#line 566 "deforest.m"
                  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;

#line 566 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 566 "deforest.m"
                  transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 566 "deforest.m"
                  transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 566 "deforest.m"
                }
#line 566 "deforest.m"
                continue;
#line 564 "deforest.m"
              }
#line 545 "deforest.m"
          }
#line 542 "deforest.m"
      }
#line 542 "deforest.m"
      break;
#line 542 "deforest.m"
    }
#line 538 "deforest.m"
}

#line 497 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0_1(
#line 497 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 497 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1)
#line 497 "deforest.m"
{
#line 497 "deforest.m"
  {
#line 497 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 497 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;

#line 497 "deforest.m"
    {
#line 497 "deforest.m"
      return transform_hlds__deforest__succeeded = transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__497__1_1_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1));
    }
#line 497 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 497 "deforest.m"
  }
#line 497 "deforest.m"
}

#line 481 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0(
#line 481 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 481 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_2,
#line 481 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3,
#line 481 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_4,
#line 481 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
#line 481 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6)
#line 481 "deforest.m"
{
#line 485 "deforest.m"
  while (MR_TRUE)
#line 485 "deforest.m"
    {
#line 485 "deforest.m"
      /* tailcall optimized into a loop */
#line 485 "deforest.m"
      {
#line 485 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;

#line 485 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 485 "deforest.m"
          {
#line 486 "deforest.m"
            {
#line 486 "deforest.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__HeadVar__3_3, transform_hlds__deforest__Goals_4);
            }
#line 485 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_6 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5;
#line 485 "deforest.m"
          }
#line 485 "deforest.m"
        else
#line 488 "deforest.m"
          {
#line 488 "deforest.m"
            MR_Word transform_hlds__deforest__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 488 "deforest.m"
            MR_Word transform_hlds__deforest__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 488 "deforest.m"
            MR_Word transform_hlds__deforest__ModuleInfo_19;
#line 527 "deforest.m"
            MR_Word transform_hlds__deforest__SymName_25;
#line 527 "deforest.m"
            MR_Word transform_hlds__deforest__Constraints_31;
#line 527 "deforest.m"
            MR_Word transform_hlds__deforest__Goals1_32;
#line 494 "deforest.m"
            MR_Word transform_hlds__deforest__TypeCtorInfo_73_73;
#line 494 "deforest.m"
            MR_Word transform_hlds__deforest__PredId_20;
#line 494 "deforest.m"
            MR_Word transform_hlds__deforest__PredInfo_27;
#line 494 "deforest.m"
            MR_Word transform_hlds__deforest__V_44_44;
#line 494 "deforest.m"
            MR_Word transform_hlds__deforest__V_45_45;
#line 493 "deforest.m"
            MR_Word transform_hlds__deforest__V_26_26;
#line 493 "deforest.m"
            MR_Integer transform_hlds__deforest___ProcId_21;
#line 493 "deforest.m"
            MR_Word transform_hlds__deforest___Args_22;
#line 493 "deforest.m"
            MR_Word transform_hlds__deforest__V_23_23;
#line 493 "deforest.m"
            MR_Word transform_hlds__deforest__V_24_24;
#line 501 "deforest.m"
            MR_Word transform_hlds__deforest__V_33_33;
#line 501 "deforest.m"
            MR_Word transform_hlds__deforest__V_34_34;

#line 489 "deforest.m"
            {
#line 489 "deforest.m"
              transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__ModuleInfo_19);
            }
#line 493 "deforest.m"
            transform_hlds__deforest__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_13, (MR_Integer) 0)));
#line 493 "deforest.m"
            transform_hlds__deforest__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_13, (MR_Integer) 1)));
#line 493 "deforest.m"
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_44_44)) == (MR_mktag((MR_Integer) 2)));
#line 493 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 493 "deforest.m"
              {
#line 493 "deforest.m"
                transform_hlds__deforest__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 0)));
#line 493 "deforest.m"
                transform_hlds__deforest___ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 1)));
#line 493 "deforest.m"
                transform_hlds__deforest___Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 2)));
#line 493 "deforest.m"
                transform_hlds__deforest__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 3)));
#line 493 "deforest.m"
                transform_hlds__deforest__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 4)));
#line 493 "deforest.m"
                transform_hlds__deforest__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 5)));
#line 495 "deforest.m"
                {
#line 495 "deforest.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__deforest__ModuleInfo_19, transform_hlds__deforest__PredId_20, &transform_hlds__deforest__PredInfo_27);
                }
#line 496 "deforest.m"
                {
#line 496 "deforest.m"
                  transform_hlds__deforest__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__deforest__PredInfo_27);
                }
#line 496 "deforest.m"
                transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 494 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 494 "deforest.m"
                  {
#line 497 "deforest.m"
                    transform_hlds__deforest__V_45_45 = (MR_Word) &transform_hlds__deforest_scalar_common_2[7];
#line 9326 "transform_hlds.deforest.c"
                    transform_hlds__deforest__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 497 "deforest.m"
                    {
#line 497 "deforest.m"
                      mercury__list__takewhile_4_p_0(transform_hlds__deforest__TypeCtorInfo_73_73, transform_hlds__deforest__V_45_45, transform_hlds__deforest__Goals0_14, &transform_hlds__deforest__Constraints_31, &transform_hlds__deforest__Goals1_32);
                    }
#line 501 "deforest.m"
                    transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Constraints_31)) == (MR_mktag((MR_Integer) 1)));
#line 501 "deforest.m"
                    if (transform_hlds__deforest__succeeded)
#line 501 "deforest.m"
                      {
#line 501 "deforest.m"
                        transform_hlds__deforest__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Constraints_31, (MR_Integer) 0)));
#line 501 "deforest.m"
                        transform_hlds__deforest__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Constraints_31, (MR_Integer) 1)));
#line 501 "deforest.m"
                      }
#line 494 "deforest.m"
                  }
#line 493 "deforest.m"
              }
#line 527 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 503 "deforest.m"
              {
#line 503 "deforest.m"
                MR_String transform_hlds__deforest__SymNameString_35;
#line 503 "deforest.m"
                MR_Word transform_hlds__deforest__Globals_36;
#line 503 "deforest.m"
                MR_Word transform_hlds__deforest__DebugPD_37;
#line 503 "deforest.m"
                MR_Word transform_hlds__deforest__MaybeGoal_40;
#line 503 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59;
#line 506 "deforest.m"
                MR_Word transform_hlds__deforest__V_51_51;
#line 506 "deforest.m"
                MR_Word transform_hlds__deforest__V_53_53;
#line 512 "deforest.m"
                MR_Word transform_hlds__deforest__ConjNonLocals_39;

#line 503 "deforest.m"
                {
#line 503 "deforest.m"
                  transform_hlds__deforest__SymNameString_35 = mdbcomp__sym_name__sym_name_to_string_1_f_0(transform_hlds__deforest__SymName_25);
                }
#line 504 "deforest.m"
                {
#line 504 "deforest.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_19, &transform_hlds__deforest__Globals_36);
                }
#line 505 "deforest.m"
                {
#line 505 "deforest.m"
                  libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_36, (MR_Integer) 72, &transform_hlds__deforest__DebugPD_37);
                }
#line 509 "deforest.m"
                {
#line 509 "deforest.m"
                  transform_hlds__deforest__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 509 "deforest.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_53_53, 0) = ((MR_Box) (transform_hlds__deforest__SymNameString_35));
#line 509 "deforest.m"
                }
#line 509 "deforest.m"
                {
#line 509 "deforest.m"
                  transform_hlds__deforest__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_51_51, 0) = ((MR_Box) (transform_hlds__deforest__V_53_53));
#line 509 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 509 "deforest.m"
                }
#line 507 "deforest.m"
                {
#line 507 "deforest.m"
                  transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_37, (MR_String) "propagating constraints into call to %s\n", transform_hlds__deforest__V_51_51);
                }
#line 512 "deforest.m"
                {
#line 512 "deforest.m"
                  transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(transform_hlds__deforest__NonLocals_2, transform_hlds__deforest__HeadVar__3_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__deforest__Goal0_13, transform_hlds__deforest__Constraints_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__deforest__Goals1_32, &transform_hlds__deforest__ConjNonLocals_39);
                }
#line 514 "deforest.m"
                {
#line 514 "deforest.m"
                  transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__Constraints_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__MaybeGoal_40, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59);
                }
#line 521 "deforest.m"
                if ((transform_hlds__deforest__MaybeGoal_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 522 "deforest.m"
                  {
#line 522 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_60_60;
#line 522 "deforest.m"
                    MR_Word transform_hlds__deforest__V_61_61;

#line 523 "deforest.m"
                    {
#line 523 "deforest.m"
                      transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_60_60);
                    }
#line 525 "deforest.m"
                    {
#line 525 "deforest.m"
                      transform_hlds__deforest__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_61_61, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
#line 525 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_61_61, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 525 "deforest.m"
                    }
#line 524 "deforest.m"
                    /* direct tailcall eliminated */
#line 524 "deforest.m"
                    {
#line 524 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_14;
#line 524 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__V_61_61;
#line 524 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_60_60;

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
#line 522 "deforest.m"
                  }
#line 521 "deforest.m"
                else
#line 516 "deforest.m"
                  {
#line 516 "deforest.m"
                    MR_Word transform_hlds__deforest__Goal_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeGoal_40, (MR_Integer) 0)));
#line 516 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_64_64;
#line 516 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_65_65;
#line 516 "deforest.m"
                    MR_Word transform_hlds__deforest__V_66_66;

#line 517 "deforest.m"
                    {
#line 517 "deforest.m"
                      transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_64_64);
                    }
#line 518 "deforest.m"
                    {
#line 518 "deforest.m"
                      transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal_41, transform_hlds__deforest__STATE_VARIABLE_PDInfo_64_64, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_65_65);
                    }
#line 520 "deforest.m"
                    {
#line 520 "deforest.m"
                      transform_hlds__deforest__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_66_66, 0) = ((MR_Box) (transform_hlds__deforest__Goal_41));
#line 520 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_66_66, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 520 "deforest.m"
                    }
#line 519 "deforest.m"
                    /* direct tailcall eliminated */
#line 519 "deforest.m"
                    {
#line 519 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals1_32;
#line 519 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__V_66_66;
#line 519 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_65_65;

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
#line 516 "deforest.m"
                  }
#line 503 "deforest.m"
              }
#line 527 "deforest.m"
            else
#line 528 "deforest.m"
              {
#line 528 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68;
#line 528 "deforest.m"
                MR_Word transform_hlds__deforest__V_69_69;

#line 528 "deforest.m"
                {
#line 528 "deforest.m"
                  transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68);
                }
#line 530 "deforest.m"
                {
#line 530 "deforest.m"
                  transform_hlds__deforest__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_69_69, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
#line 530 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_69_69, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 530 "deforest.m"
                }
#line 529 "deforest.m"
                /* direct tailcall eliminated */
#line 529 "deforest.m"
                {
#line 529 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_14;
#line 529 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__V_69_69;
#line 529 "deforest.m"
                  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68;

#line 529 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 529 "deforest.m"
                  transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 529 "deforest.m"
                  transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 529 "deforest.m"
                }
#line 529 "deforest.m"
                continue;
#line 528 "deforest.m"
              }
#line 488 "deforest.m"
          }
#line 485 "deforest.m"
      }
#line 485 "deforest.m"
      break;
#line 485 "deforest.m"
    }
#line 481 "deforest.m"
}

#line 433 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__compute_goal_infos_4_p_0(
#line 433 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 433 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
#line 433 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
#line 433 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4)
#line 433 "deforest.m"
{
#line 436 "deforest.m"
  {
#line 436 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 436 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "deforest.m"
      {
#line 436 "deforest.m"
        *transform_hlds__deforest__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 436 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 436 "deforest.m"
      }
#line 436 "deforest.m"
    else
#line 438 "deforest.m"
      {
#line 438 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 438 "deforest.m"
        MR_Word transform_hlds__deforest__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 438 "deforest.m"
        MR_Word transform_hlds__deforest__MaybeBranchInfo_10;
#line 438 "deforest.m"
        MR_Word transform_hlds__deforest__Goals_11;
#line 438 "deforest.m"
        MR_Word transform_hlds__deforest__V_15_15;
#line 438 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16;
#line 438 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;
#line 438 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_8, (MR_Integer) 0)));
#line 447 "deforest.m"
        MR_Word transform_hlds__deforest__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_8, (MR_Integer) 1)));

#line 454 "deforest.m"
#line 454 "deforest.m"
        switch (MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_24)) {
#line 454 "deforest.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 454 "deforest.m"
          case (MR_Integer) 0:
#line 461 "deforest.m"
            {
#line 462 "deforest.m"
              transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 461 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 461 "deforest.m"
            }
#line 454 "deforest.m"
            break;
#line 454 "deforest.m"
          case (MR_Integer) 1:
#line 461 "deforest.m"
            {
#line 462 "deforest.m"
              transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 461 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 461 "deforest.m"
            }
#line 454 "deforest.m"
            break;
#line 454 "deforest.m"
          case (MR_Integer) 2:
#line 464 "deforest.m"
            {
#line 464 "deforest.m"
              MR_Word transform_hlds__deforest__PredId_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 0)));
#line 464 "deforest.m"
              MR_Integer transform_hlds__deforest__ProcId_57 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 1)));
#line 464 "deforest.m"
              MR_Word transform_hlds__deforest__Args_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 2)));
#line 464 "deforest.m"
              MR_Word transform_hlds__deforest__ProcBranchInfos_62;
#line 464 "deforest.m"
              MR_Word transform_hlds__deforest__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 3)));
#line 464 "deforest.m"
              MR_Word transform_hlds__deforest__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 4)));
#line 464 "deforest.m"
              MR_Word transform_hlds__deforest__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 5)));
#line 471 "deforest.m"
              MR_Word transform_hlds__deforest__BranchInfo0_63;
#line 466 "deforest.m"
              MR_Word transform_hlds__deforest__V_69_69;
#line 466 "deforest.m"
              MR_Box transform_hlds__deforest__conv0_BranchInfo0_63;

#line 465 "deforest.m"
              {
#line 465 "deforest.m"
                transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__ProcBranchInfos_62);
              }
#line 466 "deforest.m"
              {
#line 466 "deforest.m"
                transform_hlds__deforest__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 466 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_69_69, 0) = ((MR_Box) (transform_hlds__deforest__PredId_56));
#line 466 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_69_69, 1) = ((MR_Box) (transform_hlds__deforest__ProcId_57));
#line 466 "deforest.m"
              }
#line 466 "deforest.m"
              {
#line 466 "deforest.m"
                transform_hlds__deforest__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[0], transform_hlds__deforest__ProcBranchInfos_62, ((MR_Box) (transform_hlds__deforest__V_69_69)), &transform_hlds__deforest__conv0_BranchInfo0_63);
              }
#line 466 "deforest.m"
              if (transform_hlds__deforest__succeeded)
#line 466 "deforest.m"
                {
#line 466 "deforest.m"
                  transform_hlds__deforest__BranchInfo0_63 = ((MR_Word) transform_hlds__deforest__conv0_BranchInfo0_63);
#line 466 "deforest.m"
                  transform_hlds__deforest__succeeded = MR_TRUE;
#line 466 "deforest.m"
                }
#line 471 "deforest.m"
              if (transform_hlds__deforest__succeeded)
#line 469 "deforest.m"
                {
#line 469 "deforest.m"
                  MR_Word transform_hlds__deforest__BranchInfo_64;

#line 469 "deforest.m"
                  {
#line 469 "deforest.m"
                    transform_hlds__pd_util__convert_branch_info_3_p_0(transform_hlds__deforest__BranchInfo0_63, transform_hlds__deforest__Args_58, &transform_hlds__deforest__BranchInfo_64);
                  }
#line 470 "deforest.m"
                  {
#line 470 "deforest.m"
                    transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 470 "deforest.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeBranchInfo_10, 0) = ((MR_Box) (transform_hlds__deforest__BranchInfo_64));
#line 470 "deforest.m"
                  }
#line 469 "deforest.m"
                }
#line 471 "deforest.m"
              else
#line 472 "deforest.m"
                transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 464 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 464 "deforest.m"
            }
#line 454 "deforest.m"
            break;
#line 454 "deforest.m"
          case (MR_Integer) 3:
#line 454 "deforest.m"
#line 454 "deforest.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 0)))) {
#line 454 "deforest.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 454 "deforest.m"
              case (MR_Integer) 0:
#line 454 "deforest.m"
              case (MR_Integer) 1:
#line 454 "deforest.m"
              case (MR_Integer) 2:
#line 454 "deforest.m"
              case (MR_Integer) 5:
#line 461 "deforest.m"
                {
#line 462 "deforest.m"
                  transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 461 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 461 "deforest.m"
                }
#line 454 "deforest.m"
                break;
#line 454 "deforest.m"
              case (MR_Integer) 3:
#line 454 "deforest.m"
              case (MR_Integer) 4:
#line 454 "deforest.m"
              case (MR_Integer) 6:
#line 453 "deforest.m"
                {
#line 453 "deforest.m"
                  transform_hlds__pd_util__get_branch_vars_goal_4_p_0(transform_hlds__deforest__Goal_8, &transform_hlds__deforest__MaybeBranchInfo_10, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16);
                }
#line 454 "deforest.m"
                break;
#line 454 "deforest.m"
              case (MR_Integer) 7:
#line 475 "deforest.m"
                {
#line 476 "deforest.m"
                  {
#line 476 "deforest.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforest_get_branch_vars_goal\'/4", (MR_String) "shorthand");
#line 476 "deforest.m"
                    return;
                  }
#line 475 "deforest.m"
                }
#line 454 "deforest.m"
                break;
#line 454 "deforest.m"
            }
#line 454 "deforest.m"
            break;
#line 454 "deforest.m"
        }
#line 437 "deforest.m"
        {
#line 437 "deforest.m"
          transform_hlds__deforest__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 437 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_15_15, 0) = ((MR_Box) (transform_hlds__deforest__Goal_8));
#line 437 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_15_15, 1) = ((MR_Box) (transform_hlds__deforest__MaybeBranchInfo_10));
#line 437 "deforest.m"
        }
#line 440 "deforest.m"
        {
#line 440 "deforest.m"
          transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal_8, transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17);
        }
#line 441 "deforest.m"
        {
#line 441 "deforest.m"
          transform_hlds__deforest__compute_goal_infos_4_p_0(transform_hlds__deforest__Goals0_9, &transform_hlds__deforest__Goals_11, transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17, transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);
        }
#line 437 "deforest.m"
        {
#line 437 "deforest.m"
          MR_Word base;
#line 437 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "deforest.m"
          *transform_hlds__deforest__HeadVar__2_2 = base;
#line 437 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__V_15_15));
#line 437 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_11));
#line 437 "deforest.m"
        }
#line 438 "deforest.m"
      }
#line 436 "deforest.m"
  }
#line 433 "deforest.m"
}

#line 412 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(
#line 412 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 412 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 412 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_3,
#line 412 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
#line 412 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5)
#line 412 "deforest.m"
{
#line 416 "deforest.m"
  while (MR_TRUE)
#line 416 "deforest.m"
    {
#line 416 "deforest.m"
      /* tailcall optimized into a loop */
#line 416 "deforest.m"
      {
#line 416 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;

#line 416 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 416 "deforest.m"
          {
#line 417 "deforest.m"
            {
#line 417 "deforest.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__HeadVar__2_2, transform_hlds__deforest__Goals_3);
            }
#line 416 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4;
#line 416 "deforest.m"
          }
#line 416 "deforest.m"
        else
#line 418 "deforest.m"
          {
#line 418 "deforest.m"
            MR_Word transform_hlds__deforest__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 418 "deforest.m"
            MR_Word transform_hlds__deforest__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "deforest.m"
            MR_Word transform_hlds__deforest__Goal1_16;
#line 418 "deforest.m"
            MR_Word transform_hlds__deforest__RevGoals2_20;
#line 418 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23;
#line 418 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24;
#line 418 "deforest.m"
            MR_Word transform_hlds__deforest__GoalExpr0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_11, (MR_Integer) 0)));
#line 418 "deforest.m"
            MR_Word transform_hlds__deforest__GoalInfo0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_11, (MR_Integer) 1)));
#line 418 "deforest.m"
            MR_Word transform_hlds__deforest__GoalExpr_37;
#line 418 "deforest.m"
            MR_Word transform_hlds__deforest__GoalInfo_38;
#line 424 "deforest.m"
            MR_Word transform_hlds__deforest__Goals1_17;
#line 421 "deforest.m"
            MR_Word transform_hlds__deforest__V_25_25;
#line 421 "deforest.m"
            MR_Word transform_hlds__deforest__V_26_26;
#line 421 "deforest.m"
            MR_Word transform_hlds__deforest__V_18_18;

#line 280 "deforest.m"
            {
#line 280 "deforest.m"
              transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_35, &transform_hlds__deforest__GoalExpr_37, transform_hlds__deforest__GoalInfo0_36, &transform_hlds__deforest__GoalInfo_38, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23);
            }
#line 281 "deforest.m"
            {
#line 281 "deforest.m"
              transform_hlds__deforest__Goal1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "deforest.m"
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_37));
#line 281 "deforest.m"
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_38));
#line 281 "deforest.m"
            }
#line 420 "deforest.m"
            {
#line 420 "deforest.m"
              transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal1_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24);
            }
#line 421 "deforest.m"
            transform_hlds__deforest__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, (MR_Integer) 0)));
#line 421 "deforest.m"
            transform_hlds__deforest__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, (MR_Integer) 1)));
#line 421 "deforest.m"
            transform_hlds__deforest__succeeded = ((((MR_tag((MR_Word) transform_hlds__deforest__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 421 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 421 "deforest.m"
              {
#line 421 "deforest.m"
                transform_hlds__deforest__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_25_25, (MR_Integer) 1)));
#line 421 "deforest.m"
                transform_hlds__deforest__Goals1_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_25_25, (MR_Integer) 2)));
#line 421 "deforest.m"
                transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_26_26 == (MR_Integer) 0);
#line 421 "deforest.m"
              }
#line 424 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 422 "deforest.m"
              {
#line 422 "deforest.m"
                MR_Word transform_hlds__deforest__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 422 "deforest.m"
                MR_Word transform_hlds__deforest__RevGoals1_19;

#line 422 "deforest.m"
                {
#line 422 "deforest.m"
                  mercury__list__reverse_2_p_0(transform_hlds__deforest__TypeCtorInfo_29_29, transform_hlds__deforest__Goals1_17, &transform_hlds__deforest__RevGoals1_19);
                }
#line 423 "deforest.m"
                {
#line 423 "deforest.m"
                  mercury__list__append_3_p_1(transform_hlds__deforest__TypeCtorInfo_29_29, transform_hlds__deforest__RevGoals1_19, transform_hlds__deforest__HeadVar__2_2, &transform_hlds__deforest__RevGoals2_20);
                }
#line 422 "deforest.m"
              }
#line 424 "deforest.m"
            else
#line 425 "deforest.m"
              {
#line 425 "deforest.m"
                transform_hlds__deforest__RevGoals2_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_20, 0) = ((MR_Box) (transform_hlds__deforest__Goal1_16));
#line 425 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_20, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__2_2));
#line 425 "deforest.m"
              }
#line 427 "deforest.m"
            /* direct tailcall eliminated */
#line 427 "deforest.m"
            {
#line 427 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_12;
#line 427 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__2__tmp_copy_2 = transform_hlds__deforest__RevGoals2_20;
#line 427 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24;

#line 427 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_4;
#line 427 "deforest.m"
              transform_hlds__deforest__HeadVar__2_2 = transform_hlds__deforest__HeadVar__2__tmp_copy_2;
#line 427 "deforest.m"
              transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 427 "deforest.m"
            }
#line 427 "deforest.m"
            continue;
#line 418 "deforest.m"
          }
#line 416 "deforest.m"
      }
#line 416 "deforest.m"
      break;
#line 416 "deforest.m"
    }
#line 412 "deforest.m"
}

#line 393 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_cases_5_p_0(
#line 393 "deforest.m"
  MR_Word transform_hlds__deforest__Var_1,
#line 393 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 393 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_3,
#line 393 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
#line 393 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5)
#line 393 "deforest.m"
{
#line 396 "deforest.m"
  {
#line 396 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 396 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "deforest.m"
      {
#line 396 "deforest.m"
        *transform_hlds__deforest__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 396 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4;
#line 396 "deforest.m"
      }
#line 396 "deforest.m"
    else
#line 397 "deforest.m"
      {
#line 397 "deforest.m"
        MR_Word transform_hlds__deforest__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0)));
#line 397 "deforest.m"
        MR_Word transform_hlds__deforest__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "deforest.m"
        MR_Word transform_hlds__deforest__Case_13;
#line 397 "deforest.m"
        MR_Word transform_hlds__deforest__Cases_14;
#line 397 "deforest.m"
        MR_Word transform_hlds__deforest__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_11, (MR_Integer) 0)));
#line 397 "deforest.m"
        MR_Word transform_hlds__deforest__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_11, (MR_Integer) 1)));
#line 397 "deforest.m"
        MR_Word transform_hlds__deforest__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_11, (MR_Integer) 2)));
#line 397 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_19;
#line 397 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_20;
#line 397 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23;
#line 397 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24;
#line 397 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_25_25;
#line 397 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr0_32;
#line 397 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo0_33;
#line 397 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr_34;
#line 397 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo_35;

#line 401 "deforest.m"
        {
#line 401 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4, &transform_hlds__deforest__InstMap0_19);
        }
#line 402 "deforest.m"
        {
#line 402 "deforest.m"
          transform_hlds__pd_info__pd_info_bind_var_to_functors_5_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__MainConsId_16, transform_hlds__deforest__OtherConsIds_17, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23);
        }
#line 279 "deforest.m"
        transform_hlds__deforest__GoalExpr0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_18, (MR_Integer) 0)));
#line 279 "deforest.m"
        transform_hlds__deforest__GoalInfo0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_18, (MR_Integer) 1)));
#line 280 "deforest.m"
        {
#line 280 "deforest.m"
          transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_32, &transform_hlds__deforest__GoalExpr_34, transform_hlds__deforest__GoalInfo0_33, &transform_hlds__deforest__GoalInfo_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24);
        }
#line 281 "deforest.m"
        {
#line 281 "deforest.m"
          transform_hlds__deforest__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_20, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_34));
#line 281 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_20, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_35));
#line 281 "deforest.m"
        }
#line 404 "deforest.m"
        {
#line 404 "deforest.m"
          transform_hlds__deforest__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 404 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_13, 0) = ((MR_Box) (transform_hlds__deforest__MainConsId_16));
#line 404 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_13, 1) = ((MR_Box) (transform_hlds__deforest__OtherConsIds_17));
#line 404 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_13, 2) = ((MR_Box) (transform_hlds__deforest__Goal_20));
#line 404 "deforest.m"
        }
#line 405 "deforest.m"
        {
#line 405 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_25_25);
        }
#line 406 "deforest.m"
        {
#line 406 "deforest.m"
          transform_hlds__deforest__deforest_cases_5_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__Cases0_12, &transform_hlds__deforest__Cases_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_25_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_5);
        }
#line 397 "deforest.m"
        {
#line 397 "deforest.m"
          MR_Word base;
#line 397 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "deforest.m"
          *transform_hlds__deforest__HeadVar__3_3 = base;
#line 397 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Case_13));
#line 397 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Cases_14));
#line 397 "deforest.m"
        }
#line 397 "deforest.m"
      }
#line 396 "deforest.m"
  }
#line 393 "deforest.m"
}

#line 381 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_disj_4_p_0(
#line 381 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 381 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
#line 381 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
#line 381 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4)
#line 381 "deforest.m"
{
#line 384 "deforest.m"
  {
#line 384 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 384 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "deforest.m"
      {
#line 384 "deforest.m"
        *transform_hlds__deforest__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 384 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 384 "deforest.m"
      }
#line 384 "deforest.m"
    else
#line 385 "deforest.m"
      {
#line 385 "deforest.m"
        MR_Word transform_hlds__deforest__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 385 "deforest.m"
        MR_Word transform_hlds__deforest__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 385 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_10;
#line 385 "deforest.m"
        MR_Word transform_hlds__deforest__Goals_11;
#line 385 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_13;
#line 385 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16;
#line 385 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;
#line 385 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr0_24;
#line 385 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo0_25;
#line 385 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr_26;
#line 385 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo_27;

#line 386 "deforest.m"
        {
#line 386 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__InstMap0_13);
        }
#line 279 "deforest.m"
        transform_hlds__deforest__GoalExpr0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_8, (MR_Integer) 0)));
#line 279 "deforest.m"
        transform_hlds__deforest__GoalInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_8, (MR_Integer) 1)));
#line 280 "deforest.m"
        {
#line 280 "deforest.m"
          transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_24, &transform_hlds__deforest__GoalExpr_26, transform_hlds__deforest__GoalInfo0_25, &transform_hlds__deforest__GoalInfo_27, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16);
        }
#line 281 "deforest.m"
        {
#line 281 "deforest.m"
          transform_hlds__deforest__Goal_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_26));
#line 281 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_27));
#line 281 "deforest.m"
        }
#line 388 "deforest.m"
        {
#line 388 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17);
        }
#line 389 "deforest.m"
        {
#line 389 "deforest.m"
          transform_hlds__deforest__deforest_disj_4_p_0(transform_hlds__deforest__Goals0_9, &transform_hlds__deforest__Goals_11, transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17, transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);
        }
#line 385 "deforest.m"
        {
#line 385 "deforest.m"
          MR_Word base;
#line 385 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "deforest.m"
          *transform_hlds__deforest__HeadVar__2_2 = base;
#line 385 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Goal_10));
#line 385 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_11));
#line 385 "deforest.m"
        }
#line 385 "deforest.m"
      }
#line 384 "deforest.m"
  }
#line 381 "deforest.m"
}

#line 283 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_goal_expr_6_p_0(
#line 283 "deforest.m"
  MR_Word transform_hlds__deforest__GoalExpr0_7,
#line 283 "deforest.m"
  MR_Word * transform_hlds__deforest__GoalExpr_8,
#line 283 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60,
#line 283 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61,
#line 283 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62,
#line 283 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_63)
#line 283 "deforest.m"
{
#line 288 "deforest.m"
  {
#line 288 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 288 "deforest.m"
#line 288 "deforest.m"
    switch (MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) {
#line 288 "deforest.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 288 "deforest.m"
      case (MR_Integer) 0:
#line 346 "deforest.m"
        {
#line 346 "deforest.m"
          MR_Word transform_hlds__deforest__SubGoal0_31 = (MR_Word) MR_body(((MR_Word) transform_hlds__deforest__GoalExpr0_7), (MR_Integer) 0);
#line 346 "deforest.m"
          MR_Word transform_hlds__deforest__SubGoal_32;

#line 347 "deforest.m"
          {
#line 347 "deforest.m"
            transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__SubGoal0_31, &transform_hlds__deforest__SubGoal_32, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
          }
#line 348 "deforest.m"
          *transform_hlds__deforest__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__deforest__SubGoal_32);
#line 346 "deforest.m"
          *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 346 "deforest.m"
        }
#line 288 "deforest.m"
        break;
#line 288 "deforest.m"
      case (MR_Integer) 1:
#line 371 "deforest.m"
        {
#line 372 "deforest.m"
          *transform_hlds__deforest__GoalExpr_8 = transform_hlds__deforest__GoalExpr0_7;
#line 371 "deforest.m"
          *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 371 "deforest.m"
          *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 371 "deforest.m"
        }
#line 288 "deforest.m"
        break;
#line 288 "deforest.m"
      case (MR_Integer) 2:
#line 363 "deforest.m"
        {
#line 363 "deforest.m"
          MR_Word transform_hlds__deforest__PredId_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)));
#line 363 "deforest.m"
          MR_Integer transform_hlds__deforest__ProcId_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 363 "deforest.m"
          MR_Word transform_hlds__deforest__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
#line 363 "deforest.m"
          MR_Word transform_hlds__deforest__BuiltinState_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 3)));
#line 363 "deforest.m"
          MR_Word transform_hlds__deforest__Name_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 5)));
#line 363 "deforest.m"
          MR_Word transform_hlds__deforest__V_67_67;
#line 363 "deforest.m"
          MR_Word transform_hlds__deforest__V_68_68;
#line 363 "deforest.m"
          MR_Word transform_hlds__deforest__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 4)));

#line 365 "deforest.m"
          {
#line 365 "deforest.m"
            transform_hlds__deforest__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 365 "deforest.m"
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_67_67, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr0_7));
#line 365 "deforest.m"
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_67_67, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60));
#line 365 "deforest.m"
          }
#line 364 "deforest.m"
          {
#line 364 "deforest.m"
            transform_hlds__deforest__deforest_call_9_p_0(transform_hlds__deforest__PredId_36, transform_hlds__deforest__ProcId_37, transform_hlds__deforest__Args_38, transform_hlds__deforest__Name_41, transform_hlds__deforest__BuiltinState_39, transform_hlds__deforest__V_67_67, &transform_hlds__deforest__V_68_68, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
          }
#line 365 "deforest.m"
          *transform_hlds__deforest__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_68_68, (MR_Integer) 0)));
#line 365 "deforest.m"
          *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_68_68, (MR_Integer) 1)));
#line 363 "deforest.m"
        }
#line 288 "deforest.m"
        break;
#line 288 "deforest.m"
      case (MR_Integer) 3:
#line 288 "deforest.m"
#line 288 "deforest.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)))) {
#line 288 "deforest.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 288 "deforest.m"
          case (MR_Integer) 0:
#line 371 "deforest.m"
            {
#line 372 "deforest.m"
              *transform_hlds__deforest__GoalExpr_8 = transform_hlds__deforest__GoalExpr0_7;
#line 371 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 371 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 371 "deforest.m"
            }
#line 288 "deforest.m"
            break;
#line 288 "deforest.m"
          case (MR_Integer) 1:
#line 371 "deforest.m"
            {
#line 372 "deforest.m"
              *transform_hlds__deforest__GoalExpr_8 = transform_hlds__deforest__GoalExpr0_7;
#line 371 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 371 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 371 "deforest.m"
            }
#line 288 "deforest.m"
            break;
#line 288 "deforest.m"
          case (MR_Integer) 2:
#line 288 "deforest.m"
            {
#line 288 "deforest.m"
              MR_Word transform_hlds__deforest__ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 288 "deforest.m"
              MR_Word transform_hlds__deforest__Goals_13;
#line 288 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));

#line 320 "deforest.m"
#line 320 "deforest.m"
              switch (transform_hlds__deforest__ConjType_11) {
#line 320 "deforest.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 320 "deforest.m"
                case (MR_Integer) 1:
#line 321 "deforest.m"
                  {
#line 321 "deforest.m"
                    *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 321 "deforest.m"
                    transform_hlds__deforest__Goals_13 = transform_hlds__deforest__STATE_VARIABLE_Goals_81_81;
#line 321 "deforest.m"
                  }
#line 320 "deforest.m"
                  break;
#line 320 "deforest.m"
                case (MR_Integer) 0:
#line 292 "deforest.m"
                  {
#line 292 "deforest.m"
                    MR_Word transform_hlds__deforest__InstMap0_14;
#line 292 "deforest.m"
                    MR_Word transform_hlds__deforest__NonLocals_15;
#line 292 "deforest.m"
                    MR_Word transform_hlds__deforest__ModuleInfo_16;
#line 292 "deforest.m"
                    MR_Word transform_hlds__deforest__Globals_17;
#line 292 "deforest.m"
                    MR_Word transform_hlds__deforest__Deforestation_18;
#line 292 "deforest.m"
                    MR_Word transform_hlds__deforest__Constraints_19;
#line 292 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_83_83;
#line 292 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84;
#line 292 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
#line 292 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_91_91;
#line 292 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92;
#line 292 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94;
#line 292 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;

#line 293 "deforest.m"
                    {
#line 293 "deforest.m"
                      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__InstMap0_14);
                    }
#line 294 "deforest.m"
                    {
#line 294 "deforest.m"
                      transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_81_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__STATE_VARIABLE_Goals_83_83, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84);
                    }
#line 295 "deforest.m"
                    {
#line 295 "deforest.m"
                      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85);
                    }
#line 296 "deforest.m"
                    {
#line 296 "deforest.m"
                      transform_hlds__deforest__NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60);
                    }
#line 297 "deforest.m"
                    {
#line 297 "deforest.m"
                      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__ModuleInfo_16);
                    }
#line 298 "deforest.m"
                    {
#line 298 "deforest.m"
                      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_16, &transform_hlds__deforest__Globals_17);
                    }
#line 299 "deforest.m"
                    {
#line 299 "deforest.m"
                      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_17, (MR_Integer) 391, &transform_hlds__deforest__Deforestation_18);
                    }
#line 306 "deforest.m"
#line 306 "deforest.m"
                    switch (transform_hlds__deforest__Deforestation_18) {
#line 306 "deforest.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 306 "deforest.m"
                      case (MR_Integer) 0:
#line 307 "deforest.m"
                        {
#line 307 "deforest.m"
                          transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
#line 307 "deforest.m"
                          transform_hlds__deforest__STATE_VARIABLE_Goals_91_91 = transform_hlds__deforest__STATE_VARIABLE_Goals_83_83;
#line 307 "deforest.m"
                        }
#line 306 "deforest.m"
                        break;
#line 306 "deforest.m"
                      case (MR_Integer) 1:
#line 302 "deforest.m"
                        {
#line 302 "deforest.m"
                          MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_87_87;
#line 302 "deforest.m"
                          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_88_88;
#line 302 "deforest.m"
                          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_89_89;

#line 303 "deforest.m"
                          {
#line 303 "deforest.m"
                            transform_hlds__deforest__compute_goal_infos_4_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_83_83, &transform_hlds__deforest__STATE_VARIABLE_Goals_87_87, transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_88_88);
                          }
#line 304 "deforest.m"
                          {
#line 304 "deforest.m"
                            transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_88_88, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_89_89);
                          }
#line 305 "deforest.m"
                          {
#line 305 "deforest.m"
                            transform_hlds__deforest__deforest_conj_6_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_87_87, transform_hlds__deforest__NonLocals_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__STATE_VARIABLE_Goals_91_91, transform_hlds__deforest__STATE_VARIABLE_PDInfo_89_89, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92);
                          }
#line 302 "deforest.m"
                        }
#line 306 "deforest.m"
                        break;
#line 306 "deforest.m"
                    }
#line 309 "deforest.m"
                    {
#line 309 "deforest.m"
                      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_17, (MR_Integer) 351, &transform_hlds__deforest__Constraints_19);
                    }
#line 311 "deforest.m"
                    {
#line 311 "deforest.m"
                      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94);
                    }
#line 316 "deforest.m"
#line 316 "deforest.m"
                    switch (transform_hlds__deforest__Constraints_19) {
#line 316 "deforest.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 316 "deforest.m"
                      case (MR_Integer) 0:
#line 317 "deforest.m"
                        {
#line 317 "deforest.m"
                          transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94;
#line 317 "deforest.m"
                          transform_hlds__deforest__Goals_13 = transform_hlds__deforest__STATE_VARIABLE_Goals_91_91;
#line 317 "deforest.m"
                        }
#line 316 "deforest.m"
                        break;
#line 316 "deforest.m"
                      case (MR_Integer) 1:
#line 313 "deforest.m"
                        {
#line 314 "deforest.m"
                          {
#line 314 "deforest.m"
                            transform_hlds__deforest__propagate_conj_constraints_6_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_91_91, transform_hlds__deforest__NonLocals_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__Goals_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
                          }
#line 313 "deforest.m"
                        }
#line 316 "deforest.m"
                        break;
#line 316 "deforest.m"
                    }
#line 319 "deforest.m"
                    {
#line 319 "deforest.m"
                      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
                    }
#line 292 "deforest.m"
                  }
#line 320 "deforest.m"
                  break;
#line 320 "deforest.m"
              }
#line 326 "deforest.m"
              {
#line 326 "deforest.m"
                MR_Word base;
#line 326 "deforest.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 326 "deforest.m"
                *transform_hlds__deforest__GoalExpr_8 = base;
#line 326 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 326 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__ConjType_11));
#line 326 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__Goals_13));
#line 326 "deforest.m"
              }
#line 288 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 288 "deforest.m"
            }
#line 288 "deforest.m"
            break;
#line 288 "deforest.m"
          case (MR_Integer) 3:
#line 328 "deforest.m"
            {
#line 328 "deforest.m"
              MR_Word transform_hlds__deforest__Goals0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 328 "deforest.m"
              MR_Word transform_hlds__deforest__Goals_100;

#line 329 "deforest.m"
              {
#line 329 "deforest.m"
                transform_hlds__deforest__deforest_disj_4_p_0(transform_hlds__deforest__Goals0_99, &transform_hlds__deforest__Goals_100, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
              }
#line 330 "deforest.m"
              {
#line 330 "deforest.m"
                MR_Word base;
#line 330 "deforest.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "deforest.m"
                *transform_hlds__deforest__GoalExpr_8 = base;
#line 330 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 330 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_100));
#line 330 "deforest.m"
              }
#line 328 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 328 "deforest.m"
            }
#line 288 "deforest.m"
            break;
#line 288 "deforest.m"
          case (MR_Integer) 4:
#line 342 "deforest.m"
            {
#line 342 "deforest.m"
              MR_Word transform_hlds__deforest__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 342 "deforest.m"
              MR_Word transform_hlds__deforest__CanFail_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
#line 342 "deforest.m"
              MR_Word transform_hlds__deforest__Cases0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 3)));
#line 342 "deforest.m"
              MR_Word transform_hlds__deforest__Cases_30;

#line 343 "deforest.m"
              {
#line 343 "deforest.m"
                transform_hlds__deforest__deforest_cases_5_p_0(transform_hlds__deforest__Var_27, transform_hlds__deforest__Cases0_29, &transform_hlds__deforest__Cases_30, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
              }
#line 344 "deforest.m"
              {
#line 344 "deforest.m"
                MR_Word base;
#line 344 "deforest.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 344 "deforest.m"
                *transform_hlds__deforest__GoalExpr_8 = base;
#line 344 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 344 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Var_27));
#line 344 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__CanFail_28));
#line 344 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__deforest__Cases_30));
#line 344 "deforest.m"
              }
#line 342 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 342 "deforest.m"
            }
#line 288 "deforest.m"
            break;
#line 288 "deforest.m"
          case (MR_Integer) 5:
#line 350 "deforest.m"
            {
#line 350 "deforest.m"
              MR_Word transform_hlds__deforest__Reason_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 350 "deforest.m"
              MR_Word transform_hlds__deforest__SubGoal0_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
#line 350 "deforest.m"
              MR_Word transform_hlds__deforest__SubGoal_103;
#line 352 "deforest.m"
              MR_Word transform_hlds__deforest__FGT_35;
#line 352 "deforest.m"
              MR_Word transform_hlds__deforest__V_34_34;

#line 352 "deforest.m"
              transform_hlds__deforest__succeeded = ((((MR_tag((MR_Word) transform_hlds__deforest__Reason_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Reason_33, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 352 "deforest.m"
              if (transform_hlds__deforest__succeeded)
#line 352 "deforest.m"
                {
#line 352 "deforest.m"
                  transform_hlds__deforest__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Reason_33, (MR_Integer) 1)));
#line 352 "deforest.m"
                  transform_hlds__deforest__FGT_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Reason_33, (MR_Integer) 2)));
#line 354 "deforest.m"
#line 354 "deforest.m"
                  switch (transform_hlds__deforest__FGT_35) {
#line 354 "deforest.m"
                    default:
#line 354 "deforest.m"
                      transform_hlds__deforest__succeeded = MR_FALSE;
#line 354 "deforest.m"
                      break;
#line 354 "deforest.m"
                    case (MR_Integer) 1:
#line 353 "deforest.m"
                      transform_hlds__deforest__succeeded = MR_TRUE;
#line 354 "deforest.m"
                      break;
#line 354 "deforest.m"
                    case (MR_Integer) 2:
#line 354 "deforest.m"
                      transform_hlds__deforest__succeeded = MR_TRUE;
#line 354 "deforest.m"
                      break;
#line 354 "deforest.m"
                  }
#line 352 "deforest.m"
                }
#line 358 "deforest.m"
              if (transform_hlds__deforest__succeeded)
#line 357 "deforest.m"
                {
#line 357 "deforest.m"
                  transform_hlds__deforest__SubGoal_103 = transform_hlds__deforest__SubGoal0_102;
#line 357 "deforest.m"
                  *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 357 "deforest.m"
                }
#line 358 "deforest.m"
              else
#line 359 "deforest.m"
                {
#line 359 "deforest.m"
                  transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__SubGoal0_102, &transform_hlds__deforest__SubGoal_103, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
                }
#line 361 "deforest.m"
              {
#line 361 "deforest.m"
                MR_Word base;
#line 361 "deforest.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 361 "deforest.m"
                *transform_hlds__deforest__GoalExpr_8 = base;
#line 361 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 361 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Reason_33));
#line 361 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__SubGoal_103));
#line 361 "deforest.m"
              }
#line 350 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 350 "deforest.m"
            }
#line 288 "deforest.m"
            break;
#line 288 "deforest.m"
          case (MR_Integer) 6:
#line 332 "deforest.m"
            {
#line 332 "deforest.m"
              MR_Word transform_hlds__deforest__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 332 "deforest.m"
              MR_Word transform_hlds__deforest__Cond0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
#line 332 "deforest.m"
              MR_Word transform_hlds__deforest__Then0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 3)));
#line 332 "deforest.m"
              MR_Word transform_hlds__deforest__Else0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 4)));
#line 332 "deforest.m"
              MR_Word transform_hlds__deforest__Cond_24;
#line 332 "deforest.m"
              MR_Word transform_hlds__deforest__Then_25;
#line 332 "deforest.m"
              MR_Word transform_hlds__deforest__Else_26;
#line 332 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_74_74;
#line 332 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_75_75;
#line 332 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76;
#line 332 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77;
#line 332 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_78_78;
#line 332 "deforest.m"
              MR_Word transform_hlds__deforest__InstMap0_101;

#line 333 "deforest.m"
              {
#line 333 "deforest.m"
                transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__InstMap0_101);
              }
#line 334 "deforest.m"
              {
#line 334 "deforest.m"
                transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Cond0_21, &transform_hlds__deforest__Cond_24, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_74_74);
              }
#line 335 "deforest.m"
              {
#line 335 "deforest.m"
                transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Cond_24, transform_hlds__deforest__STATE_VARIABLE_PDInfo_74_74, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_75_75);
              }
#line 336 "deforest.m"
              {
#line 336 "deforest.m"
                transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Then0_22, &transform_hlds__deforest__Then_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_75_75, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76);
              }
#line 337 "deforest.m"
              {
#line 337 "deforest.m"
                transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_101, transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77);
              }
#line 338 "deforest.m"
              {
#line 338 "deforest.m"
                transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Else0_23, &transform_hlds__deforest__Else_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_78_78);
              }
#line 339 "deforest.m"
              {
#line 339 "deforest.m"
                transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_101, transform_hlds__deforest__STATE_VARIABLE_PDInfo_78_78, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
              }
#line 340 "deforest.m"
              {
#line 340 "deforest.m"
                MR_Word base;
#line 340 "deforest.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 340 "deforest.m"
                *transform_hlds__deforest__GoalExpr_8 = base;
#line 340 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 340 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Vars_20));
#line 340 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__Cond_24));
#line 340 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__deforest__Then_25));
#line 340 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__deforest__Else_26));
#line 340 "deforest.m"
              }
#line 332 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 332 "deforest.m"
            }
#line 288 "deforest.m"
            break;
#line 288 "deforest.m"
          case (MR_Integer) 7:
#line 374 "deforest.m"
            {
#line 376 "deforest.m"
              {
#line 376 "deforest.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforest_goal_expr\'/6", (MR_String) "shorthand");
#line 376 "deforest.m"
                return;
              }
#line 374 "deforest.m"
            }
#line 288 "deforest.m"
            break;
#line 288 "deforest.m"
        }
#line 288 "deforest.m"
        break;
#line 288 "deforest.m"
    }
#line 288 "deforest.m"
  }
#line 283 "deforest.m"
}

#line 275 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_goal_4_p_0(
#line 275 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_5,
#line 275 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_6,
#line 275 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_12,
#line 275 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_13)
#line 275 "deforest.m"
{
#line 278 "deforest.m"
  {
#line 278 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 278 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_5, (MR_Integer) 0)));
#line 278 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_5, (MR_Integer) 1)));
#line 278 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr_10;
#line 278 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_11;

#line 280 "deforest.m"
    {
#line 280 "deforest.m"
      transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_8, &transform_hlds__deforest__GoalExpr_10, transform_hlds__deforest__GoalInfo0_9, &transform_hlds__deforest__GoalInfo_11, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_12, transform_hlds__deforest__STATE_VARIABLE_PDInfo_13);
    }
#line 281 "deforest.m"
    {
#line 281 "deforest.m"
      MR_Word base;
#line 281 "deforest.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "deforest.m"
      *transform_hlds__deforest__Goal_6 = base;
#line 281 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_10));
#line 281 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_11));
#line 281 "deforest.m"
    }
#line 278 "deforest.m"
  }
#line 275 "deforest.m"
}

#line 194 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_proc_deltas_5_p_0(
#line 194 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 194 "deforest.m"
  MR_Integer * transform_hlds__deforest__CostDelta_8,
#line 194 "deforest.m"
  MR_Integer * transform_hlds__deforest__SizeDelta_9,
#line 194 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_28,
#line 194 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_29)
#line 194 "deforest.m"
{
#line 197 "deforest.m"
  {
#line 197 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 197 "deforest.m"
    MR_Integer transform_hlds__deforest__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_16;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__SimplifyTasks_17;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__Changed_18;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PredInfo_34_34;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_35_35;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_37_37;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_38_38;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_40_40;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_41_41;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_42_42;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_43_43;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_47_47;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_49_49;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_50_50;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_72_72;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr0_88;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo0_89;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr_90;
#line 197 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_91;

#line 199 "deforest.m"
    {
#line 199 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_28, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 201 "deforest.m"
    {
#line 201 "deforest.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Deforesting ", transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 204 "deforest.m"
    {
#line 204 "deforest.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30, transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, &transform_hlds__deforest__STATE_VARIABLE_PredInfo_34_34, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_35_35);
    }
#line 206 "deforest.m"
    {
#line 206 "deforest.m"
      transform_hlds__pd_info__pd_info_init_unfold_info_5_p_0(transform_hlds__deforest__HeadVar__1_1, transform_hlds__deforest__STATE_VARIABLE_PredInfo_34_34, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_35_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_28, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_37_37);
    }
#line 208 "deforest.m"
    {
#line 208 "deforest.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_35_35, &transform_hlds__deforest__STATE_VARIABLE_Goal_38_38);
    }
#line 211 "deforest.m"
    {
#line 211 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__deforest__Globals_16);
    }
#line 212 "deforest.m"
    {
#line 212 "deforest.m"
      check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, transform_hlds__deforest__Globals_16, &transform_hlds__deforest__SimplifyTasks_17);
    }
#line 213 "deforest.m"
    {
#line 213 "deforest.m"
      transform_hlds__pd_util__pd_simplify_goal_5_p_0(transform_hlds__deforest__SimplifyTasks_17, transform_hlds__deforest__STATE_VARIABLE_Goal_38_38, &transform_hlds__deforest__STATE_VARIABLE_Goal_40_40, transform_hlds__deforest__STATE_VARIABLE_PDInfo_37_37, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_41_41);
    }
#line 214 "deforest.m"
    {
#line 214 "deforest.m"
      transform_hlds__pd_util__propagate_constraints_4_p_0(transform_hlds__deforest__STATE_VARIABLE_Goal_40_40, &transform_hlds__deforest__STATE_VARIABLE_Goal_42_42, transform_hlds__deforest__STATE_VARIABLE_PDInfo_41_41, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_43_43);
    }
#line 216 "deforest.m"
    {
#line 216 "deforest.m"
      transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_43_43, (MR_String) "after constraints\n", transform_hlds__deforest__STATE_VARIABLE_Goal_42_42);
    }
#line 279 "deforest.m"
    transform_hlds__deforest__GoalExpr0_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_42_42, (MR_Integer) 0)));
#line 279 "deforest.m"
    transform_hlds__deforest__GoalInfo0_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_42_42, (MR_Integer) 1)));
#line 280 "deforest.m"
    {
#line 280 "deforest.m"
      transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_88, &transform_hlds__deforest__GoalExpr_90, transform_hlds__deforest__GoalInfo0_89, &transform_hlds__deforest__GoalInfo_91, transform_hlds__deforest__STATE_VARIABLE_PDInfo_43_43, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48);
    }
#line 281 "deforest.m"
    {
#line 281 "deforest.m"
      transform_hlds__deforest__STATE_VARIABLE_Goal_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "deforest.m"
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_47_47, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_90));
#line 281 "deforest.m"
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_47_47, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_91));
#line 281 "deforest.m"
    }
#line 219 "deforest.m"
    {
#line 219 "deforest.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_49_49);
    }
#line 220 "deforest.m"
    {
#line 220 "deforest.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__deforest__STATE_VARIABLE_Goal_47_47, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_49_49, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_50_50);
    }
#line 221 "deforest.m"
    {
#line 221 "deforest.m"
      transform_hlds__pd_info__pd_info_get_changed_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__Changed_18);
    }
#line 256 "deforest.m"
#line 256 "deforest.m"
    switch (transform_hlds__deforest__Changed_18) {
#line 256 "deforest.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 256 "deforest.m"
      case (MR_Integer) 0:
#line 257 "deforest.m"
        {
#line 257 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_51_51;
#line 257 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_80;
#line 257 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_82;

#line 258 "deforest.m"
          {
#line 258 "deforest.m"
            transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_51_51);
          }
#line 259 "deforest.m"
          {
#line 259 "deforest.m"
            transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_80);
          }
#line 260 "deforest.m"
          {
#line 260 "deforest.m"
            hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_80, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_50_50, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_51_51, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_82);
          }
#line 262 "deforest.m"
          {
#line 262 "deforest.m"
            transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_82, transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71);
          }
#line 257 "deforest.m"
        }
#line 256 "deforest.m"
        break;
#line 256 "deforest.m"
      case (MR_Integer) 1:
#line 224 "deforest.m"
        {
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__InstMap0_19;
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__VarTypes_20;
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__InstVarSet_21;
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__RerunDet_22;
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__ProcArgInfo0_26;
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__ProcArgInfo_27;
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_55_55;
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57;
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_58_58;
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_60_60;
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_61_61;
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62;
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_63;
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_64_64;
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_65;
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_66_66;
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_69;
#line 224 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_70_70;

#line 225 "deforest.m"
          {
#line 225 "deforest.m"
            transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_55_55);
          }
#line 226 "deforest.m"
          {
#line 226 "deforest.m"
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57);
          }
#line 227 "deforest.m"
          {
#line 227 "deforest.m"
            hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__deforest__STATE_VARIABLE_Goal_58_58);
          }
#line 228 "deforest.m"
          {
#line 228 "deforest.m"
            hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_55_55, &transform_hlds__deforest__InstMap0_19);
          }
#line 229 "deforest.m"
          {
#line 229 "deforest.m"
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__deforest__VarTypes_20);
          }
#line 230 "deforest.m"
          {
#line 230 "deforest.m"
            hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__deforest__InstVarSet_21);
          }
#line 231 "deforest.m"
          {
#line 231 "deforest.m"
            check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, transform_hlds__deforest__STATE_VARIABLE_Goal_58_58, &transform_hlds__deforest__STATE_VARIABLE_Goal_60_60, transform_hlds__deforest__VarTypes_20, transform_hlds__deforest__InstVarSet_21, transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_55_55, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_61_61);
          }
#line 233 "deforest.m"
          {
#line 233 "deforest.m"
            transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_61_61, transform_hlds__deforest__STATE_VARIABLE_PDInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62);
          }
#line 234 "deforest.m"
          {
#line 234 "deforest.m"
            transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62, &transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_63);
          }
#line 235 "deforest.m"
          {
#line 235 "deforest.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__deforest__STATE_VARIABLE_Goal_60_60, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_64_64);
          }
#line 236 "deforest.m"
          {
#line 236 "deforest.m"
            hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_PredInfo_63_63, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_64_64, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_61_61, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_65);
          }
#line 238 "deforest.m"
          {
#line 238 "deforest.m"
            transform_hlds__pd_info__pd_info_get_rerun_det_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62, &transform_hlds__deforest__RerunDet_22);
          }
#line 246 "deforest.m"
#line 246 "deforest.m"
          switch (transform_hlds__deforest__RerunDet_22) {
#line 246 "deforest.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 246 "deforest.m"
            case (MR_Integer) 0:
#line 247 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_66_66 = transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_65;
#line 246 "deforest.m"
              break;
#line 246 "deforest.m"
            case (MR_Integer) 1:
#line 241 "deforest.m"
              {
#line 245 "deforest.m"
                MR_Word transform_hlds__deforest__V_23_23;
#line 245 "deforest.m"
                MR_Word transform_hlds__deforest__V_24_24;
#line 245 "deforest.m"
                MR_Word transform_hlds__deforest__V_25_25;

#line 245 "deforest.m"
                {
#line 245 "deforest.m"
                  check_hlds__det_analysis__det_infer_proc_8_p_0(transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_65, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_66_66, &transform_hlds__deforest__V_23_23, &transform_hlds__deforest__V_24_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__V_25_25);
                }
#line 241 "deforest.m"
              }
#line 246 "deforest.m"
              break;
#line 246 "deforest.m"
          }
#line 251 "deforest.m"
          {
#line 251 "deforest.m"
            transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62, &transform_hlds__deforest__ProcArgInfo0_26);
          }
#line 252 "deforest.m"
          {
#line 252 "deforest.m"
            transform_hlds__pd_util__get_branch_vars_proc_6_p_0(transform_hlds__deforest__HeadVar__1_1, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_64_64, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_66_66, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_69, transform_hlds__deforest__ProcArgInfo0_26, &transform_hlds__deforest__ProcArgInfo_27);
          }
#line 254 "deforest.m"
          {
#line 254 "deforest.m"
            transform_hlds__pd_info__pd_info_set_proc_arg_info_3_p_0(transform_hlds__deforest__ProcArgInfo_27, transform_hlds__deforest__STATE_VARIABLE_PDInfo_62_62, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_70_70);
          }
#line 255 "deforest.m"
          {
#line 255 "deforest.m"
            transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_69_69, transform_hlds__deforest__STATE_VARIABLE_PDInfo_70_70, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71);
          }
#line 224 "deforest.m"
        }
#line 256 "deforest.m"
        break;
#line 256 "deforest.m"
    }
#line 265 "deforest.m"
    {
#line 265 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_72_72);
    }
#line 267 "deforest.m"
    {
#line 267 "deforest.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Finished deforesting ", transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_72_72);
    }
#line 270 "deforest.m"
    {
#line 270 "deforest.m"
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71, transform_hlds__deforest__CostDelta_8);
    }
#line 271 "deforest.m"
    {
#line 271 "deforest.m"
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71, transform_hlds__deforest__SizeDelta_9);
    }
#line 272 "deforest.m"
    {
#line 272 "deforest.m"
      transform_hlds__pd_info__pd_info_unset_unfold_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71, transform_hlds__deforest__STATE_VARIABLE_PDInfo_29);
#line 272 "deforest.m"
      return;
    }
#line 197 "deforest.m"
  }
#line 194 "deforest.m"
}

#line 189 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_proc_3_p_0(
#line 189 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_4,
#line 189 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
#line 189 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9)
#line 189 "deforest.m"
{
#line 192 "deforest.m"
  {
#line 192 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 192 "deforest.m"
    MR_Integer transform_hlds__deforest__V_6_6;
#line 192 "deforest.m"
    MR_Integer transform_hlds__deforest__V_7_7;

#line 192 "deforest.m"
    {
#line 192 "deforest.m"
      transform_hlds__deforest__deforest_proc_deltas_5_p_0(transform_hlds__deforest__PredProcId_4, &transform_hlds__deforest__V_6_6, &transform_hlds__deforest__V_7_7, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8, transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);
    }
#line 192 "deforest.m"
  }
#line 189 "deforest.m"
}

#line 178 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(
#line 178 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_8,
#line 178 "deforest.m"
  MR_Word transform_hlds__deforest__ProcInfo_9,
#line 178 "deforest.m"
  MR_Word * transform_hlds__deforest__ProcInfo_3,
#line 178 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_15,
#line 178 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_16,
#line 178 "deforest.m"
  MR_Word transform_hlds__deforest__UnivProcArgInfo0_11,
#line 178 "deforest.m"
  MR_Word * transform_hlds__deforest__UnivProcArgInfo_12)
#line 178 "deforest.m"
{
#line 183 "deforest.m"
  {
#line 183 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 183 "deforest.m"
    MR_Word transform_hlds__deforest__TypeInfo_18_18;
#line 183 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo0_13;
#line 183 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo_14;
#line 184 "deforest.m"
    MR_Box transform_hlds__deforest__conv0_ProcArgInfo0_13;

#line 182 "deforest.m"
    *transform_hlds__deforest__ProcInfo_3 = transform_hlds__deforest__ProcInfo_9;
#line 11413 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeInfo_18_18 = (MR_Word) &transform_hlds__deforest_scalar_common_2[0];
#line 184 "deforest.m"
    {
#line 184 "deforest.m"
      mercury__univ__det_univ_to_type_2_p_0(transform_hlds__deforest__TypeInfo_18_18, transform_hlds__deforest__UnivProcArgInfo0_11, &transform_hlds__deforest__conv0_ProcArgInfo0_13);
    }
#line 184 "deforest.m"
    transform_hlds__deforest__ProcArgInfo0_13 = ((MR_Word) transform_hlds__deforest__conv0_ProcArgInfo0_13);
#line 185 "deforest.m"
    {
#line 185 "deforest.m"
      transform_hlds__pd_util__get_branch_vars_proc_6_p_0(transform_hlds__deforest__PredProcId_8, transform_hlds__deforest__ProcInfo_9, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_15, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_16, transform_hlds__deforest__ProcArgInfo0_13, &transform_hlds__deforest__ProcArgInfo_14);
    }
#line 187 "deforest.m"
    {
#line 187 "deforest.m"
      mercury__univ__type_to_univ_2_p_1(transform_hlds__deforest__TypeInfo_18_18, ((MR_Box) (transform_hlds__deforest__ProcArgInfo_14)), transform_hlds__deforest__UnivProcArgInfo_12);
#line 187 "deforest.m"
      return;
    }
#line 183 "deforest.m"
  }
#line 178 "deforest.m"
}

#line 156 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(
#line 156 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_4,
#line 156 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_11,
#line 156 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_12)
#line 156 "deforest.m"
{
#line 159 "deforest.m"
  {
#line 159 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 159 "deforest.m"
    MR_Word transform_hlds__deforest__PredInfo_6;
#line 159 "deforest.m"
    MR_Word transform_hlds__deforest__ProcInfo0_7;
#line 159 "deforest.m"
    MR_Word transform_hlds__deforest__Detism0_8;
#line 162 "deforest.m"
    MR_Word transform_hlds__deforest__V_16_16;
#line 162 "deforest.m"
    MR_Word transform_hlds__deforest__V_9_9;

#line 160 "deforest.m"
    {
#line 160 "deforest.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__deforest__PredProcId_4, &transform_hlds__deforest__PredInfo_6, &transform_hlds__deforest__ProcInfo0_7);
    }
#line 161 "deforest.m"
    {
#line 161 "deforest.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__deforest__ProcInfo0_7, &transform_hlds__deforest__Detism0_8);
    }
#line 162 "deforest.m"
    {
#line 162 "deforest.m"
      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__deforest__Detism0_8, &transform_hlds__deforest__V_9_9, &transform_hlds__deforest__V_16_16);
    }
#line 162 "deforest.m"
    transform_hlds__deforest__succeeded = ((MR_Integer) 2 == transform_hlds__deforest__V_16_16);
#line 166 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 166 "deforest.m"
      *transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_12 = transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_11;
#line 166 "deforest.m"
    else
#line 168 "deforest.m"
      {
#line 168 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo_10;

#line 167 "deforest.m"
        {
#line 167 "deforest.m"
          hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0((MR_Integer) 6, transform_hlds__deforest__ProcInfo0_7, &transform_hlds__deforest__ProcInfo_10);
        }
#line 169 "deforest.m"
        {
#line 169 "deforest.m"
          hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__deforest__PredProcId_4, transform_hlds__deforest__PredInfo_6, transform_hlds__deforest__ProcInfo_10, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_12);
#line 169 "deforest.m"
          return;
        }
#line 168 "deforest.m"
      }
#line 159 "deforest.m"
  }
#line 156 "deforest.m"
}

#line 150 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_4(
#line 150 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg)
#line 150 "deforest.m"
{
#line 150 "deforest.m"
  {
#line 150 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 150 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;

#line 150 "deforest.m"
    {
#line 150 "deforest.m"
      return transform_hlds__deforest__succeeded = transform_hlds__deforest__IntroducedFrom__pred__deforestation__150__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__closure, (MR_Integer) 4))));
    }
#line 150 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 150 "deforest.m"
  }
#line 150 "deforest.m"
}

#line 142 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_3(
#line 142 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 142 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 142 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 142 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 142 "deforest.m"
{
#line 142 "deforest.m"
  {
#line 142 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 142 "deforest.m"
    MR_Word transform_hlds__deforest__conv6_STATE_VARIABLE_ModuleInfo_12;

#line 142 "deforest.m"
    {
#line 142 "deforest.m"
      transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv6_STATE_VARIABLE_ModuleInfo_12);
    }
#line 142 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv6_STATE_VARIABLE_ModuleInfo_12));
#line 142 "deforest.m"
  }
#line 142 "deforest.m"
}

#line 126 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_2(
#line 126 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 126 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 126 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 126 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 126 "deforest.m"
{
#line 126 "deforest.m"
  {
#line 126 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 126 "deforest.m"
    MR_Word transform_hlds__deforest__conv4_STATE_VARIABLE_PDInfo_9;

#line 126 "deforest.m"
    {
#line 126 "deforest.m"
      transform_hlds__deforest__deforest_proc_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv4_STATE_VARIABLE_PDInfo_9);
    }
#line 126 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv4_STATE_VARIABLE_PDInfo_9));
#line 126 "deforest.m"
  }
#line 126 "deforest.m"
}

#line 106 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_4_p_0_1(
#line 106 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 106 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 106 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 106 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3,
#line 106 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_4,
#line 106 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_5,
#line 106 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_6,
#line 106 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_7)
#line 106 "deforest.m"
{
#line 106 "deforest.m"
  {
#line 106 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 106 "deforest.m"
    MR_Word transform_hlds__deforest__conv2_ProcInfo_3;
#line 106 "deforest.m"
    MR_Word transform_hlds__deforest__conv1_STATE_VARIABLE_ModuleInfo_16;
#line 106 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_UnivProcArgInfo_12;

#line 106 "deforest.m"
    {
#line 106 "deforest.m"
      transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv2_ProcInfo_3, ((MR_Word) transform_hlds__deforest__wrapper_arg_4), &transform_hlds__deforest__conv1_STATE_VARIABLE_ModuleInfo_16, ((MR_Word) transform_hlds__deforest__wrapper_arg_6), &transform_hlds__deforest__conv0_UnivProcArgInfo_12);
    }
#line 106 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv2_ProcInfo_3));
#line 106 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_5 = ((MR_Box) (transform_hlds__deforest__conv1_STATE_VARIABLE_ModuleInfo_16));
#line 106 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_7 = ((MR_Box) (transform_hlds__deforest__conv0_UnivProcArgInfo_12));
#line 106 "deforest.m"
  }
#line 106 "deforest.m"
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
#line 100 "deforest.m"
  {
#line 100 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__TypeInfo_54_54;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_62_62;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo0_7;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__UnivProcArgInfo0_8;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__Task0_9;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__Task_10;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo_14;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__DepInfo_15;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__DepOrdering_16;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__DepList_17;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__PDInfo0_18;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__PDInfo_19;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__VersionIndex_20;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__Versions_21;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_22;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__Constraints_23;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_35_35;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_39_39;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_41_41;
#line 100 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42;
#line 113 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo1_13;
#line 109 "deforest.m"
    MR_Word transform_hlds__deforest__UnivProcArgInfo_12;
#line 109 "deforest.m"
    MR_Word transform_hlds__deforest__V_11_11;
#line 110 "deforest.m"
    MR_Box transform_hlds__deforest__conv3_ProcArgInfo1_13;
#line 126 "deforest.m"
    MR_Box transform_hlds__deforest__conv5_PDInfo_19;
#line 137 "deforest.m"
    MR_Word transform_hlds__deforest__V_24_24;
#line 137 "deforest.m"
    MR_Word transform_hlds__deforest__V_25_25;

#line 176 "deforest.m"
    {
#line 176 "deforest.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[0], &transform_hlds__deforest__ProcArgInfo0_7);
    }
#line 11723 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeInfo_54_54 = (MR_Word) &transform_hlds__deforest_scalar_common_2[0];
#line 102 "deforest.m"
    {
#line 102 "deforest.m"
      mercury__univ__type_to_univ_2_p_1(transform_hlds__deforest__TypeInfo_54_54, ((MR_Box) (transform_hlds__deforest__ProcArgInfo0_7)), &transform_hlds__deforest__UnivProcArgInfo0_8);
    }
#line 106 "deforest.m"
    {
#line 106 "deforest.m"
      transform_hlds__deforest__Task0_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 106 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task0_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 106 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task0_9, 1) = ((MR_Box) (&transform_hlds__deforest_scalar_common_2[4]));
#line 106 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task0_9, 2) = ((MR_Box) (transform_hlds__deforest__UnivProcArgInfo0_8));
#line 106 "deforest.m"
    }
#line 107 "deforest.m"
    {
#line 107 "deforest.m"
      hlds__passes_aux__process_all_nonimported_procs_update_4_p_0(transform_hlds__deforest__Task0_9, &transform_hlds__deforest__Task_10, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_30, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_35_35);
    }
#line 109 "deforest.m"
    transform_hlds__deforest__succeeded = ((((MR_tag((MR_Word) transform_hlds__deforest__Task_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 109 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 109 "deforest.m"
      {
#line 109 "deforest.m"
        transform_hlds__deforest__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task_10, (MR_Integer) 1)));
#line 109 "deforest.m"
        transform_hlds__deforest__UnivProcArgInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task_10, (MR_Integer) 2)));
#line 110 "deforest.m"
        {
#line 110 "deforest.m"
          transform_hlds__deforest__succeeded = mercury__univ__univ_to_type_2_p_0(transform_hlds__deforest__TypeInfo_54_54, transform_hlds__deforest__UnivProcArgInfo_12, &transform_hlds__deforest__conv3_ProcArgInfo1_13);
        }
#line 110 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 110 "deforest.m"
          {
#line 110 "deforest.m"
            transform_hlds__deforest__ProcArgInfo1_13 = ((MR_Word) transform_hlds__deforest__conv3_ProcArgInfo1_13);
#line 110 "deforest.m"
            transform_hlds__deforest__succeeded = MR_TRUE;
#line 110 "deforest.m"
          }
#line 109 "deforest.m"
      }
#line 113 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 112 "deforest.m"
      transform_hlds__deforest__ProcArgInfo_14 = transform_hlds__deforest__ProcArgInfo1_13;
#line 113 "deforest.m"
    else
#line 114 "deforest.m"
      {
#line 114 "deforest.m"
        {
#line 114 "deforest.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforestation\'/4", (MR_String) "passes_aux stuffed up");
#line 114 "deforest.m"
          return;
        }
#line 114 "deforest.m"
      }
#line 120 "deforest.m"
    {
#line 120 "deforest.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_35_35, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_39_39);
    }
#line 121 "deforest.m"
    {
#line 121 "deforest.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_39_39, &transform_hlds__deforest__DepInfo_15);
    }
#line 11801 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 122 "deforest.m"
    {
#line 122 "deforest.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(transform_hlds__deforest__TypeCtorInfo_62_62, transform_hlds__deforest__DepInfo_15, &transform_hlds__deforest__DepOrdering_16);
    }
#line 123 "deforest.m"
    {
#line 123 "deforest.m"
      mercury__list__condense_2_p_0(transform_hlds__deforest__TypeCtorInfo_62_62, transform_hlds__deforest__DepOrdering_16, &transform_hlds__deforest__DepList_17);
    }
#line 125 "deforest.m"
    {
#line 125 "deforest.m"
      transform_hlds__pd_info__pd_info_init_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_39_39, transform_hlds__deforest__ProcArgInfo_14, &transform_hlds__deforest__PDInfo0_18);
    }
#line 126 "deforest.m"
    {
#line 126 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_62_62, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0, (MR_Word) &transform_hlds__deforest_scalar_common_2[5], transform_hlds__deforest__DepList_17, ((MR_Box) (transform_hlds__deforest__PDInfo0_18)), &transform_hlds__deforest__conv5_PDInfo_19);
    }
#line 126 "deforest.m"
    transform_hlds__deforest__PDInfo_19 = ((MR_Word) transform_hlds__deforest__conv5_PDInfo_19);
#line 127 "deforest.m"
    {
#line 127 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__PDInfo_19, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_41_41);
    }
#line 128 "deforest.m"
    {
#line 128 "deforest.m"
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_41_41, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42);
    }
#line 129 "deforest.m"
    {
#line 129 "deforest.m"
      transform_hlds__pd_info__pd_info_get_versions_2_p_0(transform_hlds__deforest__PDInfo_19, &transform_hlds__deforest__VersionIndex_20);
    }
#line 131 "deforest.m"
    {
#line 131 "deforest.m"
      mercury__map__keys_2_p_0(transform_hlds__deforest__TypeCtorInfo_62_62, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__deforest__VersionIndex_20, &transform_hlds__deforest__Versions_21);
    }
#line 133 "deforest.m"
    {
#line 133 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42, &transform_hlds__deforest__Globals_22);
    }
#line 134 "deforest.m"
    {
#line 134 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_22, (MR_Integer) 351, &transform_hlds__deforest__Constraints_23);
    }
#line 136 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__Constraints_23 == (MR_Integer) 1);
#line 136 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 136 "deforest.m"
      {
#line 137 "deforest.m"
        transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Versions_21)) == (MR_mktag((MR_Integer) 1)));
#line 137 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 137 "deforest.m"
          {
#line 137 "deforest.m"
            transform_hlds__deforest__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Versions_21, (MR_Integer) 0)));
#line 137 "deforest.m"
            transform_hlds__deforest__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Versions_21, (MR_Integer) 1)));
#line 137 "deforest.m"
          }
#line 136 "deforest.m"
      }
#line 152 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 142 "deforest.m"
      {
#line 142 "deforest.m"
        MR_Word transform_hlds__deforest__NoWarnGlobals_27;
#line 142 "deforest.m"
        MR_Word transform_hlds__deforest__Specs_28;
#line 142 "deforest.m"
        MR_Word transform_hlds__deforest__FoundErrors_29;
#line 142 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_45_45;
#line 142 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_46_46;
#line 142 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_47_47;
#line 142 "deforest.m"
        MR_Word transform_hlds__deforest__V_49_49;
#line 142 "deforest.m"
        MR_Box transform_hlds__deforest__conv7_STATE_VARIABLE_ModuleInfo_45_45;
#line 144 "deforest.m"
        MR_Word transform_hlds__deforest___OptionsToRestore_26;

#line 142 "deforest.m"
        {
#line 142 "deforest.m"
          mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_62_62, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__deforest_scalar_common_2[6], transform_hlds__deforest__Versions_21, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42)), &transform_hlds__deforest__conv7_STATE_VARIABLE_ModuleInfo_45_45);
        }
#line 142 "deforest.m"
        transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_45_45 = ((MR_Word) transform_hlds__deforest__conv7_STATE_VARIABLE_ModuleInfo_45_45);
#line 144 "deforest.m"
        {
#line 144 "deforest.m"
          check_hlds__det_report__disable_det_warnings_3_p_0(&transform_hlds__deforest___OptionsToRestore_26, transform_hlds__deforest__Globals_22, &transform_hlds__deforest__NoWarnGlobals_27);
        }
#line 145 "deforest.m"
        {
#line 145 "deforest.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(transform_hlds__deforest__NoWarnGlobals_27, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_45_45, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_46_46);
        }
#line 146 "deforest.m"
        {
#line 146 "deforest.m"
          check_hlds__det_analysis__determinism_pass_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_46_46, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_47_47, &transform_hlds__deforest__Specs_28);
        }
#line 147 "deforest.m"
        {
#line 147 "deforest.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(transform_hlds__deforest__Globals_22, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_47_47, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_31);
        }
#line 149 "deforest.m"
        {
#line 149 "deforest.m"
          transform_hlds__deforest__FoundErrors_29 = parse_tree__error_util__contains_errors_2_f_0(transform_hlds__deforest__Globals_22, transform_hlds__deforest__Specs_28);
        }
#line 150 "deforest.m"
        {
#line 150 "deforest.m"
          transform_hlds__deforest__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 150 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 0) = ((MR_Box) (&transform_hlds__deforest_scalar_common_5[0]));
#line 150 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 1) = ((MR_Box) (transform_hlds__deforest__deforestation_4_p_0_4));
#line 150 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 150 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 3) = ((MR_Box) (transform_hlds__deforest__FoundErrors_29));
#line 150 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_49_49, 4) = ((MR_Box) ((MR_Integer) 0));
#line 150 "deforest.m"
        }
#line 150 "deforest.m"
        {
#line 150 "deforest.m"
          mercury__require__expect_4_p_0(transform_hlds__deforest__V_49_49, (MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforestation\'/4", (MR_String) "determinism errors after deforestation");
#line 150 "deforest.m"
          return;
        }
#line 142 "deforest.m"
      }
#line 152 "deforest.m"
    else
#line 152 "deforest.m"
      *transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_31 = transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42;
#line 100 "deforest.m"
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
