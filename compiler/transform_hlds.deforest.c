/*
** Automatically generated from `deforest.m'
** by the Mercury compiler,
** version DEV
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
#include "check_hlds.inst_test.mih"
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
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
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
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1705 "deforest.m"
struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s {
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2;
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3;
#line 1709 "deforest.m"
  MR_bool transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded;
#line 1711 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23;
#line 1713 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__V_32_32;
#line 1750 "deforest.m"
  jmp_buf transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0;
#line 1750 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_41;
#line 1749 "deforest.m"
  MR_Box transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_41;
#line 1705 "deforest.m"
};

#line 1705 "deforest.m"
struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s {
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2;
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3;
#line 1709 "deforest.m"
  MR_bool transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded;
#line 1711 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23;
#line 1713 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__V_32_32;
#line 1737 "deforest.m"
  jmp_buf transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0;
#line 1737 "deforest.m"
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_41;
#line 1736 "deforest.m"
  MR_Box transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_41;
#line 1705 "deforest.m"
};

#line 1898 "deforest.m"
struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s {
#line 1898 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10;
#line 1898 "deforest.m"
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11;
#line 1898 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12;
#line 1898 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14;
#line 1903 "deforest.m"
  MR_bool transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded;
#line 1903 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_86_86;
#line 1903 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18;
#line 1903 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19;
#line 1903 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20;
#line 1903 "deforest.m"
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29;
#line 1903 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__CallerMarkers_30;
#line 1922 "deforest.m"
  jmp_buf transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0;
#line 1922 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_91_91;
#line 1922 "deforest.m"
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_36;
#line 1922 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_37;
#line 1922 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_38;
#line 1922 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__InlinePromisedPure_40;
#line 1922 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_42;
#line 1922 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_43;
#line 1922 "deforest.m"
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_44;
#line 1922 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__V_54_54;
#line 1922 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__V_55_55;
#line 1922 "deforest.m"
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__V_90_90;
#line 1924 "deforest.m"
  MR_Box transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_36;
#line 1898 "deforest.m"
};

#line 878 "deforest.m"
struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s {
#line 878 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7;
#line 878 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8;
#line 878 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9;
#line 882 "deforest.m"
  MR_bool transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded;
#line 882 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredInfo_12;
#line 882 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14;
#line 882 "deforest.m"
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19;
#line 882 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_20;
#line 912 "deforest.m"
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_0;
#line 912 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_23;
#line 912 "deforest.m"
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_24;
#line 912 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_36;
#line 912 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_37;
#line 912 "deforest.m"
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_38;
#line 938 "deforest.m"
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1;
#line 938 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_42;
#line 938 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__InlinePromisedPure_50;
#line 938 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CallerMarkers_51;
#line 938 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_97;
#line 938 "deforest.m"
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_98;
#line 971 "deforest.m"
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2;
#line 971 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_52;
#line 971 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_54;
#line 968 "deforest.m"
  MR_Box transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_52;
#line 985 "deforest.m"
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3;
#line 985 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_55;
#line 985 "deforest.m"
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_56;
#line 987 "deforest.m"
  MR_Box transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_56;
#line 878 "deforest.m"
};

#line 816 "deforest.m"
struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s {
#line 819 "deforest.m"
  MR_bool transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded;
#line 819 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9;
#line 819 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10;
#line 819 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11;
#line 841 "deforest.m"
  jmp_buf transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0;
#line 841 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_66_66;
#line 841 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_35;
#line 841 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36;
#line 841 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_38;
#line 841 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_39;
#line 841 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_40;
#line 841 "deforest.m"
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_41;
#line 842 "deforest.m"
  MR_Box transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_36;
#line 816 "deforest.m"
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

#line 2176 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
#line 2176 "deforest.m"
  MR_Integer transform_hlds__deforest__Size_6,
#line 2176 "deforest.m"
  MR_Integer transform_hlds__deforest__OriginalCost_7,
#line 2176 "deforest.m"
  MR_Integer transform_hlds__deforest__CostDelta_8);

#line 1045 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
#line 1045 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_9,
#line 1045 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_10,
#line 1045 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_11,
#line 1045 "deforest.m"
  MR_Word * transform_hlds__deforest__MaybeGoal_12,
#line 1045 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15,
#line 1045 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_16);

#line 1750 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_1(
#line 1750 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1749 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_3(
#line 1749 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1750 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_2(
#line 1750 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1750 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_4(
#line 1750 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1705 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0(
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__ModuleInfo_2,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__FullyStrict_3,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
#line 1705 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__EndGoal_7,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__8_8,
#line 1705 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__9_9);

#line 1737 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_1(
#line 1737 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1736 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_3(
#line 1736 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1737 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_2(
#line 1737 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1737 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_4(
#line 1737 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1705 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0(
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__ModuleInfo_2,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__FullyStrict_3,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
#line 1705 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__EndGoal_7,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__8_8,
#line 1705 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__9_9);

#line 1652 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1652__1_3_p_0(
#line 1652 "deforest.m"
  MR_Word transform_hlds__deforest__LambdaHeadVar__1_29,
#line 1652 "deforest.m"
  MR_Word transform_hlds__deforest__LambdaHeadVar__2_30,
#line 1652 "deforest.m"
  MR_Word * transform_hlds__deforest__LambdaHeadVar__3_31);

#line 640 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__640__1_3_p_0(
#line 640 "deforest.m"
  MR_Word transform_hlds__deforest__LambdaHeadVar__1_22,
#line 640 "deforest.m"
  MR_Word transform_hlds__deforest__LambdaHeadVar__2_23,
#line 640 "deforest.m"
  MR_Word * transform_hlds__deforest__LambdaHeadVar__3_24);

#line 501 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__501__1_1_p_0(
#line 501 "deforest.m"
  MR_Word transform_hlds__deforest__LambdaHeadVar__1_46);

#line 147 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__deforestation__147__1_2_p_0(
#line 147 "deforest.m"
  MR_Word transform_hlds__deforest__FoundErrors_26,
#line 147 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_48);

#line 1927 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____list__list_1_1(
#line 1927 "deforest.m"
  MR_Word transform_hlds__deforest__TypeInfo_for_T_11,
#line 1927 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 1927 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2);

#line 575 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0(
#line 575 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 575 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 575 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3);

#line 575 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0(
#line 575 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 575 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2);

#line 1723 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0(
#line 1723 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 1723 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 1723 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3);

#line 1723 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0(
#line 1723 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 1723 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2);

#line 539 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0(
#line 539 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 539 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 539 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3);

#line 539 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0(
#line 539 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 539 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2);

#line 2159 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_1_p_0(
#line 2159 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1);

#line 2152 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_list_1_p_0(
#line 2152 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1);

#line 1988 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__unfold_call_10_p_0(
#line 1988 "deforest.m"
  MR_Word transform_hlds__deforest__CheckImprovement_11,
#line 1988 "deforest.m"
  MR_Word transform_hlds__deforest__CheckVars_12,
#line 1988 "deforest.m"
  MR_Word transform_hlds__deforest__PredId_13,
#line 1988 "deforest.m"
  MR_Integer transform_hlds__deforest__ProcId_14,
#line 1988 "deforest.m"
  MR_Word transform_hlds__deforest__Args_15,
#line 1988 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_16,
#line 1988 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_17,
#line 1988 "deforest.m"
  MR_Word * transform_hlds__deforest__Optimized_18,
#line 1988 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79,
#line 1988 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_80);

#line 1922 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_1(
#line 1922 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1924 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_3(
#line 1924 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1922 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_2(
#line 1922 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1922 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_4(
#line 1922 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 1898 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0(
#line 1898 "deforest.m"
  MR_Word transform_hlds__deforest__PredId_10,
#line 1898 "deforest.m"
  MR_Integer transform_hlds__deforest__ProcId_11,
#line 1898 "deforest.m"
  MR_Word transform_hlds__deforest__Args_12,
#line 1898 "deforest.m"
  MR_Word transform_hlds__deforest__SymName_13,
#line 1898 "deforest.m"
  MR_Word transform_hlds__deforest__BuiltinState_14,
#line 1898 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_15,
#line 1898 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_16,
#line 1898 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49,
#line 1898 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_50);

#line 1876 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0_1(
#line 1876 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 1876 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1876 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1876 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 1867 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0(
#line 1867 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_10,
#line 1867 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_11,
#line 1867 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend0_12,
#line 1867 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals0_13,
#line 1867 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrBranch_14,
#line 1867 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_15,
#line 1867 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_16,
#line 1867 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30,
#line 1867 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_31);

#line 1849 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_to_cases_10_p_0(
#line 1849 "deforest.m"
  MR_Word transform_hlds__deforest__Var_1,
#line 1849 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_2,
#line 1849 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend_3,
#line 1849 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_4,
#line 1849 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrCase_5,
#line 1849 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_6,
#line 1849 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__7_7,
#line 1849 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__8_8,
#line 1849 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9,
#line 1849 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_10);

#line 1834 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(
#line 1834 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_1,
#line 1834 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend_2,
#line 1834 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_3,
#line 1834 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrBranch_4,
#line 1834 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_5,
#line 1834 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__6_6,
#line 1834 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__7_7,
#line 1834 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
#line 1834 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);

#line 1761 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__push_goal_into_goal_8_p_0(
#line 1761 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_9,
#line 1761 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_10,
#line 1761 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_11,
#line 1761 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_12,
#line 1761 "deforest.m"
  MR_Word transform_hlds__deforest__LaterGoal_13,
#line 1761 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_14,
#line 1761 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87,
#line 1761 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_88);

#line 1679 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__reorder_conj_5_p_0(
#line 1679 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo0_6,
#line 1679 "deforest.m"
  MR_Word * transform_hlds__deforest__DeforestInfo_7,
#line 1679 "deforest.m"
  MR_Word * transform_hlds__deforest__BeforeIrrelevant_8,
#line 1679 "deforest.m"
  MR_Word * transform_hlds__deforest__AfterIrrelevant_9,
#line 1679 "deforest.m"
  MR_Word transform_hlds__deforest__PDInfo_10);

#line 1652 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0_1(
#line 1652 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 1652 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1652 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1652 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 1644 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(
#line 1644 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_0_27,
#line 1644 "deforest.m"
  MR_Word transform_hlds__deforest__RevBeforeGoals_11,
#line 1644 "deforest.m"
  MR_Word transform_hlds__deforest__BeforeIrrelevant_12,
#line 1644 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_13,
#line 1644 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_14,
#line 1644 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_15,
#line 1644 "deforest.m"
  MR_Word transform_hlds__deforest__AfterIrrelevant_16,
#line 1644 "deforest.m"
  MR_Word transform_hlds__deforest__AfterGoals_17,
#line 1644 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_28);

#line 1630 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(
#line 1630 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals0_8,
#line 1630 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_9,
#line 1630 "deforest.m"
  MR_Word transform_hlds__deforest__RevBeforeGoals_10,
#line 1630 "deforest.m"
  MR_Word transform_hlds__deforest__BeforeIrrelevant_11,
#line 1630 "deforest.m"
  MR_Word transform_hlds__deforest__AfterIrrelevant_12,
#line 1630 "deforest.m"
  MR_Word transform_hlds__deforest__AfterGoals0_13,
#line 1630 "deforest.m"
  MR_Word * transform_hlds__deforest__SubConjNonLocals_14);

#line 1009 "deforest.m"
static MR_Word MR_CALL 
transform_hlds__deforest__is_improvement_worth_while_4_f_0(
#line 1009 "deforest.m"
  MR_Word transform_hlds__deforest__PDInfo_6,
#line 1009 "deforest.m"
  MR_Word transform_hlds__deforest__Optimized0_7,
#line 1009 "deforest.m"
  MR_Integer transform_hlds__deforest__CostDelta0_8,
#line 1009 "deforest.m"
  MR_Integer transform_hlds__deforest__SizeDelta0_9);

#line 912 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_1(
#line 912 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 912 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_2(
#line 912 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 912 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_3(
#line 912 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 938 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_4(
#line 938 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 938 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_5(
#line 938 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 938 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_6(
#line 938 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 971 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_7(
#line 971 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 971 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_8(
#line 971 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 968 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_9(
#line 968 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 971 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_10(
#line 971 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 985 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_11(
#line 985 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 985 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_12(
#line 985 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 987 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_13(
#line 987 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 985 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_14(
#line 985 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 878 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0(
#line 878 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_7,
#line 878 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_8,
#line 878 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_9,
#line 878 "deforest.m"
  MR_Word * transform_hlds__deforest__ShouldTry_10,
#line 878 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_58,
#line 878 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_59);

#line 841 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_1(
#line 841 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 841 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_2(
#line 841 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 842 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_3(
#line 842 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 841 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_4(
#line 841 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg);

#line 816 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0(
#line 816 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_5,
#line 816 "deforest.m"
  MR_Word * transform_hlds__deforest__ShouldTry_6,
#line 816 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_47,
#line 816 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_48);

#line 793 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_2(
#line 793 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 793 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 793 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 793 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 680 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_1(
#line 680 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 680 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 680 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 680 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 653 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0(
#line 653 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_10,
#line 653 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo0_11,
#line 653 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82,
#line 653 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_83,
#line 653 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84,
#line 653 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85,
#line 653 "deforest.m"
  MR_Word * transform_hlds__deforest__Optimized_14,
#line 653 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86,
#line 653 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_87);

#line 640 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0_1(
#line 640 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 640 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 640 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 640 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 601 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0(
#line 601 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_7,
#line 601 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierBranchInfo_8,
#line 601 "deforest.m"
  MR_Word transform_hlds__deforest__RevBetweenGoals0_9,
#line 601 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 601 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_12,
#line 601 "deforest.m"
  MR_Word * transform_hlds__deforest__DeforestInfo_13);

#line 542 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_conj_6_p_0(
#line 542 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 542 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_2,
#line 542 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3,
#line 542 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__4_4,
#line 542 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
#line 542 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6);

#line 501 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0_1(
#line 501 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 501 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1);

#line 485 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0(
#line 485 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 485 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_2,
#line 485 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3,
#line 485 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_4,
#line 485 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
#line 485 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6);

#line 435 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__compute_goal_infos_4_p_0(
#line 435 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 435 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
#line 435 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
#line 435 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);

#line 414 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(
#line 414 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 414 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 414 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_3,
#line 414 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
#line 414 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5);

#line 395 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_cases_5_p_0(
#line 395 "deforest.m"
  MR_Word transform_hlds__deforest__Var_1,
#line 395 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 395 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_3,
#line 395 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
#line 395 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5);

#line 383 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_disj_4_p_0(
#line 383 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 383 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
#line 383 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
#line 383 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);

#line 285 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_goal_expr_6_p_0(
#line 285 "deforest.m"
  MR_Word transform_hlds__deforest__GoalExpr0_7,
#line 285 "deforest.m"
  MR_Word * transform_hlds__deforest__GoalExpr_8,
#line 285 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60,
#line 285 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61,
#line 285 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62,
#line 285 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);

#line 277 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_goal_4_p_0(
#line 277 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_5,
#line 277 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_6,
#line 277 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_12,
#line 277 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_13);

#line 191 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_proc_3_p_0(
#line 191 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_4,
#line 191 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
#line 191 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);

#line 180 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(
#line 180 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_8,
#line 180 "deforest.m"
  MR_Word transform_hlds__deforest__ProcInfo_9,
#line 180 "deforest.m"
  MR_Word * transform_hlds__deforest__ProcInfo_3,
#line 180 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_15,
#line 180 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_16,
#line 180 "deforest.m"
  MR_Word transform_hlds__deforest__UnivProcArgInfo0_11,
#line 180 "deforest.m"
  MR_Word * transform_hlds__deforest__UnivProcArgInfo_12);

#line 153 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(
#line 153 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_4,
#line 153 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_12,
#line 153 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_13);

#line 147 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__deforestation_2_p_0_4(
#line 147 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg);

#line 139 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_2_p_0_3(
#line 139 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 139 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 139 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 139 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 123 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_2_p_0_2(
#line 123 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 123 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 123 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 123 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

#line 103 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_2_p_0_1(
#line 103 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 103 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 103 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 103 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3,
#line 103 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_4,
#line 103 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_5,
#line 103 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_6,
#line 103 "deforest.m"
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
    ((MR_Box) (transform_hlds__deforest__deforestation_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__deforest__deforestation_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__deforest__deforestation_2_p_0_3)),
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1587 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1595 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1603 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__deforest__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1612 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1620 "transform_hlds.deforest.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1628 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1,
  {
    (MR_TypeInfo) &transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1636 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1644 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__deforest__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_TypeInfo) &transform_hlds__deforest__maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1653 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__deforest__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1661 "transform_hlds.deforest.c"
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

#line 1678 "transform_hlds.deforest.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1686 "transform_hlds.deforest.c"
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

#line 1698 "transform_hlds.deforest.c"
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

#line 1715 "transform_hlds.deforest.c"
static const MR_PseudoTypeInfo transform_hlds__deforest__transform_hlds__deforest__field_types_deforest_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

#line 1725 "transform_hlds.deforest.c"
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

#line 1740 "transform_hlds.deforest.c"
static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_stag_ordered_deforest_info_0_0[1] = {
  &transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0
};

#line 1745 "transform_hlds.deforest.c"
static const MR_DuPtagLayout transform_hlds__deforest__transform_hlds__deforest__du_ptag_ordered_deforest_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__deforest__transform_hlds__deforest__du_stag_ordered_deforest_info_0_0
  }
};

#line 1754 "transform_hlds.deforest.c"
static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_name_ordered_deforest_info_0[1] = {
  &transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0
};

#line 1759 "transform_hlds.deforest.c"
static const MR_Integer transform_hlds__deforest__transform_hlds__deforest__functor_number_map_deforest_info_0[1] = {
  (MR_Integer) 0
};

#line 1764 "transform_hlds.deforest.c"
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

#line 1781 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0_10001(
#line 1784 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1786 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2)
#line 1788 "transform_hlds.deforest.c"
{
#line 1790 "transform_hlds.deforest.c"
  {
#line 1792 "transform_hlds.deforest.c"
    MR_bool transform_hlds__deforest__succeeded;

#line 1795 "transform_hlds.deforest.c"
    {
#line 1797 "transform_hlds.deforest.c"
      transform_hlds__deforest__succeeded = transform_hlds__deforest____Unify____annotated_conj_0_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2));
    }
#line 1800 "transform_hlds.deforest.c"
    return transform_hlds__deforest__succeeded;
#line 1802 "transform_hlds.deforest.c"
  }
#line 1804 "transform_hlds.deforest.c"
}

#line 1807 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0_10001(
#line 1810 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 1812 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1814 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3)
#line 1816 "transform_hlds.deforest.c"
{
#line 1818 "transform_hlds.deforest.c"
  {
#line 1820 "transform_hlds.deforest.c"
    MR_Word transform_hlds__deforest__conv0_HeadVar__1_1;

#line 1823 "transform_hlds.deforest.c"
    {
#line 1825 "transform_hlds.deforest.c"
      transform_hlds__deforest____Compare____annotated_conj_0_0(&transform_hlds__deforest__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__deforest__wrapper_arg_2), ((MR_Word) transform_hlds__deforest__wrapper_arg_3));
    }
#line 1828 "transform_hlds.deforest.c"
    *transform_hlds__deforest__wrapper_arg_1 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__1_1));
#line 1830 "transform_hlds.deforest.c"
  }
#line 1832 "transform_hlds.deforest.c"
}

#line 1835 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0_10001(
#line 1838 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1840 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2)
#line 1842 "transform_hlds.deforest.c"
{
#line 1844 "transform_hlds.deforest.c"
  {
#line 1846 "transform_hlds.deforest.c"
    MR_bool transform_hlds__deforest__succeeded;

#line 1849 "transform_hlds.deforest.c"
    {
#line 1851 "transform_hlds.deforest.c"
      transform_hlds__deforest__succeeded = transform_hlds__deforest____Unify____can_move_0_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2));
    }
#line 1854 "transform_hlds.deforest.c"
    return transform_hlds__deforest__succeeded;
#line 1856 "transform_hlds.deforest.c"
  }
#line 1858 "transform_hlds.deforest.c"
}

#line 1861 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0_10001(
#line 1864 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 1866 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1868 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3)
#line 1870 "transform_hlds.deforest.c"
{
#line 1872 "transform_hlds.deforest.c"
  {
#line 1874 "transform_hlds.deforest.c"
    MR_Word transform_hlds__deforest__conv0_HeadVar__1_1;

#line 1877 "transform_hlds.deforest.c"
    {
#line 1879 "transform_hlds.deforest.c"
      transform_hlds__deforest____Compare____can_move_0_0(&transform_hlds__deforest__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__deforest__wrapper_arg_2), ((MR_Word) transform_hlds__deforest__wrapper_arg_3));
    }
#line 1882 "transform_hlds.deforest.c"
    *transform_hlds__deforest__wrapper_arg_1 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__1_1));
#line 1884 "transform_hlds.deforest.c"
  }
#line 1886 "transform_hlds.deforest.c"
}

#line 1889 "transform_hlds.deforest.c"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0_10001(
#line 1892 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1894 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2)
#line 1896 "transform_hlds.deforest.c"
{
#line 1898 "transform_hlds.deforest.c"
  {
#line 1900 "transform_hlds.deforest.c"
    MR_bool transform_hlds__deforest__succeeded;

#line 1903 "transform_hlds.deforest.c"
    {
#line 1905 "transform_hlds.deforest.c"
      transform_hlds__deforest__succeeded = transform_hlds__deforest____Unify____deforest_info_0_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2));
    }
#line 1908 "transform_hlds.deforest.c"
    return transform_hlds__deforest__succeeded;
#line 1910 "transform_hlds.deforest.c"
  }
#line 1912 "transform_hlds.deforest.c"
}

#line 1915 "transform_hlds.deforest.c"
static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0_10001(
#line 1918 "transform_hlds.deforest.c"
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
#line 1920 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1922 "transform_hlds.deforest.c"
  MR_Box transform_hlds__deforest__wrapper_arg_3)
#line 1924 "transform_hlds.deforest.c"
{
#line 1926 "transform_hlds.deforest.c"
  {
#line 1928 "transform_hlds.deforest.c"
    MR_Word transform_hlds__deforest__conv0_HeadVar__1_1;

#line 1931 "transform_hlds.deforest.c"
    {
#line 1933 "transform_hlds.deforest.c"
      transform_hlds__deforest____Compare____deforest_info_0_0(&transform_hlds__deforest__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__deforest__wrapper_arg_2), ((MR_Word) transform_hlds__deforest__wrapper_arg_3));
    }
#line 1936 "transform_hlds.deforest.c"
    *transform_hlds__deforest__wrapper_arg_1 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__1_1));
#line 1938 "transform_hlds.deforest.c"
  }
#line 1940 "transform_hlds.deforest.c"
}

#line 2176 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
#line 2176 "deforest.m"
  MR_Integer transform_hlds__deforest__Size_6,
#line 2176 "deforest.m"
  MR_Integer transform_hlds__deforest__OriginalCost_7,
#line 2176 "deforest.m"
  MR_Integer transform_hlds__deforest__CostDelta_8)
#line 2176 "deforest.m"
{
#line 2182 "deforest.m"
  {
#line 2182 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded = (transform_hlds__deforest__Size_6 <= (MR_Integer) 5);

#line 2182 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 2181 "deforest.m"
      {
#line 2181 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__CostDelta_8 > (MR_Integer) 0);
#line 2181 "deforest.m"
      }
#line 2182 "deforest.m"
    else
#line 2183 "deforest.m"
      {
#line 2183 "deforest.m"
        MR_Integer transform_hlds__deforest__PercentChange_9;
#line 2183 "deforest.m"
        MR_Integer transform_hlds__deforest__V_12_12 = (transform_hlds__deforest__CostDelta_8 * (MR_Integer) 100);

#line 2183 "deforest.m"
        {
#line 2183 "deforest.m"
          transform_hlds__deforest__PercentChange_9 = mercury__int__f_47_47_2_f_0(transform_hlds__deforest__V_12_12, transform_hlds__deforest__OriginalCost_7);
        }
#line 2184 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__PercentChange_9 >= (MR_Integer) 5);
#line 2183 "deforest.m"
      }
#line 2182 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 2182 "deforest.m"
  }
#line 2176 "deforest.m"
}

#line 1045 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
#line 1045 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_9,
#line 1045 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_10,
#line 1045 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_11,
#line 1045 "deforest.m"
  MR_Word * transform_hlds__deforest__MaybeGoal_12,
#line 1045 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15,
#line 1045 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_16)
#line 1045 "deforest.m"
{
#line 1050 "deforest.m"
  while (MR_TRUE)
#line 1050 "deforest.m"
    {
#line 1050 "deforest.m"
      /* tailcall optimized into a loop */
#line 1050 "deforest.m"
      {
#line 1050 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;
#line 1050 "deforest.m"
        MR_Word transform_hlds__deforest__ShouldTry_14;
#line 1050 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;

#line 1051 "deforest.m"
        {
#line 1051 "deforest.m"
          transform_hlds__deforest__can_optimize_conj_6_p_0(transform_hlds__deforest__EarlierGoal_9, transform_hlds__deforest__BetweenGoals_10, transform_hlds__deforest__MaybeLaterGoal_11, &transform_hlds__deforest__ShouldTry_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17);
        }
#line 1057 "deforest.m"
#line 1057 "deforest.m"
        switch (transform_hlds__deforest__ShouldTry_14) {
#line 1057 "deforest.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1057 "deforest.m"
          case (MR_Integer) 0:
#line 1058 "deforest.m"
            {
#line 1059 "deforest.m"
              *transform_hlds__deforest__MaybeGoal_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1058 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;
#line 1058 "deforest.m"
            }
#line 1057 "deforest.m"
            break;
#line 1057 "deforest.m"
          case (MR_Integer) 1:
#line 1055 "deforest.m"
            {
#line 1055 "deforest.m"
              /* direct tailcall eliminated */
#line 1055 "deforest.m"
              {
#line 1055 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_15 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;

#line 1055 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_15;
#line 1055 "deforest.m"
              }
#line 1055 "deforest.m"
              continue;
#line 1055 "deforest.m"
            }
#line 1057 "deforest.m"
            break;
#line 1057 "deforest.m"
        }
#line 1050 "deforest.m"
      }
#line 1050 "deforest.m"
      break;
#line 1050 "deforest.m"
    }
#line 1045 "deforest.m"
}

#line 1750 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_1(
#line 1750 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1750 "deforest.m"
{
#line 1750 "deforest.m"
  {
#line 1750 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1750 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0, 1);
#line 1750 "deforest.m"
  }
#line 1750 "deforest.m"
}

#line 1749 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_3(
#line 1749 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1749 "deforest.m"
{
#line 1749 "deforest.m"
  {
#line 1749 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1749 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_41 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_41);
#line 1749 "deforest.m"
    {
#line 1749 "deforest.m"
      transform_hlds__deforest__move_goals__ho2_9_p_0_2(transform_hlds__deforest__env_ptr);
    }
#line 1749 "deforest.m"
  }
#line 1749 "deforest.m"
}

#line 1750 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_2(
#line 1750 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1750 "deforest.m"
{
#line 1750 "deforest.m"
  {
#line 1750 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1751 "deforest.m"
    {
#line 1751 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = transform_hlds__pd_util__pd_can_reorder_goals_4_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_41, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23);
    }
#line 1750 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded);
#line 1750 "deforest.m"
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded)
#line 1750 "deforest.m"
      {
#line 1750 "deforest.m"
        transform_hlds__deforest__move_goals__ho2_9_p_0_1(transform_hlds__deforest__env_ptr);
      }
#line 1750 "deforest.m"
  }
#line 1750 "deforest.m"
}

#line 1750 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_4(
#line 1750 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1750 "deforest.m"
{
#line 1750 "deforest.m"
  {
#line 1750 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1750 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0) == 0)
#line 1750 "deforest.m"
      {
#line 1750 "deforest.m"
        {
#line 1749 "deforest.m"
          {
#line 1749 "deforest.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_41, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__V_32_32, transform_hlds__deforest__move_goals__ho2_9_p_0_3, transform_hlds__deforest__env_ptr);
          }
#line 1750 "deforest.m"
        }
#line 1750 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = MR_FALSE;
#line 1750 "deforest.m"
      }
#line 1750 "deforest.m"
    else
#line 1750 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = MR_TRUE;
#line 1750 "deforest.m"
  }
#line 1750 "deforest.m"
}

#line 1705 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0(
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__ModuleInfo_2,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__FullyStrict_3,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
#line 1705 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__EndGoal_7,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__8_8,
#line 1705 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__9_9)
#line 1705 "deforest.m"
{
#line 1705 "deforest.m"
  {
#line 1705 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s transform_hlds__deforest__env;

#line 1705 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2 = transform_hlds__deforest__ModuleInfo_2;
#line 1705 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3 = transform_hlds__deforest__FullyStrict_3;
#line 1709 "deforest.m"
    while (MR_TRUE)
#line 1709 "deforest.m"
      {
#line 1709 "deforest.m"
        /* tailcall optimized into a loop */
#line 1709 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1709 "deforest.m"
          {
#line 1709 "deforest.m"
            *transform_hlds__deforest__HeadVar__9_9 = transform_hlds__deforest__HeadVar__8_8;
#line 1709 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
#line 1709 "deforest.m"
          }
#line 1709 "deforest.m"
        else
#line 1711 "deforest.m"
          {
#line 1711 "deforest.m"
            MR_Word transform_hlds__deforest__RevBetweenGoals0_24;
#line 1711 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;
#line 1711 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;

#line 1710 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 0)));
#line 1710 "deforest.m"
            transform_hlds__deforest__RevBetweenGoals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 1)));
#line 1714 "deforest.m"
            {
#line 1714 "deforest.m"
              MR_Word base;
#line 1714 "deforest.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1714 "deforest.m"
              (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__V_32_32 = base;
#line 1714 "deforest.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__EndGoal_7));
#line 1714 "deforest.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
#line 1714 "deforest.m"
            }
#line 1750 "deforest.m"
            {
#line 1750 "deforest.m"
              transform_hlds__deforest__move_goals__ho2_9_p_0_4(&transform_hlds__deforest__env);
            }
#line 1750 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded);
#line 1717 "deforest.m"
            if ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded)
#line 1716 "deforest.m"
              {
#line 1716 "deforest.m"
                {
#line 1716 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1716 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23));
#line 1716 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__8_8));
#line 1716 "deforest.m"
                }
#line 1716 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
#line 1716 "deforest.m"
              }
#line 1717 "deforest.m"
            else
#line 1718 "deforest.m"
              {
#line 1718 "deforest.m"
                {
#line 1718 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1718 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23));
#line 1718 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
#line 1718 "deforest.m"
                }
#line 1718 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = transform_hlds__deforest__HeadVar__8_8;
#line 1718 "deforest.m"
              }
#line 1720 "deforest.m"
            /* direct tailcall eliminated */
#line 1720 "deforest.m"
            {
#line 1720 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__4__tmp_copy_4 = transform_hlds__deforest__RevBetweenGoals0_24;
#line 1720 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;
#line 1720 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__8__tmp_copy_8 = transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;

#line 1720 "deforest.m"
              transform_hlds__deforest__HeadVar__8_8 = transform_hlds__deforest__HeadVar__8__tmp_copy_8;
#line 1720 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0__tmp_copy_5;
#line 1720 "deforest.m"
              transform_hlds__deforest__HeadVar__4_4 = transform_hlds__deforest__HeadVar__4__tmp_copy_4;
#line 1720 "deforest.m"
            }
#line 1720 "deforest.m"
            continue;
#line 1711 "deforest.m"
          }
#line 1709 "deforest.m"
        break;
#line 1709 "deforest.m"
      }
#line 1705 "deforest.m"
  }
#line 1705 "deforest.m"
}

#line 1737 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_1(
#line 1737 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1737 "deforest.m"
{
#line 1737 "deforest.m"
  {
#line 1737 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1737 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0, 1);
#line 1737 "deforest.m"
  }
#line 1737 "deforest.m"
}

#line 1736 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_3(
#line 1736 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1736 "deforest.m"
{
#line 1736 "deforest.m"
  {
#line 1736 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1736 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_41 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_41);
#line 1736 "deforest.m"
    {
#line 1736 "deforest.m"
      transform_hlds__deforest__move_goals__ho1_9_p_0_2(transform_hlds__deforest__env_ptr);
    }
#line 1736 "deforest.m"
  }
#line 1736 "deforest.m"
}

#line 1737 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_2(
#line 1737 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1737 "deforest.m"
{
#line 1737 "deforest.m"
  {
#line 1737 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1738 "deforest.m"
    {
#line 1738 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = transform_hlds__pd_util__pd_can_reorder_goals_4_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_41);
    }
#line 1737 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded);
#line 1737 "deforest.m"
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded)
#line 1737 "deforest.m"
      {
#line 1737 "deforest.m"
        transform_hlds__deforest__move_goals__ho1_9_p_0_1(transform_hlds__deforest__env_ptr);
      }
#line 1737 "deforest.m"
  }
#line 1737 "deforest.m"
}

#line 1737 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_4(
#line 1737 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1737 "deforest.m"
{
#line 1737 "deforest.m"
  {
#line 1737 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1737 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0) == 0)
#line 1737 "deforest.m"
      {
#line 1737 "deforest.m"
        {
#line 1736 "deforest.m"
          {
#line 1736 "deforest.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_41, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__V_32_32, transform_hlds__deforest__move_goals__ho1_9_p_0_3, transform_hlds__deforest__env_ptr);
          }
#line 1737 "deforest.m"
        }
#line 1737 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = MR_FALSE;
#line 1737 "deforest.m"
      }
#line 1737 "deforest.m"
    else
#line 1737 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = MR_TRUE;
#line 1737 "deforest.m"
  }
#line 1737 "deforest.m"
}

#line 1705 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0(
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__ModuleInfo_2,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__FullyStrict_3,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
#line 1705 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__EndGoal_7,
#line 1705 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__8_8,
#line 1705 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__9_9)
#line 1705 "deforest.m"
{
#line 1705 "deforest.m"
  {
#line 1705 "deforest.m"
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s transform_hlds__deforest__env;

#line 1705 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2 = transform_hlds__deforest__ModuleInfo_2;
#line 1705 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3 = transform_hlds__deforest__FullyStrict_3;
#line 1709 "deforest.m"
    while (MR_TRUE)
#line 1709 "deforest.m"
      {
#line 1709 "deforest.m"
        /* tailcall optimized into a loop */
#line 1709 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1709 "deforest.m"
          {
#line 1709 "deforest.m"
            *transform_hlds__deforest__HeadVar__9_9 = transform_hlds__deforest__HeadVar__8_8;
#line 1709 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
#line 1709 "deforest.m"
          }
#line 1709 "deforest.m"
        else
#line 1711 "deforest.m"
          {
#line 1711 "deforest.m"
            MR_Word transform_hlds__deforest__RevBetweenGoals0_24;
#line 1711 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;
#line 1711 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;

#line 1710 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 0)));
#line 1710 "deforest.m"
            transform_hlds__deforest__RevBetweenGoals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 1)));
#line 1714 "deforest.m"
            {
#line 1714 "deforest.m"
              MR_Word base;
#line 1714 "deforest.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1714 "deforest.m"
              (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__V_32_32 = base;
#line 1714 "deforest.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__EndGoal_7));
#line 1714 "deforest.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
#line 1714 "deforest.m"
            }
#line 1737 "deforest.m"
            {
#line 1737 "deforest.m"
              transform_hlds__deforest__move_goals__ho1_9_p_0_4(&transform_hlds__deforest__env);
            }
#line 1737 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded);
#line 1717 "deforest.m"
            if ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded)
#line 1716 "deforest.m"
              {
#line 1716 "deforest.m"
                {
#line 1716 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1716 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23));
#line 1716 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__8_8));
#line 1716 "deforest.m"
                }
#line 1716 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
#line 1716 "deforest.m"
              }
#line 1717 "deforest.m"
            else
#line 1718 "deforest.m"
              {
#line 1718 "deforest.m"
                {
#line 1718 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1718 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23));
#line 1718 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
#line 1718 "deforest.m"
                }
#line 1718 "deforest.m"
                transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = transform_hlds__deforest__HeadVar__8_8;
#line 1718 "deforest.m"
              }
#line 1720 "deforest.m"
            /* direct tailcall eliminated */
#line 1720 "deforest.m"
            {
#line 1720 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__4__tmp_copy_4 = transform_hlds__deforest__RevBetweenGoals0_24;
#line 1720 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;
#line 1720 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__8__tmp_copy_8 = transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;

#line 1720 "deforest.m"
              transform_hlds__deforest__HeadVar__8_8 = transform_hlds__deforest__HeadVar__8__tmp_copy_8;
#line 1720 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0__tmp_copy_5;
#line 1720 "deforest.m"
              transform_hlds__deforest__HeadVar__4_4 = transform_hlds__deforest__HeadVar__4__tmp_copy_4;
#line 1720 "deforest.m"
            }
#line 1720 "deforest.m"
            continue;
#line 1711 "deforest.m"
          }
#line 1709 "deforest.m"
        break;
#line 1709 "deforest.m"
      }
#line 1705 "deforest.m"
  }
#line 1705 "deforest.m"
}

#line 1652 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1652__1_3_p_0(
#line 1652 "deforest.m"
  MR_Word transform_hlds__deforest__LambdaHeadVar__1_29,
#line 1652 "deforest.m"
  MR_Word transform_hlds__deforest__LambdaHeadVar__2_30,
#line 1652 "deforest.m"
  MR_Word * transform_hlds__deforest__LambdaHeadVar__3_31)
#line 1652 "deforest.m"
{
#line 1652 "deforest.m"
  {
#line 1652 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1652 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LambdaHeadVar__1_29, (MR_Integer) 1)));
#line 1652 "deforest.m"
    MR_Word transform_hlds__deforest__GoalNonLocals_25;
#line 1653 "deforest.m"
    MR_Word transform_hlds__deforest__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LambdaHeadVar__1_29, (MR_Integer) 0)));

#line 1654 "deforest.m"
    {
#line 1654 "deforest.m"
      transform_hlds__deforest__GoalNonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__GoalInfo_24);
    }
#line 1655 "deforest.m"
    {
#line 1655 "deforest.m"
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__GoalNonLocals_25, transform_hlds__deforest__LambdaHeadVar__2_30, transform_hlds__deforest__LambdaHeadVar__3_31);
    }
#line 1652 "deforest.m"
  }
#line 1652 "deforest.m"
}

#line 640 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__640__1_3_p_0(
#line 640 "deforest.m"
  MR_Word transform_hlds__deforest__LambdaHeadVar__1_22,
#line 640 "deforest.m"
  MR_Word transform_hlds__deforest__LambdaHeadVar__2_23,
#line 640 "deforest.m"
  MR_Word * transform_hlds__deforest__LambdaHeadVar__3_24)
#line 640 "deforest.m"
{
#line 640 "deforest.m"
  {
#line 640 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 640 "deforest.m"
    MR_Word transform_hlds__deforest__Branches1_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LambdaHeadVar__1_22, (MR_Integer) 1)));
#line 642 "deforest.m"
    MR_Word transform_hlds__deforest__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LambdaHeadVar__1_22, (MR_Integer) 0)));

#line 643 "deforest.m"
    {
#line 643 "deforest.m"
      mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__deforest__LambdaHeadVar__2_23, transform_hlds__deforest__Branches1_20, transform_hlds__deforest__LambdaHeadVar__3_24);
    }
#line 640 "deforest.m"
  }
#line 640 "deforest.m"
}

#line 501 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__501__1_1_p_0(
#line 501 "deforest.m"
  MR_Word transform_hlds__deforest__LambdaHeadVar__1_46)
#line 501 "deforest.m"
{
#line 501 "deforest.m"
  {
#line 501 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 501 "deforest.m"
    MR_Word transform_hlds__deforest__CnstrGoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LambdaHeadVar__1_46, (MR_Integer) 1)));
#line 502 "deforest.m"
    MR_Word transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LambdaHeadVar__1_46, (MR_Integer) 0)));

#line 503 "deforest.m"
    {
#line 503 "deforest.m"
      transform_hlds__deforest__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(transform_hlds__deforest__CnstrGoalInfo_30, (MR_Integer) 0);
    }
#line 501 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 501 "deforest.m"
  }
#line 501 "deforest.m"
}

#line 147 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__deforestation__147__1_2_p_0(
#line 147 "deforest.m"
  MR_Word transform_hlds__deforest__FoundErrors_26,
#line 147 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_48)
#line 147 "deforest.m"
{
#line 147 "deforest.m"
  {
#line 147 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded = (transform_hlds__deforest__FoundErrors_26 == transform_hlds__deforest__HeadVar__2_48);

#line 147 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 147 "deforest.m"
  }
#line 147 "deforest.m"
}

#line 1927 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____list__list_1_1(
#line 1927 "deforest.m"
  MR_Word transform_hlds__deforest__TypeInfo_for_T_11,
#line 1927 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 1927 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2)
#line 1927 "deforest.m"
{
#line 1927 "deforest.m"
  {
#line 1927 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1927 "deforest.m"
    MR_Word transform_hlds__deforest__V_6_6;
#line 1927 "deforest.m"
    MR_Box transform_hlds__deforest__V_7_7;
#line 1927 "deforest.m"
    MR_Word transform_hlds__deforest__V_8_8;

#line 1927 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 1927 "deforest.m"
      {
#line 1927 "deforest.m"
        transform_hlds__deforest__V_7_7 = (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0));
#line 1927 "deforest.m"
        transform_hlds__deforest__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
#line 1927 "deforest.m"
        (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)) = transform_hlds__deforest__V_7_7;
#line 1927 "deforest.m"
        transform_hlds__deforest__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 1927 "deforest.m"
        {
#line 1927 "deforest.m"
          transform_hlds__deforest__succeeded = mercury__list____Unify____list_1_0(transform_hlds__deforest__TypeInfo_for_T_11, transform_hlds__deforest__V_6_6, transform_hlds__deforest__V_8_8);
        }
#line 1927 "deforest.m"
      }
#line 1927 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 1927 "deforest.m"
  }
#line 1927 "deforest.m"
}

#line 575 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0(
#line 575 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 575 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 575 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3)
#line 575 "deforest.m"
{
#line 575 "deforest.m"
  {
#line 575 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 575 "deforest.m"
    MR_Integer transform_hlds__deforest__CastX_21 = (MR_Integer) transform_hlds__deforest__HeadVar__2_2;
#line 575 "deforest.m"
    MR_Integer transform_hlds__deforest__CastY_22 = (MR_Integer) transform_hlds__deforest__HeadVar__3_3;

#line 575 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__CastX_21 == transform_hlds__deforest__CastY_22);
#line 575 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 2790 "transform_hlds.deforest.c"
      *transform_hlds__deforest__HeadVar__1_1 = (MR_Integer) 0;
#line 575 "deforest.m"
    else
#line 575 "deforest.m"
      {
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 2)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 3)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 4)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 5)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 0)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 1)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 2)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 3)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 4)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 5)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_16_16;

#line 575 "deforest.m"
        {
#line 575 "deforest.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__deforest__V_16_16, transform_hlds__deforest__V_4_4, transform_hlds__deforest__V_10_10);
        }
#line 2828 "transform_hlds.deforest.c"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_16_16 == (MR_Integer) 0);
#line 575 "deforest.m"
        transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 575 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 575 "deforest.m"
          *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_16_16;
#line 575 "deforest.m"
        else
#line 575 "deforest.m"
          {
#line 575 "deforest.m"
            MR_Word transform_hlds__deforest__V_17_17;

#line 575 "deforest.m"
            {
#line 575 "deforest.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[2], &transform_hlds__deforest__V_17_17, ((MR_Box) (transform_hlds__deforest__V_5_5)), ((MR_Box) (transform_hlds__deforest__V_11_11)));
            }
#line 2848 "transform_hlds.deforest.c"
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_17_17 == (MR_Integer) 0);
#line 575 "deforest.m"
            transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 575 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 575 "deforest.m"
              *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_17_17;
#line 575 "deforest.m"
            else
#line 575 "deforest.m"
              {
#line 575 "deforest.m"
                MR_Word transform_hlds__deforest__V_18_18;

#line 575 "deforest.m"
                {
#line 575 "deforest.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[7], &transform_hlds__deforest__V_18_18, ((MR_Box) (transform_hlds__deforest__V_6_6)), ((MR_Box) (transform_hlds__deforest__V_12_12)));
                }
#line 2868 "transform_hlds.deforest.c"
                transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_18_18 == (MR_Integer) 0);
#line 575 "deforest.m"
                transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 575 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 575 "deforest.m"
                  *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_18_18;
#line 575 "deforest.m"
                else
#line 575 "deforest.m"
                  {
#line 575 "deforest.m"
                    MR_Word transform_hlds__deforest__V_19_19;

#line 575 "deforest.m"
                    {
#line 575 "deforest.m"
                      hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__deforest__V_19_19, transform_hlds__deforest__V_7_7, transform_hlds__deforest__V_13_13);
                    }
#line 2888 "transform_hlds.deforest.c"
                    transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_19_19 == (MR_Integer) 0);
#line 575 "deforest.m"
                    transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 575 "deforest.m"
                    if (transform_hlds__deforest__succeeded)
#line 575 "deforest.m"
                      *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_19_19;
#line 575 "deforest.m"
                    else
#line 575 "deforest.m"
                      {
#line 575 "deforest.m"
                        MR_Word transform_hlds__deforest__V_20_20;

#line 575 "deforest.m"
                        {
#line 575 "deforest.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[2], &transform_hlds__deforest__V_20_20, ((MR_Box) (transform_hlds__deforest__V_8_8)), ((MR_Box) (transform_hlds__deforest__V_14_14)));
                        }
#line 2908 "transform_hlds.deforest.c"
                        transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_20_20 == (MR_Integer) 0);
#line 575 "deforest.m"
                        transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 575 "deforest.m"
                        if (transform_hlds__deforest__succeeded)
#line 575 "deforest.m"
                          *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__V_20_20;
#line 575 "deforest.m"
                        else
#line 575 "deforest.m"
                          {
#line 575 "deforest.m"
                            {
#line 575 "deforest.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[4], transform_hlds__deforest__HeadVar__1_1, ((MR_Box) (transform_hlds__deforest__V_9_9)), ((MR_Box) (transform_hlds__deforest__V_15_15)));
                            }
#line 575 "deforest.m"
                          }
#line 575 "deforest.m"
                      }
#line 575 "deforest.m"
                  }
#line 575 "deforest.m"
              }
#line 575 "deforest.m"
          }
#line 575 "deforest.m"
      }
#line 575 "deforest.m"
  }
#line 575 "deforest.m"
}

#line 575 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0(
#line 575 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 575 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2)
#line 575 "deforest.m"
{
#line 575 "deforest.m"
  {
#line 575 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 575 "deforest.m"
    MR_Integer transform_hlds__deforest__CastX_15 = (MR_Integer) transform_hlds__deforest__HeadVar__1_1;
#line 575 "deforest.m"
    MR_Integer transform_hlds__deforest__CastY_16 = (MR_Integer) transform_hlds__deforest__HeadVar__2_2;

#line 575 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__CastX_15 == transform_hlds__deforest__CastY_16);
#line 575 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 575 "deforest.m"
      transform_hlds__deforest__succeeded = MR_TRUE;
#line 575 "deforest.m"
    else
#line 575 "deforest.m"
      {
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_18_18;
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_19_19;
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_21_21;
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_22_22;
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 2)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 3)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 4)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 5)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 2)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 3)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 4)));
#line 575 "deforest.m"
        MR_Word transform_hlds__deforest__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 5)));

#line 3003 "transform_hlds.deforest.c"
        {
#line 3005 "transform_hlds.deforest.c"
          transform_hlds__deforest__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__deforest__V_3_3, transform_hlds__deforest__V_9_9);
        }
#line 575 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 575 "deforest.m"
          {
#line 3012 "transform_hlds.deforest.c"
            transform_hlds__deforest__TypeInfo_18_18 = (MR_Word) &transform_hlds__deforest_scalar_common_1[2];
#line 3014 "transform_hlds.deforest.c"
            {
#line 3016 "transform_hlds.deforest.c"
              transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_18_18, ((MR_Box) (transform_hlds__deforest__V_4_4)), ((MR_Box) (transform_hlds__deforest__V_10_10)));
            }
#line 575 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 575 "deforest.m"
              {
#line 3023 "transform_hlds.deforest.c"
                transform_hlds__deforest__TypeInfo_19_19 = (MR_Word) &transform_hlds__deforest_scalar_common_1[7];
#line 3025 "transform_hlds.deforest.c"
                {
#line 3027 "transform_hlds.deforest.c"
                  transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_19_19, ((MR_Box) (transform_hlds__deforest__V_5_5)), ((MR_Box) (transform_hlds__deforest__V_11_11)));
                }
#line 575 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 575 "deforest.m"
                  {
#line 3034 "transform_hlds.deforest.c"
                    {
#line 3036 "transform_hlds.deforest.c"
                      transform_hlds__deforest__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__deforest__V_6_6, transform_hlds__deforest__V_12_12);
                    }
#line 575 "deforest.m"
                    if (transform_hlds__deforest__succeeded)
#line 575 "deforest.m"
                      {
#line 3043 "transform_hlds.deforest.c"
                        transform_hlds__deforest__TypeInfo_21_21 = (MR_Word) &transform_hlds__deforest_scalar_common_1[2];
#line 3045 "transform_hlds.deforest.c"
                        {
#line 3047 "transform_hlds.deforest.c"
                          transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_21_21, ((MR_Box) (transform_hlds__deforest__V_7_7)), ((MR_Box) (transform_hlds__deforest__V_13_13)));
                        }
#line 575 "deforest.m"
                        if (transform_hlds__deforest__succeeded)
#line 575 "deforest.m"
                          {
#line 3054 "transform_hlds.deforest.c"
                            transform_hlds__deforest__TypeInfo_22_22 = (MR_Word) &transform_hlds__deforest_scalar_common_1[4];
#line 3056 "transform_hlds.deforest.c"
                            {
#line 3058 "transform_hlds.deforest.c"
                              transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_22_22, ((MR_Box) (transform_hlds__deforest__V_8_8)), ((MR_Box) (transform_hlds__deforest__V_14_14)));
                            }
#line 575 "deforest.m"
                          }
#line 575 "deforest.m"
                      }
#line 575 "deforest.m"
                  }
#line 575 "deforest.m"
              }
#line 575 "deforest.m"
          }
#line 575 "deforest.m"
      }
#line 575 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 575 "deforest.m"
  }
#line 575 "deforest.m"
}

#line 1723 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0(
#line 1723 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 1723 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 1723 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3)
#line 1723 "deforest.m"
{
#line 1723 "deforest.m"
  {
#line 1723 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1723 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar1_4 = transform_hlds__deforest__HeadVar__2_2;
#line 1723 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar2_5 = transform_hlds__deforest__HeadVar__3_3;

#line 1723 "deforest.m"
    {
#line 1723 "deforest.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_3[0], transform_hlds__deforest__HeadVar__1_1, ((MR_Box) (transform_hlds__deforest__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__deforest__Cast_HeadVar2_5)));
    }
#line 1723 "deforest.m"
  }
#line 1723 "deforest.m"
}

#line 1723 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0(
#line 1723 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 1723 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2)
#line 1723 "deforest.m"
{
#line 1723 "deforest.m"
  {
#line 1723 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1723 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar1_3 = transform_hlds__deforest__HeadVar__1_1;
#line 1723 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar2_4 = transform_hlds__deforest__HeadVar__2_2;

#line 1723 "deforest.m"
    {
#line 1723 "deforest.m"
      transform_hlds__deforest__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) transform_hlds__deforest__Cast_HeadVar1_3, (MR_Word) transform_hlds__deforest__Cast_HeadVar2_4);
    }
#line 1723 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 1723 "deforest.m"
  }
#line 1723 "deforest.m"
}

#line 539 "deforest.m"
static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0(
#line 539 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
#line 539 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 539 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3)
#line 539 "deforest.m"
{
#line 539 "deforest.m"
  {
#line 539 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 539 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar1_4 = transform_hlds__deforest__HeadVar__2_2;
#line 539 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar2_5 = transform_hlds__deforest__HeadVar__3_3;

#line 539 "deforest.m"
    {
#line 539 "deforest.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[6], transform_hlds__deforest__HeadVar__1_1, ((MR_Box) (transform_hlds__deforest__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__deforest__Cast_HeadVar2_5)));
    }
#line 539 "deforest.m"
  }
#line 539 "deforest.m"
}

#line 539 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0(
#line 539 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 539 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2)
#line 539 "deforest.m"
{
#line 539 "deforest.m"
  {
#line 539 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 539 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar1_3 = transform_hlds__deforest__HeadVar__1_1;
#line 539 "deforest.m"
    MR_Word transform_hlds__deforest__Cast_HeadVar2_4 = transform_hlds__deforest__HeadVar__2_2;

#line 539 "deforest.m"
    {
#line 539 "deforest.m"
      transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[6], ((MR_Box) (transform_hlds__deforest__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__deforest__Cast_HeadVar2_4)));
    }
#line 539 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 539 "deforest.m"
  }
#line 539 "deforest.m"
}

#line 2159 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_1_p_0(
#line 2159 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1)
#line 2159 "deforest.m"
{
#line 2161 "deforest.m"
  {
#line 2161 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 2161 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 2161 "deforest.m"
    MR_Word transform_hlds__deforest__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));

#line 2163 "deforest.m"
    {
#line 2163 "deforest.m"
      MR_Word transform_hlds__deforest__V_6_6;

#line 2163 "deforest.m"
      {
#line 2163 "deforest.m"
        transform_hlds__deforest__V_6_6 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__deforest__GoalExpr_2);
      }
#line 2163 "deforest.m"
      transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_6_6 == (MR_Integer) 1);
#line 2163 "deforest.m"
    }
#line 2164 "deforest.m"
    if (!(transform_hlds__deforest__succeeded))
#line 2165 "deforest.m"
      {
#line 2165 "deforest.m"
        MR_Word transform_hlds__deforest__Goal1_4;
#line 2165 "deforest.m"
        MR_Word transform_hlds__deforest__GoalList1_5;

#line 2165 "deforest.m"
        transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_2)) == (MR_mktag((MR_Integer) 0)));
#line 2165 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2165 "deforest.m"
          {
#line 2165 "deforest.m"
            transform_hlds__deforest__Goal1_4 = (MR_Word) MR_body(((MR_Word) transform_hlds__deforest__GoalExpr_2), (MR_Integer) 0);
#line 2167 "deforest.m"
            {
#line 2167 "deforest.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__deforest__Goal1_4, &transform_hlds__deforest__GoalList1_5);
            }
#line 2168 "deforest.m"
            {
#line 2168 "deforest.m"
              transform_hlds__deforest__succeeded = transform_hlds__deforest__is_simple_goal_list_1_p_0(transform_hlds__deforest__GoalList1_5);
            }
#line 2165 "deforest.m"
          }
#line 2165 "deforest.m"
      }
#line 2161 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 2161 "deforest.m"
  }
#line 2159 "deforest.m"
}

#line 2152 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_list_1_p_0(
#line 2152 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1)
#line 2152 "deforest.m"
{
#line 2154 "deforest.m"
  while (MR_TRUE)
#line 2154 "deforest.m"
    {
#line 2154 "deforest.m"
      /* tailcall optimized into a loop */
#line 2154 "deforest.m"
      {
#line 2154 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;

#line 2154 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2154 "deforest.m"
          transform_hlds__deforest__succeeded = MR_TRUE;
#line 2154 "deforest.m"
        else
#line 2155 "deforest.m"
          {
#line 2155 "deforest.m"
            MR_Word transform_hlds__deforest__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 2155 "deforest.m"
            MR_Word transform_hlds__deforest__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));

#line 2156 "deforest.m"
            {
#line 2156 "deforest.m"
              transform_hlds__deforest__succeeded = transform_hlds__deforest__is_simple_goal_1_p_0(transform_hlds__deforest__Goal_2);
            }
#line 2155 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 2157 "deforest.m"
              {
#line 2157 "deforest.m"
                /* direct tailcall eliminated */
#line 2157 "deforest.m"
                {
#line 2157 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals_3;

#line 2157 "deforest.m"
                  transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 2157 "deforest.m"
                }
#line 2157 "deforest.m"
                continue;
#line 2157 "deforest.m"
              }
#line 2155 "deforest.m"
          }
#line 2154 "deforest.m"
        return transform_hlds__deforest__succeeded;
#line 2154 "deforest.m"
      }
#line 2154 "deforest.m"
      break;
#line 2154 "deforest.m"
    }
#line 2152 "deforest.m"
}

#line 1988 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__unfold_call_10_p_0(
#line 1988 "deforest.m"
  MR_Word transform_hlds__deforest__CheckImprovement_11,
#line 1988 "deforest.m"
  MR_Word transform_hlds__deforest__CheckVars_12,
#line 1988 "deforest.m"
  MR_Word transform_hlds__deforest__PredId_13,
#line 1988 "deforest.m"
  MR_Integer transform_hlds__deforest__ProcId_14,
#line 1988 "deforest.m"
  MR_Word transform_hlds__deforest__Args_15,
#line 1988 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_16,
#line 1988 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_17,
#line 1988 "deforest.m"
  MR_Word * transform_hlds__deforest__Optimized_18,
#line 1988 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79,
#line 1988 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_80)
#line 1988 "deforest.m"
{
#line 1993 "deforest.m"
  {
#line 1993 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1993 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_132_132;
#line 1993 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_20;
#line 1993 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_21;
#line 1993 "deforest.m"
    MR_Integer transform_hlds__deforest__VarsOpt_22;
#line 1993 "deforest.m"
    MR_Word transform_hlds__deforest__ProcInfo0_23;
#line 1993 "deforest.m"
    MR_Word transform_hlds__deforest__VarSet0_24;
#line 1993 "deforest.m"
    MR_Word transform_hlds__deforest__Vars_25;
#line 1993 "deforest.m"
    MR_Integer transform_hlds__deforest__NumVars_26;
#line 1993 "deforest.m"
    MR_Word transform_hlds__deforest__DebugPD_27;

#line 1994 "deforest.m"
    {
#line 1994 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__ModuleInfo_20);
    }
#line 1995 "deforest.m"
    {
#line 1995 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_20, &transform_hlds__deforest__Globals_21);
    }
#line 1996 "deforest.m"
    {
#line 1996 "deforest.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_21, (MR_Integer) 385, &transform_hlds__deforest__VarsOpt_22);
    }
#line 1997 "deforest.m"
    {
#line 1997 "deforest.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__ProcInfo0_23);
    }
#line 1998 "deforest.m"
    {
#line 1998 "deforest.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__VarSet0_24);
    }
#line 3409 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1999 "deforest.m"
    {
#line 1999 "deforest.m"
      mercury__varset__vars_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__VarSet0_24, &transform_hlds__deforest__Vars_25);
    }
#line 2000 "deforest.m"
    {
#line 2000 "deforest.m"
      mercury__list__length_2_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[1], transform_hlds__deforest__Vars_25, &transform_hlds__deforest__NumVars_26);
    }
#line 2001 "deforest.m"
    {
#line 2001 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_21, (MR_Integer) 72, &transform_hlds__deforest__DebugPD_27);
    }
#line 2005 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__CheckVars_12 == (MR_Integer) 0);
#line 2006 "deforest.m"
    if (!(transform_hlds__deforest__succeeded))
#line 2006 "deforest.m"
      {
#line 2007 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__VarsOpt_22 == (MR_Integer) -1);
#line 2006 "deforest.m"
        if (!(transform_hlds__deforest__succeeded))
#line 2010 "deforest.m"
          transform_hlds__deforest__succeeded = (transform_hlds__deforest__NumVars_26 < transform_hlds__deforest__VarsOpt_22);
#line 2006 "deforest.m"
      }
#line 2141 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 2013 "deforest.m"
      {
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__PredInfo0_29;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__CalledPredInfo_30;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__CalledProcInfo_31;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__TypeVarSet0_32;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__UnivQVars_33;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__VarTypes0_34;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__RttiVarMaps0_35;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__VarSet_36;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__VarTypes_37;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__TypeVarSet_38;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__RttiVarMaps_39;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__Goal1_40;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__PredInfo_41;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__CalledHasParallelConj_42;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo1_43;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo2_44;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo3_45;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__ProcInfo_46;
#line 2013 "deforest.m"
        MR_Integer transform_hlds__deforest__OriginalCost_47;
#line 2013 "deforest.m"
        MR_Integer transform_hlds__deforest__CostDelta0_48;
#line 2013 "deforest.m"
        MR_Integer transform_hlds__deforest__SizeDelta0_49;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__Changed0_50;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo1_52;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__NonLocals1_53;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__NonLocals_54;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__Goal2_55;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__ArgLives_57;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__LiveVars0_58;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__LiveVars1_59;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__LiveVars_60;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__Goal3_61;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__Errors_62;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__Optimized0_63;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__SimplifyTasks_66;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__Goal4_67;
#line 2013 "deforest.m"
        MR_Integer transform_hlds__deforest__CostDelta1_68;
#line 2013 "deforest.m"
        MR_Integer transform_hlds__deforest__CostDelta_69;
#line 2013 "deforest.m"
        MR_Integer transform_hlds__deforest__GoalSize_70;
#line 2013 "deforest.m"
        MR_Integer transform_hlds__deforest__SizeDelta_71;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_91_91;
#line 2013 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 2013 "deforest.m"
        MR_Integer transform_hlds__deforest__V_98_98;
#line 2048 "deforest.m"
        MR_Word transform_hlds__deforest__V_51_51;
#line 2088 "deforest.m"
        MR_Integer transform_hlds__deforest__Factor_72;

#line 2013 "deforest.m"
        {
#line 2013 "deforest.m"
          transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__PredInfo0_29);
        }
#line 2014 "deforest.m"
        {
#line 2014 "deforest.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__deforest__ModuleInfo_20, transform_hlds__deforest__PredId_13, transform_hlds__deforest__ProcId_14, &transform_hlds__deforest__CalledPredInfo_30, &transform_hlds__deforest__CalledProcInfo_31);
        }
#line 2016 "deforest.m"
        {
#line 2016 "deforest.m"
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__deforest__PredInfo0_29, &transform_hlds__deforest__TypeVarSet0_32);
        }
#line 2017 "deforest.m"
        {
#line 2017 "deforest.m"
          hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(transform_hlds__deforest__PredInfo0_29, &transform_hlds__deforest__UnivQVars_33);
        }
#line 2018 "deforest.m"
        {
#line 2018 "deforest.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__VarTypes0_34);
        }
#line 2019 "deforest.m"
        {
#line 2019 "deforest.m"
          hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__RttiVarMaps0_35);
        }
#line 2020 "deforest.m"
        {
#line 2020 "deforest.m"
          transform_hlds__inlining__do_inline_call_13_p_0(transform_hlds__deforest__UnivQVars_33, transform_hlds__deforest__Args_15, transform_hlds__deforest__CalledPredInfo_30, transform_hlds__deforest__CalledProcInfo_31, transform_hlds__deforest__VarSet0_24, &transform_hlds__deforest__VarSet_36, transform_hlds__deforest__VarTypes0_34, &transform_hlds__deforest__VarTypes_37, transform_hlds__deforest__TypeVarSet0_32, &transform_hlds__deforest__TypeVarSet_38, transform_hlds__deforest__RttiVarMaps0_35, &transform_hlds__deforest__RttiVarMaps_39, &transform_hlds__deforest__Goal1_40);
        }
#line 2023 "deforest.m"
        {
#line 2023 "deforest.m"
          hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__deforest__TypeVarSet_38, transform_hlds__deforest__PredInfo0_29, &transform_hlds__deforest__PredInfo_41);
        }
#line 2024 "deforest.m"
        {
#line 2024 "deforest.m"
          hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__deforest__CalledProcInfo_31, &transform_hlds__deforest__CalledHasParallelConj_42);
        }
#line 2026 "deforest.m"
        {
#line 2026 "deforest.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__deforest__VarSet_36, transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__ProcInfo1_43);
        }
#line 2027 "deforest.m"
        {
#line 2027 "deforest.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__deforest__VarTypes_37, transform_hlds__deforest__ProcInfo1_43, &transform_hlds__deforest__ProcInfo2_44);
        }
#line 2028 "deforest.m"
        {
#line 2028 "deforest.m"
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__deforest__RttiVarMaps_39, transform_hlds__deforest__ProcInfo2_44, &transform_hlds__deforest__ProcInfo3_45);
        }
#line 2033 "deforest.m"
#line 2033 "deforest.m"
        switch (transform_hlds__deforest__CalledHasParallelConj_42) {
#line 2033 "deforest.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2033 "deforest.m"
          case (MR_Integer) 1:
#line 2036 "deforest.m"
            transform_hlds__deforest__ProcInfo_46 = transform_hlds__deforest__ProcInfo3_45;
#line 2033 "deforest.m"
            break;
#line 2033 "deforest.m"
          case (MR_Integer) 0:
#line 2030 "deforest.m"
            {
#line 2031 "deforest.m"
              {
#line 2031 "deforest.m"
                hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, transform_hlds__deforest__ProcInfo3_45, &transform_hlds__deforest__ProcInfo_46);
              }
#line 2030 "deforest.m"
            }
#line 2033 "deforest.m"
            break;
#line 2033 "deforest.m"
        }
#line 2039 "deforest.m"
        {
#line 2039 "deforest.m"
          transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(transform_hlds__deforest__PredInfo_41, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84);
        }
#line 2040 "deforest.m"
        {
#line 2040 "deforest.m"
          transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__deforest__ProcInfo_46, transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85);
        }
#line 2042 "deforest.m"
        {
#line 2042 "deforest.m"
          transform_hlds__pd_cost__goal_cost_2_p_0(transform_hlds__deforest__Goal1_40, &transform_hlds__deforest__OriginalCost_47);
        }
#line 2043 "deforest.m"
        {
#line 2043 "deforest.m"
          transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__CostDelta0_48);
        }
#line 2044 "deforest.m"
        {
#line 2044 "deforest.m"
          transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__SizeDelta0_49);
        }
#line 2045 "deforest.m"
        {
#line 2045 "deforest.m"
          transform_hlds__pd_info__pd_info_get_changed_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__Changed0_50);
        }
#line 2048 "deforest.m"
        transform_hlds__deforest__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_40, (MR_Integer) 0)));
#line 2048 "deforest.m"
        transform_hlds__deforest__GoalInfo1_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_40, (MR_Integer) 1)));
#line 2049 "deforest.m"
        {
#line 2049 "deforest.m"
          transform_hlds__deforest__NonLocals1_53 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__GoalInfo1_52);
        }
#line 2050 "deforest.m"
        {
#line 2050 "deforest.m"
          parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__Args_15, &transform_hlds__deforest__NonLocals_54);
        }
#line 2051 "deforest.m"
        {
#line 2051 "deforest.m"
          transform_hlds__deforest__succeeded = parse_tree__set_of_var__equal_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__NonLocals1_53, transform_hlds__deforest__NonLocals_54);
        }
#line 2053 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2052 "deforest.m"
          {
#line 2052 "deforest.m"
            transform_hlds__deforest__Goal2_55 = transform_hlds__deforest__Goal1_40;
#line 2052 "deforest.m"
            transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
#line 2052 "deforest.m"
          }
#line 2053 "deforest.m"
        else
#line 2054 "deforest.m"
          {
#line 2054 "deforest.m"
            transform_hlds__pd_util__pd_requantify_goal_5_p_0(transform_hlds__deforest__NonLocals_54, transform_hlds__deforest__Goal1_40, &transform_hlds__deforest__Goal2_55, transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86);
          }
#line 2059 "deforest.m"
        {
#line 2059 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "Running unique modes\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 2061 "deforest.m"
        {
#line 2061 "deforest.m"
          hlds__hlds_pred__proc_info_arglives_3_p_0(transform_hlds__deforest__CalledProcInfo_31, transform_hlds__deforest__ModuleInfo_20, &transform_hlds__deforest__ArgLives_57);
        }
#line 2062 "deforest.m"
        {
#line 2062 "deforest.m"
          check_hlds__modecheck_util__get_live_vars_3_p_0(transform_hlds__deforest__Args_15, transform_hlds__deforest__ArgLives_57, &transform_hlds__deforest__LiveVars0_58);
        }
#line 2063 "deforest.m"
        {
#line 2063 "deforest.m"
          parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__LiveVars0_58, &transform_hlds__deforest__LiveVars1_59);
        }
#line 2064 "deforest.m"
        {
#line 2064 "deforest.m"
          parse_tree__set_of_var__intersect_3_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__NonLocals_54, transform_hlds__deforest__LiveVars1_59, &transform_hlds__deforest__LiveVars_60);
        }
#line 2065 "deforest.m"
        {
#line 2065 "deforest.m"
          transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0(transform_hlds__deforest__LiveVars_60, transform_hlds__deforest__Goal2_55, &transform_hlds__deforest__Goal3_61, &transform_hlds__deforest__Errors_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_91_91);
        }
#line 2071 "deforest.m"
        if ((transform_hlds__deforest__Errors_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2070 "deforest.m"
          transform_hlds__deforest__Optimized0_63 = (MR_Integer) 1;
#line 2071 "deforest.m"
        else
#line 2075 "deforest.m"
          transform_hlds__deforest__Optimized0_63 = (MR_Integer) 0;
#line 2079 "deforest.m"
        {
#line 2079 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "Running simplify\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 2081 "deforest.m"
        {
#line 2081 "deforest.m"
          check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, transform_hlds__deforest__Globals_21, &transform_hlds__deforest__SimplifyTasks_66);
        }
#line 2082 "deforest.m"
        {
#line 2082 "deforest.m"
          transform_hlds__pd_util__pd_simplify_goal_5_p_0(transform_hlds__deforest__SimplifyTasks_66, transform_hlds__deforest__Goal3_61, &transform_hlds__deforest__Goal4_67, transform_hlds__deforest__STATE_VARIABLE_PDInfo_91_91, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
        }
#line 2084 "deforest.m"
        {
#line 2084 "deforest.m"
          transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__CostDelta1_68);
        }
#line 2085 "deforest.m"
        transform_hlds__deforest__CostDelta_69 = (transform_hlds__deforest__CostDelta1_68 - transform_hlds__deforest__CostDelta0_48);
#line 2086 "deforest.m"
        {
#line 2086 "deforest.m"
          hlds__goal_util__goal_size_2_p_0(transform_hlds__deforest__Goal4_67, &transform_hlds__deforest__GoalSize_70);
        }
#line 2087 "deforest.m"
        {
#line 2087 "deforest.m"
          transform_hlds__deforest__V_98_98 = transform_hlds__pd_cost__cost_of_call_0_f_0();
        }
#line 2087 "deforest.m"
        transform_hlds__deforest__SizeDelta_71 = (transform_hlds__deforest__GoalSize_70 - transform_hlds__deforest__V_98_98);
#line 2088 "deforest.m"
        {
#line 2088 "deforest.m"
          libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_21, (MR_Integer) 384, &transform_hlds__deforest__Factor_72);
        }
#line 2090 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__Optimized0_63 == (MR_Integer) 1);
#line 2090 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2093 "deforest.m"
#line 2093 "deforest.m"
          switch (transform_hlds__deforest__CheckImprovement_11) {
#line 2093 "deforest.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 2093 "deforest.m"
            case (MR_Integer) 0:
#line 2092 "deforest.m"
              transform_hlds__deforest__succeeded = MR_TRUE;
#line 2093 "deforest.m"
              break;
#line 2093 "deforest.m"
            case (MR_Integer) 1:
#line 2098 "deforest.m"
              {
#line 2096 "deforest.m"
                {
#line 2096 "deforest.m"
                  transform_hlds__deforest__succeeded = transform_hlds__deforest__is_simple_goal_1_p_0(transform_hlds__deforest__Goal3_61);
                }
#line 2098 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 2097 "deforest.m"
                  transform_hlds__deforest__succeeded = MR_TRUE;
#line 2098 "deforest.m"
                else
#line 2099 "deforest.m"
                  {
#line 2099 "deforest.m"
                    transform_hlds__deforest__succeeded = transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(transform_hlds__deforest__GoalSize_70, transform_hlds__deforest__OriginalCost_47, transform_hlds__deforest__CostDelta_69);
                  }
#line 2098 "deforest.m"
              }
#line 2093 "deforest.m"
              break;
#line 2093 "deforest.m"
          }
#line 2126 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2104 "deforest.m"
          {
#line 2104 "deforest.m"
            MR_Word transform_hlds__deforest__GoalInfo0_74;
#line 2104 "deforest.m"
            MR_Word transform_hlds__deforest__Det0_75;
#line 2104 "deforest.m"
            MR_Word transform_hlds__deforest__GoalInfo_77;
#line 2104 "deforest.m"
            MR_Word transform_hlds__deforest__Det_78;
#line 2104 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_108_108;
#line 2104 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110;
#line 2105 "deforest.m"
            MR_Word transform_hlds__deforest__V_102_102;
#line 2105 "deforest.m"
            MR_Word transform_hlds__deforest__V_104_104;
#line 2105 "deforest.m"
            MR_Word transform_hlds__deforest__V_105_105;
#line 2105 "deforest.m"
            MR_Word transform_hlds__deforest__V_106_106;
#line 2111 "deforest.m"
            MR_Word transform_hlds__deforest__V_73_73;
#line 2113 "deforest.m"
            MR_Word transform_hlds__deforest__V_76_76;

#line 2104 "deforest.m"
            *transform_hlds__deforest__Goal_17 = transform_hlds__deforest__Goal4_67;
#line 2107 "deforest.m"
            {
#line 2107 "deforest.m"
              transform_hlds__deforest__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2107 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_104_104, 0) = ((MR_Box) (transform_hlds__deforest__CostDelta_69));
#line 2107 "deforest.m"
            }
#line 2107 "deforest.m"
            {
#line 2107 "deforest.m"
              transform_hlds__deforest__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2107 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_106_106, 0) = ((MR_Box) (transform_hlds__deforest__SizeDelta_71));
#line 2107 "deforest.m"
            }
#line 2107 "deforest.m"
            {
#line 2107 "deforest.m"
              transform_hlds__deforest__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2107 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_105_105, 0) = ((MR_Box) (transform_hlds__deforest__V_106_106));
#line 2107 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2107 "deforest.m"
            }
#line 2107 "deforest.m"
            {
#line 2107 "deforest.m"
              transform_hlds__deforest__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2107 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_102_102, 0) = ((MR_Box) (transform_hlds__deforest__V_104_104));
#line 2107 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_102_102, 1) = ((MR_Box) (transform_hlds__deforest__V_105_105));
#line 2107 "deforest.m"
            }
#line 2106 "deforest.m"
            {
#line 2106 "deforest.m"
              transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "inlined: cost(%i) size(%i)\n", transform_hlds__deforest__V_102_102);
            }
#line 2109 "deforest.m"
            {
#line 2109 "deforest.m"
              transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(transform_hlds__deforest__SizeDelta_71, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_108_108);
            }
#line 2110 "deforest.m"
            {
#line 2110 "deforest.m"
              transform_hlds__pd_info__pd_info_set_changed_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_108_108, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110);
            }
#line 2111 "deforest.m"
            transform_hlds__deforest__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_16, (MR_Integer) 0)));
#line 2111 "deforest.m"
            transform_hlds__deforest__GoalInfo0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_16, (MR_Integer) 1)));
#line 2112 "deforest.m"
            {
#line 2112 "deforest.m"
              transform_hlds__deforest__Det0_75 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__deforest__GoalInfo0_74);
            }
#line 2113 "deforest.m"
            transform_hlds__deforest__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__deforest__Goal_17, (MR_Integer) 0)));
#line 2113 "deforest.m"
            transform_hlds__deforest__GoalInfo_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__deforest__Goal_17, (MR_Integer) 1)));
#line 2114 "deforest.m"
            {
#line 2114 "deforest.m"
              transform_hlds__deforest__Det_78 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__deforest__GoalInfo_77);
            }
#line 2119 "deforest.m"
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__Det_78 == transform_hlds__deforest__Det0_75);
#line 2121 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 2121 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_80 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110;
#line 2121 "deforest.m"
            else
#line 2122 "deforest.m"
              {
#line 2122 "deforest.m"
                {
#line 2122 "deforest.m"
                  transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110, transform_hlds__deforest__STATE_VARIABLE_PDInfo_80);
                }
#line 2122 "deforest.m"
              }
#line 2125 "deforest.m"
            *transform_hlds__deforest__Optimized_18 = (MR_Integer) 1;
#line 2104 "deforest.m"
          }
#line 2126 "deforest.m"
        else
#line 2132 "deforest.m"
          {
#line 2132 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123;
#line 2132 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124;
#line 2132 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125;
#line 2132 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126;
#line 2127 "deforest.m"
            MR_Word transform_hlds__deforest__V_115_115;
#line 2127 "deforest.m"
            MR_Word transform_hlds__deforest__V_119_119;
#line 2127 "deforest.m"
            MR_Word transform_hlds__deforest__V_120_120;
#line 2127 "deforest.m"
            MR_Word transform_hlds__deforest__V_121_121;

#line 2131 "deforest.m"
            {
#line 2131 "deforest.m"
              transform_hlds__deforest__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2131 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_119_119, 0) = ((MR_Box) (transform_hlds__deforest__CostDelta_69));
#line 2131 "deforest.m"
            }
#line 2131 "deforest.m"
            {
#line 2131 "deforest.m"
              transform_hlds__deforest__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2131 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_121_121, 0) = ((MR_Box) (transform_hlds__deforest__SizeDelta_71));
#line 2131 "deforest.m"
            }
#line 2131 "deforest.m"
            {
#line 2131 "deforest.m"
              transform_hlds__deforest__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2131 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_120_120, 0) = ((MR_Box) (transform_hlds__deforest__V_121_121));
#line 2131 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2131 "deforest.m"
            }
#line 2131 "deforest.m"
            {
#line 2131 "deforest.m"
              transform_hlds__deforest__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2131 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_115_115, 0) = ((MR_Box) (transform_hlds__deforest__V_119_119));
#line 2131 "deforest.m"
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_115_115, 1) = ((MR_Box) (transform_hlds__deforest__V_120_120));
#line 2131 "deforest.m"
            }
#line 2128 "deforest.m"
            {
#line 2128 "deforest.m"
              transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "not enough improvement - not inlining: cost(%i) size(%i)\n", transform_hlds__deforest__V_115_115);
            }
#line 2133 "deforest.m"
            {
#line 2133 "deforest.m"
              transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(transform_hlds__deforest__PredInfo0_29, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123);
            }
#line 2134 "deforest.m"
            {
#line 2134 "deforest.m"
              transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__deforest__ProcInfo0_23, transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124);
            }
#line 2135 "deforest.m"
            {
#line 2135 "deforest.m"
              transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(transform_hlds__deforest__SizeDelta0_49, transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125);
            }
#line 2136 "deforest.m"
            {
#line 2136 "deforest.m"
              transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(transform_hlds__deforest__CostDelta0_48, transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126);
            }
#line 2137 "deforest.m"
            {
#line 2137 "deforest.m"
              transform_hlds__pd_info__pd_info_set_changed_3_p_0(transform_hlds__deforest__Changed0_50, transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126, transform_hlds__deforest__STATE_VARIABLE_PDInfo_80);
            }
#line 2138 "deforest.m"
            *transform_hlds__deforest__Goal_17 = transform_hlds__deforest__Goal0_16;
#line 2139 "deforest.m"
            *transform_hlds__deforest__Optimized_18 = (MR_Integer) 0;
#line 2132 "deforest.m"
          }
#line 2013 "deforest.m"
      }
#line 2141 "deforest.m"
    else
#line 2145 "deforest.m"
      {
#line 2143 "deforest.m"
        {
#line 2143 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "too many variables - not inlining\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 2146 "deforest.m"
        *transform_hlds__deforest__Goal_17 = transform_hlds__deforest__Goal0_16;
#line 2147 "deforest.m"
        *transform_hlds__deforest__Optimized_18 = (MR_Integer) 0;
#line 2145 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_80 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79;
#line 2145 "deforest.m"
      }
#line 1993 "deforest.m"
  }
#line 1988 "deforest.m"
}

#line 1922 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_1(
#line 1922 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1922 "deforest.m"
{
#line 1922 "deforest.m"
  {
#line 1922 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1922 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0, 1);
#line 1922 "deforest.m"
  }
#line 1922 "deforest.m"
}

#line 1924 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_3(
#line 1924 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1924 "deforest.m"
{
#line 1924 "deforest.m"
  {
#line 1924 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1924 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_36 = ((MR_Integer) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_36);
#line 1924 "deforest.m"
    {
#line 1924 "deforest.m"
      transform_hlds__deforest__deforest_call_9_p_0_2(transform_hlds__deforest__env_ptr);
    }
#line 1924 "deforest.m"
  }
#line 1924 "deforest.m"
}

#line 1922 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_2(
#line 1922 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1922 "deforest.m"
{
#line 1922 "deforest.m"
  {
#line 1922 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1922 "deforest.m"
    {
#line 1925 "deforest.m"
      MR_Box transform_hlds__deforest__conv2_Arg_37;
#line 1927 "deforest.m"
      MR_Word transform_hlds__deforest__V_39_39;
#line 1940 "deforest.m"
      MR_Word transform_hlds__deforest__V_41_41;

#line 1925 "deforest.m"
      {
#line 1925 "deforest.m"
        mercury__list__det_index1_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_86_86, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_36, &transform_hlds__deforest__conv2_Arg_37);
      }
#line 1925 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_37 = ((MR_Word) transform_hlds__deforest__conv2_Arg_37);
#line 1926 "deforest.m"
      {
#line 1926 "deforest.m"
        hlds__instmap__instmap_lookup_var_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_37, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_38);
      }
#line 1927 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1927 "deforest.m"
      {
#line 1927 "deforest.m"
        MR_Word base;
#line 1927 "deforest.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1927 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_54_54 = base;
#line 1927 "deforest.m"
        MR_hl_field(MR_mktag(1), base, 0) = NULL;
#line 1927 "deforest.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_55_55));
#line 1927 "deforest.m"
      }
#line 1927 "deforest.m"
      {
#line 1927 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_38, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_90_90);
      }
#line 1922 "deforest.m"
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1922 "deforest.m"
        {
#line 4148 "transform_hlds.deforest.c"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_91_91 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 1927 "deforest.m"
          {
#line 1927 "deforest.m"
            (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__deforest____Unify____list__list_1_1((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_91_91, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_54_54, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__V_90_90);
          }
#line 1922 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1922 "deforest.m"
            {
#line 1935 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__InlinePromisedPure_40 = (MR_Integer) 0;
#line 1936 "deforest.m"
              {
#line 1936 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__inlining__can_inline_proc_6_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__InlinePromisedPure_40, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CallerMarkers_30);
              }
#line 1922 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1922 "deforest.m"
                {
#line 1940 "deforest.m"
                  {
#line 1940 "deforest.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, &transform_hlds__deforest__V_41_41, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_42);
                  }
#line 1942 "deforest.m"
                  {
#line 1942 "deforest.m"
                    hlds__hlds_pred__proc_info_get_goal_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_42, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_43);
                  }
#line 1943 "deforest.m"
                  {
#line 1943 "deforest.m"
                    hlds__goal_util__goal_size_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_43, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_44);
                  }
#line 1944 "deforest.m"
                  (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29 == (MR_Integer) -1);
#line 1945 "deforest.m"
                  if (!((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded))
#line 1945 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_44 < (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29);
#line 1945 "deforest.m"
                  if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1945 "deforest.m"
                    {
#line 1945 "deforest.m"
                      transform_hlds__deforest__deforest_call_9_p_0_1(transform_hlds__deforest__env_ptr);
                    }
#line 1922 "deforest.m"
                }
#line 1922 "deforest.m"
            }
#line 1922 "deforest.m"
        }
#line 1922 "deforest.m"
    }
#line 1922 "deforest.m"
  }
#line 1922 "deforest.m"
}

#line 1922 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_4(
#line 1922 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 1922 "deforest.m"
{
#line 1922 "deforest.m"
  {
#line 1922 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 1922 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0) == 0)
#line 1922 "deforest.m"
      {
#line 1922 "deforest.m"
        {
#line 1922 "deforest.m"
          MR_Word transform_hlds__deforest__TypeCtorInfo_89_89;
#line 1922 "deforest.m"
          MR_Word transform_hlds__deforest__ProcArgInfo_32;
#line 1922 "deforest.m"
          MR_Word transform_hlds__deforest__LeftArgs_34;
#line 1922 "deforest.m"
          MR_Word transform_hlds__deforest__V_53_53;
#line 1922 "deforest.m"
          MR_Box transform_hlds__deforest__conv0_ProcArgInfo_32;
#line 1923 "deforest.m"
          MR_Word transform_hlds__deforest__V_33_33;
#line 1923 "deforest.m"
          MR_Word transform_hlds__deforest__V_35_35;

#line 1922 "deforest.m"
          {
#line 1922 "deforest.m"
            transform_hlds__deforest__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1922 "deforest.m"
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_53_53, 0) = ((MR_Box) ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10));
#line 1922 "deforest.m"
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_53_53, 1) = ((MR_Box) ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11));
#line 1922 "deforest.m"
          }
#line 1922 "deforest.m"
          {
#line 1922 "deforest.m"
            (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[0], (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18, ((MR_Box) (transform_hlds__deforest__V_53_53)), &transform_hlds__deforest__conv0_ProcArgInfo_32);
          }
#line 1922 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1922 "deforest.m"
            {
#line 1922 "deforest.m"
              transform_hlds__deforest__ProcArgInfo_32 = ((MR_Word) transform_hlds__deforest__conv0_ProcArgInfo_32);
#line 1922 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_TRUE;
#line 1922 "deforest.m"
            }
#line 1922 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1922 "deforest.m"
            {
#line 1923 "deforest.m"
              transform_hlds__deforest__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__ProcArgInfo_32, (MR_Integer) 0)));
#line 1923 "deforest.m"
              transform_hlds__deforest__LeftArgs_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__ProcArgInfo_32, (MR_Integer) 1)));
#line 1923 "deforest.m"
              transform_hlds__deforest__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__ProcArgInfo_32, (MR_Integer) 2)));
#line 4279 "transform_hlds.deforest.c"
              transform_hlds__deforest__TypeCtorInfo_89_89 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1924 "deforest.m"
              {
#line 1924 "deforest.m"
                mercury__set__member_2_p_1(transform_hlds__deforest__TypeCtorInfo_89_89, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_36, transform_hlds__deforest__LeftArgs_34, transform_hlds__deforest__deforest_call_9_p_0_3, transform_hlds__deforest__env_ptr);
              }
#line 1922 "deforest.m"
            }
#line 1922 "deforest.m"
        }
#line 1922 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_FALSE;
#line 1922 "deforest.m"
      }
#line 1922 "deforest.m"
    else
#line 1922 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_TRUE;
#line 1922 "deforest.m"
  }
#line 1922 "deforest.m"
}

#line 1898 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0(
#line 1898 "deforest.m"
  MR_Word transform_hlds__deforest__PredId_10,
#line 1898 "deforest.m"
  MR_Integer transform_hlds__deforest__ProcId_11,
#line 1898 "deforest.m"
  MR_Word transform_hlds__deforest__Args_12,
#line 1898 "deforest.m"
  MR_Word transform_hlds__deforest__SymName_13,
#line 1898 "deforest.m"
  MR_Word transform_hlds__deforest__BuiltinState_14,
#line 1898 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_15,
#line 1898 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_16,
#line 1898 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49,
#line 1898 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_50)
#line 1898 "deforest.m"
{
#line 1898 "deforest.m"
  {
#line 1898 "deforest.m"
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s transform_hlds__deforest__env;

#line 1898 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10 = transform_hlds__deforest__PredId_10;
#line 1898 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11 = transform_hlds__deforest__ProcId_11;
#line 1898 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12 = transform_hlds__deforest__Args_12;
#line 1898 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14 = transform_hlds__deforest__BuiltinState_14;
#line 1903 "deforest.m"
    {
#line 1903 "deforest.m"
      MR_String transform_hlds__deforest__Name_21;
#line 1903 "deforest.m"
      MR_Integer transform_hlds__deforest__Arity_22;
#line 1903 "deforest.m"
      MR_Word transform_hlds__deforest__GoalInfo0_24;
#line 1903 "deforest.m"
      MR_Word transform_hlds__deforest__Context_25;
#line 1903 "deforest.m"
      MR_Word transform_hlds__deforest__LocalTermInfo0_26;
#line 1903 "deforest.m"
      MR_Word transform_hlds__deforest__PredInfo_27;
#line 1903 "deforest.m"
      MR_Word transform_hlds__deforest__Globals_28;
#line 1903 "deforest.m"
      MR_Word transform_hlds__deforest__DebugPD_31;
#line 1909 "deforest.m"
      MR_Word transform_hlds__deforest__GoalExpr0_23;

#line 1904 "deforest.m"
      {
#line 1904 "deforest.m"
        transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18);
      }
#line 1905 "deforest.m"
      {
#line 1905 "deforest.m"
        transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19);
      }
#line 1906 "deforest.m"
      {
#line 1906 "deforest.m"
        transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20);
      }
#line 1907 "deforest.m"
      {
#line 1907 "deforest.m"
        transform_hlds__deforest__Name_21 = mdbcomp__sym_name__unqualify_name_1_f_0(transform_hlds__deforest__SymName_13);
      }
#line 4380 "transform_hlds.deforest.c"
      (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_86_86 = (MR_Word) &transform_hlds__deforest_scalar_common_1[1];
#line 1908 "deforest.m"
      {
#line 1908 "deforest.m"
        mercury__list__length_2_p_0((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_86_86, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, &transform_hlds__deforest__Arity_22);
      }
#line 1909 "deforest.m"
      transform_hlds__deforest__GoalExpr0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_15, (MR_Integer) 0)));
#line 1909 "deforest.m"
      transform_hlds__deforest__GoalInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_15, (MR_Integer) 1)));
#line 1910 "deforest.m"
      {
#line 1910 "deforest.m"
        transform_hlds__deforest__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__deforest__GoalInfo0_24);
      }
#line 1912 "deforest.m"
      {
#line 1912 "deforest.m"
        transform_hlds__pd_info__pd_info_get_local_term_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &transform_hlds__deforest__LocalTermInfo0_26);
      }
#line 1914 "deforest.m"
      {
#line 1914 "deforest.m"
        transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &transform_hlds__deforest__PredInfo_27);
      }
#line 1915 "deforest.m"
      {
#line 1915 "deforest.m"
        hlds__hlds_module__module_info_get_globals_2_p_0((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, &transform_hlds__deforest__Globals_28);
      }
#line 1916 "deforest.m"
      {
#line 1916 "deforest.m"
        libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_28, (MR_Integer) 386, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29);
      }
#line 1918 "deforest.m"
      {
#line 1918 "deforest.m"
        hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__deforest__PredInfo_27, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__CallerMarkers_30);
      }
#line 1919 "deforest.m"
      {
#line 1919 "deforest.m"
        libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_28, (MR_Integer) 72, &transform_hlds__deforest__DebugPD_31);
      }
#line 1922 "deforest.m"
      {
#line 1922 "deforest.m"
        transform_hlds__deforest__deforest_call_9_p_0_4(&transform_hlds__deforest__env);
      }
#line 1979 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1952 "deforest.m"
        {
#line 1948 "deforest.m"
          MR_Word transform_hlds__deforest__V_58_58;
#line 1948 "deforest.m"
          MR_Word transform_hlds__deforest__V_60_60;
#line 1948 "deforest.m"
          MR_Word transform_hlds__deforest__V_61_61;
#line 1948 "deforest.m"
          MR_Word transform_hlds__deforest__V_62_62;
#line 1972 "deforest.m"
          MR_Word transform_hlds__deforest__LocalTermInfo_46;

#line 1951 "deforest.m"
          {
#line 1951 "deforest.m"
            transform_hlds__deforest__V_60_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1951 "deforest.m"
            MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_60_60, 0) = ((MR_Box) (transform_hlds__deforest__Name_21));
#line 1951 "deforest.m"
          }
#line 1951 "deforest.m"
          {
#line 1951 "deforest.m"
            transform_hlds__deforest__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1951 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_62_62, 0) = ((MR_Box) (transform_hlds__deforest__Arity_22));
#line 1951 "deforest.m"
          }
#line 1951 "deforest.m"
          {
#line 1951 "deforest.m"
            transform_hlds__deforest__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1951 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_61_61, 0) = ((MR_Box) (transform_hlds__deforest__V_62_62));
#line 1951 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1951 "deforest.m"
          }
#line 1951 "deforest.m"
          {
#line 1951 "deforest.m"
            transform_hlds__deforest__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1951 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_58_58, 0) = ((MR_Box) (transform_hlds__deforest__V_60_60));
#line 1951 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_58_58, 1) = ((MR_Box) (transform_hlds__deforest__V_61_61));
#line 1951 "deforest.m"
          }
#line 1949 "deforest.m"
          {
#line 1949 "deforest.m"
            transform_hlds__pd_debug__pd_debug_message_context_6_p_0(transform_hlds__deforest__DebugPD_31, transform_hlds__deforest__Context_25, (MR_String) "Found extra information for call to %s/%i\n", transform_hlds__deforest__V_58_58);
          }
#line 1954 "deforest.m"
          {
#line 1954 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__pd_term__local_check_5_p_0((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, transform_hlds__deforest__Goal0_15, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20, transform_hlds__deforest__LocalTermInfo0_26, &transform_hlds__deforest__LocalTermInfo_46);
          }
#line 1972 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
#line 1960 "deforest.m"
            {
#line 1960 "deforest.m"
              MR_Word transform_hlds__deforest__Goal1_47;
#line 1960 "deforest.m"
              MR_Word transform_hlds__deforest__Optimized_48;
#line 1960 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68;
#line 1960 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71;
#line 1960 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_72_72;

#line 1958 "deforest.m"
              {
#line 1958 "deforest.m"
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_31, (MR_String) "Local termination check succeeded\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 1961 "deforest.m"
              {
#line 1961 "deforest.m"
                transform_hlds__pd_info__pd_info_set_local_term_info_3_p_0(transform_hlds__deforest__LocalTermInfo_46, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68);
              }
#line 1962 "deforest.m"
              {
#line 1962 "deforest.m"
                transform_hlds__deforest__unfold_call_10_p_0((MR_Integer) 1, (MR_Integer) 1, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, transform_hlds__deforest__Goal0_15, &transform_hlds__deforest__Goal1_47, &transform_hlds__deforest__Optimized_48, transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71);
              }
#line 1967 "deforest.m"
#line 1967 "deforest.m"
              switch (transform_hlds__deforest__Optimized_48) {
#line 1967 "deforest.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1967 "deforest.m"
                case (MR_Integer) 0:
#line 1968 "deforest.m"
                  {
#line 1969 "deforest.m"
                    *transform_hlds__deforest__Goal_16 = transform_hlds__deforest__Goal1_47;
#line 1968 "deforest.m"
                    transform_hlds__deforest__STATE_VARIABLE_PDInfo_72_72 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71;
#line 1968 "deforest.m"
                  }
#line 1967 "deforest.m"
                  break;
#line 1967 "deforest.m"
                case (MR_Integer) 1:
#line 1966 "deforest.m"
                  {
#line 1966 "deforest.m"
                    transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Goal1_47, transform_hlds__deforest__Goal_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_71_71, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_72_72);
                  }
#line 1967 "deforest.m"
                  break;
#line 1967 "deforest.m"
              }
#line 1971 "deforest.m"
              {
#line 1971 "deforest.m"
                transform_hlds__pd_info__pd_info_set_local_term_info_3_p_0(transform_hlds__deforest__LocalTermInfo0_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_72_72, transform_hlds__deforest__STATE_VARIABLE_PDInfo_50);
              }
#line 1960 "deforest.m"
            }
#line 1972 "deforest.m"
          else
#line 1976 "deforest.m"
            {
#line 1974 "deforest.m"
              {
#line 1974 "deforest.m"
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_31, (MR_String) "Local termination check failed\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 1977 "deforest.m"
              *transform_hlds__deforest__Goal_16 = transform_hlds__deforest__Goal0_15;
#line 1976 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_50 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49;
#line 1976 "deforest.m"
            }
#line 1952 "deforest.m"
        }
#line 1979 "deforest.m"
      else
#line 1984 "deforest.m"
        {
#line 1980 "deforest.m"
          MR_Word transform_hlds__deforest__V_80_80;
#line 1980 "deforest.m"
          MR_Word transform_hlds__deforest__V_82_82;
#line 1980 "deforest.m"
          MR_Word transform_hlds__deforest__V_83_83;
#line 1980 "deforest.m"
          MR_Word transform_hlds__deforest__V_84_84;

#line 1983 "deforest.m"
          {
#line 1983 "deforest.m"
            transform_hlds__deforest__V_82_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "deforest.m"
            MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_82_82, 0) = ((MR_Box) (transform_hlds__deforest__Name_21));
#line 1983 "deforest.m"
          }
#line 1983 "deforest.m"
          {
#line 1983 "deforest.m"
            transform_hlds__deforest__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_84_84, 0) = ((MR_Box) (transform_hlds__deforest__Arity_22));
#line 1983 "deforest.m"
          }
#line 1983 "deforest.m"
          {
#line 1983 "deforest.m"
            transform_hlds__deforest__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_83_83, 0) = ((MR_Box) (transform_hlds__deforest__V_84_84));
#line 1983 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1983 "deforest.m"
          }
#line 1983 "deforest.m"
          {
#line 1983 "deforest.m"
            transform_hlds__deforest__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_80_80, 0) = ((MR_Box) (transform_hlds__deforest__V_82_82));
#line 1983 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_80_80, 1) = ((MR_Box) (transform_hlds__deforest__V_83_83));
#line 1983 "deforest.m"
          }
#line 1981 "deforest.m"
          {
#line 1981 "deforest.m"
            transform_hlds__pd_debug__pd_debug_message_context_6_p_0(transform_hlds__deforest__DebugPD_31, transform_hlds__deforest__Context_25, (MR_String) "No extra information for call to %s/%i\n", transform_hlds__deforest__V_80_80);
          }
#line 1985 "deforest.m"
          *transform_hlds__deforest__Goal_16 = transform_hlds__deforest__Goal0_15;
#line 1984 "deforest.m"
          *transform_hlds__deforest__STATE_VARIABLE_PDInfo_50 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_49;
#line 1984 "deforest.m"
        }
#line 1903 "deforest.m"
    }
#line 1898 "deforest.m"
  }
#line 1898 "deforest.m"
}

#line 1876 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0_1(
#line 1876 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 1876 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1876 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1876 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 1876 "deforest.m"
{
#line 1876 "deforest.m"
  {
#line 1876 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 1876 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_HeadVar__3_3;

#line 1876 "deforest.m"
    {
#line 1876 "deforest.m"
      transform_hlds__pd_info__pd_info_update_goal_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_HeadVar__3_3);
    }
#line 1876 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__3_3));
#line 1876 "deforest.m"
  }
#line 1876 "deforest.m"
}

#line 1867 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0(
#line 1867 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_10,
#line 1867 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_11,
#line 1867 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend0_12,
#line 1867 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals0_13,
#line 1867 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrBranch_14,
#line 1867 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_15,
#line 1867 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_16,
#line 1867 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30,
#line 1867 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_31)
#line 1867 "deforest.m"
{
#line 1872 "deforest.m"
  {
#line 1872 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1872 "deforest.m"
    MR_Word transform_hlds__deforest__GoalToAppend_19;
#line 1872 "deforest.m"
    MR_Word transform_hlds__deforest__GoalList0_20;
#line 1872 "deforest.m"
    MR_Word transform_hlds__deforest__GoalListToAppend_21;
#line 1872 "deforest.m"
    MR_Word transform_hlds__deforest__Goals_22;
#line 1872 "deforest.m"
    MR_Word transform_hlds__deforest__SubNonLocals_23;
#line 1872 "deforest.m"
    MR_Word transform_hlds__deforest__NonLocals_24;
#line 1872 "deforest.m"
    MR_Word transform_hlds__deforest__Delta0_25;
#line 1872 "deforest.m"
    MR_Word transform_hlds__deforest__Delta_26;
#line 1872 "deforest.m"
    MR_Word transform_hlds__deforest__Detism_27;
#line 1872 "deforest.m"
    MR_Word transform_hlds__deforest__Purity_28;
#line 1872 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_29;
#line 1872 "deforest.m"
    MR_Word transform_hlds__deforest__V_37_37;
#line 1872 "deforest.m"
    MR_Word transform_hlds__deforest__V_38_38;
#line 1872 "deforest.m"
    MR_Word transform_hlds__deforest__V_39_39;
#line 1872 "deforest.m"
    MR_Word transform_hlds__deforest__V_41_41;

#line 1873 "deforest.m"
    {
#line 1873 "deforest.m"
      transform_hlds__deforest__succeeded = mercury__set__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__deforest__CurrBranch_14)), transform_hlds__deforest__Branches_15);
    }
#line 1879 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 1875 "deforest.m"
      {
#line 1875 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_18;
#line 1875 "deforest.m"
        MR_Word transform_hlds__deforest__V_33_33;
#line 1875 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;
#line 1875 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_35_35;
#line 1875 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr0_56;
#line 1875 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo0_57;
#line 1875 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr_58;
#line 1875 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo_59;
#line 1876 "deforest.m"
        MR_Box transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_34_34;

#line 1875 "deforest.m"
        {
#line 1875 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30, &transform_hlds__deforest__InstMap0_18);
        }
#line 1876 "deforest.m"
        {
#line 1876 "deforest.m"
          transform_hlds__deforest__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1876 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_33_33, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_10));
#line 1876 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_33_33, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_11));
#line 1876 "deforest.m"
        }
#line 1876 "deforest.m"
        {
#line 1876 "deforest.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0, (MR_Word) &transform_hlds__deforest_scalar_common_2[12], transform_hlds__deforest__V_33_33, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30)), &transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_34_34);
        }
#line 1876 "deforest.m"
        transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34 = ((MR_Word) transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_34_34);
#line 281 "deforest.m"
        transform_hlds__deforest__GoalExpr0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend0_12, (MR_Integer) 0)));
#line 281 "deforest.m"
        transform_hlds__deforest__GoalInfo0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend0_12, (MR_Integer) 1)));
#line 282 "deforest.m"
        {
#line 282 "deforest.m"
          transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_56, &transform_hlds__deforest__GoalExpr_58, transform_hlds__deforest__GoalInfo0_57, &transform_hlds__deforest__GoalInfo_59, transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_35_35);
        }
#line 283 "deforest.m"
        {
#line 283 "deforest.m"
          transform_hlds__deforest__GoalToAppend_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend_19, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_58));
#line 283 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend_19, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_59));
#line 283 "deforest.m"
        }
#line 1878 "deforest.m"
        {
#line 1878 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_18, transform_hlds__deforest__STATE_VARIABLE_PDInfo_35_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_31);
        }
#line 1875 "deforest.m"
      }
#line 1879 "deforest.m"
    else
#line 1880 "deforest.m"
      {
#line 1880 "deforest.m"
        transform_hlds__deforest__GoalToAppend_19 = transform_hlds__deforest__GoalToAppend0_12;
#line 1880 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_31 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30;
#line 1880 "deforest.m"
      }
#line 1882 "deforest.m"
    {
#line 1882 "deforest.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__deforest__Goal0_10, &transform_hlds__deforest__GoalList0_20);
    }
#line 1883 "deforest.m"
    {
#line 1883 "deforest.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__deforest__GoalToAppend_19, &transform_hlds__deforest__GoalListToAppend_21);
    }
#line 1884 "deforest.m"
    {
#line 1884 "deforest.m"
      transform_hlds__deforest__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1884 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_39_39, 0) = ((MR_Box) (transform_hlds__deforest__GoalListToAppend_21));
#line 1884 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1884 "deforest.m"
    }
#line 1884 "deforest.m"
    {
#line 1884 "deforest.m"
      transform_hlds__deforest__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1884 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_38_38, 0) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_11));
#line 1884 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_38_38, 1) = ((MR_Box) (transform_hlds__deforest__V_39_39));
#line 1884 "deforest.m"
    }
#line 1884 "deforest.m"
    {
#line 1884 "deforest.m"
      transform_hlds__deforest__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1884 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_37_37, 0) = ((MR_Box) (transform_hlds__deforest__GoalList0_20));
#line 1884 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_37_37, 1) = ((MR_Box) (transform_hlds__deforest__V_38_38));
#line 1884 "deforest.m"
    }
#line 1884 "deforest.m"
    {
#line 1884 "deforest.m"
      mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__V_37_37, &transform_hlds__deforest__Goals_22);
    }
#line 1886 "deforest.m"
    {
#line 1886 "deforest.m"
      hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__SubNonLocals_23);
    }
#line 1887 "deforest.m"
    {
#line 1887 "deforest.m"
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__NonLocals0_13, transform_hlds__deforest__SubNonLocals_23, &transform_hlds__deforest__NonLocals_24);
    }
#line 1888 "deforest.m"
    {
#line 1888 "deforest.m"
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__Delta0_25);
    }
#line 1889 "deforest.m"
    {
#line 1889 "deforest.m"
      hlds__instmap__instmap_delta_restrict_3_p_0(transform_hlds__deforest__NonLocals_24, transform_hlds__deforest__Delta0_25, &transform_hlds__deforest__Delta_26);
    }
#line 1890 "deforest.m"
    {
#line 1890 "deforest.m"
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__Detism_27);
    }
#line 1891 "deforest.m"
    {
#line 1891 "deforest.m"
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__Purity_28);
    }
#line 1892 "deforest.m"
    {
#line 1892 "deforest.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__deforest__NonLocals_24, transform_hlds__deforest__Delta_26, transform_hlds__deforest__Detism_27, transform_hlds__deforest__Purity_28, &transform_hlds__deforest__GoalInfo_29);
    }
#line 1893 "deforest.m"
    {
#line 1893 "deforest.m"
      transform_hlds__deforest__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1893 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1893 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_41_41, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1893 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_41_41, 2) = ((MR_Box) (transform_hlds__deforest__Goals_22));
#line 1893 "deforest.m"
    }
#line 1893 "deforest.m"
    {
#line 1893 "deforest.m"
      MR_Word base;
#line 1893 "deforest.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1893 "deforest.m"
      *transform_hlds__deforest__Goal_16 = base;
#line 1893 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__V_41_41));
#line 1893 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_29));
#line 1893 "deforest.m"
    }
#line 1872 "deforest.m"
  }
#line 1867 "deforest.m"
}

#line 1849 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_to_cases_10_p_0(
#line 1849 "deforest.m"
  MR_Word transform_hlds__deforest__Var_1,
#line 1849 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_2,
#line 1849 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend_3,
#line 1849 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_4,
#line 1849 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrCase_5,
#line 1849 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_6,
#line 1849 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__7_7,
#line 1849 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__8_8,
#line 1849 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9,
#line 1849 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_10)
#line 1849 "deforest.m"
{
#line 1853 "deforest.m"
  {
#line 1853 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 1853 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1853 "deforest.m"
      {
#line 1853 "deforest.m"
        *transform_hlds__deforest__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1853 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_10 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9;
#line 1853 "deforest.m"
      }
#line 1853 "deforest.m"
    else
#line 1855 "deforest.m"
      {
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__Case0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__7_7, (MR_Integer) 0)));
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__7_7, (MR_Integer) 1)));
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__Case_28;
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__Cases_29;
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_26, (MR_Integer) 0)));
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_26, (MR_Integer) 1)));
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_26, (MR_Integer) 2)));
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_34;
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_35;
#line 1855 "deforest.m"
        MR_Integer transform_hlds__deforest__NextCase_36;
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_39_39;
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40;
#line 1855 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_42_42;

#line 1857 "deforest.m"
        {
#line 1857 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9, &transform_hlds__deforest__InstMap0_34);
        }
#line 1858 "deforest.m"
        {
#line 1858 "deforest.m"
          transform_hlds__pd_info__pd_info_bind_var_to_functors_5_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__MainConsId_31, transform_hlds__deforest__OtherConsIds_32, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_39_39);
        }
#line 1859 "deforest.m"
        {
#line 1859 "deforest.m"
          transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Goal0_33, transform_hlds__deforest__BetweenGoals_2, transform_hlds__deforest__GoalToAppend_3, transform_hlds__deforest__NonLocals_4, transform_hlds__deforest__CurrCase_5, transform_hlds__deforest__Branches_6, &transform_hlds__deforest__Goal_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_39_39, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40);
        }
#line 1861 "deforest.m"
        {
#line 1861 "deforest.m"
          transform_hlds__deforest__Case_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1861 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_28, 0) = ((MR_Box) (transform_hlds__deforest__MainConsId_31));
#line 1861 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_28, 1) = ((MR_Box) (transform_hlds__deforest__OtherConsIds_32));
#line 1861 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_28, 2) = ((MR_Box) (transform_hlds__deforest__Goal_35));
#line 1861 "deforest.m"
        }
#line 1862 "deforest.m"
        transform_hlds__deforest__NextCase_36 = (transform_hlds__deforest__CurrCase_5 + (MR_Integer) 1);
#line 1863 "deforest.m"
        {
#line 1863 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_34, transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_42_42);
        }
#line 1864 "deforest.m"
        {
#line 1864 "deforest.m"
          transform_hlds__deforest__append_goal_to_cases_10_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__BetweenGoals_2, transform_hlds__deforest__GoalToAppend_3, transform_hlds__deforest__NonLocals_4, transform_hlds__deforest__NextCase_36, transform_hlds__deforest__Branches_6, transform_hlds__deforest__Cases0_27, &transform_hlds__deforest__Cases_29, transform_hlds__deforest__STATE_VARIABLE_PDInfo_42_42, transform_hlds__deforest__STATE_VARIABLE_PDInfo_10);
        }
#line 1855 "deforest.m"
        {
#line 1855 "deforest.m"
          MR_Word base;
#line 1855 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1855 "deforest.m"
          *transform_hlds__deforest__HeadVar__8_8 = base;
#line 1855 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Case_28));
#line 1855 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Cases_29));
#line 1855 "deforest.m"
        }
#line 1855 "deforest.m"
      }
#line 1853 "deforest.m"
  }
#line 1849 "deforest.m"
}

#line 1834 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(
#line 1834 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_1,
#line 1834 "deforest.m"
  MR_Word transform_hlds__deforest__GoalToAppend_2,
#line 1834 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_3,
#line 1834 "deforest.m"
  MR_Integer transform_hlds__deforest__CurrBranch_4,
#line 1834 "deforest.m"
  MR_Word transform_hlds__deforest__Branches_5,
#line 1834 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__6_6,
#line 1834 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__7_7,
#line 1834 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
#line 1834 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9)
#line 1834 "deforest.m"
{
#line 1838 "deforest.m"
  {
#line 1838 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 1838 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1838 "deforest.m"
      {
#line 1838 "deforest.m"
        *transform_hlds__deforest__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1838 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_9 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8;
#line 1838 "deforest.m"
      }
#line 1838 "deforest.m"
    else
#line 1840 "deforest.m"
      {
#line 1840 "deforest.m"
        MR_Word transform_hlds__deforest__Goal0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__6_6, (MR_Integer) 0)));
#line 1840 "deforest.m"
        MR_Word transform_hlds__deforest__Goals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__6_6, (MR_Integer) 1)));
#line 1840 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_25;
#line 1840 "deforest.m"
        MR_Word transform_hlds__deforest__Goals_26;
#line 1840 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_28;
#line 1840 "deforest.m"
        MR_Integer transform_hlds__deforest__NextBranch_29;
#line 1840 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_32_32;
#line 1840 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;

#line 1841 "deforest.m"
        {
#line 1841 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__deforest__InstMap0_28);
        }
#line 1842 "deforest.m"
        {
#line 1842 "deforest.m"
          transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Goal0_23, transform_hlds__deforest__BetweenGoals_1, transform_hlds__deforest__GoalToAppend_2, transform_hlds__deforest__NonLocals_3, transform_hlds__deforest__CurrBranch_4, transform_hlds__deforest__Branches_5, &transform_hlds__deforest__Goal_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_32_32);
        }
#line 1844 "deforest.m"
        transform_hlds__deforest__NextBranch_29 = (transform_hlds__deforest__CurrBranch_4 + (MR_Integer) 1);
#line 1845 "deforest.m"
        {
#line 1845 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_28, transform_hlds__deforest__STATE_VARIABLE_PDInfo_32_32, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34);
        }
#line 1846 "deforest.m"
        {
#line 1846 "deforest.m"
          transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(transform_hlds__deforest__BetweenGoals_1, transform_hlds__deforest__GoalToAppend_2, transform_hlds__deforest__NonLocals_3, transform_hlds__deforest__NextBranch_29, transform_hlds__deforest__Branches_5, transform_hlds__deforest__Goals0_24, &transform_hlds__deforest__Goals_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34, transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);
        }
#line 1840 "deforest.m"
        {
#line 1840 "deforest.m"
          MR_Word base;
#line 1840 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1840 "deforest.m"
          *transform_hlds__deforest__HeadVar__7_7 = base;
#line 1840 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Goal_25));
#line 1840 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_26));
#line 1840 "deforest.m"
        }
#line 1840 "deforest.m"
      }
#line 1838 "deforest.m"
  }
#line 1834 "deforest.m"
}

#line 1761 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__push_goal_into_goal_8_p_0(
#line 1761 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_9,
#line 1761 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_10,
#line 1761 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_11,
#line 1761 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_12,
#line 1761 "deforest.m"
  MR_Word transform_hlds__deforest__LaterGoal_13,
#line 1761 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_14,
#line 1761 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87,
#line 1761 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_88)
#line 1761 "deforest.m"
{
#line 1766 "deforest.m"
  {
#line 1766 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__InstMap0_16;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierGoalExpr_17;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr_24;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__Delta0_66;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__LaterInfo_68;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__Delta1_69;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__Delta2_70;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__Delta_71;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__Detism0_72;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__Detism1_73;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__Detism_74;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__Purity0_75;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__Purity1_76;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__Purity_77;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_78;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__Goal2_79;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_80;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_81;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__SimplifyTasks0_82;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__SimpList0_83;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__SimpList_84;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__SimplifyTasks_85;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__Goal3_86;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__V_103_103;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110;
#line 1766 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_111_111;
#line 1768 "deforest.m"
    MR_Word transform_hlds__deforest__V_18_18;
#line 1806 "deforest.m"
    MR_Word transform_hlds__deforest__V_67_67;

#line 1767 "deforest.m"
    {
#line 1767 "deforest.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__InstMap0_16);
    }
#line 1768 "deforest.m"
    transform_hlds__deforest__EarlierGoalExpr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_11, (MR_Integer) 0)));
#line 1768 "deforest.m"
    transform_hlds__deforest__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_11, (MR_Integer) 1)));
#line 1775 "deforest.m"
#line 1775 "deforest.m"
    switch (MR_tag((MR_Word) transform_hlds__deforest__EarlierGoalExpr_17)) {
#line 1775 "deforest.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1775 "deforest.m"
      case (MR_Integer) 0:
#line 1801 "deforest.m"
        {
#line 1802 "deforest.m"
          {
#line 1802 "deforest.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.push_goal_into_goal\'/8", (MR_String) "unexpected goal type");
#line 1802 "deforest.m"
            return;
          }
#line 1801 "deforest.m"
        }
#line 1775 "deforest.m"
        break;
#line 1775 "deforest.m"
      case (MR_Integer) 1:
#line 1775 "deforest.m"
      case (MR_Integer) 2:
#line 1801 "deforest.m"
        {
#line 1802 "deforest.m"
          {
#line 1802 "deforest.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.push_goal_into_goal\'/8", (MR_String) "unexpected goal type");
#line 1802 "deforest.m"
            return;
          }
#line 1801 "deforest.m"
        }
#line 1775 "deforest.m"
        break;
#line 1775 "deforest.m"
      case (MR_Integer) 3:
#line 1775 "deforest.m"
#line 1775 "deforest.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 0)))) {
#line 1775 "deforest.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1775 "deforest.m"
          case (MR_Integer) 0:
#line 1775 "deforest.m"
          case (MR_Integer) 1:
#line 1775 "deforest.m"
          case (MR_Integer) 2:
#line 1775 "deforest.m"
          case (MR_Integer) 5:
#line 1775 "deforest.m"
          case (MR_Integer) 7:
#line 1801 "deforest.m"
            {
#line 1802 "deforest.m"
              {
#line 1802 "deforest.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.push_goal_into_goal\'/8", (MR_String) "unexpected goal type");
#line 1802 "deforest.m"
                return;
              }
#line 1801 "deforest.m"
            }
#line 1775 "deforest.m"
            break;
#line 1775 "deforest.m"
          case (MR_Integer) 3:
#line 1788 "deforest.m"
            {
#line 1788 "deforest.m"
              MR_Word transform_hlds__deforest__Disjuncts0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 1)));
#line 1788 "deforest.m"
              MR_Word transform_hlds__deforest__Disjuncts_36;

#line 1789 "deforest.m"
              {
#line 1789 "deforest.m"
                transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__NonLocals_9, (MR_Integer) 1, transform_hlds__deforest__DeforestInfo_10, transform_hlds__deforest__Disjuncts0_35, &transform_hlds__deforest__Disjuncts_36, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101);
              }
#line 1791 "deforest.m"
              {
#line 1791 "deforest.m"
                transform_hlds__deforest__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1791 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1791 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 1) = ((MR_Box) (transform_hlds__deforest__Disjuncts_36));
#line 1791 "deforest.m"
              }
#line 1788 "deforest.m"
            }
#line 1775 "deforest.m"
            break;
#line 1775 "deforest.m"
          case (MR_Integer) 4:
#line 1770 "deforest.m"
            {
#line 1770 "deforest.m"
              MR_Word transform_hlds__deforest__Var1_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 1)));
#line 1770 "deforest.m"
              MR_Word transform_hlds__deforest__CanFail1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 2)));
#line 1770 "deforest.m"
              MR_Word transform_hlds__deforest__Cases1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 3)));
#line 1770 "deforest.m"
              MR_Word transform_hlds__deforest__CaseNonLocals_22;
#line 1770 "deforest.m"
              MR_Word transform_hlds__deforest__Cases_23;

#line 1771 "deforest.m"
              {
#line 1771 "deforest.m"
                parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__Var1_19, transform_hlds__deforest__NonLocals_9, &transform_hlds__deforest__CaseNonLocals_22);
              }
#line 1772 "deforest.m"
              {
#line 1772 "deforest.m"
                transform_hlds__deforest__append_goal_to_cases_10_p_0(transform_hlds__deforest__Var1_19, transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__CaseNonLocals_22, (MR_Integer) 1, transform_hlds__deforest__DeforestInfo_10, transform_hlds__deforest__Cases1_21, &transform_hlds__deforest__Cases_23, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101);
              }
#line 1774 "deforest.m"
              {
#line 1774 "deforest.m"
                transform_hlds__deforest__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1774 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1774 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 1) = ((MR_Box) (transform_hlds__deforest__Var1_19));
#line 1774 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 2) = ((MR_Box) (transform_hlds__deforest__CanFail1_20));
#line 1774 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 3) = ((MR_Box) (transform_hlds__deforest__Cases_23));
#line 1774 "deforest.m"
              }
#line 1770 "deforest.m"
            }
#line 1775 "deforest.m"
            break;
#line 1775 "deforest.m"
          case (MR_Integer) 6:
#line 1776 "deforest.m"
            {
#line 1776 "deforest.m"
              MR_Word transform_hlds__deforest__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 1)));
#line 1776 "deforest.m"
              MR_Word transform_hlds__deforest__Cond_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 2)));
#line 1776 "deforest.m"
              MR_Word transform_hlds__deforest__Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 3)));
#line 1776 "deforest.m"
              MR_Word transform_hlds__deforest__Else0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 4)));
#line 1776 "deforest.m"
              MR_Word transform_hlds__deforest__CondInfo_30;
#line 1776 "deforest.m"
              MR_Word transform_hlds__deforest__CondNonLocals_31;
#line 1776 "deforest.m"
              MR_Word transform_hlds__deforest__ThenNonLocals_32;
#line 1776 "deforest.m"
              MR_Word transform_hlds__deforest__Then_33;
#line 1776 "deforest.m"
              MR_Word transform_hlds__deforest__Else_34;
#line 1776 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94;
#line 1776 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96;
#line 1776 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 1778 "deforest.m"
              MR_Word transform_hlds__deforest__V_29_29;

#line 1777 "deforest.m"
              {
#line 1777 "deforest.m"
                transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Cond_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94);
              }
#line 1778 "deforest.m"
              transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Cond_26, (MR_Integer) 0)));
#line 1778 "deforest.m"
              transform_hlds__deforest__CondInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Cond_26, (MR_Integer) 1)));
#line 1779 "deforest.m"
              {
#line 1779 "deforest.m"
                transform_hlds__deforest__CondNonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__CondInfo_30);
              }
#line 1780 "deforest.m"
              {
#line 1780 "deforest.m"
                parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__CondNonLocals_31, transform_hlds__deforest__NonLocals_9, &transform_hlds__deforest__ThenNonLocals_32);
              }
#line 1781 "deforest.m"
              {
#line 1781 "deforest.m"
                transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Then0_27, transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__ThenNonLocals_32, (MR_Integer) 1, transform_hlds__deforest__DeforestInfo_10, &transform_hlds__deforest__Then_33, transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96);
              }
#line 1783 "deforest.m"
              {
#line 1783 "deforest.m"
                transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
              }
#line 1784 "deforest.m"
              {
#line 1784 "deforest.m"
                transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Else0_28, transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__NonLocals_9, (MR_Integer) 2, transform_hlds__deforest__DeforestInfo_10, &transform_hlds__deforest__Else_34, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101);
              }
#line 1786 "deforest.m"
              {
#line 1786 "deforest.m"
                transform_hlds__deforest__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1786 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1786 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 1) = ((MR_Box) (transform_hlds__deforest__Vars_25));
#line 1786 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 2) = ((MR_Box) (transform_hlds__deforest__Cond_26));
#line 1786 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 3) = ((MR_Box) (transform_hlds__deforest__Then_33));
#line 1786 "deforest.m"
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 4) = ((MR_Box) (transform_hlds__deforest__Else_34));
#line 1786 "deforest.m"
              }
#line 1776 "deforest.m"
            }
#line 1775 "deforest.m"
            break;
#line 1775 "deforest.m"
        }
#line 1775 "deforest.m"
        break;
#line 1775 "deforest.m"
    }
#line 1804 "deforest.m"
    {
#line 1804 "deforest.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102);
    }
#line 1805 "deforest.m"
    {
#line 1805 "deforest.m"
      transform_hlds__deforest__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1805 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_103_103, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_11));
#line 1805 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_103_103, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_12));
#line 1805 "deforest.m"
    }
#line 1805 "deforest.m"
    {
#line 1805 "deforest.m"
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__deforest__V_103_103, &transform_hlds__deforest__Delta0_66);
    }
#line 1806 "deforest.m"
    transform_hlds__deforest__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_13, (MR_Integer) 0)));
#line 1806 "deforest.m"
    transform_hlds__deforest__LaterInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_13, (MR_Integer) 1)));
#line 1807 "deforest.m"
    {
#line 1807 "deforest.m"
      transform_hlds__deforest__Delta1_69 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__deforest__LaterInfo_68);
    }
#line 1808 "deforest.m"
    {
#line 1808 "deforest.m"
      hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(transform_hlds__deforest__Delta0_66, transform_hlds__deforest__Delta1_69, (MR_Integer) 2, &transform_hlds__deforest__Delta2_70);
    }
#line 1809 "deforest.m"
    {
#line 1809 "deforest.m"
      hlds__instmap__instmap_delta_restrict_3_p_0(transform_hlds__deforest__NonLocals_9, transform_hlds__deforest__Delta2_70, &transform_hlds__deforest__Delta_71);
    }
#line 1810 "deforest.m"
    {
#line 1810 "deforest.m"
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__deforest__V_103_103, &transform_hlds__deforest__Detism0_72);
    }
#line 1811 "deforest.m"
    {
#line 1811 "deforest.m"
      transform_hlds__deforest__Detism1_73 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__deforest__LaterInfo_68);
    }
#line 1812 "deforest.m"
    {
#line 1812 "deforest.m"
      parse_tree__prog_detism__det_conjunction_detism_3_p_0(transform_hlds__deforest__Detism0_72, transform_hlds__deforest__Detism1_73, &transform_hlds__deforest__Detism_74);
    }
#line 1813 "deforest.m"
    {
#line 1813 "deforest.m"
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__deforest__V_103_103, &transform_hlds__deforest__Purity0_75);
    }
#line 1814 "deforest.m"
    {
#line 1814 "deforest.m"
      transform_hlds__deforest__Purity1_76 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__deforest__LaterInfo_68);
    }
#line 1815 "deforest.m"
    {
#line 1815 "deforest.m"
      transform_hlds__deforest__Purity_77 = parse_tree__prog_data__worst_purity_2_f_0(transform_hlds__deforest__Purity0_75, transform_hlds__deforest__Purity1_76);
    }
#line 1816 "deforest.m"
    {
#line 1816 "deforest.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__deforest__NonLocals_9, transform_hlds__deforest__Delta_71, transform_hlds__deforest__Detism_74, transform_hlds__deforest__Purity_77, &transform_hlds__deforest__GoalInfo_78);
    }
#line 1817 "deforest.m"
    {
#line 1817 "deforest.m"
      transform_hlds__deforest__Goal2_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1817 "deforest.m"
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal2_79, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_24));
#line 1817 "deforest.m"
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal2_79, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_78));
#line 1817 "deforest.m"
    }
#line 1819 "deforest.m"
    {
#line 1819 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102, &transform_hlds__deforest__ModuleInfo_80);
    }
#line 1820 "deforest.m"
    {
#line 1820 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_80, &transform_hlds__deforest__Globals_81);
    }
#line 1821 "deforest.m"
    {
#line 1821 "deforest.m"
      check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, transform_hlds__deforest__Globals_81, &transform_hlds__deforest__SimplifyTasks0_82);
    }
#line 1822 "deforest.m"
    {
#line 1822 "deforest.m"
      transform_hlds__deforest__SimpList0_83 = check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(transform_hlds__deforest__SimplifyTasks0_82);
    }
#line 1825 "deforest.m"
    {
#line 1825 "deforest.m"
      transform_hlds__deforest__SimpList_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1825 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__SimpList_84, 0) = ((MR_Box) ((MR_Integer) 11));
#line 1825 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__SimpList_84, 1) = ((MR_Box) (transform_hlds__deforest__SimpList0_83));
#line 1825 "deforest.m"
    }
#line 1826 "deforest.m"
    {
#line 1826 "deforest.m"
      transform_hlds__deforest__SimplifyTasks_85 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0(transform_hlds__deforest__SimpList_84);
    }
#line 1827 "deforest.m"
    {
#line 1827 "deforest.m"
      transform_hlds__pd_util__pd_simplify_goal_5_p_0(transform_hlds__deforest__SimplifyTasks_85, transform_hlds__deforest__Goal2_79, &transform_hlds__deforest__Goal3_86, transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
    }
#line 1828 "deforest.m"
    {
#line 1828 "deforest.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110);
    }
#line 1831 "deforest.m"
    {
#line 1831 "deforest.m"
      transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Goal3_86, transform_hlds__deforest__Goal_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_111_111);
    }
#line 1832 "deforest.m"
    {
#line 1832 "deforest.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_111_111, transform_hlds__deforest__STATE_VARIABLE_PDInfo_88);
    }
#line 1766 "deforest.m"
  }
#line 1761 "deforest.m"
}

#line 1679 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__reorder_conj_5_p_0(
#line 1679 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo0_6,
#line 1679 "deforest.m"
  MR_Word * transform_hlds__deforest__DeforestInfo_7,
#line 1679 "deforest.m"
  MR_Word * transform_hlds__deforest__BeforeIrrelevant_8,
#line 1679 "deforest.m"
  MR_Word * transform_hlds__deforest__AfterIrrelevant_9,
#line 1679 "deforest.m"
  MR_Word transform_hlds__deforest__PDInfo_10)
#line 1679 "deforest.m"
{
#line 1683 "deforest.m"
  {
#line 1683 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1683 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_11;
#line 1683 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_12;
#line 1683 "deforest.m"
    MR_Word transform_hlds__deforest__DebugPD_13;
#line 1683 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierGoal_15;
#line 1683 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierBranchInfo_16;
#line 1683 "deforest.m"
    MR_Word transform_hlds__deforest__BetweenGoals0_17;
#line 1683 "deforest.m"
    MR_Word transform_hlds__deforest__LaterGoal_18;
#line 1683 "deforest.m"
    MR_Word transform_hlds__deforest__LaterBranchInfo_19;
#line 1683 "deforest.m"
    MR_Word transform_hlds__deforest__DeforestBranches_20;
#line 1683 "deforest.m"
    MR_Word transform_hlds__deforest__FullyStrict_21;
#line 1683 "deforest.m"
    MR_Word transform_hlds__deforest__RevBetweenGoals1_22;
#line 1683 "deforest.m"
    MR_Word transform_hlds__deforest__RevBeforeIrrelevant_23;
#line 1683 "deforest.m"
    MR_Word transform_hlds__deforest__BetweenGoals_24;

#line 1684 "deforest.m"
    {
#line 1684 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__PDInfo_10, &transform_hlds__deforest__ModuleInfo_11);
    }
#line 1685 "deforest.m"
    {
#line 1685 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_11, &transform_hlds__deforest__Globals_12);
    }
#line 1686 "deforest.m"
    {
#line 1686 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_12, (MR_Integer) 72, &transform_hlds__deforest__DebugPD_13);
    }
#line 1688 "deforest.m"
    {
#line 1688 "deforest.m"
      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_13, (MR_String) "Reordering conjunction\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 1690 "deforest.m"
    transform_hlds__deforest__EarlierGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 0)));
#line 1690 "deforest.m"
    transform_hlds__deforest__EarlierBranchInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 1)));
#line 1690 "deforest.m"
    transform_hlds__deforest__BetweenGoals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 2)));
#line 1690 "deforest.m"
    transform_hlds__deforest__LaterGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 3)));
#line 1690 "deforest.m"
    transform_hlds__deforest__LaterBranchInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 4)));
#line 1690 "deforest.m"
    transform_hlds__deforest__DeforestBranches_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 5)));
#line 1693 "deforest.m"
    {
#line 1693 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_12, (MR_Integer) 164, &transform_hlds__deforest__FullyStrict_21);
    }
#line 1694 "deforest.m"
    {
#line 1694 "deforest.m"
      transform_hlds__deforest__move_goals__ho2_9_p_0(transform_hlds__deforest__ModuleInfo_11, transform_hlds__deforest__FullyStrict_21, transform_hlds__deforest__BetweenGoals0_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__RevBetweenGoals1_22, transform_hlds__deforest__EarlierGoal_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__RevBeforeIrrelevant_23);
    }
#line 1697 "deforest.m"
    {
#line 1697 "deforest.m"
      transform_hlds__deforest__move_goals__ho1_9_p_0(transform_hlds__deforest__ModuleInfo_11, transform_hlds__deforest__FullyStrict_21, transform_hlds__deforest__RevBetweenGoals1_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__BetweenGoals_24, transform_hlds__deforest__LaterGoal_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__deforest__AfterIrrelevant_9);
    }
#line 1701 "deforest.m"
    {
#line 1701 "deforest.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__RevBeforeIrrelevant_23, transform_hlds__deforest__BeforeIrrelevant_8);
    }
#line 1702 "deforest.m"
    {
#line 1702 "deforest.m"
      MR_Word base;
#line 1702 "deforest.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1702 "deforest.m"
      *transform_hlds__deforest__DeforestInfo_7 = base;
#line 1702 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_15));
#line 1702 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__EarlierBranchInfo_16));
#line 1702 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_24));
#line 1702 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__deforest__LaterGoal_18));
#line 1702 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__deforest__LaterBranchInfo_19));
#line 1702 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__deforest__DeforestBranches_20));
#line 1702 "deforest.m"
    }
#line 1683 "deforest.m"
  }
#line 1679 "deforest.m"
}

#line 1652 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0_1(
#line 1652 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 1652 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 1652 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 1652 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 1652 "deforest.m"
{
#line 1652 "deforest.m"
  {
#line 1652 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 1652 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_LambdaHeadVar__3_31;

#line 1652 "deforest.m"
    {
#line 1652 "deforest.m"
      transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1652__1_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_LambdaHeadVar__3_31);
    }
#line 1652 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_LambdaHeadVar__3_31));
#line 1652 "deforest.m"
  }
#line 1652 "deforest.m"
}

#line 1644 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(
#line 1644 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_0_27,
#line 1644 "deforest.m"
  MR_Word transform_hlds__deforest__RevBeforeGoals_11,
#line 1644 "deforest.m"
  MR_Word transform_hlds__deforest__BeforeIrrelevant_12,
#line 1644 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_13,
#line 1644 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_14,
#line 1644 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_15,
#line 1644 "deforest.m"
  MR_Word transform_hlds__deforest__AfterIrrelevant_16,
#line 1644 "deforest.m"
  MR_Word transform_hlds__deforest__AfterGoals_17,
#line 1644 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_28)
#line 1644 "deforest.m"
{
#line 1651 "deforest.m"
  {
#line 1651 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1651 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_45_45 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1651 "deforest.m"
    MR_Word transform_hlds__deforest__TypeInfo_46_46 = (MR_Word) &transform_hlds__deforest_scalar_common_1[5];
#line 1651 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_47_47;
#line 1651 "deforest.m"
    MR_Word transform_hlds__deforest__AddGoalNonLocals_19 = (MR_Word) &transform_hlds__deforest_scalar_common_2[11];
#line 1651 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_32_32;
#line 1651 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_33_33;
#line 1651 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_34_34;
#line 1651 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_35_35;
#line 1651 "deforest.m"
    MR_Word transform_hlds__deforest__V_36_36;
#line 1651 "deforest.m"
    MR_Word transform_hlds__deforest__V_37_37;
#line 1651 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38;
#line 1651 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39;
#line 1657 "deforest.m"
    MR_Box transform_hlds__deforest__conv1_STATE_VARIABLE_NonLocals_32_32;
#line 1658 "deforest.m"
    MR_Box transform_hlds__deforest__conv2_STATE_VARIABLE_NonLocals_33_33;
#line 1659 "deforest.m"
    MR_Box transform_hlds__deforest__conv3_STATE_VARIABLE_NonLocals_34_34;
#line 1660 "deforest.m"
    MR_Box transform_hlds__deforest__conv4_STATE_VARIABLE_NonLocals_35_35;
#line 1662 "deforest.m"
    MR_Box transform_hlds__deforest__conv5_STATE_VARIABLE_SubConjNonLocals_38_38;

#line 1657 "deforest.m"
    {
#line 1657 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__RevBeforeGoals_11, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_0_27)), &transform_hlds__deforest__conv1_STATE_VARIABLE_NonLocals_32_32);
    }
#line 1657 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_32_32 = ((MR_Word) transform_hlds__deforest__conv1_STATE_VARIABLE_NonLocals_32_32);
#line 1658 "deforest.m"
    {
#line 1658 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__BeforeIrrelevant_12, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_32_32)), &transform_hlds__deforest__conv2_STATE_VARIABLE_NonLocals_33_33);
    }
#line 1658 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_33_33 = ((MR_Word) transform_hlds__deforest__conv2_STATE_VARIABLE_NonLocals_33_33);
#line 1659 "deforest.m"
    {
#line 1659 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__AfterIrrelevant_16, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_33_33)), &transform_hlds__deforest__conv3_STATE_VARIABLE_NonLocals_34_34);
    }
#line 1659 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_34_34 = ((MR_Word) transform_hlds__deforest__conv3_STATE_VARIABLE_NonLocals_34_34);
#line 1660 "deforest.m"
    {
#line 1660 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__AfterGoals_17, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_34_34)), &transform_hlds__deforest__conv4_STATE_VARIABLE_NonLocals_35_35);
    }
#line 1660 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_35_35 = ((MR_Word) transform_hlds__deforest__conv4_STATE_VARIABLE_NonLocals_35_35);
#line 1662 "deforest.m"
    {
#line 1662 "deforest.m"
      transform_hlds__deforest__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1662 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_36_36, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_13));
#line 1662 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_36_36, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_14));
#line 1662 "deforest.m"
    }
#line 5888 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1663 "deforest.m"
    {
#line 1663 "deforest.m"
      transform_hlds__deforest__V_37_37 = parse_tree__set_of_var__init_0_f_0(transform_hlds__deforest__TypeCtorInfo_47_47);
    }
#line 1662 "deforest.m"
    {
#line 1662 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__V_36_36, ((MR_Box) (transform_hlds__deforest__V_37_37)), &transform_hlds__deforest__conv5_STATE_VARIABLE_SubConjNonLocals_38_38);
    }
#line 1662 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38 = ((MR_Word) transform_hlds__deforest__conv5_STATE_VARIABLE_SubConjNonLocals_38_38);
#line 1667 "deforest.m"
    if ((transform_hlds__deforest__MaybeLaterGoal_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1668 "deforest.m"
      transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39 = transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38;
#line 1667 "deforest.m"
    else
#line 1665 "deforest.m"
      {
#line 1665 "deforest.m"
        MR_Word transform_hlds__deforest__LaterGoal_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeLaterGoal_15, (MR_Integer) 0)));
#line 1665 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_26, (MR_Integer) 1)));
#line 1665 "deforest.m"
        MR_Word transform_hlds__deforest__GoalNonLocals_72;
#line 1653 "deforest.m"
        MR_Word transform_hlds__deforest__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_26, (MR_Integer) 0)));

#line 1654 "deforest.m"
        {
#line 1654 "deforest.m"
          transform_hlds__deforest__GoalNonLocals_72 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__GoalInfo_71);
        }
#line 1655 "deforest.m"
        {
#line 1655 "deforest.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__GoalNonLocals_72, transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38, &transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39);
        }
#line 1665 "deforest.m"
      }
#line 1670 "deforest.m"
    {
#line 1670 "deforest.m"
      parse_tree__set_of_var__intersect_3_p_0(transform_hlds__deforest__TypeCtorInfo_47_47, transform_hlds__deforest__STATE_VARIABLE_NonLocals_35_35, transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39, transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_28);
    }
#line 1651 "deforest.m"
  }
#line 1644 "deforest.m"
}

#line 1630 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(
#line 1630 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals0_8,
#line 1630 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_9,
#line 1630 "deforest.m"
  MR_Word transform_hlds__deforest__RevBeforeGoals_10,
#line 1630 "deforest.m"
  MR_Word transform_hlds__deforest__BeforeIrrelevant_11,
#line 1630 "deforest.m"
  MR_Word transform_hlds__deforest__AfterIrrelevant_12,
#line 1630 "deforest.m"
  MR_Word transform_hlds__deforest__AfterGoals0_13,
#line 1630 "deforest.m"
  MR_Word * transform_hlds__deforest__SubConjNonLocals_14)
#line 1630 "deforest.m"
{
#line 1636 "deforest.m"
  {
#line 1636 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1636 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 0)));
#line 1636 "deforest.m"
    MR_Word transform_hlds__deforest__BetweenGoals_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 2)));
#line 1636 "deforest.m"
    MR_Word transform_hlds__deforest__LaterGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 3)));
#line 1636 "deforest.m"
    MR_Word transform_hlds__deforest__AfterGoals_21;
#line 1636 "deforest.m"
    MR_Word transform_hlds__deforest__V_22_22;
#line 1637 "deforest.m"
    MR_Word transform_hlds__deforest__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 1)));
#line 1637 "deforest.m"
    MR_Word transform_hlds__deforest__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 4)));
#line 1637 "deforest.m"
    MR_Word transform_hlds__deforest__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 5)));

#line 1639 "deforest.m"
    {
#line 1639 "deforest.m"
      mercury__assoc_list__keys_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[3], transform_hlds__deforest__AfterGoals0_13, &transform_hlds__deforest__AfterGoals_21);
    }
#line 1641 "deforest.m"
    {
#line 1641 "deforest.m"
      transform_hlds__deforest__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1641 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_22_22, 0) = ((MR_Box) (transform_hlds__deforest__LaterGoal_18));
#line 1641 "deforest.m"
    }
#line 1640 "deforest.m"
    {
#line 1640 "deforest.m"
      transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(transform_hlds__deforest__NonLocals0_8, transform_hlds__deforest__RevBeforeGoals_10, transform_hlds__deforest__BeforeIrrelevant_11, transform_hlds__deforest__EarlierGoal_15, transform_hlds__deforest__BetweenGoals_17, transform_hlds__deforest__V_22_22, transform_hlds__deforest__AfterIrrelevant_12, transform_hlds__deforest__AfterGoals_21, transform_hlds__deforest__SubConjNonLocals_14);
    }
#line 1636 "deforest.m"
  }
#line 1630 "deforest.m"
}

#line 1009 "deforest.m"
static MR_Word MR_CALL 
transform_hlds__deforest__is_improvement_worth_while_4_f_0(
#line 1009 "deforest.m"
  MR_Word transform_hlds__deforest__PDInfo_6,
#line 1009 "deforest.m"
  MR_Word transform_hlds__deforest__Optimized0_7,
#line 1009 "deforest.m"
  MR_Integer transform_hlds__deforest__CostDelta0_8,
#line 1009 "deforest.m"
  MR_Integer transform_hlds__deforest__SizeDelta0_9)
#line 1009 "deforest.m"
{
#line 1012 "deforest.m"
  {
#line 1012 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 1012 "deforest.m"
    MR_Word transform_hlds__deforest__Optimized_10;
#line 1012 "deforest.m"
    MR_Integer transform_hlds__deforest__CostDelta_11;
#line 1012 "deforest.m"
    MR_Integer transform_hlds__deforest__SizeDelta_12;
#line 1012 "deforest.m"
    MR_Integer transform_hlds__deforest__Improvement_13;
#line 1012 "deforest.m"
    MR_Integer transform_hlds__deforest__SizeDifference_14;
#line 1012 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_15;
#line 1012 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_16;
#line 1012 "deforest.m"
    MR_Integer transform_hlds__deforest__Factor_17;
#line 1012 "deforest.m"
    MR_Word transform_hlds__deforest__DebugPD_18;
#line 2191 "deforest.m"
    MR_Integer transform_hlds__deforest__V_43_43;

#line 1013 "deforest.m"
    {
#line 1013 "deforest.m"
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__PDInfo_6, &transform_hlds__deforest__CostDelta_11);
    }
#line 1014 "deforest.m"
    {
#line 1014 "deforest.m"
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__PDInfo_6, &transform_hlds__deforest__SizeDelta_12);
    }
#line 1015 "deforest.m"
    transform_hlds__deforest__Improvement_13 = (transform_hlds__deforest__CostDelta_11 - transform_hlds__deforest__CostDelta0_8);
#line 1016 "deforest.m"
    transform_hlds__deforest__SizeDifference_14 = (transform_hlds__deforest__SizeDelta_12 - transform_hlds__deforest__SizeDelta0_9);
#line 1018 "deforest.m"
    {
#line 1018 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__PDInfo_6, &transform_hlds__deforest__ModuleInfo_15);
    }
#line 1019 "deforest.m"
    {
#line 1019 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_15, &transform_hlds__deforest__Globals_16);
    }
#line 1020 "deforest.m"
    {
#line 1020 "deforest.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_16, (MR_Integer) 384, &transform_hlds__deforest__Factor_17);
    }
#line 1021 "deforest.m"
    {
#line 1021 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_16, (MR_Integer) 72, &transform_hlds__deforest__DebugPD_18);
    }
#line 1023 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__Optimized0_7 == (MR_Integer) 1);
#line 1023 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 1023 "deforest.m"
      {
#line 2191 "deforest.m"
        transform_hlds__deforest__V_43_43 = (MR_Integer) 5;
#line 2191 "deforest.m"
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__SizeDifference_14 <= transform_hlds__deforest__V_43_43);
#line 2194 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 2193 "deforest.m"
          {
#line 2193 "deforest.m"
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__Improvement_13 > (MR_Integer) 0);
#line 2193 "deforest.m"
          }
#line 2194 "deforest.m"
        else
#line 2198 "deforest.m"
          {
#line 2198 "deforest.m"
            MR_Integer transform_hlds__deforest__ExpectedCostDelta_41;
#line 2198 "deforest.m"
            MR_Integer transform_hlds__deforest__FudgedCostDelta_42;
#line 2198 "deforest.m"
            MR_Integer transform_hlds__deforest__V_45_45;
#line 2198 "deforest.m"
            MR_Integer transform_hlds__deforest__V_46_46;
#line 2198 "deforest.m"
            MR_Integer transform_hlds__deforest__V_48_48;

#line 2198 "deforest.m"
            {
#line 2198 "deforest.m"
              transform_hlds__deforest__V_48_48 = transform_hlds__pd_cost__cost_of_heap_incr_0_f_0();
            }
#line 2198 "deforest.m"
            transform_hlds__deforest__V_46_46 = ((MR_Integer) 1000 * transform_hlds__deforest__V_48_48);
#line 2198 "deforest.m"
            transform_hlds__deforest__V_45_45 = (transform_hlds__deforest__V_46_46 * transform_hlds__deforest__SizeDifference_14);
#line 2198 "deforest.m"
            {
#line 2198 "deforest.m"
              transform_hlds__deforest__ExpectedCostDelta_41 = mercury__int__f_47_47_2_f_0(transform_hlds__deforest__V_45_45, (MR_Integer) 3);
            }
#line 2199 "deforest.m"
            transform_hlds__deforest__FudgedCostDelta_42 = (transform_hlds__deforest__Improvement_13 * transform_hlds__deforest__Factor_17);
#line 2200 "deforest.m"
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__FudgedCostDelta_42 >= transform_hlds__deforest__ExpectedCostDelta_41);
#line 2198 "deforest.m"
          }
#line 1023 "deforest.m"
      }
#line 1032 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 1026 "deforest.m"
      {
#line 1027 "deforest.m"
        MR_Word transform_hlds__deforest__V_24_24;
#line 1027 "deforest.m"
        MR_Word transform_hlds__deforest__V_26_26;
#line 1027 "deforest.m"
        MR_Word transform_hlds__deforest__V_27_27;
#line 1027 "deforest.m"
        MR_Word transform_hlds__deforest__V_28_28;

#line 1026 "deforest.m"
        transform_hlds__deforest__Optimized_10 = (MR_Integer) 1;
#line 1030 "deforest.m"
        {
#line 1030 "deforest.m"
          transform_hlds__deforest__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_26_26, 0) = ((MR_Box) (transform_hlds__deforest__Improvement_13));
#line 1030 "deforest.m"
        }
#line 1030 "deforest.m"
        {
#line 1030 "deforest.m"
          transform_hlds__deforest__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_28_28, 0) = ((MR_Box) (transform_hlds__deforest__SizeDifference_14));
#line 1030 "deforest.m"
        }
#line 1030 "deforest.m"
        {
#line 1030 "deforest.m"
          transform_hlds__deforest__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_27_27, 0) = ((MR_Box) (transform_hlds__deforest__V_28_28));
#line 1030 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1030 "deforest.m"
        }
#line 1030 "deforest.m"
        {
#line 1030 "deforest.m"
          transform_hlds__deforest__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_24_24, 0) = ((MR_Box) (transform_hlds__deforest__V_26_26));
#line 1030 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_24_24, 1) = ((MR_Box) (transform_hlds__deforest__V_27_27));
#line 1030 "deforest.m"
        }
#line 1028 "deforest.m"
        {
#line 1028 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Enough improvement: cost(%i) size(%i)\n", transform_hlds__deforest__V_24_24);
        }
#line 1026 "deforest.m"
      }
#line 1032 "deforest.m"
    else
#line 1033 "deforest.m"
      {
#line 1034 "deforest.m"
        MR_Word transform_hlds__deforest__V_32_32;
#line 1034 "deforest.m"
        MR_Word transform_hlds__deforest__V_34_34;
#line 1034 "deforest.m"
        MR_Word transform_hlds__deforest__V_35_35;
#line 1034 "deforest.m"
        MR_Word transform_hlds__deforest__V_36_36;

#line 1033 "deforest.m"
        transform_hlds__deforest__Optimized_10 = (MR_Integer) 0;
#line 1037 "deforest.m"
        {
#line 1037 "deforest.m"
          transform_hlds__deforest__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_34_34, 0) = ((MR_Box) (transform_hlds__deforest__Improvement_13));
#line 1037 "deforest.m"
        }
#line 1037 "deforest.m"
        {
#line 1037 "deforest.m"
          transform_hlds__deforest__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_36_36, 0) = ((MR_Box) (transform_hlds__deforest__SizeDifference_14));
#line 1037 "deforest.m"
        }
#line 1037 "deforest.m"
        {
#line 1037 "deforest.m"
          transform_hlds__deforest__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_35_35, 0) = ((MR_Box) (transform_hlds__deforest__V_36_36));
#line 1037 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1037 "deforest.m"
        }
#line 1037 "deforest.m"
        {
#line 1037 "deforest.m"
          transform_hlds__deforest__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_32_32, 0) = ((MR_Box) (transform_hlds__deforest__V_34_34));
#line 1037 "deforest.m"
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_32_32, 1) = ((MR_Box) (transform_hlds__deforest__V_35_35));
#line 1037 "deforest.m"
        }
#line 1035 "deforest.m"
        {
#line 1035 "deforest.m"
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Not enough improvement: cost(%i) size(%i)\n", transform_hlds__deforest__V_32_32);
        }
#line 1033 "deforest.m"
      }
#line 1012 "deforest.m"
    return transform_hlds__deforest__Optimized_10;
#line 1012 "deforest.m"
  }
#line 1009 "deforest.m"
}

#line 912 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_1(
#line 912 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 912 "deforest.m"
{
#line 912 "deforest.m"
  {
#line 912 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 912 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_0, 1);
#line 912 "deforest.m"
  }
#line 912 "deforest.m"
}

#line 912 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_2(
#line 912 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 912 "deforest.m"
{
#line 912 "deforest.m"
  {
#line 912 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 912 "deforest.m"
    {
#line 919 "deforest.m"
      MR_Word transform_hlds__deforest__V_35_35;

#line 919 "deforest.m"
      {
#line 919 "deforest.m"
        hlds__hlds_module__module_info_pred_proc_info_5_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_23, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_24, &transform_hlds__deforest__V_35_35, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_36);
      }
#line 921 "deforest.m"
      {
#line 921 "deforest.m"
        hlds__hlds_pred__proc_info_get_goal_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_36, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_37);
      }
#line 922 "deforest.m"
      {
#line 922 "deforest.m"
        hlds__goal_util__goal_size_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_37, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_38);
      }
#line 923 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19 == (MR_Integer) -1);
#line 923 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 912 "deforest.m"
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 912 "deforest.m"
        {
#line 924 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_38 > (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19);
#line 924 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 924 "deforest.m"
            {
#line 924 "deforest.m"
              transform_hlds__deforest__can_optimize_conj_6_p_0_1(transform_hlds__deforest__env_ptr);
            }
#line 912 "deforest.m"
        }
#line 912 "deforest.m"
    }
#line 912 "deforest.m"
  }
#line 912 "deforest.m"
}

#line 912 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_3(
#line 912 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 912 "deforest.m"
{
#line 912 "deforest.m"
  {
#line 912 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 912 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_0) == 0)
#line 912 "deforest.m"
      {
#line 912 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19 == (MR_Integer) -1);
#line 912 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 912 "deforest.m"
        if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 912 "deforest.m"
          {
#line 914 "deforest.m"
            {
#line 914 "deforest.m"
              MR_Word transform_hlds__deforest__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 0)));
#line 914 "deforest.m"
              MR_Word transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 1)));
#line 914 "deforest.m"
              MR_Word transform_hlds__deforest__V_25_25;
#line 914 "deforest.m"
              MR_Word transform_hlds__deforest__V_26_26;
#line 914 "deforest.m"
              MR_Word transform_hlds__deforest__V_27_27;
#line 914 "deforest.m"
              MR_Word transform_hlds__deforest__V_28_28;

#line 914 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_72_72)) == (MR_mktag((MR_Integer) 2)));
#line 914 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 914 "deforest.m"
                {
#line 914 "deforest.m"
                  {
#line 914 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_72_72, (MR_Integer) 0)));
#line 914 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_72_72, (MR_Integer) 1)));
#line 914 "deforest.m"
                    transform_hlds__deforest__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_72_72, (MR_Integer) 2)));
#line 914 "deforest.m"
                    transform_hlds__deforest__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_72_72, (MR_Integer) 3)));
#line 914 "deforest.m"
                    transform_hlds__deforest__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_72_72, (MR_Integer) 4)));
#line 914 "deforest.m"
                    transform_hlds__deforest__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_72_72, (MR_Integer) 5)));
#line 914 "deforest.m"
                  }
#line 914 "deforest.m"
                  {
#line 914 "deforest.m"
                    transform_hlds__deforest__can_optimize_conj_6_p_0_2(transform_hlds__deforest__env_ptr);
                  }
#line 914 "deforest.m"
                }
#line 914 "deforest.m"
            }
#line 916 "deforest.m"
            {
#line 916 "deforest.m"
              MR_Word transform_hlds__deforest__V_70_70;
#line 916 "deforest.m"
              MR_Word transform_hlds__deforest__V_71_71;
#line 917 "deforest.m"
              MR_Word transform_hlds__deforest__V_34_34;
#line 917 "deforest.m"
              MR_Word transform_hlds__deforest__V_30_30;
#line 917 "deforest.m"
              MR_Word transform_hlds__deforest__V_31_31;
#line 917 "deforest.m"
              MR_Word transform_hlds__deforest__V_32_32;
#line 917 "deforest.m"
              MR_Word transform_hlds__deforest__V_33_33;

#line 916 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
#line 916 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 916 "deforest.m"
                {
#line 916 "deforest.m"
                  transform_hlds__deforest__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
#line 916 "deforest.m"
                  {
#line 917 "deforest.m"
                    transform_hlds__deforest__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_70_70, (MR_Integer) 0)));
#line 917 "deforest.m"
                    transform_hlds__deforest__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_70_70, (MR_Integer) 1)));
#line 917 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_71_71)) == (MR_mktag((MR_Integer) 2)));
#line 917 "deforest.m"
                    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 917 "deforest.m"
                      {
#line 917 "deforest.m"
                        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_71_71, (MR_Integer) 0)));
#line 917 "deforest.m"
                        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_71_71, (MR_Integer) 1)));
#line 917 "deforest.m"
                        transform_hlds__deforest__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_71_71, (MR_Integer) 2)));
#line 917 "deforest.m"
                        transform_hlds__deforest__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_71_71, (MR_Integer) 3)));
#line 917 "deforest.m"
                        transform_hlds__deforest__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_71_71, (MR_Integer) 4)));
#line 917 "deforest.m"
                        transform_hlds__deforest__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_71_71, (MR_Integer) 5)));
#line 917 "deforest.m"
                      }
#line 916 "deforest.m"
                  }
#line 916 "deforest.m"
                }
#line 916 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 916 "deforest.m"
                {
#line 916 "deforest.m"
                  transform_hlds__deforest__can_optimize_conj_6_p_0_2(transform_hlds__deforest__env_ptr);
                }
#line 916 "deforest.m"
            }
#line 912 "deforest.m"
          }
#line 912 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
#line 912 "deforest.m"
      }
#line 912 "deforest.m"
    else
#line 912 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
#line 912 "deforest.m"
  }
#line 912 "deforest.m"
}

#line 938 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_4(
#line 938 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 938 "deforest.m"
{
#line 938 "deforest.m"
  {
#line 938 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 938 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1, 1);
#line 938 "deforest.m"
  }
#line 938 "deforest.m"
}

#line 938 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_5(
#line 938 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 938 "deforest.m"
{
#line 938 "deforest.m"
  {
#line 938 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 944 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__InlinePromisedPure_50 = (MR_Integer) 0;
#line 945 "deforest.m"
    {
#line 945 "deforest.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredInfo_12, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CallerMarkers_51);
    }
#line 946 "deforest.m"
    {
#line 946 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = transform_hlds__inlining__can_inline_proc_6_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_97, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_98, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_42, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__InlinePromisedPure_50, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CallerMarkers_51);
    }
#line 946 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 946 "deforest.m"
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 946 "deforest.m"
      {
#line 946 "deforest.m"
        transform_hlds__deforest__can_optimize_conj_6_p_0_4(transform_hlds__deforest__env_ptr);
      }
#line 938 "deforest.m"
  }
#line 938 "deforest.m"
}

#line 938 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_6(
#line 938 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 938 "deforest.m"
{
#line 938 "deforest.m"
  {
#line 938 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 938 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1) == 0)
#line 938 "deforest.m"
      {
#line 933 "deforest.m"
        {
#line 933 "deforest.m"
          MR_Word transform_hlds__deforest__EarlierGoalExpr_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 0)));
#line 933 "deforest.m"
          MR_Word transform_hlds__deforest__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 1)));
#line 934 "deforest.m"
          MR_Word transform_hlds__deforest__V_41_41;
#line 934 "deforest.m"
          MR_Word transform_hlds__deforest__V_43_43;
#line 934 "deforest.m"
          MR_Word transform_hlds__deforest__V_44_44;

#line 934 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__EarlierGoalExpr_39)) == (MR_mktag((MR_Integer) 2)));
#line 934 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 934 "deforest.m"
            {
#line 934 "deforest.m"
              {
#line 934 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_39, (MR_Integer) 0)));
#line 934 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_98 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_39, (MR_Integer) 1)));
#line 934 "deforest.m"
                transform_hlds__deforest__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_39, (MR_Integer) 2)));
#line 934 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_39, (MR_Integer) 3)));
#line 934 "deforest.m"
                transform_hlds__deforest__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_39, (MR_Integer) 4)));
#line 934 "deforest.m"
                transform_hlds__deforest__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_39, (MR_Integer) 5)));
#line 934 "deforest.m"
              }
#line 933 "deforest.m"
              {
#line 933 "deforest.m"
                transform_hlds__deforest__can_optimize_conj_6_p_0_5(transform_hlds__deforest__env_ptr);
              }
#line 934 "deforest.m"
            }
#line 933 "deforest.m"
        }
#line 936 "deforest.m"
        {
#line 936 "deforest.m"
          MR_Word transform_hlds__deforest__LaterGoalExpr_45;
#line 936 "deforest.m"
          MR_Word transform_hlds__deforest__V_77_77;
#line 936 "deforest.m"
          MR_Word transform_hlds__deforest__V_46_46;
#line 937 "deforest.m"
          MR_Word transform_hlds__deforest__V_47_47;
#line 937 "deforest.m"
          MR_Word transform_hlds__deforest__V_48_48;
#line 937 "deforest.m"
          MR_Word transform_hlds__deforest__V_49_49;

#line 936 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
#line 936 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 936 "deforest.m"
            {
#line 936 "deforest.m"
              transform_hlds__deforest__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
#line 936 "deforest.m"
              {
#line 936 "deforest.m"
                transform_hlds__deforest__LaterGoalExpr_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_77_77, (MR_Integer) 0)));
#line 936 "deforest.m"
                transform_hlds__deforest__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_77_77, (MR_Integer) 1)));
#line 937 "deforest.m"
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__LaterGoalExpr_45)) == (MR_mktag((MR_Integer) 2)));
#line 937 "deforest.m"
                if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 937 "deforest.m"
                  {
#line 937 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_45, (MR_Integer) 0)));
#line 937 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_98 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_45, (MR_Integer) 1)));
#line 937 "deforest.m"
                    transform_hlds__deforest__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_45, (MR_Integer) 2)));
#line 937 "deforest.m"
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_45, (MR_Integer) 3)));
#line 937 "deforest.m"
                    transform_hlds__deforest__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_45, (MR_Integer) 4)));
#line 937 "deforest.m"
                    transform_hlds__deforest__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_45, (MR_Integer) 5)));
#line 937 "deforest.m"
                  }
#line 936 "deforest.m"
              }
#line 936 "deforest.m"
            }
#line 936 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 936 "deforest.m"
            {
#line 936 "deforest.m"
              transform_hlds__deforest__can_optimize_conj_6_p_0_5(transform_hlds__deforest__env_ptr);
            }
#line 936 "deforest.m"
        }
#line 938 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
#line 938 "deforest.m"
      }
#line 938 "deforest.m"
    else
#line 938 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
#line 938 "deforest.m"
  }
#line 938 "deforest.m"
}

#line 971 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_7(
#line 971 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 971 "deforest.m"
{
#line 971 "deforest.m"
  {
#line 971 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 971 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2, 1);
#line 971 "deforest.m"
  }
#line 971 "deforest.m"
}

#line 971 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_8(
#line 971 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 971 "deforest.m"
{
#line 971 "deforest.m"
  {
#line 971 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 971 "deforest.m"
    {
#line 972 "deforest.m"
      MR_Word transform_hlds__deforest__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_52, (MR_Integer) 0)));
#line 973 "deforest.m"
      MR_Word transform_hlds__deforest__V_86_86;

#line 972 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_52, (MR_Integer) 1)));
#line 973 "deforest.m"
      {
#line 973 "deforest.m"
        transform_hlds__deforest__V_86_86 = hlds__hlds_goal__goal_info_get_purity_1_f_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_54);
      }
#line 973 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (transform_hlds__deforest__V_86_86 == (MR_Integer) 0);
#line 973 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 973 "deforest.m"
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 973 "deforest.m"
        {
#line 973 "deforest.m"
          transform_hlds__deforest__can_optimize_conj_6_p_0_7(transform_hlds__deforest__env_ptr);
        }
#line 971 "deforest.m"
    }
#line 971 "deforest.m"
  }
#line 971 "deforest.m"
}

#line 968 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_9(
#line 968 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 968 "deforest.m"
{
#line 968 "deforest.m"
  {
#line 968 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 968 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_52 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_52);
#line 968 "deforest.m"
    {
#line 968 "deforest.m"
      transform_hlds__deforest__can_optimize_conj_6_p_0_8(transform_hlds__deforest__env_ptr);
    }
#line 968 "deforest.m"
  }
#line 968 "deforest.m"
}

#line 971 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_10(
#line 971 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 971 "deforest.m"
{
#line 971 "deforest.m"
  {
#line 971 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 971 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2) == 0)
#line 971 "deforest.m"
      {
#line 968 "deforest.m"
        {
#line 968 "deforest.m"
          {
#line 968 "deforest.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_52, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8, transform_hlds__deforest__can_optimize_conj_6_p_0_9, transform_hlds__deforest__env_ptr);
          }
#line 968 "deforest.m"
        }
#line 969 "deforest.m"
        {
#line 969 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_52 = (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7;
#line 969 "deforest.m"
          {
#line 969 "deforest.m"
            transform_hlds__deforest__can_optimize_conj_6_p_0_8(transform_hlds__deforest__env_ptr);
          }
#line 969 "deforest.m"
        }
#line 970 "deforest.m"
        {
#line 970 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
#line 970 "deforest.m"
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 970 "deforest.m"
            {
#line 970 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
#line 970 "deforest.m"
              {
#line 970 "deforest.m"
                transform_hlds__deforest__can_optimize_conj_6_p_0_8(transform_hlds__deforest__env_ptr);
              }
#line 970 "deforest.m"
            }
#line 970 "deforest.m"
        }
#line 971 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
#line 971 "deforest.m"
      }
#line 971 "deforest.m"
    else
#line 971 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
#line 971 "deforest.m"
  }
#line 971 "deforest.m"
}

#line 985 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_11(
#line 985 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 985 "deforest.m"
{
#line 985 "deforest.m"
  {
#line 985 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 985 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3, 1);
#line 985 "deforest.m"
  }
#line 985 "deforest.m"
}

#line 985 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_12(
#line 985 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 985 "deforest.m"
{
#line 985 "deforest.m"
  {
#line 985 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 992 "deforest.m"
    {
#line 992 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = hlds__goal_util__reordering_maintains_termination_old_4_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_55, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_56);
    }
#line 992 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 992 "deforest.m"
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 992 "deforest.m"
      {
#line 992 "deforest.m"
        transform_hlds__deforest__can_optimize_conj_6_p_0_11(transform_hlds__deforest__env_ptr);
      }
#line 985 "deforest.m"
  }
#line 985 "deforest.m"
}

#line 987 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_13(
#line 987 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 987 "deforest.m"
{
#line 987 "deforest.m"
  {
#line 987 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 987 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_56 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_56);
#line 987 "deforest.m"
    {
#line 987 "deforest.m"
      transform_hlds__deforest__can_optimize_conj_6_p_0_12(transform_hlds__deforest__env_ptr);
    }
#line 987 "deforest.m"
  }
#line 987 "deforest.m"
}

#line 985 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_14(
#line 985 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 985 "deforest.m"
{
#line 985 "deforest.m"
  {
#line 985 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 985 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3) == 0)
#line 985 "deforest.m"
      {
#line 985 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_20)) == (MR_mktag((MR_Integer) 1)));
#line 985 "deforest.m"
        if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 985 "deforest.m"
          {
#line 985 "deforest.m"
            (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_20, (MR_Integer) 0)));
#line 985 "deforest.m"
            {
#line 987 "deforest.m"
              {
#line 987 "deforest.m"
                {
#line 987 "deforest.m"
                  mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_56, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8, transform_hlds__deforest__can_optimize_conj_6_p_0_13, transform_hlds__deforest__env_ptr);
                }
#line 987 "deforest.m"
              }
#line 989 "deforest.m"
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
#line 989 "deforest.m"
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 989 "deforest.m"
                {
#line 989 "deforest.m"
                  (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
#line 989 "deforest.m"
                  {
#line 989 "deforest.m"
                    transform_hlds__deforest__can_optimize_conj_6_p_0_12(transform_hlds__deforest__env_ptr);
                  }
#line 989 "deforest.m"
                }
#line 985 "deforest.m"
            }
#line 985 "deforest.m"
          }
#line 985 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
#line 985 "deforest.m"
      }
#line 985 "deforest.m"
    else
#line 985 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
#line 985 "deforest.m"
  }
#line 985 "deforest.m"
}

#line 878 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0(
#line 878 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_7,
#line 878 "deforest.m"
  MR_Word transform_hlds__deforest__BetweenGoals_8,
#line 878 "deforest.m"
  MR_Word transform_hlds__deforest__MaybeLaterGoal_9,
#line 878 "deforest.m"
  MR_Word * transform_hlds__deforest__ShouldTry_10,
#line 878 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_58,
#line 878 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_59)
#line 878 "deforest.m"
{
#line 878 "deforest.m"
  {
#line 878 "deforest.m"
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s transform_hlds__deforest__env;

#line 878 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7 = transform_hlds__deforest__EarlierGoal_7;
#line 878 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8 = transform_hlds__deforest__BetweenGoals_8;
#line 878 "deforest.m"
    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9 = transform_hlds__deforest__MaybeLaterGoal_9;
#line 882 "deforest.m"
    {
#line 882 "deforest.m"
      MR_Integer transform_hlds__deforest__Depth0_13;
#line 882 "deforest.m"
      MR_Word transform_hlds__deforest__Globals_15;
#line 882 "deforest.m"
      MR_Word transform_hlds__deforest__DepthLimitOpt_16;
#line 882 "deforest.m"
      MR_Word transform_hlds__deforest__DebugPD_17;
#line 882 "deforest.m"
      MR_Integer transform_hlds__deforest__Depth_18;
#line 895 "deforest.m"
      MR_Integer transform_hlds__deforest__MaxDepth_21;

#line 883 "deforest.m"
      {
#line 883 "deforest.m"
        transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_58, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredInfo_12);
      }
#line 884 "deforest.m"
      {
#line 884 "deforest.m"
        transform_hlds__pd_info__pd_info_get_depth_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_58, &transform_hlds__deforest__Depth0_13);
      }
#line 885 "deforest.m"
      {
#line 885 "deforest.m"
        transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_58, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14);
      }
#line 886 "deforest.m"
      {
#line 886 "deforest.m"
        hlds__hlds_module__module_info_get_globals_2_p_0((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_14, &transform_hlds__deforest__Globals_15);
      }
#line 887 "deforest.m"
      {
#line 887 "deforest.m"
        libs__globals__lookup_option_3_p_0(transform_hlds__deforest__Globals_15, (MR_Integer) 383, &transform_hlds__deforest__DepthLimitOpt_16);
      }
#line 888 "deforest.m"
      {
#line 888 "deforest.m"
        libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_15, (MR_Integer) 72, &transform_hlds__deforest__DebugPD_17);
      }
#line 889 "deforest.m"
      transform_hlds__deforest__Depth_18 = (transform_hlds__deforest__Depth0_13 + (MR_Integer) 1);
#line 890 "deforest.m"
      {
#line 890 "deforest.m"
        transform_hlds__pd_info__pd_info_set_depth_3_p_0(transform_hlds__deforest__Depth_18, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_58, transform_hlds__deforest__STATE_VARIABLE_PDInfo_59);
      }
#line 891 "deforest.m"
      {
#line 891 "deforest.m"
        libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_15, (MR_Integer) 386, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_19);
      }
#line 893 "deforest.m"
      {
#line 893 "deforest.m"
        libs__globals__lookup_option_3_p_0(transform_hlds__deforest__Globals_15, (MR_Integer) 164, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_20);
      }
#line 895 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__DepthLimitOpt_16)) == (MR_mktag((MR_Integer) 2)));
#line 895 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 895 "deforest.m"
        {
#line 895 "deforest.m"
          transform_hlds__deforest__MaxDepth_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__DepthLimitOpt_16, (MR_Integer) 0)));
#line 896 "deforest.m"
          (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (transform_hlds__deforest__MaxDepth_21 == (MR_Integer) -1);
#line 896 "deforest.m"
          (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 895 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 897 "deforest.m"
            (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (transform_hlds__deforest__Depth0_13 >= transform_hlds__deforest__MaxDepth_21);
#line 895 "deforest.m"
        }
#line 906 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 905 "deforest.m"
        *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 906 "deforest.m"
      else
#line 930 "deforest.m"
        {
#line 912 "deforest.m"
          {
#line 912 "deforest.m"
            transform_hlds__deforest__can_optimize_conj_6_p_0_3(&transform_hlds__deforest__env);
          }
#line 930 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 928 "deforest.m"
            {
#line 927 "deforest.m"
              {
#line 927 "deforest.m"
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "goal too large\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 929 "deforest.m"
              *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 928 "deforest.m"
            }
#line 930 "deforest.m"
          else
#line 953 "deforest.m"
            {
#line 938 "deforest.m"
              {
#line 938 "deforest.m"
                transform_hlds__deforest__can_optimize_conj_6_p_0_6(&transform_hlds__deforest__env);
              }
#line 953 "deforest.m"
              if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 951 "deforest.m"
                {
#line 950 "deforest.m"
                  {
#line 950 "deforest.m"
                    transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "non-inlineable calls\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 952 "deforest.m"
                  *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 951 "deforest.m"
                }
#line 953 "deforest.m"
              else
#line 965 "deforest.m"
                {
#line 958 "deforest.m"
                  {
#line 958 "deforest.m"
                    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = transform_hlds__deforest__is_simple_goal_list_1_p_0((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8);
                  }
#line 958 "deforest.m"
                  (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
#line 965 "deforest.m"
                  if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 963 "deforest.m"
                    {
#line 961 "deforest.m"
                      {
#line 961 "deforest.m"
                        transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "between goals not simple enough\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                      }
#line 964 "deforest.m"
                      *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 963 "deforest.m"
                    }
#line 965 "deforest.m"
                  else
#line 980 "deforest.m"
                    {
#line 971 "deforest.m"
                      {
#line 971 "deforest.m"
                        transform_hlds__deforest__can_optimize_conj_6_p_0_10(&transform_hlds__deforest__env);
                      }
#line 980 "deforest.m"
                      if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 978 "deforest.m"
                        {
#line 976 "deforest.m"
                          {
#line 976 "deforest.m"
                            transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "goal list contains impure goal(s)\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                          }
#line 979 "deforest.m"
                          *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 978 "deforest.m"
                        }
#line 980 "deforest.m"
                      else
#line 1000 "deforest.m"
                        {
#line 985 "deforest.m"
                          {
#line 985 "deforest.m"
                            transform_hlds__deforest__can_optimize_conj_6_p_0_14(&transform_hlds__deforest__env);
                          }
#line 1000 "deforest.m"
                          if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
#line 998 "deforest.m"
                            {
#line 996 "deforest.m"
                              {
#line 996 "deforest.m"
                                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_17, (MR_String) "interleaving execution could change termination behaviour\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                              }
#line 999 "deforest.m"
                              *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
#line 998 "deforest.m"
                            }
#line 1000 "deforest.m"
                          else
#line 1001 "deforest.m"
                            *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 1;
#line 1000 "deforest.m"
                        }
#line 980 "deforest.m"
                    }
#line 965 "deforest.m"
                }
#line 953 "deforest.m"
            }
#line 930 "deforest.m"
        }
#line 882 "deforest.m"
    }
#line 878 "deforest.m"
  }
#line 878 "deforest.m"
}

#line 841 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_1(
#line 841 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 841 "deforest.m"
{
#line 841 "deforest.m"
  {
#line 841 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 841 "deforest.m"
    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0, 1);
#line 841 "deforest.m"
  }
#line 841 "deforest.m"
}

#line 841 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_2(
#line 841 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 841 "deforest.m"
{
#line 841 "deforest.m"
  {
#line 841 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 841 "deforest.m"
    {
#line 845 "deforest.m"
      MR_Word transform_hlds__deforest__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36, (MR_Integer) 0)));

#line 845 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36, (MR_Integer) 1)));
#line 846 "deforest.m"
      {
#line 846 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_39 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_38);
      }
#line 7256 "transform_hlds.deforest.c"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_66_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 847 "deforest.m"
      {
#line 847 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_40 = parse_tree__set_of_var__set_to_bitset_1_f_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_66_66, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_35);
      }
#line 848 "deforest.m"
      {
#line 848 "deforest.m"
        parse_tree__set_of_var__intersect_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_66_66, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_39, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_40, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_41);
      }
#line 849 "deforest.m"
      {
#line 849 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_66_66, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_41);
      }
#line 849 "deforest.m"
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 849 "deforest.m"
        {
#line 849 "deforest.m"
          transform_hlds__deforest__should_try_deforestation_4_p_0_1(transform_hlds__deforest__env_ptr);
        }
#line 841 "deforest.m"
    }
#line 841 "deforest.m"
  }
#line 841 "deforest.m"
}

#line 842 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_3(
#line 842 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 842 "deforest.m"
{
#line 842 "deforest.m"
  {
#line 842 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 842 "deforest.m"
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_36);
#line 842 "deforest.m"
    {
#line 842 "deforest.m"
      transform_hlds__deforest__should_try_deforestation_4_p_0_2(transform_hlds__deforest__env_ptr);
    }
#line 842 "deforest.m"
  }
#line 842 "deforest.m"
}

#line 841 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_4(
#line 841 "deforest.m"
  void * transform_hlds__deforest__env_ptr_arg)
#line 841 "deforest.m"
{
#line 841 "deforest.m"
  {
#line 841 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

#line 841 "deforest.m"
    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0) == 0)
#line 841 "deforest.m"
      {
#line 841 "deforest.m"
        {
#line 841 "deforest.m"
          MR_Word transform_hlds__deforest__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9, (MR_Integer) 0)));
#line 841 "deforest.m"
          MR_Word transform_hlds__deforest__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9, (MR_Integer) 1)));

#line 841 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9, (MR_Integer) 2)));
#line 842 "deforest.m"
          {
#line 842 "deforest.m"
            {
#line 842 "deforest.m"
              mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_36, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10, transform_hlds__deforest__should_try_deforestation_4_p_0_3, transform_hlds__deforest__env_ptr);
            }
#line 842 "deforest.m"
          }
#line 843 "deforest.m"
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36 = (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11;
#line 843 "deforest.m"
          {
#line 843 "deforest.m"
            transform_hlds__deforest__should_try_deforestation_4_p_0_2(transform_hlds__deforest__env_ptr);
          }
#line 841 "deforest.m"
        }
#line 841 "deforest.m"
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = MR_FALSE;
#line 841 "deforest.m"
      }
#line 841 "deforest.m"
    else
#line 841 "deforest.m"
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = MR_TRUE;
#line 841 "deforest.m"
  }
#line 841 "deforest.m"
}

#line 816 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0(
#line 816 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo_5,
#line 816 "deforest.m"
  MR_Word * transform_hlds__deforest__ShouldTry_6,
#line 816 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_47,
#line 816 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_48)
#line 816 "deforest.m"
{
#line 816 "deforest.m"
  {
#line 816 "deforest.m"
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s transform_hlds__deforest__env;

#line 819 "deforest.m"
    {
#line 819 "deforest.m"
      MR_Word transform_hlds__deforest__EarlierGoal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 0)));
#line 819 "deforest.m"
      MR_Word transform_hlds__deforest__UselessVersions_14;
#line 819 "deforest.m"
      MR_Word transform_hlds__deforest__ModuleInfo0_15;
#line 819 "deforest.m"
      MR_Word transform_hlds__deforest__Globals_16;
#line 820 "deforest.m"
      MR_Word transform_hlds__deforest__V_12_12;
#line 820 "deforest.m"
      MR_Word transform_hlds__deforest__V_13_13;
#line 825 "deforest.m"
      MR_Word transform_hlds__deforest__DebugPD_17;
#line 827 "deforest.m"
      MR_Word transform_hlds__deforest__TypeInfo_64_64;
#line 827 "deforest.m"
      MR_Word transform_hlds__deforest__PredId1_18;
#line 827 "deforest.m"
      MR_Integer transform_hlds__deforest__ProcId1_19;
#line 827 "deforest.m"
      MR_Word transform_hlds__deforest__PredId2_25;
#line 827 "deforest.m"
      MR_Integer transform_hlds__deforest__ProcId2_26;
#line 827 "deforest.m"
      MR_Word transform_hlds__deforest__V_50_50;
#line 827 "deforest.m"
      MR_Word transform_hlds__deforest__V_51_51;
#line 827 "deforest.m"
      MR_Word transform_hlds__deforest__V_52_52;
#line 827 "deforest.m"
      MR_Word transform_hlds__deforest__V_53_53;
#line 827 "deforest.m"
      MR_Word transform_hlds__deforest__V_54_54;
#line 827 "deforest.m"
      MR_Word transform_hlds__deforest__V_24_24;
#line 827 "deforest.m"
      MR_Word transform_hlds__deforest__V_20_20;
#line 827 "deforest.m"
      MR_Word transform_hlds__deforest__V_21_21;
#line 827 "deforest.m"
      MR_Word transform_hlds__deforest__V_22_22;
#line 827 "deforest.m"
      MR_Word transform_hlds__deforest__V_23_23;
#line 828 "deforest.m"
      MR_Word transform_hlds__deforest__V_31_31;
#line 828 "deforest.m"
      MR_Word transform_hlds__deforest__V_27_27;
#line 828 "deforest.m"
      MR_Word transform_hlds__deforest__V_28_28;
#line 828 "deforest.m"
      MR_Word transform_hlds__deforest__V_29_29;
#line 828 "deforest.m"
      MR_Word transform_hlds__deforest__V_30_30;

#line 820 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 1)));
#line 820 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 2)));
#line 820 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 3)));
#line 820 "deforest.m"
      transform_hlds__deforest__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 4)));
#line 820 "deforest.m"
      transform_hlds__deforest__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 5)));
#line 822 "deforest.m"
      {
#line 822 "deforest.m"
        transform_hlds__pd_info__pd_info_get_useless_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_47, &transform_hlds__deforest__UselessVersions_14);
      }
#line 823 "deforest.m"
      {
#line 823 "deforest.m"
        transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_47, &transform_hlds__deforest__ModuleInfo0_15);
      }
#line 824 "deforest.m"
      {
#line 824 "deforest.m"
        hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo0_15, &transform_hlds__deforest__Globals_16);
      }
#line 825 "deforest.m"
      {
#line 825 "deforest.m"
        libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_16, (MR_Integer) 72, &transform_hlds__deforest__DebugPD_17);
      }
#line 827 "deforest.m"
      transform_hlds__deforest__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_8, (MR_Integer) 0)));
#line 827 "deforest.m"
      transform_hlds__deforest__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_8, (MR_Integer) 1)));
#line 827 "deforest.m"
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_50_50)) == (MR_mktag((MR_Integer) 2)));
#line 827 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 827 "deforest.m"
        {
#line 827 "deforest.m"
          transform_hlds__deforest__PredId1_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_50_50, (MR_Integer) 0)));
#line 827 "deforest.m"
          transform_hlds__deforest__ProcId1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_50_50, (MR_Integer) 1)));
#line 827 "deforest.m"
          transform_hlds__deforest__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_50_50, (MR_Integer) 2)));
#line 827 "deforest.m"
          transform_hlds__deforest__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_50_50, (MR_Integer) 3)));
#line 827 "deforest.m"
          transform_hlds__deforest__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_50_50, (MR_Integer) 4)));
#line 827 "deforest.m"
          transform_hlds__deforest__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_50_50, (MR_Integer) 5)));
#line 828 "deforest.m"
          transform_hlds__deforest__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11, (MR_Integer) 0)));
#line 828 "deforest.m"
          transform_hlds__deforest__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11, (MR_Integer) 1)));
#line 828 "deforest.m"
          (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_51_51)) == (MR_mktag((MR_Integer) 2)));
#line 828 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 828 "deforest.m"
            {
#line 828 "deforest.m"
              transform_hlds__deforest__PredId2_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_51_51, (MR_Integer) 0)));
#line 828 "deforest.m"
              transform_hlds__deforest__ProcId2_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_51_51, (MR_Integer) 1)));
#line 828 "deforest.m"
              transform_hlds__deforest__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_51_51, (MR_Integer) 2)));
#line 828 "deforest.m"
              transform_hlds__deforest__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_51_51, (MR_Integer) 3)));
#line 828 "deforest.m"
              transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_51_51, (MR_Integer) 4)));
#line 828 "deforest.m"
              transform_hlds__deforest__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_51_51, (MR_Integer) 5)));
#line 7516 "transform_hlds.deforest.c"
              transform_hlds__deforest__TypeInfo_64_64 = (MR_Word) &transform_hlds__deforest_scalar_common_2[3];
#line 829 "deforest.m"
              {
#line 829 "deforest.m"
                transform_hlds__deforest__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 829 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_53_53, 0) = ((MR_Box) (transform_hlds__deforest__PredId1_18));
#line 829 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_53_53, 1) = ((MR_Box) (transform_hlds__deforest__ProcId1_19));
#line 829 "deforest.m"
              }
#line 829 "deforest.m"
              {
#line 829 "deforest.m"
                transform_hlds__deforest__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 829 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_54_54, 0) = ((MR_Box) (transform_hlds__deforest__PredId2_25));
#line 829 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_54_54, 1) = ((MR_Box) (transform_hlds__deforest__ProcId2_26));
#line 829 "deforest.m"
              }
#line 829 "deforest.m"
              {
#line 829 "deforest.m"
                transform_hlds__deforest__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 829 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_52_52, 0) = ((MR_Box) (transform_hlds__deforest__V_53_53));
#line 829 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_52_52, 1) = ((MR_Box) (transform_hlds__deforest__V_54_54));
#line 829 "deforest.m"
              }
#line 829 "deforest.m"
              {
#line 829 "deforest.m"
                (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = mercury__set__member_2_p_0(transform_hlds__deforest__TypeInfo_64_64, ((MR_Box) (transform_hlds__deforest__V_52_52)), transform_hlds__deforest__UselessVersions_14);
              }
#line 828 "deforest.m"
            }
#line 827 "deforest.m"
        }
#line 837 "deforest.m"
      if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 836 "deforest.m"
        *transform_hlds__deforest__ShouldTry_6 = (MR_Integer) 0;
#line 837 "deforest.m"
      else
#line 856 "deforest.m"
        {
#line 841 "deforest.m"
          {
#line 841 "deforest.m"
            transform_hlds__deforest__should_try_deforestation_4_p_0_4(&transform_hlds__deforest__env);
          }
#line 856 "deforest.m"
          if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 855 "deforest.m"
            *transform_hlds__deforest__ShouldTry_6 = (MR_Integer) 0;
#line 856 "deforest.m"
          else
#line 874 "deforest.m"
            {
#line 868 "deforest.m"
              MR_Word transform_hlds__deforest__EarlierGoalInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_8, (MR_Integer) 1)));
#line 868 "deforest.m"
              MR_Word transform_hlds__deforest__EarlierGoalDetism_44;
#line 868 "deforest.m"
              MR_Word transform_hlds__deforest__EarlierGoalMaxSolns_46;
#line 868 "deforest.m"
              MR_Word transform_hlds__deforest__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_8, (MR_Integer) 0)));
#line 868 "deforest.m"
              MR_Word transform_hlds__deforest__V_42_42;
#line 870 "deforest.m"
              MR_Word transform_hlds__deforest__V_45_45;

#line 868 "deforest.m"
              (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) transform_hlds__deforest__V_63_63)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_63_63, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 868 "deforest.m"
              if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 868 "deforest.m"
                {
#line 868 "deforest.m"
                  transform_hlds__deforest__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_63_63, (MR_Integer) 1)));
#line 869 "deforest.m"
                  {
#line 869 "deforest.m"
                    transform_hlds__deforest__EarlierGoalDetism_44 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__deforest__EarlierGoalInfo_43);
                  }
#line 870 "deforest.m"
                  {
#line 870 "deforest.m"
                    parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__deforest__EarlierGoalDetism_44, &transform_hlds__deforest__V_45_45, &transform_hlds__deforest__EarlierGoalMaxSolns_46);
                  }
#line 871 "deforest.m"
                  (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = (transform_hlds__deforest__EarlierGoalMaxSolns_46 == (MR_Integer) 3);
#line 871 "deforest.m"
                  (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded);
#line 868 "deforest.m"
                }
#line 874 "deforest.m"
              if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
#line 873 "deforest.m"
                *transform_hlds__deforest__ShouldTry_6 = (MR_Integer) 0;
#line 874 "deforest.m"
              else
#line 875 "deforest.m"
                *transform_hlds__deforest__ShouldTry_6 = (MR_Integer) 1;
#line 874 "deforest.m"
            }
#line 856 "deforest.m"
        }
#line 819 "deforest.m"
      *transform_hlds__deforest__STATE_VARIABLE_PDInfo_48 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_47;
#line 819 "deforest.m"
    }
#line 816 "deforest.m"
  }
#line 816 "deforest.m"
}

#line 793 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_2(
#line 793 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 793 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 793 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 793 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 793 "deforest.m"
{
#line 793 "deforest.m"
  {
#line 793 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 793 "deforest.m"
    MR_Word transform_hlds__deforest__conv2_HeadVar__3_3;

#line 793 "deforest.m"
    {
#line 793 "deforest.m"
      transform_hlds__pd_info__remove_version_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv2_HeadVar__3_3);
    }
#line 793 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv2_HeadVar__3_3));
#line 793 "deforest.m"
  }
#line 793 "deforest.m"
}

#line 680 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_1(
#line 680 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 680 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 680 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 680 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 680 "deforest.m"
{
#line 680 "deforest.m"
  {
#line 680 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 680 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_HeadVar__3_3;

#line 680 "deforest.m"
    {
#line 680 "deforest.m"
      transform_hlds__pd_info__pd_info_update_goal_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_HeadVar__3_3);
    }
#line 680 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__3_3));
#line 680 "deforest.m"
  }
#line 680 "deforest.m"
}

#line 653 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0(
#line 653 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_10,
#line 653 "deforest.m"
  MR_Word transform_hlds__deforest__DeforestInfo0_11,
#line 653 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82,
#line 653 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_83,
#line 653 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84,
#line 653 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85,
#line 653 "deforest.m"
  MR_Word * transform_hlds__deforest__Optimized_14,
#line 653 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86,
#line 653 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_87)
#line 653 "deforest.m"
{
#line 659 "deforest.m"
  {
#line 659 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_168_168;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_169_169;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__ModuleInfo_16;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_17;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__DebugPD_18;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__InstMap0_19;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__CreatedVersions0_20;
#line 659 "deforest.m"
    MR_Integer transform_hlds__deforest__Depth0_21;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__DeforestInfo_23;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__BeforeIrrelevant_24;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__AfterIrrelevant_25;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__ConjNonLocals_26;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__CurrPredProcId_27;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__Parents0_28;
#line 659 "deforest.m"
    MR_Integer transform_hlds__deforest__CostDelta0_29;
#line 659 "deforest.m"
    MR_Integer transform_hlds__deforest__SizeDelta0_30;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__EarlierGoal_31;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__BetweenGoals_33;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__LaterGoal_34;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__DeforestBranches_36;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__ShouldOptimize_37;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__Optimized0_38;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__Goals_39;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_135_135;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136;
#line 659 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151;
#line 668 "deforest.m"
    MR_Word transform_hlds__deforest__V_91_91;
#line 668 "deforest.m"
    MR_Word transform_hlds__deforest__V_93_93;
#line 680 "deforest.m"
    MR_Box transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_96_96;
#line 687 "deforest.m"
    MR_Word transform_hlds__deforest__V_32_32;
#line 687 "deforest.m"
    MR_Word transform_hlds__deforest__V_35_35;
#line 808 "deforest.m"
    MR_Word transform_hlds__deforest__V_154_154;
#line 808 "deforest.m"
    MR_Word transform_hlds__deforest__V_156_156;

#line 660 "deforest.m"
    {
#line 660 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__ModuleInfo_16);
    }
#line 661 "deforest.m"
    {
#line 661 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_16, &transform_hlds__deforest__Globals_17);
    }
#line 662 "deforest.m"
    {
#line 662 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_17, (MR_Integer) 72, &transform_hlds__deforest__DebugPD_18);
    }
#line 664 "deforest.m"
    {
#line 664 "deforest.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__InstMap0_19);
    }
#line 665 "deforest.m"
    {
#line 665 "deforest.m"
      transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__CreatedVersions0_20);
    }
#line 667 "deforest.m"
    {
#line 667 "deforest.m"
      transform_hlds__pd_info__pd_info_get_depth_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__Depth0_21);
    }
#line 670 "deforest.m"
    {
#line 670 "deforest.m"
      transform_hlds__deforest__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 670 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_93_93, 0) = ((MR_Box) (transform_hlds__deforest__Depth0_21));
#line 670 "deforest.m"
    }
#line 670 "deforest.m"
    {
#line 670 "deforest.m"
      transform_hlds__deforest__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_91_91, 0) = ((MR_Box) (transform_hlds__deforest__V_93_93));
#line 670 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "deforest.m"
    }
#line 669 "deforest.m"
    {
#line 669 "deforest.m"
      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "checking for deforestation at depth %i\n", transform_hlds__deforest__V_91_91);
    }
#line 673 "deforest.m"
    {
#line 673 "deforest.m"
      transform_hlds__deforest__reorder_conj_5_p_0(transform_hlds__deforest__DeforestInfo0_11, &transform_hlds__deforest__DeforestInfo_23, &transform_hlds__deforest__BeforeIrrelevant_24, &transform_hlds__deforest__AfterIrrelevant_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86);
    }
#line 676 "deforest.m"
    {
#line 676 "deforest.m"
      transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(transform_hlds__deforest__NonLocals_10, transform_hlds__deforest__DeforestInfo_23, transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82, transform_hlds__deforest__BeforeIrrelevant_24, transform_hlds__deforest__AfterIrrelevant_25, transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84, &transform_hlds__deforest__ConjNonLocals_26);
    }
#line 7863 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_168_168 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 7865 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_169_169 = (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0;
#line 680 "deforest.m"
    {
#line 680 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_168_168, transform_hlds__deforest__TypeCtorInfo_169_169, (MR_Word) &transform_hlds__deforest_scalar_common_2[9], transform_hlds__deforest__BeforeIrrelevant_24, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86)), &transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_96_96);
    }
#line 680 "deforest.m"
    transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96 = ((MR_Word) transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_96_96);
#line 682 "deforest.m"
    {
#line 682 "deforest.m"
      transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__CurrPredProcId_27);
    }
#line 683 "deforest.m"
    {
#line 683 "deforest.m"
      transform_hlds__pd_info__pd_info_get_parents_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__Parents0_28);
    }
#line 684 "deforest.m"
    {
#line 684 "deforest.m"
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__CostDelta0_29);
    }
#line 685 "deforest.m"
    {
#line 685 "deforest.m"
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__SizeDelta0_30);
    }
#line 687 "deforest.m"
    transform_hlds__deforest__EarlierGoal_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 0)));
#line 687 "deforest.m"
    transform_hlds__deforest__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 1)));
#line 687 "deforest.m"
    transform_hlds__deforest__BetweenGoals_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 2)));
#line 687 "deforest.m"
    transform_hlds__deforest__LaterGoal_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 3)));
#line 687 "deforest.m"
    transform_hlds__deforest__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 4)));
#line 687 "deforest.m"
    transform_hlds__deforest__DeforestBranches_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 5)));
#line 690 "deforest.m"
    {
#line 690 "deforest.m"
      transform_hlds__deforest__should_try_deforestation_4_p_0(transform_hlds__deforest__DeforestInfo_23, &transform_hlds__deforest__ShouldOptimize_37, transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
    }
#line 695 "deforest.m"
#line 695 "deforest.m"
    switch (transform_hlds__deforest__ShouldOptimize_37) {
#line 695 "deforest.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 695 "deforest.m"
      case (MR_Integer) 0:
#line 692 "deforest.m"
        {
#line 693 "deforest.m"
          transform_hlds__deforest__Optimized0_38 = (MR_Integer) 0;
#line 694 "deforest.m"
          transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 692 "deforest.m"
          transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 692 "deforest.m"
        }
#line 695 "deforest.m"
        break;
#line 695 "deforest.m"
      case (MR_Integer) 1:
#line 720 "deforest.m"
        {
#line 720 "deforest.m"
          MR_Word transform_hlds__deforest__PredId1_40;
#line 720 "deforest.m"
          MR_Word transform_hlds__deforest__PredId2_47;
#line 698 "deforest.m"
          MR_Word transform_hlds__deforest__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 0)));
#line 698 "deforest.m"
          MR_Word transform_hlds__deforest__V_99_99;
#line 698 "deforest.m"
          MR_Word transform_hlds__deforest__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 1)));
#line 698 "deforest.m"
          MR_Integer transform_hlds__deforest__V_41_41;
#line 698 "deforest.m"
          MR_Word transform_hlds__deforest__V_42_42;
#line 698 "deforest.m"
          MR_Word transform_hlds__deforest__V_43_43;
#line 698 "deforest.m"
          MR_Word transform_hlds__deforest__V_44_44;
#line 698 "deforest.m"
          MR_Word transform_hlds__deforest__V_45_45;
#line 699 "deforest.m"
          MR_Word transform_hlds__deforest__V_53_53;
#line 699 "deforest.m"
          MR_Integer transform_hlds__deforest__V_48_48;
#line 699 "deforest.m"
          MR_Word transform_hlds__deforest__V_49_49;
#line 699 "deforest.m"
          MR_Word transform_hlds__deforest__V_50_50;
#line 699 "deforest.m"
          MR_Word transform_hlds__deforest__V_51_51;
#line 699 "deforest.m"
          MR_Word transform_hlds__deforest__V_52_52;

#line 698 "deforest.m"
          transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_98_98)) == (MR_mktag((MR_Integer) 2)));
#line 698 "deforest.m"
          if (transform_hlds__deforest__succeeded)
#line 698 "deforest.m"
            {
#line 698 "deforest.m"
              transform_hlds__deforest__PredId1_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 0)));
#line 698 "deforest.m"
              transform_hlds__deforest__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 1)));
#line 698 "deforest.m"
              transform_hlds__deforest__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 2)));
#line 698 "deforest.m"
              transform_hlds__deforest__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 3)));
#line 698 "deforest.m"
              transform_hlds__deforest__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 4)));
#line 698 "deforest.m"
              transform_hlds__deforest__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_98_98, (MR_Integer) 5)));
#line 699 "deforest.m"
              transform_hlds__deforest__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 0)));
#line 699 "deforest.m"
              transform_hlds__deforest__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 1)));
#line 699 "deforest.m"
              transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_99_99)) == (MR_mktag((MR_Integer) 2)));
#line 699 "deforest.m"
              if (transform_hlds__deforest__succeeded)
#line 699 "deforest.m"
                {
#line 699 "deforest.m"
                  transform_hlds__deforest__PredId2_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 0)));
#line 699 "deforest.m"
                  transform_hlds__deforest__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 1)));
#line 699 "deforest.m"
                  transform_hlds__deforest__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 2)));
#line 699 "deforest.m"
                  transform_hlds__deforest__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 3)));
#line 699 "deforest.m"
                  transform_hlds__deforest__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 4)));
#line 699 "deforest.m"
                  transform_hlds__deforest__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_99_99, (MR_Integer) 5)));
#line 699 "deforest.m"
                }
#line 698 "deforest.m"
            }
#line 720 "deforest.m"
          if (transform_hlds__deforest__succeeded)
#line 703 "deforest.m"
            {
#line 703 "deforest.m"
              MR_String transform_hlds__deforest__PredName1_54;
#line 703 "deforest.m"
              MR_String transform_hlds__deforest__PredName2_55;
#line 703 "deforest.m"
              MR_Word transform_hlds__deforest__MaybeGoal_56;
#line 703 "deforest.m"
              MR_Word transform_hlds__deforest__V_108_108;
#line 705 "deforest.m"
              MR_Word transform_hlds__deforest__V_102_102;
#line 705 "deforest.m"
              MR_Word transform_hlds__deforest__V_104_104;
#line 705 "deforest.m"
              MR_Word transform_hlds__deforest__V_105_105;
#line 705 "deforest.m"
              MR_Word transform_hlds__deforest__V_106_106;

#line 703 "deforest.m"
              {
#line 703 "deforest.m"
                transform_hlds__deforest__PredName1_54 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__deforest__ModuleInfo_16, transform_hlds__deforest__PredId1_40);
              }
#line 704 "deforest.m"
              {
#line 704 "deforest.m"
                transform_hlds__deforest__PredName2_55 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__deforest__ModuleInfo_16, transform_hlds__deforest__PredId2_47);
              }
#line 707 "deforest.m"
              {
#line 707 "deforest.m"
                transform_hlds__deforest__V_104_104 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 707 "deforest.m"
                MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_104_104, 0) = ((MR_Box) (transform_hlds__deforest__PredName1_54));
#line 707 "deforest.m"
              }
#line 707 "deforest.m"
              {
#line 707 "deforest.m"
                transform_hlds__deforest__V_106_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 707 "deforest.m"
                MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_106_106, 0) = ((MR_Box) (transform_hlds__deforest__PredName2_55));
#line 707 "deforest.m"
              }
#line 707 "deforest.m"
              {
#line 707 "deforest.m"
                transform_hlds__deforest__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_105_105, 0) = ((MR_Box) (transform_hlds__deforest__V_106_106));
#line 707 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "deforest.m"
              }
#line 707 "deforest.m"
              {
#line 707 "deforest.m"
                transform_hlds__deforest__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_102_102, 0) = ((MR_Box) (transform_hlds__deforest__V_104_104));
#line 707 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_102_102, 1) = ((MR_Box) (transform_hlds__deforest__V_105_105));
#line 707 "deforest.m"
              }
#line 706 "deforest.m"
              {
#line 706 "deforest.m"
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "deforesting calls to %s and %s\n", transform_hlds__deforest__V_102_102);
              }
#line 710 "deforest.m"
              {
#line 710 "deforest.m"
                transform_hlds__deforest__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 710 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_108_108, 0) = ((MR_Box) (transform_hlds__deforest__LaterGoal_34));
#line 710 "deforest.m"
              }
#line 709 "deforest.m"
              {
#line 709 "deforest.m"
                transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(transform_hlds__deforest__EarlierGoal_31, transform_hlds__deforest__BetweenGoals_33, transform_hlds__deforest__V_108_108, &transform_hlds__deforest__MaybeGoal_56, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
              }
#line 715 "deforest.m"
              if ((transform_hlds__deforest__MaybeGoal_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 716 "deforest.m"
                {
#line 717 "deforest.m"
                  transform_hlds__deforest__Optimized0_38 = (MR_Integer) 0;
#line 718 "deforest.m"
                  transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 716 "deforest.m"
                }
#line 715 "deforest.m"
              else
#line 712 "deforest.m"
                {
#line 712 "deforest.m"
                  MR_Word transform_hlds__deforest__Goal_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeGoal_56, (MR_Integer) 0)));

#line 713 "deforest.m"
                  transform_hlds__deforest__Optimized0_38 = (MR_Integer) 1;
#line 714 "deforest.m"
                  {
#line 714 "deforest.m"
                    transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "deforest.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 0) = ((MR_Box) (transform_hlds__deforest__Goal_57));
#line 714 "deforest.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "deforest.m"
                  }
#line 712 "deforest.m"
                }
#line 703 "deforest.m"
            }
#line 720 "deforest.m"
          else
#line 743 "deforest.m"
            {
#line 743 "deforest.m"
              MR_Word transform_hlds__deforest__PredId_60;
#line 743 "deforest.m"
              MR_Word transform_hlds__deforest__PredProcId_67;
#line 725 "deforest.m"
              MR_Word transform_hlds__deforest__EarlierGoalExpr_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 0)));
#line 725 "deforest.m"
              MR_Integer transform_hlds__deforest__ProcId_61;
#line 725 "deforest.m"
              MR_Word transform_hlds__deforest__V_111_111;
#line 725 "deforest.m"
              MR_Word transform_hlds__deforest__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 1)));
#line 727 "deforest.m"
              MR_Word transform_hlds__deforest__V_66_66;
#line 727 "deforest.m"
              MR_Word transform_hlds__deforest__V_62_62;
#line 727 "deforest.m"
              MR_Word transform_hlds__deforest__V_63_63;
#line 727 "deforest.m"
              MR_Word transform_hlds__deforest__V_64_64;
#line 727 "deforest.m"
              MR_Word transform_hlds__deforest__V_65_65;
#line 730 "deforest.m"
              MR_Word transform_hlds__deforest__TypeCtorInfo_170_170;

#line 726 "deforest.m"
              {
#line 726 "deforest.m"
                transform_hlds__deforest__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__deforest__EarlierGoalExpr_58);
              }
#line 725 "deforest.m"
              if (transform_hlds__deforest__succeeded)
#line 725 "deforest.m"
                {
#line 727 "deforest.m"
                  transform_hlds__deforest__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 0)));
#line 727 "deforest.m"
                  transform_hlds__deforest__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 1)));
#line 727 "deforest.m"
                  transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_111_111)) == (MR_mktag((MR_Integer) 2)));
#line 727 "deforest.m"
                  if (transform_hlds__deforest__succeeded)
#line 727 "deforest.m"
                    {
#line 727 "deforest.m"
                      transform_hlds__deforest__PredId_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 0)));
#line 727 "deforest.m"
                      transform_hlds__deforest__ProcId_61 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 1)));
#line 727 "deforest.m"
                      transform_hlds__deforest__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 2)));
#line 727 "deforest.m"
                      transform_hlds__deforest__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 3)));
#line 727 "deforest.m"
                      transform_hlds__deforest__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 4)));
#line 727 "deforest.m"
                      transform_hlds__deforest__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_111_111, (MR_Integer) 5)));
#line 728 "deforest.m"
                      {
#line 728 "deforest.m"
                        transform_hlds__deforest__PredProcId_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 728 "deforest.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__deforest__PredProcId_67, 0) = ((MR_Box) (transform_hlds__deforest__PredId_60));
#line 728 "deforest.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__deforest__PredProcId_67, 1) = ((MR_Box) (transform_hlds__deforest__ProcId_61));
#line 728 "deforest.m"
                      }
#line 729 "deforest.m"
                      {
#line 729 "deforest.m"
                        transform_hlds__deforest__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__deforest__PredProcId_67, transform_hlds__deforest__CurrPredProcId_27);
                      }
#line 729 "deforest.m"
                      transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 725 "deforest.m"
                      if (transform_hlds__deforest__succeeded)
#line 725 "deforest.m"
                        {
#line 8210 "transform_hlds.deforest.c"
                          transform_hlds__deforest__TypeCtorInfo_170_170 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 730 "deforest.m"
                          {
#line 730 "deforest.m"
                            transform_hlds__deforest__succeeded = mercury__set__member_2_p_0(transform_hlds__deforest__TypeCtorInfo_170_170, ((MR_Box) (transform_hlds__deforest__PredProcId_67)), transform_hlds__deforest__Parents0_28);
                          }
#line 730 "deforest.m"
                          transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 725 "deforest.m"
                        }
#line 727 "deforest.m"
                    }
#line 725 "deforest.m"
                }
#line 743 "deforest.m"
              if (transform_hlds__deforest__succeeded)
#line 732 "deforest.m"
                {
#line 732 "deforest.m"
                  MR_String transform_hlds__deforest__CurrPredName_68;
#line 732 "deforest.m"
                  MR_Word transform_hlds__deforest__Parents_69;
#line 732 "deforest.m"
                  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_119_119;
#line 732 "deforest.m"
                  MR_Word transform_hlds__deforest__Goal_159;
#line 733 "deforest.m"
                  MR_Word transform_hlds__deforest__V_114_114;
#line 733 "deforest.m"
                  MR_Word transform_hlds__deforest__V_116_116;

#line 732 "deforest.m"
                  {
#line 732 "deforest.m"
                    transform_hlds__deforest__CurrPredName_68 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__deforest__ModuleInfo_16, transform_hlds__deforest__PredId_60);
                  }
#line 735 "deforest.m"
                  {
#line 735 "deforest.m"
                    transform_hlds__deforest__V_116_116 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 735 "deforest.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_116_116, 0) = ((MR_Box) (transform_hlds__deforest__CurrPredName_68));
#line 735 "deforest.m"
                  }
#line 735 "deforest.m"
                  {
#line 735 "deforest.m"
                    transform_hlds__deforest__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "deforest.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_114_114, 0) = ((MR_Box) (transform_hlds__deforest__V_116_116));
#line 735 "deforest.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 735 "deforest.m"
                  }
#line 734 "deforest.m"
                  {
#line 734 "deforest.m"
                    transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Pushing call to %s into goal\n", transform_hlds__deforest__V_114_114);
                  }
#line 737 "deforest.m"
                  {
#line 737 "deforest.m"
                    mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__deforest__PredProcId_67)), transform_hlds__deforest__Parents0_28, &transform_hlds__deforest__Parents_69);
                  }
#line 738 "deforest.m"
                  {
#line 738 "deforest.m"
                    transform_hlds__pd_info__pd_info_set_parents_3_p_0(transform_hlds__deforest__Parents_69, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_119_119);
                  }
#line 739 "deforest.m"
                  {
#line 739 "deforest.m"
                    transform_hlds__deforest__push_goal_into_goal_8_p_0(transform_hlds__deforest__ConjNonLocals_26, transform_hlds__deforest__DeforestBranches_36, transform_hlds__deforest__EarlierGoal_31, transform_hlds__deforest__BetweenGoals_33, transform_hlds__deforest__LaterGoal_34, &transform_hlds__deforest__Goal_159, transform_hlds__deforest__STATE_VARIABLE_PDInfo_119_119, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
                  }
#line 741 "deforest.m"
                  {
#line 741 "deforest.m"
                    transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "deforest.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 0) = ((MR_Box) (transform_hlds__deforest__Goal_159));
#line 741 "deforest.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 741 "deforest.m"
                  }
#line 742 "deforest.m"
                  transform_hlds__deforest__Optimized0_38 = (MR_Integer) 1;
#line 732 "deforest.m"
                }
#line 743 "deforest.m"
              else
#line 763 "deforest.m"
                {
#line 746 "deforest.m"
                  MR_Word transform_hlds__deforest__LaterGoalExpr_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 0)));
#line 746 "deforest.m"
                  MR_Word transform_hlds__deforest__EarlierGoalExpr_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 0)));
#line 746 "deforest.m"
                  MR_Word transform_hlds__deforest__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 1)));
#line 747 "deforest.m"
                  MR_Word transform_hlds__deforest__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 1)));

#line 748 "deforest.m"
                  {
#line 748 "deforest.m"
                    transform_hlds__deforest__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__deforest__EarlierGoalExpr_160);
                  }
#line 746 "deforest.m"
                  if (transform_hlds__deforest__succeeded)
#line 749 "deforest.m"
                    {
#line 749 "deforest.m"
                      transform_hlds__deforest__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__deforest__LaterGoalExpr_71);
                    }
#line 763 "deforest.m"
                  if (transform_hlds__deforest__succeeded)
#line 753 "deforest.m"
                    {
#line 753 "deforest.m"
                      MR_Integer transform_hlds__deforest__ConjSize1_73;
#line 753 "deforest.m"
                      MR_Integer transform_hlds__deforest__ConjSize2_74;
#line 753 "deforest.m"
                      MR_Integer transform_hlds__deforest__NewSize_75;
#line 753 "deforest.m"
                      MR_Integer transform_hlds__deforest__SizeDiff_76;
#line 753 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126;
#line 753 "deforest.m"
                      MR_Word transform_hlds__deforest__V_128_128;
#line 753 "deforest.m"
                      MR_Integer transform_hlds__deforest__V_129_129;
#line 753 "deforest.m"
                      MR_Word transform_hlds__deforest__Goal_161;

#line 752 "deforest.m"
                      {
#line 752 "deforest.m"
                        transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Pushing goal into goal\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                      }
#line 754 "deforest.m"
                      {
#line 754 "deforest.m"
                        transform_hlds__deforest__push_goal_into_goal_8_p_0(transform_hlds__deforest__ConjNonLocals_26, transform_hlds__deforest__DeforestBranches_36, transform_hlds__deforest__EarlierGoal_31, transform_hlds__deforest__BetweenGoals_33, transform_hlds__deforest__LaterGoal_34, &transform_hlds__deforest__Goal_161, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126);
                      }
#line 756 "deforest.m"
                      {
#line 756 "deforest.m"
                        transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "deforest.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 0) = ((MR_Box) (transform_hlds__deforest__Goal_161));
#line 756 "deforest.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 756 "deforest.m"
                      }
#line 757 "deforest.m"
                      {
#line 757 "deforest.m"
                        transform_hlds__deforest__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "deforest.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_128_128, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_31));
#line 757 "deforest.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_128_128, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_33));
#line 757 "deforest.m"
                      }
#line 757 "deforest.m"
                      {
#line 757 "deforest.m"
                        hlds__goal_util__goals_size_2_p_0(transform_hlds__deforest__V_128_128, &transform_hlds__deforest__ConjSize1_73);
                      }
#line 758 "deforest.m"
                      {
#line 758 "deforest.m"
                        hlds__goal_util__goal_size_2_p_0(transform_hlds__deforest__LaterGoal_34, &transform_hlds__deforest__ConjSize2_74);
                      }
#line 759 "deforest.m"
                      {
#line 759 "deforest.m"
                        hlds__goal_util__goal_size_2_p_0(transform_hlds__deforest__Goal_161, &transform_hlds__deforest__NewSize_75);
                      }
#line 760 "deforest.m"
                      transform_hlds__deforest__V_129_129 = (transform_hlds__deforest__NewSize_75 - transform_hlds__deforest__ConjSize1_73);
#line 760 "deforest.m"
                      transform_hlds__deforest__SizeDiff_76 = (transform_hlds__deforest__V_129_129 - transform_hlds__deforest__ConjSize2_74);
#line 761 "deforest.m"
                      {
#line 761 "deforest.m"
                        transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(transform_hlds__deforest__SizeDiff_76, transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
                      }
#line 762 "deforest.m"
                      transform_hlds__deforest__Optimized0_38 = (MR_Integer) 1;
#line 753 "deforest.m"
                    }
#line 763 "deforest.m"
                  else
#line 766 "deforest.m"
                    {
#line 765 "deforest.m"
                      {
#line 765 "deforest.m"
                        transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "not optimizing\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                      }
#line 767 "deforest.m"
                      transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 768 "deforest.m"
                      transform_hlds__deforest__Optimized0_38 = (MR_Integer) 0;
#line 766 "deforest.m"
                      transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
#line 766 "deforest.m"
                    }
#line 763 "deforest.m"
                }
#line 743 "deforest.m"
            }
#line 720 "deforest.m"
        }
#line 695 "deforest.m"
        break;
#line 695 "deforest.m"
    }
#line 771 "deforest.m"
    {
#line 771 "deforest.m"
      *transform_hlds__deforest__Optimized_14 = transform_hlds__deforest__is_improvement_worth_while_4_f_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109, transform_hlds__deforest__Optimized0_38, transform_hlds__deforest__CostDelta0_29, transform_hlds__deforest__SizeDelta0_30);
    }
#line 775 "deforest.m"
    {
#line 775 "deforest.m"
      transform_hlds__pd_info__pd_info_set_depth_3_p_0(transform_hlds__deforest__Depth0_21, transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_135_135);
    }
#line 776 "deforest.m"
    {
#line 776 "deforest.m"
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_PDInfo_135_135, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136);
    }
#line 796 "deforest.m"
#line 796 "deforest.m"
    switch (*transform_hlds__deforest__Optimized_14) {
#line 796 "deforest.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 796 "deforest.m"
      case (MR_Integer) 0:
#line 778 "deforest.m"
        {
#line 778 "deforest.m"
          MR_Word transform_hlds__deforest__TypeCtorInfo_172_172;
#line 778 "deforest.m"
          MR_Word transform_hlds__deforest__CreatedVersions_77;
#line 778 "deforest.m"
          MR_Word transform_hlds__deforest__NewVersions0_78;
#line 778 "deforest.m"
          MR_Word transform_hlds__deforest__NewVersions_79;
#line 778 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_148_148;
#line 778 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149;
#line 793 "deforest.m"
          MR_Box transform_hlds__deforest__conv3_STATE_VARIABLE_PDInfo_151_151;

#line 786 "deforest.m"
          {
#line 786 "deforest.m"
            transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(transform_hlds__deforest__CostDelta0_29, transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_148_148);
          }
#line 787 "deforest.m"
          {
#line 787 "deforest.m"
            transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(transform_hlds__deforest__SizeDelta0_30, transform_hlds__deforest__STATE_VARIABLE_PDInfo_148_148, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149);
          }
#line 790 "deforest.m"
          {
#line 790 "deforest.m"
            transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149, &transform_hlds__deforest__CreatedVersions_77);
          }
#line 8484 "transform_hlds.deforest.c"
          transform_hlds__deforest__TypeCtorInfo_172_172 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 791 "deforest.m"
          {
#line 791 "deforest.m"
            mercury__set__difference_3_p_0(transform_hlds__deforest__TypeCtorInfo_172_172, transform_hlds__deforest__CreatedVersions_77, transform_hlds__deforest__CreatedVersions0_20, &transform_hlds__deforest__NewVersions0_78);
          }
#line 792 "deforest.m"
          {
#line 792 "deforest.m"
            mercury__set__to_sorted_list_2_p_0(transform_hlds__deforest__TypeCtorInfo_172_172, transform_hlds__deforest__NewVersions0_78, &transform_hlds__deforest__NewVersions_79);
          }
#line 793 "deforest.m"
          {
#line 793 "deforest.m"
            mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_172_172, transform_hlds__deforest__TypeCtorInfo_169_169, (MR_Word) &transform_hlds__deforest_scalar_common_2[10], transform_hlds__deforest__NewVersions_79, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149)), &transform_hlds__deforest__conv3_STATE_VARIABLE_PDInfo_151_151);
          }
#line 793 "deforest.m"
          transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151 = ((MR_Word) transform_hlds__deforest__conv3_STATE_VARIABLE_PDInfo_151_151);
#line 778 "deforest.m"
          *transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85 = transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84;
#line 778 "deforest.m"
        }
#line 796 "deforest.m"
        break;
#line 796 "deforest.m"
      case (MR_Integer) 1:
#line 797 "deforest.m"
        {
#line 797 "deforest.m"
          MR_Word transform_hlds__deforest__GoalsToProcess_80;
#line 797 "deforest.m"
          MR_Word transform_hlds__deforest__GoalsAndInfo_81;
#line 797 "deforest.m"
          MR_Word transform_hlds__deforest__V_137_137;
#line 797 "deforest.m"
          MR_Word transform_hlds__deforest__V_138_138;
#line 797 "deforest.m"
          MR_Word transform_hlds__deforest__V_139_139;
#line 797 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_141_141;
#line 797 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_143_143;
#line 797 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_145_145;

#line 800 "deforest.m"
          {
#line 800 "deforest.m"
            transform_hlds__deforest__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_139_139, 0) = ((MR_Box) (transform_hlds__deforest__AfterIrrelevant_25));
#line 800 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 800 "deforest.m"
          }
#line 800 "deforest.m"
          {
#line 800 "deforest.m"
            transform_hlds__deforest__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_138_138, 0) = ((MR_Box) (transform_hlds__deforest__Goals_39));
#line 800 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_138_138, 1) = ((MR_Box) (transform_hlds__deforest__V_139_139));
#line 800 "deforest.m"
          }
#line 800 "deforest.m"
          {
#line 800 "deforest.m"
            transform_hlds__deforest__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_137_137, 0) = ((MR_Box) (transform_hlds__deforest__BeforeIrrelevant_24));
#line 800 "deforest.m"
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_137_137, 1) = ((MR_Box) (transform_hlds__deforest__V_138_138));
#line 800 "deforest.m"
          }
#line 800 "deforest.m"
          {
#line 800 "deforest.m"
            mercury__list__condense_2_p_0(transform_hlds__deforest__TypeCtorInfo_168_168, transform_hlds__deforest__V_137_137, &transform_hlds__deforest__GoalsToProcess_80);
          }
#line 802 "deforest.m"
          {
#line 802 "deforest.m"
            transform_hlds__deforest__compute_goal_infos_4_p_0(transform_hlds__deforest__GoalsToProcess_80, &transform_hlds__deforest__GoalsAndInfo_81, transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_141_141);
          }
#line 803 "deforest.m"
          {
#line 803 "deforest.m"
            mercury__list__append_3_p_1((MR_Word) &transform_hlds__deforest_scalar_common_2[1], transform_hlds__deforest__GoalsAndInfo_81, transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84, transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85);
          }
#line 804 "deforest.m"
          {
#line 804 "deforest.m"
            transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_PDInfo_141_141, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_143_143);
          }
#line 805 "deforest.m"
          {
#line 805 "deforest.m"
            transform_hlds__pd_info__pd_info_set_changed_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_143_143, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_145_145);
          }
#line 806 "deforest.m"
          {
#line 806 "deforest.m"
            transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_145_145, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151);
          }
#line 797 "deforest.m"
        }
#line 796 "deforest.m"
        break;
#line 796 "deforest.m"
    }
#line 810 "deforest.m"
    {
#line 810 "deforest.m"
      transform_hlds__deforest__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 810 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_156_156, 0) = ((MR_Box) (transform_hlds__deforest__Depth0_21));
#line 810 "deforest.m"
    }
#line 810 "deforest.m"
    {
#line 810 "deforest.m"
      transform_hlds__deforest__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_154_154, 0) = ((MR_Box) (transform_hlds__deforest__V_156_156));
#line 810 "deforest.m"
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 810 "deforest.m"
    }
#line 809 "deforest.m"
    {
#line 809 "deforest.m"
      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "finished deforestation at depth %i\n", transform_hlds__deforest__V_154_154);
    }
#line 812 "deforest.m"
    {
#line 812 "deforest.m"
      transform_hlds__pd_info__pd_info_set_parents_3_p_0(transform_hlds__deforest__Parents0_28, transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151, transform_hlds__deforest__STATE_VARIABLE_PDInfo_87);
    }
#line 659 "deforest.m"
    *transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_83 = transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82;
#line 659 "deforest.m"
  }
#line 653 "deforest.m"
}

#line 640 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0_1(
#line 640 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 640 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 640 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 640 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 640 "deforest.m"
{
#line 640 "deforest.m"
  {
#line 640 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 640 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_LambdaHeadVar__3_24;

#line 640 "deforest.m"
    {
#line 640 "deforest.m"
      transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__640__1_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_LambdaHeadVar__3_24);
    }
#line 640 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_LambdaHeadVar__3_24));
#line 640 "deforest.m"
  }
#line 640 "deforest.m"
}

#line 601 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0(
#line 601 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierGoal_7,
#line 601 "deforest.m"
  MR_Word transform_hlds__deforest__EarlierBranchInfo_8,
#line 601 "deforest.m"
  MR_Word transform_hlds__deforest__RevBetweenGoals0_9,
#line 601 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__4_4,
#line 601 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_12,
#line 601 "deforest.m"
  MR_Word * transform_hlds__deforest__DeforestInfo_13)
#line 601 "deforest.m"
{
#line 607 "deforest.m"
  while (MR_TRUE)
#line 607 "deforest.m"
    {
#line 607 "deforest.m"
      /* tailcall optimized into a loop */
#line 607 "deforest.m"
      {
#line 607 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 607 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_10;
#line 607 "deforest.m"
        MR_Word transform_hlds__deforest__Goals0_11;
#line 618 "deforest.m"
        MR_Word transform_hlds__deforest__LaterGoal_14;
#line 618 "deforest.m"
        MR_Word transform_hlds__deforest__LaterBranchInfo_15;
#line 618 "deforest.m"
        MR_Word transform_hlds__deforest__DeforestBranches_16;
#line 609 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_28_48;
#line 609 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_29_49;
#line 609 "deforest.m"
        MR_Word transform_hlds__deforest__TypeCtorInfo_31_51;
#line 609 "deforest.m"
        MR_Word transform_hlds__deforest__TypeInfo_32_52;
#line 609 "deforest.m"
        MR_Word transform_hlds__deforest__V_19_19;
#line 609 "deforest.m"
        MR_Word transform_hlds__deforest__VarMap1_27;
#line 609 "deforest.m"
        MR_Word transform_hlds__deforest__LeftVars2_31;
#line 609 "deforest.m"
        MR_Word transform_hlds__deforest__VarMap_33;
#line 609 "deforest.m"
        MR_Word transform_hlds__deforest__VarAssoc_34;
#line 609 "deforest.m"
        MR_Word transform_hlds__deforest__GetBranches_35;
#line 609 "deforest.m"
        MR_Word transform_hlds__deforest__DeforestBranches0_41;
#line 631 "deforest.m"
        MR_Word transform_hlds__deforest__V_28_28;
#line 631 "deforest.m"
        MR_Word transform_hlds__deforest__V_29_29;
#line 632 "deforest.m"
        MR_Word transform_hlds__deforest__V_30_30;
#line 632 "deforest.m"
        MR_Word transform_hlds__deforest__V_32_32;
#line 646 "deforest.m"
        MR_Box transform_hlds__deforest__conv1_DeforestBranches_16;

#line 607 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 607 "deforest.m"
          {
#line 607 "deforest.m"
            transform_hlds__deforest__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 0)));
#line 607 "deforest.m"
            transform_hlds__deforest__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 1)));
#line 609 "deforest.m"
            transform_hlds__deforest__LaterGoal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, (MR_Integer) 0)));
#line 609 "deforest.m"
            transform_hlds__deforest__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, (MR_Integer) 1)));
#line 609 "deforest.m"
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 609 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 609 "deforest.m"
              {
#line 609 "deforest.m"
                transform_hlds__deforest__LaterBranchInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_19_19, (MR_Integer) 0)));
#line 631 "deforest.m"
                transform_hlds__deforest__VarMap1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierBranchInfo_8, (MR_Integer) 0)));
#line 631 "deforest.m"
                transform_hlds__deforest__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierBranchInfo_8, (MR_Integer) 1)));
#line 631 "deforest.m"
                transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierBranchInfo_8, (MR_Integer) 2)));
#line 632 "deforest.m"
                transform_hlds__deforest__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterBranchInfo_15, (MR_Integer) 0)));
#line 632 "deforest.m"
                transform_hlds__deforest__LeftVars2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterBranchInfo_15, (MR_Integer) 1)));
#line 632 "deforest.m"
                transform_hlds__deforest__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterBranchInfo_15, (MR_Integer) 2)));
#line 8765 "transform_hlds.deforest.c"
                transform_hlds__deforest__TypeInfo_28_48 = (MR_Word) &transform_hlds__deforest_scalar_common_1[1];
#line 8767 "transform_hlds.deforest.c"
                transform_hlds__deforest__TypeInfo_29_49 = (MR_Word) &transform_hlds__deforest_scalar_common_1[4];
#line 634 "deforest.m"
                {
#line 634 "deforest.m"
                  mercury__map__select_3_p_0(transform_hlds__deforest__TypeInfo_28_48, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__VarMap1_27, transform_hlds__deforest__LeftVars2_31, &transform_hlds__deforest__VarMap_33);
                }
#line 635 "deforest.m"
                {
#line 635 "deforest.m"
                  mercury__map__to_assoc_list_2_p_0(transform_hlds__deforest__TypeInfo_28_48, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__VarMap_33, &transform_hlds__deforest__VarAssoc_34);
                }
#line 636 "deforest.m"
                {
#line 636 "deforest.m"
                  transform_hlds__deforest__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__deforest__TypeInfo_28_48, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__VarMap_33);
                }
#line 636 "deforest.m"
                transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 609 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 609 "deforest.m"
                  {
#line 640 "deforest.m"
                    transform_hlds__deforest__GetBranches_35 = (MR_Word) &transform_hlds__deforest_scalar_common_2[8];
#line 8792 "transform_hlds.deforest.c"
                    transform_hlds__deforest__TypeCtorInfo_31_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 645 "deforest.m"
                    {
#line 645 "deforest.m"
                      mercury__set__init_1_p_0(transform_hlds__deforest__TypeCtorInfo_31_51, &transform_hlds__deforest__DeforestBranches0_41);
                    }
#line 8799 "transform_hlds.deforest.c"
                    transform_hlds__deforest__TypeInfo_32_52 = (MR_Word) &transform_hlds__deforest_scalar_common_2[2];
#line 646 "deforest.m"
                    {
#line 646 "deforest.m"
                      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeInfo_32_52, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__GetBranches_35, transform_hlds__deforest__VarAssoc_34, ((MR_Box) (transform_hlds__deforest__DeforestBranches0_41)), &transform_hlds__deforest__conv1_DeforestBranches_16);
                    }
#line 646 "deforest.m"
                    transform_hlds__deforest__DeforestBranches_16 = ((MR_Word) transform_hlds__deforest__conv1_DeforestBranches_16);
#line 646 "deforest.m"
                    transform_hlds__deforest__succeeded = MR_TRUE;
#line 609 "deforest.m"
                  }
#line 609 "deforest.m"
              }
#line 618 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 613 "deforest.m"
              {
#line 613 "deforest.m"
                MR_Word transform_hlds__deforest__BetweenGoals1_17;
#line 613 "deforest.m"
                MR_Word transform_hlds__deforest__BetweenGoals_18;

#line 613 "deforest.m"
                {
#line 613 "deforest.m"
                  mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__deforest_scalar_common_2[1], transform_hlds__deforest__RevBetweenGoals0_9, &transform_hlds__deforest__BetweenGoals1_17);
                }
#line 614 "deforest.m"
                {
#line 614 "deforest.m"
                  mercury__assoc_list__keys_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[3], transform_hlds__deforest__BetweenGoals1_17, &transform_hlds__deforest__BetweenGoals_18);
                }
#line 615 "deforest.m"
                *transform_hlds__deforest__Goals_12 = transform_hlds__deforest__Goals0_11;
#line 616 "deforest.m"
                {
#line 616 "deforest.m"
                  MR_Word base;
#line 616 "deforest.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 616 "deforest.m"
                  *transform_hlds__deforest__DeforestInfo_13 = base;
#line 616 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_7));
#line 616 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__EarlierBranchInfo_8));
#line 616 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_18));
#line 616 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__deforest__LaterGoal_14));
#line 616 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__deforest__LaterBranchInfo_15));
#line 616 "deforest.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__deforest__DeforestBranches_16));
#line 616 "deforest.m"
                }
#line 613 "deforest.m"
                transform_hlds__deforest__succeeded = MR_TRUE;
#line 613 "deforest.m"
              }
#line 618 "deforest.m"
            else
#line 619 "deforest.m"
              {
#line 619 "deforest.m"
                MR_Word transform_hlds__deforest__V_20_20;

#line 620 "deforest.m"
                {
#line 620 "deforest.m"
                  transform_hlds__deforest__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_20_20, 0) = ((MR_Box) (transform_hlds__deforest__Goal_10));
#line 620 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_20_20, 1) = ((MR_Box) (transform_hlds__deforest__RevBetweenGoals0_9));
#line 620 "deforest.m"
                }
#line 619 "deforest.m"
                /* direct tailcall eliminated */
#line 619 "deforest.m"
                {
#line 619 "deforest.m"
                  MR_Word transform_hlds__deforest__RevBetweenGoals0__tmp_copy_9 = transform_hlds__deforest__V_20_20;
#line 619 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__4__tmp_copy_4 = transform_hlds__deforest__Goals0_11;

#line 619 "deforest.m"
                  transform_hlds__deforest__HeadVar__4_4 = transform_hlds__deforest__HeadVar__4__tmp_copy_4;
#line 619 "deforest.m"
                  transform_hlds__deforest__RevBetweenGoals0_9 = transform_hlds__deforest__RevBetweenGoals0__tmp_copy_9;
#line 619 "deforest.m"
                }
#line 619 "deforest.m"
                continue;
#line 619 "deforest.m"
              }
#line 607 "deforest.m"
          }
#line 607 "deforest.m"
        return transform_hlds__deforest__succeeded;
#line 607 "deforest.m"
      }
#line 607 "deforest.m"
      break;
#line 607 "deforest.m"
    }
#line 601 "deforest.m"
}

#line 542 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_conj_6_p_0(
#line 542 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 542 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_2,
#line 542 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3,
#line 542 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__4_4,
#line 542 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
#line 542 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6)
#line 542 "deforest.m"
{
#line 546 "deforest.m"
  while (MR_TRUE)
#line 546 "deforest.m"
    {
#line 546 "deforest.m"
      /* tailcall optimized into a loop */
#line 546 "deforest.m"
      {
#line 546 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;

#line 546 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 546 "deforest.m"
          {
#line 547 "deforest.m"
            {
#line 547 "deforest.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__HeadVar__3_3, transform_hlds__deforest__HeadVar__4_4);
            }
#line 546 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_6 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5;
#line 546 "deforest.m"
          }
#line 546 "deforest.m"
        else
#line 549 "deforest.m"
          {
#line 549 "deforest.m"
            MR_Word transform_hlds__deforest__Goal0_13;
#line 549 "deforest.m"
            MR_Word transform_hlds__deforest__MaybeBranchInfo_14;
#line 549 "deforest.m"
            MR_Word transform_hlds__deforest__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 549 "deforest.m"
            MR_Word transform_hlds__deforest__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 567 "deforest.m"
            MR_Word transform_hlds__deforest__Goals1_21;
#line 567 "deforest.m"
            MR_Word transform_hlds__deforest__DeforestInfo_22;
#line 552 "deforest.m"
            MR_Word transform_hlds__deforest__GoalBranchInfo_20;
#line 552 "deforest.m"
            MR_Word transform_hlds__deforest__V_44_44;

#line 548 "deforest.m"
            transform_hlds__deforest__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_29_29, (MR_Integer) 0)));
#line 548 "deforest.m"
            transform_hlds__deforest__MaybeBranchInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_29_29, (MR_Integer) 1)));
#line 552 "deforest.m"
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__MaybeBranchInfo_14)) == (MR_mktag((MR_Integer) 1)));
#line 552 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 552 "deforest.m"
              {
#line 552 "deforest.m"
                transform_hlds__deforest__GoalBranchInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeBranchInfo_14, (MR_Integer) 0)));
#line 598 "deforest.m"
                transform_hlds__deforest__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "deforest.m"
                {
#line 598 "deforest.m"
                  transform_hlds__deforest__succeeded = transform_hlds__deforest__search_for_deforest_goal_6_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__GoalBranchInfo_20, transform_hlds__deforest__V_44_44, transform_hlds__deforest__Goals0_15, &transform_hlds__deforest__Goals1_21, &transform_hlds__deforest__DeforestInfo_22);
                }
#line 552 "deforest.m"
              }
#line 567 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 557 "deforest.m"
              {
#line 557 "deforest.m"
                MR_Word transform_hlds__deforest__RevGoals1_23;
#line 557 "deforest.m"
                MR_Word transform_hlds__deforest__Goals2_24;
#line 557 "deforest.m"
                MR_Word transform_hlds__deforest__Optimized_25;
#line 557 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30;

#line 556 "deforest.m"
                {
#line 556 "deforest.m"
                  transform_hlds__deforest__handle_deforestation_9_p_0(transform_hlds__deforest__NonLocals_2, transform_hlds__deforest__DeforestInfo_22, transform_hlds__deforest__HeadVar__3_3, &transform_hlds__deforest__RevGoals1_23, transform_hlds__deforest__Goals1_21, &transform_hlds__deforest__Goals2_24, &transform_hlds__deforest__Optimized_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30);
                }
#line 561 "deforest.m"
#line 561 "deforest.m"
                switch (transform_hlds__deforest__Optimized_25) {
#line 561 "deforest.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 561 "deforest.m"
                  case (MR_Integer) 0:
#line 562 "deforest.m"
                    {
#line 562 "deforest.m"
                      MR_Word transform_hlds__deforest__RevGoals2_26;
#line 562 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_31_31;

#line 563 "deforest.m"
                      {
#line 563 "deforest.m"
                        transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_31_31);
                      }
#line 564 "deforest.m"
                      {
#line 564 "deforest.m"
                        transform_hlds__deforest__RevGoals2_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "deforest.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_26, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
#line 564 "deforest.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_26, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 564 "deforest.m"
                      }
#line 565 "deforest.m"
                      /* direct tailcall eliminated */
#line 565 "deforest.m"
                      {
#line 565 "deforest.m"
                        MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_15;
#line 565 "deforest.m"
                        MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__RevGoals2_26;
#line 565 "deforest.m"
                        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_31_31;

#line 565 "deforest.m"
                        transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 565 "deforest.m"
                        transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 565 "deforest.m"
                        transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 565 "deforest.m"
                      }
#line 565 "deforest.m"
                      continue;
#line 562 "deforest.m"
                    }
#line 561 "deforest.m"
                    break;
#line 561 "deforest.m"
                  case (MR_Integer) 1:
#line 560 "deforest.m"
                    {
#line 560 "deforest.m"
                      /* direct tailcall eliminated */
#line 560 "deforest.m"
                      {
#line 560 "deforest.m"
                        MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals2_24;
#line 560 "deforest.m"
                        MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__RevGoals1_23;
#line 560 "deforest.m"
                        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30;

#line 560 "deforest.m"
                        transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 560 "deforest.m"
                        transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 560 "deforest.m"
                        transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 560 "deforest.m"
                      }
#line 560 "deforest.m"
                      continue;
#line 560 "deforest.m"
                    }
#line 561 "deforest.m"
                    break;
#line 561 "deforest.m"
                }
#line 557 "deforest.m"
              }
#line 567 "deforest.m"
            else
#line 568 "deforest.m"
              {
#line 568 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;
#line 568 "deforest.m"
                MR_Word transform_hlds__deforest__RevGoals1_36;

#line 568 "deforest.m"
                {
#line 568 "deforest.m"
                  transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34);
                }
#line 569 "deforest.m"
                {
#line 569 "deforest.m"
                  transform_hlds__deforest__RevGoals1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals1_36, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
#line 569 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals1_36, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 569 "deforest.m"
                }
#line 570 "deforest.m"
                /* direct tailcall eliminated */
#line 570 "deforest.m"
                {
#line 570 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_15;
#line 570 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__RevGoals1_36;
#line 570 "deforest.m"
                  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;

#line 570 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 570 "deforest.m"
                  transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 570 "deforest.m"
                  transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 570 "deforest.m"
                }
#line 570 "deforest.m"
                continue;
#line 568 "deforest.m"
              }
#line 549 "deforest.m"
          }
#line 546 "deforest.m"
      }
#line 546 "deforest.m"
      break;
#line 546 "deforest.m"
    }
#line 542 "deforest.m"
}

#line 501 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0_1(
#line 501 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 501 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1)
#line 501 "deforest.m"
{
#line 501 "deforest.m"
  {
#line 501 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 501 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;

#line 501 "deforest.m"
    {
#line 501 "deforest.m"
      transform_hlds__deforest__succeeded = transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__501__1_1_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1));
    }
#line 501 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 501 "deforest.m"
  }
#line 501 "deforest.m"
}

#line 485 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0(
#line 485 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 485 "deforest.m"
  MR_Word transform_hlds__deforest__NonLocals_2,
#line 485 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__3_3,
#line 485 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_4,
#line 485 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
#line 485 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6)
#line 485 "deforest.m"
{
#line 489 "deforest.m"
  while (MR_TRUE)
#line 489 "deforest.m"
    {
#line 489 "deforest.m"
      /* tailcall optimized into a loop */
#line 489 "deforest.m"
      {
#line 489 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;

#line 489 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 489 "deforest.m"
          {
#line 490 "deforest.m"
            {
#line 490 "deforest.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__HeadVar__3_3, transform_hlds__deforest__Goals_4);
            }
#line 489 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_6 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5;
#line 489 "deforest.m"
          }
#line 489 "deforest.m"
        else
#line 492 "deforest.m"
          {
#line 492 "deforest.m"
            MR_Word transform_hlds__deforest__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 492 "deforest.m"
            MR_Word transform_hlds__deforest__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 492 "deforest.m"
            MR_Word transform_hlds__deforest__ModuleInfo_19;
#line 531 "deforest.m"
            MR_Word transform_hlds__deforest__SymName_25;
#line 531 "deforest.m"
            MR_Word transform_hlds__deforest__Constraints_31;
#line 531 "deforest.m"
            MR_Word transform_hlds__deforest__Goals1_32;
#line 498 "deforest.m"
            MR_Word transform_hlds__deforest__TypeCtorInfo_73_73;
#line 498 "deforest.m"
            MR_Word transform_hlds__deforest__PredId_20;
#line 498 "deforest.m"
            MR_Word transform_hlds__deforest__PredInfo_27;
#line 498 "deforest.m"
            MR_Word transform_hlds__deforest__V_44_44;
#line 498 "deforest.m"
            MR_Word transform_hlds__deforest__V_45_45;
#line 497 "deforest.m"
            MR_Word transform_hlds__deforest__V_26_26;
#line 497 "deforest.m"
            MR_Integer transform_hlds__deforest___ProcId_21;
#line 497 "deforest.m"
            MR_Word transform_hlds__deforest___Args_22;
#line 497 "deforest.m"
            MR_Word transform_hlds__deforest__V_23_23;
#line 497 "deforest.m"
            MR_Word transform_hlds__deforest__V_24_24;
#line 505 "deforest.m"
            MR_Word transform_hlds__deforest__V_33_33;
#line 505 "deforest.m"
            MR_Word transform_hlds__deforest__V_34_34;

#line 493 "deforest.m"
            {
#line 493 "deforest.m"
              transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__ModuleInfo_19);
            }
#line 497 "deforest.m"
            transform_hlds__deforest__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_13, (MR_Integer) 0)));
#line 497 "deforest.m"
            transform_hlds__deforest__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_13, (MR_Integer) 1)));
#line 497 "deforest.m"
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__V_44_44)) == (MR_mktag((MR_Integer) 2)));
#line 497 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 497 "deforest.m"
              {
#line 497 "deforest.m"
                transform_hlds__deforest__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 0)));
#line 497 "deforest.m"
                transform_hlds__deforest___ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 1)));
#line 497 "deforest.m"
                transform_hlds__deforest___Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 2)));
#line 497 "deforest.m"
                transform_hlds__deforest__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 3)));
#line 497 "deforest.m"
                transform_hlds__deforest__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 4)));
#line 497 "deforest.m"
                transform_hlds__deforest__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_44_44, (MR_Integer) 5)));
#line 499 "deforest.m"
                {
#line 499 "deforest.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__deforest__ModuleInfo_19, transform_hlds__deforest__PredId_20, &transform_hlds__deforest__PredInfo_27);
                }
#line 500 "deforest.m"
                {
#line 500 "deforest.m"
                  transform_hlds__deforest__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__deforest__PredInfo_27);
                }
#line 500 "deforest.m"
                transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
#line 498 "deforest.m"
                if (transform_hlds__deforest__succeeded)
#line 498 "deforest.m"
                  {
#line 501 "deforest.m"
                    transform_hlds__deforest__V_45_45 = (MR_Word) &transform_hlds__deforest_scalar_common_2[7];
#line 9311 "transform_hlds.deforest.c"
                    transform_hlds__deforest__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 501 "deforest.m"
                    {
#line 501 "deforest.m"
                      mercury__list__takewhile_4_p_0(transform_hlds__deforest__TypeCtorInfo_73_73, transform_hlds__deforest__V_45_45, transform_hlds__deforest__Goals0_14, &transform_hlds__deforest__Constraints_31, &transform_hlds__deforest__Goals1_32);
                    }
#line 505 "deforest.m"
                    transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Constraints_31)) == (MR_mktag((MR_Integer) 1)));
#line 505 "deforest.m"
                    if (transform_hlds__deforest__succeeded)
#line 505 "deforest.m"
                      {
#line 505 "deforest.m"
                        transform_hlds__deforest__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Constraints_31, (MR_Integer) 0)));
#line 505 "deforest.m"
                        transform_hlds__deforest__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Constraints_31, (MR_Integer) 1)));
#line 505 "deforest.m"
                      }
#line 498 "deforest.m"
                  }
#line 497 "deforest.m"
              }
#line 531 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 507 "deforest.m"
              {
#line 507 "deforest.m"
                MR_String transform_hlds__deforest__SymNameString_35;
#line 507 "deforest.m"
                MR_Word transform_hlds__deforest__Globals_36;
#line 507 "deforest.m"
                MR_Word transform_hlds__deforest__DebugPD_37;
#line 507 "deforest.m"
                MR_Word transform_hlds__deforest__MaybeGoal_40;
#line 507 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59;
#line 510 "deforest.m"
                MR_Word transform_hlds__deforest__V_51_51;
#line 510 "deforest.m"
                MR_Word transform_hlds__deforest__V_53_53;
#line 516 "deforest.m"
                MR_Word transform_hlds__deforest__ConjNonLocals_39;

#line 507 "deforest.m"
                {
#line 507 "deforest.m"
                  transform_hlds__deforest__SymNameString_35 = mdbcomp__sym_name__sym_name_to_string_1_f_0(transform_hlds__deforest__SymName_25);
                }
#line 508 "deforest.m"
                {
#line 508 "deforest.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_19, &transform_hlds__deforest__Globals_36);
                }
#line 509 "deforest.m"
                {
#line 509 "deforest.m"
                  libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_36, (MR_Integer) 72, &transform_hlds__deforest__DebugPD_37);
                }
#line 513 "deforest.m"
                {
#line 513 "deforest.m"
                  transform_hlds__deforest__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 513 "deforest.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__deforest__V_53_53, 0) = ((MR_Box) (transform_hlds__deforest__SymNameString_35));
#line 513 "deforest.m"
                }
#line 513 "deforest.m"
                {
#line 513 "deforest.m"
                  transform_hlds__deforest__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_51_51, 0) = ((MR_Box) (transform_hlds__deforest__V_53_53));
#line 513 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 513 "deforest.m"
                }
#line 511 "deforest.m"
                {
#line 511 "deforest.m"
                  transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_37, (MR_String) "propagating constraints into call to %s\n", transform_hlds__deforest__V_51_51);
                }
#line 516 "deforest.m"
                {
#line 516 "deforest.m"
                  transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(transform_hlds__deforest__NonLocals_2, transform_hlds__deforest__HeadVar__3_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__deforest__Goal0_13, transform_hlds__deforest__Constraints_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__deforest__Goals1_32, &transform_hlds__deforest__ConjNonLocals_39);
                }
#line 518 "deforest.m"
                {
#line 518 "deforest.m"
                  transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__Constraints_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__MaybeGoal_40, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59);
                }
#line 525 "deforest.m"
                if ((transform_hlds__deforest__MaybeGoal_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "deforest.m"
                  {
#line 526 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_60_60;
#line 526 "deforest.m"
                    MR_Word transform_hlds__deforest__V_61_61;

#line 527 "deforest.m"
                    {
#line 527 "deforest.m"
                      transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_60_60);
                    }
#line 529 "deforest.m"
                    {
#line 529 "deforest.m"
                      transform_hlds__deforest__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_61_61, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
#line 529 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_61_61, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 529 "deforest.m"
                    }
#line 528 "deforest.m"
                    /* direct tailcall eliminated */
#line 528 "deforest.m"
                    {
#line 528 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_14;
#line 528 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__V_61_61;
#line 528 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_60_60;

#line 528 "deforest.m"
                      transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 528 "deforest.m"
                      transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 528 "deforest.m"
                      transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 528 "deforest.m"
                    }
#line 528 "deforest.m"
                    continue;
#line 526 "deforest.m"
                  }
#line 525 "deforest.m"
                else
#line 520 "deforest.m"
                  {
#line 520 "deforest.m"
                    MR_Word transform_hlds__deforest__Goal_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeGoal_40, (MR_Integer) 0)));
#line 520 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_64_64;
#line 520 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_65_65;
#line 520 "deforest.m"
                    MR_Word transform_hlds__deforest__V_66_66;

#line 521 "deforest.m"
                    {
#line 521 "deforest.m"
                      transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_64_64);
                    }
#line 522 "deforest.m"
                    {
#line 522 "deforest.m"
                      transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal_41, transform_hlds__deforest__STATE_VARIABLE_PDInfo_64_64, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_65_65);
                    }
#line 524 "deforest.m"
                    {
#line 524 "deforest.m"
                      transform_hlds__deforest__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_66_66, 0) = ((MR_Box) (transform_hlds__deforest__Goal_41));
#line 524 "deforest.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_66_66, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 524 "deforest.m"
                    }
#line 523 "deforest.m"
                    /* direct tailcall eliminated */
#line 523 "deforest.m"
                    {
#line 523 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals1_32;
#line 523 "deforest.m"
                      MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__V_66_66;
#line 523 "deforest.m"
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_65_65;

#line 523 "deforest.m"
                      transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 523 "deforest.m"
                      transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 523 "deforest.m"
                      transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 523 "deforest.m"
                    }
#line 523 "deforest.m"
                    continue;
#line 520 "deforest.m"
                  }
#line 507 "deforest.m"
              }
#line 531 "deforest.m"
            else
#line 532 "deforest.m"
              {
#line 532 "deforest.m"
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68;
#line 532 "deforest.m"
                MR_Word transform_hlds__deforest__V_69_69;

#line 532 "deforest.m"
                {
#line 532 "deforest.m"
                  transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68);
                }
#line 534 "deforest.m"
                {
#line 534 "deforest.m"
                  transform_hlds__deforest__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_69_69, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
#line 534 "deforest.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__V_69_69, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
#line 534 "deforest.m"
                }
#line 533 "deforest.m"
                /* direct tailcall eliminated */
#line 533 "deforest.m"
                {
#line 533 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_14;
#line 533 "deforest.m"
                  MR_Word transform_hlds__deforest__HeadVar__3__tmp_copy_3 = transform_hlds__deforest__V_69_69;
#line 533 "deforest.m"
                  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68;

#line 533 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_5;
#line 533 "deforest.m"
                  transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__HeadVar__3__tmp_copy_3;
#line 533 "deforest.m"
                  transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 533 "deforest.m"
                }
#line 533 "deforest.m"
                continue;
#line 532 "deforest.m"
              }
#line 492 "deforest.m"
          }
#line 489 "deforest.m"
      }
#line 489 "deforest.m"
      break;
#line 489 "deforest.m"
    }
#line 485 "deforest.m"
}

#line 435 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__compute_goal_infos_4_p_0(
#line 435 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 435 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
#line 435 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
#line 435 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4)
#line 435 "deforest.m"
{
#line 438 "deforest.m"
  {
#line 438 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 438 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 438 "deforest.m"
      {
#line 438 "deforest.m"
        *transform_hlds__deforest__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 438 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 438 "deforest.m"
      }
#line 438 "deforest.m"
    else
#line 440 "deforest.m"
      {
#line 440 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 440 "deforest.m"
        MR_Word transform_hlds__deforest__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 440 "deforest.m"
        MR_Word transform_hlds__deforest__MaybeBranchInfo_10;
#line 440 "deforest.m"
        MR_Word transform_hlds__deforest__Goals_11;
#line 440 "deforest.m"
        MR_Word transform_hlds__deforest__V_15_15;
#line 440 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16;
#line 440 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;
#line 440 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_8, (MR_Integer) 0)));
#line 449 "deforest.m"
        MR_Word transform_hlds__deforest__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_8, (MR_Integer) 1)));

#line 456 "deforest.m"
#line 456 "deforest.m"
        switch (MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_24)) {
#line 456 "deforest.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 456 "deforest.m"
          case (MR_Integer) 0:
#line 463 "deforest.m"
            {
#line 464 "deforest.m"
              transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 463 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 463 "deforest.m"
            }
#line 456 "deforest.m"
            break;
#line 456 "deforest.m"
          case (MR_Integer) 1:
#line 463 "deforest.m"
            {
#line 464 "deforest.m"
              transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 463 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 463 "deforest.m"
            }
#line 456 "deforest.m"
            break;
#line 456 "deforest.m"
          case (MR_Integer) 2:
#line 466 "deforest.m"
            {
#line 466 "deforest.m"
              MR_Word transform_hlds__deforest__PredId_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 0)));
#line 466 "deforest.m"
              MR_Integer transform_hlds__deforest__ProcId_57 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 1)));
#line 466 "deforest.m"
              MR_Word transform_hlds__deforest__Args_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 2)));
#line 466 "deforest.m"
              MR_Word transform_hlds__deforest__ProcBranchInfos_62;
#line 466 "deforest.m"
              MR_Word transform_hlds__deforest__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 3)));
#line 466 "deforest.m"
              MR_Word transform_hlds__deforest__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 4)));
#line 466 "deforest.m"
              MR_Word transform_hlds__deforest__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 5)));
#line 475 "deforest.m"
              MR_Word transform_hlds__deforest__BranchInfo0_63;
#line 469 "deforest.m"
              MR_Word transform_hlds__deforest__V_69_69;
#line 469 "deforest.m"
              MR_Box transform_hlds__deforest__conv0_BranchInfo0_63;

#line 467 "deforest.m"
              {
#line 467 "deforest.m"
                transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__ProcBranchInfos_62);
              }
#line 469 "deforest.m"
              {
#line 469 "deforest.m"
                transform_hlds__deforest__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 469 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_69_69, 0) = ((MR_Box) (transform_hlds__deforest__PredId_56));
#line 469 "deforest.m"
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_69_69, 1) = ((MR_Box) (transform_hlds__deforest__ProcId_57));
#line 469 "deforest.m"
              }
#line 469 "deforest.m"
              {
#line 469 "deforest.m"
                transform_hlds__deforest__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[0], transform_hlds__deforest__ProcBranchInfos_62, ((MR_Box) (transform_hlds__deforest__V_69_69)), &transform_hlds__deforest__conv0_BranchInfo0_63);
              }
#line 469 "deforest.m"
              if (transform_hlds__deforest__succeeded)
#line 469 "deforest.m"
                {
#line 469 "deforest.m"
                  transform_hlds__deforest__BranchInfo0_63 = ((MR_Word) transform_hlds__deforest__conv0_BranchInfo0_63);
#line 469 "deforest.m"
                  transform_hlds__deforest__succeeded = MR_TRUE;
#line 469 "deforest.m"
                }
#line 475 "deforest.m"
              if (transform_hlds__deforest__succeeded)
#line 473 "deforest.m"
                {
#line 473 "deforest.m"
                  MR_Word transform_hlds__deforest__BranchInfo_64;

#line 473 "deforest.m"
                  {
#line 473 "deforest.m"
                    transform_hlds__pd_util__convert_branch_info_3_p_0(transform_hlds__deforest__BranchInfo0_63, transform_hlds__deforest__Args_58, &transform_hlds__deforest__BranchInfo_64);
                  }
#line 474 "deforest.m"
                  {
#line 474 "deforest.m"
                    transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 474 "deforest.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeBranchInfo_10, 0) = ((MR_Box) (transform_hlds__deforest__BranchInfo_64));
#line 474 "deforest.m"
                  }
#line 473 "deforest.m"
                }
#line 475 "deforest.m"
              else
#line 476 "deforest.m"
                transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 466 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 466 "deforest.m"
            }
#line 456 "deforest.m"
            break;
#line 456 "deforest.m"
          case (MR_Integer) 3:
#line 456 "deforest.m"
#line 456 "deforest.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 0)))) {
#line 456 "deforest.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 456 "deforest.m"
              case (MR_Integer) 0:
#line 456 "deforest.m"
              case (MR_Integer) 1:
#line 456 "deforest.m"
              case (MR_Integer) 2:
#line 456 "deforest.m"
              case (MR_Integer) 5:
#line 463 "deforest.m"
                {
#line 464 "deforest.m"
                  transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 463 "deforest.m"
                  transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 463 "deforest.m"
                }
#line 456 "deforest.m"
                break;
#line 456 "deforest.m"
              case (MR_Integer) 3:
#line 456 "deforest.m"
              case (MR_Integer) 4:
#line 456 "deforest.m"
              case (MR_Integer) 6:
#line 455 "deforest.m"
                {
#line 455 "deforest.m"
                  transform_hlds__pd_util__get_branch_vars_goal_4_p_0(transform_hlds__deforest__Goal_8, &transform_hlds__deforest__MaybeBranchInfo_10, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16);
                }
#line 456 "deforest.m"
                break;
#line 456 "deforest.m"
              case (MR_Integer) 7:
#line 479 "deforest.m"
                {
#line 480 "deforest.m"
                  {
#line 480 "deforest.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforest_get_branch_vars_goal\'/4", (MR_String) "shorthand");
#line 480 "deforest.m"
                    return;
                  }
#line 479 "deforest.m"
                }
#line 456 "deforest.m"
                break;
#line 456 "deforest.m"
            }
#line 456 "deforest.m"
            break;
#line 456 "deforest.m"
        }
#line 439 "deforest.m"
        {
#line 439 "deforest.m"
          transform_hlds__deforest__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_15_15, 0) = ((MR_Box) (transform_hlds__deforest__Goal_8));
#line 439 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_15_15, 1) = ((MR_Box) (transform_hlds__deforest__MaybeBranchInfo_10));
#line 439 "deforest.m"
        }
#line 442 "deforest.m"
        {
#line 442 "deforest.m"
          transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal_8, transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17);
        }
#line 443 "deforest.m"
        {
#line 443 "deforest.m"
          transform_hlds__deforest__compute_goal_infos_4_p_0(transform_hlds__deforest__Goals0_9, &transform_hlds__deforest__Goals_11, transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17, transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);
        }
#line 439 "deforest.m"
        {
#line 439 "deforest.m"
          MR_Word base;
#line 439 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "deforest.m"
          *transform_hlds__deforest__HeadVar__2_2 = base;
#line 439 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__V_15_15));
#line 439 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_11));
#line 439 "deforest.m"
        }
#line 440 "deforest.m"
      }
#line 438 "deforest.m"
  }
#line 435 "deforest.m"
}

#line 414 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(
#line 414 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 414 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 414 "deforest.m"
  MR_Word * transform_hlds__deforest__Goals_3,
#line 414 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
#line 414 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5)
#line 414 "deforest.m"
{
#line 418 "deforest.m"
  while (MR_TRUE)
#line 418 "deforest.m"
    {
#line 418 "deforest.m"
      /* tailcall optimized into a loop */
#line 418 "deforest.m"
      {
#line 418 "deforest.m"
        MR_bool transform_hlds__deforest__succeeded;

#line 418 "deforest.m"
        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 418 "deforest.m"
          {
#line 419 "deforest.m"
            {
#line 419 "deforest.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__HeadVar__2_2, transform_hlds__deforest__Goals_3);
            }
#line 418 "deforest.m"
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4;
#line 418 "deforest.m"
          }
#line 418 "deforest.m"
        else
#line 420 "deforest.m"
          {
#line 420 "deforest.m"
            MR_Word transform_hlds__deforest__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 420 "deforest.m"
            MR_Word transform_hlds__deforest__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 420 "deforest.m"
            MR_Word transform_hlds__deforest__Goal1_16;
#line 420 "deforest.m"
            MR_Word transform_hlds__deforest__RevGoals2_20;
#line 420 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23;
#line 420 "deforest.m"
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24;
#line 420 "deforest.m"
            MR_Word transform_hlds__deforest__GoalExpr0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_11, (MR_Integer) 0)));
#line 420 "deforest.m"
            MR_Word transform_hlds__deforest__GoalInfo0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_11, (MR_Integer) 1)));
#line 420 "deforest.m"
            MR_Word transform_hlds__deforest__GoalExpr_37;
#line 420 "deforest.m"
            MR_Word transform_hlds__deforest__GoalInfo_38;
#line 426 "deforest.m"
            MR_Word transform_hlds__deforest__Goals1_17;
#line 423 "deforest.m"
            MR_Word transform_hlds__deforest__V_25_25;
#line 423 "deforest.m"
            MR_Word transform_hlds__deforest__V_26_26;
#line 423 "deforest.m"
            MR_Word transform_hlds__deforest__V_18_18;

#line 282 "deforest.m"
            {
#line 282 "deforest.m"
              transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_35, &transform_hlds__deforest__GoalExpr_37, transform_hlds__deforest__GoalInfo0_36, &transform_hlds__deforest__GoalInfo_38, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23);
            }
#line 283 "deforest.m"
            {
#line 283 "deforest.m"
              transform_hlds__deforest__Goal1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "deforest.m"
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_37));
#line 283 "deforest.m"
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_38));
#line 283 "deforest.m"
            }
#line 422 "deforest.m"
            {
#line 422 "deforest.m"
              transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal1_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24);
            }
#line 423 "deforest.m"
            transform_hlds__deforest__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, (MR_Integer) 0)));
#line 423 "deforest.m"
            transform_hlds__deforest__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, (MR_Integer) 1)));
#line 423 "deforest.m"
            transform_hlds__deforest__succeeded = ((((MR_tag((MR_Word) transform_hlds__deforest__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 423 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 423 "deforest.m"
              {
#line 423 "deforest.m"
                transform_hlds__deforest__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_25_25, (MR_Integer) 1)));
#line 423 "deforest.m"
                transform_hlds__deforest__Goals1_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__V_25_25, (MR_Integer) 2)));
#line 423 "deforest.m"
                transform_hlds__deforest__succeeded = (transform_hlds__deforest__V_26_26 == (MR_Integer) 0);
#line 423 "deforest.m"
              }
#line 426 "deforest.m"
            if (transform_hlds__deforest__succeeded)
#line 424 "deforest.m"
              {
#line 424 "deforest.m"
                MR_Word transform_hlds__deforest__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 424 "deforest.m"
                MR_Word transform_hlds__deforest__RevGoals1_19;

#line 424 "deforest.m"
                {
#line 424 "deforest.m"
                  mercury__list__reverse_2_p_0(transform_hlds__deforest__TypeCtorInfo_29_29, transform_hlds__deforest__Goals1_17, &transform_hlds__deforest__RevGoals1_19);
                }
#line 425 "deforest.m"
                {
#line 425 "deforest.m"
                  mercury__list__append_3_p_1(transform_hlds__deforest__TypeCtorInfo_29_29, transform_hlds__deforest__RevGoals1_19, transform_hlds__deforest__HeadVar__2_2, &transform_hlds__deforest__RevGoals2_20);
                }
#line 424 "deforest.m"
              }
#line 426 "deforest.m"
            else
#line 427 "deforest.m"
              {
#line 427 "deforest.m"
                transform_hlds__deforest__RevGoals2_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_20, 0) = ((MR_Box) (transform_hlds__deforest__Goal1_16));
#line 427 "deforest.m"
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_20, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__2_2));
#line 427 "deforest.m"
              }
#line 429 "deforest.m"
            /* direct tailcall eliminated */
#line 429 "deforest.m"
            {
#line 429 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__1__tmp_copy_1 = transform_hlds__deforest__Goals0_12;
#line 429 "deforest.m"
              MR_Word transform_hlds__deforest__HeadVar__2__tmp_copy_2 = transform_hlds__deforest__RevGoals2_20;
#line 429 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24;

#line 429 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0__tmp_copy_4;
#line 429 "deforest.m"
              transform_hlds__deforest__HeadVar__2_2 = transform_hlds__deforest__HeadVar__2__tmp_copy_2;
#line 429 "deforest.m"
              transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__HeadVar__1__tmp_copy_1;
#line 429 "deforest.m"
            }
#line 429 "deforest.m"
            continue;
#line 420 "deforest.m"
          }
#line 418 "deforest.m"
      }
#line 418 "deforest.m"
      break;
#line 418 "deforest.m"
    }
#line 414 "deforest.m"
}

#line 395 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_cases_5_p_0(
#line 395 "deforest.m"
  MR_Word transform_hlds__deforest__Var_1,
#line 395 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__2_2,
#line 395 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__3_3,
#line 395 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
#line 395 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5)
#line 395 "deforest.m"
{
#line 398 "deforest.m"
  {
#line 398 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 398 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 398 "deforest.m"
      {
#line 398 "deforest.m"
        *transform_hlds__deforest__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4;
#line 398 "deforest.m"
      }
#line 398 "deforest.m"
    else
#line 399 "deforest.m"
      {
#line 399 "deforest.m"
        MR_Word transform_hlds__deforest__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0)));
#line 399 "deforest.m"
        MR_Word transform_hlds__deforest__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
#line 399 "deforest.m"
        MR_Word transform_hlds__deforest__Case_13;
#line 399 "deforest.m"
        MR_Word transform_hlds__deforest__Cases_14;
#line 399 "deforest.m"
        MR_Word transform_hlds__deforest__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_11, (MR_Integer) 0)));
#line 399 "deforest.m"
        MR_Word transform_hlds__deforest__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_11, (MR_Integer) 1)));
#line 399 "deforest.m"
        MR_Word transform_hlds__deforest__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_11, (MR_Integer) 2)));
#line 399 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_19;
#line 399 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_20;
#line 399 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23;
#line 399 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24;
#line 399 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_25_25;
#line 399 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr0_32;
#line 399 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo0_33;
#line 399 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr_34;
#line 399 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo_35;

#line 403 "deforest.m"
        {
#line 403 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4, &transform_hlds__deforest__InstMap0_19);
        }
#line 404 "deforest.m"
        {
#line 404 "deforest.m"
          transform_hlds__pd_info__pd_info_bind_var_to_functors_5_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__MainConsId_16, transform_hlds__deforest__OtherConsIds_17, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23);
        }
#line 281 "deforest.m"
        transform_hlds__deforest__GoalExpr0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_18, (MR_Integer) 0)));
#line 281 "deforest.m"
        transform_hlds__deforest__GoalInfo0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_18, (MR_Integer) 1)));
#line 282 "deforest.m"
        {
#line 282 "deforest.m"
          transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_32, &transform_hlds__deforest__GoalExpr_34, transform_hlds__deforest__GoalInfo0_33, &transform_hlds__deforest__GoalInfo_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24);
        }
#line 283 "deforest.m"
        {
#line 283 "deforest.m"
          transform_hlds__deforest__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_20, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_34));
#line 283 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_20, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_35));
#line 283 "deforest.m"
        }
#line 406 "deforest.m"
        {
#line 406 "deforest.m"
          transform_hlds__deforest__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 406 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_13, 0) = ((MR_Box) (transform_hlds__deforest__MainConsId_16));
#line 406 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_13, 1) = ((MR_Box) (transform_hlds__deforest__OtherConsIds_17));
#line 406 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_13, 2) = ((MR_Box) (transform_hlds__deforest__Goal_20));
#line 406 "deforest.m"
        }
#line 407 "deforest.m"
        {
#line 407 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_25_25);
        }
#line 408 "deforest.m"
        {
#line 408 "deforest.m"
          transform_hlds__deforest__deforest_cases_5_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__Cases0_12, &transform_hlds__deforest__Cases_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_25_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_5);
        }
#line 399 "deforest.m"
        {
#line 399 "deforest.m"
          MR_Word base;
#line 399 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "deforest.m"
          *transform_hlds__deforest__HeadVar__3_3 = base;
#line 399 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Case_13));
#line 399 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Cases_14));
#line 399 "deforest.m"
        }
#line 399 "deforest.m"
      }
#line 398 "deforest.m"
  }
#line 395 "deforest.m"
}

#line 383 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_disj_4_p_0(
#line 383 "deforest.m"
  MR_Word transform_hlds__deforest__HeadVar__1_1,
#line 383 "deforest.m"
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
#line 383 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
#line 383 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4)
#line 383 "deforest.m"
{
#line 386 "deforest.m"
  {
#line 386 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 386 "deforest.m"
    if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 386 "deforest.m"
      {
#line 386 "deforest.m"
        *transform_hlds__deforest__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 386 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
#line 386 "deforest.m"
      }
#line 386 "deforest.m"
    else
#line 387 "deforest.m"
      {
#line 387 "deforest.m"
        MR_Word transform_hlds__deforest__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
#line 387 "deforest.m"
        MR_Word transform_hlds__deforest__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
#line 387 "deforest.m"
        MR_Word transform_hlds__deforest__Goal_10;
#line 387 "deforest.m"
        MR_Word transform_hlds__deforest__Goals_11;
#line 387 "deforest.m"
        MR_Word transform_hlds__deforest__InstMap0_13;
#line 387 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16;
#line 387 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;
#line 387 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr0_24;
#line 387 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo0_25;
#line 387 "deforest.m"
        MR_Word transform_hlds__deforest__GoalExpr_26;
#line 387 "deforest.m"
        MR_Word transform_hlds__deforest__GoalInfo_27;

#line 388 "deforest.m"
        {
#line 388 "deforest.m"
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__InstMap0_13);
        }
#line 281 "deforest.m"
        transform_hlds__deforest__GoalExpr0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_8, (MR_Integer) 0)));
#line 281 "deforest.m"
        transform_hlds__deforest__GoalInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_8, (MR_Integer) 1)));
#line 282 "deforest.m"
        {
#line 282 "deforest.m"
          transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_24, &transform_hlds__deforest__GoalExpr_26, transform_hlds__deforest__GoalInfo0_25, &transform_hlds__deforest__GoalInfo_27, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16);
        }
#line 283 "deforest.m"
        {
#line 283 "deforest.m"
          transform_hlds__deforest__Goal_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_26));
#line 283 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_27));
#line 283 "deforest.m"
        }
#line 390 "deforest.m"
        {
#line 390 "deforest.m"
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17);
        }
#line 391 "deforest.m"
        {
#line 391 "deforest.m"
          transform_hlds__deforest__deforest_disj_4_p_0(transform_hlds__deforest__Goals0_9, &transform_hlds__deforest__Goals_11, transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17, transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);
        }
#line 387 "deforest.m"
        {
#line 387 "deforest.m"
          MR_Word base;
#line 387 "deforest.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "deforest.m"
          *transform_hlds__deforest__HeadVar__2_2 = base;
#line 387 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Goal_10));
#line 387 "deforest.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_11));
#line 387 "deforest.m"
        }
#line 387 "deforest.m"
      }
#line 386 "deforest.m"
  }
#line 383 "deforest.m"
}

#line 285 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_goal_expr_6_p_0(
#line 285 "deforest.m"
  MR_Word transform_hlds__deforest__GoalExpr0_7,
#line 285 "deforest.m"
  MR_Word * transform_hlds__deforest__GoalExpr_8,
#line 285 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60,
#line 285 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61,
#line 285 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62,
#line 285 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_63)
#line 285 "deforest.m"
{
#line 290 "deforest.m"
  {
#line 290 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;

#line 290 "deforest.m"
#line 290 "deforest.m"
    switch (MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) {
#line 290 "deforest.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 290 "deforest.m"
      case (MR_Integer) 0:
#line 348 "deforest.m"
        {
#line 348 "deforest.m"
          MR_Word transform_hlds__deforest__SubGoal0_31 = (MR_Word) MR_body(((MR_Word) transform_hlds__deforest__GoalExpr0_7), (MR_Integer) 0);
#line 348 "deforest.m"
          MR_Word transform_hlds__deforest__SubGoal_32;

#line 349 "deforest.m"
          {
#line 349 "deforest.m"
            transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__SubGoal0_31, &transform_hlds__deforest__SubGoal_32, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
          }
#line 350 "deforest.m"
          *transform_hlds__deforest__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__deforest__SubGoal_32);
#line 348 "deforest.m"
          *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 348 "deforest.m"
        }
#line 290 "deforest.m"
        break;
#line 290 "deforest.m"
      case (MR_Integer) 1:
#line 373 "deforest.m"
        {
#line 374 "deforest.m"
          *transform_hlds__deforest__GoalExpr_8 = transform_hlds__deforest__GoalExpr0_7;
#line 373 "deforest.m"
          *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 373 "deforest.m"
          *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 373 "deforest.m"
        }
#line 290 "deforest.m"
        break;
#line 290 "deforest.m"
      case (MR_Integer) 2:
#line 365 "deforest.m"
        {
#line 365 "deforest.m"
          MR_Word transform_hlds__deforest__PredId_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)));
#line 365 "deforest.m"
          MR_Integer transform_hlds__deforest__ProcId_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 365 "deforest.m"
          MR_Word transform_hlds__deforest__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
#line 365 "deforest.m"
          MR_Word transform_hlds__deforest__BuiltinState_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 3)));
#line 365 "deforest.m"
          MR_Word transform_hlds__deforest__Name_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 5)));
#line 365 "deforest.m"
          MR_Word transform_hlds__deforest__V_67_67;
#line 365 "deforest.m"
          MR_Word transform_hlds__deforest__V_68_68;
#line 365 "deforest.m"
          MR_Word transform_hlds__deforest__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 4)));

#line 367 "deforest.m"
          {
#line 367 "deforest.m"
            transform_hlds__deforest__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 367 "deforest.m"
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_67_67, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr0_7));
#line 367 "deforest.m"
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_67_67, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60));
#line 367 "deforest.m"
          }
#line 366 "deforest.m"
          {
#line 366 "deforest.m"
            transform_hlds__deforest__deforest_call_9_p_0(transform_hlds__deforest__PredId_36, transform_hlds__deforest__ProcId_37, transform_hlds__deforest__Args_38, transform_hlds__deforest__Name_41, transform_hlds__deforest__BuiltinState_39, transform_hlds__deforest__V_67_67, &transform_hlds__deforest__V_68_68, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
          }
#line 367 "deforest.m"
          *transform_hlds__deforest__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_68_68, (MR_Integer) 0)));
#line 367 "deforest.m"
          *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_68_68, (MR_Integer) 1)));
#line 365 "deforest.m"
        }
#line 290 "deforest.m"
        break;
#line 290 "deforest.m"
      case (MR_Integer) 3:
#line 290 "deforest.m"
#line 290 "deforest.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)))) {
#line 290 "deforest.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 290 "deforest.m"
          case (MR_Integer) 0:
#line 373 "deforest.m"
            {
#line 374 "deforest.m"
              *transform_hlds__deforest__GoalExpr_8 = transform_hlds__deforest__GoalExpr0_7;
#line 373 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 373 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 373 "deforest.m"
            }
#line 290 "deforest.m"
            break;
#line 290 "deforest.m"
          case (MR_Integer) 1:
#line 373 "deforest.m"
            {
#line 374 "deforest.m"
              *transform_hlds__deforest__GoalExpr_8 = transform_hlds__deforest__GoalExpr0_7;
#line 373 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 373 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 373 "deforest.m"
            }
#line 290 "deforest.m"
            break;
#line 290 "deforest.m"
          case (MR_Integer) 2:
#line 290 "deforest.m"
            {
#line 290 "deforest.m"
              MR_Word transform_hlds__deforest__ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 290 "deforest.m"
              MR_Word transform_hlds__deforest__Goals_13;
#line 290 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));

#line 322 "deforest.m"
#line 322 "deforest.m"
              switch (transform_hlds__deforest__ConjType_11) {
#line 322 "deforest.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 322 "deforest.m"
                case (MR_Integer) 1:
#line 323 "deforest.m"
                  {
#line 323 "deforest.m"
                    *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 323 "deforest.m"
                    transform_hlds__deforest__Goals_13 = transform_hlds__deforest__STATE_VARIABLE_Goals_81_81;
#line 323 "deforest.m"
                  }
#line 322 "deforest.m"
                  break;
#line 322 "deforest.m"
                case (MR_Integer) 0:
#line 294 "deforest.m"
                  {
#line 294 "deforest.m"
                    MR_Word transform_hlds__deforest__InstMap0_14;
#line 294 "deforest.m"
                    MR_Word transform_hlds__deforest__NonLocals_15;
#line 294 "deforest.m"
                    MR_Word transform_hlds__deforest__ModuleInfo_16;
#line 294 "deforest.m"
                    MR_Word transform_hlds__deforest__Globals_17;
#line 294 "deforest.m"
                    MR_Word transform_hlds__deforest__Deforestation_18;
#line 294 "deforest.m"
                    MR_Word transform_hlds__deforest__Constraints_19;
#line 294 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_83_83;
#line 294 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84;
#line 294 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
#line 294 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_91_91;
#line 294 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92;
#line 294 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94;
#line 294 "deforest.m"
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;

#line 295 "deforest.m"
                    {
#line 295 "deforest.m"
                      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__InstMap0_14);
                    }
#line 296 "deforest.m"
                    {
#line 296 "deforest.m"
                      transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_81_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__STATE_VARIABLE_Goals_83_83, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84);
                    }
#line 297 "deforest.m"
                    {
#line 297 "deforest.m"
                      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85);
                    }
#line 298 "deforest.m"
                    {
#line 298 "deforest.m"
                      transform_hlds__deforest__NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60);
                    }
#line 299 "deforest.m"
                    {
#line 299 "deforest.m"
                      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__ModuleInfo_16);
                    }
#line 300 "deforest.m"
                    {
#line 300 "deforest.m"
                      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_16, &transform_hlds__deforest__Globals_17);
                    }
#line 301 "deforest.m"
                    {
#line 301 "deforest.m"
                      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_17, (MR_Integer) 382, &transform_hlds__deforest__Deforestation_18);
                    }
#line 308 "deforest.m"
#line 308 "deforest.m"
                    switch (transform_hlds__deforest__Deforestation_18) {
#line 308 "deforest.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 308 "deforest.m"
                      case (MR_Integer) 0:
#line 309 "deforest.m"
                        {
#line 309 "deforest.m"
                          transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
#line 309 "deforest.m"
                          transform_hlds__deforest__STATE_VARIABLE_Goals_91_91 = transform_hlds__deforest__STATE_VARIABLE_Goals_83_83;
#line 309 "deforest.m"
                        }
#line 308 "deforest.m"
                        break;
#line 308 "deforest.m"
                      case (MR_Integer) 1:
#line 304 "deforest.m"
                        {
#line 304 "deforest.m"
                          MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_87_87;
#line 304 "deforest.m"
                          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_88_88;
#line 304 "deforest.m"
                          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_89_89;

#line 305 "deforest.m"
                          {
#line 305 "deforest.m"
                            transform_hlds__deforest__compute_goal_infos_4_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_83_83, &transform_hlds__deforest__STATE_VARIABLE_Goals_87_87, transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_88_88);
                          }
#line 306 "deforest.m"
                          {
#line 306 "deforest.m"
                            transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_88_88, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_89_89);
                          }
#line 307 "deforest.m"
                          {
#line 307 "deforest.m"
                            transform_hlds__deforest__deforest_conj_6_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_87_87, transform_hlds__deforest__NonLocals_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__STATE_VARIABLE_Goals_91_91, transform_hlds__deforest__STATE_VARIABLE_PDInfo_89_89, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92);
                          }
#line 304 "deforest.m"
                        }
#line 308 "deforest.m"
                        break;
#line 308 "deforest.m"
                    }
#line 311 "deforest.m"
                    {
#line 311 "deforest.m"
                      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_17, (MR_Integer) 342, &transform_hlds__deforest__Constraints_19);
                    }
#line 313 "deforest.m"
                    {
#line 313 "deforest.m"
                      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94);
                    }
#line 318 "deforest.m"
#line 318 "deforest.m"
                    switch (transform_hlds__deforest__Constraints_19) {
#line 318 "deforest.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 318 "deforest.m"
                      case (MR_Integer) 0:
#line 319 "deforest.m"
                        {
#line 319 "deforest.m"
                          transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94;
#line 319 "deforest.m"
                          transform_hlds__deforest__Goals_13 = transform_hlds__deforest__STATE_VARIABLE_Goals_91_91;
#line 319 "deforest.m"
                        }
#line 318 "deforest.m"
                        break;
#line 318 "deforest.m"
                      case (MR_Integer) 1:
#line 315 "deforest.m"
                        {
#line 316 "deforest.m"
                          {
#line 316 "deforest.m"
                            transform_hlds__deforest__propagate_conj_constraints_6_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_91_91, transform_hlds__deforest__NonLocals_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__Goals_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
                          }
#line 315 "deforest.m"
                        }
#line 318 "deforest.m"
                        break;
#line 318 "deforest.m"
                    }
#line 321 "deforest.m"
                    {
#line 321 "deforest.m"
                      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
                    }
#line 294 "deforest.m"
                  }
#line 322 "deforest.m"
                  break;
#line 322 "deforest.m"
              }
#line 328 "deforest.m"
              {
#line 328 "deforest.m"
                MR_Word base;
#line 328 "deforest.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 328 "deforest.m"
                *transform_hlds__deforest__GoalExpr_8 = base;
#line 328 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 328 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__ConjType_11));
#line 328 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__Goals_13));
#line 328 "deforest.m"
              }
#line 290 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 290 "deforest.m"
            }
#line 290 "deforest.m"
            break;
#line 290 "deforest.m"
          case (MR_Integer) 3:
#line 330 "deforest.m"
            {
#line 330 "deforest.m"
              MR_Word transform_hlds__deforest__Goals0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 330 "deforest.m"
              MR_Word transform_hlds__deforest__Goals_100;

#line 331 "deforest.m"
              {
#line 331 "deforest.m"
                transform_hlds__deforest__deforest_disj_4_p_0(transform_hlds__deforest__Goals0_99, &transform_hlds__deforest__Goals_100, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
              }
#line 332 "deforest.m"
              {
#line 332 "deforest.m"
                MR_Word base;
#line 332 "deforest.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "deforest.m"
                *transform_hlds__deforest__GoalExpr_8 = base;
#line 332 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 332 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_100));
#line 332 "deforest.m"
              }
#line 330 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 330 "deforest.m"
            }
#line 290 "deforest.m"
            break;
#line 290 "deforest.m"
          case (MR_Integer) 4:
#line 344 "deforest.m"
            {
#line 344 "deforest.m"
              MR_Word transform_hlds__deforest__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 344 "deforest.m"
              MR_Word transform_hlds__deforest__CanFail_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
#line 344 "deforest.m"
              MR_Word transform_hlds__deforest__Cases0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 3)));
#line 344 "deforest.m"
              MR_Word transform_hlds__deforest__Cases_30;

#line 345 "deforest.m"
              {
#line 345 "deforest.m"
                transform_hlds__deforest__deforest_cases_5_p_0(transform_hlds__deforest__Var_27, transform_hlds__deforest__Cases0_29, &transform_hlds__deforest__Cases_30, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
              }
#line 346 "deforest.m"
              {
#line 346 "deforest.m"
                MR_Word base;
#line 346 "deforest.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 346 "deforest.m"
                *transform_hlds__deforest__GoalExpr_8 = base;
#line 346 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 346 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Var_27));
#line 346 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__CanFail_28));
#line 346 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__deforest__Cases_30));
#line 346 "deforest.m"
              }
#line 344 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 344 "deforest.m"
            }
#line 290 "deforest.m"
            break;
#line 290 "deforest.m"
          case (MR_Integer) 5:
#line 352 "deforest.m"
            {
#line 352 "deforest.m"
              MR_Word transform_hlds__deforest__Reason_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 352 "deforest.m"
              MR_Word transform_hlds__deforest__SubGoal0_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
#line 352 "deforest.m"
              MR_Word transform_hlds__deforest__SubGoal_103;
#line 354 "deforest.m"
              MR_Word transform_hlds__deforest__FGT_35;
#line 354 "deforest.m"
              MR_Word transform_hlds__deforest__V_34_34;

#line 354 "deforest.m"
              transform_hlds__deforest__succeeded = ((((MR_tag((MR_Word) transform_hlds__deforest__Reason_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Reason_33, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 354 "deforest.m"
              if (transform_hlds__deforest__succeeded)
#line 354 "deforest.m"
                {
#line 354 "deforest.m"
                  transform_hlds__deforest__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Reason_33, (MR_Integer) 1)));
#line 354 "deforest.m"
                  transform_hlds__deforest__FGT_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Reason_33, (MR_Integer) 2)));
#line 356 "deforest.m"
#line 356 "deforest.m"
                  switch (transform_hlds__deforest__FGT_35) {
#line 356 "deforest.m"
                    default:
#line 356 "deforest.m"
                      transform_hlds__deforest__succeeded = MR_FALSE;
#line 356 "deforest.m"
                      break;
#line 356 "deforest.m"
                    case (MR_Integer) 1:
#line 355 "deforest.m"
                      transform_hlds__deforest__succeeded = MR_TRUE;
#line 356 "deforest.m"
                      break;
#line 356 "deforest.m"
                    case (MR_Integer) 2:
#line 356 "deforest.m"
                      transform_hlds__deforest__succeeded = MR_TRUE;
#line 356 "deforest.m"
                      break;
#line 356 "deforest.m"
                  }
#line 354 "deforest.m"
                }
#line 360 "deforest.m"
              if (transform_hlds__deforest__succeeded)
#line 359 "deforest.m"
                {
#line 359 "deforest.m"
                  transform_hlds__deforest__SubGoal_103 = transform_hlds__deforest__SubGoal0_102;
#line 359 "deforest.m"
                  *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
#line 359 "deforest.m"
                }
#line 360 "deforest.m"
              else
#line 361 "deforest.m"
                {
#line 361 "deforest.m"
                  transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__SubGoal0_102, &transform_hlds__deforest__SubGoal_103, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
                }
#line 363 "deforest.m"
              {
#line 363 "deforest.m"
                MR_Word base;
#line 363 "deforest.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 363 "deforest.m"
                *transform_hlds__deforest__GoalExpr_8 = base;
#line 363 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 363 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Reason_33));
#line 363 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__SubGoal_103));
#line 363 "deforest.m"
              }
#line 352 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 352 "deforest.m"
            }
#line 290 "deforest.m"
            break;
#line 290 "deforest.m"
          case (MR_Integer) 6:
#line 334 "deforest.m"
            {
#line 334 "deforest.m"
              MR_Word transform_hlds__deforest__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
#line 334 "deforest.m"
              MR_Word transform_hlds__deforest__Cond0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
#line 334 "deforest.m"
              MR_Word transform_hlds__deforest__Then0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 3)));
#line 334 "deforest.m"
              MR_Word transform_hlds__deforest__Else0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 4)));
#line 334 "deforest.m"
              MR_Word transform_hlds__deforest__Cond_24;
#line 334 "deforest.m"
              MR_Word transform_hlds__deforest__Then_25;
#line 334 "deforest.m"
              MR_Word transform_hlds__deforest__Else_26;
#line 334 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_74_74;
#line 334 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_75_75;
#line 334 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76;
#line 334 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77;
#line 334 "deforest.m"
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_78_78;
#line 334 "deforest.m"
              MR_Word transform_hlds__deforest__InstMap0_101;

#line 335 "deforest.m"
              {
#line 335 "deforest.m"
                transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__InstMap0_101);
              }
#line 336 "deforest.m"
              {
#line 336 "deforest.m"
                transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Cond0_21, &transform_hlds__deforest__Cond_24, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_74_74);
              }
#line 337 "deforest.m"
              {
#line 337 "deforest.m"
                transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Cond_24, transform_hlds__deforest__STATE_VARIABLE_PDInfo_74_74, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_75_75);
              }
#line 338 "deforest.m"
              {
#line 338 "deforest.m"
                transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Then0_22, &transform_hlds__deforest__Then_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_75_75, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76);
              }
#line 339 "deforest.m"
              {
#line 339 "deforest.m"
                transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_101, transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77);
              }
#line 340 "deforest.m"
              {
#line 340 "deforest.m"
                transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Else0_23, &transform_hlds__deforest__Else_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_78_78);
              }
#line 341 "deforest.m"
              {
#line 341 "deforest.m"
                transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_101, transform_hlds__deforest__STATE_VARIABLE_PDInfo_78_78, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
              }
#line 342 "deforest.m"
              {
#line 342 "deforest.m"
                MR_Word base;
#line 342 "deforest.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 342 "deforest.m"
                *transform_hlds__deforest__GoalExpr_8 = base;
#line 342 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 342 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Vars_20));
#line 342 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__Cond_24));
#line 342 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__deforest__Then_25));
#line 342 "deforest.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__deforest__Else_26));
#line 342 "deforest.m"
              }
#line 334 "deforest.m"
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
#line 334 "deforest.m"
            }
#line 290 "deforest.m"
            break;
#line 290 "deforest.m"
          case (MR_Integer) 7:
#line 376 "deforest.m"
            {
#line 378 "deforest.m"
              {
#line 378 "deforest.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforest_goal_expr\'/6", (MR_String) "shorthand");
#line 378 "deforest.m"
                return;
              }
#line 376 "deforest.m"
            }
#line 290 "deforest.m"
            break;
#line 290 "deforest.m"
        }
#line 290 "deforest.m"
        break;
#line 290 "deforest.m"
    }
#line 290 "deforest.m"
  }
#line 285 "deforest.m"
}

#line 277 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_goal_4_p_0(
#line 277 "deforest.m"
  MR_Word transform_hlds__deforest__Goal0_5,
#line 277 "deforest.m"
  MR_Word * transform_hlds__deforest__Goal_6,
#line 277 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_12,
#line 277 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_13)
#line 277 "deforest.m"
{
#line 280 "deforest.m"
  {
#line 280 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 280 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_5, (MR_Integer) 0)));
#line 280 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_5, (MR_Integer) 1)));
#line 280 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr_10;
#line 280 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_11;

#line 282 "deforest.m"
    {
#line 282 "deforest.m"
      transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_8, &transform_hlds__deforest__GoalExpr_10, transform_hlds__deforest__GoalInfo0_9, &transform_hlds__deforest__GoalInfo_11, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_12, transform_hlds__deforest__STATE_VARIABLE_PDInfo_13);
    }
#line 283 "deforest.m"
    {
#line 283 "deforest.m"
      MR_Word base;
#line 283 "deforest.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "deforest.m"
      *transform_hlds__deforest__Goal_6 = base;
#line 283 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_10));
#line 283 "deforest.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_11));
#line 283 "deforest.m"
    }
#line 280 "deforest.m"
  }
#line 277 "deforest.m"
}

#line 191 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforest_proc_3_p_0(
#line 191 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_4,
#line 191 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
#line 191 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9)
#line 191 "deforest.m"
{
#line 199 "deforest.m"
  {
#line 199 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__PredProcId_4, (MR_Integer) 0)));
#line 199 "deforest.m"
    MR_Integer transform_hlds__deforest__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__PredProcId_4, (MR_Integer) 1)));
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_23;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__SimplifyTasks_24;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__Changed_25;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_27_32;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PredInfo_31_36;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_32_37;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_39;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_35_40;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_37_42;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_38_43;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_39_44;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_45;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_44_49;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_50;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_46_51;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_47_52;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_67_72;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_68_73;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr0_89;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo0_90;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__GoalExpr_91;
#line 199 "deforest.m"
    MR_Word transform_hlds__deforest__GoalInfo_92;
#line 272 "deforest.m"
    MR_Integer transform_hlds__deforest__V_6_6;
#line 273 "deforest.m"
    MR_Integer transform_hlds__deforest__V_7_7;

#line 201 "deforest.m"
    {
#line 201 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_27_32);
    }
#line 203 "deforest.m"
    {
#line 203 "deforest.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Deforesting ", transform_hlds__deforest__PredId_15, transform_hlds__deforest__ProcId_16, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_27_32);
    }
#line 206 "deforest.m"
    {
#line 206 "deforest.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_27_32, transform_hlds__deforest__PredId_15, transform_hlds__deforest__ProcId_16, &transform_hlds__deforest__STATE_VARIABLE_PredInfo_31_36, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_32_37);
    }
#line 208 "deforest.m"
    {
#line 208 "deforest.m"
      transform_hlds__pd_info__pd_info_init_unfold_info_5_p_0(transform_hlds__deforest__PredProcId_4, transform_hlds__deforest__STATE_VARIABLE_PredInfo_31_36, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_32_37, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_39);
    }
#line 210 "deforest.m"
    {
#line 210 "deforest.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_32_37, &transform_hlds__deforest__STATE_VARIABLE_Goal_35_40);
    }
#line 213 "deforest.m"
    {
#line 213 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_27_32, &transform_hlds__deforest__Globals_23);
    }
#line 214 "deforest.m"
    {
#line 214 "deforest.m"
      check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, transform_hlds__deforest__Globals_23, &transform_hlds__deforest__SimplifyTasks_24);
    }
#line 215 "deforest.m"
    {
#line 215 "deforest.m"
      transform_hlds__pd_util__pd_simplify_goal_5_p_0(transform_hlds__deforest__SimplifyTasks_24, transform_hlds__deforest__STATE_VARIABLE_Goal_35_40, &transform_hlds__deforest__STATE_VARIABLE_Goal_37_42, transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_39, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_38_43);
    }
#line 216 "deforest.m"
    {
#line 216 "deforest.m"
      transform_hlds__pd_util__propagate_constraints_4_p_0(transform_hlds__deforest__STATE_VARIABLE_Goal_37_42, &transform_hlds__deforest__STATE_VARIABLE_Goal_39_44, transform_hlds__deforest__STATE_VARIABLE_PDInfo_38_43, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_45);
    }
#line 218 "deforest.m"
    {
#line 218 "deforest.m"
      transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_45, (MR_String) "after constraints\n", transform_hlds__deforest__STATE_VARIABLE_Goal_39_44);
    }
#line 281 "deforest.m"
    transform_hlds__deforest__GoalExpr0_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_39_44, (MR_Integer) 0)));
#line 281 "deforest.m"
    transform_hlds__deforest__GoalInfo0_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_39_44, (MR_Integer) 1)));
#line 282 "deforest.m"
    {
#line 282 "deforest.m"
      transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_89, &transform_hlds__deforest__GoalExpr_91, transform_hlds__deforest__GoalInfo0_90, &transform_hlds__deforest__GoalInfo_92, transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_45, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_50);
    }
#line 283 "deforest.m"
    {
#line 283 "deforest.m"
      transform_hlds__deforest__STATE_VARIABLE_Goal_44_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "deforest.m"
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_44_49, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_91));
#line 283 "deforest.m"
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_44_49, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_92));
#line 283 "deforest.m"
    }
#line 221 "deforest.m"
    {
#line 221 "deforest.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_50, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_46_51);
    }
#line 222 "deforest.m"
    {
#line 222 "deforest.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__deforest__STATE_VARIABLE_Goal_44_49, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_46_51, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_47_52);
    }
#line 223 "deforest.m"
    {
#line 223 "deforest.m"
      transform_hlds__pd_info__pd_info_get_changed_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_50, &transform_hlds__deforest__Changed_25);
    }
#line 258 "deforest.m"
#line 258 "deforest.m"
    switch (transform_hlds__deforest__Changed_25) {
#line 258 "deforest.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 258 "deforest.m"
      case (MR_Integer) 0:
#line 259 "deforest.m"
        {
#line 259 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_48_53;
#line 259 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PredInfo_60_81;
#line 259 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_83;

#line 260 "deforest.m"
          {
#line 260 "deforest.m"
            transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_50, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_48_53);
          }
#line 261 "deforest.m"
          {
#line 261 "deforest.m"
            transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_50, &transform_hlds__deforest__STATE_VARIABLE_PredInfo_60_81);
          }
#line 262 "deforest.m"
          {
#line 262 "deforest.m"
            hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__deforest__PredId_15, transform_hlds__deforest__ProcId_16, transform_hlds__deforest__STATE_VARIABLE_PredInfo_60_81, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_47_52, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_48_53, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_83);
          }
#line 264 "deforest.m"
          {
#line 264 "deforest.m"
            transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_83, transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_50, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_67_72);
          }
#line 259 "deforest.m"
        }
#line 258 "deforest.m"
        break;
#line 258 "deforest.m"
      case (MR_Integer) 1:
#line 226 "deforest.m"
        {
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__InstMap0_26;
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__VarTypes_27;
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__InstVarSet_28;
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__RerunDet_29;
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__ProcArgInfo0_30;
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__ProcArgInfo_31;
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_52_57;
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_54_59;
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_55_60;
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_57_62;
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_58_63;
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_64;
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PredInfo_60_65;
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_61_66;
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_62_67;
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_63_68;
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_70;
#line 226 "deforest.m"
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_66_71;

#line 227 "deforest.m"
          {
#line 227 "deforest.m"
            transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_50, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_52_57);
          }
#line 228 "deforest.m"
          {
#line 228 "deforest.m"
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_47_52, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_54_59);
          }
#line 229 "deforest.m"
          {
#line 229 "deforest.m"
            hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_54_59, &transform_hlds__deforest__STATE_VARIABLE_Goal_55_60);
          }
#line 230 "deforest.m"
          {
#line 230 "deforest.m"
            hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_54_59, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_52_57, &transform_hlds__deforest__InstMap0_26);
          }
#line 231 "deforest.m"
          {
#line 231 "deforest.m"
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_54_59, &transform_hlds__deforest__VarTypes_27);
          }
#line 232 "deforest.m"
          {
#line 232 "deforest.m"
            hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_54_59, &transform_hlds__deforest__InstVarSet_28);
          }
#line 233 "deforest.m"
          {
#line 233 "deforest.m"
            check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, transform_hlds__deforest__STATE_VARIABLE_Goal_55_60, &transform_hlds__deforest__STATE_VARIABLE_Goal_57_62, transform_hlds__deforest__VarTypes_27, transform_hlds__deforest__InstVarSet_28, transform_hlds__deforest__InstMap0_26, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_52_57, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_58_63);
          }
#line 235 "deforest.m"
          {
#line 235 "deforest.m"
            transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_58_63, transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_50, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_64);
          }
#line 236 "deforest.m"
          {
#line 236 "deforest.m"
            transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_64, &transform_hlds__deforest__STATE_VARIABLE_PredInfo_60_65);
          }
#line 237 "deforest.m"
          {
#line 237 "deforest.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__deforest__STATE_VARIABLE_Goal_57_62, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_54_59, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_61_66);
          }
#line 238 "deforest.m"
          {
#line 238 "deforest.m"
            hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__deforest__PredId_15, transform_hlds__deforest__ProcId_16, transform_hlds__deforest__STATE_VARIABLE_PredInfo_60_65, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_61_66, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_58_63, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_62_67);
          }
#line 240 "deforest.m"
          {
#line 240 "deforest.m"
            transform_hlds__pd_info__pd_info_get_rerun_det_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_64, &transform_hlds__deforest__RerunDet_29);
          }
#line 248 "deforest.m"
#line 248 "deforest.m"
          switch (transform_hlds__deforest__RerunDet_29) {
#line 248 "deforest.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 248 "deforest.m"
            case (MR_Integer) 0:
#line 249 "deforest.m"
              transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_63_68 = transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_62_67;
#line 248 "deforest.m"
              break;
#line 248 "deforest.m"
            case (MR_Integer) 1:
#line 247 "deforest.m"
              {
#line 247 "deforest.m"
                check_hlds__det_analysis__det_infer_proc_ignore_msgs_4_p_0(transform_hlds__deforest__PredId_15, transform_hlds__deforest__ProcId_16, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_62_67, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_63_68);
              }
#line 248 "deforest.m"
              break;
#line 248 "deforest.m"
          }
#line 253 "deforest.m"
          {
#line 253 "deforest.m"
            transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_64, &transform_hlds__deforest__ProcArgInfo0_30);
          }
#line 254 "deforest.m"
          {
#line 254 "deforest.m"
            transform_hlds__pd_util__get_branch_vars_proc_6_p_0(transform_hlds__deforest__PredProcId_4, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_61_66, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_63_68, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_70, transform_hlds__deforest__ProcArgInfo0_30, &transform_hlds__deforest__ProcArgInfo_31);
          }
#line 256 "deforest.m"
          {
#line 256 "deforest.m"
            transform_hlds__pd_info__pd_info_set_proc_arg_info_3_p_0(transform_hlds__deforest__ProcArgInfo_31, transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_64, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_66_71);
          }
#line 257 "deforest.m"
          {
#line 257 "deforest.m"
            transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_70, transform_hlds__deforest__STATE_VARIABLE_PDInfo_66_71, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_67_72);
          }
#line 226 "deforest.m"
        }
#line 258 "deforest.m"
        break;
#line 258 "deforest.m"
    }
#line 267 "deforest.m"
    {
#line 267 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_67_72, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_68_73);
    }
#line 269 "deforest.m"
    {
#line 269 "deforest.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Finished deforesting ", transform_hlds__deforest__PredId_15, transform_hlds__deforest__ProcId_16, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_68_73);
    }
#line 272 "deforest.m"
    {
#line 272 "deforest.m"
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_67_72, &transform_hlds__deforest__V_6_6);
    }
#line 273 "deforest.m"
    {
#line 273 "deforest.m"
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_67_72, &transform_hlds__deforest__V_7_7);
    }
#line 274 "deforest.m"
    {
#line 274 "deforest.m"
      transform_hlds__pd_info__pd_info_unset_unfold_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_67_72, transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);
    }
#line 199 "deforest.m"
  }
#line 191 "deforest.m"
}

#line 180 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(
#line 180 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_8,
#line 180 "deforest.m"
  MR_Word transform_hlds__deforest__ProcInfo_9,
#line 180 "deforest.m"
  MR_Word * transform_hlds__deforest__ProcInfo_3,
#line 180 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_15,
#line 180 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_16,
#line 180 "deforest.m"
  MR_Word transform_hlds__deforest__UnivProcArgInfo0_11,
#line 180 "deforest.m"
  MR_Word * transform_hlds__deforest__UnivProcArgInfo_12)
#line 180 "deforest.m"
{
#line 185 "deforest.m"
  {
#line 185 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 185 "deforest.m"
    MR_Word transform_hlds__deforest__TypeInfo_18_18;
#line 185 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo0_13;
#line 185 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo_14;
#line 186 "deforest.m"
    MR_Box transform_hlds__deforest__conv0_ProcArgInfo0_13;

#line 184 "deforest.m"
    *transform_hlds__deforest__ProcInfo_3 = transform_hlds__deforest__ProcInfo_9;
#line 11355 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeInfo_18_18 = (MR_Word) &transform_hlds__deforest_scalar_common_2[0];
#line 186 "deforest.m"
    {
#line 186 "deforest.m"
      mercury__univ__det_univ_to_type_2_p_0(transform_hlds__deforest__TypeInfo_18_18, transform_hlds__deforest__UnivProcArgInfo0_11, &transform_hlds__deforest__conv0_ProcArgInfo0_13);
    }
#line 186 "deforest.m"
    transform_hlds__deforest__ProcArgInfo0_13 = ((MR_Word) transform_hlds__deforest__conv0_ProcArgInfo0_13);
#line 187 "deforest.m"
    {
#line 187 "deforest.m"
      transform_hlds__pd_util__get_branch_vars_proc_6_p_0(transform_hlds__deforest__PredProcId_8, transform_hlds__deforest__ProcInfo_9, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_15, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_16, transform_hlds__deforest__ProcArgInfo0_13, &transform_hlds__deforest__ProcArgInfo_14);
    }
#line 189 "deforest.m"
    {
#line 189 "deforest.m"
      mercury__univ__type_to_univ_2_p_1(transform_hlds__deforest__TypeInfo_18_18, ((MR_Box) (transform_hlds__deforest__ProcArgInfo_14)), transform_hlds__deforest__UnivProcArgInfo_12);
    }
#line 185 "deforest.m"
  }
#line 180 "deforest.m"
}

#line 153 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(
#line 153 "deforest.m"
  MR_Word transform_hlds__deforest__PredProcId_4,
#line 153 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_12,
#line 153 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_13)
#line 153 "deforest.m"
{
#line 156 "deforest.m"
  {
#line 156 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 156 "deforest.m"
    MR_Word transform_hlds__deforest__PredInfo_6;
#line 156 "deforest.m"
    MR_Word transform_hlds__deforest__ProcInfo0_7;
#line 156 "deforest.m"
    MR_Word transform_hlds__deforest__Detism0_8;
#line 156 "deforest.m"
    MR_Word transform_hlds__deforest__MaxSolns_10;
#line 159 "deforest.m"
    MR_Word transform_hlds__deforest__V_9_9;

#line 157 "deforest.m"
    {
#line 157 "deforest.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__deforest__PredProcId_4, &transform_hlds__deforest__PredInfo_6, &transform_hlds__deforest__ProcInfo0_7);
    }
#line 158 "deforest.m"
    {
#line 158 "deforest.m"
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__deforest__ProcInfo0_7, &transform_hlds__deforest__Detism0_8);
    }
#line 159 "deforest.m"
    {
#line 159 "deforest.m"
      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__deforest__Detism0_8, &transform_hlds__deforest__V_9_9, &transform_hlds__deforest__MaxSolns_10);
    }
#line 164 "deforest.m"
#line 164 "deforest.m"
    switch (transform_hlds__deforest__MaxSolns_10) {
#line 164 "deforest.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 164 "deforest.m"
      case (MR_Integer) 3:
#line 164 "deforest.m"
      case (MR_Integer) 1:
#line 164 "deforest.m"
      case (MR_Integer) 0:
#line 168 "deforest.m"
        {
#line 168 "deforest.m"
          MR_Word transform_hlds__deforest__ProcInfo_11;

#line 169 "deforest.m"
          {
#line 169 "deforest.m"
            hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0((MR_Integer) 6, transform_hlds__deforest__ProcInfo0_7, &transform_hlds__deforest__ProcInfo_11);
          }
#line 171 "deforest.m"
          {
#line 171 "deforest.m"
            hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__deforest__PredProcId_4, transform_hlds__deforest__PredInfo_6, transform_hlds__deforest__ProcInfo_11, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_13);
          }
#line 168 "deforest.m"
        }
#line 164 "deforest.m"
        break;
#line 164 "deforest.m"
      case (MR_Integer) 2:
#line 161 "deforest.m"
        *transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_13 = transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_12;
#line 164 "deforest.m"
        break;
#line 164 "deforest.m"
    }
#line 156 "deforest.m"
  }
#line 153 "deforest.m"
}

#line 147 "deforest.m"
static MR_bool MR_CALL 
transform_hlds__deforest__deforestation_2_p_0_4(
#line 147 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg)
#line 147 "deforest.m"
{
#line 147 "deforest.m"
  {
#line 147 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 147 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;

#line 147 "deforest.m"
    {
#line 147 "deforest.m"
      transform_hlds__deforest__succeeded = transform_hlds__deforest__IntroducedFrom__pred__deforestation__147__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__closure, (MR_Integer) 4))));
    }
#line 147 "deforest.m"
    return transform_hlds__deforest__succeeded;
#line 147 "deforest.m"
  }
#line 147 "deforest.m"
}

#line 139 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_2_p_0_3(
#line 139 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 139 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 139 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 139 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 139 "deforest.m"
{
#line 139 "deforest.m"
  {
#line 139 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 139 "deforest.m"
    MR_Word transform_hlds__deforest__conv6_STATE_VARIABLE_ModuleInfo_13;

#line 139 "deforest.m"
    {
#line 139 "deforest.m"
      transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv6_STATE_VARIABLE_ModuleInfo_13);
    }
#line 139 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv6_STATE_VARIABLE_ModuleInfo_13));
#line 139 "deforest.m"
  }
#line 139 "deforest.m"
}

#line 123 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_2_p_0_2(
#line 123 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 123 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 123 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 123 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
#line 123 "deforest.m"
{
#line 123 "deforest.m"
  {
#line 123 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 123 "deforest.m"
    MR_Word transform_hlds__deforest__conv4_STATE_VARIABLE_PDInfo_9;

#line 123 "deforest.m"
    {
#line 123 "deforest.m"
      transform_hlds__deforest__deforest_proc_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv4_STATE_VARIABLE_PDInfo_9);
    }
#line 123 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv4_STATE_VARIABLE_PDInfo_9));
#line 123 "deforest.m"
  }
#line 123 "deforest.m"
}

#line 103 "deforest.m"
static void MR_CALL 
transform_hlds__deforest__deforestation_2_p_0_1(
#line 103 "deforest.m"
  MR_Box transform_hlds__deforest__closure_arg,
#line 103 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_1,
#line 103 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_2,
#line 103 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_3,
#line 103 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_4,
#line 103 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_5,
#line 103 "deforest.m"
  MR_Box transform_hlds__deforest__wrapper_arg_6,
#line 103 "deforest.m"
  MR_Box * transform_hlds__deforest__wrapper_arg_7)
#line 103 "deforest.m"
{
#line 103 "deforest.m"
  {
#line 103 "deforest.m"
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
#line 103 "deforest.m"
    MR_Word transform_hlds__deforest__conv2_ProcInfo_3;
#line 103 "deforest.m"
    MR_Word transform_hlds__deforest__conv1_STATE_VARIABLE_ModuleInfo_16;
#line 103 "deforest.m"
    MR_Word transform_hlds__deforest__conv0_UnivProcArgInfo_12;

#line 103 "deforest.m"
    {
#line 103 "deforest.m"
      transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv2_ProcInfo_3, ((MR_Word) transform_hlds__deforest__wrapper_arg_4), &transform_hlds__deforest__conv1_STATE_VARIABLE_ModuleInfo_16, ((MR_Word) transform_hlds__deforest__wrapper_arg_6), &transform_hlds__deforest__conv0_UnivProcArgInfo_12);
    }
#line 103 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv2_ProcInfo_3));
#line 103 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_5 = ((MR_Box) (transform_hlds__deforest__conv1_STATE_VARIABLE_ModuleInfo_16));
#line 103 "deforest.m"
    *transform_hlds__deforest__wrapper_arg_7 = ((MR_Box) (transform_hlds__deforest__conv0_UnivProcArgInfo_12));
#line 103 "deforest.m"
  }
#line 103 "deforest.m"
}

#line 41 "deforest.m"
void MR_CALL 
transform_hlds__deforest__deforestation_2_p_0(
#line 41 "deforest.m"
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_27,
#line 41 "deforest.m"
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_28)
#line 41 "deforest.m"
{
#line 97 "deforest.m"
  {
#line 97 "deforest.m"
    MR_bool transform_hlds__deforest__succeeded;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__TypeInfo_49_49;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__TypeCtorInfo_57_57;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo0_4;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__UnivProcArgInfo0_5;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__Task0_6;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__Task_7;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo_11;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__DepInfo_12;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__DepOrdering_13;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__DepList_14;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__PDInfo0_15;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__PDInfo_16;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__VersionIndex_17;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__Versions_18;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__Globals_19;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__Constraints_20;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_34_34;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_36_36;
#line 97 "deforest.m"
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_37_37;
#line 110 "deforest.m"
    MR_Word transform_hlds__deforest__ProcArgInfo1_10;
#line 106 "deforest.m"
    MR_Word transform_hlds__deforest__UnivProcArgInfo_9;
#line 106 "deforest.m"
    MR_Word transform_hlds__deforest__V_8_8;
#line 107 "deforest.m"
    MR_Box transform_hlds__deforest__conv3_ProcArgInfo1_10;
#line 123 "deforest.m"
    MR_Box transform_hlds__deforest__conv5_PDInfo_16;
#line 134 "deforest.m"
    MR_Word transform_hlds__deforest__V_21_21;
#line 134 "deforest.m"
    MR_Word transform_hlds__deforest__V_22_22;

#line 178 "deforest.m"
    {
#line 178 "deforest.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[0], &transform_hlds__deforest__ProcArgInfo0_4);
    }
#line 11674 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeInfo_49_49 = (MR_Word) &transform_hlds__deforest_scalar_common_2[0];
#line 99 "deforest.m"
    {
#line 99 "deforest.m"
      mercury__univ__type_to_univ_2_p_1(transform_hlds__deforest__TypeInfo_49_49, ((MR_Box) (transform_hlds__deforest__ProcArgInfo0_4)), &transform_hlds__deforest__UnivProcArgInfo0_5);
    }
#line 103 "deforest.m"
    {
#line 103 "deforest.m"
      transform_hlds__deforest__Task0_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 103 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task0_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 103 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task0_6, 1) = ((MR_Box) (&transform_hlds__deforest_scalar_common_2[4]));
#line 103 "deforest.m"
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task0_6, 2) = ((MR_Box) (transform_hlds__deforest__UnivProcArgInfo0_5));
#line 103 "deforest.m"
    }
#line 104 "deforest.m"
    {
#line 104 "deforest.m"
      hlds__passes_aux__process_all_nonimported_procs_update_4_p_0(transform_hlds__deforest__Task0_6, &transform_hlds__deforest__Task_7, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_27, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 106 "deforest.m"
    transform_hlds__deforest__succeeded = ((((MR_tag((MR_Word) transform_hlds__deforest__Task_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 106 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 106 "deforest.m"
      {
#line 106 "deforest.m"
        transform_hlds__deforest__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task_7, (MR_Integer) 1)));
#line 106 "deforest.m"
        transform_hlds__deforest__UnivProcArgInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task_7, (MR_Integer) 2)));
#line 107 "deforest.m"
        {
#line 107 "deforest.m"
          transform_hlds__deforest__succeeded = mercury__univ__univ_to_type_2_p_0(transform_hlds__deforest__TypeInfo_49_49, transform_hlds__deforest__UnivProcArgInfo_9, &transform_hlds__deforest__conv3_ProcArgInfo1_10);
        }
#line 107 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 107 "deforest.m"
          {
#line 107 "deforest.m"
            transform_hlds__deforest__ProcArgInfo1_10 = ((MR_Word) transform_hlds__deforest__conv3_ProcArgInfo1_10);
#line 107 "deforest.m"
            transform_hlds__deforest__succeeded = MR_TRUE;
#line 107 "deforest.m"
          }
#line 106 "deforest.m"
      }
#line 110 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 109 "deforest.m"
      transform_hlds__deforest__ProcArgInfo_11 = transform_hlds__deforest__ProcArgInfo1_10;
#line 110 "deforest.m"
    else
#line 111 "deforest.m"
      {
#line 111 "deforest.m"
        {
#line 111 "deforest.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforestation\'/2", (MR_String) "passes_aux stuffed up");
#line 111 "deforest.m"
          return;
        }
#line 111 "deforest.m"
      }
#line 117 "deforest.m"
    {
#line 117 "deforest.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_34_34);
    }
#line 118 "deforest.m"
    {
#line 118 "deforest.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_34_34, &transform_hlds__deforest__DepInfo_12);
    }
#line 11752 "transform_hlds.deforest.c"
    transform_hlds__deforest__TypeCtorInfo_57_57 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 119 "deforest.m"
    {
#line 119 "deforest.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(transform_hlds__deforest__TypeCtorInfo_57_57, transform_hlds__deforest__DepInfo_12, &transform_hlds__deforest__DepOrdering_13);
    }
#line 120 "deforest.m"
    {
#line 120 "deforest.m"
      mercury__list__condense_2_p_0(transform_hlds__deforest__TypeCtorInfo_57_57, transform_hlds__deforest__DepOrdering_13, &transform_hlds__deforest__DepList_14);
    }
#line 122 "deforest.m"
    {
#line 122 "deforest.m"
      transform_hlds__pd_info__pd_info_init_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_34_34, transform_hlds__deforest__ProcArgInfo_11, &transform_hlds__deforest__PDInfo0_15);
    }
#line 123 "deforest.m"
    {
#line 123 "deforest.m"
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_57_57, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0, (MR_Word) &transform_hlds__deforest_scalar_common_2[5], transform_hlds__deforest__DepList_14, ((MR_Box) (transform_hlds__deforest__PDInfo0_15)), &transform_hlds__deforest__conv5_PDInfo_16);
    }
#line 123 "deforest.m"
    transform_hlds__deforest__PDInfo_16 = ((MR_Word) transform_hlds__deforest__conv5_PDInfo_16);
#line 124 "deforest.m"
    {
#line 124 "deforest.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__PDInfo_16, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_36_36);
    }
#line 125 "deforest.m"
    {
#line 125 "deforest.m"
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_36_36, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_37_37);
    }
#line 126 "deforest.m"
    {
#line 126 "deforest.m"
      transform_hlds__pd_info__pd_info_get_versions_2_p_0(transform_hlds__deforest__PDInfo_16, &transform_hlds__deforest__VersionIndex_17);
    }
#line 128 "deforest.m"
    {
#line 128 "deforest.m"
      mercury__map__keys_2_p_0(transform_hlds__deforest__TypeCtorInfo_57_57, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__deforest__VersionIndex_17, &transform_hlds__deforest__Versions_18);
    }
#line 130 "deforest.m"
    {
#line 130 "deforest.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_37_37, &transform_hlds__deforest__Globals_19);
    }
#line 131 "deforest.m"
    {
#line 131 "deforest.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_19, (MR_Integer) 342, &transform_hlds__deforest__Constraints_20);
    }
#line 133 "deforest.m"
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__Constraints_20 == (MR_Integer) 1);
#line 133 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 133 "deforest.m"
      {
#line 134 "deforest.m"
        transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Versions_18)) == (MR_mktag((MR_Integer) 1)));
#line 134 "deforest.m"
        if (transform_hlds__deforest__succeeded)
#line 134 "deforest.m"
          {
#line 134 "deforest.m"
            transform_hlds__deforest__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Versions_18, (MR_Integer) 0)));
#line 134 "deforest.m"
            transform_hlds__deforest__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Versions_18, (MR_Integer) 1)));
#line 134 "deforest.m"
          }
#line 133 "deforest.m"
      }
#line 149 "deforest.m"
    if (transform_hlds__deforest__succeeded)
#line 139 "deforest.m"
      {
#line 139 "deforest.m"
        MR_Word transform_hlds__deforest__NoWarnGlobals_24;
#line 139 "deforest.m"
        MR_Word transform_hlds__deforest__Specs_25;
#line 139 "deforest.m"
        MR_Word transform_hlds__deforest__FoundErrors_26;
#line 139 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_40_40;
#line 139 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_41_41;
#line 139 "deforest.m"
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42;
#line 139 "deforest.m"
        MR_Word transform_hlds__deforest__V_44_44;
#line 139 "deforest.m"
        MR_Box transform_hlds__deforest__conv7_STATE_VARIABLE_ModuleInfo_40_40;
#line 141 "deforest.m"
        MR_Word transform_hlds__deforest___OptionsToRestore_23;

#line 139 "deforest.m"
        {
#line 139 "deforest.m"
          mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_57_57, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__deforest_scalar_common_2[6], transform_hlds__deforest__Versions_18, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_37_37)), &transform_hlds__deforest__conv7_STATE_VARIABLE_ModuleInfo_40_40);
        }
#line 139 "deforest.m"
        transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_40_40 = ((MR_Word) transform_hlds__deforest__conv7_STATE_VARIABLE_ModuleInfo_40_40);
#line 141 "deforest.m"
        {
#line 141 "deforest.m"
          check_hlds__det_report__disable_det_warnings_3_p_0(&transform_hlds__deforest___OptionsToRestore_23, transform_hlds__deforest__Globals_19, &transform_hlds__deforest__NoWarnGlobals_24);
        }
#line 142 "deforest.m"
        {
#line 142 "deforest.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(transform_hlds__deforest__NoWarnGlobals_24, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_40_40, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_41_41);
        }
#line 143 "deforest.m"
        {
#line 143 "deforest.m"
          check_hlds__det_analysis__determinism_pass_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_41_41, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42, &transform_hlds__deforest__Specs_25);
        }
#line 144 "deforest.m"
        {
#line 144 "deforest.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(transform_hlds__deforest__Globals_19, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_42_42, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_28);
        }
#line 146 "deforest.m"
        {
#line 146 "deforest.m"
          transform_hlds__deforest__FoundErrors_26 = parse_tree__error_util__contains_errors_2_f_0(transform_hlds__deforest__Globals_19, transform_hlds__deforest__Specs_25);
        }
#line 147 "deforest.m"
        {
#line 147 "deforest.m"
          transform_hlds__deforest__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 147 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_44_44, 0) = ((MR_Box) (&transform_hlds__deforest_scalar_common_5[0]));
#line 147 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_44_44, 1) = ((MR_Box) (transform_hlds__deforest__deforestation_2_p_0_4));
#line 147 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 147 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_44_44, 3) = ((MR_Box) (transform_hlds__deforest__FoundErrors_26));
#line 147 "deforest.m"
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__V_44_44, 4) = ((MR_Box) ((MR_Integer) 0));
#line 147 "deforest.m"
        }
#line 147 "deforest.m"
        {
#line 147 "deforest.m"
          mercury__require__expect_4_p_0(transform_hlds__deforest__V_44_44, (MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforestation\'/2", (MR_String) "determinism errors after deforestation");
        }
#line 139 "deforest.m"
      }
#line 149 "deforest.m"
    else
#line 149 "deforest.m"
      *transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_28 = transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_37_37;
#line 97 "deforest.m"
  }
#line 41 "deforest.m"
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
